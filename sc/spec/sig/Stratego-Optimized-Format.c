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
ATerm Assign_1 (ATerm, ATerm w_54 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm i_56 (ATerm));
ATerm Op_2 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm t_54 (ATerm));
ATerm Alt_3 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm Case_4 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm m_54 (ATerm));
ATerm Let_2 (ATerm, ATerm s_58 (ATerm), ATerm t_58 (ATerm));
ATerm Prim_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm Where_1 (ATerm, ATerm w_59 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm u_59 (ATerm), ATerm v_59 (ATerm));
ATerm Build_1 (ATerm, ATerm r_59 (ATerm));
ATerm Thread_1 (ATerm, ATerm n_59 (ATerm));
ATerm All_1 (ATerm, ATerm m_59 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm k_59 (ATerm));
ATerm Cong_2 (ATerm, ATerm i_59 (ATerm), ATerm j_59 (ATerm));
ATerm Path_2 (ATerm, ATerm g_59 (ATerm), ATerm h_59 (ATerm));
ATerm Rec_2 (ATerm, ATerm q_58 (ATerm), ATerm r_58 (ATerm));
ATerm SVar_1 (ATerm, ATerm p_58 (ATerm));
ATerm Call_2 (ATerm, ATerm e_59 (ATerm), ATerm f_59 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm m_58 (ATerm), ATerm n_58 (ATerm));
ATerm GChoice_2 (ATerm, ATerm k_58 (ATerm), ATerm l_58 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm LChoice_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm Choice_2 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm Seq_2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm Test_1 (ATerm, ATerm z_57 (ATerm));
ATerm Not_1 (ATerm, ATerm a_58 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm d_59 (ATerm));
ATerm SDef_3 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm c_77 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm a_48 (ATerm), ATerm b_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm b_65 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm crush_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_65 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_67 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_70 (ATerm), ATerm d_70 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_66 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_77 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_64 (ATerm));
ATerm map_1 (ATerm, ATerm a_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_63 (ATerm));
ATerm Program_1 (ATerm, ATerm o_49 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_49 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_64 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_64 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_64 (ATerm));
ATerm iowrap_4 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm j_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_66 (ATerm));
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
ATerm Assign_1 (ATerm t, ATerm w_54 (ATerm))
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
            t = w_54(t);
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
ATerm BuildDefault_1 (ATerm t, ATerm i_56 (ATerm))
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
            t = i_56(t);
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
ATerm Op_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
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
            t = x_57(t);
            {
              q_15 = t;
              {
                t = not_null(k_15);
                {
                  ATerm u_15 = NULL;
                  t = y_57(t);
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
                                    ATerm a_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, a_0);
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
                                            ATerm b_0 (ATerm t)
                                            {
                                              t = term_q_4;
                                              return(t);
                                            }
                                            t = debug_1(t, b_0);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Continue_1 (ATerm t, ATerm t_54 (ATerm))
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
            t = t_54(t);
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
ATerm Alt_3 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm), ATerm s_54 (ATerm))
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
        ATerm d_24 = NULL,f_24 = NULL;
        ATerm e_24 = NULL;
        t = SSLgetAnnotations(not_null(v_23));
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
        {
          t = not_null(w_23);
          {
            ATerm k_24 = NULL;
            t = q_54(t);
            {
              f_24 = t;
              {
                t = not_null(x_23);
                {
                  ATerm m_24 = NULL;
                  t = r_54(t);
                  {
                    k_24 = t;
                    {
                      t = not_null(y_23);
                      {
                        ATerm o_24 = NULL;
                        t = s_54(t);
                        {
                          m_24 = t;
                          {
                            ATerm p_24 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Alt_3, not_null(f_24), not_null(k_24), not_null(m_24)), not_null(d_24));
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
ATerm Case_4 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm m_54 (ATerm))
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
            ATerm t_25 = NULL;
            t = j_54(t);
            {
              r_25 = t;
              {
                t = not_null(h_25);
                {
                  ATerm v_25 = NULL;
                  t = k_54(t);
                  {
                    t_25 = t;
                    {
                      t = not_null(i_25);
                      {
                        ATerm x_25 = NULL;
                        t = l_54(t);
                        {
                          v_25 = t;
                          {
                            t = not_null(j_25);
                            {
                              ATerm z_25 = NULL;
                              t = m_54(t);
                              {
                                x_25 = t;
                                {
                                  ATerm a_26 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Case_4, not_null(r_25), not_null(t_25), not_null(v_25), not_null(x_25)), not_null(p_25));
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
ATerm Let_2 (ATerm t, ATerm s_58 (ATerm), ATerm t_58 (ATerm))
{
  ATerm o_26 = NULL,x_26 = NULL,y_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_Let_2))
    {
      x_26 = ATgetArgument(o_26, 0);
      y_26 = ATgetArgument(o_26, 1);
      {
        ATerm e_27 = NULL,g_27 = NULL;
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(o_26));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
        {
          t = not_null(x_26);
          {
            ATerm i_27 = NULL;
            t = s_58(t);
            {
              g_27 = t;
              {
                t = not_null(y_26);
                {
                  ATerm k_27 = NULL;
                  t = t_58(t);
                  {
                    i_27 = t;
                    {
                      ATerm n_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(g_27), not_null(i_27)), not_null(e_27));
                      {
                        n_27 = t;
                        if(((k_27 != NULL) && (k_27 != n_27)))
                          _fail(n_27);
                        else
                          k_27 = n_27;
                      }
                      t = not_null(k_27);
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
ATerm Prim_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym_Prim_2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm s_28 = NULL,u_28 = NULL;
        ATerm t_28 = NULL;
        t = SSLgetAnnotations(not_null(l_28));
        {
          t_28 = t;
          if(((s_28 != NULL) && (s_28 != t_28)))
            _fail(t_28);
          else
            s_28 = t_28;
        }
        {
          t = not_null(m_28);
          {
            ATerm w_28 = NULL;
            t = x_59(t);
            {
              u_28 = t;
              {
                t = not_null(n_28);
                {
                  ATerm y_28 = NULL;
                  t = y_59(t);
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
ATerm Where_1 (ATerm t, ATerm w_59 (ATerm))
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
            ATerm s_29 = NULL;
            t = w_59(t);
            {
              q_29 = t;
              {
                ATerm t_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(q_29)), not_null(o_29));
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
ATerm is_int_0 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  t = SSL_is_int(not_null(z_29));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm))
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym_Scope_2))
    {
      j_30 = ATgetArgument(i_30, 0);
      k_30 = ATgetArgument(i_30, 1);
      {
        ATerm o_30 = NULL,q_30 = NULL;
        ATerm p_30 = NULL;
        t = SSLgetAnnotations(not_null(i_30));
        {
          p_30 = t;
          if(((o_30 != NULL) && (o_30 != p_30)))
            _fail(p_30);
          else
            o_30 = p_30;
        }
        {
          t = not_null(j_30);
          {
            ATerm s_30 = NULL;
            t = u_59(t);
            {
              q_30 = t;
              {
                t = not_null(k_30);
                {
                  ATerm w_30 = NULL;
                  t = v_59(t);
                  {
                    s_30 = t;
                    {
                      ATerm x_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_30), not_null(s_30)), not_null(o_30));
                      {
                        x_30 = t;
                        if(((w_30 != NULL) && (w_30 != x_30)))
                          _fail(x_30);
                        else
                          w_30 = x_30;
                      }
                      t = not_null(w_30);
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
ATerm Build_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm o_31 = NULL,p_31 = NULL;
  o_31 = t;
  n_31 :
  if(match_cons(o_31, sym_Build_1))
    {
      p_31 = ATgetArgument(o_31, 0);
      {
        ATerm s_31 = NULL,u_31 = NULL;
        ATerm t_31 = NULL;
        t = SSLgetAnnotations(not_null(o_31));
        {
          t_31 = t;
          if(((s_31 != NULL) && (s_31 != t_31)))
            _fail(t_31);
          else
            s_31 = t_31;
        }
        {
          t = not_null(p_31);
          {
            ATerm w_31 = NULL;
            t = r_59(t);
            {
              u_31 = t;
              {
                ATerm x_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(u_31)), not_null(s_31));
                {
                  x_31 = t;
                  if(((w_31 != NULL) && (w_31 != x_31)))
                    _fail(x_31);
                  else
                    w_31 = x_31;
                }
                t = not_null(w_31);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm k_32 = NULL,l_32 = NULL;
  k_32 = t;
  j_32 :
  if(match_cons(k_32, sym_Thread_1))
    {
      l_32 = ATgetArgument(k_32, 0);
      {
        ATerm o_32 = NULL,q_32 = NULL;
        ATerm p_32 = NULL;
        t = SSLgetAnnotations(not_null(k_32));
        {
          p_32 = t;
          if(((o_32 != NULL) && (o_32 != p_32)))
            _fail(p_32);
          else
            o_32 = p_32;
        }
        {
          t = not_null(l_32);
          {
            ATerm s_32 = NULL;
            t = n_59(t);
            {
              q_32 = t;
              {
                ATerm t_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(q_32)), not_null(o_32));
                {
                  t_32 = t;
                  if(((s_32 != NULL) && (s_32 != t_32)))
                    _fail(t_32);
                  else
                    s_32 = t_32;
                }
                t = not_null(s_32);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm All_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL;
  f_33 = t;
  c_33 :
  if(match_cons(f_33, sym_All_1))
    {
      g_33 = ATgetArgument(f_33, 0);
      {
        ATerm k_33 = NULL,n_33 = NULL;
        ATerm l_33 = NULL;
        t = SSLgetAnnotations(not_null(f_33));
        {
          l_33 = t;
          if(((k_33 != NULL) && (k_33 != l_33)))
            _fail(l_33);
          else
            k_33 = l_33;
        }
        {
          t = not_null(g_33);
          {
            ATerm p_33 = NULL;
            t = m_59(t);
            {
              n_33 = t;
              {
                ATerm q_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(n_33)), not_null(k_33));
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
  ATerm e_34 = NULL,f_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym_Some_1))
    {
      f_34 = ATgetArgument(e_34, 0);
      {
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_34 = NULL,k_34 = NULL;
            ATerm j_34 = NULL;
            t = SSLgetAnnotations(not_null(e_34));
            {
              j_34 = t;
              if(((i_34 != NULL) && (i_34 != j_34)))
                _fail(j_34);
              else
                i_34 = j_34;
            }
            {
              t = not_null(f_34);
              {
                ATerm m_34 = NULL;
                t = m_0(t);
                {
                  k_34 = t;
                  {
                    ATerm n_34 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(k_34)), not_null(i_34));
                    {
                      n_34 = t;
                      if(((m_34 != NULL) && (m_34 != n_34)))
                        _fail(n_34);
                      else
                        m_34 = n_34;
                    }
                    t = not_null(m_34);
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
              ATerm q_34 = NULL,s_34 = NULL;
              ATerm r_34 = NULL;
              t = SSLgetAnnotations(not_null(e_34));
              {
                r_34 = t;
                if(((q_34 != NULL) && (q_34 != r_34)))
                  _fail(r_34);
                else
                  q_34 = r_34;
              }
              {
                t = not_null(f_34);
                {
                  ATerm u_34 = NULL;
                  t = m_0(t);
                  {
                    s_34 = t;
                    {
                      ATerm v_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(s_34)), not_null(q_34));
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
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm One_1 (ATerm t, ATerm k_59 (ATerm))
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
            t = k_59(t);
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
ATerm Cong_2 (ATerm t, ATerm i_59 (ATerm), ATerm j_59 (ATerm))
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
            t = i_59(t);
            {
              o_36 = t;
              {
                t = not_null(i_36);
                {
                  ATerm s_36 = NULL;
                  t = j_59(t);
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
ATerm Path_2 (ATerm t, ATerm g_59 (ATerm), ATerm h_59 (ATerm))
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
            t = g_59(t);
            {
              n_37 = t;
              {
                t = not_null(h_37);
                {
                  ATerm r_37 = NULL;
                  t = h_59(t);
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
ATerm Rec_2 (ATerm t, ATerm q_58 (ATerm), ATerm r_58 (ATerm))
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
            t = q_58(t);
            {
              m_38 = t;
              {
                t = not_null(g_38);
                {
                  ATerm q_38 = NULL;
                  t = r_58(t);
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
ATerm SVar_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm c_39 = NULL,d_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym_SVar_1))
    {
      d_39 = ATgetArgument(c_39, 0);
      {
        ATerm g_39 = NULL,i_39 = NULL;
        ATerm h_39 = NULL;
        t = SSLgetAnnotations(not_null(c_39));
        {
          h_39 = t;
          if(((g_39 != NULL) && (g_39 != h_39)))
            _fail(h_39);
          else
            g_39 = h_39;
        }
        {
          t = not_null(d_39);
          {
            ATerm k_39 = NULL;
            t = p_58(t);
            {
              i_39 = t;
              {
                ATerm l_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(i_39)), not_null(g_39));
                {
                  l_39 = t;
                  if(((k_39 != NULL) && (k_39 != l_39)))
                    _fail(l_39);
                  else
                    k_39 = l_39;
                }
                t = not_null(k_39);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Call_2 (ATerm t, ATerm e_59 (ATerm), ATerm f_59 (ATerm))
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
            t = e_59(t);
            {
              g_40 = t;
              {
                t = not_null(a_40);
                {
                  ATerm k_40 = NULL;
                  t = f_59(t);
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
ATerm LGChoice_2 (ATerm t, ATerm m_58 (ATerm), ATerm n_58 (ATerm))
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  x_40 = t;
  w_40 :
  if(match_cons(x_40, sym_LGChoice_2))
    {
      y_40 = ATgetArgument(x_40, 0);
      z_40 = ATgetArgument(x_40, 1);
      {
        ATerm d_41 = NULL,f_41 = NULL;
        ATerm e_41 = NULL;
        t = SSLgetAnnotations(not_null(x_40));
        {
          e_41 = t;
          if(((d_41 != NULL) && (d_41 != e_41)))
            _fail(e_41);
          else
            d_41 = e_41;
        }
        {
          t = not_null(y_40);
          {
            ATerm h_41 = NULL;
            t = m_58(t);
            {
              f_41 = t;
              {
                t = not_null(z_40);
                {
                  ATerm j_41 = NULL;
                  t = n_58(t);
                  {
                    h_41 = t;
                    {
                      ATerm k_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(f_41), not_null(h_41)), not_null(d_41));
                      {
                        k_41 = t;
                        if(((j_41 != NULL) && (j_41 != k_41)))
                          _fail(k_41);
                        else
                          j_41 = k_41;
                      }
                      t = not_null(j_41);
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
ATerm GChoice_2 (ATerm t, ATerm k_58 (ATerm), ATerm l_58 (ATerm))
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
            t = k_58(t);
            {
              f_42 = t;
              {
                t = not_null(z_41);
                {
                  ATerm j_42 = NULL;
                  t = l_58(t);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm j_58 (ATerm))
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
            t = h_58(t);
            {
              h_43 = t;
              {
                t = not_null(z_42);
                {
                  ATerm l_43 = NULL;
                  t = i_58(t);
                  {
                    j_43 = t;
                    {
                      t = not_null(a_43);
                      {
                        ATerm n_43 = NULL;
                        t = j_58(t);
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
ATerm LChoice_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
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
            t = f_58(t);
            {
              j_44 = t;
              {
                t = not_null(d_44);
                {
                  ATerm n_44 = NULL;
                  t = g_58(t);
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
ATerm Choice_2 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm))
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
            t = d_58(t);
            {
              i_45 = t;
              {
                t = not_null(c_45);
                {
                  ATerm m_45 = NULL;
                  t = e_58(t);
                  {
                    k_45 = t;
                    {
                      ATerm n_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(i_45), not_null(k_45)), not_null(g_45));
                      {
                        n_45 = t;
                        if(((m_45 != NULL) && (m_45 != n_45)))
                          _fail(n_45);
                        else
                          m_45 = n_45;
                      }
                      t = not_null(m_45);
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
ATerm Seq_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
  z_45 = t;
  y_45 :
  if(match_cons(z_45, sym_Seq_2))
    {
      a_46 = ATgetArgument(z_45, 0);
      b_46 = ATgetArgument(z_45, 1);
      {
        ATerm f_46 = NULL,h_46 = NULL;
        ATerm g_46 = NULL;
        t = SSLgetAnnotations(not_null(z_45));
        {
          g_46 = t;
          if(((f_46 != NULL) && (f_46 != g_46)))
            _fail(g_46);
          else
            f_46 = g_46;
        }
        {
          t = not_null(a_46);
          {
            ATerm m_46 = NULL;
            t = b_58(t);
            {
              h_46 = t;
              {
                t = not_null(b_46);
                {
                  ATerm o_46 = NULL;
                  t = c_58(t);
                  {
                    m_46 = t;
                    {
                      ATerm p_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(h_46), not_null(m_46)), not_null(f_46));
                      {
                        p_46 = t;
                        if(((o_46 != NULL) && (o_46 != p_46)))
                          _fail(p_46);
                        else
                          o_46 = p_46;
                      }
                      t = not_null(o_46);
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
ATerm Test_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL;
  e_47 = t;
  d_47 :
  if(match_cons(e_47, sym_Test_1))
    {
      f_47 = ATgetArgument(e_47, 0);
      {
        ATerm i_47 = NULL,k_47 = NULL;
        ATerm j_47 = NULL;
        t = SSLgetAnnotations(not_null(e_47));
        {
          j_47 = t;
          if(((i_47 != NULL) && (i_47 != j_47)))
            _fail(j_47);
          else
            i_47 = j_47;
        }
        {
          t = not_null(f_47);
          {
            ATerm m_47 = NULL;
            t = z_57(t);
            {
              k_47 = t;
              {
                ATerm n_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(k_47)), not_null(i_47));
                {
                  n_47 = t;
                  if(((m_47 != NULL) && (m_47 != n_47)))
                    _fail(n_47);
                  else
                    m_47 = n_47;
                }
                t = not_null(m_47);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Not_1 (ATerm t, ATerm a_58 (ATerm))
{
  ATerm x_47 = NULL,y_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym_Not_1))
    {
      y_47 = ATgetArgument(x_47, 0);
      {
        ATerm d_48 = NULL,f_48 = NULL;
        ATerm e_48 = NULL;
        t = SSLgetAnnotations(not_null(x_47));
        {
          e_48 = t;
          if(((d_48 != NULL) && (d_48 != e_48)))
            _fail(e_48);
          else
            d_48 = e_48;
        }
        {
          t = not_null(y_47);
          {
            ATerm h_48 = NULL;
            t = a_58(t);
            {
              f_48 = t;
              {
                ATerm i_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(f_48)), not_null(d_48));
                {
                  i_48 = t;
                  if(((h_48 != NULL) && (h_48 != i_48)))
                    _fail(i_48);
                  else
                    h_48 = i_48;
                }
                t = not_null(h_48);
              }
            }
          }
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
  ATerm r_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_Fail_0))
    {
      ATerm t_48 = NULL,v_48 = NULL;
      ATerm v_4;
      v_4 = t;
      {
        ATerm u_48 = NULL;
        t = SSLgetAnnotations(not_null(r_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
      }
      t = v_4;
      {
        ATerm w_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(t_48));
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
        t = not_null(v_48);
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
  ATerm e_49 = NULL;
  e_49 = t;
  d_49 :
  if(match_cons(e_49, sym_Id_0))
    {
      ATerm g_49 = NULL,i_49 = NULL;
      ATerm w_4;
      w_4 = t;
      {
        ATerm h_49 = NULL;
        t = SSLgetAnnotations(not_null(e_49));
        {
          h_49 = t;
          if(((g_49 != NULL) && (g_49 != h_49)))
            _fail(h_49);
          else
            g_49 = h_49;
        }
      }
      t = w_4;
      {
        ATerm j_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(g_49));
        {
          j_49 = t;
          if(((i_49 != NULL) && (i_49 != j_49)))
            _fail(j_49);
          else
            i_49 = j_49;
        }
        t = not_null(i_49);
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
                                                                  ATerm e_0 (ATerm t)
                                                                  {
                                                                    t = SVar_1(t, is_string_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, e_0, Nil_0);
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
                                                                                    ATerm f_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, f_0);
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
ATerm SDef_4 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm d_59 (ATerm))
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
            t = a_59(t);
            {
              x_50 = t;
              {
                t = not_null(n_50);
                {
                  ATerm b_51 = NULL;
                  t = b_59(t);
                  {
                    z_50 = t;
                    {
                      t = not_null(o_50);
                      {
                        ATerm d_51 = NULL;
                        t = c_59(t);
                        {
                          b_51 = t;
                          {
                            t = not_null(p_50);
                            {
                              ATerm f_51 = NULL;
                              t = d_59(t);
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
ATerm SDef_3 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm))
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
            t = u_58(t);
            {
              f_52 = t;
              {
                t = not_null(x_51);
                {
                  ATerm j_52 = NULL;
                  t = v_58(t);
                  {
                    h_52 = t;
                    {
                      t = not_null(y_51);
                      {
                        ATerm l_52 = NULL;
                        t = w_58(t);
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
ATerm list_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm t_52 (ATerm t)
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
        t = Cons_2(t, c_77, t_52);
      }
    return(t);
  }
  t = t_52(t);
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
ATerm _2 (ATerm t, ATerm a_48 (ATerm), ATerm b_48 (ATerm))
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
            t = a_48(t);
            {
              i_53 = t;
              {
                t = not_null(c_53);
                {
                  ATerm m_53 = NULL;
                  t = b_48(t);
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
  ATerm p_7;
  p_7 = t;
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
      t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), not_null(v_53)), term_r_7));
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
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  a_54 :
  if(match_cons(b_54, sym__2))
    {
      c_54 = ATgetArgument(b_54, 0);
      d_54 = ATgetArgument(b_54, 1);
      {
        ATerm u_7;
        u_7 = t;
        t = SSL_printnl(not_null(c_54), not_null(d_54));
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
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  i_54 :
  if(match_cons(n_54, sym__2))
    {
      o_54 = ATgetArgument(n_54, 0);
      p_54 = ATgetArgument(n_54, 1);
      {
        t = not_null(o_54);
        {
          ATerm j_1 (ATerm t)
          {
            t = not_null(p_54);
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
ATerm debug_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm v_7;
  v_7 = t;
  {
    ATerm a_55 = NULL,c_55 = NULL;
    ATerm w_7;
    w_7 = t;
    {
      ATerm b_55 = NULL;
      t = r_67(t);
      {
        b_55 = t;
        if(((a_55 != NULL) && (a_55 != b_55)))
          _fail(b_55);
        else
          a_55 = b_55;
      }
    }
    t = w_7;
    {
      ATerm d_55 = NULL;
      d_55 = t;
      if(((c_55 != NULL) && (c_55 != d_55)))
        _fail(d_55);
      else
        c_55 = d_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_55)), not_null(a_55)));
        t = printnl_0(t);
      }
    }
  }
  t = v_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_55 = NULL;
  h_55 = t;
  t = SSL_is_string(not_null(h_55));
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
              ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
              q_55 = t;
              p_55 :
              if(match_cons(q_55, sym_Path_1))
                {
                  r_55 = ATgetArgument(q_55, 0);
                  t = not_null(r_55);
                }
              else
                {
                  if(match_cons(q_55, sym_Var_1))
                    {
                      r_55 = ATgetArgument(q_55, 0);
                      {
                        t = not_null(r_55);
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
                      if(match_cons(q_55, sym_Prefix_2))
                        {
                          r_55 = ATgetArgument(q_55, 0);
                          s_55 = ATgetArgument(q_55, 1);
                          {
                            ATerm x_55 = NULL,z_55 = NULL;
                            ATerm e_8;
                            e_8 = t;
                            {
                              ATerm y_55 = NULL;
                              t = not_null(r_55);
                              {
                                t = eval_config_0(t);
                                {
                                  y_55 = t;
                                  if(((x_55 != NULL) && (x_55 != y_55)))
                                    _fail(y_55);
                                  else
                                    x_55 = y_55;
                                }
                              }
                            }
                            t = e_8;
                            {
                              ATerm a_56 = NULL;
                              t = not_null(s_55);
                              {
                                t = eval_config_0(t);
                                {
                                  a_56 = t;
                                  if(((z_55 != NULL) && (z_55 != a_56)))
                                    _fail(a_56);
                                  else
                                    z_55 = a_56;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(z_55));
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
  ATerm j_56 = NULL;
  j_56 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_8, not_null(j_56));
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
              ATerm l_56 = NULL;
              ATerm m_56 = NULL;
              m_56 = t;
              if(((l_56 != NULL) && (l_56 != m_56)))
                _fail(m_56);
              else
                l_56 = m_56;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_8, not_null(j_56), not_null(l_56));
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
ATerm if_verbose2_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm h_8;
    h_8 = t;
    {
      ATerm q_56 = NULL;
      ATerm r_56 = NULL;
      t = term_i_8;
      {
        t = get_config_0(t);
        {
          r_56 = t;
          if(((q_56 != NULL) && (q_56 != r_56)))
            _fail(r_56);
          else
            q_56 = r_56;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_56), term_j_8);
        t = geq_0(t);
      }
    }
    t = h_8;
    t = b_65(t);
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
  ATerm u_56 = NULL;
  u_56 = t;
  t = SSL_TicksToSeconds(not_null(u_56));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  y_56 :
  if(match_cons(z_56, sym__2))
    {
      a_57 = ATgetArgument(z_56, 0);
      b_57 = ATgetArgument(z_56, 1);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_57), not_null(b_57));
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            t = SSL_addr(not_null(a_57), not_null(b_57));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_71(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
        i_57 = t;
        h_57 :
        if(((ATgetType(i_57) == AT_LIST) && ((ATermList) i_57 != ATempty)))
          {
            j_57 = ATgetFirst((ATermList) i_57);
            k_57 = (ATerm) ATgetNext((ATermList) i_57);
            {
              ATerm n_57 = NULL;
              ATerm o_57 = NULL;
              t = not_null(k_57);
              {
                t = foldr_2(t, o_71, p_71);
                {
                  o_57 = t;
                  if(((n_57 != NULL) && (n_57 != o_57)))
                    _fail(o_57);
                  else
                    n_57 = o_57;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_57), not_null(n_57));
                t = p_71(t);
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
ATerm crush_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm v_57 = NULL;
  ATerm o_58 = NULL;
  v_57 = t;
  {
    ATerm x_58 = NULL;
    ATerm z_58 = NULL,l_59 = NULL,o_59 = NULL;
    t = not_null(v_57);
    {
      x_58 = t;
      {
        t = SSL_explode_term(not_null(x_58));
        {
          z_58 = t;
          u_57 :
          if(match_cons(z_58, sym__2))
            {
              l_59 = ATgetArgument(z_58, 0);
              o_59 = ATgetArgument(z_58, 1);
              if(((o_58 != NULL) && (o_58 != o_59)))
                _fail(o_59);
              else
                o_58 = o_59;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_58);
      t = foldr_2(t, d_73, e_73);
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
ATerm if_verbose1_1 (ATerm t, ATerm a_65 (ATerm))
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
    t = a_65(t);
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
ATerm apply_strategy_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm f_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
  ATerm g_9;
  g_9 = t;
  t = dtime_0(t);
  t = g_9;
  {
    t = b_67(t);
    {
      ATerm h_9;
      h_9 = t;
      {
        ATerm g_62 = NULL;
        t = dtime_0(t);
        {
          g_62 = t;
          if(((f_62 != NULL) && (f_62 != g_62)))
            _fail(g_62);
          else
            f_62 = g_62;
        }
      }
      t = h_9;
      {
        h_62 = t;
        e_62 :
        if(match_cons(h_62, sym__2))
          {
            i_62 = ATgetArgument(h_62, 0);
            j_62 = ATgetArgument(h_62, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_62)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_62))), not_null(j_62));
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
  ATerm p_62 = NULL;
  p_62 = t;
  t = SSL_ReadFromFile(not_null(p_62));
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_70 (ATerm), ATerm d_70 (ATerm))
{
  ATerm u_62 = NULL,w_62 = NULL;
  ATerm i_9;
  i_9 = t;
  {
    ATerm v_62 = NULL;
    t = c_70(t);
    {
      v_62 = t;
      if(((u_62 != NULL) && (u_62 != v_62)))
        _fail(v_62);
      else
        u_62 = v_62;
    }
  }
  t = i_9;
  {
    ATerm x_62 = NULL;
    t = d_70(t);
    {
      x_62 = t;
      if(((w_62 != NULL) && (w_62 != x_62)))
        _fail(x_62);
      else
        w_62 = x_62;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_62), not_null(w_62));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_63 = NULL;
  ATerm j_9;
  j_9 = t;
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          ATerm e_63 = NULL,f_63 = NULL;
          e_63 = t;
          b_63 :
          if(match_cons(e_63, sym_Input_1))
            {
              f_63 = ATgetArgument(e_63, 0);
              if(((d_63 != NULL) && (d_63 != f_63)))
                _fail(f_63);
              else
                d_63 = f_63;
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
          ATerm g_63 = NULL;
          t = term_m_9;
          {
            g_63 = t;
            if(((d_63 != NULL) && (d_63 != g_63)))
              _fail(g_63);
            else
              d_63 = g_63;
          }
        }
      }
  }
  t = j_9;
  {
    ATerm y_1 (ATerm t)
    {
      t = not_null(d_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_63 = NULL;
  n_63 = t;
  m_63 :
  if(match_cons(n_63, sym_Version_0))
    {
      ATerm p_63 = NULL,r_63 = NULL;
      ATerm n_9;
      n_9 = t;
      {
        ATerm q_63 = NULL;
        t = SSLgetAnnotations(not_null(n_63));
        {
          q_63 = t;
          if(((p_63 != NULL) && (p_63 != q_63)))
            _fail(q_63);
          else
            p_63 = q_63;
        }
      }
      t = n_9;
      {
        ATerm s_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_63));
        {
          s_63 = t;
          if(((r_63 != NULL) && (r_63 != s_63)))
            _fail(s_63);
          else
            r_63 = s_63;
        }
        t = not_null(r_63);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_66 (ATerm))
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
  t = z_66(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_63 = NULL;
  x_63 = t;
  t = SSL_table_create(not_null(x_63));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_64 = NULL;
  h_64 = t;
  {
    ATerm s_9;
    s_9 = t;
    {
      t = term_t_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_9, term_u_9, not_null(h_64));
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
  ATerm l_64 = NULL;
  l_64 = t;
  t = SSL_string_to_int(not_null(l_64));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
  t_64 = t;
  r_64 :
  if(match_string(t_64, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(t_64) == AT_LIST) && ((ATermList) t_64 != ATempty)))
        {
          u_64 = ATgetFirst((ATermList) t_64);
          v_64 = (ATerm) ATgetNext((ATermList) t_64);
          s_64 :
          if(((ATgetType(v_64) == AT_LIST) && ((ATermList) v_64 != ATempty)))
            {
              w_64 = ATgetFirst((ATermList) v_64);
              x_64 = (ATerm) ATgetNext((ATermList) v_64);
              {
                ATerm e_65 = NULL;
                ATerm v_9;
                v_9 = t;
                {
                  t = not_null(u_64);
                  t = j_0(t);
                }
                t = v_9;
                {
                  ATerm f_65 = NULL;
                  t = not_null(w_64);
                  {
                    t = k_0(t);
                    {
                      f_65 = t;
                      if(((e_65 != NULL) && (e_65 != f_65)))
                        _fail(f_65);
                      else
                        e_65 = f_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_64)), not_null(e_65));
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
        ATerm w_65 = NULL;
        w_65 = t;
        j_65 :
        if(!(match_string(w_65, "-i")))
          {
            if(!(match_string(w_65, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm z_65 = NULL;
        ATerm y_9;
        y_9 = t;
        {
          ATerm x_65 = NULL;
          ATerm y_65 = NULL;
          y_65 = t;
          if(((x_65 != NULL) && (x_65 != y_65)))
            _fail(y_65);
          else
            x_65 = y_65;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(x_65));
            t = set_config_0(t);
          }
        }
        t = y_9;
        {
          ATerm a_66 = NULL;
          a_66 = t;
          if(((z_65 != NULL) && (z_65 != a_66)))
            _fail(a_66);
          else
            z_65 = a_66;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_65));
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
              ATerm b_66 = NULL;
              b_66 = t;
              m_65 :
              if(!(match_string(b_66, "-o")))
                {
                  if(!(match_string(b_66, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm k_66 = NULL;
              ATerm d_10;
              d_10 = t;
              {
                ATerm d_66 = NULL;
                ATerm e_66 = NULL;
                e_66 = t;
                if(((d_66 != NULL) && (d_66 != e_66)))
                  _fail(e_66);
                else
                  d_66 = e_66;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(d_66));
                  t = set_config_0(t);
                }
              }
              t = d_10;
              {
                ATerm l_66 = NULL;
                l_66 = t;
                if(((k_66 != NULL) && (k_66 != l_66)))
                  _fail(l_66);
                else
                  k_66 = l_66;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_66));
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
                    ATerm m_66 = NULL;
                    m_66 = t;
                    p_65 :
                    if(!(match_string(m_66, "-S")))
                      {
                        if(!(match_string(m_66, "--silent")))
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
                          ATerm r_66 = NULL;
                          r_66 = t;
                          q_65 :
                          if(!(match_string(r_66, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_2 (ATerm t)
                        {
                          ATerm u_66 = NULL;
                          ATerm q_10;
                          q_10 = t;
                          {
                            ATerm s_66 = NULL;
                            ATerm t_66 = NULL;
                            t = string_to_int_0(t);
                            {
                              t_66 = t;
                              if(((s_66 != NULL) && (s_66 != t_66)))
                                _fail(t_66);
                              else
                                s_66 = t_66;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_8, not_null(s_66));
                              t = set_config_0(t);
                            }
                          }
                          t = q_10;
                          {
                            ATerm v_66 = NULL;
                            v_66 = t;
                            if(((u_66 != NULL) && (u_66 != v_66)))
                              _fail(v_66);
                            else
                              u_66 = v_66;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_66));
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
                                ATerm w_66 = NULL;
                                w_66 = t;
                                t_65 :
                                if(!(match_string(w_66, "-v")))
                                  {
                                    if(!(match_string(w_66, "--version")))
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
                                      ATerm x_66 = NULL;
                                      x_66 = t;
                                      u_65 :
                                      if(!(match_string(x_66, "-b")))
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
                                        ATerm y_66 = NULL;
                                        y_66 = t;
                                        v_65 :
                                        if(!(match_string(y_66, "-s")))
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
  ATerm i_67 = NULL;
  i_67 = t;
  t = SSL_table_destroy(not_null(i_67));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_67 = NULL;
  m_67 = t;
  t = SSL_exit(not_null(m_67));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_67 = NULL;
  q_67 = t;
  t = SSL_implode_string(not_null(q_67));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_77 (ATerm))
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
          t = o_77(t);
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
  ATerm f_68 = NULL;
  f_68 = t;
  t = SSL_explode_string(not_null(f_68));
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
ATerm long_description_1 (ATerm t, ATerm a_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm i_68 (ATerm t)
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
        t = Cons_2(t, a_77, i_68);
      }
    return(t);
  }
  t = i_68(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
  r_68 = t;
  o_68 :
  if(((ATgetType(r_68) == AT_LIST) && ((ATermList) r_68 != ATempty)))
    {
      p_68 = ATgetFirst((ATermList) r_68);
      q_68 = (ATerm) ATgetNext((ATermList) r_68);
      {
        ATerm u_68 = NULL;
        t = not_null(q_68);
        {
          ATerm p_11;
          p_11 = t;
          {
            ATerm v_68 = NULL,x_68 = NULL,z_68 = NULL;
            ATerm q_11;
            q_11 = t;
            {
              ATerm w_68 = NULL;
              t = i_0(t);
              {
                w_68 = t;
                if(((v_68 != NULL) && (v_68 != w_68)))
                  _fail(w_68);
                else
                  v_68 = w_68;
              }
            }
            t = q_11;
            {
              ATerm y_68 = NULL;
              t = not_null(p_68);
              {
                t = h_0(t);
                {
                  y_68 = t;
                  if(((x_68 != NULL) && (x_68 != y_68)))
                    _fail(y_68);
                  else
                    x_68 = y_68;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_68)), not_null(x_68));
                {
                  z_68 = t;
                  if(((u_68 != NULL) && (u_68 != z_68)))
                    _fail(z_68);
                  else
                    u_68 = z_68;
                }
              }
            }
          }
          t = p_11;
          {
            ATerm w_2 (ATerm t)
            {
              t = not_null(u_68);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) r_68 == ATempty))
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
ATerm short_description_1 (ATerm t, ATerm z_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm k_69 = NULL,l_69 = NULL;
  k_69 = t;
  j_69 :
  if(match_cons(k_69, sym_Program_1))
    {
      l_69 = ATgetArgument(k_69, 0);
      {
        ATerm o_69 = NULL,q_69 = NULL;
        ATerm p_69 = NULL;
        t = SSLgetAnnotations(not_null(k_69));
        {
          p_69 = t;
          if(((o_69 != NULL) && (o_69 != p_69)))
            _fail(p_69);
          else
            o_69 = p_69;
        }
        {
          t = not_null(l_69);
          {
            ATerm s_69 = NULL;
            t = o_49(t);
            {
              q_69 = t;
              {
                ATerm t_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_69)), not_null(o_69));
                {
                  t_69 = t;
                  if(((s_69 != NULL) && (s_69 != t_69)))
                    _fail(t_69);
                  else
                    s_69 = t_69;
                }
                t = not_null(s_69);
              }
            }
          }
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
  ATerm e_70 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      ATerm f_70 = NULL;
      f_70 = t;
      if(((e_70 != NULL) && (e_70 != f_70)))
        _fail(f_70);
      else
        e_70 = f_70;
      return(t);
    }
    t = Program_1(t, z_2);
    return(t);
  }
  t = option_defined_1(t, y_2);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm g_70 = NULL;
      ATerm h_70 = NULL;
      t = term_v_10;
      {
        ATerm b_3 (ATerm t)
        {
          t = not_null(e_70);
          return(t);
        }
        t = short_description_1(t, b_3);
        {
          t = concat_strings_0(t);
          {
            h_70 = t;
            if(((g_70 != NULL) && (g_70 != h_70)))
              _fail(h_70);
            else
              g_70 = h_70;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATempty, not_null(g_70)));
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
                  ATerm i_70 = NULL;
                  i_70 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_70)), term_x_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_3);
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm k_70 = NULL;
                    ATerm l_70 = NULL;
                    t = term_v_10;
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(e_70);
                        return(t);
                      }
                      t = long_description_1(t, e_3);
                      {
                        t = concat_strings_0(t);
                        {
                          l_70 = t;
                          if(((k_70 != NULL) && (k_70 != l_70)))
                            _fail(l_70);
                          else
                            k_70 = l_70;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_70)), term_y_11));
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
ATerm Undefined_1 (ATerm t, ATerm p_49 (ATerm))
{
  ATerm v_70 = NULL,w_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym_Undefined_1))
    {
      w_70 = ATgetArgument(v_70, 0);
      {
        ATerm z_70 = NULL,b_71 = NULL;
        ATerm a_71 = NULL;
        t = SSLgetAnnotations(not_null(v_70));
        {
          a_71 = t;
          if(((z_70 != NULL) && (z_70 != a_71)))
            _fail(a_71);
          else
            z_70 = a_71;
        }
        {
          t = not_null(w_70);
          {
            ATerm d_71 = NULL;
            t = p_49(t);
            {
              b_71 = t;
              {
                ATerm e_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_71)), not_null(z_70));
                {
                  e_71 = t;
                  if(((d_71 != NULL) && (d_71 != e_71)))
                    _fail(e_71);
                  else
                    d_71 = e_71;
                }
                t = not_null(d_71);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm j_71 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_77, _id);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = Cons_2(t, _id, j_71);
      }
    return(t);
  }
  t = j_71(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_64 (ATerm))
{
  t = fetch_1(t, y_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_71 = NULL;
  q_71 = t;
  n_71 :
  if(match_cons(q_71, sym_Help_0))
    {
      ATerm s_71 = NULL,u_71 = NULL;
      ATerm b_12;
      b_12 = t;
      {
        ATerm t_71 = NULL;
        t = SSLgetAnnotations(not_null(q_71));
        {
          t_71 = t;
          if(((s_71 != NULL) && (s_71 != t_71)))
            _fail(t_71);
          else
            s_71 = t_71;
        }
      }
      t = b_12;
      {
        ATerm v_71 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_71));
        {
          v_71 = t;
          if(((u_71 != NULL) && (u_71 != v_71)))
            _fail(v_71);
          else
            u_71 = v_71;
        }
        t = not_null(u_71);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_85(t);
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
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  b_72 = t;
  a_72 :
  if(match_cons(b_72, sym__2))
    {
      c_72 = ATgetArgument(b_72, 0);
      d_72 = ATgetArgument(b_72, 1);
      t = SSL_table_get(not_null(c_72), not_null(d_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
  k_72 = t;
  j_72 :
  if(match_cons(k_72, sym__3))
    {
      l_72 = ATgetArgument(k_72, 0);
      m_72 = ATgetArgument(k_72, 1);
      n_72 = ATgetArgument(k_72, 2);
      {
        ATerm e_12;
        e_12 = t;
        {
          ATerm r_72 = NULL;
          ATerm s_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_72), not_null(m_72));
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
              s_72 = t;
              if(((r_72 != NULL) && (r_72 != s_72)))
                _fail(s_72);
              else
                r_72 = s_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), not_null(m_72), (ATerm) ATinsert(CheckATermList(not_null(r_72)), not_null(n_72)));
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
ATerm register_usage_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm w_72 = NULL;
  ATerm x_72 = NULL;
  t = term_v_10;
  {
    t = e_64(t);
    {
      x_72 = t;
      if(((w_72 != NULL) && (w_72 != x_72)))
        _fail(x_72);
      else
        w_72 = x_72;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_11, term_t_11, not_null(w_72));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL;
  f_73 = t;
  c_73 :
  if(match_string(f_73, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
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
              t = c_0(t);
            }
            t = h_12;
            {
              ATerm l_73 = NULL;
              t = term_v_10;
              {
                t = d_0(t);
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
ATerm Cons_2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
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
            t = z_59(t);
            {
              n_74 = t;
              {
                t = not_null(h_74);
                {
                  ATerm r_74 = NULL;
                  t = a_60(t);
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
  ATerm c_75 = NULL;
  c_75 = t;
  b_75 :
  if(((ATermList) c_75 == ATempty))
    {
      {
        ATerm e_75 = NULL,g_75 = NULL;
        ATerm m_12;
        m_12 = t;
        {
          ATerm f_75 = NULL;
          t = SSLgetAnnotations(not_null(c_75));
          {
            f_75 = t;
            if(((e_75 != NULL) && (e_75 != f_75)))
              _fail(f_75);
            else
              e_75 = f_75;
          }
        }
        t = m_12;
        {
          ATerm h_75 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_75));
          {
            h_75 = t;
            if(((g_75 != NULL) && (g_75 != h_75)))
              _fail(h_75);
            else
              g_75 = h_75;
          }
          t = not_null(g_75);
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
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
  n_75 = t;
  m_75 :
  if(match_cons(n_75, sym__2))
    {
      o_75 = ATgetArgument(n_75, 0);
      p_75 = ATgetArgument(n_75, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_8, not_null(o_75), not_null(p_75));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm n_12;
  n_12 = t;
  {
    ATerm i_3 (ATerm t)
    {
      t = term_o_12;
      t = c_64(t);
      return(t);
    }
    t = try_1(t, i_3);
  }
  t = n_12;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm x_75 = NULL;
      ATerm p_12;
      p_12 = t;
      {
        ATerm v_75 = NULL;
        ATerm w_75 = NULL;
        w_75 = t;
        if(((v_75 != NULL) && (v_75 != w_75)))
          _fail(w_75);
        else
          v_75 = w_75;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(v_75));
          t = set_config_0(t);
        }
      }
      t = p_12;
      {
        ATerm y_75 = NULL;
        y_75 = t;
        if(((x_75 != NULL) && (x_75 != y_75)))
          _fail(y_75);
        else
          x_75 = y_75;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_75));
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
                t = c_64(t);
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
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
  ATerm u_12;
  u_12 = t;
  {
    ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL;
    h_76 = t;
    d_76 :
    if(match_cons(h_76, sym__3))
      {
        i_76 = ATgetArgument(h_76, 0);
        j_76 = ATgetArgument(h_76, 1);
        k_76 = ATgetArgument(h_76, 2);
        {
          if(((e_76 != NULL) && (e_76 != i_76)))
            _fail(i_76);
          else
            e_76 = i_76;
          {
            if(((f_76 != NULL) && (f_76 != j_76)))
              _fail(j_76);
            else
              f_76 = j_76;
            {
              if(((g_76 != NULL) && (g_76 != k_76)))
                _fail(k_76);
              else
                g_76 = k_76;
              t = SSL_table_put(not_null(e_76), not_null(f_76), not_null(g_76));
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
ATerm parse_options_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm n_76 = NULL;
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
          t = b_64(t);
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
                  ATerm o_76 = NULL;
                  o_76 = t;
                  if(((n_76 != NULL) && (n_76 != o_76)))
                    _fail(o_76);
                  else
                    n_76 = o_76;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_76)), term_i_13));
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
ATerm iowrap_4 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm q_66 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_66(t);
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
      t = q_66(t);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, p_66);
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
                    t = apply_strategy_1(t, n_66);
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
ATerm iowrap_3 (ATerm t, ATerm h_66 (ATerm), ATerm i_66 (ATerm), ATerm j_66 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm q_13;
      q_13 = t;
      {
        ATerm r_76 = NULL;
        ATerm s_76 = NULL;
        t = term_x_8;
        {
          t = get_config_0(t);
          {
            s_76 = t;
            if(((r_76 != NULL) && (r_76 != s_76)))
              _fail(s_76);
            else
              r_76 = s_76;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_7, (ATerm) ATinsert(ATempty, not_null(r_76)));
          t = printnl_0(t);
        }
      }
      t = q_13;
      return(t);
    }
    t = if_verbose2_1(t, r_3);
    return(t);
  }
  t = iowrap_4(t, h_66, i_66, j_66, q_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  t = iowrap_3(t, f_66, g_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_66 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    t = _2(t, _id, c_66);
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
