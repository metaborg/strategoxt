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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
  ATprotectSymbol(sym_Row_2);
  sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
  ATprotectSymbol(sym_Row_3);
  sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
  ATprotectSymbol(sym_Matrix_2);
  sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
  ATprotectSymbol(sym_Matrix_1);
  sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
  ATprotectSymbol(sym_Off_1);
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
ATerm term_t_22;
ATerm term_h_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_v_9;
ATerm term_q_9;
void init_constant_terms (void)
{
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__3, term_e_21, term_f_21, (ATerm) ATempty);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm d_64 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_67 (ATerm), ATerm b_67 (ATerm));
ATerm tboundin_3 (ATerm, ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm crush_3 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm));
ATerm free_vars_3 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_86 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm l_82 (ATerm));
ATerm Inline_0 (ATerm);
ATerm BuildPrim_0 (ATerm);
ATerm BuildBuild_0 (ATerm);
ATerm BuildMatchFusion_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MisMatch_0 (ATerm);
ATerm BMF_0 (ATerm);
ATerm BuildMatch_0 (ATerm);
ATerm NoEffect_0 (ATerm);
ATerm FuseScope_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm));
ATerm alltd_1 (ATerm, ATerm o_88 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_89 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm for_3 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm));
ATerm HdMember_1 (ATerm, ATerm p_79 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm a_88 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm z_64 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm));
ATerm zip_1 (ATerm, ATerm t_83 (ATerm));
ATerm new_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
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
ATerm Optimize_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_73 (ATerm));
ATerm downup_1 (ATerm, ATerm m_86 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm c_66 (ATerm));
ATerm Strategies_1 (ATerm, ATerm n_64 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_64 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm j_91 (ATerm));
ATerm _2 (ATerm, ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_70 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_85 (ATerm), ATerm c_85 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm r_70 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_82 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_68 (ATerm));
ATerm map_1 (ATerm, ATerm t_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_68 (ATerm));
ATerm Program_1 (ATerm, ATerm r_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_56 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_69 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_69 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_67 (ATerm), ATerm g_67 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_69 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_68 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm i_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_70 (ATerm), ATerm c_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm y_69 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Tl_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  o_1 = t;
  n_1 :
  if(((ATgetType(o_1) == AT_LIST) && ((ATermList) o_1 != ATempty)))
    {
      p_1 = ATgetFirst((ATermList) o_1);
      q_1 = (ATerm) ATgetNext((ATermList) o_1);
      t = not_null(q_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  v_1 :
  if(match_cons(w_1, sym__2))
    {
      x_1 = ATgetArgument(w_1, 0);
      y_1 = ATgetArgument(w_1, 1);
      {
        t = not_null(x_1);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm t_6 = t;
            int u_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(u_6);
              }
            else
              {
                t = t_6;
                {
                  ATerm g_7 = t;
                  int h_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_7;
                      i_7 = t;
                      {
                        ATerm a_0 (ATerm t)
                        {
                          t = not_null(y_1);
                          return(t);
                        }
                        t = HdMember_1(t, a_0);
                      }
                      t = i_7;
                      t = Cons_2(t, _id, c_2);
                      LocalPopChoice(h_7);
                    }
                  else
                    {
                      t = g_7;
                      {
                        t = Tl_0(t);
                        t = c_2(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = c_2(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm g_2 = NULL,h_2 = NULL;
  g_2 = t;
  f_2 :
  if(match_cons(g_2, sym_DynamicRules_1))
    {
      h_2 = ATgetArgument(g_2, 0);
      {
        ATerm j_2 = NULL;
        t = not_null(h_2);
        {
          t = d_64(t);
          {
            j_2 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(j_2));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm a_67 (ATerm), ATerm b_67 (ATerm))
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym_Scope_2))
    {
      s_2 = ATgetArgument(r_2, 0);
      t_2 = ATgetArgument(r_2, 1);
      {
        ATerm w_2 = NULL;
        t = not_null(s_2);
        {
          ATerm y_2 = NULL;
          t = a_67(t);
          {
            w_2 = t;
            {
              t = not_null(t_2);
              {
                t = b_67(t);
                {
                  y_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_2), not_null(y_2));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, j_90, h_90);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = DynamicRules_1(t, h_90);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL;
  f_3 = t;
  e_3 :
  if(match_cons(f_3, sym_DynamicRules_1))
    {
      g_3 = ATgetArgument(f_3, 0);
      {
        t = not_null(g_3);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  l_3 :
  if(match_cons(q_3, sym_LRule_1))
    {
      r_3 = ATgetArgument(q_3, 0);
      m_3 :
      if(match_cons(r_3, sym_Rule_3))
        {
          n_3 = ATgetArgument(r_3, 0);
          o_3 = ATgetArgument(r_3, 1);
          p_3 = ATgetArgument(r_3, 2);
          {
            t = not_null(n_3);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(q_3, sym_Scope_2))
        {
          r_3 = ATgetArgument(q_3, 0);
          s_3 = ATgetArgument(q_3, 1);
          t = not_null(r_3);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL;
  c_4 = t;
  b_4 :
  if(match_cons(c_4, sym_Var_1))
    {
      d_4 = ATgetArgument(c_4, 0);
      t = (ATerm) ATinsert(ATempty, not_null(d_4));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
  i_4 = t;
  h_4 :
  if(match_cons(i_4, sym__2))
    {
      j_4 = ATgetArgument(i_4, 0);
      k_4 = ATgetArgument(i_4, 1);
      {
        t = not_null(j_4);
        {
          ATerm o_4 (ATerm t)
          {
            ATerm l_7 = t;
            int o_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_4);
                LocalPopChoice(o_7);
              }
            else
              {
                t = l_7;
                {
                  ATerm c_8 = t;
                  int d_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_0 (ATerm t)
                      {
                        t = not_null(k_4);
                        return(t);
                      }
                      t = HdMember_1(t, b_0);
                      t = o_4(t);
                      LocalPopChoice(d_8);
                    }
                  else
                    {
                      t = c_8;
                      t = Cons_2(t, _id, o_4);
                    }
                }
              }
            return(t);
          }
          t = o_4(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_78(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
        t_4 = t;
        s_4 :
        if(((ATgetType(t_4) == AT_LIST) && ((ATermList) t_4 != ATempty)))
          {
            u_4 = ATgetFirst((ATermList) t_4);
            v_4 = (ATerm) ATgetNext((ATermList) t_4);
            {
              ATerm y_4 = NULL,a_5 = NULL;
              ATerm h_8;
              h_8 = t;
              {
                ATerm z_4 = NULL;
                t = not_null(u_4);
                {
                  t = p_78(t);
                  {
                    z_4 = t;
                    if(((y_4 != NULL) && (y_4 != z_4)))
                      _fail(z_4);
                    else
                      y_4 = z_4;
                  }
                }
              }
              t = h_8;
              {
                ATerm b_5 = NULL;
                t = not_null(v_4);
                {
                  t = foldr_3(t, n_78, o_78, p_78);
                  {
                    b_5 = t;
                    if(((a_5 != NULL) && (a_5 != b_5)))
                      _fail(b_5);
                    else
                      a_5 = b_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_4), not_null(a_5));
                  t = o_78(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm))
{
  ATerm j_5 = NULL;
  ATerm l_5 = NULL;
  j_5 = t;
  {
    ATerm m_5 = NULL;
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
    t = not_null(j_5);
    {
      m_5 = t;
      {
        t = SSL_explode_term(not_null(m_5));
        {
          o_5 = t;
          i_5 :
          if(match_cons(o_5, sym__2))
            {
              p_5 = ATgetArgument(o_5, 0);
              q_5 = ATgetArgument(o_5, 1);
              if(((l_5 != NULL) && (l_5 != q_5)))
                _fail(q_5);
              else
                l_5 = q_5;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(l_5);
      t = foldr_3(t, a_80, b_80, c_80);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_5 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_75(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm n_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_5 = NULL;
              ATerm w_8;
              w_8 = t;
              {
                ATerm w_5 = NULL;
                t = m_75(t);
                {
                  w_5 = t;
                  if(((v_5 != NULL) && (v_5 != w_5)))
                    _fail(w_5);
                  else
                    v_5 = w_5;
                }
              }
              t = w_8;
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = not_null(v_5);
                    return(t);
                  }
                  t = split_2(t, x_5, m_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm e_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = n_75(t, d_0, x_5, e_0);
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, n_0, union_0, _id);
                }
              }
              LocalPopChoice(r_8);
            }
          else
            {
              t = n_8;
              {
                ATerm o_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_0, union_0, x_5);
              }
            }
        }
      }
    return(t);
  }
  t = x_5(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm x_8 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = x_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, p_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_Scope_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm j_6 = NULL;
        ATerm k_6 = NULL,m_6 = NULL;
        ATerm l_6 = NULL;
        t = not_null(g_6);
        {
          t = tvars_0(t);
          {
            l_6 = t;
            if(((k_6 != NULL) && (k_6 != l_6)))
              _fail(l_6);
            else
              k_6 = l_6;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(k_6));
          {
            t = isect_0(t);
            {
              m_6 = t;
              {
                if(((j_6 != NULL) && (j_6 != m_6)))
                  _fail(m_6);
                else
                  j_6 = m_6;
                {
                  ATerm h_9 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm n_6 = NULL;
                      n_6 = t;
                      if(((f_6 != NULL) && (f_6 != n_6)))
                        _fail(n_6);
                      else
                        f_6 = n_6;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = h_9;
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_6), not_null(g_6));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    t = i_86(t);
    t = _all(t, s_6);
    return(t);
  }
  t = s_6(t);
  return(t);
}
ATerm simplify_clean_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      t = CleanupScope_0(t);
      t = try_1(t, FuseScope_0);
      return(t);
    }
    t = try_1(t, r_0);
    return(t);
  }
  t = topdown_1(t, q_0);
  return(t);
}
ATerm simplify_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, s_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  ATerm m_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_7), not_null(a_7)));
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_7), not_null(f_7)));
    return(t);
  }
  b_7 = t;
  v_6 :
  if(match_cons(b_7, sym_Seq_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      f_7 = ATgetArgument(b_7, 1);
      w_6 :
      if(match_cons(f_7, sym_Scope_2))
        {
          z_6 = ATgetArgument(f_7, 0);
          a_7 = ATgetArgument(f_7, 1);
          x_6 :
          if(match_cons(c_7, sym_Scope_2))
            {
              d_7 = ATgetArgument(c_7, 0);
              e_7 = ATgetArgument(c_7, 1);
              {
                ATerm i_9 = t;
                int p_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_7(t);
                    LocalPopChoice(p_9);
                  }
                else
                  {
                    t = i_9;
                    t = n_7(t);
                  }
              }
            }
          else
            t = m_7(t);
        }
      else
        {
          y_6 :
          if(match_cons(c_7, sym_Scope_2))
            {
              d_7 = ATgetArgument(c_7, 0);
              e_7 = ATgetArgument(c_7, 1);
              t = n_7(t);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm InlineDont_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL;
  u_7 = t;
  p_7 :
  if(match_cons(u_7, sym_Let_2))
    {
      v_7 = ATgetArgument(u_7, 0);
      b_8 = ATgetArgument(u_7, 1);
      q_7 :
      if(((ATgetType(v_7) == AT_LIST) && ((ATermList) v_7 != ATempty)))
        {
          w_7 = ATgetFirst((ATermList) v_7);
          a_8 = (ATerm) ATgetNext((ATermList) v_7);
          r_7 :
          if(match_cons(w_7, sym_SDef_3))
            {
              x_7 = ATgetArgument(w_7, 0);
              y_7 = ATgetArgument(w_7, 1);
              z_7 = ATgetArgument(w_7, 2);
              s_7 :
              if(((ATermList) y_7 == ATempty))
                {
                  t_7 :
                  if(((ATermList) a_8 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_q_9), not_null(x_7), (ATerm)ATempty, not_null(z_7))), not_null(b_8));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm g_8 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_82(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = Cons_2(t, _id, g_8);
      }
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym_Let_2))
    {
      u_8 = ATgetArgument(t_8, 0);
      v_8 = ATgetArgument(t_8, 1);
      {
        ATerm y_8 = NULL,z_8 = NULL;
        ATerm o_9 = NULL;
        t = not_null(u_8);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
            a_9 = t;
            o_8 :
            if(((ATgetType(a_9) == AT_LIST) && ((ATermList) a_9 != ATempty)))
              {
                b_9 = ATgetFirst((ATermList) a_9);
                f_9 = (ATerm) ATgetNext((ATermList) a_9);
                p_8 :
                if(match_cons(b_9, sym_SDef_3))
                  {
                    c_9 = ATgetArgument(b_9, 0);
                    d_9 = ATgetArgument(b_9, 1);
                    e_9 = ATgetArgument(b_9, 2);
                    q_8 :
                    if(((ATermList) d_9 == ATempty))
                      {
                        {
                          ATerm n_9 = NULL;
                          t = not_null(v_8);
                          {
                            ATerm u_0 (ATerm t)
                            {
                              ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
                              j_9 = t;
                              k_8 :
                              if(match_cons(j_9, sym_Call_2))
                                {
                                  k_9 = ATgetArgument(j_9, 0);
                                  m_9 = ATgetArgument(j_9, 1);
                                  l_8 :
                                  if(match_cons(k_9, sym_SVar_1))
                                    {
                                      l_9 = ATgetArgument(k_9, 0);
                                      m_8 :
                                      if(((ATermList) m_9 == ATempty))
                                        {
                                          {
                                            if(((c_9 != NULL) && (c_9 != l_9)))
                                              _fail(l_9);
                                            else
                                              c_9 = l_9;
                                            t = not_null(e_9);
                                          }
                                        }
                                      else
                                        _fail(t);
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1(t, u_0);
                            {
                              n_9 = t;
                              {
                                if(((y_8 != NULL) && (y_8 != n_9)))
                                  _fail(n_9);
                                else
                                  y_8 = n_9;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_9)), (ATerm) ATempty), not_null(y_8));
                                  {
                                    ATerm t_9 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = in_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      t = t_9;
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(f_9);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = at_suffix_1(t, t_0);
          {
            o_9 = t;
            if(((z_8 != NULL) && (z_8 != o_9)))
              _fail(o_9);
            else
              z_8 = o_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_8), not_null(y_8));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  c_10 = t;
  w_9 :
  if(match_cons(c_10, sym__2))
    {
      d_10 = ATgetArgument(c_10, 0);
      f_10 = ATgetArgument(c_10, 1);
      x_9 :
      if(match_cons(d_10, sym_Build_1))
        {
          e_10 = ATgetArgument(d_10, 0);
          y_9 :
          if(match_cons(f_10, sym_Where_1))
            {
              g_10 = ATgetArgument(f_10, 0);
              z_9 :
              if(match_cons(g_10, sym_Prim_2))
                {
                  a_10 = ATgetArgument(g_10, 0);
                  b_10 = ATgetArgument(g_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_10), not_null(b_10));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(f_10, sym_Prim_2))
                {
                  g_10 = ATgetArgument(f_10, 0);
                  h_10 = ATgetArgument(f_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_10), not_null(h_10));
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  x_10 = t;
  s_10 :
  if(match_cons(x_10, sym__2))
    {
      y_10 = ATgetArgument(x_10, 0);
      a_11 = ATgetArgument(x_10, 1);
      t_10 :
      if(match_cons(y_10, sym_Build_1))
        {
          z_10 = ATgetArgument(y_10, 0);
          u_10 :
          if(match_cons(a_11, sym_Where_1))
            {
              b_11 = ATgetArgument(a_11, 0);
              v_10 :
              if(match_cons(b_11, sym_Build_1))
                {
                  w_10 = ATgetArgument(b_11, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_10));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(a_11, sym_Build_1))
                {
                  b_11 = ATgetArgument(a_11, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_11));
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  r_11 = t;
  m_11 :
  if(match_cons(r_11, sym__2))
    {
      s_11 = ATgetArgument(r_11, 0);
      w_11 = ATgetArgument(r_11, 1);
      n_11 :
      if(match_cons(s_11, sym_Build_1))
        {
          t_11 = ATgetArgument(s_11, 0);
          o_11 :
          if(match_cons(t_11, sym_Op_2))
            {
              u_11 = ATgetArgument(t_11, 0);
              v_11 = ATgetArgument(t_11, 1);
              p_11 :
              if(match_cons(w_11, sym_Match_1))
                {
                  x_11 = ATgetArgument(w_11, 0);
                  q_11 :
                  if(match_cons(x_11, sym_Op_2))
                    {
                      y_11 = ATgetArgument(x_11, 0);
                      z_11 = ATgetArgument(x_11, 1);
                      {
                        ATerm c_12 = NULL,d_12 = NULL;
                        if(((u_11 != NULL) && (u_11 != y_11)))
                          _fail(y_11);
                        else
                          u_11 = y_11;
                        {
                          if(((c_12 != NULL) && (c_12 != z_11)))
                            _fail(z_11);
                          else
                            c_12 = z_11;
                          {
                            ATerm j_12 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(c_12));
                            {
                              ATerm v_0 (ATerm t)
                              {
                                ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
                                e_12 = t;
                                k_11 :
                                if(match_cons(e_12, sym__2))
                                  {
                                    f_12 = ATgetArgument(e_12, 0);
                                    g_12 = ATgetArgument(e_12, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_12)));
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = zip_1(t, v_0);
                              {
                                j_12 = t;
                                if(((d_12 != NULL) && (d_12 != j_12)))
                                  _fail(j_12);
                                else
                                  d_12 = j_12;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_12)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_11), not_null(v_11))));
                          }
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      if(((q_12 != NULL) && (q_12 != r_12)))
        _fail(r_12);
      else
        q_12 = r_12;
    }
  else
    _fail(t);
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
  a_13 = t;
  v_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      f_13 = ATgetArgument(a_13, 1);
      w_12 :
      if(match_cons(b_13, sym_Build_1))
        {
          c_13 = ATgetArgument(b_13, 0);
          x_12 :
          if(match_cons(c_13, sym_Op_2))
            {
              d_13 = ATgetArgument(c_13, 0);
              e_13 = ATgetArgument(c_13, 1);
              y_12 :
              if(match_cons(f_13, sym_Match_1))
                {
                  g_13 = ATgetArgument(f_13, 0);
                  z_12 :
                  if(match_cons(g_13, sym_Op_2))
                    {
                      h_13 = ATgetArgument(g_13, 0);
                      i_13 = ATgetArgument(g_13, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), not_null(h_13));
                        {
                          ATerm u_9 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = u_9;
                        }
                        t = term_v_9;
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm BMF_0 (ATerm t)
{
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
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
            t = BuildMatchFusion_0(t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  t = BuildPrim_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm BuildMatch_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  ATerm j_14 (ATerm t)
  {
    ATerm g_14 = NULL;
    ATerm h_14 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), not_null(y_13));
    {
      t = BMF_0(t);
      {
        h_14 = t;
        if(((g_14 != NULL) && (g_14 != h_14)))
          _fail(h_14);
        else
          g_14 = h_14;
      }
    }
    t = not_null(g_14);
    return(t);
  }
  w_13 = t;
  s_13 :
  if(match_cons(w_13, sym_Seq_2))
    {
      x_13 = ATgetArgument(w_13, 0);
      y_13 = ATgetArgument(w_13, 1);
      t_13 :
      if(match_cons(y_13, sym_Seq_2))
        {
          u_13 = ATgetArgument(y_13, 0);
          v_13 = ATgetArgument(y_13, 1);
          {
            ATerm o_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_14 = NULL;
                ATerm d_14 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), not_null(u_13));
                {
                  t = BMF_0(t);
                  {
                    d_14 = t;
                    if(((c_14 != NULL) && (c_14 != d_14)))
                      _fail(d_14);
                    else
                      c_14 = d_14;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_14), not_null(v_13));
                LocalPopChoice(p_10);
              }
            else
              {
                t = o_10;
                t = j_14(t);
              }
          }
        }
      else
        t = j_14(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  x_16 = t;
  n_14 :
  if(match_cons(x_16, sym_Seq_2))
    {
      y_16 = ATgetArgument(x_16, 0);
      a_17 = ATgetArgument(x_16, 1);
      h_16 :
      if(match_cons(y_16, sym_Build_1))
        {
          z_16 = ATgetArgument(y_16, 0);
          i_16 :
          if(match_cons(a_17, sym_Seq_2))
            {
              b_17 = ATgetArgument(a_17, 0);
              d_17 = ATgetArgument(a_17, 1);
              n_16 :
              if(match_cons(b_17, sym_Build_1))
                {
                  c_17 = ATgetArgument(b_17, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_17)), not_null(d_17));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm FuseScope_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  m_17 = t;
  k_17 :
  if(match_cons(m_17, sym_Scope_2))
    {
      n_17 = ATgetArgument(m_17, 0);
      o_17 = ATgetArgument(m_17, 1);
      l_17 :
      if(match_cons(o_17, sym_Scope_2))
        {
          p_17 = ATgetArgument(o_17, 0);
          q_17 = ATgetArgument(o_17, 1);
          {
            ATerm e_18 = NULL;
            ATerm f_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(p_17));
            {
              t = conc_0(t);
              {
                f_18 = t;
                if(((e_18 != NULL) && (e_18 != f_18)))
                  _fail(f_18);
                else
                  e_18 = f_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_18), not_null(q_17));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym_Var_1))
    {
      o_18 = ATgetArgument(n_18, 0);
      t = not_null(o_18);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  u_18 = t;
  s_18 :
  if(match_cons(u_18, sym__2))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      t_18 :
      if(((ATgetType(w_18) == AT_LIST) && ((ATermList) w_18 != ATempty)))
        {
          x_18 = ATgetFirst((ATermList) w_18);
          y_18 = (ATerm) ATgetNext((ATermList) w_18);
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), not_null(y_18));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,b_22 = NULL;
  u_20 = t;
  r_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      s_20 :
      if(((ATgetType(w_20) == AT_LIST) && ((ATermList) w_20 != ATempty)))
        {
          g_21 = ATgetFirst((ATermList) w_20);
          b_22 = (ATerm) ATgetNext((ATermList) w_20);
          t_20 :
          if(match_cons(g_21, sym__2))
            {
              h_21 = ATgetArgument(g_21, 0);
              i_21 = ATgetArgument(g_21, 1);
              {
                ATerm d_22 = NULL;
                if(((v_20 != NULL) && (v_20 != h_21)))
                  _fail(h_21);
                else
                  v_20 = h_21;
                {
                  if(((d_22 != NULL) && (d_22 != i_21)))
                    _fail(i_21);
                  else
                    d_22 = i_21;
                  t = not_null(d_22);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm))
{
  ATerm j_22 = NULL;
  ATerm l_22 = NULL,m_22 = NULL;
  j_22 = t;
  {
    ATerm n_22 = NULL;
    t = not_null(j_22);
    {
      ATerm o_22 = NULL;
      t = o_89(t);
      {
        n_22 = t;
        {
          if(((l_22 != NULL) && (l_22 != n_22)))
            _fail(n_22);
          else
            l_22 = n_22;
          {
            t = p_89(t);
            {
              o_22 = t;
              if(((m_22 != NULL) && (m_22 != o_22)))
                _fail(o_22);
              else
                m_22 = o_22;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), not_null(m_22));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm o_88 (ATerm))
{
  ATerm s_22 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_88(t);
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = _all(t, s_22);
      }
    return(t);
  }
  t = s_22(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym__2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      {
        ATerm l_23 = NULL;
        if(((l_23 != NULL) && (l_23 != i_23)))
          _fail(i_23);
        else
          l_23 = i_23;
      }
    }
  else
    {
      if(match_cons(g_23, sym__3))
        {
          h_23 = ATgetArgument(g_23, 0);
          i_23 = ATgetArgument(g_23, 1);
          j_23 = ATgetArgument(g_23, 2);
          {
            ATerm u_23 = NULL;
            ATerm v_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_23), not_null(i_23));
            {
              t = zip_1(t, _id);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(j_23));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  t = subs_args_0(t);
  {
    b_24 = t;
    a_24 :
    if(match_cons(b_24, sym__2))
      {
        c_24 = ATgetArgument(b_24, 0);
        d_24 = ATgetArgument(b_24, 1);
        {
          t = not_null(d_24);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = not_null(c_24);
                return(t);
              }
              t = SubsVar_2(t, q_89, x_0);
              t = r_89(t);
              return(t);
            }
            t = alltd_1(t, w_0);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm s_89 (ATerm))
{
  t = substitute_2(t, s_89, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  l_24 = t;
  j_24 :
  if(match_cons(l_24, sym__2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      k_24 :
      if(((ATgetType(n_24) == AT_LIST) && ((ATermList) n_24 != ATempty)))
        {
          o_24 = ATgetFirst((ATermList) n_24);
          p_24 = (ATerm) ATgetNext((ATermList) n_24);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_24)), not_null(o_24)), not_null(p_24));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  q_25 = t;
  l_25 :
  if(((ATgetType(q_25) == AT_LIST) && ((ATermList) q_25 != ATempty)))
    {
      r_25 = ATgetFirst((ATermList) q_25);
      c_26 = (ATerm) ATgetNext((ATermList) q_25);
      m_25 :
      if(match_cons(r_25, sym__2))
        {
          a_26 = ATgetArgument(r_25, 0);
          b_26 = ATgetArgument(r_25, 1);
          {
            ATerm g_26 = NULL,h_26 = NULL,n_26 = NULL,t_26 = NULL;
            ATerm e_11;
            e_11 = t;
            {
              ATerm i_26 = NULL;
              ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
              t = not_null(b_26);
              {
                i_26 = t;
                {
                  t = SSL_explode_term(not_null(i_26));
                  {
                    k_26 = t;
                    x_24 :
                    if(match_cons(k_26, sym__2))
                      {
                        l_26 = ATgetArgument(k_26, 0);
                        m_26 = ATgetArgument(k_26, 1);
                        {
                          if(((g_26 != NULL) && (g_26 != l_26)))
                            _fail(l_26);
                          else
                            g_26 = l_26;
                          if(((h_26 != NULL) && (h_26 != m_26)))
                            _fail(m_26);
                          else
                            h_26 = m_26;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = e_11;
            {
              ATerm f_11;
              f_11 = t;
              {
                ATerm o_26 = NULL;
                ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
                t = not_null(a_26);
                {
                  o_26 = t;
                  {
                    t = SSL_explode_term(not_null(o_26));
                    {
                      q_26 = t;
                      j_25 :
                      if(match_cons(q_26, sym__2))
                        {
                          r_26 = ATgetArgument(q_26, 0);
                          s_26 = ATgetArgument(q_26, 1);
                          {
                            if(((g_26 != NULL) && (g_26 != r_26)))
                              _fail(r_26);
                            else
                              g_26 = r_26;
                            if(((n_26 != NULL) && (n_26 != s_26)))
                              _fail(s_26);
                            else
                              n_26 = s_26;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = f_11;
              {
                ATerm u_26 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), not_null(h_26));
                {
                  t = zip_1(t, _id);
                  {
                    u_26 = t;
                    if(((t_26 != NULL) && (t_26 != u_26)))
                      _fail(u_26);
                    else
                      t_26 = u_26;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_26), not_null(c_26));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,o_27 = NULL,p_27 = NULL;
  g_27 = t;
  c_27 :
  if(((ATgetType(g_27) == AT_LIST) && ((ATermList) g_27 != ATempty)))
    {
      h_27 = ATgetFirst((ATermList) g_27);
      p_27 = (ATerm) ATgetNext((ATermList) g_27);
      f_27 :
      if(match_cons(h_27, sym__2))
        {
          i_27 = ATgetArgument(h_27, 0);
          o_27 = ATgetArgument(h_27, 1);
          {
            ATerm r_27 = NULL;
            if(((i_27 != NULL) && (i_27 != o_27)))
              _fail(o_27);
            else
              i_27 = o_27;
            {
              if(((r_27 != NULL) && (r_27 != p_27)))
                _fail(p_27);
              else
                r_27 = p_27;
              t = not_null(r_27);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm t_27 (ATerm t)
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_74(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          t = b_74(t);
          t = t_27(t);
        }
      }
    return(t);
  }
  t = t_27(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm))
{
  t = d_74(t);
  t = while_not_2(t, e_74, f_74);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  w_27 :
  if(((ATgetType(x_27) == AT_LIST) && ((ATermList) x_27 != ATempty)))
    {
      y_27 = ATgetFirst((ATermList) x_27);
      z_27 = (ATerm) ATgetNext((ATermList) x_27);
      {
        t = p_79(t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm c_28 = NULL;
            c_28 = t;
            if(((y_27 != NULL) && (y_27 != c_28)))
              _fail(c_28);
            else
              y_27 = c_28;
            return(t);
          }
          t = fetch_1(t, y_0);
        }
        t = not_null(z_27);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
      i_28 = t;
      g_28 :
      if(match_cons(i_28, sym__2))
        {
          j_28 = ATgetArgument(i_28, 0);
          k_28 = ATgetArgument(i_28, 1);
          {
            t = not_null(j_28);
            {
              ATerm q_28 (ATerm t)
              {
                ATerm l_11 = t;
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(a_12);
                  }
                else
                  {
                    t = l_11;
                    {
                      ATerm b_12 = t;
                      int h_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_0 (ATerm t)
                          {
                            t = not_null(k_28);
                            return(t);
                          }
                          t = HdMember_1(t, z_0);
                          t = q_28(t);
                          LocalPopChoice(h_12);
                        }
                      else
                        {
                          t = b_12;
                          t = Cons_2(t, _id, q_28);
                        }
                    }
                  }
                return(t);
              }
              t = q_28(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm n_28 = NULL;
          n_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(n_28));
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          ATerm i_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_1 (ATerm t)
              {
                ATerm l_12 = t;
                int m_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(m_12);
                  }
                else
                  {
                    t = l_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, d_1);
              LocalPopChoice(k_12);
            }
          else
            {
              t = i_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, a_1, b_1, c_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm s_28 (ATerm t)
  {
    ATerm n_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_88(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = n_12;
        t = _one(t, s_28);
      }
    return(t);
  }
  t = s_28(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym__2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      {
        t = not_null(y_28);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm b_29 = NULL;
            b_29 = t;
            if(((x_28 != NULL) && (x_28 != b_29)))
              _fail(b_29);
            else
              x_28 = b_29;
            return(t);
          }
          t = oncetd_1(t, e_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm h_29 = NULL,i_29 = NULL;
  h_29 = t;
  g_29 :
  if(match_cons(h_29, sym_Var_1))
    {
      i_29 = ATgetArgument(h_29, 0);
      {
        ATerm k_29 = NULL;
        t = not_null(i_29);
        {
          t = z_64(t);
          {
            k_29 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_29));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  f_31 = t;
  e_30 :
  if(match_cons(f_31, sym_Seq_2))
    {
      g_31 = ATgetArgument(f_31, 0);
      i_31 = ATgetArgument(f_31, 1);
      f_30 :
      if(match_cons(g_31, sym_Assign_1))
        {
          h_31 = ATgetArgument(g_31, 0);
          g_30 :
          if(match_cons(h_31, sym_Var_1))
            {
              y_30 = ATgetArgument(h_31, 0);
              h_30 :
              if(match_cons(i_31, sym_Seq_2))
                {
                  j_31 = ATgetArgument(i_31, 0);
                  k_31 = ATgetArgument(i_31, 1);
                  i_30 :
                  if(match_cons(j_31, sym_Build_1))
                    {
                      b_31 = ATgetArgument(j_31, 0);
                      j_30 :
                      if(match_cons(b_31, sym_Var_1))
                        {
                          c_31 = ATgetArgument(b_31, 0);
                          {
                            ATerm q_31 = NULL;
                            if(((y_30 != NULL) && (y_30 != c_31)))
                              _fail(c_31);
                            else
                              y_30 = c_31;
                            {
                              if(((q_31 != NULL) && (q_31 != k_31)))
                                _fail(k_31);
                              else
                                q_31 = k_31;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_30))), not_null(q_31));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(g_31, sym_Build_1))
            {
              h_31 = ATgetArgument(g_31, 0);
              k_30 :
              if(match_cons(i_31, sym_Scope_2))
                {
                  j_31 = ATgetArgument(i_31, 0);
                  k_31 = ATgetArgument(i_31, 1);
                  l_30 :
                  if(match_cons(k_31, sym_Seq_2))
                    {
                      l_31 = ATgetArgument(k_31, 0);
                      o_31 = ATgetArgument(k_31, 1);
                      m_30 :
                      if(match_cons(l_31, sym_Assign_1))
                        {
                          m_31 = ATgetArgument(l_31, 0);
                          n_30 :
                          if(match_cons(m_31, sym_Var_1))
                            {
                              n_31 = ATgetArgument(m_31, 0);
                              {
                                ATerm t_12 = t;
                                int u_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_32 = NULL,v_32 = NULL;
                                    ATerm j_13;
                                    j_13 = t;
                                    {
                                      ATerm u_32 = NULL;
                                      t = not_null(h_31);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), not_null(j_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), (ATerm) ATinsert(ATempty, not_null(n_31)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  u_32 = t;
                                                  if(((t_32 != NULL) && (t_32 != u_32)))
                                                    _fail(u_32);
                                                  else
                                                    t_32 = u_32;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = j_13;
                                    {
                                      ATerm w_32 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm)ATinsert(ATempty, not_null(h_31)), not_null(o_31));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          w_32 = t;
                                          if(((v_32 != NULL) && (v_32 != w_32)))
                                            _fail(w_32);
                                          else
                                            v_32 = w_32;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_32), not_null(v_32)));
                                    }
                                    LocalPopChoice(u_12);
                                  }
                                else
                                  {
                                    t = t_12;
                                    {
                                      ATerm b_33 = NULL,d_33 = NULL;
                                      ATerm k_13;
                                      k_13 = t;
                                      {
                                        ATerm c_33 = NULL;
                                        t = not_null(h_31);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), not_null(j_31));
                                            {
                                              t = in_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), (ATerm) ATinsert(ATempty, not_null(n_31)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    c_33 = t;
                                                    if(((b_33 != NULL) && (b_33 != c_33)))
                                                      _fail(c_33);
                                                    else
                                                      b_33 = c_33;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = k_13;
                                      {
                                        ATerm e_33 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm)ATinsert(ATempty, not_null(h_31)), not_null(o_31));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            e_33 = t;
                                            if(((d_33 != NULL) && (d_33 != e_33)))
                                              _fail(e_33);
                                            else
                                              d_33 = e_33;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_33), not_null(d_33)));
                                      }
                                    }
                                  }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(f_31, sym_Scope_2))
        {
          g_31 = ATgetArgument(f_31, 0);
          i_31 = ATgetArgument(f_31, 1);
          o_30 :
          if(match_cons(i_31, sym_Seq_2))
            {
              j_31 = ATgetArgument(i_31, 0);
              k_31 = ATgetArgument(i_31, 1);
              p_30 :
              if(match_cons(j_31, sym_Assign_1))
                {
                  b_31 = ATgetArgument(j_31, 0);
                  q_30 :
                  if(match_cons(b_31, sym_Var_1))
                    {
                      c_31 = ATgetArgument(b_31, 0);
                      r_30 :
                      if(match_cons(k_31, sym_Seq_2))
                        {
                          l_31 = ATgetArgument(k_31, 0);
                          o_31 = ATgetArgument(k_31, 1);
                          s_30 :
                          if(match_cons(l_31, sym_Assign_2))
                            {
                              m_31 = ATgetArgument(l_31, 0);
                              z_30 = ATgetArgument(l_31, 1);
                              t_30 :
                              if(match_cons(m_31, sym_Var_1))
                                {
                                  n_31 = ATgetArgument(m_31, 0);
                                  u_30 :
                                  if(match_cons(z_30, sym_Var_1))
                                    {
                                      a_31 = ATgetArgument(z_30, 0);
                                      {
                                        ATerm u_31 = NULL,v_31 = NULL,x_31 = NULL;
                                        if(((c_31 != NULL) && (c_31 != a_31)))
                                          _fail(a_31);
                                        else
                                          c_31 = a_31;
                                        {
                                          if(((u_31 != NULL) && (u_31 != o_31)))
                                            _fail(o_31);
                                          else
                                            u_31 = o_31;
                                          {
                                            ATerm l_13;
                                            l_13 = t;
                                            {
                                              ATerm w_31 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(g_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), not_null(g_31));
                                                  {
                                                    t = in_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), (ATerm) ATinsert(ATempty, not_null(n_31)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          w_31 = t;
                                                          if(((v_31 != NULL) && (v_31 != w_31)))
                                                            _fail(w_31);
                                                          else
                                                            v_31 = w_31;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = l_13;
                                            {
                                              ATerm y_31 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), not_null(u_31));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  y_31 = t;
                                                  if(((x_31 != NULL) && (x_31 != y_31)))
                                                    _fail(y_31);
                                                  else
                                                    x_31 = y_31;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), not_null(x_31)));
                                            }
                                          }
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(l_31, sym_Assign_1))
                                {
                                  m_31 = ATgetArgument(l_31, 0);
                                  v_30 :
                                  if(match_cons(m_31, sym_Var_1))
                                    {
                                      n_31 = ATgetArgument(m_31, 0);
                                      {
                                        ATerm d_32 = NULL,f_32 = NULL;
                                        ATerm m_13;
                                        m_13 = t;
                                        {
                                          ATerm e_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(g_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), not_null(g_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), (ATerm) ATinsert(ATempty, not_null(n_31)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      e_32 = t;
                                                      if(((d_32 != NULL) && (d_32 != e_32)))
                                                        _fail(e_32);
                                                      else
                                                        d_32 = e_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = m_13;
                                        {
                                          ATerm g_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(n_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), not_null(o_31));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              g_32 = t;
                                              if(((f_32 != NULL) && (f_32 != g_32)))
                                                _fail(g_32);
                                              else
                                                f_32 = g_32;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_31))), not_null(f_32)));
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                            }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(j_31, sym_Assign_2))
                    {
                      b_31 = ATgetArgument(j_31, 0);
                      d_31 = ATgetArgument(j_31, 1);
                      w_30 :
                      if(match_cons(b_31, sym_Var_1))
                        {
                          c_31 = ATgetArgument(b_31, 0);
                          x_30 :
                          if(match_cons(d_31, sym_Var_1))
                            {
                              e_31 = ATgetArgument(d_31, 0);
                              {
                                ATerm l_32 = NULL,n_32 = NULL;
                                ATerm n_13;
                                n_13 = t;
                                {
                                  ATerm m_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(g_31));
                                  {
                                    t = in_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), (ATerm) ATinsert(ATempty, not_null(c_31)));
                                      {
                                        t = diff_0(t);
                                        {
                                          m_32 = t;
                                          if(((l_32 != NULL) && (l_32 != m_32)))
                                            _fail(m_32);
                                          else
                                            l_32 = m_32;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = n_13;
                                {
                                  ATerm o_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(c_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_31))), not_null(k_31));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      o_32 = t;
                                      if(((n_32 != NULL) && (n_32 != o_32)))
                                        _fail(o_32);
                                      else
                                        n_32 = o_32;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_32), not_null(n_32));
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm HoistLet_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  a_34 = t;
  y_33 :
  if(match_cons(a_34, sym_Seq_2))
    {
      b_34 = ATgetArgument(a_34, 0);
      c_34 = ATgetArgument(a_34, 1);
      z_33 :
      if(match_cons(c_34, sym_Let_2))
        {
          d_34 = ATgetArgument(c_34, 0);
          e_34 = ATgetArgument(c_34, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_34), not_null(e_34)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  k_34 :
  if(match_cons(l_34, sym__2))
    {
      m_34 = ATgetArgument(l_34, 0);
      n_34 = ATgetArgument(l_34, 1);
      {
        t = not_null(m_34);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(n_34);
            return(t);
          }
          t = at_end_1(t, f_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym__2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_34)), not_null(u_34));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  d_35 = t;
  a_35 :
  if(match_cons(d_35, sym__2))
    {
      e_35 = ATgetArgument(d_35, 0);
      h_35 = ATgetArgument(d_35, 1);
      b_35 :
      if(((ATgetType(e_35) == AT_LIST) && ((ATermList) e_35 != ATempty)))
        {
          f_35 = ATgetFirst((ATermList) e_35);
          g_35 = (ATerm) ATgetNext((ATermList) e_35);
          c_35 :
          if(((ATgetType(h_35) == AT_LIST) && ((ATermList) h_35 != ATempty)))
            {
              i_35 = ATgetFirst((ATermList) h_35);
              j_35 = (ATerm) ATgetNext((ATermList) h_35);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_35), not_null(i_35)), (ATerm) ATmakeAppl(sym__2, not_null(g_35), not_null(j_35)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t_35 = t;
  q_35 :
  if(match_cons(t_35, sym__2))
    {
      u_35 = ATgetArgument(t_35, 0);
      v_35 = ATgetArgument(t_35, 1);
      r_35 :
      if(((ATermList) u_35 == ATempty))
        {
          s_35 :
          if(((ATermList) v_35 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm))
{
  ATerm x_35 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_83(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          t = p_83(t);
          {
            t = _2(t, r_83, x_35);
            t = q_83(t);
          }
        }
      }
    return(t);
  }
  t = x_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm t_83 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, t_83);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym_Cong_2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,q_37 = NULL;
        ATerm q_13;
        q_13 = t;
        {
          ATerm w_36 = NULL;
          t = not_null(o_36);
          {
            ATerm z_36 = NULL;
            t = map_1(t, new_0);
            {
              w_36 = t;
              {
                if(((t_36 != NULL) && (t_36 != w_36)))
                  _fail(w_36);
                else
                  t_36 = w_36;
                {
                  t = not_null(t_36);
                  {
                    ATerm a_37 = NULL;
                    ATerm g_1 (ATerm t)
                    {
                      ATerm x_36 = NULL;
                      ATerm y_36 = NULL;
                      y_36 = t;
                      if(((x_36 != NULL) && (x_36 != y_36)))
                        _fail(y_36);
                      else
                        x_36 = y_36;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_36));
                      return(t);
                    }
                    t = map_1(t, g_1);
                    {
                      z_36 = t;
                      {
                        if(((r_36 != NULL) && (r_36 != z_36)))
                          _fail(z_36);
                        else
                          r_36 = z_36;
                        {
                          t = not_null(o_36);
                          {
                            ATerm e_37 = NULL;
                            t = map_1(t, new_0);
                            {
                              a_37 = t;
                              {
                                if(((u_36 != NULL) && (u_36 != a_37)))
                                  _fail(a_37);
                                else
                                  u_36 = a_37;
                                {
                                  t = not_null(u_36);
                                  {
                                    ATerm f_37 = NULL,p_37 = NULL;
                                    ATerm h_1 (ATerm t)
                                    {
                                      ATerm c_37 = NULL;
                                      ATerm d_37 = NULL;
                                      d_37 = t;
                                      if(((c_37 != NULL) && (c_37 != d_37)))
                                        _fail(d_37);
                                      else
                                        c_37 = d_37;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_37));
                                      return(t);
                                    }
                                    t = map_1(t, h_1);
                                    {
                                      e_37 = t;
                                      {
                                        if(((s_36 != NULL) && (s_36 != e_37)))
                                          _fail(e_37);
                                        else
                                          s_36 = e_37;
                                        {
                                          ATerm g_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(u_36));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              g_37 = t;
                                              if(((f_37 != NULL) && (f_37 != g_37)))
                                                _fail(g_37);
                                              else
                                                f_37 = g_37;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_37), not_null(o_36));
                                            {
                                              ATerm i_1 (ATerm t)
                                              {
                                                ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
                                                h_37 = t;
                                                h_36 :
                                                if(match_cons(h_37, sym__2))
                                                  {
                                                    i_37 = ATgetArgument(h_37, 0);
                                                    l_37 = ATgetArgument(h_37, 1);
                                                    i_36 :
                                                    if(match_cons(i_37, sym__2))
                                                      {
                                                        j_37 = ATgetArgument(i_37, 0);
                                                        k_37 = ATgetArgument(i_37, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_37))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_37)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, i_1);
                                              {
                                                p_37 = t;
                                                if(((v_36 != NULL) && (v_36 != p_37)))
                                                  _fail(p_37);
                                                else
                                                  v_36 = p_37;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = q_13;
        {
          ATerm r_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), not_null(u_36));
          {
            t = conc_0(t);
            {
              r_37 = t;
              if(((q_37 != NULL) && (q_37 != r_37)))
                _fail(r_37);
              else
                q_37 = r_37;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_36), not_null(r_36))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_36)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(n_36), not_null(s_36))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  i_38 :
  if(match_cons(j_38, sym_Cong_2))
    {
      k_38 = ATgetArgument(j_38, 0);
      l_38 = ATgetArgument(j_38, 1);
      {
        ATerm o_38 = NULL;
        ATerm s_38 = NULL;
        t = not_null(l_38);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm p_38 = NULL,q_38 = NULL;
            q_38 = t;
            g_38 :
            if(match_cons(q_38, sym_Match_1))
              {
                p_38 = ATgetArgument(q_38, 0);
                t = not_null(p_38);
              }
            else
              {
                if(match_cons(q_38, sym_Id_0))
                  t = term_r_13;
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_1);
          {
            s_38 = t;
            if(((o_38 != NULL) && (o_38 != s_38)))
              _fail(s_38);
            else
              o_38 = s_38;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_38), not_null(o_38)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  y_38 :
  if(match_cons(a_39, sym_Scope_2))
    {
      b_39 = ATgetArgument(a_39, 0);
      c_39 = ATgetArgument(a_39, 1);
      z_38 :
      if(((ATermList) b_39 == ATempty))
        {
          t = not_null(c_39);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  n_39 :
  if(match_cons(a_40, sym_Where_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      o_39 :
      if(match_cons(b_40, sym_Seq_2))
        {
          z_39 = ATgetArgument(b_40, 0);
          v_39 = ATgetArgument(b_40, 1);
          p_39 :
          if(match_cons(z_39, sym_Where_1))
            {
              u_39 = ATgetArgument(z_39, 0);
              q_39 :
              if(match_cons(v_39, sym_Seq_2))
                {
                  w_39 = ATgetArgument(v_39, 0);
                  y_39 = ATgetArgument(v_39, 1);
                  r_39 :
                  if(match_cons(w_39, sym_Build_1))
                    {
                      x_39 = ATgetArgument(w_39, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_39)), not_null(y_39))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(b_40, sym_Where_1))
            {
              z_39 = ATgetArgument(b_40, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(z_39));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(a_40, sym_Test_1))
        {
          b_40 = ATgetArgument(a_40, 0);
          s_39 :
          if(match_cons(b_40, sym_Test_1))
            {
              z_39 = ATgetArgument(b_40, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_39));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(a_40, sym_Not_1))
            {
              b_40 = ATgetArgument(a_40, 0);
              t_39 :
              if(match_cons(b_40, sym_Not_1))
                {
                  z_39 = ATgetArgument(b_40, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_39));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(a_40, sym_LChoice_2))
                {
                  b_40 = ATgetArgument(a_40, 0);
                  c_40 = ATgetArgument(a_40, 1);
                  {
                    if(((b_40 != NULL) && (b_40 != c_40)))
                      _fail(c_40);
                    else
                      b_40 = c_40;
                    t = not_null(b_40);
                  }
                }
              else
                {
                  if(match_cons(a_40, sym_Choice_2))
                    {
                      b_40 = ATgetArgument(a_40, 0);
                      c_40 = ATgetArgument(a_40, 1);
                      {
                        if(((b_40 != NULL) && (b_40 != c_40)))
                          _fail(c_40);
                        else
                          b_40 = c_40;
                        t = not_null(b_40);
                      }
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  l_41 = t;
  h_41 :
  if(match_cons(l_41, sym_LChoice_2))
    {
      m_41 = ATgetArgument(l_41, 0);
      p_41 = ATgetArgument(l_41, 1);
      i_41 :
      if(match_cons(m_41, sym_LChoice_2))
        {
          n_41 = ATgetArgument(m_41, 0);
          o_41 = ATgetArgument(m_41, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_41), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_41), not_null(p_41)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(l_41, sym_Seq_2))
        {
          m_41 = ATgetArgument(l_41, 0);
          p_41 = ATgetArgument(l_41, 1);
          j_41 :
          if(match_cons(m_41, sym_Seq_2))
            {
              n_41 = ATgetArgument(m_41, 0);
              o_41 = ATgetArgument(m_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_41), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_41), not_null(p_41)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(l_41, sym_Choice_2))
            {
              m_41 = ATgetArgument(l_41, 0);
              p_41 = ATgetArgument(l_41, 1);
              k_41 :
              if(match_cons(m_41, sym_Choice_2))
                {
                  n_41 = ATgetArgument(m_41, 0);
                  o_41 = ATgetArgument(m_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(n_41), (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_41), not_null(p_41)));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
  l_43 = t;
  b_43 :
  if(match_cons(l_43, sym_InfixApp_3))
    {
      m_43 = ATgetArgument(l_43, 0);
      i_43 = ATgetArgument(l_43, 1);
      h_43 = ATgetArgument(l_43, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(i_43), (ATerm) ATmakeAppl(sym_Op_2, term_z_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_43)), not_null(m_43))));
    }
  else
    {
      if(match_cons(l_43, sym_BAM_3))
        {
          m_43 = ATgetArgument(l_43, 0);
          i_43 = ATgetArgument(l_43, 1);
          h_43 = ATgetArgument(l_43, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(h_43))), not_null(m_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_43))));
        }
      else
        {
          if(match_cons(l_43, sym_AM_2))
            {
              m_43 = ATgetArgument(l_43, 0);
              i_43 = ATgetArgument(l_43, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_43)));
            }
          else
            {
              if(match_cons(l_43, sym_MA_2))
                {
                  m_43 = ATgetArgument(l_43, 0);
                  i_43 = ATgetArgument(l_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_43)), not_null(i_43));
                }
              else
                {
                  if(match_cons(l_43, sym_BA_2))
                    {
                      m_43 = ATgetArgument(l_43, 0);
                      i_43 = ATgetArgument(l_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_43)), not_null(m_43));
                    }
                  else
                    {
                      if(match_cons(l_43, sym_Lets_2))
                        {
                          m_43 = ATgetArgument(l_43, 0);
                          i_43 = ATgetArgument(l_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(m_43), not_null(i_43));
                        }
                      else
                        {
                          if(match_cons(l_43, sym_LChoices_1))
                            {
                              m_43 = ATgetArgument(l_43, 0);
                              c_43 :
                              if(((ATgetType(m_43) == AT_LIST) && ((ATermList) m_43 != ATempty)))
                                {
                                  j_43 = ATgetFirst((ATermList) m_43);
                                  k_43 = (ATerm) ATgetNext((ATermList) m_43);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(k_43)));
                                }
                              else
                                {
                                  if(((ATermList) m_43 == ATempty))
                                    {
                                      t = term_v_9;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(l_43, sym_Choices_1))
                                {
                                  m_43 = ATgetArgument(l_43, 0);
                                  d_43 :
                                  if(((ATgetType(m_43) == AT_LIST) && ((ATermList) m_43 != ATempty)))
                                    {
                                      j_43 = ATgetFirst((ATermList) m_43);
                                      k_43 = (ATerm) ATgetNext((ATermList) m_43);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(k_43)));
                                    }
                                  else
                                    {
                                      if(((ATermList) m_43 == ATempty))
                                        {
                                          t = term_v_9;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(l_43, sym_Seqs_1))
                                    {
                                      m_43 = ATgetArgument(l_43, 0);
                                      e_43 :
                                      if(((ATgetType(m_43) == AT_LIST) && ((ATermList) m_43 != ATempty)))
                                        {
                                          j_43 = ATgetFirst((ATermList) m_43);
                                          k_43 = (ATerm) ATgetNext((ATermList) m_43);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_43)));
                                        }
                                      else
                                        {
                                          if(((ATermList) m_43 == ATempty))
                                            {
                                              t = term_a_14;
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    _fail(t);
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
  ATerm w_44 = NULL,x_44 = NULL;
  w_44 = t;
  u_44 :
  if(match_cons(w_44, sym_Where_1))
    {
      x_44 = ATgetArgument(w_44, 0);
      v_44 :
      if(match_cons(x_44, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  c_45 = t;
  a_45 :
  if(match_cons(c_45, sym_LChoice_2))
    {
      d_45 = ATgetArgument(c_45, 0);
      e_45 = ATgetArgument(c_45, 1);
      b_45 :
      if(match_cons(e_45, sym_Fail_0))
        t = not_null(d_45);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  i_45 :
  if(match_cons(k_45, sym_LChoice_2))
    {
      l_45 = ATgetArgument(k_45, 0);
      m_45 = ATgetArgument(k_45, 1);
      j_45 :
      if(match_cons(l_45, sym_Fail_0))
        t = not_null(m_45);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  q_45 :
  if(match_cons(s_45, sym_Choice_2))
    {
      t_45 = ATgetArgument(s_45, 0);
      u_45 = ATgetArgument(s_45, 1);
      r_45 :
      if(match_cons(u_45, sym_Fail_0))
        t = not_null(t_45);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  y_45 :
  if(match_cons(a_46, sym_Choice_2))
    {
      b_46 = ATgetArgument(a_46, 0);
      c_46 = ATgetArgument(a_46, 1);
      z_45 :
      if(match_cons(b_46, sym_Fail_0))
        t = not_null(c_46);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm u_46 = NULL,w_46 = NULL,x_46 = NULL;
  u_46 = t;
  s_46 :
  if(match_cons(u_46, sym_Cong_2))
    {
      w_46 = ATgetArgument(u_46, 0);
      x_46 = ATgetArgument(u_46, 1);
      {
        t = not_null(x_46);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm f_47 = NULL;
            f_47 = t;
            r_46 :
            if(!(match_cons(f_47, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, k_1);
        }
        t = term_v_9;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
  k_47 = t;
  i_47 :
  if(match_cons(k_47, sym_Path_2))
    {
      l_47 = ATgetArgument(k_47, 0);
      m_47 = ATgetArgument(k_47, 1);
      j_47 :
      if(match_cons(m_47, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t_47 = t;
  r_47 :
  if(match_cons(t_47, sym_One_1))
    {
      u_47 = ATgetArgument(t_47, 0);
      s_47 :
      if(match_cons(u_47, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm z_47 = NULL,i_48 = NULL;
  z_47 = t;
  x_47 :
  if(match_cons(z_47, sym_Some_1))
    {
      i_48 = ATgetArgument(z_47, 0);
      y_47 :
      if(match_cons(i_48, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  x_48 :
  if(match_cons(z_48, sym_Rec_2))
    {
      a_49 = ATgetArgument(z_48, 0);
      b_49 = ATgetArgument(z_48, 1);
      y_48 :
      if(match_cons(b_49, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  f_49 :
  if(match_cons(h_49, sym_Scope_2))
    {
      i_49 = ATgetArgument(h_49, 0);
      j_49 = ATgetArgument(h_49, 1);
      g_49 :
      if(match_cons(j_49, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  n_49 :
  if(match_cons(p_49, sym_Seq_2))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      o_49 :
      if(match_cons(q_49, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  x_49 = t;
  v_49 :
  if(match_cons(x_49, sym_Not_1))
    {
      y_49 = ATgetArgument(x_49, 0);
      w_49 :
      if(match_cons(y_49, sym_Fail_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  d_50 = t;
  b_50 :
  if(match_cons(d_50, sym_Test_1))
    {
      e_50 = ATgetArgument(d_50, 0);
      c_50 :
      if(match_cons(e_50, sym_Fail_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm b_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(e_14);
    }
  else
    {
      t = b_14;
      {
        ATerm f_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = f_14;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  {
                    ATerm m_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = m_14;
                        {
                          ATerm p_14 = t;
                          int q_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(q_14);
                            }
                          else
                            {
                              t = p_14;
                              {
                                ATerm r_14 = t;
                                int s_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(s_14);
                                  }
                                else
                                  {
                                    t = r_14;
                                    {
                                      ATerm t_14 = t;
                                      int u_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(u_14);
                                        }
                                      else
                                        {
                                          t = t_14;
                                          {
                                            ATerm v_14 = t;
                                            int w_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(w_14);
                                              }
                                            else
                                              {
                                                t = v_14;
                                                {
                                                  ATerm x_14 = t;
                                                  int y_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(y_14);
                                                    }
                                                  else
                                                    {
                                                      t = x_14;
                                                      {
                                                        ATerm z_14 = t;
                                                        int a_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(a_15);
                                                          }
                                                        else
                                                          {
                                                            t = z_14;
                                                            {
                                                              ATerm b_15 = t;
                                                              int c_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(c_15);
                                                                }
                                                              else
                                                                {
                                                                  t = b_15;
                                                                  {
                                                                    ATerm d_15 = t;
                                                                    int e_15 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(e_15);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_15;
                                                                        {
                                                                          ATerm f_15 = t;
                                                                          int g_15 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(g_15);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_15;
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
  ATerm j_50 = NULL,k_50 = NULL;
  j_50 = t;
  h_50 :
  if(match_cons(j_50, sym_Match_1))
    {
      k_50 = ATgetArgument(j_50, 0);
      i_50 :
      if(match_cons(k_50, sym_Wld_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  p_50 = t;
  n_50 :
  if(match_cons(p_50, sym_Where_1))
    {
      q_50 = ATgetArgument(p_50, 0);
      o_50 :
      if(match_cons(q_50, sym_Id_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL;
  v_50 = t;
  t_50 :
  if(match_cons(v_50, sym_All_1))
    {
      w_50 = ATgetArgument(v_50, 0);
      u_50 :
      if(match_cons(w_50, sym_Id_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  z_50 :
  if(match_cons(b_51, sym_Rec_2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      a_51 :
      if(match_cons(d_51, sym_Id_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  j_51 = t;
  h_51 :
  if(match_cons(j_51, sym_Scope_2))
    {
      k_51 = ATgetArgument(j_51, 0);
      l_51 = ATgetArgument(j_51, 1);
      i_51 :
      if(match_cons(l_51, sym_Id_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL;
  r_51 = t;
  p_51 :
  if(match_cons(r_51, sym_LChoice_2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      q_51 :
      if(match_cons(s_51, sym_Id_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
  z_51 = t;
  x_51 :
  if(match_cons(z_51, sym_Seq_2))
    {
      a_52 = ATgetArgument(z_51, 0);
      b_52 = ATgetArgument(z_51, 1);
      y_51 :
      if(match_cons(b_52, sym_Id_0))
        t = not_null(a_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  f_52 :
  if(match_cons(h_52, sym_Seq_2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      g_52 :
      if(match_cons(i_52, sym_Id_0))
        t = not_null(j_52);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  p_52 = t;
  n_52 :
  if(match_cons(p_52, sym_Not_1))
    {
      q_52 = ATgetArgument(p_52, 0);
      o_52 :
      if(match_cons(q_52, sym_Id_0))
        t = term_v_9;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  v_52 = t;
  t_52 :
  if(match_cons(v_52, sym_Test_1))
    {
      w_52 = ATgetArgument(v_52, 0);
      u_52 :
      if(match_cons(w_52, sym_Id_0))
        t = term_a_14;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            {
              ATerm l_15 = t;
              int m_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(m_15);
                }
              else
                {
                  t = l_15;
                  {
                    ATerm n_15 = t;
                    int o_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
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
                              t = I7_0(t);
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
                                    t = I8_0(t);
                                    LocalPopChoice(s_15);
                                  }
                                else
                                  {
                                    t = r_15;
                                    {
                                      ATerm t_15 = t;
                                      int u_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(u_15);
                                        }
                                      else
                                        {
                                          t = t_15;
                                          {
                                            ATerm v_15 = t;
                                            int w_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(w_15);
                                              }
                                            else
                                              {
                                                t = v_15;
                                                {
                                                  ATerm x_15 = t;
                                                  int y_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(y_15);
                                                    }
                                                  else
                                                    {
                                                      t = x_15;
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
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm b_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            {
              ATerm d_16 = t;
              int e_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(e_16);
                }
              else
                {
                  t = d_16;
                  {
                    ATerm f_16 = t;
                    int g_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(g_16);
                      }
                    else
                      {
                        t = f_16;
                        {
                          ATerm j_16 = t;
                          int k_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(k_16);
                            }
                          else
                            {
                              t = j_16;
                              {
                                ATerm l_16 = t;
                                int m_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(m_16);
                                  }
                                else
                                  {
                                    t = l_16;
                                    {
                                      ATerm o_16 = t;
                                      int p_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(p_16);
                                        }
                                      else
                                        {
                                          t = o_16;
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
  return(t);
}
ATerm Optimize_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  {
                    ATerm w_16 = t;
                    int e_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
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
                              t = NoEffect_0(t);
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
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(i_17);
                                  }
                                else
                                  {
                                    t = h_17;
                                    {
                                      ATerm j_17 = t;
                                      int r_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(r_17);
                                        }
                                      else
                                        {
                                          t = j_17;
                                          t = InlineDont_0(t);
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm y_52 (ATerm t)
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_73(t);
        t = y_52(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        t = k_73(t);
      }
    return(t);
  }
  t = y_52(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_73 (ATerm))
{
  t = repeat_2(t, m_73, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm z_52 (ATerm t)
  {
    t = m_86(t);
    {
      t = _all(t, z_52);
      t = m_86(t);
    }
    return(t);
  }
  t = z_52(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      ATerm u_17 = t;
      int v_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(v_17);
        }
      else
        {
          t = u_17;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, m_1);
    return(t);
  }
  t = downup_1(t, l_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
  f_53 = t;
  e_53 :
  if(match_cons(f_53, sym_SDef_3))
    {
      g_53 = ATgetArgument(f_53, 0);
      h_53 = ATgetArgument(f_53, 1);
      i_53 = ATgetArgument(f_53, 2);
      {
        ATerm m_53 = NULL;
        t = not_null(g_53);
        {
          ATerm o_53 = NULL;
          t = a_66(t);
          {
            m_53 = t;
            {
              t = not_null(h_53);
              {
                ATerm q_53 = NULL;
                t = b_66(t);
                {
                  o_53 = t;
                  {
                    t = not_null(i_53);
                    {
                      t = c_66(t);
                      {
                        q_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_53), not_null(o_53), not_null(q_53));
                      }
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
    _fail(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_Strategies_1))
    {
      a_54 = ATgetArgument(z_53, 0);
      {
        ATerm c_54 = NULL;
        t = not_null(a_54);
        {
          t = n_64(t);
          {
            c_54 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(c_54));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm j_54 = NULL,k_54 = NULL;
  j_54 = t;
  i_54 :
  if(match_cons(j_54, sym_Specification_1))
    {
      k_54 = ATgetArgument(j_54, 0);
      {
        ATerm m_54 = NULL;
        t = not_null(k_54);
        {
          t = p_64(t);
          {
            m_54 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_54));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm j_91 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm z_1 (ATerm t)
          {
            t = SDef_3(t, _id, _id, j_91);
            return(t);
          }
          t = map_1(t, z_1);
          return(t);
        }
        t = Strategies_1(t, u_1);
        return(t);
      }
      t = Cons_2(t, t_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, s_1);
    return(t);
  }
  t = Specification_1(t, r_1);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  u_54 = t;
  t_54 :
  if(match_cons(u_54, sym__2))
    {
      v_54 = ATgetArgument(u_54, 0);
      w_54 = ATgetArgument(u_54, 1);
      {
        ATerm z_54 = NULL;
        t = not_null(v_54);
        {
          ATerm b_55 = NULL;
          t = i_55(t);
          {
            z_54 = t;
            {
              t = not_null(w_54);
              {
                t = j_55(t);
                {
                  b_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_54), not_null(b_55));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm k_55 = NULL;
  ATerm w_17;
  w_17 = t;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm l_55 = NULL,m_55 = NULL;
      l_55 = t;
      h_55 :
      if(match_cons(l_55, sym_Program_1))
        {
          m_55 = ATgetArgument(l_55, 0);
          if(((k_55 != NULL) && (k_55 != m_55)))
            _fail(m_55);
          else
            k_55 = m_55;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, a_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_17), not_null(k_55)), term_y_17));
      {
        t = printnl_0(t);
        {
          t = term_a_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = w_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATempty, term_b_18));
  {
    t = printnl_0(t);
    {
      t = term_a_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm c_18 = t;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm v_55 = NULL;
            v_55 = t;
            o_55 :
            if(!(match_cons(v_55, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_2);
          PopChoice();
          _fail(t);
        }
      else
        t = c_18;
      return(t);
    }
    t = _2(t, d_2, _id);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm k_2 (ATerm t)
        {
          ATerm w_55 = NULL,x_55 = NULL;
          w_55 = t;
          q_55 :
          if(match_cons(w_55, sym_Runtime_1))
            {
              x_55 = ATgetArgument(w_55, 0);
              if(((u_55 != NULL) && (u_55 != x_55)))
                _fail(x_55);
              else
                u_55 = x_55;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_2);
        return(t);
      }
      t = _2(t, i_2, _id);
      {
        ATerm l_2 (ATerm t)
        {
          ATerm m_2 (ATerm t)
          {
            ATerm y_55 = NULL,z_55 = NULL;
            y_55 = t;
            s_55 :
            if(match_cons(y_55, sym_Program_1))
              {
                z_55 = ATgetArgument(y_55, 0);
                if(((t_55 != NULL) && (t_55 != z_55)))
                  _fail(z_55);
                else
                  t_55 = z_55;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_2);
          return(t);
        }
        t = _2(t, l_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), not_null(u_55)), term_d_18), not_null(t_55)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, b_2);
  {
    t = term_h_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym__2))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      t = SSL_WriteToTextFile(not_null(f_56), not_null(g_56));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  l_56 :
  if(match_cons(m_56, sym__2))
    {
      n_56 = ATgetArgument(m_56, 0);
      o_56 = ATgetArgument(m_56, 1);
      t = SSL_WriteToBinaryFile(not_null(n_56), not_null(o_56));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_56 = NULL;
  ATerm i_18;
  i_18 = t;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_2 (ATerm t)
          {
            ATerm z_56 = NULL,a_57 = NULL;
            z_56 = t;
            v_56 :
            if(match_cons(z_56, sym_Output_1))
              {
                a_57 = ATgetArgument(z_56, 0);
                if(((y_56 != NULL) && (y_56 != a_57)))
                  _fail(a_57);
                else
                  y_56 = a_57;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_2);
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          {
            ATerm b_57 = NULL;
            t = term_l_18;
            {
              b_57 = t;
              if(((y_56 != NULL) && (y_56 != b_57)))
                _fail(b_57);
              else
                y_56 = b_57;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_2, _id);
  }
  t = i_18;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm u_2 (ATerm t)
      {
        t = not_null(y_56);
        return(t);
      }
      t = split_2(t, u_2, _id);
      return(t);
    }
    t = _2(t, _id, p_2);
    {
      ATerm p_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              ATerm c_57 = NULL;
              c_57 = t;
              x_56 :
              if(!(match_cons(c_57, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, x_2);
            return(t);
          }
          t = _2(t, v_2, WriteToBinaryFile_0);
          LocalPopChoice(q_18);
        }
      else
        {
          t = p_18;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_70 (ATerm))
{
  ATerm i_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
  ATerm r_18;
  r_18 = t;
  t = dtime_0(t);
  t = r_18;
  {
    t = s_70(t);
    {
      ATerm z_18;
      z_18 = t;
      {
        ATerm j_57 = NULL;
        t = dtime_0(t);
        {
          j_57 = t;
          if(((i_57 != NULL) && (i_57 != j_57)))
            _fail(j_57);
          else
            i_57 = j_57;
        }
      }
      t = z_18;
      {
        k_57 = t;
        h_57 :
        if(match_cons(k_57, sym__2))
          {
            l_57 = ATgetArgument(k_57, 0);
            m_57 = ATgetArgument(k_57, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_57)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_57))), not_null(m_57));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  t = SSL_ReadFromFile(not_null(s_57));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_85 (ATerm), ATerm c_85 (ATerm))
{
  ATerm x_57 = NULL,z_57 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm y_57 = NULL;
    t = b_85(t);
    {
      y_57 = t;
      if(((x_57 != NULL) && (x_57 != y_57)))
        _fail(y_57);
      else
        x_57 = y_57;
    }
  }
  t = a_19;
  {
    ATerm a_58 = NULL;
    t = c_85(t);
    {
      a_58 = t;
      if(((z_57 != NULL) && (z_57 != a_58)))
        _fail(a_58);
      else
        z_57 = a_58;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_57), not_null(z_57));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_58 = NULL;
  ATerm b_19;
  b_19 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 (ATerm t)
        {
          ATerm h_58 = NULL,i_58 = NULL;
          h_58 = t;
          e_58 :
          if(match_cons(h_58, sym_Input_1))
            {
              i_58 = ATgetArgument(h_58, 0);
              if(((g_58 != NULL) && (g_58 != i_58)))
                _fail(i_58);
              else
                g_58 = i_58;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, z_2);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm j_58 = NULL;
          t = term_e_19;
          {
            j_58 = t;
            if(((g_58 != NULL) && (g_58 != j_58)))
              _fail(j_58);
            else
              g_58 = j_58;
          }
        }
      }
  }
  t = b_19;
  {
    ATerm a_3 (ATerm t)
    {
      t = not_null(g_58);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, a_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_58 = NULL;
  n_58 = t;
  m_58 :
  if(!(match_cons(n_58, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_19);
            }
          else
            {
              t = h_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_3);
  t = r_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  t = SSL_table_create(not_null(p_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_58 = NULL;
  t_58 = t;
  {
    ATerm j_19;
    j_19 = t;
    {
      t = term_k_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_19, term_l_19, not_null(t_58));
          t = table_put_0(t);
        }
      }
    }
    t = j_19;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  b_59 = t;
  z_58 :
  if(match_string(b_59, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(b_59) == AT_LIST) && ((ATermList) b_59 != ATempty)))
        {
          c_59 = ATgetFirst((ATermList) b_59);
          d_59 = (ATerm) ATgetNext((ATermList) b_59);
          a_59 :
          if(((ATgetType(d_59) == AT_LIST) && ((ATermList) d_59 != ATempty)))
            {
              e_59 = ATgetFirst((ATermList) d_59);
              f_59 = (ATerm) ATgetNext((ATermList) d_59);
              {
                ATerm j_59 = NULL;
                ATerm m_19;
                m_19 = t;
                {
                  t = not_null(c_59);
                  t = j_0(t);
                }
                t = m_19;
                {
                  ATerm k_59 = NULL;
                  t = not_null(e_59);
                  {
                    t = k_0(t);
                    {
                      k_59 = t;
                      if(((j_59 != NULL) && (j_59 != k_59)))
                        _fail(k_59);
                      else
                        j_59 = k_59;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_59)), not_null(j_59));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm z_59 = NULL;
        z_59 = t;
        o_59 :
        if(!(match_string(z_59, "-S")))
          {
            if(!(match_string(z_59, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_p_19;
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_q_19;
        return(t);
      }
      t = Option_3(t, c_3, d_3, h_3);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              ATerm a_60 = NULL;
              a_60 = t;
              p_59 :
              if(!(match_string(a_60, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_t_19;
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_u_19;
              return(t);
            }
            t = Option_3(t, i_3, j_3, k_3);
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm v_19 = t;
              int w_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm b_60 = NULL;
                    b_60 = t;
                    q_59 :
                    if(!(match_string(b_60, "-v")))
                      {
                        if(!(match_string(b_60, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = term_x_19;
                    return(t);
                  }
                  ATerm v_3 (ATerm t)
                  {
                    t = term_y_19;
                    return(t);
                  }
                  t = Option_3(t, t_3, u_3, v_3);
                  LocalPopChoice(w_19);
                }
              else
                {
                  t = v_19;
                  {
                    ATerm z_19 = t;
                    int a_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_3 (ATerm t)
                        {
                          ATerm c_60 = NULL;
                          c_60 = t;
                          r_59 :
                          if(!(match_string(c_60, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          ATerm d_60 = NULL;
                          ATerm e_60 = NULL;
                          e_60 = t;
                          if(((d_60 != NULL) && (d_60 != e_60)))
                            _fail(e_60);
                          else
                            d_60 = e_60;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(d_60));
                          return(t);
                        }
                        ATerm y_3 (ATerm t)
                        {
                          t = term_b_20;
                          return(t);
                        }
                        t = ArgOption_3(t, w_3, x_3, y_3);
                        LocalPopChoice(a_20);
                      }
                    else
                      {
                        t = z_19;
                        {
                          ATerm c_20 = t;
                          int d_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_3 (ATerm t)
                              {
                                ATerm f_60 = NULL;
                                f_60 = t;
                                t_59 :
                                if(!(match_string(f_60, "-i")))
                                  {
                                    if(!(match_string(f_60, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_4 (ATerm t)
                              {
                                ATerm g_60 = NULL;
                                ATerm h_60 = NULL;
                                h_60 = t;
                                if(((g_60 != NULL) && (g_60 != h_60)))
                                  _fail(h_60);
                                else
                                  g_60 = h_60;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_60));
                                return(t);
                              }
                              ATerm e_4 (ATerm t)
                              {
                                t = term_e_20;
                                return(t);
                              }
                              t = ArgOption_3(t, z_3, a_4, e_4);
                              LocalPopChoice(d_20);
                            }
                          else
                            {
                              t = c_20;
                              {
                                ATerm f_20 = t;
                                int g_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_4 (ATerm t)
                                    {
                                      ATerm i_60 = NULL;
                                      i_60 = t;
                                      v_59 :
                                      if(!(match_string(i_60, "-o")))
                                        {
                                          if(!(match_string(i_60, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm g_4 (ATerm t)
                                    {
                                      ATerm j_60 = NULL;
                                      ATerm k_60 = NULL;
                                      k_60 = t;
                                      if(((j_60 != NULL) && (j_60 != k_60)))
                                        _fail(k_60);
                                      else
                                        j_60 = k_60;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_60));
                                      return(t);
                                    }
                                    ATerm l_4 (ATerm t)
                                    {
                                      t = term_h_20;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, f_4, g_4, l_4);
                                    LocalPopChoice(g_20);
                                  }
                                else
                                  {
                                    t = f_20;
                                    {
                                      ATerm i_20 = t;
                                      int j_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_4 (ATerm t)
                                          {
                                            ATerm l_60 = NULL;
                                            l_60 = t;
                                            x_59 :
                                            if(!(match_string(l_60, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_4 (ATerm t)
                                          {
                                            t = term_k_20;
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            t = term_l_20;
                                            return(t);
                                          }
                                          t = Option_3(t, m_4, n_4, p_4);
                                          LocalPopChoice(j_20);
                                        }
                                      else
                                        {
                                          t = i_20;
                                          {
                                            ATerm q_4 (ATerm t)
                                            {
                                              ATerm m_60 = NULL;
                                              m_60 = t;
                                              y_59 :
                                              if(!(match_string(m_60, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm r_4 (ATerm t)
                                            {
                                              t = term_m_20;
                                              return(t);
                                            }
                                            ATerm w_4 (ATerm t)
                                            {
                                              t = term_n_20;
                                              return(t);
                                            }
                                            t = Option_3(t, q_4, r_4, w_4);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm r_60 = NULL;
  r_60 = t;
  t = SSL_table_destroy(not_null(r_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_60 = NULL;
  v_60 = t;
  t = SSL_exit(not_null(v_60));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm z_60 = NULL;
  z_60 = t;
  t = SSL_implode_string(not_null(z_60));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm c_61 (ATerm t)
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_61);
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          t = Nil_0(t);
          t = h_82(t);
        }
      }
    return(t);
  }
  t = c_61(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = q_20;
      {
        ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
        f_61 = t;
        e_61 :
        if(((ATgetType(f_61) == AT_LIST) && ((ATermList) f_61 != ATempty)))
          {
            g_61 = ATgetFirst((ATermList) f_61);
            h_61 = (ATerm) ATgetNext((ATermList) f_61);
            {
              t = not_null(g_61);
              {
                ATerm x_4 (ATerm t)
                {
                  t = not_null(h_61);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_4);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_61 = NULL;
  n_61 = t;
  t = SSL_explode_string(not_null(n_61));
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
ATerm long_description_1 (ATerm t, ATerm y_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm q_61 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = Cons_2(t, t_81, q_61);
      }
    return(t);
  }
  t = q_61(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  z_61 = t;
  w_61 :
  if(((ATgetType(z_61) == AT_LIST) && ((ATermList) z_61 != ATempty)))
    {
      x_61 = ATgetFirst((ATermList) z_61);
      y_61 = (ATerm) ATgetNext((ATermList) z_61);
      {
        ATerm c_62 = NULL;
        t = not_null(y_61);
        {
          ATerm a_21;
          a_21 = t;
          {
            ATerm d_62 = NULL,f_62 = NULL,h_62 = NULL;
            ATerm b_21;
            b_21 = t;
            {
              ATerm e_62 = NULL;
              t = i_0(t);
              {
                e_62 = t;
                if(((d_62 != NULL) && (d_62 != e_62)))
                  _fail(e_62);
                else
                  d_62 = e_62;
              }
            }
            t = b_21;
            {
              ATerm g_62 = NULL;
              t = not_null(x_61);
              {
                t = h_0(t);
                {
                  g_62 = t;
                  if(((f_62 != NULL) && (f_62 != g_62)))
                    _fail(g_62);
                  else
                    f_62 = g_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_62)), not_null(f_62));
                {
                  h_62 = t;
                  if(((c_62 != NULL) && (c_62 != h_62)))
                    _fail(h_62);
                  else
                    c_62 = h_62;
                }
              }
            }
          }
          t = a_21;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(c_62);
              return(t);
            }
            t = reverse_acc_2(t, h_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) z_61 == ATempty))
        {
          {
            t = term_c_21;
            t = i_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm q_62 = NULL,r_62 = NULL;
  q_62 = t;
  p_62 :
  if(match_cons(q_62, sym_Program_1))
    {
      r_62 = ATgetArgument(q_62, 0);
      {
        ATerm t_62 = NULL;
        t = not_null(r_62);
        {
          t = r_56(t);
          {
            t_62 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_62));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm b_63 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm c_63 = NULL;
      c_63 = t;
      if(((b_63 != NULL) && (b_63 != c_63)))
        _fail(c_63);
      else
        b_63 = c_63;
      return(t);
    }
    t = Program_1(t, f_5);
    return(t);
  }
  t = option_defined_1(t, e_5);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm d_63 = NULL;
      ATerm e_63 = NULL;
      t = term_c_21;
      {
        ATerm h_5 (ATerm t)
        {
          t = not_null(b_63);
          return(t);
        }
        t = short_description_1(t, h_5);
        {
          t = concat_strings_0(t);
          {
            e_63 = t;
            if(((d_63 != NULL) && (d_63 != e_63)))
              _fail(e_63);
            else
              d_63 = e_63;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATempty, not_null(d_63)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATempty, term_d_21));
      {
        t = printnl_0(t);
        {
          t = term_j_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm f_63 = NULL;
                  f_63 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_63)), term_k_21));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_5);
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm h_63 = NULL;
                    ATerm i_63 = NULL;
                    t = term_c_21;
                    {
                      ATerm r_5 (ATerm t)
                      {
                        t = not_null(b_63);
                        return(t);
                      }
                      t = long_description_1(t, r_5);
                      {
                        t = concat_strings_0(t);
                        {
                          i_63 = t;
                          if(((h_63 != NULL) && (h_63 != i_63)))
                            _fail(i_63);
                          else
                            h_63 = i_63;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_63)), term_l_21));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_5);
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
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL;
  p_63 = t;
  o_63 :
  if(match_cons(p_63, sym__2))
    {
      q_63 = ATgetArgument(p_63, 0);
      r_63 = ATgetArgument(p_63, 1);
      {
        ATerm m_21;
        m_21 = t;
        t = SSL_printnl(not_null(q_63), not_null(r_63));
        t = m_21;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm y_63 = NULL,z_63 = NULL;
  y_63 = t;
  x_63 :
  if(match_cons(y_63, sym_Undefined_1))
    {
      z_63 = ATgetArgument(y_63, 0);
      {
        ATerm b_64 = NULL;
        t = not_null(z_63);
        {
          t = s_56(t);
          {
            b_64 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_64));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm g_64 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_82, _id);
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = Cons_2(t, _id, g_64);
      }
    return(t);
  }
  t = g_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_69 (ATerm))
{
  t = fetch_1(t, w_69);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_64 = NULL;
  i_64 = t;
  h_64 :
  if(!(match_cons(i_64, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_85(t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,o_64 = NULL;
  l_64 = t;
  k_64 :
  if(match_cons(l_64, sym__2))
    {
      m_64 = ATgetArgument(l_64, 0);
      o_64 = ATgetArgument(l_64, 1);
      t = SSL_table_get(not_null(m_64), not_null(o_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,a_65 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym__3))
    {
      x_64 = ATgetArgument(w_64, 0);
      y_64 = ATgetArgument(w_64, 1);
      a_65 = ATgetArgument(w_64, 2);
      {
        ATerm r_21;
        r_21 = t;
        {
          ATerm e_65 = NULL;
          ATerm f_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_64), not_null(y_64));
          {
            ATerm s_21 = t;
            int t_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_21);
              }
            else
              {
                t = s_21;
                t = (ATerm) ATempty;
              }
            {
              f_65 = t;
              if(((e_65 != NULL) && (e_65 != f_65)))
                _fail(f_65);
              else
                e_65 = f_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_64), not_null(y_64), (ATerm) ATinsert(CheckATermList(not_null(e_65)), not_null(a_65)));
            t = table_put_0(t);
          }
        }
        t = r_21;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm j_65 = NULL;
  ATerm k_65 = NULL;
  t = term_c_21;
  {
    t = c_69(t);
    {
      k_65 = t;
      if(((j_65 != NULL) && (j_65 != k_65)))
        _fail(k_65);
      else
        j_65 = k_65;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_f_21, not_null(j_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  q_65 = t;
  p_65 :
  if(match_string(q_65, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(q_65) == AT_LIST) && ((ATermList) q_65 != ATempty)))
        {
          r_65 = ATgetFirst((ATermList) q_65);
          s_65 = (ATerm) ATgetNext((ATermList) q_65);
          {
            ATerm v_65 = NULL;
            ATerm u_21;
            u_21 = t;
            {
              t = not_null(r_65);
              t = c_0(t);
            }
            t = u_21;
            {
              ATerm w_65 = NULL;
              t = term_c_21;
              {
                t = f_0(t);
                {
                  w_65 = t;
                  if(((v_65 != NULL) && (v_65 != w_65)))
                    _fail(w_65);
                  else
                    v_65 = w_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_65)), not_null(v_65));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm e_66 = NULL;
    e_66 = t;
    d_66 :
    if(!(match_string(e_66, "--help")))
      {
        if(!(match_string(e_66, "-h")))
          {
            if(!(match_string(e_66, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_v_21;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_w_21;
    return(t);
  }
  t = Option_3(t, s_5, t_5, u_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
  h_66 = t;
  g_66 :
  if(((ATgetType(h_66) == AT_LIST) && ((ATermList) h_66 != ATempty)))
    {
      i_66 = ATgetFirst((ATermList) h_66);
      j_66 = (ATerm) ATgetNext((ATermList) h_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_66)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm))
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
  r_66 = t;
  q_66 :
  if(((ATgetType(r_66) == AT_LIST) && ((ATermList) r_66 != ATempty)))
    {
      s_66 = ATgetFirst((ATermList) r_66);
      t_66 = (ATerm) ATgetNext((ATermList) r_66);
      {
        ATerm w_66 = NULL;
        t = not_null(s_66);
        {
          ATerm y_66 = NULL;
          t = f_67(t);
          {
            w_66 = t;
            {
              t = not_null(t_66);
              {
                t = g_67(t);
                {
                  y_66 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(w_66));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_67 = NULL;
  i_67 = t;
  h_67 :
  if(((ATermList) i_67 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm x_21;
  x_21 = t;
  {
    ATerm y_5 (ATerm t)
    {
      t = term_y_21;
      t = a_69(t);
      return(t);
    }
    t = try_1(t, y_5);
  }
  t = x_21;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm k_67 = NULL;
      k_67 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_67));
      return(t);
    }
    ATerm a_6 (ATerm t)
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_22);
            }
          else
            {
              t = c_22;
              {
                t = a_69(t);
                t = Cons_2(t, _id, a_6);
              }
            }
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_5, a_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  ATerm f_22;
  f_22 = t;
  {
    ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL;
    t_67 = t;
    p_67 :
    if(match_cons(t_67, sym__3))
      {
        u_67 = ATgetArgument(t_67, 0);
        v_67 = ATgetArgument(t_67, 1);
        w_67 = ATgetArgument(t_67, 2);
        {
          if(((q_67 != NULL) && (q_67 != u_67)))
            _fail(u_67);
          else
            q_67 = u_67;
          {
            if(((r_67 != NULL) && (r_67 != v_67)))
              _fail(v_67);
            else
              r_67 = v_67;
            {
              if(((s_67 != NULL) && (s_67 != w_67)))
                _fail(w_67);
              else
                s_67 = w_67;
              t = SSL_table_put(not_null(q_67), not_null(r_67), not_null(s_67));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = f_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm z_67 = NULL;
  ATerm g_22;
  g_22 = t;
  {
    t = term_h_22;
    t = table_put_0(t);
  }
  t = g_22;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm i_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_68(t);
          LocalPopChoice(k_22);
        }
      else
        {
          t = i_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_6);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_h_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm h_6 (ATerm t)
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm a_68 = NULL;
                  a_68 = t;
                  if(((z_67 != NULL) && (z_67 != a_68)))
                    _fail(a_68);
                  else
                    z_67 = a_68;
                  return(t);
                }
                t = Undefined_1(t, i_6);
                return(t);
              }
              t = option_defined_1(t, h_6);
              {
                ATerm r_22;
                r_22 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_67)), term_t_22));
                  t = printnl_0(t);
                }
                t = r_22;
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_6);
      {
        ATerm u_22;
        u_22 = t;
        {
          t = term_e_21;
          t = table_destroy_0(t);
        }
        t = u_22;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm o_6 (ATerm t)
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_70(t);
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, o_6);
  {
    t = store_options_0(t);
    {
      ATerm x_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, i_70);
          LocalPopChoice(y_22);
        }
      else
        {
          t = x_22;
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, g_70);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_70 (ATerm), ATerm c_70 (ATerm))
{
  t = iowrap_3(t, b_70, c_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm p_6 (ATerm t)
  {
    t = _2(t, _id, y_69);
    return(t);
  }
  t = iowrap_2(t, p_6, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm r_6 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, r_6);
    return(t);
  }
  t = iowrap_1(t, q_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
