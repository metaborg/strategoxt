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
ATerm term_m_26;
ATerm term_f_26;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_l_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_y_22;
ATerm term_l_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_n_21;
ATerm term_x_20;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_i_13;
void init_constant_terms (void)
{
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm k_90 (ATerm));
ATerm Rec_2 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm));
ATerm Let_2 (ATerm, ATerm y_65 (ATerm), ATerm z_65 (ATerm));
ATerm sboundin_3 (ATerm, ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm v_65 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm g_90 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm d_64 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_67 (ATerm), ATerm b_67 (ATerm));
ATerm tboundin_3 (ATerm, ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm for_3 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm e_77 (ATerm), ATerm f_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm k_77 (ATerm), ATerm l_77 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm y_76 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm g_76 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm l_76 (ATerm));
ATerm rename_4 (ATerm, ATerm m_77 (ATerm, ATerm (ATerm)), ATerm n_77 (ATerm), ATerm o_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_77 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm j_62 (ATerm));
ATerm Call_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm Prim_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm Str_1 (ATerm, ATerm q_0 (ATerm));
ATerm Real_1 (ATerm, ATerm p_0 (ATerm));
ATerm Int_1 (ATerm, ATerm o_0 (ATerm));
ATerm Var_1 (ATerm, ATerm z_64 (ATerm));
ATerm list_1 (ATerm, ATerm v_81 (ATerm));
ATerm Op_2 (ATerm, ATerm d_65 (ATerm), ATerm e_65 (ATerm));
ATerm Build_1 (ATerm, ATerm x_66 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm z_70 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm n_67 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm c_84 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm v_82 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm r_77 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm Row_3 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_70 (ATerm));
ATerm restore_always_2 (ATerm, ATerm g_86 (ATerm), ATerm h_86 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_70 (ATerm));
ATerm scope_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
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
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm crush_3 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm));
ATerm collect_om_1 (ATerm, ATerm o_80 (ATerm));
ATerm collect_1 (ATerm, ATerm q_80 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm p_79 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm y_83 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm i_81 (ATerm), ATerm j_81 (ATerm));
ATerm collect_split_2 (ATerm, ATerm f_81 (ATerm), ATerm g_81 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm i_91 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm r_83 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm z_83 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_86 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_73 (ATerm));
ATerm downup_1 (ATerm, ATerm m_86 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
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
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  s_3 = t;
  r_3 :
  if(((ATgetType(s_3) == AT_LIST) && ((ATermList) s_3 != ATempty)))
    {
      t_3 = ATgetFirst((ATermList) s_3);
      u_3 = (ATerm) ATgetNext((ATermList) s_3);
      t = not_null(t_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, k_90);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
            e_4 = t;
            z_3 :
            if(match_cons(e_4, sym__2))
              {
                f_4 = ATgetArgument(e_4, 0);
                j_4 = ATgetArgument(e_4, 1);
                a_4 :
                if(match_cons(f_4, sym_SDef_3))
                  {
                    g_4 = ATgetArgument(f_4, 0);
                    h_4 = ATgetArgument(f_4, 1);
                    i_4 = ATgetArgument(f_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_4), not_null(h_4), not_null(i_4));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, d_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
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
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, k_90);
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
                  n_4 = t;
                  c_4 :
                  if(match_cons(n_4, sym__2))
                    {
                      o_4 = ATgetArgument(n_4, 0);
                      r_4 = ATgetArgument(n_4, 1);
                      d_4 :
                      if(match_cons(o_4, sym_VarDec_2))
                        {
                          p_4 = ATgetArgument(o_4, 0);
                          q_4 = ATgetArgument(o_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_4), not_null(q_4));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, r_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
              ATerm s_0 (ATerm t)
              {
                t = k_90(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, s_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm))
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
  b_5 = t;
  a_5 :
  if(match_cons(b_5, sym_Rec_2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      {
        ATerm g_5 = NULL;
        t = not_null(c_5);
        {
          ATerm i_5 = NULL;
          t = w_65(t);
          {
            g_5 = t;
            {
              t = not_null(d_5);
              {
                t = x_65(t);
                {
                  i_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_5), not_null(i_5));
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
ATerm Let_2 (ATerm t, ATerm y_65 (ATerm), ATerm z_65 (ATerm))
{
  ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
  r_5 = t;
  q_5 :
  if(match_cons(r_5, sym_Let_2))
    {
      s_5 = ATgetArgument(r_5, 0);
      t_5 = ATgetArgument(r_5, 1);
      {
        ATerm w_5 = NULL;
        t = not_null(s_5);
        {
          ATerm y_5 = NULL;
          t = y_65(t);
          {
            w_5 = t;
            {
              t = not_null(t_5);
              {
                t = z_65(t);
                {
                  y_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_5), not_null(y_5));
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
ATerm sboundin_3 (ATerm t, ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm))
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, l_90, l_90);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, n_90, n_90, l_90);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            t = Rec_2(t, n_90, l_90);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_Rec_2))
    {
      g_6 = ATgetArgument(f_6, 0);
      h_6 = ATgetArgument(f_6, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_6));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym_SDef_3))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      s_6 = ATgetArgument(p_6, 2);
      {
        t = not_null(r_6);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
            w_6 = t;
            n_6 :
            if(match_cons(w_6, sym_VarDec_2))
              {
                x_6 = ATgetArgument(w_6, 0);
                y_6 = ATgetArgument(w_6, 1);
                t = not_null(x_6);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, t_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
  g_7 = t;
  f_7 :
  if(match_cons(g_7, sym_Let_2))
    {
      h_7 = ATgetArgument(g_7, 0);
      i_7 = ATgetArgument(g_7, 1);
      {
        t = not_null(h_7);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
            l_7 = t;
            e_7 :
            if(match_cons(l_7, sym_SDef_3))
              {
                m_7 = ATgetArgument(l_7, 0);
                n_7 = ATgetArgument(l_7, 1);
                o_7 = ATgetArgument(l_7, 2);
                t = not_null(m_7);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, u_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm x_7 = NULL,y_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym_SVar_1))
    {
      y_7 = ATgetArgument(x_7, 0);
      {
        ATerm a_8 = NULL;
        t = not_null(y_7);
        {
          t = v_65(t);
          {
            a_8 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(a_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm y_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = y_8;
        {
          ATerm b_9 = t;
          int c_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(c_9);
            }
          else
            {
              t = b_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, v_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm g_90 (ATerm))
{
  t = Scope_2(t, g_90, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym_DynamicRules_1))
    {
      i_8 = ATgetArgument(h_8, 0);
      {
        ATerm k_8 = NULL;
        t = not_null(i_8);
        {
          t = d_64(t);
          {
            k_8 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(k_8));
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
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym_Scope_2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      {
        ATerm x_8 = NULL;
        t = not_null(t_8);
        {
          ATerm z_8 = NULL;
          t = a_67(t);
          {
            x_8 = t;
            {
              t = not_null(u_8);
              {
                t = b_67(t);
                {
                  z_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_8), not_null(z_8));
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
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, j_90, h_90);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      t = DynamicRules_1(t, h_90);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  g_9 = t;
  f_9 :
  if(match_cons(g_9, sym_DynamicRules_1))
    {
      h_9 = ATgetArgument(g_9, 0);
      {
        t = not_null(h_9);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  m_9 = t;
  l_9 :
  if(match_cons(m_9, sym_Var_1))
    {
      n_9 = ATgetArgument(m_9, 0);
      t = (ATerm) ATinsert(ATempty, not_null(n_9));
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  t_9 = t;
  r_9 :
  if(match_cons(t_9, sym__2))
    {
      u_9 = ATgetArgument(t_9, 0);
      v_9 = ATgetArgument(t_9, 1);
      s_9 :
      if(((ATgetType(v_9) == AT_LIST) && ((ATermList) v_9 != ATempty)))
        {
          w_9 = ATgetFirst((ATermList) v_9);
          x_9 = (ATerm) ATgetNext((ATermList) v_9);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_9)), not_null(w_9)), not_null(x_9));
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
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  m_10 = t;
  k_10 :
  if(((ATgetType(m_10) == AT_LIST) && ((ATermList) m_10 != ATempty)))
    {
      n_10 = ATgetFirst((ATermList) m_10);
      q_10 = (ATerm) ATgetNext((ATermList) m_10);
      l_10 :
      if(match_cons(n_10, sym__2))
        {
          o_10 = ATgetArgument(n_10, 0);
          p_10 = ATgetArgument(n_10, 1);
          {
            ATerm u_10 = NULL,v_10 = NULL,b_11 = NULL,h_11 = NULL;
            ATerm i_9;
            i_9 = t;
            {
              ATerm w_10 = NULL;
              ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL;
              t = not_null(p_10);
              {
                w_10 = t;
                {
                  t = SSL_explode_term(not_null(w_10));
                  {
                    y_10 = t;
                    f_10 :
                    if(match_cons(y_10, sym__2))
                      {
                        z_10 = ATgetArgument(y_10, 0);
                        a_11 = ATgetArgument(y_10, 1);
                        {
                          if(((u_10 != NULL) && (u_10 != z_10)))
                            _fail(z_10);
                          else
                            u_10 = z_10;
                          if(((v_10 != NULL) && (v_10 != a_11)))
                            _fail(a_11);
                          else
                            v_10 = a_11;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = i_9;
            {
              ATerm j_9;
              j_9 = t;
              {
                ATerm c_11 = NULL;
                ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
                t = not_null(o_10);
                {
                  c_11 = t;
                  {
                    t = SSL_explode_term(not_null(c_11));
                    {
                      e_11 = t;
                      i_10 :
                      if(match_cons(e_11, sym__2))
                        {
                          f_11 = ATgetArgument(e_11, 0);
                          g_11 = ATgetArgument(e_11, 1);
                          {
                            if(((u_10 != NULL) && (u_10 != f_11)))
                              _fail(f_11);
                            else
                              u_10 = f_11;
                            if(((b_11 != NULL) && (b_11 != g_11)))
                              _fail(g_11);
                            else
                              b_11 = g_11;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = j_9;
              {
                ATerm i_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(v_10));
                {
                  t = zip_1(t, _id);
                  {
                    i_11 = t;
                    if(((h_11 != NULL) && (h_11 != i_11)))
                      _fail(i_11);
                    else
                      h_11 = i_11;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), not_null(q_10));
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
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  s_11 = t;
  q_11 :
  if(((ATgetType(s_11) == AT_LIST) && ((ATermList) s_11 != ATempty)))
    {
      t_11 = ATgetFirst((ATermList) s_11);
      w_11 = (ATerm) ATgetNext((ATermList) s_11);
      r_11 :
      if(match_cons(t_11, sym__2))
        {
          u_11 = ATgetArgument(t_11, 0);
          v_11 = ATgetArgument(t_11, 1);
          {
            ATerm y_11 = NULL;
            if(((u_11 != NULL) && (u_11 != v_11)))
              _fail(v_11);
            else
              u_11 = v_11;
            {
              if(((y_11 != NULL) && (y_11 != w_11)))
                _fail(w_11);
              else
                y_11 = w_11;
              t = not_null(y_11);
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
  ATerm a_12 (ATerm t)
  {
    ATerm k_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_74(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = k_9;
        {
          t = b_74(t);
          t = a_12(t);
        }
      }
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm f_74 (ATerm))
{
  t = d_74(t);
  t = while_not_2(t, e_74, f_74);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
      e_12 = t;
      c_12 :
      if(match_cons(e_12, sym__2))
        {
          f_12 = ATgetArgument(e_12, 0);
          g_12 = ATgetArgument(e_12, 1);
          {
            t = not_null(f_12);
            {
              ATerm p_14 (ATerm t)
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
                          ATerm w_0 (ATerm t)
                          {
                            t = not_null(g_12);
                            return(t);
                          }
                          t = HdMember_1(t, w_0);
                          t = p_14(t);
                          LocalPopChoice(b_10);
                        }
                      else
                        {
                          t = a_10;
                          t = Cons_2(t, _id, p_14);
                        }
                    }
                  }
                return(t);
              }
              t = p_14(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm j_13 = NULL;
          j_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(j_13));
          return(t);
        }
        ATerm y_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_1 (ATerm t)
              {
                ATerm e_10 = t;
                int g_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(g_10);
                  }
                else
                  {
                    t = e_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, a_1);
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, x_0, y_0, z_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_14 (ATerm t)
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_75(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_14 = NULL;
              ATerm t_10;
              t_10 = t;
              {
                ATerm t_14 = NULL;
                t = m_75(t);
                {
                  t_14 = t;
                  if(((s_14 != NULL) && (s_14 != t_14)))
                    _fail(t_14);
                  else
                    s_14 = t_14;
                }
              }
              t = t_10;
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = not_null(s_14);
                    return(t);
                  }
                  t = split_2(t, u_14, d_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = n_75(t, b_1, u_14, c_1);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, e_1, union_0, _id);
                }
              }
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, f_1, union_0, u_14);
              }
            }
        }
      }
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm x_10 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(d_11);
      }
    else
      {
        t = x_10;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  d_15 = t;
  y_14 :
  if(match_cons(d_15, sym_LRule_1))
    {
      e_15 = ATgetArgument(d_15, 0);
      z_14 :
      if(match_cons(e_15, sym_Rule_3))
        {
          a_15 = ATgetArgument(e_15, 0);
          b_15 = ATgetArgument(e_15, 1);
          c_15 = ATgetArgument(e_15, 2);
          {
            t = not_null(a_15);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(d_15, sym_Scope_2))
        {
          e_15 = ATgetArgument(d_15, 0);
          f_15 = ATgetArgument(d_15, 1);
          t = not_null(e_15);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm e_77 (ATerm), ATerm f_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_16 = NULL,i_16 = NULL,n_16 = NULL,x_16 = NULL;
  h_16 = t;
  q_15 :
  if(match_cons(h_16, sym__3))
    {
      i_16 = ATgetArgument(h_16, 0);
      n_16 = ATgetArgument(h_16, 1);
      x_16 = ATgetArgument(h_16, 2);
      {
        t = not_null(i_16);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm b_17 = NULL;
            b_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(x_16));
              t = e_77(t);
            }
            return(t);
          }
          ATerm i_1 (ATerm t)
          {
            ATerm d_17 = NULL;
            d_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(n_16));
              t = e_77(t);
            }
            return(t);
          }
          t = f_77(t, h_1, i_1, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm k_77 (ATerm), ATerm l_77 (ATerm, ATerm (ATerm)))
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym__2))
    {
      q_17 = ATgetArgument(p_17, 0);
      r_17 = ATgetArgument(p_17, 1);
      {
        ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,c_18 = NULL;
        ATerm j_11;
        j_11 = t;
        {
          ATerm x_17 = NULL;
          t = not_null(q_17);
          {
            ATerm y_17 = NULL;
            t = k_77(t);
            {
              x_17 = t;
              {
                if(((u_17 != NULL) && (u_17 != x_17)))
                  _fail(x_17);
                else
                  u_17 = x_17;
                {
                  ATerm z_17 = NULL,b_18 = NULL;
                  t = map_1(t, new_0);
                  {
                    y_17 = t;
                    {
                      if(((v_17 != NULL) && (v_17 != y_17)))
                        _fail(y_17);
                      else
                        v_17 = y_17;
                      {
                        ATerm a_18 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(v_17));
                        {
                          t = zip_1(t, _id);
                          {
                            a_18 = t;
                            if(((z_17 != NULL) && (z_17 != a_18)))
                              _fail(a_18);
                            else
                              z_17 = a_18;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(r_17));
                          {
                            t = conc_0(t);
                            {
                              b_18 = t;
                              if(((w_17 != NULL) && (w_17 != b_18)))
                                _fail(b_18);
                              else
                                w_17 = b_18;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = j_11;
        {
          ATerm d_18 = NULL;
          t = not_null(q_17);
          {
            ATerm j_1 (ATerm t)
            {
              t = not_null(v_17);
              return(t);
            }
            t = l_77(t, j_1);
            {
              d_18 = t;
              if(((c_18 != NULL) && (c_18 != d_18)))
                _fail(d_18);
              else
                c_18 = d_18;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(c_18), not_null(r_17), not_null(w_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  n_18 = t;
  l_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      m_18 :
      if(((ATgetType(p_18) == AT_LIST) && ((ATermList) p_18 != ATempty)))
        {
          q_18 = ATgetFirst((ATermList) p_18);
          r_18 = (ATerm) ATgetNext((ATermList) p_18);
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), not_null(r_18));
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
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  z_18 = t;
  w_18 :
  if(match_cons(z_18, sym__2))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      x_18 :
      if(((ATgetType(b_19) == AT_LIST) && ((ATermList) b_19 != ATempty)))
        {
          c_19 = ATgetFirst((ATermList) b_19);
          f_19 = (ATerm) ATgetNext((ATermList) b_19);
          y_18 :
          if(match_cons(c_19, sym__2))
            {
              d_19 = ATgetArgument(c_19, 0);
              e_19 = ATgetArgument(c_19, 1);
              {
                ATerm h_19 = NULL;
                if(((a_19 != NULL) && (a_19 != d_19)))
                  _fail(d_19);
                else
                  a_19 = d_19;
                {
                  if(((h_19 != NULL) && (h_19 != e_19)))
                    _fail(e_19);
                  else
                    h_19 = e_19;
                  t = not_null(h_19);
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
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm y_76 (ATerm, ATerm (ATerm)))
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym__2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        t = not_null(n_19);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = not_null(o_19);
              return(t);
            }
            t = split_2(t, _id, l_1);
            t = lookup_0(t);
            return(t);
          }
          t = y_76(t, k_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        t = not_null(w_19);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm a_20 = NULL;
            a_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(x_19));
              t = g_76(t);
            }
            return(t);
          }
          t = _all(t, m_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm f_20 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_76(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = all_dist_1(t, f_20);
      }
    return(t);
  }
  t = f_20(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm m_77 (ATerm, ATerm (ATerm)), ATerm n_77 (ATerm), ATerm o_77 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_77 (ATerm, ATerm (ATerm)))
{
  ATerm h_20 = NULL;
  h_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), (ATerm) ATempty);
    {
      ATerm k_20 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          ATerm o_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, m_77);
              LocalPopChoice(p_11);
            }
          else
            {
              t = o_11;
              {
                t = RnBinding_2(t, n_77, p_77);
                t = DistBinding_2(t, k_20, o_77);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, n_1);
        return(t);
      }
      t = k_20(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm l_20 (ATerm t, ATerm m_20 (ATerm))
  {
    t = Scope_2(t, m_20, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, l_20);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_Seqs_1))
    {
      r_20 = ATgetArgument(q_20, 0);
      {
        ATerm t_20 = NULL;
        t = not_null(r_20);
        {
          t = j_62(t);
          {
            t_20 = t;
            t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_20));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Call_2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        ATerm h_22 = NULL;
        t = not_null(d_22);
        {
          ATerm j_22 = NULL;
          t = k_66(t);
          {
            h_22 = t;
            {
              t = not_null(e_22);
              {
                t = l_66(t);
                {
                  j_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(h_22), not_null(j_22));
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
ATerm Prim_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym_Prim_2))
    {
      t_22 = ATgetArgument(s_22, 0);
      u_22 = ATgetArgument(s_22, 1);
      {
        ATerm e_23 = NULL;
        t = not_null(t_22);
        {
          ATerm g_23 = NULL;
          t = d_67(t);
          {
            e_23 = t;
            {
              t = not_null(u_22);
              {
                t = e_67(t);
                {
                  g_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(e_23), not_null(g_23));
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
ATerm Str_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_Str_1))
    {
      w_23 = ATgetArgument(v_23, 0);
      {
        ATerm x_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = NULL;
            t = not_null(w_23);
            {
              t = q_0(t);
              {
                y_23 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_23));
              }
            }
            LocalPopChoice(z_11);
          }
        else
          {
            t = x_11;
            {
              ATerm b_24 = NULL;
              t = not_null(w_23);
              {
                t = q_0(t);
                {
                  b_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(b_24));
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
ATerm Real_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm n_24 = NULL,o_24 = NULL;
  n_24 = t;
  m_24 :
  if(match_cons(n_24, sym_Real_1))
    {
      o_24 = ATgetArgument(n_24, 0);
      {
        ATerm b_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_24 = NULL;
            t = not_null(o_24);
            {
              t = p_0(t);
              {
                q_24 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(q_24));
              }
            }
            LocalPopChoice(d_12);
          }
        else
          {
            t = b_12;
            {
              ATerm t_24 = NULL;
              t = not_null(o_24);
              {
                t = p_0(t);
                {
                  t_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(t_24));
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
ATerm Int_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm q_25 = NULL,r_25 = NULL;
  q_25 = t;
  m_25 :
  if(match_cons(q_25, sym_Int_1))
    {
      r_25 = ATgetArgument(q_25, 0);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_26 = NULL;
            t = not_null(r_25);
            {
              t = o_0(t);
              {
                l_26 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(l_26));
              }
            }
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm o_26 = NULL;
              t = not_null(r_25);
              {
                t = o_0(t);
                {
                  o_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(o_26));
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
ATerm Var_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm x_26 = NULL,y_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym_Var_1))
    {
      y_26 = ATgetArgument(x_26, 0);
      {
        ATerm a_27 = NULL;
        t = not_null(y_26);
        {
          t = z_64(t);
          {
            a_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_27));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm list_1 (ATerm t, ATerm v_81 (ATerm))
{
  ATerm g_27 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = Cons_2(t, v_81, g_27);
      }
    return(t);
  }
  t = g_27(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm d_65 (ATerm), ATerm e_65 (ATerm))
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
  q_27 = t;
  p_27 :
  if(match_cons(q_27, sym_Op_2))
    {
      r_27 = ATgetArgument(q_27, 0);
      s_27 = ATgetArgument(q_27, 1);
      {
        ATerm v_27 = NULL;
        t = not_null(r_27);
        {
          ATerm x_27 = NULL;
          t = d_65(t);
          {
            v_27 = t;
            {
              t = not_null(s_27);
              {
                t = e_65(t);
                {
                  x_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(v_27), not_null(x_27));
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
ATerm Build_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_Build_1))
    {
      i_28 = ATgetArgument(h_28, 0);
      {
        ATerm k_28 = NULL;
        t = not_null(i_28);
        {
          t = x_66(t);
          {
            k_28 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_28));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  o_28 :
  if(!(match_cons(p_28, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  q_28 :
  if(!(match_cons(r_28, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
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
                  t = Seqs_1(t, Nil_0);
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
                        ATerm o_1 (ATerm t)
                        {
                          ATerm t_12 = t;
                          int u_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
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
                                    ATerm p_1 (ATerm t)
                                    {
                                      ATerm q_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, q_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, p_1);
                                    LocalPopChoice(w_12);
                                  }
                                else
                                  {
                                    t = v_12;
                                    {
                                      ATerm x_12 = t;
                                      int y_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          LocalPopChoice(y_12);
                                        }
                                      else
                                        {
                                          t = x_12;
                                          {
                                            ATerm z_12 = t;
                                            int a_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                LocalPopChoice(a_13);
                                              }
                                            else
                                              {
                                                t = z_12;
                                                t = Str_1(t, _id);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                          return(t);
                        }
                        t = Build_1(t, o_1);
                        LocalPopChoice(s_12);
                      }
                    else
                      {
                        t = r_12;
                        {
                          ATerm b_13 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              LocalPopChoice(c_13);
                            }
                          else
                            {
                              t = b_13;
                              {
                                ATerm d_13 = t;
                                int e_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(e_13);
                                  }
                                else
                                  {
                                    t = d_13;
                                    {
                                      ATerm r_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, r_1);
                                    }
                                  }
                              }
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
ATerm RowLet_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_Row_2))
    {
      y_28 = ATgetArgument(x_28, 0);
      z_28 = ATgetArgument(x_28, 1);
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_29 = NULL;
            ATerm d_29 = NULL;
            t = not_null(z_28);
            {
              ATerm h_13 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                t = h_13;
              {
                t = new_0(t);
                {
                  d_29 = t;
                  if(((c_29 != NULL) && (c_29 != d_29)))
                    _fail(d_29);
                  else
                    c_29 = d_29;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_29), (ATerm)ATempty, not_null(z_28))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(y_28), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_29)), (ATerm) ATempty)));
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              t = not_null(z_28);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(y_28), not_null(z_28)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixScope_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_Matrix_2))
    {
      o_29 = ATgetArgument(n_29, 0);
      p_29 = ATgetArgument(n_29, 1);
      {
        ATerm s_29 = NULL,t_29 = NULL;
        ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
        t = not_null(p_29);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              u_29 = t;
              l_29 :
              if(match_cons(u_29, sym__2))
                {
                  v_29 = ATgetArgument(u_29, 0);
                  w_29 = ATgetArgument(u_29, 1);
                  {
                    if(((s_29 != NULL) && (s_29 != v_29)))
                      _fail(v_29);
                    else
                      s_29 = v_29;
                    if(((t_29 != NULL) && (t_29 != w_29)))
                      _fail(w_29);
                    else
                      t_29 = w_29;
                  }
                }
              else
                _fail(t);
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_29), (ATerm) ATmakeAppl(sym_Let_2, not_null(s_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_i_13))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(t_29)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym__2))
    {
      f_30 = ATgetArgument(e_30, 0);
      g_30 = ATgetArgument(e_30, 1);
      {
        ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
        ATerm k_13;
        k_13 = t;
        {
          ATerm m_30 = NULL;
          ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
          t = z_70(t);
          {
            m_30 = t;
            {
              if(((j_30 != NULL) && (j_30 != m_30)))
                _fail(m_30);
              else
                j_30 = m_30;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_30), not_null(f_30), not_null(g_30));
                {
                  t = table_push_0(t);
                  {
                    ATerm l_13 = t;
                    int m_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_30), term_n_13);
                        t = table_get_0(t);
                        LocalPopChoice(m_13);
                      }
                    else
                      {
                        t = l_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_30 = t;
                      c_30 :
                      if(((ATgetType(n_30) == AT_LIST) && ((ATermList) n_30 != ATempty)))
                        {
                          o_30 = ATgetFirst((ATermList) n_30);
                          p_30 = (ATerm) ATgetNext((ATermList) n_30);
                          {
                            if(((k_30 != NULL) && (k_30 != o_30)))
                              _fail(o_30);
                            else
                              k_30 = o_30;
                            {
                              if(((l_30 != NULL) && (l_30 != p_30)))
                                _fail(p_30);
                              else
                                l_30 = p_30;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_30), term_n_13, (ATerm) ATinsert(CheckATermList(not_null(l_30)), (ATerm) ATinsert(CheckATermList(not_null(k_30)), not_null(f_30))));
                                t = table_put_0(t);
                              }
                            }
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
        t = k_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WildPat_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL;
  y_30 = t;
  u_30 :
  if(match_cons(y_30, sym_Row_3))
    {
      z_30 = ATgetArgument(y_30, 0);
      e_31 = ATgetArgument(y_30, 1);
      f_31 = ATgetArgument(y_30, 2);
      v_30 :
      if(((ATgetType(z_30) == AT_LIST) && ((ATermList) z_30 != ATempty)))
        {
          a_31 = ATgetFirst((ATermList) z_30);
          d_31 = (ATerm) ATgetNext((ATermList) z_30);
          w_30 :
          if(match_cons(a_31, sym_As_2))
            {
              b_31 = ATgetArgument(a_31, 0);
              c_31 = ATgetArgument(a_31, 1);
              x_30 :
              if(match_cons(c_31, sym_Wld_0))
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(d_31), not_null(e_31), not_null(f_31));
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
ATerm default_state_0 (ATerm t)
{
  ATerm l_31 = NULL;
  t = filter_1(t, WildPat_0);
  {
    l_31 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(l_31));
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym__2))
    {
      r_31 = ATgetArgument(q_31, 0);
      s_31 = ATgetArgument(q_31, 1);
      if(((r_31 != NULL) && (r_31 != s_31)))
        _fail(s_31);
      else
        r_31 = s_31;
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym_Wld_0))
    {
      ATerm t_32 = NULL;
      ATerm x_32 = NULL;
      t = n_0(t);
      {
        ATerm s_1 (ATerm t)
        {
          ATerm u_32 = NULL,v_32 = NULL;
          u_32 = t;
          b_32 :
          if(match_cons(u_32, sym_Var_1))
            {
              v_32 = ATgetArgument(u_32, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(v_32)), term_o_13);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, s_1);
        {
          x_32 = t;
          if(((t_32 != NULL) && (t_32 != x_32)))
            _fail(x_32);
          else
            t_32 = x_32;
        }
      }
      t = not_null(t_32);
    }
  else
    {
      if(match_cons(q_32, sym_Int_1))
        {
          r_32 = ATgetArgument(q_32, 0);
          {
            ATerm z_32 = NULL,a_33 = NULL;
            t = m_0(t);
            {
              z_32 = t;
              f_32 :
              if(match_cons(z_32, sym_Int_1))
                {
                  a_33 = ATgetArgument(z_32, 0);
                  {
                    ATerm e_33 = NULL;
                    if(((r_32 != NULL) && (r_32 != a_33)))
                      _fail(a_33);
                    else
                      r_32 = a_33;
                    {
                      t = n_0(t);
                      {
                        e_33 = t;
                        e_32 :
                        if(((ATermList) e_33 == ATempty))
                          {
                            {
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  }
                }
              else
                _fail(t);
            }
            t = (ATerm) ATempty;
          }
        }
      else
        {
          if(match_cons(q_32, sym_Real_1))
            {
              r_32 = ATgetArgument(q_32, 0);
              {
                ATerm g_33 = NULL,h_33 = NULL;
                t = m_0(t);
                {
                  g_33 = t;
                  i_32 :
                  if(match_cons(g_33, sym_Real_1))
                    {
                      h_33 = ATgetArgument(g_33, 0);
                      {
                        ATerm i_33 = NULL;
                        if(((r_32 != NULL) && (r_32 != h_33)))
                          _fail(h_33);
                        else
                          r_32 = h_33;
                        {
                          t = n_0(t);
                          {
                            i_33 = t;
                            h_32 :
                            if(((ATermList) i_33 == ATempty))
                              {
                                {
                                }
                              }
                            else
                              _fail(t);
                          }
                        }
                      }
                    }
                  else
                    _fail(t);
                }
                t = (ATerm) ATempty;
              }
            }
          else
            {
              if(match_cons(q_32, sym_Str_1))
                {
                  r_32 = ATgetArgument(q_32, 0);
                  {
                    ATerm k_33 = NULL,l_33 = NULL;
                    t = m_0(t);
                    {
                      k_33 = t;
                      l_32 :
                      if(match_cons(k_33, sym_Str_1))
                        {
                          l_33 = ATgetArgument(k_33, 0);
                          {
                            ATerm o_33 = NULL;
                            if(((r_32 != NULL) && (r_32 != l_33)))
                              _fail(l_33);
                            else
                              r_32 = l_33;
                            {
                              t = n_0(t);
                              {
                                o_33 = t;
                                k_32 :
                                if(((ATermList) o_33 == ATempty))
                                  {
                                    {
                                    }
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                    t = (ATerm) ATempty;
                  }
                }
              else
                {
                  if(match_cons(q_32, sym_Op_2))
                    {
                      r_32 = ATgetArgument(q_32, 0);
                      s_32 = ATgetArgument(q_32, 1);
                      {
                        ATerm r_33 = NULL;
                        ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
                        t = m_0(t);
                        {
                          s_33 = t;
                          o_32 :
                          if(match_cons(s_33, sym_Fun_2))
                            {
                              t_33 = ATgetArgument(s_33, 0);
                              u_33 = ATgetArgument(s_33, 1);
                              {
                                ATerm v_33 = NULL;
                                if(((r_32 != NULL) && (r_32 != t_33)))
                                  _fail(t_33);
                                else
                                  r_32 = t_33;
                                {
                                  if(((r_33 != NULL) && (r_33 != u_33)))
                                    _fail(u_33);
                                  else
                                    r_33 = u_33;
                                  {
                                    ATerm w_33 = NULL;
                                    t = not_null(s_32);
                                    {
                                      t = length_0(t);
                                      {
                                        w_33 = t;
                                        if(((v_33 != NULL) && (v_33 != w_33)))
                                          _fail(w_33);
                                        else
                                          v_33 = w_33;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), not_null(r_33));
                                      t = eq_0(t);
                                    }
                                  }
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                        t = not_null(s_32);
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
ATerm ConsTransition_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  p_34 = t;
  m_34 :
  if(match_cons(p_34, sym_Row_3))
    {
      q_34 = ATgetArgument(p_34, 0);
      v_34 = ATgetArgument(p_34, 1);
      w_34 = ATgetArgument(p_34, 2);
      n_34 :
      if(((ATgetType(q_34) == AT_LIST) && ((ATermList) q_34 != ATempty)))
        {
          r_34 = ATgetFirst((ATermList) q_34);
          u_34 = (ATerm) ATgetNext((ATermList) q_34);
          o_34 :
          if(match_cons(r_34, sym_As_2))
            {
              s_34 = ATgetArgument(r_34, 0);
              t_34 = ATgetArgument(r_34, 1);
              {
                ATerm b_35 = NULL,d_35 = NULL;
                ATerm p_13;
                p_13 = t;
                {
                  ATerm c_35 = NULL;
                  t = not_null(t_34);
                  {
                    t = n_67(t);
                    {
                      c_35 = t;
                      if(((b_35 != NULL) && (b_35 != c_35)))
                        _fail(c_35);
                      else
                        b_35 = c_35;
                    }
                  }
                }
                t = p_13;
                {
                  ATerm e_35 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(v_34));
                  {
                    t = conc_0(t);
                    {
                      e_35 = t;
                      if(((d_35 != NULL) && (d_35 != e_35)))
                        _fail(e_35);
                      else
                        d_35 = e_35;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(u_34), not_null(d_35), not_null(w_34));
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
ATerm Transition_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  m_35 = t;
  k_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      l_35 :
      if(match_cons(o_35, sym__2))
        {
          p_35 = ATgetArgument(o_35, 0);
          q_35 = ATgetArgument(o_35, 1);
          {
            ATerm u_35 = NULL;
            ATerm v_35 = NULL;
            t = not_null(n_35);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = not_null(p_35);
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(q_35);
                    return(t);
                  }
                  t = MatchCons_2(t, v_1, w_1);
                  return(t);
                }
                t = ConsTransition_1(t, u_1);
                return(t);
              }
              t = filter_1(t, t_1);
              {
                v_35 = t;
                if(((u_35 != NULL) && (u_35 != v_35)))
                  _fail(v_35);
                else
                  u_35 = v_35;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(p_35), not_null(q_35), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(u_35)));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm RZip2_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
  b_36 = t;
  z_35 :
  if(match_cons(b_36, sym__2))
    {
      c_36 = ATgetArgument(b_36, 0);
      d_36 = ATgetArgument(b_36, 1);
      a_36 :
      if(((ATgetType(d_36) == AT_LIST) && ((ATermList) d_36 != ATempty)))
        {
          e_36 = ATgetFirst((ATermList) d_36);
          f_36 = (ATerm) ATgetNext((ATermList) d_36);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(c_36), not_null(e_36)), (ATerm) ATmakeAppl(sym__2, not_null(c_36), not_null(f_36)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  l_36 :
  if(match_cons(n_36, sym__2))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      m_36 :
      if(((ATermList) p_36 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm c_84 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, c_84);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(((ATgetType(v_36) == AT_LIST) && ((ATermList) v_36 != ATempty)))
    {
      w_36 = ATgetFirst((ATermList) v_36);
      x_36 = (ATerm) ATgetNext((ATermList) v_36);
      {
        ATerm a_37 = NULL;
        ATerm d_37 = NULL;
        t = not_null(x_36);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm q_13 = t;
            if((PushChoice() == 0))
              {
                ATerm c_37 = NULL;
                c_37 = t;
                if(((w_36 != NULL) && (w_36 != c_37)))
                  _fail(c_37);
                else
                  w_36 = c_37;
                PopChoice();
                _fail(t);
              }
            else
              t = q_13;
            return(t);
          }
          t = filter_1(t, x_1);
          {
            d_37 = t;
            if(((a_37 != NULL) && (a_37 != d_37)))
              _fail(d_37);
            else
              a_37 = d_37;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), not_null(w_36));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm k_37 (ATerm t)
  {
    t = v_82(t);
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = Cons_2(t, _id, k_37);
        }
    }
    return(t);
  }
  t = k_37(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, y_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
    o_37 = t;
    m_37 :
    if(match_cons(o_37, sym_As_2))
      {
        p_37 = ATgetArgument(o_37, 0);
        r_37 = ATgetArgument(o_37, 1);
        n_37 :
        if(match_cons(p_37, sym_Off_1))
          {
            q_37 = ATgetArgument(p_37, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_37));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, z_1);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_t_13;
    return(t);
  }
  t = foldr_3(t, a_2, add_0, b_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  s_38 = t;
  d_38 :
  if(match_cons(s_38, sym_Row_3))
    {
      t_38 = ATgetArgument(s_38, 0);
      a_39 = ATgetArgument(s_38, 1);
      b_39 = ATgetArgument(s_38, 2);
      e_38 :
      if(((ATgetType(t_38) == AT_LIST) && ((ATermList) t_38 != ATempty)))
        {
          u_38 = ATgetFirst((ATermList) t_38);
          z_38 = (ATerm) ATgetNext((ATermList) t_38);
          k_38 :
          if(match_cons(u_38, sym_As_2))
            {
              v_38 = ATgetArgument(u_38, 0);
              w_38 = ATgetArgument(u_38, 1);
              r_38 :
              if(match_cons(w_38, sym_Str_1))
                {
                  x_38 = ATgetArgument(w_38, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(x_38)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(w_38, sym_Real_1))
                    {
                      x_38 = ATgetArgument(w_38, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(x_38)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(w_38, sym_Int_1))
                        {
                          x_38 = ATgetArgument(w_38, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(x_38)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(w_38, sym_Op_2))
                            {
                              x_38 = ATgetArgument(w_38, 0);
                              y_38 = ATgetArgument(w_38, 1);
                              {
                                ATerm l_39 = NULL,n_39 = NULL;
                                ATerm u_13;
                                u_13 = t;
                                {
                                  ATerm m_39 = NULL;
                                  t = not_null(y_38);
                                  {
                                    t = length_0(t);
                                    {
                                      m_39 = t;
                                      if(((l_39 != NULL) && (l_39 != m_39)))
                                        _fail(m_39);
                                      else
                                        l_39 = m_39;
                                    }
                                  }
                                }
                                t = u_13;
                                {
                                  ATerm o_39 = NULL;
                                  t = not_null(y_38);
                                  {
                                    t = offsets_0(t);
                                    {
                                      o_39 = t;
                                      if(((n_39 != NULL) && (n_39 != o_39)))
                                        _fail(o_39);
                                      else
                                        n_39 = o_39;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(x_38), not_null(l_39)), not_null(n_39));
                                }
                              }
                            }
                          else
                            _fail(t);
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
  return(t);
}
ATerm filter_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              t = filter_1(t, r_77);
              return(t);
            }
            t = Cons_2(t, r_77, c_2);
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            {
              ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
              x_39 = t;
              w_39 :
              if(((ATgetType(x_39) == AT_LIST) && ((ATermList) x_39 != ATempty)))
                {
                  y_39 = ATgetFirst((ATermList) x_39);
                  z_39 = (ATerm) ATgetNext((ATermList) x_39);
                  {
                    t = not_null(z_39);
                    t = filter_1(t, r_77);
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
ATerm outedges_0 (ATerm t)
{
  t = filter_1(t, ConsArgs_0);
  t = uniq_0(t);
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_41 (ATerm t)
            {
              ATerm d_14 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2(t, _id, h_41);
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = d_14;
                  {
                    ATerm d_2 (ATerm t)
                    {
                      ATerm n_40 = NULL;
                      n_40 = t;
                      c_40 :
                      if(!(match_int(n_40, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm e_2 (ATerm t)
                    {
                      t = (ATerm) ATempty;
                      return(t);
                    }
                    t = Cons_2(t, d_2, e_2);
                  }
                }
              return(t);
            }
            t = h_41(t);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = (ATerm) ATempty;
          }
        t = implode_string_0(t);
      }
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
        o_40 = t;
        i_40 :
        if(((ATgetType(o_40) == AT_LIST) && ((ATermList) o_40 != ATempty)))
          {
            p_40 = ATgetFirst((ATermList) o_40);
            e_41 = (ATerm) ATgetNext((ATermList) o_40);
            j_40 :
            if(match_cons(p_40, sym_Row_3))
              {
                q_40 = ATgetArgument(p_40, 0);
                c_41 = ATgetArgument(p_40, 1);
                d_41 = ATgetArgument(p_40, 2);
                k_40 :
                if(((ATgetType(q_40) == AT_LIST) && ((ATermList) q_40 != ATempty)))
                  {
                    r_40 = ATgetFirst((ATermList) q_40);
                    b_41 = (ATerm) ATgetNext((ATermList) q_40);
                    l_40 :
                    if(match_cons(r_40, sym_As_2))
                      {
                        u_40 = ATgetArgument(r_40, 0);
                        w_40 = ATgetArgument(r_40, 1);
                        m_40 :
                        if(match_cons(u_40, sym_Off_1))
                          {
                            v_40 = ATgetArgument(u_40, 0);
                            t = not_null(v_40);
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
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_Matrix_1))
    {
      b_42 = ATgetArgument(a_42, 0);
      {
        ATerm d_42 = NULL,e_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
        ATerm l_42 = NULL;
        t = not_null(b_42);
        {
          ATerm m_42 = NULL;
          t = get_path_0(t);
          {
            l_42 = t;
            {
              if(((d_42 != NULL) && (d_42 != l_42)))
                _fail(l_42);
              else
                d_42 = l_42;
              {
                t = not_null(b_42);
                {
                  ATerm r_42 = NULL;
                  t = outedges_0(t);
                  {
                    m_42 = t;
                    {
                      if(((e_42 != NULL) && (e_42 != m_42)))
                        _fail(m_42);
                      else
                        e_42 = m_42;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_42), not_null(e_42));
                        {
                          ATerm s_42 = NULL;
                          t = transitions_0(t);
                          {
                            r_42 = t;
                            {
                              if(((i_42 != NULL) && (i_42 != r_42)))
                                _fail(r_42);
                              else
                                i_42 = r_42;
                              {
                                t = not_null(b_42);
                                {
                                  ATerm t_42 = NULL;
                                  t = default_state_0(t);
                                  {
                                    s_42 = t;
                                    {
                                      if(((j_42 != NULL) && (j_42 != s_42)))
                                        _fail(s_42);
                                      else
                                        j_42 = s_42;
                                      {
                                        t = new_0(t);
                                        {
                                          t_42 = t;
                                          {
                                            if(((k_42 != NULL) && (k_42 != t_42)))
                                              _fail(t_42);
                                            else
                                              k_42 = t_42;
                                            {
                                              ATerm f_14;
                                              f_14 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(b_42)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_14, not_null(k_42)));
                                                {
                                                  ATerm f_2 (ATerm t)
                                                  {
                                                    t = term_h_14;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, f_2);
                                                }
                                              }
                                              t = f_14;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(k_42), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_42)), not_null(i_42), not_null(j_42));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  z_43 = t;
  x_43 :
  if(match_cons(z_43, sym_Row_3))
    {
      a_44 = ATgetArgument(z_43, 0);
      b_44 = ATgetArgument(z_43, 1);
      e_44 = ATgetArgument(z_43, 2);
      y_43 :
      if(((ATgetType(b_44) == AT_LIST) && ((ATermList) b_44 != ATempty)))
        {
          c_44 = ATgetFirst((ATermList) b_44);
          d_44 = (ATerm) ATgetNext((ATermList) b_44);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(a_44)), not_null(c_44)), not_null(d_44), not_null(e_44));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumn_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  n_44 = t;
  m_44 :
  if(match_cons(n_44, sym_Matrix_1))
    {
      o_44 = ATgetArgument(n_44, 0);
      {
        ATerm q_44 = NULL;
        ATerm r_44 = NULL;
        t = not_null(o_44);
        {
          ATerm i_14 = t;
          if((PushChoice() == 0))
            {
              ATerm g_2 (ATerm t)
              {
                ATerm h_2 (ATerm t)
                {
                  ATerm i_2 (ATerm t)
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm j_14 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = j_14;
                      return(t);
                    }
                    t = As_2(t, _id, j_2);
                    return(t);
                  }
                  t = Cons_2(t, i_2, _id);
                  return(t);
                }
                t = Row_3(t, h_2, _id, _id);
                return(t);
              }
              t = map_1(t, g_2);
              PopChoice();
              _fail(t);
            }
          else
            t = i_14;
          {
            t = not_null(o_44);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                r_44 = t;
                if(((q_44 != NULL) && (q_44 != r_44)))
                  _fail(r_44);
                else
                  q_44 = r_44;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(q_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  u_44 :
  if(!(match_cons(v_44, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  z_44 :
  if(match_cons(a_45, sym_As_2))
    {
      b_45 = ATgetArgument(a_45, 0);
      c_45 = ATgetArgument(a_45, 1);
      {
        ATerm f_45 = NULL;
        t = not_null(b_45);
        {
          ATerm h_45 = NULL;
          t = n_63(t);
          {
            f_45 = t;
            {
              t = not_null(c_45);
              {
                t = o_63(t);
                {
                  h_45 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(f_45), not_null(h_45));
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
ATerm Row_3 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm))
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  r_45 = t;
  q_45 :
  if(match_cons(r_45, sym_Row_3))
    {
      s_45 = ATgetArgument(r_45, 0);
      t_45 = ATgetArgument(r_45, 1);
      u_45 = ATgetArgument(r_45, 2);
      {
        ATerm y_45 = NULL;
        t = not_null(s_45);
        {
          ATerm a_46 = NULL;
          t = c_62(t);
          {
            y_45 = t;
            {
              t = not_null(t_45);
              {
                ATerm c_46 = NULL;
                t = d_62(t);
                {
                  a_46 = t;
                  {
                    t = not_null(u_45);
                    {
                      t = e_62(t);
                      {
                        c_46 = t;
                        t = (ATerm) ATmakeAppl(sym_Row_3, not_null(y_45), not_null(a_46), not_null(c_46));
                      }
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
ATerm SkipWild_0 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  m_46 = t;
  l_46 :
  if(match_cons(m_46, sym_Matrix_1))
    {
      n_46 = ATgetArgument(m_46, 0);
      {
        ATerm p_46 = NULL;
        ATerm q_46 = NULL;
        t = not_null(n_46);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              ATerm m_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, m_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, l_2, _id);
            return(t);
          }
          t = map_1(t, k_2);
          {
            q_46 = t;
            if(((p_46 != NULL) && (p_46 != q_46)))
              _fail(q_46);
            else
              p_46 = q_46;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(p_46));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  y_47 = t;
  x_47 :
  if(match_cons(y_47, sym_Matrix_1))
    {
      z_47 = ATgetArgument(y_47, 0);
      {
        ATerm j_48 = NULL;
        ATerm b_49 = NULL;
        t = not_null(z_47);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
            w_48 = t;
            w_46 :
            if(match_cons(w_48, sym_Row_3))
              {
                x_48 = ATgetArgument(w_48, 0);
                y_48 = ATgetArgument(w_48, 1);
                z_48 = ATgetArgument(w_48, 2);
                x_46 :
                if(((ATermList) x_48 == ATempty))
                  {
                    y_46 :
                    if(((ATermList) y_48 == ATempty))
                      {
                        t = not_null(z_48);
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
          t = map_1(t, n_2);
          {
            b_49 = t;
            if(((j_48 != NULL) && (j_48 != b_49)))
              _fail(b_49);
            else
              j_48 = b_49;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(j_48));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            {
              ATerm o_14 = t;
              int q_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  LocalPopChoice(q_14);
                }
              else
                {
                  t = o_14;
                  t = Mixture_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  g_49 :
  if(((ATgetType(h_49) == AT_LIST) && ((ATermList) h_49 != ATempty)))
    {
      i_49 = ATgetFirst((ATermList) h_49);
      j_49 = (ATerm) ATgetNext((ATermList) h_49);
      t = not_null(j_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym__2))
    {
      r_49 = ATgetArgument(q_49, 0);
      s_49 = ATgetArgument(q_49, 1);
      {
        ATerm r_14;
        r_14 = t;
        {
          ATerm v_49 = NULL;
          ATerm w_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_49), not_null(s_49));
          {
            ATerm v_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(w_14);
              }
            else
              {
                t = v_14;
                t = (ATerm) ATempty;
              }
            {
              w_49 = t;
              if(((v_49 != NULL) && (v_49 != w_49)))
                _fail(w_49);
              else
                v_49 = w_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_49), not_null(s_49), not_null(v_49));
            t = table_put_0(t);
          }
        }
        t = r_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_70 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  ATerm x_14;
  x_14 = t;
  {
    ATerm g_50 = NULL;
    ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
    t = w_70(t);
    {
      g_50 = t;
      {
        if(((e_50 != NULL) && (e_50 != g_50)))
          _fail(g_50);
        else
          e_50 = g_50;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_50), term_n_13);
              t = table_get_0(t);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            h_50 = t;
            c_50 :
            if(((ATgetType(h_50) == AT_LIST) && ((ATermList) h_50 != ATempty)))
              {
                i_50 = ATgetFirst((ATermList) h_50);
                j_50 = (ATerm) ATgetNext((ATermList) h_50);
                {
                  if(((f_50 != NULL) && (f_50 != i_50)))
                    _fail(i_50);
                  else
                    f_50 = i_50;
                  {
                    if(((d_50 != NULL) && (d_50 != j_50)))
                      _fail(j_50);
                    else
                      d_50 = j_50;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_50), term_n_13, not_null(d_50));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_50);
                          {
                            ATerm o_2 (ATerm t)
                            {
                              ATerm k_50 = NULL;
                              k_50 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_50), not_null(k_50));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, o_2);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
  }
  t = x_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_86 (ATerm), ATerm h_86 (ATerm))
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_86(t);
      t = h_86(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        t = h_86(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_70 (ATerm))
{
  ATerm r_50 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm s_50 = NULL;
    ATerm t_50 = NULL;
    t = v_70(t);
    {
      s_50 = t;
      {
        if(((r_50 != NULL) && (r_50 != s_50)))
          _fail(s_50);
        else
          r_50 = s_50;
        {
          ATerm u_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_50), term_n_13);
          {
            ATerm l_15 = t;
            int m_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_15);
              }
            else
              {
                t = l_15;
                t = (ATerm) ATempty;
              }
            {
              u_50 = t;
              if(((t_50 != NULL) && (t_50 != u_50)))
                _fail(u_50);
              else
                t_50 = u_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_50), term_n_13, (ATerm) ATinsert(CheckATermList(not_null(t_50)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm))
{
  t = begin_scope_1(t, x_70);
  {
    ATerm p_2 (ATerm t)
    {
      t = end_scope_1(t, x_70);
      return(t);
    }
    t = restore_always_2(t, y_70, p_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = term_h_14;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          {
            ATerm p_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                LocalPopChoice(r_15);
              }
            else
              {
                t = p_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, s_2);
    t = _all(t, r_2);
    return(t);
  }
  t = scope_2(t, q_2, r_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  a_51 = t;
  z_50 :
  if(match_cons(a_51, sym__2))
    {
      b_51 = ATgetArgument(a_51, 0);
      c_51 = ATgetArgument(a_51, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_51)), not_null(b_51));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  k_51 = t;
  h_51 :
  if(match_cons(k_51, sym__2))
    {
      l_51 = ATgetArgument(k_51, 0);
      o_51 = ATgetArgument(k_51, 1);
      i_51 :
      if(((ATgetType(l_51) == AT_LIST) && ((ATermList) l_51 != ATempty)))
        {
          m_51 = ATgetFirst((ATermList) l_51);
          n_51 = (ATerm) ATgetNext((ATermList) l_51);
          j_51 :
          if(((ATgetType(o_51) == AT_LIST) && ((ATermList) o_51 != ATempty)))
            {
              p_51 = ATgetFirst((ATermList) o_51);
              q_51 = (ATerm) ATgetNext((ATermList) o_51);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_51), not_null(p_51)), (ATerm) ATmakeAppl(sym__2, not_null(n_51), not_null(q_51)));
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
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  x_51 :
  if(match_cons(a_52, sym__2))
    {
      b_52 = ATgetArgument(a_52, 0);
      c_52 = ATgetArgument(a_52, 1);
      y_51 :
      if(((ATermList) b_52 == ATempty))
        {
          z_51 :
          if(((ATermList) c_52 == ATempty))
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
  ATerm g_55 = NULL,h_55 = NULL,k_55 = NULL;
  g_55 = t;
  f_55 :
  if(match_cons(g_55, sym_Cong_2))
    {
      h_55 = ATgetArgument(g_55, 0);
      k_55 = ATgetArgument(g_55, 1);
      {
        ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,l_56 = NULL;
        ATerm s_15;
        s_15 = t;
        {
          ATerm s_55 = NULL;
          t = not_null(k_55);
          {
            ATerm v_55 = NULL;
            t = map_1(t, new_0);
            {
              s_55 = t;
              {
                if(((p_55 != NULL) && (p_55 != s_55)))
                  _fail(s_55);
                else
                  p_55 = s_55;
                {
                  t = not_null(p_55);
                  {
                    ATerm w_55 = NULL;
                    ATerm t_2 (ATerm t)
                    {
                      ATerm t_55 = NULL;
                      ATerm u_55 = NULL;
                      u_55 = t;
                      if(((t_55 != NULL) && (t_55 != u_55)))
                        _fail(u_55);
                      else
                        t_55 = u_55;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_55));
                      return(t);
                    }
                    t = map_1(t, t_2);
                    {
                      v_55 = t;
                      {
                        if(((n_55 != NULL) && (n_55 != v_55)))
                          _fail(v_55);
                        else
                          n_55 = v_55;
                        {
                          t = not_null(k_55);
                          {
                            ATerm z_55 = NULL;
                            t = map_1(t, new_0);
                            {
                              w_55 = t;
                              {
                                if(((q_55 != NULL) && (q_55 != w_55)))
                                  _fail(w_55);
                                else
                                  q_55 = w_55;
                                {
                                  t = not_null(q_55);
                                  {
                                    ATerm a_56 = NULL,k_56 = NULL;
                                    ATerm u_2 (ATerm t)
                                    {
                                      ATerm x_55 = NULL;
                                      ATerm y_55 = NULL;
                                      y_55 = t;
                                      if(((x_55 != NULL) && (x_55 != y_55)))
                                        _fail(y_55);
                                      else
                                        x_55 = y_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_55));
                                      return(t);
                                    }
                                    t = map_1(t, u_2);
                                    {
                                      z_55 = t;
                                      {
                                        if(((o_55 != NULL) && (o_55 != z_55)))
                                          _fail(z_55);
                                        else
                                          o_55 = z_55;
                                        {
                                          ATerm b_56 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_55), not_null(q_55));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              b_56 = t;
                                              if(((a_56 != NULL) && (a_56 != b_56)))
                                                _fail(b_56);
                                              else
                                                a_56 = b_56;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_56), not_null(k_55));
                                            {
                                              ATerm v_2 (ATerm t)
                                              {
                                                ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
                                                c_56 = t;
                                                f_53 :
                                                if(match_cons(c_56, sym__2))
                                                  {
                                                    d_56 = ATgetArgument(c_56, 0);
                                                    g_56 = ATgetArgument(c_56, 1);
                                                    c_55 :
                                                    if(match_cons(d_56, sym__2))
                                                      {
                                                        e_56 = ATgetArgument(d_56, 0);
                                                        f_56 = ATgetArgument(d_56, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_56))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_56), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_56)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, v_2);
                                              {
                                                k_56 = t;
                                                if(((r_55 != NULL) && (r_55 != k_56)))
                                                  _fail(k_56);
                                                else
                                                  r_55 = k_56;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = s_15;
        {
          ATerm m_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_55), not_null(q_55));
          {
            t = conc_0(t);
            {
              m_56 = t;
              if(((l_56 != NULL) && (l_56 != m_56)))
                _fail(m_56);
              else
                l_56 = m_56;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(h_55), not_null(n_55))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(r_55)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(h_55), not_null(o_55))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  f_57 :
  if(match_cons(g_57, sym_Cong_2))
    {
      h_57 = ATgetArgument(g_57, 0);
      i_57 = ATgetArgument(g_57, 1);
      {
        ATerm l_57 = NULL;
        ATerm p_57 = NULL;
        t = not_null(i_57);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm m_57 = NULL,n_57 = NULL;
            n_57 = t;
            d_57 :
            if(match_cons(n_57, sym_Match_1))
              {
                m_57 = ATgetArgument(n_57, 0);
                t = not_null(m_57);
              }
            else
              {
                if(match_cons(n_57, sym_Id_0))
                  t = term_o_13;
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_2);
          {
            p_57 = t;
            if(((l_57 != NULL) && (l_57 != p_57)))
              _fail(p_57);
            else
              l_57 = p_57;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(h_57), not_null(l_57)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  v_57 :
  if(match_cons(x_57, sym_Scope_2))
    {
      y_57 = ATgetArgument(x_57, 0);
      z_57 = ATgetArgument(x_57, 1);
      w_57 :
      if(((ATermList) y_57 == ATempty))
        {
          t = not_null(z_57);
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
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  i_58 :
  if(match_cons(v_58, sym_Where_1))
    {
      w_58 = ATgetArgument(v_58, 0);
      j_58 :
      if(match_cons(w_58, sym_Seq_2))
        {
          u_58 = ATgetArgument(w_58, 0);
          q_58 = ATgetArgument(w_58, 1);
          k_58 :
          if(match_cons(u_58, sym_Where_1))
            {
              p_58 = ATgetArgument(u_58, 0);
              l_58 :
              if(match_cons(q_58, sym_Seq_2))
                {
                  r_58 = ATgetArgument(q_58, 0);
                  t_58 = ATgetArgument(q_58, 1);
                  m_58 :
                  if(match_cons(r_58, sym_Build_1))
                    {
                      s_58 = ATgetArgument(r_58, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_58), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_58)), not_null(t_58))));
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
          if(match_cons(w_58, sym_Where_1))
            {
              u_58 = ATgetArgument(w_58, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(u_58));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(v_58, sym_Test_1))
        {
          w_58 = ATgetArgument(v_58, 0);
          n_58 :
          if(match_cons(w_58, sym_Test_1))
            {
              u_58 = ATgetArgument(w_58, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(u_58));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(v_58, sym_Not_1))
            {
              w_58 = ATgetArgument(v_58, 0);
              o_58 :
              if(match_cons(w_58, sym_Not_1))
                {
                  u_58 = ATgetArgument(w_58, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(u_58));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(v_58, sym_LChoice_2))
                {
                  w_58 = ATgetArgument(v_58, 0);
                  x_58 = ATgetArgument(v_58, 1);
                  {
                    if(((w_58 != NULL) && (w_58 != x_58)))
                      _fail(x_58);
                    else
                      w_58 = x_58;
                    t = not_null(w_58);
                  }
                }
              else
                {
                  if(match_cons(v_58, sym_Choice_2))
                    {
                      w_58 = ATgetArgument(v_58, 0);
                      x_58 = ATgetArgument(v_58, 1);
                      {
                        if(((w_58 != NULL) && (w_58 != x_58)))
                          _fail(x_58);
                        else
                          w_58 = x_58;
                        t = not_null(w_58);
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
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  t_59 = t;
  p_59 :
  if(match_cons(t_59, sym_LChoice_2))
    {
      u_59 = ATgetArgument(t_59, 0);
      x_59 = ATgetArgument(t_59, 1);
      q_59 :
      if(match_cons(u_59, sym_LChoice_2))
        {
          v_59 = ATgetArgument(u_59, 0);
          w_59 = ATgetArgument(u_59, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_59), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_59), not_null(x_59)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t_59, sym_Seq_2))
        {
          u_59 = ATgetArgument(t_59, 0);
          x_59 = ATgetArgument(t_59, 1);
          r_59 :
          if(match_cons(u_59, sym_Seq_2))
            {
              v_59 = ATgetArgument(u_59, 0);
              w_59 = ATgetArgument(u_59, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_59), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_59), not_null(x_59)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t_59, sym_Choice_2))
            {
              u_59 = ATgetArgument(t_59, 0);
              x_59 = ATgetArgument(t_59, 1);
              s_59 :
              if(match_cons(u_59, sym_Choice_2))
                {
                  v_59 = ATgetArgument(u_59, 0);
                  w_59 = ATgetArgument(u_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_59), (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_59), not_null(x_59)));
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
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  e_61 = t;
  w_60 :
  if(match_cons(e_61, sym_InfixApp_3))
    {
      f_61 = ATgetArgument(e_61, 0);
      b_61 = ATgetArgument(e_61, 1);
      a_61 = ATgetArgument(e_61, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_61), (ATerm) ATmakeAppl(sym_Op_2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_61)), not_null(f_61))));
    }
  else
    {
      if(match_cons(e_61, sym_BAM_3))
        {
          f_61 = ATgetArgument(e_61, 0);
          b_61 = ATgetArgument(e_61, 1);
          a_61 = ATgetArgument(e_61, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(a_61))), not_null(f_61)), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_61))));
        }
      else
        {
          if(match_cons(e_61, sym_AM_2))
            {
              f_61 = ATgetArgument(e_61, 0);
              b_61 = ATgetArgument(e_61, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_61), (ATerm) ATmakeAppl(sym_Match_1, not_null(b_61)));
            }
          else
            {
              if(match_cons(e_61, sym_MA_2))
                {
                  f_61 = ATgetArgument(e_61, 0);
                  b_61 = ATgetArgument(e_61, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_61)), not_null(b_61));
                }
              else
                {
                  if(match_cons(e_61, sym_BA_2))
                    {
                      f_61 = ATgetArgument(e_61, 0);
                      b_61 = ATgetArgument(e_61, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_61)), not_null(f_61));
                    }
                  else
                    {
                      if(match_cons(e_61, sym_Lets_2))
                        {
                          f_61 = ATgetArgument(e_61, 0);
                          b_61 = ATgetArgument(e_61, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_61), not_null(b_61));
                        }
                      else
                        {
                          if(match_cons(e_61, sym_LChoices_1))
                            {
                              f_61 = ATgetArgument(e_61, 0);
                              x_60 :
                              if(((ATgetType(f_61) == AT_LIST) && ((ATermList) f_61 != ATempty)))
                                {
                                  c_61 = ATgetFirst((ATermList) f_61);
                                  d_61 = (ATerm) ATgetNext((ATermList) f_61);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_61), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_61)));
                                }
                              else
                                {
                                  if(((ATermList) f_61 == ATempty))
                                    {
                                      t = term_u_15;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(e_61, sym_Choices_1))
                                {
                                  f_61 = ATgetArgument(e_61, 0);
                                  y_60 :
                                  if(((ATgetType(f_61) == AT_LIST) && ((ATermList) f_61 != ATempty)))
                                    {
                                      c_61 = ATgetFirst((ATermList) f_61);
                                      d_61 = (ATerm) ATgetNext((ATermList) f_61);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_61), (ATerm) ATmakeAppl(sym_Choices_1, not_null(d_61)));
                                    }
                                  else
                                    {
                                      if(((ATermList) f_61 == ATempty))
                                        {
                                          t = term_u_15;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(e_61, sym_Seqs_1))
                                    {
                                      f_61 = ATgetArgument(e_61, 0);
                                      z_60 :
                                      if(((ATgetType(f_61) == AT_LIST) && ((ATermList) f_61 != ATempty)))
                                        {
                                          c_61 = ATgetFirst((ATermList) f_61);
                                          d_61 = (ATerm) ATgetNext((ATermList) f_61);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_61), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_61)));
                                        }
                                      else
                                        {
                                          if(((ATermList) f_61 == ATempty))
                                            {
                                              t = term_v_15;
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
  ATerm t_62 = NULL,u_62 = NULL;
  t_62 = t;
  r_62 :
  if(match_cons(t_62, sym_Where_1))
    {
      u_62 = ATgetArgument(t_62, 0);
      s_62 :
      if(match_cons(u_62, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
  z_62 = t;
  x_62 :
  if(match_cons(z_62, sym_LChoice_2))
    {
      a_63 = ATgetArgument(z_62, 0);
      b_63 = ATgetArgument(z_62, 1);
      y_62 :
      if(match_cons(b_63, sym_Fail_0))
        t = not_null(a_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
  h_63 = t;
  f_63 :
  if(match_cons(h_63, sym_LChoice_2))
    {
      i_63 = ATgetArgument(h_63, 0);
      j_63 = ATgetArgument(h_63, 1);
      g_63 :
      if(match_cons(i_63, sym_Fail_0))
        t = not_null(j_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  r_63 = t;
  p_63 :
  if(match_cons(r_63, sym_Choice_2))
    {
      s_63 = ATgetArgument(r_63, 0);
      t_63 = ATgetArgument(r_63, 1);
      q_63 :
      if(match_cons(t_63, sym_Fail_0))
        t = not_null(s_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL;
  z_63 = t;
  x_63 :
  if(match_cons(z_63, sym_Choice_2))
    {
      a_64 = ATgetArgument(z_63, 0);
      b_64 = ATgetArgument(z_63, 1);
      y_63 :
      if(match_cons(a_64, sym_Fail_0))
        t = not_null(b_64);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym_Cong_2))
    {
      j_64 = ATgetArgument(i_64, 0);
      k_64 = ATgetArgument(i_64, 1);
      {
        t = not_null(k_64);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm o_64 = NULL;
            o_64 = t;
            g_64 :
            if(!(match_cons(o_64, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, x_2);
        }
        t = term_u_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  s_64 :
  if(match_cons(u_64, sym_Path_2))
    {
      v_64 = ATgetArgument(u_64, 0);
      w_64 = ATgetArgument(u_64, 1);
      t_64 :
      if(match_cons(w_64, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL;
  f_65 = t;
  b_65 :
  if(match_cons(f_65, sym_One_1))
    {
      g_65 = ATgetArgument(f_65, 0);
      c_65 :
      if(match_cons(g_65, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL;
  l_65 = t;
  j_65 :
  if(match_cons(l_65, sym_Some_1))
    {
      m_65 = ATgetArgument(l_65, 0);
      k_65 :
      if(match_cons(m_65, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  p_65 :
  if(match_cons(r_65, sym_Rec_2))
    {
      s_65 = ATgetArgument(r_65, 0);
      t_65 = ATgetArgument(r_65, 1);
      q_65 :
      if(match_cons(t_65, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
  h_66 = t;
  f_66 :
  if(match_cons(h_66, sym_Scope_2))
    {
      i_66 = ATgetArgument(h_66, 0);
      j_66 = ATgetArgument(h_66, 1);
      g_66 :
      if(match_cons(j_66, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
  r_66 = t;
  p_66 :
  if(match_cons(r_66, sym_Seq_2))
    {
      s_66 = ATgetArgument(r_66, 0);
      t_66 = ATgetArgument(r_66, 1);
      q_66 :
      if(match_cons(s_66, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm c_67 = NULL,h_67 = NULL;
  c_67 = t;
  y_66 :
  if(match_cons(c_67, sym_Not_1))
    {
      h_67 = ATgetArgument(c_67, 0);
      z_66 :
      if(match_cons(h_67, sym_Fail_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL;
  p_67 = t;
  k_67 :
  if(match_cons(p_67, sym_Test_1))
    {
      q_67 = ATgetArgument(p_67, 0);
      o_67 :
      if(match_cons(q_67, sym_Fail_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm a_16 = t;
              int b_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(b_16);
                }
              else
                {
                  t = a_16;
                  {
                    ATerm c_16 = t;
                    int d_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(d_16);
                      }
                    else
                      {
                        t = c_16;
                        {
                          ATerm e_16 = t;
                          int f_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(f_16);
                            }
                          else
                            {
                              t = e_16;
                              {
                                ATerm g_16 = t;
                                int j_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(j_16);
                                  }
                                else
                                  {
                                    t = g_16;
                                    {
                                      ATerm k_16 = t;
                                      int l_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(l_16);
                                        }
                                      else
                                        {
                                          t = k_16;
                                          {
                                            ATerm m_16 = t;
                                            int o_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(o_16);
                                              }
                                            else
                                              {
                                                t = m_16;
                                                {
                                                  ATerm p_16 = t;
                                                  int q_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
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
                                                                  t = F12_0(t);
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
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(w_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = v_16;
                                                                        {
                                                                          ATerm y_16 = t;
                                                                          int z_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(z_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_16;
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
  ATerm v_67 = NULL,w_67 = NULL;
  v_67 = t;
  t_67 :
  if(match_cons(v_67, sym_Match_1))
    {
      w_67 = ATgetArgument(v_67, 0);
      u_67 :
      if(match_cons(w_67, sym_Wld_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  b_68 = t;
  z_67 :
  if(match_cons(b_68, sym_Where_1))
    {
      c_68 = ATgetArgument(b_68, 0);
      a_68 :
      if(match_cons(c_68, sym_Id_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL;
  h_68 = t;
  f_68 :
  if(match_cons(h_68, sym_All_1))
    {
      i_68 = ATgetArgument(h_68, 0);
      g_68 :
      if(match_cons(i_68, sym_Id_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL;
  n_68 = t;
  l_68 :
  if(match_cons(n_68, sym_Rec_2))
    {
      o_68 = ATgetArgument(n_68, 0);
      p_68 = ATgetArgument(n_68, 1);
      m_68 :
      if(match_cons(p_68, sym_Id_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,d_69 = NULL;
  v_68 = t;
  t_68 :
  if(match_cons(v_68, sym_Scope_2))
    {
      w_68 = ATgetArgument(v_68, 0);
      d_69 = ATgetArgument(v_68, 1);
      u_68 :
      if(match_cons(d_69, sym_Id_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  h_69 :
  if(match_cons(j_69, sym_LChoice_2))
    {
      k_69 = ATgetArgument(j_69, 0);
      l_69 = ATgetArgument(j_69, 1);
      i_69 :
      if(match_cons(k_69, sym_Id_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  r_69 = t;
  p_69 :
  if(match_cons(r_69, sym_Seq_2))
    {
      s_69 = ATgetArgument(r_69, 0);
      t_69 = ATgetArgument(r_69, 1);
      q_69 :
      if(match_cons(t_69, sym_Id_0))
        t = not_null(s_69);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  d_70 = t;
  z_69 :
  if(match_cons(d_70, sym_Seq_2))
    {
      e_70 = ATgetArgument(d_70, 0);
      f_70 = ATgetArgument(d_70, 1);
      a_70 :
      if(match_cons(e_70, sym_Id_0))
        t = not_null(f_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  o_70 = t;
  m_70 :
  if(match_cons(o_70, sym_Not_1))
    {
      p_70 = ATgetArgument(o_70, 0);
      n_70 :
      if(match_cons(p_70, sym_Id_0))
        t = term_u_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL;
  b_71 = t;
  u_70 :
  if(match_cons(b_71, sym_Test_1))
    {
      c_71 = ATgetArgument(b_71, 0);
      a_71 :
      if(match_cons(c_71, sym_Id_0))
        t = term_v_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm a_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = a_17;
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm g_17 = t;
              int h_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(h_17);
                }
              else
                {
                  t = g_17;
                  {
                    ATerm i_17 = t;
                    int j_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(j_17);
                      }
                    else
                      {
                        t = i_17;
                        {
                          ATerm k_17 = t;
                          int l_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
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
                                    t = I8_0(t);
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    {
                                      ATerm s_17 = t;
                                      int t_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(t_17);
                                        }
                                      else
                                        {
                                          t = s_17;
                                          {
                                            ATerm e_18 = t;
                                            int f_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(f_18);
                                              }
                                            else
                                              {
                                                t = e_18;
                                                {
                                                  ATerm g_18 = t;
                                                  int h_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(h_18);
                                                    }
                                                  else
                                                    {
                                                      t = g_18;
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
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm k_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = k_18;
            {
              ATerm t_18 = t;
              int u_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(u_18);
                }
              else
                {
                  t = t_18;
                  {
                    ATerm v_18 = t;
                    int g_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(g_19);
                      }
                    else
                      {
                        t = v_18;
                        {
                          ATerm i_19 = t;
                          int j_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(j_19);
                            }
                          else
                            {
                              t = i_19;
                              {
                                ATerm k_19 = t;
                                int p_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(p_19);
                                  }
                                else
                                  {
                                    t = k_19;
                                    {
                                      ATerm q_19 = t;
                                      int r_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(r_19);
                                        }
                                      else
                                        {
                                          t = q_19;
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
ATerm conc_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  f_71 :
  if(match_cons(g_71, sym__2))
    {
      h_71 = ATgetArgument(g_71, 0);
      i_71 = ATgetArgument(g_71, 1);
      {
        t = not_null(h_71);
        {
          ATerm y_2 (ATerm t)
          {
            t = not_null(i_71);
            return(t);
          }
          t = at_end_1(t, y_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,n_73 = NULL;
  b_73 = t;
  j_72 :
  if(match_cons(b_73, sym_LChoice_2))
    {
      c_73 = ATgetArgument(b_73, 0);
      n_73 = ATgetArgument(b_73, 1);
      k_72 :
      if(match_cons(c_73, sym_Matrix_2))
        {
          d_73 = ATgetArgument(c_73, 0);
          e_73 = ATgetArgument(c_73, 1);
          l_72 :
          if(match_cons(n_73, sym_Choice_2))
            {
              z_72 = ATgetArgument(n_73, 0);
              a_73 = ATgetArgument(n_73, 1);
              m_72 :
              if(match_cons(z_72, sym_Matrix_2))
                {
                  x_72 = ATgetArgument(z_72, 0);
                  y_72 = ATgetArgument(z_72, 1);
                  {
                    ATerm t_73 = NULL,v_73 = NULL;
                    ATerm s_19;
                    s_19 = t;
                    {
                      ATerm u_73 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(x_72));
                      {
                        t = union_0(t);
                        {
                          u_73 = t;
                          if(((t_73 != NULL) && (t_73 != u_73)))
                            _fail(u_73);
                          else
                            t_73 = u_73;
                        }
                      }
                    }
                    t = s_19;
                    {
                      ATerm w_73 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(y_72));
                      {
                        t = conc_0(t);
                        {
                          w_73 = t;
                          if(((v_73 != NULL) && (v_73 != w_73)))
                            _fail(w_73);
                          else
                            v_73 = w_73;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(t_73), not_null(v_73)), not_null(a_73));
                    }
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(n_73, sym_LChoice_2))
                {
                  z_72 = ATgetArgument(n_73, 0);
                  a_73 = ATgetArgument(n_73, 1);
                  n_72 :
                  if(match_cons(z_72, sym_Matrix_2))
                    {
                      x_72 = ATgetArgument(z_72, 0);
                      y_72 = ATgetArgument(z_72, 1);
                      {
                        ATerm i_74 = NULL,k_74 = NULL;
                        ATerm t_19;
                        t_19 = t;
                        {
                          ATerm j_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(x_72));
                          {
                            t = union_0(t);
                            {
                              j_74 = t;
                              if(((i_74 != NULL) && (i_74 != j_74)))
                                _fail(j_74);
                              else
                                i_74 = j_74;
                            }
                          }
                        }
                        t = t_19;
                        {
                          ATerm l_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(y_72));
                          {
                            t = conc_0(t);
                            {
                              l_74 = t;
                              if(((k_74 != NULL) && (k_74 != l_74)))
                                _fail(l_74);
                              else
                                k_74 = l_74;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(i_74), not_null(k_74)), not_null(a_73));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(n_73, sym_Matrix_2))
                    {
                      z_72 = ATgetArgument(n_73, 0);
                      a_73 = ATgetArgument(n_73, 1);
                      {
                        ATerm q_74 = NULL,s_74 = NULL;
                        ATerm y_19;
                        y_19 = t;
                        {
                          ATerm r_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(z_72));
                          {
                            t = union_0(t);
                            {
                              r_74 = t;
                              if(((q_74 != NULL) && (q_74 != r_74)))
                                _fail(r_74);
                              else
                                q_74 = r_74;
                            }
                          }
                        }
                        t = y_19;
                        {
                          ATerm t_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(a_73));
                          {
                            t = conc_0(t);
                            {
                              t_74 = t;
                              if(((s_74 != NULL) && (s_74 != t_74)))
                                _fail(t_74);
                              else
                                s_74 = t_74;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(q_74), not_null(s_74));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
            }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(b_73, sym_Choice_2))
        {
          c_73 = ATgetArgument(b_73, 0);
          n_73 = ATgetArgument(b_73, 1);
          o_72 :
          if(match_cons(c_73, sym_Matrix_2))
            {
              d_73 = ATgetArgument(c_73, 0);
              e_73 = ATgetArgument(c_73, 1);
              p_72 :
              if(match_cons(n_73, sym_LChoice_2))
                {
                  z_72 = ATgetArgument(n_73, 0);
                  a_73 = ATgetArgument(n_73, 1);
                  q_72 :
                  if(match_cons(z_72, sym_Matrix_2))
                    {
                      x_72 = ATgetArgument(z_72, 0);
                      y_72 = ATgetArgument(z_72, 1);
                      {
                        ATerm a_75 = NULL,c_75 = NULL;
                        ATerm z_19;
                        z_19 = t;
                        {
                          ATerm b_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(x_72));
                          {
                            t = union_0(t);
                            {
                              b_75 = t;
                              if(((a_75 != NULL) && (a_75 != b_75)))
                                _fail(b_75);
                              else
                                a_75 = b_75;
                            }
                          }
                        }
                        t = z_19;
                        {
                          ATerm d_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(y_72));
                          {
                            t = conc_0(t);
                            {
                              d_75 = t;
                              if(((c_75 != NULL) && (c_75 != d_75)))
                                _fail(d_75);
                              else
                                c_75 = d_75;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(a_75), not_null(c_75)), not_null(a_73));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(n_73, sym_Choice_2))
                    {
                      z_72 = ATgetArgument(n_73, 0);
                      a_73 = ATgetArgument(n_73, 1);
                      r_72 :
                      if(match_cons(z_72, sym_Matrix_2))
                        {
                          x_72 = ATgetArgument(z_72, 0);
                          y_72 = ATgetArgument(z_72, 1);
                          {
                            ATerm j_75 = NULL,p_75 = NULL;
                            ATerm b_20;
                            b_20 = t;
                            {
                              ATerm k_75 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(x_72));
                              {
                                t = union_0(t);
                                {
                                  k_75 = t;
                                  if(((j_75 != NULL) && (j_75 != k_75)))
                                    _fail(k_75);
                                  else
                                    j_75 = k_75;
                                }
                              }
                            }
                            t = b_20;
                            {
                              ATerm q_75 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(y_72));
                              {
                                t = conc_0(t);
                                {
                                  q_75 = t;
                                  if(((p_75 != NULL) && (p_75 != q_75)))
                                    _fail(q_75);
                                  else
                                    p_75 = q_75;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(j_75), not_null(p_75)), not_null(a_73));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(n_73, sym_Matrix_2))
                        {
                          z_72 = ATgetArgument(n_73, 0);
                          a_73 = ATgetArgument(n_73, 1);
                          {
                            ATerm v_75 = NULL,x_75 = NULL;
                            ATerm c_20;
                            c_20 = t;
                            {
                              ATerm w_75 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(z_72));
                              {
                                t = union_0(t);
                                {
                                  w_75 = t;
                                  if(((v_75 != NULL) && (v_75 != w_75)))
                                    _fail(w_75);
                                  else
                                    v_75 = w_75;
                                }
                              }
                            }
                            t = c_20;
                            {
                              ATerm y_75 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(a_73));
                              {
                                t = conc_0(t);
                                {
                                  y_75 = t;
                                  if(((x_75 != NULL) && (x_75 != y_75)))
                                    _fail(y_75);
                                  else
                                    x_75 = y_75;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(v_75), not_null(x_75));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(b_73, sym_Scope_2))
            {
              c_73 = ATgetArgument(b_73, 0);
              n_73 = ATgetArgument(b_73, 1);
              s_72 :
              if(match_cons(n_73, sym_Matrix_2))
                {
                  z_72 = ATgetArgument(n_73, 0);
                  a_73 = ATgetArgument(n_73, 1);
                  {
                    ATerm c_76 = NULL;
                    ATerm j_76 = NULL;
                    t = not_null(a_73);
                    {
                      ATerm z_2 (ATerm t)
                      {
                        ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
                        d_76 = t;
                        h_72 :
                        if(match_cons(d_76, sym_Row_2))
                          {
                            e_76 = ATgetArgument(d_76, 0);
                            f_76 = ATgetArgument(d_76, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(e_76), (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_73), not_null(f_76)));
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = map_1(t, z_2);
                      {
                        j_76 = t;
                        if(((c_76 != NULL) && (c_76 != j_76)))
                          _fail(j_76);
                        else
                          c_76 = j_76;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(z_72), not_null(c_76));
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(b_73, sym_Seq_2))
                {
                  c_73 = ATgetArgument(b_73, 0);
                  n_73 = ATgetArgument(b_73, 1);
                  t_72 :
                  if(match_cons(c_73, sym_Matrix_2))
                    {
                      d_73 = ATgetArgument(c_73, 0);
                      e_73 = ATgetArgument(c_73, 1);
                      u_72 :
                      if(((ATgetType(e_73) == AT_LIST) && ((ATermList) e_73 != ATempty)))
                        {
                          f_73 = ATgetFirst((ATermList) e_73);
                          i_73 = (ATerm) ATgetNext((ATermList) e_73);
                          v_72 :
                          if(match_cons(f_73, sym_Row_2))
                            {
                              g_73 = ATgetArgument(f_73, 0);
                              h_73 = ATgetArgument(f_73, 1);
                              w_72 :
                              if(((ATermList) i_73 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(d_73), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(g_73), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_73), not_null(n_73)))));
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
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm n_78 (ATerm), ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_78(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
        ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
        b_78 = t;
        a_78 :
        if(((ATgetType(b_78) == AT_LIST) && ((ATermList) b_78 != ATempty)))
          {
            c_78 = ATgetFirst((ATermList) b_78);
            d_78 = (ATerm) ATgetNext((ATermList) b_78);
            {
              ATerm g_78 = NULL,i_78 = NULL;
              ATerm g_20;
              g_20 = t;
              {
                ATerm h_78 = NULL;
                t = not_null(c_78);
                {
                  t = p_78(t);
                  {
                    h_78 = t;
                    if(((g_78 != NULL) && (g_78 != h_78)))
                      _fail(h_78);
                    else
                      g_78 = h_78;
                  }
                }
              }
              t = g_20;
              {
                ATerm j_78 = NULL;
                t = not_null(d_78);
                {
                  t = foldr_3(t, n_78, o_78, p_78);
                  {
                    j_78 = t;
                    if(((i_78 != NULL) && (i_78 != j_78)))
                      _fail(j_78);
                    else
                      i_78 = j_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_78), not_null(i_78));
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
  ATerm w_78 = NULL;
  ATerm y_78 = NULL;
  w_78 = t;
  {
    ATerm z_78 = NULL;
    ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL;
    t = not_null(w_78);
    {
      z_78 = t;
      {
        t = SSL_explode_term(not_null(z_78));
        {
          b_79 = t;
          v_78 :
          if(match_cons(b_79, sym__2))
            {
              c_79 = ATgetArgument(b_79, 0);
              d_79 = ATgetArgument(b_79, 1);
              if(((y_78 != NULL) && (y_78 != d_79)))
                _fail(d_79);
              else
                y_78 = d_79;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(y_78);
      t = foldr_3(t, a_80, b_80, c_80);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm l_79 (ATerm t)
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_79 = NULL;
        ATerm j_79 = NULL;
        t = o_80(t);
        {
          j_79 = t;
          if(((i_79 != NULL) && (i_79 != j_79)))
            _fail(j_79);
          else
            i_79 = j_79;
        }
        t = (ATerm) ATinsert(ATempty, not_null(i_79));
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        {
          ATerm a_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, a_3, union_0, l_79);
        }
      }
    return(t);
  }
  t = l_79(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm q_80 (ATerm))
{
  t = collect_om_1(t, q_80);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm q_79 = NULL,r_79 = NULL;
    q_79 = t;
    o_79 :
    if(match_cons(q_79, sym_Off_1))
      {
        r_79 = ATgetArgument(q_79, 0);
        t = not_null(r_79);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, b_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL;
  i_80 = t;
  y_79 :
  if(match_cons(i_80, sym_As_2))
    {
      j_80 = ATgetArgument(i_80, 0);
      l_80 = ATgetArgument(i_80, 1);
      z_79 :
      if(match_cons(j_80, sym_Var_1))
        {
          k_80 = ATgetArgument(j_80, 0);
          d_80 :
          if(match_cons(l_80, sym_As_2))
            {
              m_80 = ATgetArgument(l_80, 0);
              h_80 = ATgetArgument(l_80, 1);
              e_80 :
              if(match_cons(m_80, sym_Off_1))
                {
                  g_80 = ATgetArgument(m_80, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_80)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_80))));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(j_80, sym_Off_1))
            {
              k_80 = ATgetArgument(j_80, 0);
              f_80 :
              if(match_cons(l_80, sym_Var_1))
                {
                  m_80 = ATgetArgument(l_80, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_80)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_80))));
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
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
  y_80 = t;
  x_80 :
  if(((ATermList) y_80 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_80) == AT_LIST) && ((ATermList) y_80 != ATempty)))
        {
          z_80 = ATgetFirst((ATermList) y_80);
          a_81 = (ATerm) ATgetNext((ATermList) y_80);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,x_81 = NULL;
  p_81 = t;
  d_81 :
  if(match_cons(p_81, sym_As_2))
    {
      q_81 = ATgetArgument(p_81, 0);
      s_81 = ATgetArgument(p_81, 1);
      e_81 :
      if(match_cons(q_81, sym_Var_1))
        {
          r_81 = ATgetArgument(q_81, 0);
          k_81 :
          if(match_cons(s_81, sym_As_2))
            {
              x_81 = ATgetArgument(s_81, 0);
              o_81 = ATgetArgument(s_81, 1);
              l_81 :
              if(match_cons(x_81, sym_Off_1))
                {
                  n_81 = ATgetArgument(x_81, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_81)), not_null(o_81));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(q_81, sym_Off_1))
            {
              r_81 = ATgetArgument(q_81, 0);
              m_81 :
              if(match_cons(s_81, sym_Var_1))
                {
                  x_81 = ATgetArgument(s_81, 0);
                  {
                    t = not_null(r_81);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(r_81)), term_o_13);
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
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
  m_82 = t;
  l_82 :
  if(((ATgetType(m_82) == AT_LIST) && ((ATermList) m_82 != ATempty)))
    {
      n_82 = ATgetFirst((ATermList) m_82);
      o_82 = (ATerm) ATgetNext((ATermList) m_82);
      {
        t = p_79(t);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm r_82 = NULL;
            r_82 = t;
            if(((n_82 != NULL) && (n_82 != r_82)))
              _fail(r_82);
            else
              n_82 = r_82;
            return(t);
          }
          t = fetch_1(t, c_3);
        }
        t = not_null(o_82);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL;
  y_82 = t;
  x_82 :
  if(match_cons(y_82, sym__2))
    {
      z_82 = ATgetArgument(y_82, 0);
      a_83 = ATgetArgument(y_82, 1);
      {
        t = not_null(z_82);
        {
          ATerm e_83 (ATerm t)
          {
            ATerm n_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_83);
                LocalPopChoice(o_20);
              }
            else
              {
                t = n_20;
                {
                  ATerm s_20 = t;
                  int u_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_3 (ATerm t)
                      {
                        t = not_null(a_83);
                        return(t);
                      }
                      t = HdMember_1(t, d_3);
                      t = e_83(t);
                      LocalPopChoice(u_20);
                    }
                  else
                    {
                      t = s_20;
                      t = Cons_2(t, _id, e_83);
                    }
                }
              }
            return(t);
          }
          t = e_83(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_78(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
        j_83 = t;
        h_83 :
        if(((ATgetType(j_83) == AT_LIST) && ((ATermList) j_83 != ATempty)))
          {
            k_83 = ATgetFirst((ATermList) j_83);
            l_83 = (ATerm) ATgetNext((ATermList) j_83);
            {
              ATerm u_83 = NULL;
              ATerm v_83 = NULL;
              t = not_null(l_83);
              {
                t = foldr_2(t, l_78, m_78);
                {
                  v_83 = t;
                  if(((u_83 != NULL) && (u_83 != v_83)))
                    _fail(v_83);
                  else
                    u_83 = v_83;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_83), not_null(u_83));
                t = m_78(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm unions_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_2(t, e_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
  f_84 = t;
  b_84 :
  if(match_cons(f_84, sym__2))
    {
      g_84 = ATgetArgument(f_84, 0);
      j_84 = ATgetArgument(f_84, 1);
      d_84 :
      if(match_cons(g_84, sym__2))
        {
          h_84 = ATgetArgument(g_84, 0);
          i_84 = ATgetArgument(g_84, 1);
          e_84 :
          if(match_cons(j_84, sym__2))
            {
              k_84 = ATgetArgument(j_84, 0);
              l_84 = ATgetArgument(j_84, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_84)), not_null(h_84)), (ATerm) ATinsert(CheckATermList(not_null(l_84)), not_null(i_84)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t_84 = t;
  s_84 :
  if(((ATgetType(t_84) == AT_LIST) && ((ATermList) t_84 != ATempty)))
    {
      u_84 = ATgetFirst((ATermList) t_84);
      v_84 = (ATerm) ATgetNext((ATermList) t_84);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_84), not_null(v_84));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm d_85 = NULL;
  d_85 = t;
  a_85 :
  if(((ATermList) d_85 == ATempty))
    {
      t = term_x_20;
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm y_83 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, y_83);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm i_81 (ATerm), ATerm j_81 (ATerm))
{
  ATerm q_85 = NULL;
  ATerm s_85 = NULL,u_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL,s_86 = NULL;
  q_85 = t;
  {
    ATerm y_20;
    y_20 = t;
    {
      ATerm v_85 = NULL;
      ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
      t = not_null(q_85);
      {
        v_85 = t;
        {
          t = SSL_explode_term(not_null(v_85));
          {
            x_85 = t;
            i_85 :
            if(match_cons(x_85, sym__2))
              {
                y_85 = ATgetArgument(x_85, 0);
                z_85 = ATgetArgument(x_85, 1);
                {
                  if(((s_85 != NULL) && (s_85 != y_85)))
                    _fail(y_85);
                  else
                    s_85 = y_85;
                  if(((u_85 != NULL) && (u_85 != z_85)))
                    _fail(z_85);
                  else
                    u_85 = z_85;
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
    t = y_20;
    {
      ATerm z_20;
      z_20 = t;
      {
        ATerm e_86 = NULL,f_86 = NULL,k_86 = NULL;
        t = not_null(u_85);
        {
          t = unzip_1(t, i_81);
          {
            e_86 = t;
            n_85 :
            if(match_cons(e_86, sym__2))
              {
                f_86 = ATgetArgument(e_86, 0);
                k_86 = ATgetArgument(e_86, 1);
                {
                  ATerm l_86 = NULL;
                  if(((b_86 != NULL) && (b_86 != f_86)))
                    _fail(f_86);
                  else
                    b_86 = f_86;
                  {
                    if(((a_86 != NULL) && (a_86 != k_86)))
                      _fail(k_86);
                    else
                      a_86 = k_86;
                    {
                      ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
                      t = SSL_mkterm(not_null(s_85), not_null(b_86));
                      {
                        l_86 = t;
                        {
                          t = j_81(t);
                          {
                            p_86 = t;
                            m_85 :
                            if(match_cons(p_86, sym__2))
                              {
                                q_86 = ATgetArgument(p_86, 0);
                                r_86 = ATgetArgument(p_86, 1);
                                {
                                  if(((c_86 != NULL) && (c_86 != q_86)))
                                    _fail(q_86);
                                  else
                                    c_86 = q_86;
                                  if(((d_86 != NULL) && (d_86 != r_86)))
                                    _fail(r_86);
                                  else
                                    d_86 = r_86;
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
            else
              _fail(t);
          }
        }
      }
      t = z_20;
      {
        ATerm t_86 = NULL,v_86 = NULL;
        ATerm u_86 = NULL;
        t = not_null(a_86);
        {
          t = unions_0(t);
          {
            u_86 = t;
            if(((t_86 != NULL) && (t_86 != u_86)))
              _fail(u_86);
            else
              t_86 = u_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_86), not_null(t_86));
          {
            t = union_0(t);
            {
              v_86 = t;
              if(((s_86 != NULL) && (s_86 != v_86)))
                _fail(v_86);
              else
                s_86 = v_86;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_86), not_null(s_86));
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm f_81 (ATerm), ATerm g_81 (ATerm))
{
  ATerm k_87 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      ATerm g_87 = NULL,i_87 = NULL;
      ATerm a_21;
      a_21 = t;
      {
        ATerm h_87 = NULL;
        t = try_1(t, f_81);
        {
          h_87 = t;
          if(((g_87 != NULL) && (g_87 != h_87)))
            _fail(h_87);
          else
            g_87 = h_87;
        }
      }
      t = a_21;
      {
        ATerm j_87 = NULL;
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_81(t);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = (ATerm) ATempty;
          }
        {
          j_87 = t;
          if(((i_87 != NULL) && (i_87 != j_87)))
            _fail(j_87);
          else
            i_87 = j_87;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_87), not_null(i_87));
      }
      return(t);
    }
    t = CollectSplit_2(t, k_87, f_3);
    return(t);
  }
  t = k_87(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  p_87 :
  if(match_cons(q_87, sym__2))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      {
        ATerm v_87 = NULL;
        ATerm w_87 = NULL;
        t = i_91(t);
        {
          w_87 = t;
          if(((v_87 != NULL) && (v_87 != w_87)))
            _fail(w_87);
          else
            v_87 = w_87;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(v_87)), not_null(r_87))), not_null(s_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  a_88 :
  if(match_cons(b_88, sym__2))
    {
      c_88 = ATgetArgument(b_88, 0);
      d_88 = ATgetArgument(b_88, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_88)), not_null(c_88));
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL;
  j_88 = t;
  i_88 :
  if(match_cons(j_88, sym__2))
    {
      k_88 = ATgetArgument(j_88, 0);
      l_88 = ATgetArgument(j_88, 1);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_88), not_null(l_88));
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = SSL_addr(not_null(k_88), not_null(l_88));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  t_88 = t;
  r_88 :
  if(match_cons(t_88, sym__2))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      s_88 :
      if(((ATgetType(v_88) == AT_LIST) && ((ATermList) v_88 != ATempty)))
        {
          w_88 = ATgetFirst((ATermList) v_88);
          x_88 = (ATerm) ATgetNext((ATermList) v_88);
          {
            ATerm b_89 = NULL;
            ATerm c_89 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_88), term_t_13);
            {
              t = add_0(t);
              {
                c_89 = t;
                if(((b_89 != NULL) && (b_89 != c_89)))
                  _fail(c_89);
                else
                  b_89 = c_89;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_88), not_null(w_88)), (ATerm) ATmakeAppl(sym__2, not_null(b_89), not_null(x_88)));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip1_0 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
  i_89 = t;
  g_89 :
  if(match_cons(i_89, sym__2))
    {
      j_89 = ATgetArgument(i_89, 0);
      k_89 = ATgetArgument(i_89, 1);
      h_89 :
      if(((ATermList) k_89 == ATempty))
        {
          t = (ATerm) ATempty;
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
  ATerm n_89 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_83(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          t = p_83(t);
          {
            t = _2(t, r_83, n_89);
            t = q_83(t);
          }
        }
      }
    return(t);
  }
  t = n_89(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm p_89 = NULL;
  p_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, not_null(p_89));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm z_83 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, z_83);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,o_90 = NULL,p_90 = NULL;
  ATerm c_91 (ATerm t)
  {
    ATerm s_90 = NULL;
    ATerm t_90 = NULL;
    t = not_null(f_90);
    {
      ATerm g_3 (ATerm t)
      {
        ATerm h_3 (ATerm t)
        {
          t = not_null(e_90);
          return(t);
        }
        t = Annotate_1(t, h_3);
        return(t);
      }
      t = nzip0_1(t, g_3);
      {
        t_90 = t;
        if(((s_90 != NULL) && (s_90 != t_90)))
          _fail(t_90);
        else
          s_90 = t_90;
      }
    }
    t = not_null(s_90);
    return(t);
  }
  ATerm d_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_90)), term_o_13);
    return(t);
  }
  ATerm e_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(b_90)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_90)), not_null(p_90)));
    return(t);
  }
  ATerm f_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_90)), (ATerm) ATmakeAppl(sym_Op_2, not_null(o_90), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(e_90)), not_null(p_90))));
    return(t);
  }
  c_90 = t;
  x_89 :
  if(match_cons(c_90, sym_As_2))
    {
      d_90 = ATgetArgument(c_90, 0);
      f_90 = ATgetArgument(c_90, 1);
      y_89 :
      if(match_cons(d_90, sym_Off_1))
        {
          e_90 = ATgetArgument(d_90, 0);
          z_89 :
          if(match_cons(f_90, sym_BuildDefault_1))
            {
              o_90 = ATgetArgument(f_90, 0);
              {
                ATerm h_21 = t;
                int i_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_91(t);
                    LocalPopChoice(i_21);
                  }
                else
                  {
                    t = h_21;
                    t = d_91(t);
                  }
              }
            }
          else
            {
              if(match_cons(f_90, sym_As_2))
                {
                  o_90 = ATgetArgument(f_90, 0);
                  p_90 = ATgetArgument(f_90, 1);
                  a_90 :
                  if(match_cons(o_90, sym_Var_1))
                    {
                      b_90 = ATgetArgument(o_90, 0);
                      {
                        ATerm j_21 = t;
                        int k_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_91(t);
                            LocalPopChoice(k_21);
                          }
                        else
                          {
                            t = j_21;
                            t = e_91(t);
                          }
                      }
                    }
                  else
                    t = c_91(t);
                }
              else
                {
                  if(match_cons(f_90, sym_Op_2))
                    {
                      o_90 = ATgetArgument(f_90, 0);
                      p_90 = ATgetArgument(f_90, 1);
                      {
                        ATerm l_21 = t;
                        int m_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_91(t);
                            LocalPopChoice(m_21);
                          }
                        else
                          {
                            t = l_21;
                            t = f_91(t);
                          }
                      }
                    }
                  else
                    t = c_91(t);
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
ATerm topdown_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm h_91 (ATerm t)
  {
    t = i_86(t);
    t = _all(t, h_91);
    return(t);
  }
  t = h_91(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm o_91 = NULL;
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL;
  o_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_n_21, (ATerm) ATinsert(ATempty, not_null(o_91)));
    {
      ATerm i_3 (ATerm t)
      {
        t = try_1(t, Propagate_0);
        return(t);
      }
      t = topdown_1(t, i_3);
      {
        t = collect_substitutions_0(t);
        {
          q_91 = t;
          n_91 :
          if(match_cons(q_91, sym__2))
            {
              r_91 = ATgetArgument(q_91, 0);
              s_91 = ATgetArgument(q_91, 1);
              {
                ATerm v_91 = NULL;
                ATerm w_91 = NULL;
                t = not_null(r_91);
                {
                  t = collect_offsets_0(t);
                  {
                    w_91 = t;
                    if(((v_91 != NULL) && (v_91 != w_91)))
                      _fail(w_91);
                    else
                      v_91 = w_91;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(v_91), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(r_91), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_91)))));
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
ATerm MatchToMatrix_0 (ATerm t)
{
  ATerm c_92 = NULL,d_92 = NULL;
  c_92 = t;
  b_92 :
  if(match_cons(c_92, sym_Match_1))
    {
      d_92 = ATgetArgument(c_92, 0);
      {
        t = not_null(d_92);
        t = term_to_matrix_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm g_92 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_73(t);
        t = g_92(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = k_73(t);
      }
    return(t);
  }
  t = g_92(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_73 (ATerm))
{
  t = repeat_2(t, m_73, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm h_92 (ATerm t)
  {
    t = m_86(t);
    {
      t = _all(t, h_92);
      t = m_86(t);
    }
    return(t);
  }
  t = h_92(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm q_21 = t;
      int r_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          LocalPopChoice(r_21);
        }
      else
        {
          t = q_21;
          {
            ATerm s_21 = t;
            int t_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                LocalPopChoice(t_21);
              }
            else
              {
                t = s_21;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, k_3);
    return(t);
  }
  t = downup_1(t, j_3);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  {
    t = matrix_to_dfa_0(t);
    t = strename_0(t);
  }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm a_66 (ATerm), ATerm b_66 (ATerm), ATerm c_66 (ATerm))
{
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL;
  n_92 = t;
  m_92 :
  if(match_cons(n_92, sym_SDef_3))
    {
      o_92 = ATgetArgument(n_92, 0);
      p_92 = ATgetArgument(n_92, 1);
      q_92 = ATgetArgument(n_92, 2);
      {
        ATerm u_92 = NULL;
        t = not_null(o_92);
        {
          ATerm w_92 = NULL;
          t = a_66(t);
          {
            u_92 = t;
            {
              t = not_null(p_92);
              {
                ATerm y_92 = NULL;
                t = b_66(t);
                {
                  w_92 = t;
                  {
                    t = not_null(q_92);
                    {
                      t = c_66(t);
                      {
                        y_92 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_92), not_null(w_92), not_null(y_92));
                      }
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
  ATerm h_93 = NULL,i_93 = NULL;
  h_93 = t;
  g_93 :
  if(match_cons(h_93, sym_Strategies_1))
    {
      i_93 = ATgetArgument(h_93, 0);
      {
        ATerm k_93 = NULL;
        t = not_null(i_93);
        {
          t = n_64(t);
          {
            k_93 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(k_93));
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
  ATerm r_93 = NULL,s_93 = NULL;
  r_93 = t;
  q_93 :
  if(match_cons(r_93, sym_Specification_1))
    {
      s_93 = ATgetArgument(r_93, 0);
      {
        ATerm u_93 = NULL;
        t = not_null(s_93);
        {
          t = p_64(t);
          {
            u_93 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(u_93));
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
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          ATerm p_3 (ATerm t)
          {
            t = SDef_3(t, _id, _id, j_91);
            return(t);
          }
          t = map_1(t, p_3);
          return(t);
        }
        t = Strategies_1(t, o_3);
        return(t);
      }
      t = Cons_2(t, n_3, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, m_3);
    return(t);
  }
  t = Specification_1(t, l_3);
  return(t);
}
ATerm _2 (ATerm t, ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL;
  c_94 = t;
  b_94 :
  if(match_cons(c_94, sym__2))
    {
      d_94 = ATgetArgument(c_94, 0);
      e_94 = ATgetArgument(c_94, 1);
      {
        ATerm h_94 = NULL;
        t = not_null(d_94);
        {
          ATerm j_94 = NULL;
          t = i_55(t);
          {
            h_94 = t;
            {
              t = not_null(e_94);
              {
                t = j_55(t);
                {
                  j_94 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_94), not_null(j_94));
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
  ATerm q_94 = NULL;
  ATerm u_21;
  u_21 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm r_94 = NULL,s_94 = NULL;
      r_94 = t;
      p_94 :
      if(match_cons(r_94, sym_Program_1))
        {
          s_94 = ATgetArgument(r_94, 0);
          if(((q_94 != NULL) && (q_94 != s_94)))
            _fail(s_94);
          else
            q_94 = s_94;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, q_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_21), not_null(q_94)), term_w_21));
      {
        t = printnl_0(t);
        {
          t = term_t_13;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATempty, term_y_21));
  {
    t = printnl_0(t);
    {
      t = term_t_13;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL;
  ATerm v_3 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm z_21 = t;
      if((PushChoice() == 0))
        {
          ATerm x_3 (ATerm t)
          {
            ATerm b_95 = NULL;
            b_95 = t;
            u_94 :
            if(!(match_cons(b_95, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_3);
          PopChoice();
          _fail(t);
        }
      else
        t = z_21;
      return(t);
    }
    t = _2(t, w_3, _id);
    {
      ATerm y_3 (ATerm t)
      {
        ATerm b_4 (ATerm t)
        {
          ATerm c_95 = NULL,d_95 = NULL;
          c_95 = t;
          w_94 :
          if(match_cons(c_95, sym_Runtime_1))
            {
              d_95 = ATgetArgument(c_95, 0);
              if(((a_95 != NULL) && (a_95 != d_95)))
                _fail(d_95);
              else
                a_95 = d_95;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, b_4);
        return(t);
      }
      t = _2(t, y_3, _id);
      {
        ATerm k_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            ATerm e_95 = NULL,f_95 = NULL;
            e_95 = t;
            y_94 :
            if(match_cons(e_95, sym_Program_1))
              {
                f_95 = ATgetArgument(e_95, 0);
                if(((z_94 != NULL) && (z_94 != f_95)))
                  _fail(f_95);
                else
                  z_94 = f_95;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, l_4);
          return(t);
        }
        t = _2(t, k_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_22), not_null(a_95)), term_a_22), not_null(z_94)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, v_3);
  {
    t = term_i_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  j_95 :
  if(match_cons(k_95, sym__2))
    {
      l_95 = ATgetArgument(k_95, 0);
      m_95 = ATgetArgument(k_95, 1);
      t = SSL_WriteToTextFile(not_null(l_95), not_null(m_95));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL;
  s_95 = t;
  r_95 :
  if(match_cons(s_95, sym__2))
    {
      t_95 = ATgetArgument(s_95, 0);
      u_95 = ATgetArgument(s_95, 1);
      t = SSL_WriteToBinaryFile(not_null(t_95), not_null(u_95));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_96 = NULL;
  ATerm g_22;
  g_22 = t;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm i_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 (ATerm t)
          {
            ATerm d_96 = NULL,e_96 = NULL;
            d_96 = t;
            z_95 :
            if(match_cons(d_96, sym_Output_1))
              {
                e_96 = ATgetArgument(d_96, 0);
                if(((c_96 != NULL) && (c_96 != e_96)))
                  _fail(e_96);
                else
                  c_96 = e_96;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, s_4);
          LocalPopChoice(k_22);
        }
      else
        {
          t = i_22;
          {
            ATerm f_96 = NULL;
            t = term_l_22;
            {
              f_96 = t;
              if(((c_96 != NULL) && (c_96 != f_96)))
                _fail(f_96);
              else
                c_96 = f_96;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_4, _id);
  }
  t = g_22;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = not_null(c_96);
        return(t);
      }
      t = split_2(t, u_4, _id);
      return(t);
    }
    t = _2(t, _id, t_4);
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_4 (ATerm t)
          {
            ATerm w_4 (ATerm t)
            {
              ATerm g_96 = NULL;
              g_96 = t;
              b_96 :
              if(!(match_cons(g_96, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, w_4);
            return(t);
          }
          t = _2(t, v_4, WriteToBinaryFile_0);
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
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
  ATerm m_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL;
  ATerm o_22;
  o_22 = t;
  t = dtime_0(t);
  t = o_22;
  {
    t = s_70(t);
    {
      ATerm p_22;
      p_22 = t;
      {
        ATerm n_96 = NULL;
        t = dtime_0(t);
        {
          n_96 = t;
          if(((m_96 != NULL) && (m_96 != n_96)))
            _fail(n_96);
          else
            m_96 = n_96;
        }
      }
      t = p_22;
      {
        o_96 = t;
        l_96 :
        if(match_cons(o_96, sym__2))
          {
            p_96 = ATgetArgument(o_96, 0);
            q_96 = ATgetArgument(o_96, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_96)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_96))), not_null(q_96));
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
  ATerm w_96 = NULL;
  w_96 = t;
  t = SSL_ReadFromFile(not_null(w_96));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_85 (ATerm), ATerm c_85 (ATerm))
{
  ATerm b_97 = NULL,d_97 = NULL;
  ATerm q_22;
  q_22 = t;
  {
    ATerm c_97 = NULL;
    t = b_85(t);
    {
      c_97 = t;
      if(((b_97 != NULL) && (b_97 != c_97)))
        _fail(c_97);
      else
        b_97 = c_97;
    }
  }
  t = q_22;
  {
    ATerm e_97 = NULL;
    t = c_85(t);
    {
      e_97 = t;
      if(((d_97 != NULL) && (d_97 != e_97)))
        _fail(e_97);
      else
        d_97 = e_97;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_97), not_null(d_97));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_97 = NULL;
  ATerm v_22;
  v_22 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 (ATerm t)
        {
          ATerm l_97 = NULL,m_97 = NULL;
          l_97 = t;
          i_97 :
          if(match_cons(l_97, sym_Input_1))
            {
              m_97 = ATgetArgument(l_97, 0);
              if(((k_97 != NULL) && (k_97 != m_97)))
                _fail(m_97);
              else
                k_97 = m_97;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_4);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm n_97 = NULL;
          t = term_y_22;
          {
            n_97 = t;
            if(((k_97 != NULL) && (k_97 != n_97)))
              _fail(n_97);
            else
              k_97 = n_97;
          }
        }
      }
  }
  t = v_22;
  {
    ATerm y_4 (ATerm t)
    {
      t = not_null(k_97);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm r_97 = NULL;
  r_97 = t;
  q_97 :
  if(!(match_cons(r_97, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(c_23);
            }
          else
            {
              t = b_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_4);
  t = r_70(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_97 = NULL;
  t_97 = t;
  t = SSL_table_create(not_null(t_97));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_97 = NULL;
  x_97 = t;
  {
    ATerm d_23;
    d_23 = t;
    {
      t = term_f_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_23, term_h_23, not_null(x_97));
          t = table_put_0(t);
        }
      }
    }
    t = d_23;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL;
  f_98 = t;
  d_98 :
  if(match_string(f_98, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(f_98) == AT_LIST) && ((ATermList) f_98 != ATempty)))
        {
          g_98 = ATgetFirst((ATermList) f_98);
          h_98 = (ATerm) ATgetNext((ATermList) f_98);
          e_98 :
          if(((ATgetType(h_98) == AT_LIST) && ((ATermList) h_98 != ATempty)))
            {
              i_98 = ATgetFirst((ATermList) h_98);
              j_98 = (ATerm) ATgetNext((ATermList) h_98);
              {
                ATerm n_98 = NULL;
                ATerm i_23;
                i_23 = t;
                {
                  t = not_null(g_98);
                  t = j_0(t);
                }
                t = i_23;
                {
                  ATerm o_98 = NULL;
                  t = not_null(i_98);
                  {
                    t = k_0(t);
                    {
                      o_98 = t;
                      if(((n_98 != NULL) && (n_98 != o_98)))
                        _fail(o_98);
                      else
                        n_98 = o_98;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_98)), not_null(n_98));
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
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 (ATerm t)
      {
        ATerm d_99 = NULL;
        d_99 = t;
        s_98 :
        if(!(match_string(d_99, "-S")))
          {
            if(!(match_string(d_99, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_l_23;
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_m_23;
        return(t);
      }
      t = Option_3(t, e_5, f_5, h_5);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              ATerm e_99 = NULL;
              e_99 = t;
              t_98 :
              if(!(match_string(e_99, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              t = term_p_23;
              return(t);
            }
            ATerm l_5 (ATerm t)
            {
              t = term_q_23;
              return(t);
            }
            t = Option_3(t, j_5, k_5, l_5);
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            {
              ATerm r_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm f_99 = NULL;
                    f_99 = t;
                    u_98 :
                    if(!(match_string(f_99, "-v")))
                      {
                        if(!(match_string(f_99, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm n_5 (ATerm t)
                  {
                    t = term_t_23;
                    return(t);
                  }
                  ATerm o_5 (ATerm t)
                  {
                    t = term_x_23;
                    return(t);
                  }
                  t = Option_3(t, m_5, n_5, o_5);
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = r_23;
                  {
                    ATerm z_23 = t;
                    int a_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_5 (ATerm t)
                        {
                          ATerm g_99 = NULL;
                          g_99 = t;
                          v_98 :
                          if(!(match_string(g_99, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm u_5 (ATerm t)
                        {
                          ATerm h_99 = NULL;
                          ATerm i_99 = NULL;
                          i_99 = t;
                          if(((h_99 != NULL) && (h_99 != i_99)))
                            _fail(i_99);
                          else
                            h_99 = i_99;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(h_99));
                          return(t);
                        }
                        ATerm v_5 (ATerm t)
                        {
                          t = term_c_24;
                          return(t);
                        }
                        t = ArgOption_3(t, p_5, u_5, v_5);
                        LocalPopChoice(a_24);
                      }
                    else
                      {
                        t = z_23;
                        {
                          ATerm d_24 = t;
                          int e_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_5 (ATerm t)
                              {
                                ATerm j_99 = NULL;
                                j_99 = t;
                                x_98 :
                                if(!(match_string(j_99, "-i")))
                                  {
                                    if(!(match_string(j_99, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm z_5 (ATerm t)
                              {
                                ATerm k_99 = NULL;
                                ATerm l_99 = NULL;
                                l_99 = t;
                                if(((k_99 != NULL) && (k_99 != l_99)))
                                  _fail(l_99);
                                else
                                  k_99 = l_99;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_99));
                                return(t);
                              }
                              ATerm a_6 (ATerm t)
                              {
                                t = term_f_24;
                                return(t);
                              }
                              t = ArgOption_3(t, x_5, z_5, a_6);
                              LocalPopChoice(e_24);
                            }
                          else
                            {
                              t = d_24;
                              {
                                ATerm g_24 = t;
                                int h_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_6 (ATerm t)
                                    {
                                      ATerm m_99 = NULL;
                                      m_99 = t;
                                      z_98 :
                                      if(!(match_string(m_99, "-o")))
                                        {
                                          if(!(match_string(m_99, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm c_6 (ATerm t)
                                    {
                                      ATerm n_99 = NULL;
                                      ATerm o_99 = NULL;
                                      o_99 = t;
                                      if(((n_99 != NULL) && (n_99 != o_99)))
                                        _fail(o_99);
                                      else
                                        n_99 = o_99;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_99));
                                      return(t);
                                    }
                                    ATerm d_6 (ATerm t)
                                    {
                                      t = term_i_24;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, b_6, c_6, d_6);
                                    LocalPopChoice(h_24);
                                  }
                                else
                                  {
                                    t = g_24;
                                    {
                                      ATerm j_24 = t;
                                      int k_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_6 (ATerm t)
                                          {
                                            ATerm p_99 = NULL;
                                            p_99 = t;
                                            b_99 :
                                            if(!(match_string(p_99, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm j_6 (ATerm t)
                                          {
                                            t = term_l_24;
                                            return(t);
                                          }
                                          ATerm k_6 (ATerm t)
                                          {
                                            t = term_p_24;
                                            return(t);
                                          }
                                          t = Option_3(t, i_6, j_6, k_6);
                                          LocalPopChoice(k_24);
                                        }
                                      else
                                        {
                                          t = j_24;
                                          {
                                            ATerm l_6 (ATerm t)
                                            {
                                              ATerm q_99 = NULL;
                                              q_99 = t;
                                              c_99 :
                                              if(!(match_string(q_99, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm m_6 (ATerm t)
                                            {
                                              t = term_r_24;
                                              return(t);
                                            }
                                            ATerm t_6 (ATerm t)
                                            {
                                              t = term_s_24;
                                              return(t);
                                            }
                                            t = Option_3(t, l_6, m_6, t_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm v_99 = NULL;
  v_99 = t;
  t = SSL_table_destroy(not_null(v_99));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_99 = NULL;
  z_99 = t;
  t = SSL_exit(not_null(z_99));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_100 = NULL;
  d_100 = t;
  t = SSL_implode_string(not_null(d_100));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm g_100 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_100);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          t = Nil_0(t);
          t = h_82(t);
        }
      }
    return(t);
  }
  t = g_100(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
        j_100 = t;
        i_100 :
        if(((ATgetType(j_100) == AT_LIST) && ((ATermList) j_100 != ATempty)))
          {
            k_100 = ATgetFirst((ATermList) j_100);
            l_100 = (ATerm) ATgetNext((ATermList) j_100);
            {
              t = not_null(k_100);
              {
                ATerm u_6 (ATerm t)
                {
                  t = not_null(l_100);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_6);
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
  ATerm r_100 = NULL;
  r_100 = t;
  t = SSL_explode_string(not_null(r_100));
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
  ATerm u_100 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = Cons_2(t, t_81, u_100);
      }
    return(t);
  }
  t = u_100(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL;
  d_101 = t;
  a_101 :
  if(((ATgetType(d_101) == AT_LIST) && ((ATermList) d_101 != ATempty)))
    {
      b_101 = ATgetFirst((ATermList) d_101);
      c_101 = (ATerm) ATgetNext((ATermList) d_101);
      {
        ATerm g_101 = NULL;
        t = not_null(c_101);
        {
          ATerm a_25;
          a_25 = t;
          {
            ATerm h_101 = NULL,j_101 = NULL,l_101 = NULL;
            ATerm b_25;
            b_25 = t;
            {
              ATerm i_101 = NULL;
              t = i_0(t);
              {
                i_101 = t;
                if(((h_101 != NULL) && (h_101 != i_101)))
                  _fail(i_101);
                else
                  h_101 = i_101;
              }
            }
            t = b_25;
            {
              ATerm k_101 = NULL;
              t = not_null(b_101);
              {
                t = h_0(t);
                {
                  k_101 = t;
                  if(((j_101 != NULL) && (j_101 != k_101)))
                    _fail(k_101);
                  else
                    j_101 = k_101;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_101)), not_null(j_101));
                {
                  l_101 = t;
                  if(((g_101 != NULL) && (g_101 != l_101)))
                    _fail(l_101);
                  else
                    g_101 = l_101;
                }
              }
            }
          }
          t = a_25;
          {
            ATerm v_6 (ATerm t)
            {
              t = not_null(g_101);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_6);
          }
        }
      }
    }
  else
    {
      if(((ATermList) d_101 == ATempty))
        {
          {
            t = term_c_25;
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
  ATerm z_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_68 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm u_101 = NULL,v_101 = NULL;
  u_101 = t;
  t_101 :
  if(match_cons(u_101, sym_Program_1))
    {
      v_101 = ATgetArgument(u_101, 0);
      {
        ATerm x_101 = NULL;
        t = not_null(v_101);
        {
          t = r_56(t);
          {
            x_101 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_101));
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
  ATerm f_102 = NULL;
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm g_102 = NULL;
      g_102 = t;
      if(((f_102 != NULL) && (f_102 != g_102)))
        _fail(g_102);
      else
        f_102 = g_102;
      return(t);
    }
    t = Program_1(t, b_7);
    return(t);
  }
  t = option_defined_1(t, a_7);
  {
    ATerm c_7 (ATerm t)
    {
      ATerm h_102 = NULL;
      ATerm i_102 = NULL;
      t = term_c_25;
      {
        ATerm d_7 (ATerm t)
        {
          t = not_null(f_102);
          return(t);
        }
        t = short_description_1(t, d_7);
        {
          t = concat_strings_0(t);
          {
            i_102 = t;
            if(((h_102 != NULL) && (h_102 != i_102)))
              _fail(i_102);
            else
              h_102 = i_102;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATempty, not_null(h_102)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, c_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATempty, term_d_25));
      {
        t = printnl_0(t);
        {
          t = term_g_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_7 (ATerm t)
                {
                  ATerm j_102 = NULL;
                  j_102 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_102)), term_h_25));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_7);
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm l_102 = NULL;
                    ATerm m_102 = NULL;
                    t = term_c_25;
                    {
                      ATerm p_7 (ATerm t)
                      {
                        t = not_null(f_102);
                        return(t);
                      }
                      t = long_description_1(t, p_7);
                      {
                        t = concat_strings_0(t);
                        {
                          m_102 = t;
                          if(((l_102 != NULL) && (l_102 != m_102)))
                            _fail(m_102);
                          else
                            l_102 = m_102;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_102)), term_i_25));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_7);
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
  ATerm t_102 = NULL,u_102 = NULL,w_102 = NULL;
  t_102 = t;
  s_102 :
  if(match_cons(t_102, sym__2))
    {
      u_102 = ATgetArgument(t_102, 0);
      w_102 = ATgetArgument(t_102, 1);
      {
        ATerm j_25;
        j_25 = t;
        t = SSL_printnl(not_null(u_102), not_null(w_102));
        t = j_25;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm d_103 = NULL,e_103 = NULL;
  d_103 = t;
  c_103 :
  if(match_cons(d_103, sym_Undefined_1))
    {
      e_103 = ATgetArgument(d_103, 0);
      {
        ATerm g_103 = NULL;
        t = not_null(e_103);
        {
          t = s_56(t);
          {
            g_103 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_103));
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
  ATerm l_103 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_82, _id);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = Cons_2(t, _id, l_103);
      }
    return(t);
  }
  t = l_103(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_69 (ATerm))
{
  t = fetch_1(t, w_69);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_103 = NULL;
  n_103 = t;
  m_103 :
  if(!(match_cons(n_103, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_85(t);
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_103 = NULL,r_103 = NULL,s_103 = NULL;
  q_103 = t;
  p_103 :
  if(match_cons(q_103, sym__2))
    {
      r_103 = ATgetArgument(q_103, 0);
      s_103 = ATgetArgument(q_103, 1);
      t = SSL_table_get(not_null(r_103), not_null(s_103));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL,b_104 = NULL,c_104 = NULL;
  z_103 = t;
  y_103 :
  if(match_cons(z_103, sym__3))
    {
      a_104 = ATgetArgument(z_103, 0);
      b_104 = ATgetArgument(z_103, 1);
      c_104 = ATgetArgument(z_103, 2);
      {
        ATerm p_25;
        p_25 = t;
        {
          ATerm g_104 = NULL;
          ATerm h_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_104), not_null(b_104));
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_25);
              }
            else
              {
                t = s_25;
                t = (ATerm) ATempty;
              }
            {
              h_104 = t;
              if(((g_104 != NULL) && (g_104 != h_104)))
                _fail(h_104);
              else
                g_104 = h_104;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_104), not_null(b_104), (ATerm) ATinsert(CheckATermList(not_null(g_104)), not_null(c_104)));
            t = table_put_0(t);
          }
        }
        t = p_25;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm l_104 = NULL;
  ATerm m_104 = NULL;
  t = term_c_25;
  {
    t = c_69(t);
    {
      m_104 = t;
      if(((l_104 != NULL) && (l_104 != m_104)))
        _fail(m_104);
      else
        l_104 = m_104;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_25, term_f_25, not_null(l_104));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL;
  s_104 = t;
  r_104 :
  if(match_string(s_104, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(s_104) == AT_LIST) && ((ATermList) s_104 != ATempty)))
        {
          t_104 = ATgetFirst((ATermList) s_104);
          u_104 = (ATerm) ATgetNext((ATermList) s_104);
          {
            ATerm x_104 = NULL;
            ATerm u_25;
            u_25 = t;
            {
              t = not_null(t_104);
              t = c_0(t);
            }
            t = u_25;
            {
              ATerm y_104 = NULL;
              t = term_c_25;
              {
                t = f_0(t);
                {
                  y_104 = t;
                  if(((x_104 != NULL) && (x_104 != y_104)))
                    _fail(y_104);
                  else
                    x_104 = y_104;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_104)), not_null(x_104));
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
  ATerm q_7 (ATerm t)
  {
    ATerm d_105 = NULL;
    d_105 = t;
    c_105 :
    if(!(match_string(d_105, "--help")))
      {
        if(!(match_string(d_105, "-h")))
          {
            if(!(match_string(d_105, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    t = term_v_25;
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  t = Option_3(t, q_7, r_7, s_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
  g_105 = t;
  f_105 :
  if(((ATgetType(g_105) == AT_LIST) && ((ATermList) g_105 != ATempty)))
    {
      h_105 = ATgetFirst((ATermList) g_105);
      i_105 = (ATerm) ATgetNext((ATermList) g_105);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_105)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_105)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm))
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL;
  q_105 = t;
  p_105 :
  if(((ATgetType(q_105) == AT_LIST) && ((ATermList) q_105 != ATempty)))
    {
      r_105 = ATgetFirst((ATermList) q_105);
      s_105 = (ATerm) ATgetNext((ATermList) q_105);
      {
        ATerm v_105 = NULL;
        t = not_null(r_105);
        {
          ATerm x_105 = NULL;
          t = f_67(t);
          {
            v_105 = t;
            {
              t = not_null(s_105);
              {
                t = g_67(t);
                {
                  x_105 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_105)), not_null(v_105));
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
  ATerm d_106 = NULL;
  d_106 = t;
  c_106 :
  if(((ATermList) d_106 == ATempty))
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
  ATerm x_25;
  x_25 = t;
  {
    ATerm t_7 (ATerm t)
    {
      t = term_y_25;
      t = a_69(t);
      return(t);
    }
    t = try_1(t, t_7);
  }
  t = x_25;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm f_106 = NULL;
      f_106 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_106));
      return(t);
    }
    ATerm v_7 (ATerm t)
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
              {
                t = a_69(t);
                t = Cons_2(t, _id, v_7);
              }
            }
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_7, v_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  ATerm d_26;
  d_26 = t;
  {
    ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL,s_106 = NULL;
    o_106 = t;
    k_106 :
    if(match_cons(o_106, sym__3))
      {
        p_106 = ATgetArgument(o_106, 0);
        q_106 = ATgetArgument(o_106, 1);
        s_106 = ATgetArgument(o_106, 2);
        {
          if(((l_106 != NULL) && (l_106 != p_106)))
            _fail(p_106);
          else
            l_106 = p_106;
          {
            if(((m_106 != NULL) && (m_106 != q_106)))
              _fail(q_106);
            else
              m_106 = q_106;
            {
              if(((n_106 != NULL) && (n_106 != s_106)))
                _fail(s_106);
              else
                n_106 = s_106;
              t = SSL_table_put(not_null(l_106), not_null(m_106), not_null(n_106));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = d_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm v_106 = NULL;
  ATerm e_26;
  e_26 = t;
  {
    t = term_f_26;
    t = table_put_0(t);
  }
  t = e_26;
  {
    ATerm z_7 (ATerm t)
    {
      ATerm g_26 = t;
      int h_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_68(t);
          LocalPopChoice(h_26);
        }
      else
        {
          t = g_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, z_7);
    {
      ATerm b_8 (ATerm t)
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm c_8 (ATerm t)
              {
                ATerm d_8 (ATerm t)
                {
                  ATerm w_106 = NULL;
                  w_106 = t;
                  if(((v_106 != NULL) && (v_106 != w_106)))
                    _fail(w_106);
                  else
                    v_106 = w_106;
                  return(t);
                }
                t = Undefined_1(t, d_8);
                return(t);
              }
              t = option_defined_1(t, c_8);
              {
                ATerm k_26;
                k_26 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_106)), term_m_26));
                  t = printnl_0(t);
                }
                t = k_26;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_13;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, b_8);
      {
        ATerm n_26;
        n_26 = t;
        {
          t = term_e_25;
          t = table_destroy_0(t);
        }
        t = n_26;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm i_70 (ATerm))
{
  ATerm e_8 (ATerm t)
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_70(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, e_8);
  {
    t = store_options_0(t);
    {
      ATerm r_26 = t;
      int s_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, i_70);
          LocalPopChoice(s_26);
        }
      else
        {
          t = r_26;
          {
            ATerm t_26 = t;
            int u_26 = stack_ptr;
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
                LocalPopChoice(u_26);
              }
            else
              {
                t = t_26;
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
  ATerm f_8 (ATerm t)
  {
    t = _2(t, _id, y_69);
    return(t);
  }
  t = iowrap_2(t, f_8, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, j_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
