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
ATerm term_r_22;
ATerm term_j_22;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_d_19;
ATerm term_o_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_y_9;
ATerm term_n_9;
void init_constant_terms (void)
{
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__3, term_b_21, term_c_21, (ATerm) ATempty);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm i_64 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_67 (ATerm), ATerm g_67 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm));
ATerm crush_3 (ATerm, ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm free_vars_3 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_86 (ATerm));
ATerm simplify_narrow_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm p_82 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm s_89 (ATerm), ATerm t_89 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_88 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_89 (ATerm), ATerm v_89 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_89 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_74 (ATerm), ATerm f_74 (ATerm));
ATerm for_3 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm HdMember_1 (ATerm, ATerm t_79 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_88 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm e_65 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm));
ATerm zip_1 (ATerm, ATerm x_83 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_73 (ATerm));
ATerm downup_1 (ATerm, ATerm q_86 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm h_66 (ATerm));
ATerm Strategies_1 (ATerm, ATerm s_64 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_64 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm n_91 (ATerm));
ATerm _2 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_70 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_70 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_82 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_69 (ATerm));
ATerm map_1 (ATerm, ATerm x_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_69 (ATerm));
ATerm Program_1 (ATerm, ATerm w_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_56 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_70 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_69 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_67 (ATerm), ATerm l_67 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_69 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_69 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_70 (ATerm));
ATerm optimize1_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm simplify_0 (ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = repeat_1(t, Optimize_0);
    return(t);
  }
  t = downup_1(t, a_0);
  return(t);
}
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
    {
      _fail(t);
    }
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
            ATerm v_6 = t;
            int w_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(w_6);
              }
            else
              {
                t = v_6;
                {
                  ATerm y_6 = t;
                  int z_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_7;
                      l_7 = t;
                      {
                        ATerm b_0 (ATerm t)
                        {
                          t = not_null(y_1);
                          return(t);
                        }
                        t = HdMember_1(t, b_0);
                      }
                      t = l_7;
                      t = Cons_2(t, _id, c_2);
                      LocalPopChoice(z_6);
                    }
                  else
                    {
                      t = y_6;
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
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm i_64 (ATerm))
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
          t = i_64(t);
          {
            j_2 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(j_2));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm))
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
          t = f_67(t);
          {
            w_2 = t;
            {
              t = not_null(t_2);
              {
                t = g_67(t);
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
    {
      _fail(t);
    }
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, n_90, l_90);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      t = DynamicRules_1(t, l_90);
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
    {
      _fail(t);
    }
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
        {
          _fail(t);
        }
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
        {
          _fail(t);
        }
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
    {
      _fail(t);
    }
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
            ATerm o_7 = t;
            int p_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_4);
                LocalPopChoice(p_7);
              }
            else
              {
                t = o_7;
                {
                  ATerm q_7 = t;
                  int t_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_0 (ATerm t)
                      {
                        t = not_null(k_4);
                        return(t);
                      }
                      t = HdMember_1(t, d_0);
                      t = o_4(t);
                      LocalPopChoice(t_7);
                    }
                  else
                    {
                      t = q_7;
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
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm))
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_78(t);
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
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
              ATerm j_8;
              j_8 = t;
              {
                ATerm z_4 = NULL;
                t = not_null(u_4);
                {
                  t = t_78(t);
                  {
                    z_4 = t;
                    if(((y_4 != NULL) && (y_4 != z_4)))
                      _fail(z_4);
                    else
                      y_4 = z_4;
                  }
                }
              }
              t = j_8;
              {
                ATerm b_5 = NULL;
                t = not_null(v_4);
                {
                  t = foldr_3(t, r_78, s_78, t_78);
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
                  t = s_78(t);
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
ATerm crush_3 (ATerm t, ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm))
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
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_5);
      t = foldr_3(t, e_80, f_80, g_80);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_5 (ATerm t)
  {
    ATerm k_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_75(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = k_8;
        {
          ATerm n_8 = t;
          int o_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_5 = NULL;
              ATerm s_8;
              s_8 = t;
              {
                ATerm w_5 = NULL;
                t = q_75(t);
                {
                  w_5 = t;
                  if(((v_5 != NULL) && (v_5 != w_5)))
                    _fail(w_5);
                  else
                    v_5 = w_5;
                }
              }
              t = s_8;
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = not_null(v_5);
                    return(t);
                  }
                  t = split_2(t, x_5, n_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm m_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = r_75(t, e_0, x_5, m_0);
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, o_0, union_0, _id);
                }
              }
              LocalPopChoice(o_8);
            }
          else
            {
              t = n_8;
              {
                ATerm p_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, p_0, union_0, x_5);
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
  ATerm q_0 (ATerm t)
  {
    ATerm w_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = w_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  f_6 = t;
  d_6 :
  if(match_cons(f_6, sym_Scope_2))
    {
      g_6 = ATgetArgument(f_6, 0);
      h_6 = ATgetArgument(f_6, 1);
      e_6 :
      if(match_cons(h_6, sym_Seq_2))
        {
          i_6 = ATgetArgument(h_6, 0);
          j_6 = ATgetArgument(h_6, 1);
          {
            ATerm n_6 = NULL,o_6 = NULL;
            ATerm p_6 = NULL,r_6 = NULL;
            ATerm q_6 = NULL;
            t = not_null(i_6);
            {
              t = tvars_0(t);
              {
                q_6 = t;
                if(((p_6 != NULL) && (p_6 != q_6)))
                  _fail(q_6);
                else
                  p_6 = q_6;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), not_null(g_6));
              {
                ATerm s_6 = NULL;
                t = isect_0(t);
                {
                  r_6 = t;
                  {
                    if(((n_6 != NULL) && (n_6 != r_6)))
                      _fail(r_6);
                    else
                      n_6 = r_6;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), not_null(n_6));
                      {
                        t = diff_0(t);
                        {
                          s_6 = t;
                          {
                            if(((o_6 != NULL) && (o_6 != s_6)))
                              _fail(s_6);
                            else
                              o_6 = s_6;
                            {
                              ATerm c_9 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = c_9;
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_6), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_6), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_6), not_null(j_6))));
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
ATerm topdown_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm x_6 (ATerm t)
  {
    t = m_86(t);
    t = _all(t, x_6);
    return(t);
  }
  t = x_6(t);
  return(t);
}
ATerm simplify_narrow_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = try_1(t, NarrowScope_0);
    return(t);
  }
  t = topdown_1(t, r_0);
  return(t);
}
ATerm WidenScope_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
  ATerm r_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_7), not_null(f_7)));
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_7), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_7), not_null(k_7)));
    return(t);
  }
  g_7 = t;
  a_7 :
  if(match_cons(g_7, sym_Seq_2))
    {
      h_7 = ATgetArgument(g_7, 0);
      k_7 = ATgetArgument(g_7, 1);
      b_7 :
      if(match_cons(k_7, sym_Scope_2))
        {
          e_7 = ATgetArgument(k_7, 0);
          f_7 = ATgetArgument(k_7, 1);
          c_7 :
          if(match_cons(h_7, sym_Scope_2))
            {
              i_7 = ATgetArgument(h_7, 0);
              j_7 = ATgetArgument(h_7, 1);
              {
                ATerm l_9 = t;
                int m_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_7(t);
                    LocalPopChoice(m_9);
                  }
                else
                  {
                    t = l_9;
                    t = s_7(t);
                  }
              }
            }
          else
            {
              t = r_7(t);
            }
        }
      else
        {
          d_7 :
          if(match_cons(h_7, sym_Scope_2))
            {
              i_7 = ATgetArgument(h_7, 0);
              j_7 = ATgetArgument(h_7, 1);
              t = s_7(t);
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
  return(t);
}
ATerm InlineDont_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  z_7 = t;
  u_7 :
  if(match_cons(z_7, sym_Let_2))
    {
      a_8 = ATgetArgument(z_7, 0);
      g_8 = ATgetArgument(z_7, 1);
      v_7 :
      if(((ATgetType(a_8) == AT_LIST) && ((ATermList) a_8 != ATempty)))
        {
          b_8 = ATgetFirst((ATermList) a_8);
          f_8 = (ATerm) ATgetNext((ATermList) a_8);
          w_7 :
          if(match_cons(b_8, sym_SDef_3))
            {
              c_8 = ATgetArgument(b_8, 0);
              d_8 = ATgetArgument(b_8, 1);
              e_8 = ATgetArgument(b_8, 2);
              x_7 :
              if(((ATermList) d_8 == ATempty))
                {
                  y_7 :
                  if(((ATermList) f_8 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_n_9), not_null(c_8), (ATerm)ATempty, not_null(e_8))), not_null(g_8));
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
ATerm at_suffix_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_82(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = Cons_2(t, _id, l_8);
      }
    return(t);
  }
  t = l_8(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL;
  y_8 = t;
  x_8 :
  if(match_cons(y_8, sym_Let_2))
    {
      z_8 = ATgetArgument(y_8, 0);
      a_9 = ATgetArgument(y_8, 1);
      {
        ATerm d_9 = NULL,e_9 = NULL;
        ATerm t_9 = NULL;
        t = not_null(z_8);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
            f_9 = t;
            t_8 :
            if(((ATgetType(f_9) == AT_LIST) && ((ATermList) f_9 != ATempty)))
              {
                g_9 = ATgetFirst((ATermList) f_9);
                k_9 = (ATerm) ATgetNext((ATermList) f_9);
                u_8 :
                if(match_cons(g_9, sym_SDef_3))
                  {
                    h_9 = ATgetArgument(g_9, 0);
                    i_9 = ATgetArgument(g_9, 1);
                    j_9 = ATgetArgument(g_9, 2);
                    v_8 :
                    if(((ATermList) i_9 == ATempty))
                      {
                        {
                          ATerm s_9 = NULL;
                          t = not_null(a_9);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
                              o_9 = t;
                              p_8 :
                              if(match_cons(o_9, sym_Call_2))
                                {
                                  p_9 = ATgetArgument(o_9, 0);
                                  r_9 = ATgetArgument(o_9, 1);
                                  q_8 :
                                  if(match_cons(p_9, sym_SVar_1))
                                    {
                                      q_9 = ATgetArgument(p_9, 0);
                                      r_8 :
                                      if(((ATermList) r_9 == ATempty))
                                        {
                                          {
                                            if(((h_9 != NULL) && (h_9 != q_9)))
                                              _fail(q_9);
                                            else
                                              h_9 = q_9;
                                            t = not_null(j_9);
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
                            t = oncetd_1(t, t_0);
                            {
                              s_9 = t;
                              {
                                if(((d_9 != NULL) && (d_9 != s_9)))
                                  _fail(s_9);
                                else
                                  d_9 = s_9;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_9)), (ATerm) ATempty), not_null(d_9));
                                  {
                                    ATerm w_9 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = in_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = w_9;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(k_9);
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
          t = at_suffix_1(t, s_0);
          {
            t_9 = t;
            if(((e_9 != NULL) && (e_9 != t_9)))
              _fail(t_9);
            else
              e_9 = t_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_9), not_null(d_9));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BuildPrim_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  h_10 = t;
  b_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      k_10 = ATgetArgument(h_10, 1);
      c_10 :
      if(match_cons(i_10, sym_Build_1))
        {
          j_10 = ATgetArgument(i_10, 0);
          d_10 :
          if(match_cons(k_10, sym_Where_1))
            {
              l_10 = ATgetArgument(k_10, 0);
              e_10 :
              if(match_cons(l_10, sym_Prim_2))
                {
                  f_10 = ATgetArgument(l_10, 0);
                  g_10 = ATgetArgument(l_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(f_10), not_null(g_10));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(k_10, sym_Prim_2))
                {
                  l_10 = ATgetArgument(k_10, 0);
                  m_10 = ATgetArgument(k_10, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_10), not_null(m_10));
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
  return(t);
}
ATerm BuildBuild_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  c_11 = t;
  x_10 :
  if(match_cons(c_11, sym__2))
    {
      d_11 = ATgetArgument(c_11, 0);
      f_11 = ATgetArgument(c_11, 1);
      y_10 :
      if(match_cons(d_11, sym_Build_1))
        {
          e_11 = ATgetArgument(d_11, 0);
          z_10 :
          if(match_cons(f_11, sym_Where_1))
            {
              g_11 = ATgetArgument(f_11, 0);
              a_11 :
              if(match_cons(g_11, sym_Build_1))
                {
                  b_11 = ATgetArgument(g_11, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_11));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(f_11, sym_Build_1))
                {
                  g_11 = ATgetArgument(f_11, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_11));
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
  return(t);
}
ATerm BuildMatchFusion_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  w_11 = t;
  r_11 :
  if(match_cons(w_11, sym__2))
    {
      x_11 = ATgetArgument(w_11, 0);
      b_12 = ATgetArgument(w_11, 1);
      s_11 :
      if(match_cons(x_11, sym_Build_1))
        {
          y_11 = ATgetArgument(x_11, 0);
          t_11 :
          if(match_cons(y_11, sym_Op_2))
            {
              z_11 = ATgetArgument(y_11, 0);
              a_12 = ATgetArgument(y_11, 1);
              u_11 :
              if(match_cons(b_12, sym_Match_1))
                {
                  c_12 = ATgetArgument(b_12, 0);
                  v_11 :
                  if(match_cons(c_12, sym_Op_2))
                    {
                      d_12 = ATgetArgument(c_12, 0);
                      e_12 = ATgetArgument(c_12, 1);
                      {
                        ATerm h_12 = NULL,i_12 = NULL;
                        if(((z_11 != NULL) && (z_11 != d_12)))
                          _fail(d_12);
                        else
                          z_11 = d_12;
                        {
                          if(((h_12 != NULL) && (h_12 != e_12)))
                            _fail(e_12);
                          else
                            h_12 = e_12;
                          {
                            ATerm o_12 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), not_null(h_12));
                            {
                              ATerm u_0 (ATerm t)
                              {
                                ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
                                j_12 = t;
                                p_11 :
                                if(match_cons(j_12, sym__2))
                                  {
                                    k_12 = ATgetArgument(j_12, 0);
                                    l_12 = ATgetArgument(j_12, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_12)), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_12)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, u_0);
                              {
                                o_12 = t;
                                if(((i_12 != NULL) && (i_12 != o_12)))
                                  _fail(o_12);
                                else
                                  i_12 = o_12;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(i_12)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(z_11), not_null(a_12))));
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
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym__2))
    {
      v_12 = ATgetArgument(u_12, 0);
      w_12 = ATgetArgument(u_12, 1);
      if(((v_12 != NULL) && (v_12 != w_12)))
        _fail(w_12);
      else
        v_12 = w_12;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  f_13 = t;
  a_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      k_13 = ATgetArgument(f_13, 1);
      b_13 :
      if(match_cons(g_13, sym_Build_1))
        {
          h_13 = ATgetArgument(g_13, 0);
          c_13 :
          if(match_cons(h_13, sym_Op_2))
            {
              i_13 = ATgetArgument(h_13, 0);
              j_13 = ATgetArgument(h_13, 1);
              d_13 :
              if(match_cons(k_13, sym_Match_1))
                {
                  l_13 = ATgetArgument(k_13, 0);
                  e_13 :
                  if(match_cons(l_13, sym_Op_2))
                    {
                      m_13 = ATgetArgument(l_13, 0);
                      n_13 = ATgetArgument(l_13, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), not_null(m_13));
                        {
                          ATerm x_9 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = x_9;
                            }
                        }
                        t = term_y_9;
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
ATerm BMF_0 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            {
              ATerm p_10 = t;
              int q_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(q_10);
                }
              else
                {
                  t = p_10;
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
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  ATerm o_14 (ATerm t)
  {
    ATerm l_14 = NULL;
    ATerm m_14 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(d_14));
    {
      t = BMF_0(t);
      {
        m_14 = t;
        if(((l_14 != NULL) && (l_14 != m_14)))
          _fail(m_14);
        else
          l_14 = m_14;
      }
    }
    t = not_null(l_14);
    return(t);
  }
  b_14 = t;
  x_13 :
  if(match_cons(b_14, sym_Seq_2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      y_13 :
      if(match_cons(d_14, sym_Seq_2))
        {
          z_13 = ATgetArgument(d_14, 0);
          a_14 = ATgetArgument(d_14, 1);
          {
            ATerm r_10 = t;
            int s_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_14 = NULL;
                ATerm i_14 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(z_13));
                {
                  t = BMF_0(t);
                  {
                    i_14 = t;
                    if(((h_14 != NULL) && (h_14 != i_14)))
                      _fail(i_14);
                    else
                      h_14 = i_14;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_14), not_null(a_14));
                LocalPopChoice(s_10);
              }
            else
              {
                t = r_10;
                t = o_14(t);
              }
          }
        }
      else
        {
          t = o_14(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NoEffect_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  c_17 = t;
  y_16 :
  if(match_cons(c_17, sym_Seq_2))
    {
      d_17 = ATgetArgument(c_17, 0);
      f_17 = ATgetArgument(c_17, 1);
      z_16 :
      if(match_cons(d_17, sym_Build_1))
        {
          e_17 = ATgetArgument(d_17, 0);
          a_17 :
          if(match_cons(f_17, sym_Seq_2))
            {
              g_17 = ATgetArgument(f_17, 0);
              i_17 = ATgetArgument(f_17, 1);
              b_17 :
              if(match_cons(g_17, sym_Build_1))
                {
                  h_17 = ATgetArgument(g_17, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_17)), not_null(i_17));
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
ATerm FuseScope_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,f_18 = NULL;
  r_17 = t;
  p_17 :
  if(match_cons(r_17, sym_Scope_2))
    {
      s_17 = ATgetArgument(r_17, 0);
      t_17 = ATgetArgument(r_17, 1);
      q_17 :
      if(match_cons(t_17, sym_Scope_2))
        {
          u_17 = ATgetArgument(t_17, 0);
          f_18 = ATgetArgument(t_17, 1);
          {
            ATerm m_18 = NULL;
            ATerm n_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(u_17));
            {
              t = conc_0(t);
              {
                n_18 = t;
                if(((m_18 != NULL) && (m_18 != n_18)))
                  _fail(n_18);
                else
                  m_18 = n_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_18), not_null(f_18));
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
ATerm IsVar_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_Var_1))
    {
      t_18 = ATgetArgument(s_18, 0);
      t = not_null(t_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm z_18 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,o_20 = NULL;
  z_18 = t;
  x_18 :
  if(match_cons(z_18, sym__2))
    {
      b_20 = ATgetArgument(z_18, 0);
      c_20 = ATgetArgument(z_18, 1);
      y_18 :
      if(((ATgetType(c_20) == AT_LIST) && ((ATermList) c_20 != ATempty)))
        {
          d_20 = ATgetFirst((ATermList) c_20);
          o_20 = (ATerm) ATgetNext((ATermList) c_20);
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(o_20));
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
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  c_22 = t;
  h_21 :
  if(match_cons(c_22, sym__2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      i_21 :
      if(((ATgetType(e_22) == AT_LIST) && ((ATermList) e_22 != ATempty)))
        {
          f_22 = ATgetFirst((ATermList) e_22);
          i_22 = (ATerm) ATgetNext((ATermList) e_22);
          j_21 :
          if(match_cons(f_22, sym__2))
            {
              g_22 = ATgetArgument(f_22, 0);
              h_22 = ATgetArgument(f_22, 1);
              {
                ATerm k_22 = NULL;
                if(((d_22 != NULL) && (d_22 != g_22)))
                  _fail(g_22);
                else
                  d_22 = g_22;
                {
                  if(((k_22 != NULL) && (k_22 != h_22)))
                    _fail(h_22);
                  else
                    k_22 = h_22;
                  t = not_null(k_22);
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
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_89 (ATerm), ATerm t_89 (ATerm))
{
  ATerm q_22 = NULL;
  ATerm s_22 = NULL,t_22 = NULL;
  q_22 = t;
  {
    ATerm u_22 = NULL;
    t = not_null(q_22);
    {
      ATerm e_23 = NULL;
      t = s_89(t);
      {
        u_22 = t;
        {
          if(((s_22 != NULL) && (s_22 != u_22)))
            _fail(u_22);
          else
            s_22 = u_22;
          {
            t = t_89(t);
            {
              e_23 = t;
              if(((t_22 != NULL) && (t_22 != e_23)))
                _fail(e_23);
              else
                t_22 = e_23;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), not_null(t_22));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm i_23 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_88(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = _all(t, i_23);
      }
    return(t);
  }
  t = i_23(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym__2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      {
        ATerm v_23 = NULL;
        if(((v_23 != NULL) && (v_23 != p_23)))
          _fail(p_23);
        else
          v_23 = p_23;
      }
    }
  else
    {
      if(match_cons(n_23, sym__3))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          q_23 = ATgetArgument(n_23, 2);
          {
            ATerm b_24 = NULL;
            ATerm c_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(p_23));
            {
              t = zip_1(t, _id);
              {
                c_24 = t;
                if(((b_24 != NULL) && (b_24 != c_24)))
                  _fail(c_24);
                else
                  b_24 = c_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), not_null(q_23));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_89 (ATerm), ATerm v_89 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  t = subs_args_0(t);
  {
    i_24 = t;
    h_24 :
    if(match_cons(i_24, sym__2))
      {
        j_24 = ATgetArgument(i_24, 0);
        k_24 = ATgetArgument(i_24, 1);
        {
          t = not_null(k_24);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(j_24);
                return(t);
              }
              t = SubsVar_2(t, u_89, w_0);
              t = v_89(t);
              return(t);
            }
            t = alltd_1(t, v_0);
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
ATerm substitute_1 (ATerm t, ATerm w_89 (ATerm))
{
  t = substitute_2(t, w_89, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  s_24 = t;
  q_24 :
  if(match_cons(s_24, sym__2))
    {
      t_24 = ATgetArgument(s_24, 0);
      u_24 = ATgetArgument(s_24, 1);
      r_24 :
      if(((ATgetType(u_24) == AT_LIST) && ((ATermList) u_24 != ATempty)))
        {
          v_24 = ATgetFirst((ATermList) u_24);
          w_24 = (ATerm) ATgetNext((ATermList) u_24);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_24)), not_null(v_24)), not_null(w_24));
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
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  f_26 = t;
  v_25 :
  if(((ATgetType(f_26) == AT_LIST) && ((ATermList) f_26 != ATempty)))
    {
      g_26 = ATgetFirst((ATermList) f_26);
      j_26 = (ATerm) ATgetNext((ATermList) f_26);
      w_25 :
      if(match_cons(g_26, sym__2))
        {
          h_26 = ATgetArgument(g_26, 0);
          i_26 = ATgetArgument(g_26, 1);
          {
            ATerm n_26 = NULL,o_26 = NULL,u_26 = NULL,a_27 = NULL;
            ATerm h_11;
            h_11 = t;
            {
              ATerm p_26 = NULL;
              ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
              t = not_null(i_26);
              {
                p_26 = t;
                {
                  t = SSL_explode_term(not_null(p_26));
                  {
                    r_26 = t;
                    e_25 :
                    if(match_cons(r_26, sym__2))
                      {
                        s_26 = ATgetArgument(r_26, 0);
                        t_26 = ATgetArgument(r_26, 1);
                        {
                          if(((n_26 != NULL) && (n_26 != s_26)))
                            _fail(s_26);
                          else
                            n_26 = s_26;
                          if(((o_26 != NULL) && (o_26 != t_26)))
                            _fail(t_26);
                          else
                            o_26 = t_26;
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
            t = h_11;
            {
              ATerm i_11;
              i_11 = t;
              {
                ATerm v_26 = NULL;
                ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
                t = not_null(h_26);
                {
                  v_26 = t;
                  {
                    t = SSL_explode_term(not_null(v_26));
                    {
                      x_26 = t;
                      q_25 :
                      if(match_cons(x_26, sym__2))
                        {
                          y_26 = ATgetArgument(x_26, 0);
                          z_26 = ATgetArgument(x_26, 1);
                          {
                            if(((n_26 != NULL) && (n_26 != y_26)))
                              _fail(y_26);
                            else
                              n_26 = y_26;
                            if(((u_26 != NULL) && (u_26 != z_26)))
                              _fail(z_26);
                            else
                              u_26 = z_26;
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
              t = i_11;
              {
                ATerm b_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(o_26));
                {
                  t = zip_1(t, _id);
                  {
                    b_27 = t;
                    if(((a_27 != NULL) && (a_27 != b_27)))
                      _fail(b_27);
                    else
                      a_27 = b_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), not_null(j_26));
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
  ATerm n_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  n_27 = t;
  l_27 :
  if(((ATgetType(n_27) == AT_LIST) && ((ATermList) n_27 != ATempty)))
    {
      t_27 = ATgetFirst((ATermList) n_27);
      w_27 = (ATerm) ATgetNext((ATermList) n_27);
      m_27 :
      if(match_cons(t_27, sym__2))
        {
          u_27 = ATgetArgument(t_27, 0);
          v_27 = ATgetArgument(t_27, 1);
          {
            ATerm y_27 = NULL;
            if(((u_27 != NULL) && (u_27 != v_27)))
              _fail(v_27);
            else
              u_27 = v_27;
            {
              if(((y_27 != NULL) && (y_27 != w_27)))
                _fail(w_27);
              else
                y_27 = w_27;
              t = not_null(y_27);
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
ATerm while_not_2 (ATerm t, ATerm e_74 (ATerm), ATerm f_74 (ATerm))
{
  ATerm a_28 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_74(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          t = f_74(t);
          t = a_28(t);
        }
      }
    return(t);
  }
  t = a_28(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  t = h_74(t);
  t = while_not_2(t, i_74, j_74);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  d_28 :
  if(((ATgetType(e_28) == AT_LIST) && ((ATermList) e_28 != ATempty)))
    {
      f_28 = ATgetFirst((ATermList) e_28);
      g_28 = (ATerm) ATgetNext((ATermList) e_28);
      {
        t = t_79(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm j_28 = NULL;
            j_28 = t;
            if(((f_28 != NULL) && (f_28 != j_28)))
              _fail(j_28);
            else
              f_28 = j_28;
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(g_28);
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
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
      p_28 = t;
      n_28 :
      if(match_cons(p_28, sym__2))
        {
          q_28 = ATgetArgument(p_28, 0);
          r_28 = ATgetArgument(p_28, 1);
          {
            t = not_null(q_28);
            {
              ATerm x_28 (ATerm t)
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
                    {
                      ATerm q_11 = t;
                      int f_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_0 (ATerm t)
                          {
                            t = not_null(r_28);
                            return(t);
                          }
                          t = HdMember_1(t, y_0);
                          t = x_28(t);
                          LocalPopChoice(f_12);
                        }
                      else
                        {
                          t = q_11;
                          t = Cons_2(t, _id, x_28);
                        }
                    }
                  }
                return(t);
              }
              t = x_28(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm u_28 = NULL;
          u_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_28));
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          ATerm g_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 (ATerm t)
              {
                ATerm n_12 = t;
                int p_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(p_12);
                  }
                else
                  {
                    t = n_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, c_1);
              LocalPopChoice(m_12);
            }
          else
            {
              t = g_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, z_0, a_1, b_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_88 (ATerm))
{
  ATerm z_28 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_88(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = _one(t, z_28);
      }
    return(t);
  }
  t = z_28(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym__2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      {
        t = not_null(f_29);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm i_29 = NULL;
            i_29 = t;
            if(((e_29 != NULL) && (e_29 != i_29)))
              _fail(i_29);
            else
              e_29 = i_29;
            return(t);
          }
          t = oncetd_1(t, d_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL;
  o_29 = t;
  n_29 :
  if(match_cons(o_29, sym_Var_1))
    {
      p_29 = ATgetArgument(o_29, 0);
      {
        ATerm r_29 = NULL;
        t = not_null(p_29);
        {
          t = e_65(t);
          {
            r_29 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_29));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  m_31 = t;
  l_30 :
  if(match_cons(m_31, sym_Seq_2))
    {
      n_31 = ATgetArgument(m_31, 0);
      p_31 = ATgetArgument(m_31, 1);
      m_30 :
      if(match_cons(n_31, sym_Assign_1))
        {
          o_31 = ATgetArgument(n_31, 0);
          n_30 :
          if(match_cons(o_31, sym_Var_1))
            {
              f_31 = ATgetArgument(o_31, 0);
              o_30 :
              if(match_cons(p_31, sym_Seq_2))
                {
                  q_31 = ATgetArgument(p_31, 0);
                  r_31 = ATgetArgument(p_31, 1);
                  p_30 :
                  if(match_cons(q_31, sym_Build_1))
                    {
                      i_31 = ATgetArgument(q_31, 0);
                      q_30 :
                      if(match_cons(i_31, sym_Var_1))
                        {
                          j_31 = ATgetArgument(i_31, 0);
                          {
                            ATerm x_31 = NULL;
                            if(((f_31 != NULL) && (f_31 != j_31)))
                              _fail(j_31);
                            else
                              f_31 = j_31;
                            {
                              if(((x_31 != NULL) && (x_31 != r_31)))
                                _fail(r_31);
                              else
                                x_31 = r_31;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_31))), not_null(x_31));
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
          if(match_cons(n_31, sym_Build_1))
            {
              o_31 = ATgetArgument(n_31, 0);
              r_30 :
              if(match_cons(p_31, sym_Scope_2))
                {
                  q_31 = ATgetArgument(p_31, 0);
                  r_31 = ATgetArgument(p_31, 1);
                  s_30 :
                  if(match_cons(r_31, sym_Seq_2))
                    {
                      s_31 = ATgetArgument(r_31, 0);
                      v_31 = ATgetArgument(r_31, 1);
                      t_30 :
                      if(match_cons(s_31, sym_Assign_1))
                        {
                          t_31 = ATgetArgument(s_31, 0);
                          u_30 :
                          if(match_cons(t_31, sym_Var_1))
                            {
                              u_31 = ATgetArgument(t_31, 0);
                              {
                                ATerm s_12 = t;
                                int x_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_33 = NULL,c_33 = NULL;
                                    ATerm y_12;
                                    y_12 = t;
                                    {
                                      ATerm b_33 = NULL;
                                      t = not_null(o_31);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), not_null(q_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_31), (ATerm) ATinsert(ATempty, not_null(u_31)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  b_33 = t;
                                                  if(((a_33 != NULL) && (a_33 != b_33)))
                                                    _fail(b_33);
                                                  else
                                                    a_33 = b_33;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = y_12;
                                    {
                                      ATerm d_33 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(u_31)), (ATerm)ATinsert(ATempty, not_null(o_31)), not_null(v_31));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          d_33 = t;
                                          if(((c_33 != NULL) && (c_33 != d_33)))
                                            _fail(d_33);
                                          else
                                            c_33 = d_33;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_33), not_null(c_33)));
                                    }
                                    LocalPopChoice(x_12);
                                  }
                                else
                                  {
                                    t = s_12;
                                    {
                                      ATerm i_33 = NULL,k_33 = NULL;
                                      ATerm z_12;
                                      z_12 = t;
                                      {
                                        ATerm j_33 = NULL;
                                        t = not_null(o_31);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), not_null(q_31));
                                            {
                                              t = in_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_31), (ATerm) ATinsert(ATempty, not_null(u_31)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    j_33 = t;
                                                    if(((i_33 != NULL) && (i_33 != j_33)))
                                                      _fail(j_33);
                                                    else
                                                      i_33 = j_33;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = z_12;
                                      {
                                        ATerm l_33 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(u_31)), (ATerm)ATinsert(ATempty, not_null(o_31)), not_null(v_31));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            l_33 = t;
                                            if(((k_33 != NULL) && (k_33 != l_33)))
                                              _fail(l_33);
                                            else
                                              k_33 = l_33;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_31)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_33), not_null(k_33)));
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
    }
  else
    {
      if(match_cons(m_31, sym_Scope_2))
        {
          n_31 = ATgetArgument(m_31, 0);
          p_31 = ATgetArgument(m_31, 1);
          v_30 :
          if(match_cons(p_31, sym_Seq_2))
            {
              q_31 = ATgetArgument(p_31, 0);
              r_31 = ATgetArgument(p_31, 1);
              w_30 :
              if(match_cons(q_31, sym_Assign_1))
                {
                  i_31 = ATgetArgument(q_31, 0);
                  x_30 :
                  if(match_cons(i_31, sym_Var_1))
                    {
                      j_31 = ATgetArgument(i_31, 0);
                      y_30 :
                      if(match_cons(r_31, sym_Seq_2))
                        {
                          s_31 = ATgetArgument(r_31, 0);
                          v_31 = ATgetArgument(r_31, 1);
                          z_30 :
                          if(match_cons(s_31, sym_Assign_2))
                            {
                              t_31 = ATgetArgument(s_31, 0);
                              g_31 = ATgetArgument(s_31, 1);
                              a_31 :
                              if(match_cons(t_31, sym_Var_1))
                                {
                                  u_31 = ATgetArgument(t_31, 0);
                                  b_31 :
                                  if(match_cons(g_31, sym_Var_1))
                                    {
                                      h_31 = ATgetArgument(g_31, 0);
                                      {
                                        ATerm b_32 = NULL,c_32 = NULL,e_32 = NULL;
                                        if(((j_31 != NULL) && (j_31 != h_31)))
                                          _fail(h_31);
                                        else
                                          j_31 = h_31;
                                        {
                                          if(((b_32 != NULL) && (b_32 != v_31)))
                                            _fail(v_31);
                                          else
                                            b_32 = v_31;
                                          {
                                            ATerm o_13;
                                            o_13 = t;
                                            {
                                              ATerm d_32 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), not_null(n_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), not_null(n_31));
                                                  {
                                                    t = in_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), (ATerm) ATinsert(ATempty, not_null(u_31)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          d_32 = t;
                                                          if(((c_32 != NULL) && (c_32 != d_32)))
                                                            _fail(d_32);
                                                          else
                                                            c_32 = d_32;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = o_13;
                                            {
                                              ATerm f_32 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(u_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_31))), not_null(b_32));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  f_32 = t;
                                                  if(((e_32 != NULL) && (e_32 != f_32)))
                                                    _fail(f_32);
                                                  else
                                                    e_32 = f_32;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_31))), not_null(e_32)));
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
                              if(match_cons(s_31, sym_Assign_1))
                                {
                                  t_31 = ATgetArgument(s_31, 0);
                                  c_31 :
                                  if(match_cons(t_31, sym_Var_1))
                                    {
                                      u_31 = ATgetArgument(t_31, 0);
                                      {
                                        ATerm k_32 = NULL,m_32 = NULL;
                                        ATerm p_13;
                                        p_13 = t;
                                        {
                                          ATerm l_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), not_null(n_31));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), not_null(n_31));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), (ATerm) ATinsert(ATempty, not_null(u_31)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      l_32 = t;
                                                      if(((k_32 != NULL) && (k_32 != l_32)))
                                                        _fail(l_32);
                                                      else
                                                        k_32 = l_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = p_13;
                                        {
                                          ATerm n_32 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(u_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_31))), not_null(v_31));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              n_32 = t;
                                              if(((m_32 != NULL) && (m_32 != n_32)))
                                                _fail(n_32);
                                              else
                                                m_32 = n_32;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_31))), not_null(m_32)));
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
                  if(match_cons(q_31, sym_Assign_2))
                    {
                      i_31 = ATgetArgument(q_31, 0);
                      k_31 = ATgetArgument(q_31, 1);
                      d_31 :
                      if(match_cons(i_31, sym_Var_1))
                        {
                          j_31 = ATgetArgument(i_31, 0);
                          e_31 :
                          if(match_cons(k_31, sym_Var_1))
                            {
                              l_31 = ATgetArgument(k_31, 0);
                              {
                                ATerm s_32 = NULL,u_32 = NULL;
                                ATerm q_13;
                                q_13 = t;
                                {
                                  ATerm t_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), not_null(n_31));
                                  {
                                    t = in_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_31), (ATerm) ATinsert(ATempty, not_null(j_31)));
                                      {
                                        t = diff_0(t);
                                        {
                                          t_32 = t;
                                          if(((s_32 != NULL) && (s_32 != t_32)))
                                            _fail(t_32);
                                          else
                                            s_32 = t_32;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = q_13;
                                {
                                  ATerm v_32 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(j_31)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_31))), not_null(r_31));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      v_32 = t;
                                      if(((u_32 != NULL) && (u_32 != v_32)))
                                        _fail(v_32);
                                      else
                                        u_32 = v_32;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_32), not_null(u_32));
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
ATerm HoistLet_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  h_34 = t;
  f_34 :
  if(match_cons(h_34, sym_Seq_2))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      g_34 :
      if(match_cons(j_34, sym_Let_2))
        {
          k_34 = ATgetArgument(j_34, 0);
          l_34 = ATgetArgument(j_34, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(k_34), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_34), not_null(l_34)));
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
ATerm conc_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      {
        t = not_null(t_34);
        {
          ATerm e_1 (ATerm t)
          {
            t = not_null(u_34);
            return(t);
          }
          t = at_end_1(t, e_1);
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
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_35)), not_null(b_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  k_35 = t;
  h_35 :
  if(match_cons(k_35, sym__2))
    {
      l_35 = ATgetArgument(k_35, 0);
      o_35 = ATgetArgument(k_35, 1);
      i_35 :
      if(((ATgetType(l_35) == AT_LIST) && ((ATermList) l_35 != ATempty)))
        {
          m_35 = ATgetFirst((ATermList) l_35);
          n_35 = (ATerm) ATgetNext((ATermList) l_35);
          j_35 :
          if(((ATgetType(o_35) == AT_LIST) && ((ATermList) o_35 != ATempty)))
            {
              p_35 = ATgetFirst((ATermList) o_35);
              q_35 = (ATerm) ATgetNext((ATermList) o_35);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_35), not_null(p_35)), (ATerm) ATmakeAppl(sym__2, not_null(n_35), not_null(q_35)));
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
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  x_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      y_35 :
      if(((ATermList) b_36 == ATempty))
        {
          z_35 :
          if(((ATermList) c_36 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm))
{
  ATerm e_36 (ATerm t)
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_83(t);
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        {
          t = t_83(t);
          {
            t = _2(t, v_83, e_36);
            t = u_83(t);
          }
        }
      }
    return(t);
  }
  t = e_36(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm x_83 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, x_83);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Cong_2))
    {
      u_36 = ATgetArgument(t_36, 0);
      v_36 = ATgetArgument(t_36, 1);
      {
        ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,x_37 = NULL;
        ATerm t_13;
        t_13 = t;
        {
          ATerm d_37 = NULL;
          t = not_null(v_36);
          {
            ATerm h_37 = NULL;
            t = map_1(t, new_0);
            {
              d_37 = t;
              {
                if(((a_37 != NULL) && (a_37 != d_37)))
                  _fail(d_37);
                else
                  a_37 = d_37;
                {
                  t = not_null(a_37);
                  {
                    ATerm i_37 = NULL;
                    ATerm f_1 (ATerm t)
                    {
                      ATerm e_37 = NULL;
                      ATerm f_37 = NULL;
                      f_37 = t;
                      if(((e_37 != NULL) && (e_37 != f_37)))
                        _fail(f_37);
                      else
                        e_37 = f_37;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_37));
                      return(t);
                    }
                    t = map_1(t, f_1);
                    {
                      h_37 = t;
                      {
                        if(((y_36 != NULL) && (y_36 != h_37)))
                          _fail(h_37);
                        else
                          y_36 = h_37;
                        {
                          t = not_null(v_36);
                          {
                            ATerm l_37 = NULL;
                            t = map_1(t, new_0);
                            {
                              i_37 = t;
                              {
                                if(((b_37 != NULL) && (b_37 != i_37)))
                                  _fail(i_37);
                                else
                                  b_37 = i_37;
                                {
                                  t = not_null(b_37);
                                  {
                                    ATerm m_37 = NULL,w_37 = NULL;
                                    ATerm g_1 (ATerm t)
                                    {
                                      ATerm j_37 = NULL;
                                      ATerm k_37 = NULL;
                                      k_37 = t;
                                      if(((j_37 != NULL) && (j_37 != k_37)))
                                        _fail(k_37);
                                      else
                                        j_37 = k_37;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_37));
                                      return(t);
                                    }
                                    t = map_1(t, g_1);
                                    {
                                      l_37 = t;
                                      {
                                        if(((z_36 != NULL) && (z_36 != l_37)))
                                          _fail(l_37);
                                        else
                                          z_36 = l_37;
                                        {
                                          ATerm n_37 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_37), not_null(b_37));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              n_37 = t;
                                              if(((m_37 != NULL) && (m_37 != n_37)))
                                                _fail(n_37);
                                              else
                                                m_37 = n_37;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), not_null(v_36));
                                            {
                                              ATerm h_1 (ATerm t)
                                              {
                                                ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
                                                o_37 = t;
                                                o_36 :
                                                if(match_cons(o_37, sym__2))
                                                  {
                                                    p_37 = ATgetArgument(o_37, 0);
                                                    s_37 = ATgetArgument(o_37, 1);
                                                    p_36 :
                                                    if(match_cons(p_37, sym__2))
                                                      {
                                                        q_37 = ATgetArgument(p_37, 0);
                                                        r_37 = ATgetArgument(p_37, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_37))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_37)))));
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
                                              t = zip_1(t, h_1);
                                              {
                                                w_37 = t;
                                                if(((c_37 != NULL) && (c_37 != w_37)))
                                                  _fail(w_37);
                                                else
                                                  c_37 = w_37;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_13;
        {
          ATerm y_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_37), not_null(b_37));
          {
            t = conc_0(t);
            {
              y_37 = t;
              if(((x_37 != NULL) && (x_37 != y_37)))
                _fail(y_37);
              else
                x_37 = y_37;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_37), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_36), not_null(y_36))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_37)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_36), not_null(z_36))))));
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
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  p_38 :
  if(match_cons(q_38, sym_Cong_2))
    {
      r_38 = ATgetArgument(q_38, 0);
      s_38 = ATgetArgument(q_38, 1);
      {
        ATerm v_38 = NULL;
        ATerm z_38 = NULL;
        t = not_null(s_38);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm w_38 = NULL,x_38 = NULL;
            x_38 = t;
            n_38 :
            if(match_cons(x_38, sym_Match_1))
              {
                w_38 = ATgetArgument(x_38, 0);
                t = not_null(w_38);
              }
            else
              {
                if(match_cons(x_38, sym_Id_0))
                  {
                    t = term_u_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, i_1);
          {
            z_38 = t;
            if(((v_38 != NULL) && (v_38 != z_38)))
              _fail(z_38);
            else
              v_38 = z_38;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(r_38), not_null(v_38)));
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
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  f_39 :
  if(match_cons(h_39, sym_Scope_2))
    {
      i_39 = ATgetArgument(h_39, 0);
      j_39 = ATgetArgument(h_39, 1);
      g_39 :
      if(((ATermList) i_39 == ATempty))
        {
          t = not_null(j_39);
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
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,m_40 = NULL,n_40 = NULL;
  h_40 = t;
  u_39 :
  if(match_cons(h_40, sym_Where_1))
    {
      m_40 = ATgetArgument(h_40, 0);
      v_39 :
      if(match_cons(m_40, sym_Seq_2))
        {
          g_40 = ATgetArgument(m_40, 0);
          c_40 = ATgetArgument(m_40, 1);
          w_39 :
          if(match_cons(g_40, sym_Where_1))
            {
              b_40 = ATgetArgument(g_40, 0);
              x_39 :
              if(match_cons(c_40, sym_Seq_2))
                {
                  d_40 = ATgetArgument(c_40, 0);
                  f_40 = ATgetArgument(c_40, 1);
                  y_39 :
                  if(match_cons(d_40, sym_Build_1))
                    {
                      e_40 = ATgetArgument(d_40, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_40), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_40)), not_null(f_40))));
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
          if(match_cons(m_40, sym_Where_1))
            {
              g_40 = ATgetArgument(m_40, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(g_40));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(h_40, sym_Test_1))
        {
          m_40 = ATgetArgument(h_40, 0);
          z_39 :
          if(match_cons(m_40, sym_Test_1))
            {
              g_40 = ATgetArgument(m_40, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(g_40));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(h_40, sym_Not_1))
            {
              m_40 = ATgetArgument(h_40, 0);
              a_40 :
              if(match_cons(m_40, sym_Not_1))
                {
                  g_40 = ATgetArgument(m_40, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(g_40));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(h_40, sym_LChoice_2))
                {
                  m_40 = ATgetArgument(h_40, 0);
                  n_40 = ATgetArgument(h_40, 1);
                  {
                    if(((m_40 != NULL) && (m_40 != n_40)))
                      _fail(n_40);
                    else
                      m_40 = n_40;
                    t = not_null(m_40);
                  }
                }
              else
                {
                  if(match_cons(h_40, sym_Choice_2))
                    {
                      m_40 = ATgetArgument(h_40, 0);
                      n_40 = ATgetArgument(h_40, 1);
                      {
                        if(((m_40 != NULL) && (m_40 != n_40)))
                          _fail(n_40);
                        else
                          m_40 = n_40;
                        t = not_null(m_40);
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
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  s_41 = t;
  o_41 :
  if(match_cons(s_41, sym_LChoice_2))
    {
      t_41 = ATgetArgument(s_41, 0);
      w_41 = ATgetArgument(s_41, 1);
      p_41 :
      if(match_cons(t_41, sym_LChoice_2))
        {
          u_41 = ATgetArgument(t_41, 0);
          v_41 = ATgetArgument(t_41, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_41), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_41), not_null(w_41)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(s_41, sym_Seq_2))
        {
          t_41 = ATgetArgument(s_41, 0);
          w_41 = ATgetArgument(s_41, 1);
          q_41 :
          if(match_cons(t_41, sym_Seq_2))
            {
              u_41 = ATgetArgument(t_41, 0);
              v_41 = ATgetArgument(t_41, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_41), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_41), not_null(w_41)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(s_41, sym_Choice_2))
            {
              t_41 = ATgetArgument(s_41, 0);
              w_41 = ATgetArgument(s_41, 1);
              r_41 :
              if(match_cons(t_41, sym_Choice_2))
                {
                  u_41 = ATgetArgument(t_41, 0);
                  v_41 = ATgetArgument(t_41, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_41), (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_41), not_null(w_41)));
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
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  s_43 = t;
  i_43 :
  if(match_cons(s_43, sym_InfixApp_3))
    {
      t_43 = ATgetArgument(s_43, 0);
      p_43 = ATgetArgument(s_43, 1);
      o_43 = ATgetArgument(s_43, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_43), (ATerm) ATmakeAppl(sym_Op_2, term_v_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_43)), not_null(t_43))));
    }
  else
    {
      if(match_cons(s_43, sym_BAM_3))
        {
          t_43 = ATgetArgument(s_43, 0);
          p_43 = ATgetArgument(s_43, 1);
          o_43 = ATgetArgument(s_43, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(o_43))), not_null(t_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_43))));
        }
      else
        {
          if(match_cons(s_43, sym_AM_2))
            {
              t_43 = ATgetArgument(s_43, 0);
              p_43 = ATgetArgument(s_43, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_43), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_43)));
            }
          else
            {
              if(match_cons(s_43, sym_MA_2))
                {
                  t_43 = ATgetArgument(s_43, 0);
                  p_43 = ATgetArgument(s_43, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_43)), not_null(p_43));
                }
              else
                {
                  if(match_cons(s_43, sym_BA_2))
                    {
                      t_43 = ATgetArgument(s_43, 0);
                      p_43 = ATgetArgument(s_43, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_43)), not_null(t_43));
                    }
                  else
                    {
                      if(match_cons(s_43, sym_Lets_2))
                        {
                          t_43 = ATgetArgument(s_43, 0);
                          p_43 = ATgetArgument(s_43, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_43), not_null(p_43));
                        }
                      else
                        {
                          if(match_cons(s_43, sym_LChoices_1))
                            {
                              t_43 = ATgetArgument(s_43, 0);
                              j_43 :
                              if(((ATgetType(t_43) == AT_LIST) && ((ATermList) t_43 != ATempty)))
                                {
                                  q_43 = ATgetFirst((ATermList) t_43);
                                  r_43 = (ATerm) ATgetNext((ATermList) t_43);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_43), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(r_43)));
                                }
                              else
                                {
                                  if(((ATermList) t_43 == ATempty))
                                    {
                                      t = term_y_9;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(s_43, sym_Choices_1))
                                {
                                  t_43 = ATgetArgument(s_43, 0);
                                  m_43 :
                                  if(((ATgetType(t_43) == AT_LIST) && ((ATermList) t_43 != ATempty)))
                                    {
                                      q_43 = ATgetFirst((ATermList) t_43);
                                      r_43 = (ATerm) ATgetNext((ATermList) t_43);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_43), (ATerm) ATmakeAppl(sym_Choices_1, not_null(r_43)));
                                    }
                                  else
                                    {
                                      if(((ATermList) t_43 == ATempty))
                                        {
                                          t = term_y_9;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(s_43, sym_Seqs_1))
                                    {
                                      t_43 = ATgetArgument(s_43, 0);
                                      n_43 :
                                      if(((ATgetType(t_43) == AT_LIST) && ((ATermList) t_43 != ATempty)))
                                        {
                                          q_43 = ATgetFirst((ATermList) t_43);
                                          r_43 = (ATerm) ATgetNext((ATermList) t_43);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_43), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_43)));
                                        }
                                      else
                                        {
                                          if(((ATermList) t_43 == ATempty))
                                            {
                                              t = term_w_13;
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
  ATerm d_45 = NULL,e_45 = NULL;
  d_45 = t;
  b_45 :
  if(match_cons(d_45, sym_Where_1))
    {
      e_45 = ATgetArgument(d_45, 0);
      c_45 :
      if(match_cons(e_45, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  h_45 :
  if(match_cons(j_45, sym_LChoice_2))
    {
      k_45 = ATgetArgument(j_45, 0);
      l_45 = ATgetArgument(j_45, 1);
      i_45 :
      if(match_cons(l_45, sym_Fail_0))
        {
          t = not_null(k_45);
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
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
  r_45 = t;
  p_45 :
  if(match_cons(r_45, sym_LChoice_2))
    {
      s_45 = ATgetArgument(r_45, 0);
      t_45 = ATgetArgument(r_45, 1);
      q_45 :
      if(match_cons(s_45, sym_Fail_0))
        {
          t = not_null(t_45);
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
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
  z_45 = t;
  x_45 :
  if(match_cons(z_45, sym_Choice_2))
    {
      a_46 = ATgetArgument(z_45, 0);
      b_46 = ATgetArgument(z_45, 1);
      y_45 :
      if(match_cons(b_46, sym_Fail_0))
        {
          t = not_null(a_46);
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
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  f_46 :
  if(match_cons(h_46, sym_Choice_2))
    {
      i_46 = ATgetArgument(h_46, 0);
      j_46 = ATgetArgument(h_46, 1);
      g_46 :
      if(match_cons(i_46, sym_Fail_0))
        {
          t = not_null(j_46);
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
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  b_47 :
  if(match_cons(c_47, sym_Cong_2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      {
        t = not_null(e_47);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm m_47 = NULL;
            m_47 = t;
            z_46 :
            if(!(match_cons(m_47, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, j_1);
        }
        t = term_y_9;
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
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  p_47 :
  if(match_cons(r_47, sym_Path_2))
    {
      s_47 = ATgetArgument(r_47, 0);
      t_47 = ATgetArgument(r_47, 1);
      q_47 :
      if(match_cons(t_47, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm a_48 = NULL,b_48 = NULL;
  a_48 = t;
  y_47 :
  if(match_cons(a_48, sym_One_1))
    {
      b_48 = ATgetArgument(a_48, 0);
      z_47 :
      if(match_cons(b_48, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm o_48 = NULL,b_49 = NULL;
  o_48 = t;
  e_48 :
  if(match_cons(o_48, sym_Some_1))
    {
      b_49 = ATgetArgument(o_48, 0);
      n_48 :
      if(match_cons(b_49, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  e_49 :
  if(match_cons(g_49, sym_Rec_2))
    {
      h_49 = ATgetArgument(g_49, 0);
      i_49 = ATgetArgument(g_49, 1);
      f_49 :
      if(match_cons(i_49, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  m_49 :
  if(match_cons(o_49, sym_Scope_2))
    {
      p_49 = ATgetArgument(o_49, 0);
      q_49 = ATgetArgument(o_49, 1);
      n_49 :
      if(match_cons(q_49, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  u_49 :
  if(match_cons(w_49, sym_Seq_2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      v_49 :
      if(match_cons(x_49, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm e_50 = NULL,f_50 = NULL;
  e_50 = t;
  c_50 :
  if(match_cons(e_50, sym_Not_1))
    {
      f_50 = ATgetArgument(e_50, 0);
      d_50 :
      if(match_cons(f_50, sym_Fail_0))
        {
          t = term_w_13;
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
  ATerm k_50 = NULL,l_50 = NULL;
  k_50 = t;
  i_50 :
  if(match_cons(k_50, sym_Test_1))
    {
      l_50 = ATgetArgument(k_50, 0);
      j_50 :
      if(match_cons(l_50, sym_Fail_0))
        {
          t = term_y_9;
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
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm g_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(j_14);
          }
        else
          {
            t = g_14;
            {
              ATerm k_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(n_14);
                }
              else
                {
                  t = k_14;
                  {
                    ATerm p_14 = t;
                    int q_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
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
                              t = F6_0(t);
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
                                    t = F7_0(t);
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
                                          t = F8_0(t);
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
                                                t = F9_0(t);
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
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
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
                                                                  t = F12_0(t);
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
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(g_15);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_15;
                                                                        {
                                                                          ATerm h_15 = t;
                                                                          int i_15 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(i_15);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_15;
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
  ATerm q_50 = NULL,r_50 = NULL;
  q_50 = t;
  o_50 :
  if(match_cons(q_50, sym_Match_1))
    {
      r_50 = ATgetArgument(q_50, 0);
      p_50 :
      if(match_cons(r_50, sym_Wld_0))
        {
          t = term_w_13;
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
  ATerm w_50 = NULL,x_50 = NULL;
  w_50 = t;
  u_50 :
  if(match_cons(w_50, sym_Where_1))
    {
      x_50 = ATgetArgument(w_50, 0);
      v_50 :
      if(match_cons(x_50, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm c_51 = NULL,d_51 = NULL;
  c_51 = t;
  a_51 :
  if(match_cons(c_51, sym_All_1))
    {
      d_51 = ATgetArgument(c_51, 0);
      b_51 :
      if(match_cons(d_51, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  g_51 :
  if(match_cons(i_51, sym_Rec_2))
    {
      j_51 = ATgetArgument(i_51, 0);
      k_51 = ATgetArgument(i_51, 1);
      h_51 :
      if(match_cons(k_51, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  q_51 = t;
  o_51 :
  if(match_cons(q_51, sym_Scope_2))
    {
      r_51 = ATgetArgument(q_51, 0);
      s_51 = ATgetArgument(q_51, 1);
      p_51 :
      if(match_cons(s_51, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  w_51 :
  if(match_cons(y_51, sym_LChoice_2))
    {
      z_51 = ATgetArgument(y_51, 0);
      a_52 = ATgetArgument(y_51, 1);
      x_51 :
      if(match_cons(z_51, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  e_52 :
  if(match_cons(g_52, sym_Seq_2))
    {
      h_52 = ATgetArgument(g_52, 0);
      i_52 = ATgetArgument(g_52, 1);
      f_52 :
      if(match_cons(i_52, sym_Id_0))
        {
          t = not_null(h_52);
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
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL;
  o_52 = t;
  m_52 :
  if(match_cons(o_52, sym_Seq_2))
    {
      p_52 = ATgetArgument(o_52, 0);
      q_52 = ATgetArgument(o_52, 1);
      n_52 :
      if(match_cons(p_52, sym_Id_0))
        {
          t = not_null(q_52);
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
  ATerm w_52 = NULL,x_52 = NULL;
  w_52 = t;
  u_52 :
  if(match_cons(w_52, sym_Not_1))
    {
      x_52 = ATgetArgument(w_52, 0);
      v_52 :
      if(match_cons(x_52, sym_Id_0))
        {
          t = term_y_9;
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
  ATerm c_53 = NULL,d_53 = NULL;
  c_53 = t;
  a_53 :
  if(match_cons(c_53, sym_Test_1))
    {
      d_53 = ATgetArgument(c_53, 0);
      b_53 :
      if(match_cons(d_53, sym_Id_0))
        {
          t = term_w_13;
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
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
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
            t = I2_0(t);
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
                  t = I3_0(t);
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
                        t = I4_0(t);
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
                              t = I7_0(t);
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
                                    t = I8_0(t);
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
                                          t = I9_0(t);
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
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      LocalPopChoice(a_16);
                                                    }
                                                  else
                                                    {
                                                      t = z_15;
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
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
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
            t = ElimFail_0(t);
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
                  t = HL_0(t);
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = f_16;
                  {
                    ATerm h_16 = t;
                    int i_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(i_16);
                      }
                    else
                      {
                        t = h_16;
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
                                      ATerm n_16 = t;
                                      int o_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(o_16);
                                        }
                                      else
                                        {
                                          t = n_16;
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
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            {
              ATerm t_16 = t;
              int u_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(u_16);
                }
              else
                {
                  t = t_16;
                  {
                    ATerm v_16 = t;
                    int w_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(w_16);
                      }
                    else
                      {
                        t = v_16;
                        {
                          ATerm x_16 = t;
                          int j_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(j_17);
                            }
                          else
                            {
                              t = x_16;
                              {
                                ATerm k_17 = t;
                                int l_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(l_17);
                                  }
                                else
                                  {
                                    t = k_17;
                                    {
                                      ATerm m_17 = t;
                                      int n_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(n_17);
                                        }
                                      else
                                        {
                                          t = m_17;
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
ATerm repeat_2 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm))
{
  ATerm f_53 (ATerm t)
  {
    ATerm o_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_73(t);
        t = f_53(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = o_17;
        t = o_73(t);
      }
    return(t);
  }
  t = f_53(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_73 (ATerm))
{
  t = repeat_2(t, q_73, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm g_53 (ATerm t)
  {
    t = q_86(t);
    {
      t = _all(t, g_53);
      t = q_86(t);
    }
    return(t);
  }
  t = g_53(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(x_17);
        }
      else
        {
          t = w_17;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, l_1);
    return(t);
  }
  t = downup_1(t, k_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm h_66 (ATerm))
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym_SDef_3))
    {
      n_53 = ATgetArgument(m_53, 0);
      o_53 = ATgetArgument(m_53, 1);
      p_53 = ATgetArgument(m_53, 2);
      {
        ATerm t_53 = NULL;
        t = not_null(n_53);
        {
          ATerm v_53 = NULL;
          t = f_66(t);
          {
            t_53 = t;
            {
              t = not_null(o_53);
              {
                ATerm x_53 = NULL;
                t = g_66(t);
                {
                  v_53 = t;
                  {
                    t = not_null(p_53);
                    {
                      t = h_66(t);
                      {
                        x_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_53), not_null(v_53), not_null(x_53));
                      }
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
ATerm Strategies_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm g_54 = NULL,h_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym_Strategies_1))
    {
      h_54 = ATgetArgument(g_54, 0);
      {
        ATerm j_54 = NULL;
        t = not_null(h_54);
        {
          t = s_64(t);
          {
            j_54 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_54));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm q_54 = NULL,r_54 = NULL;
  q_54 = t;
  p_54 :
  if(match_cons(q_54, sym_Specification_1))
    {
      r_54 = ATgetArgument(q_54, 0);
      {
        ATerm t_54 = NULL;
        t = not_null(r_54);
        {
          t = u_64(t);
          {
            t_54 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_54));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm n_91 (ATerm))
{
  ATerm m_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm u_1 (ATerm t)
          {
            t = SDef_3(t, _id, _id, n_91);
            return(t);
          }
          t = map_1(t, u_1);
          return(t);
        }
        t = Strategies_1(t, t_1);
        return(t);
      }
      t = Cons_2(t, s_1, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, r_1);
    return(t);
  }
  t = Specification_1(t, m_1);
  return(t);
}
ATerm _2 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm))
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
  b_55 = t;
  a_55 :
  if(match_cons(b_55, sym__2))
    {
      c_55 = ATgetArgument(b_55, 0);
      d_55 = ATgetArgument(b_55, 1);
      {
        ATerm g_55 = NULL;
        t = not_null(c_55);
        {
          ATerm i_55 = NULL;
          t = n_55(t);
          {
            g_55 = t;
            {
              t = not_null(d_55);
              {
                t = o_55(t);
                {
                  i_55 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_55), not_null(i_55));
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
  ATerm y_17;
  y_17 = t;
  {
    ATerm z_1 (ATerm t)
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
    t = option_defined_1(t, z_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_18), not_null(r_55)), term_a_18));
      {
        t = printnl_0(t);
        {
          t = term_c_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_17;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATempty, term_d_18));
  {
    t = printnl_0(t);
    {
      t = term_c_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm e_18 = t;
      if((PushChoice() == 0))
        {
          ATerm d_2 (ATerm t)
          {
            ATerm c_56 = NULL;
            c_56 = t;
            v_55 :
            if(!(match_cons(c_56, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_2);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_18;
        }
      return(t);
    }
    t = _2(t, b_2, _id);
    {
      ATerm e_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          ATerm d_56 = NULL,e_56 = NULL;
          d_56 = t;
          x_55 :
          if(match_cons(d_56, sym_Runtime_1))
            {
              e_56 = ATgetArgument(d_56, 0);
              if(((b_56 != NULL) && (b_56 != e_56)))
                _fail(e_56);
              else
                b_56 = e_56;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_2);
        return(t);
      }
      t = _2(t, e_2, _id);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm l_2 (ATerm t)
          {
            ATerm f_56 = NULL,g_56 = NULL;
            f_56 = t;
            z_55 :
            if(match_cons(f_56, sym_Program_1))
              {
                g_56 = ATgetArgument(f_56, 0);
                if(((a_56 != NULL) && (a_56 != g_56)))
                  _fail(g_56);
                else
                  a_56 = g_56;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, l_2);
          return(t);
        }
        t = _2(t, k_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), not_null(b_56)), term_g_18), not_null(a_56)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_2);
  {
    t = term_i_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym__2))
    {
      m_56 = ATgetArgument(l_56, 0);
      n_56 = ATgetArgument(l_56, 1);
      t = SSL_WriteToTextFile(not_null(m_56), not_null(n_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym__2))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      t = SSL_WriteToBinaryFile(not_null(u_56), not_null(v_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_57 = NULL;
  ATerm j_18;
  j_18 = t;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm k_18 = t;
      int l_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_2 (ATerm t)
          {
            ATerm g_57 = NULL,h_57 = NULL;
            g_57 = t;
            c_57 :
            if(match_cons(g_57, sym_Output_1))
              {
                h_57 = ATgetArgument(g_57, 0);
                if(((f_57 != NULL) && (f_57 != h_57)))
                  _fail(h_57);
                else
                  f_57 = h_57;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_2);
          LocalPopChoice(l_18);
        }
      else
        {
          t = k_18;
          {
            ATerm i_57 = NULL;
            t = term_o_18;
            {
              i_57 = t;
              if(((f_57 != NULL) && (f_57 != i_57)))
                _fail(i_57);
              else
                f_57 = i_57;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_2, _id);
  }
  t = j_18;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_2 (ATerm t)
      {
        t = not_null(f_57);
        return(t);
      }
      t = split_2(t, p_2, _id);
      return(t);
    }
    t = _2(t, _id, o_2);
    {
      ATerm p_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm j_57 = NULL;
              j_57 = t;
              e_57 :
              if(!(match_cons(j_57, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, v_2);
            return(t);
          }
          t = _2(t, u_2, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm x_70 (ATerm))
{
  ATerm p_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  ATerm u_18;
  u_18 = t;
  t = dtime_0(t);
  t = u_18;
  {
    t = x_70(t);
    {
      ATerm v_18;
      v_18 = t;
      {
        ATerm q_57 = NULL;
        t = dtime_0(t);
        {
          q_57 = t;
          if(((p_57 != NULL) && (p_57 != q_57)))
            _fail(q_57);
          else
            p_57 = q_57;
        }
      }
      t = v_18;
      {
        r_57 = t;
        o_57 :
        if(match_cons(r_57, sym__2))
          {
            s_57 = ATgetArgument(r_57, 0);
            t_57 = ATgetArgument(r_57, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_57)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_57))), not_null(t_57));
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
  ATerm z_57 = NULL;
  z_57 = t;
  t = SSL_ReadFromFile(not_null(z_57));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm e_58 = NULL,g_58 = NULL;
  ATerm w_18;
  w_18 = t;
  {
    ATerm f_58 = NULL;
    t = f_85(t);
    {
      f_58 = t;
      if(((e_58 != NULL) && (e_58 != f_58)))
        _fail(f_58);
      else
        e_58 = f_58;
    }
  }
  t = w_18;
  {
    ATerm h_58 = NULL;
    t = g_85(t);
    {
      h_58 = t;
      if(((g_58 != NULL) && (g_58 != h_58)))
        _fail(h_58);
      else
        g_58 = h_58;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_58), not_null(g_58));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_58 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm o_58 = NULL,p_58 = NULL;
          o_58 = t;
          l_58 :
          if(match_cons(o_58, sym_Input_1))
            {
              p_58 = ATgetArgument(o_58, 0);
              if(((n_58 != NULL) && (n_58 != p_58)))
                _fail(p_58);
              else
                n_58 = p_58;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_2);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        {
          ATerm q_58 = NULL;
          t = term_d_19;
          {
            q_58 = t;
            if(((n_58 != NULL) && (n_58 != q_58)))
              _fail(q_58);
            else
              n_58 = q_58;
          }
        }
      }
  }
  t = a_19;
  {
    ATerm z_2 (ATerm t)
    {
      t = not_null(n_58);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  t_58 :
  if(!(match_cons(u_58, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_70 (ATerm))
{
  ATerm a_3 (ATerm t)
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        {
          ATerm g_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_19);
            }
          else
            {
              t = g_19;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_3);
  t = w_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_58 = NULL;
  w_58 = t;
  t = SSL_table_create(not_null(w_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_59 = NULL;
  a_59 = t;
  {
    ATerm i_19;
    i_19 = t;
    {
      t = term_j_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_19, term_k_19, not_null(a_59));
          t = table_put_0(t);
        }
      }
    }
    t = i_19;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  i_59 = t;
  g_59 :
  if(match_string(i_59, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_59) == AT_LIST) && ((ATermList) i_59 != ATempty)))
        {
          j_59 = ATgetFirst((ATermList) i_59);
          k_59 = (ATerm) ATgetNext((ATermList) i_59);
          h_59 :
          if(((ATgetType(k_59) == AT_LIST) && ((ATermList) k_59 != ATempty)))
            {
              l_59 = ATgetFirst((ATermList) k_59);
              m_59 = (ATerm) ATgetNext((ATermList) k_59);
              {
                ATerm q_59 = NULL;
                ATerm l_19;
                l_19 = t;
                {
                  t = not_null(j_59);
                  t = j_0(t);
                }
                t = l_19;
                {
                  ATerm r_59 = NULL;
                  t = not_null(l_59);
                  {
                    t = k_0(t);
                    {
                      r_59 = t;
                      if(((q_59 != NULL) && (q_59 != r_59)))
                        _fail(r_59);
                      else
                        q_59 = r_59;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_59)), not_null(q_59));
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
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm g_60 = NULL;
        g_60 = t;
        v_59 :
        if(!(match_string(g_60, "-S")))
          {
            if(!(match_string(g_60, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_o_19;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_p_19;
        return(t);
      }
      t = Option_3(t, b_3, c_3, d_3);
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              ATerm h_60 = NULL;
              h_60 = t;
              w_59 :
              if(!(match_string(h_60, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_s_19;
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_t_19;
              return(t);
            }
            t = Option_3(t, h_3, i_3, j_3);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm u_19 = t;
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_3 (ATerm t)
                  {
                    ATerm i_60 = NULL;
                    i_60 = t;
                    x_59 :
                    if(!(match_string(i_60, "-v")))
                      {
                        if(!(match_string(i_60, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_3 (ATerm t)
                  {
                    t = term_w_19;
                    return(t);
                  }
                  ATerm u_3 (ATerm t)
                  {
                    t = term_x_19;
                    return(t);
                  }
                  t = Option_3(t, k_3, t_3, u_3);
                  LocalPopChoice(v_19);
                }
              else
                {
                  t = u_19;
                  {
                    ATerm y_19 = t;
                    int z_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_3 (ATerm t)
                        {
                          ATerm j_60 = NULL;
                          j_60 = t;
                          y_59 :
                          if(!(match_string(j_60, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_3 (ATerm t)
                        {
                          ATerm k_60 = NULL;
                          ATerm l_60 = NULL;
                          l_60 = t;
                          if(((k_60 != NULL) && (k_60 != l_60)))
                            _fail(l_60);
                          else
                            k_60 = l_60;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(k_60));
                          return(t);
                        }
                        ATerm x_3 (ATerm t)
                        {
                          t = term_a_20;
                          return(t);
                        }
                        t = ArgOption_3(t, v_3, w_3, x_3);
                        LocalPopChoice(z_19);
                      }
                    else
                      {
                        t = y_19;
                        {
                          ATerm e_20 = t;
                          int f_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_3 (ATerm t)
                              {
                                ATerm m_60 = NULL;
                                m_60 = t;
                                a_60 :
                                if(!(match_string(m_60, "-i")))
                                  {
                                    if(!(match_string(m_60, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm z_3 (ATerm t)
                              {
                                ATerm n_60 = NULL;
                                ATerm o_60 = NULL;
                                o_60 = t;
                                if(((n_60 != NULL) && (n_60 != o_60)))
                                  _fail(o_60);
                                else
                                  n_60 = o_60;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_60));
                                return(t);
                              }
                              ATerm a_4 (ATerm t)
                              {
                                t = term_g_20;
                                return(t);
                              }
                              t = ArgOption_3(t, y_3, z_3, a_4);
                              LocalPopChoice(f_20);
                            }
                          else
                            {
                              t = e_20;
                              {
                                ATerm h_20 = t;
                                int i_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_4 (ATerm t)
                                    {
                                      ATerm p_60 = NULL;
                                      p_60 = t;
                                      c_60 :
                                      if(!(match_string(p_60, "-o")))
                                        {
                                          if(!(match_string(p_60, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm f_4 (ATerm t)
                                    {
                                      ATerm q_60 = NULL;
                                      ATerm r_60 = NULL;
                                      r_60 = t;
                                      if(((q_60 != NULL) && (q_60 != r_60)))
                                        _fail(r_60);
                                      else
                                        q_60 = r_60;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_60));
                                      return(t);
                                    }
                                    ATerm g_4 (ATerm t)
                                    {
                                      t = term_j_20;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_4, f_4, g_4);
                                    LocalPopChoice(i_20);
                                  }
                                else
                                  {
                                    t = h_20;
                                    {
                                      ATerm k_20 = t;
                                      int l_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_4 (ATerm t)
                                          {
                                            ATerm s_60 = NULL;
                                            s_60 = t;
                                            e_60 :
                                            if(!(match_string(s_60, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm m_4 (ATerm t)
                                          {
                                            t = term_m_20;
                                            return(t);
                                          }
                                          ATerm n_4 (ATerm t)
                                          {
                                            t = term_n_20;
                                            return(t);
                                          }
                                          t = Option_3(t, l_4, m_4, n_4);
                                          LocalPopChoice(l_20);
                                        }
                                      else
                                        {
                                          t = k_20;
                                          {
                                            ATerm p_4 (ATerm t)
                                            {
                                              ATerm t_60 = NULL;
                                              t_60 = t;
                                              f_60 :
                                              if(!(match_string(t_60, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm q_4 (ATerm t)
                                            {
                                              t = term_p_20;
                                              return(t);
                                            }
                                            ATerm r_4 (ATerm t)
                                            {
                                              t = term_q_20;
                                              return(t);
                                            }
                                            t = Option_3(t, p_4, q_4, r_4);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm y_60 = NULL;
  y_60 = t;
  t = SSL_table_destroy(not_null(y_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_61 = NULL;
  c_61 = t;
  t = SSL_exit(not_null(c_61));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_61 = NULL;
  g_61 = t;
  t = SSL_implode_string(not_null(g_61));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm j_61 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_61);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          t = Nil_0(t);
          t = l_82(t);
        }
      }
    return(t);
  }
  t = j_61(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
      {
        ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
        m_61 = t;
        l_61 :
        if(((ATgetType(m_61) == AT_LIST) && ((ATermList) m_61 != ATempty)))
          {
            n_61 = ATgetFirst((ATermList) m_61);
            o_61 = (ATerm) ATgetNext((ATermList) m_61);
            {
              t = not_null(n_61);
              {
                ATerm w_4 (ATerm t)
                {
                  t = not_null(o_61);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_4);
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
  ATerm u_61 = NULL;
  u_61 = t;
  t = SSL_explode_string(not_null(u_61));
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
ATerm long_description_1 (ATerm t, ATerm d_69 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm x_61 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = Cons_2(t, x_81, x_61);
      }
    return(t);
  }
  t = x_61(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
  g_62 = t;
  d_62 :
  if(((ATgetType(g_62) == AT_LIST) && ((ATermList) g_62 != ATempty)))
    {
      e_62 = ATgetFirst((ATermList) g_62);
      f_62 = (ATerm) ATgetNext((ATermList) g_62);
      {
        ATerm j_62 = NULL;
        t = not_null(f_62);
        {
          ATerm x_20;
          x_20 = t;
          {
            ATerm k_62 = NULL,m_62 = NULL,o_62 = NULL;
            ATerm y_20;
            y_20 = t;
            {
              ATerm l_62 = NULL;
              t = i_0(t);
              {
                l_62 = t;
                if(((k_62 != NULL) && (k_62 != l_62)))
                  _fail(l_62);
                else
                  k_62 = l_62;
              }
            }
            t = y_20;
            {
              ATerm n_62 = NULL;
              t = not_null(e_62);
              {
                t = h_0(t);
                {
                  n_62 = t;
                  if(((m_62 != NULL) && (m_62 != n_62)))
                    _fail(n_62);
                  else
                    m_62 = n_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_62)), not_null(m_62));
                {
                  o_62 = t;
                  if(((j_62 != NULL) && (j_62 != o_62)))
                    _fail(o_62);
                  else
                    j_62 = o_62;
                }
              }
            }
          }
          t = x_20;
          {
            ATerm x_4 (ATerm t)
            {
              t = not_null(j_62);
              return(t);
            }
            t = reverse_acc_2(t, h_0, x_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) g_62 == ATempty))
        {
          {
            t = term_z_20;
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
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_69 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm x_62 = NULL,y_62 = NULL;
  x_62 = t;
  w_62 :
  if(match_cons(x_62, sym_Program_1))
    {
      y_62 = ATgetArgument(x_62, 0);
      {
        ATerm a_63 = NULL;
        t = not_null(y_62);
        {
          t = w_56(t);
          {
            a_63 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_63));
          }
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
  ATerm i_63 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      ATerm j_63 = NULL;
      j_63 = t;
      if(((i_63 != NULL) && (i_63 != j_63)))
        _fail(j_63);
      else
        i_63 = j_63;
      return(t);
    }
    t = Program_1(t, e_5);
    return(t);
  }
  t = option_defined_1(t, d_5);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm k_63 = NULL;
      ATerm l_63 = NULL;
      t = term_z_20;
      {
        ATerm g_5 (ATerm t)
        {
          t = not_null(i_63);
          return(t);
        }
        t = short_description_1(t, g_5);
        {
          t = concat_strings_0(t);
          {
            l_63 = t;
            if(((k_63 != NULL) && (k_63 != l_63)))
              _fail(l_63);
            else
              k_63 = l_63;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATempty, not_null(k_63)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATempty, term_a_21));
      {
        t = printnl_0(t);
        {
          t = term_d_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm m_63 = NULL;
                  m_63 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_63)), term_e_21));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_5);
                {
                  ATerm k_5 (ATerm t)
                  {
                    ATerm o_63 = NULL;
                    ATerm p_63 = NULL;
                    t = term_z_20;
                    {
                      ATerm n_5 (ATerm t)
                      {
                        t = not_null(i_63);
                        return(t);
                      }
                      t = long_description_1(t, n_5);
                      {
                        t = concat_strings_0(t);
                        {
                          p_63 = t;
                          if(((o_63 != NULL) && (o_63 != p_63)))
                            _fail(p_63);
                          else
                            o_63 = p_63;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_63)), term_f_21));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_5);
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
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  v_63 :
  if(match_cons(w_63, sym__2))
    {
      x_63 = ATgetArgument(w_63, 0);
      y_63 = ATgetArgument(w_63, 1);
      {
        ATerm g_21;
        g_21 = t;
        t = SSL_printnl(not_null(x_63), not_null(y_63));
        t = g_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm f_64 = NULL,g_64 = NULL;
  f_64 = t;
  e_64 :
  if(match_cons(f_64, sym_Undefined_1))
    {
      g_64 = ATgetArgument(f_64, 0);
      {
        ATerm j_64 = NULL;
        t = not_null(g_64);
        {
          t = x_56(t);
          {
            j_64 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_64));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm n_64 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_82, _id);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = Cons_2(t, _id, n_64);
      }
    return(t);
  }
  t = n_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_70 (ATerm))
{
  t = fetch_1(t, b_70);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_64 = NULL;
  p_64 = t;
  o_64 :
  if(!(match_cons(p_64, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_85(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_64 = NULL,v_64 = NULL,w_64 = NULL;
  t_64 = t;
  r_64 :
  if(match_cons(t_64, sym__2))
    {
      v_64 = ATgetArgument(t_64, 0);
      w_64 = ATgetArgument(t_64, 1);
      t = SSL_table_get(not_null(v_64), not_null(w_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  d_65 = t;
  c_65 :
  if(match_cons(d_65, sym__3))
    {
      f_65 = ATgetArgument(d_65, 0);
      g_65 = ATgetArgument(d_65, 1);
      h_65 = ATgetArgument(d_65, 2);
      {
        ATerm o_21;
        o_21 = t;
        {
          ATerm l_65 = NULL;
          ATerm m_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_65), not_null(g_65));
          {
            ATerm p_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_21);
              }
            else
              {
                t = p_21;
                t = (ATerm) ATempty;
              }
            {
              m_65 = t;
              if(((l_65 != NULL) && (l_65 != m_65)))
                _fail(m_65);
              else
                l_65 = m_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_65), not_null(g_65), (ATerm) ATinsert(CheckATermList(not_null(l_65)), not_null(h_65)));
            t = table_put_0(t);
          }
        }
        t = o_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_69 (ATerm))
{
  ATerm q_65 = NULL;
  ATerm r_65 = NULL;
  t = term_z_20;
  {
    t = h_69(t);
    {
      r_65 = t;
      if(((q_65 != NULL) && (q_65 != r_65)))
        _fail(r_65);
      else
        q_65 = r_65;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_21, term_c_21, not_null(q_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  x_65 = t;
  w_65 :
  if(match_string(x_65, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(x_65) == AT_LIST) && ((ATermList) x_65 != ATempty)))
        {
          y_65 = ATgetFirst((ATermList) x_65);
          z_65 = (ATerm) ATgetNext((ATermList) x_65);
          {
            ATerm c_66 = NULL;
            ATerm r_21;
            r_21 = t;
            {
              t = not_null(y_65);
              t = c_0(t);
            }
            t = r_21;
            {
              ATerm d_66 = NULL;
              t = term_z_20;
              {
                t = f_0(t);
                {
                  d_66 = t;
                  if(((c_66 != NULL) && (c_66 != d_66)))
                    _fail(d_66);
                  else
                    c_66 = d_66;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_65)), not_null(c_66));
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
  ATerm r_5 (ATerm t)
  {
    ATerm l_66 = NULL;
    l_66 = t;
    k_66 :
    if(!(match_string(l_66, "--help")))
      {
        if(!(match_string(l_66, "-h")))
          {
            if(!(match_string(l_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_s_21;
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_t_21;
    return(t);
  }
  t = Option_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
  o_66 = t;
  n_66 :
  if(((ATgetType(o_66) == AT_LIST) && ((ATermList) o_66 != ATempty)))
    {
      p_66 = ATgetFirst((ATermList) o_66);
      q_66 = (ATerm) ATgetNext((ATermList) o_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_66)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_67 (ATerm), ATerm l_67 (ATerm))
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  y_66 = t;
  x_66 :
  if(((ATgetType(y_66) == AT_LIST) && ((ATermList) y_66 != ATempty)))
    {
      z_66 = ATgetFirst((ATermList) y_66);
      a_67 = (ATerm) ATgetNext((ATermList) y_66);
      {
        ATerm d_67 = NULL;
        t = not_null(z_66);
        {
          ATerm h_67 = NULL;
          t = k_67(t);
          {
            d_67 = t;
            {
              t = not_null(a_67);
              {
                t = l_67(t);
                {
                  h_67 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_67)), not_null(d_67));
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
  ATerm p_67 = NULL;
  p_67 = t;
  o_67 :
  if(((ATermList) p_67 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_69 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    ATerm u_5 (ATerm t)
    {
      t = term_v_21;
      t = f_69(t);
      return(t);
    }
    t = try_1(t, u_5);
  }
  t = u_21;
  {
    ATerm y_5 (ATerm t)
    {
      ATerm r_67 = NULL;
      r_67 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_67));
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              {
                t = f_69(t);
                t = Cons_2(t, _id, z_5);
              }
            }
          LocalPopChoice(x_21);
        }
      else
        {
          t = w_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_5, z_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
  ATerm a_22;
  a_22 = t;
  {
    ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
    a_68 = t;
    w_67 :
    if(match_cons(a_68, sym__3))
      {
        b_68 = ATgetArgument(a_68, 0);
        c_68 = ATgetArgument(a_68, 1);
        d_68 = ATgetArgument(a_68, 2);
        {
          if(((x_67 != NULL) && (x_67 != b_68)))
            _fail(b_68);
          else
            x_67 = b_68;
          {
            if(((y_67 != NULL) && (y_67 != c_68)))
              _fail(c_68);
            else
              y_67 = c_68;
            {
              if(((z_67 != NULL) && (z_67 != d_68)))
                _fail(d_68);
              else
                z_67 = d_68;
              t = SSL_table_put(not_null(x_67), not_null(y_67), not_null(z_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_69 (ATerm))
{
  ATerm g_68 = NULL;
  ATerm b_22;
  b_22 = t;
  {
    t = term_j_22;
    t = table_put_0(t);
  }
  t = b_22;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm l_22 = t;
      int m_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_69(t);
          LocalPopChoice(m_22);
        }
      else
        {
          t = l_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_6);
    {
      ATerm b_6 (ATerm t)
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            {
              ATerm c_6 (ATerm t)
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm h_68 = NULL;
                  h_68 = t;
                  if(((g_68 != NULL) && (g_68 != h_68)))
                    _fail(h_68);
                  else
                    g_68 = h_68;
                  return(t);
                }
                t = Undefined_1(t, k_6);
                return(t);
              }
              t = option_defined_1(t, c_6);
              {
                ATerm p_22;
                p_22 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_68)), term_r_22));
                  t = printnl_0(t);
                }
                t = p_22;
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, b_6);
      {
        ATerm v_22;
        v_22 = t;
        {
          t = term_b_21;
          t = table_destroy_0(t);
        }
        t = v_22;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_70(t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, l_6);
  {
    t = store_options_0(t);
    {
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, n_70);
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
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, l_70);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(b_23);
              }
            else
              {
                t = a_23;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  t = iowrap_3(t, g_70, h_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm m_6 (ATerm t)
  {
    t = _2(t, _id, d_70);
    return(t);
  }
  t = iowrap_2(t, m_6, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      t = simplify_0(t);
      {
        t = simplify_widen_0(t);
        {
          t = simplify_0(t);
          {
            t = simplify_narrow_0(t);
            t = simplify_0(t);
          }
        }
      }
      return(t);
    }
    t = apply_to_bodies_1(t, u_6);
    return(t);
  }
  t = iowrap_1(t, t_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
