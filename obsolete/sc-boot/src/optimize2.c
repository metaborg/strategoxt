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
ATerm term_w_29;
ATerm term_m_29;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_p_28;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_k_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_g_23;
ATerm term_b_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_j_11;
ATerm term_r_7;
ATerm term_l_7;
void init_constant_terms (void)
{
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_j_26, term_k_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, (ATerm) ATempty);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm i_85 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm tboundin_3 (ATerm, ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm crush_3 (ATerm, ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm));
ATerm free_vars_3 (ATerm, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm CleanupScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_107 (ATerm));
ATerm simplify_clean_0 (ATerm);
ATerm simplify_0 (ATerm);
ATerm WidenScope_0 (ATerm);
ATerm InlineDont_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm w_103 (ATerm));
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
ATerm SubsVar_2 (ATerm, ATerm c_111 (ATerm), ATerm d_111 (ATerm));
ATerm alltd_1 (ATerm, ATerm c_110 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm e_111 (ATerm), ATerm f_111 (ATerm));
ATerm substitute_1 (ATerm, ATerm g_111 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm for_3 (ATerm, ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm));
ATerm HdMember_1 (ATerm, ATerm a_101 (ATerm));
ATerm diff_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_109 (ATerm));
ATerm in_0 (ATerm);
ATerm Var_1 (ATerm, ATerm e_86 (ATerm));
ATerm CopyPropagation_0 (ATerm);
ATerm HoistLet_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm));
ATerm zip_1 (ATerm, ATerm h_105 (ATerm));
ATerm TransformingAnnoCongruence_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm i_88 (ATerm), ATerm j_88 (ATerm));
ATerm Explode_2 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm));
ATerm Op_2 (ATerm, ATerm i_86 (ATerm), ATerm j_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm u_112 (ATerm));
ATerm new_0 (ATerm);
ATerm Mapp2_0 (ATerm);
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
ATerm repeat_2 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_94 (ATerm));
ATerm downup_1 (ATerm, ATerm a_108 (ATerm));
ATerm simplify_widen_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm));
ATerm Strategies_1 (ATerm, ATerm s_85 (ATerm));
ATerm Specification_1 (ATerm, ATerm u_85 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm x_112 (ATerm));
ATerm _2 (ATerm, ATerm m_76 (ATerm), ATerm n_76 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_106 (ATerm), ATerm q_106 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_91 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_103 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_90 (ATerm));
ATerm map_1 (ATerm, ATerm e_103 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_90 (ATerm));
ATerm Program_1 (ATerm, ATerm v_77 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_103 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_91 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_107 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_90 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm h_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_88 (ATerm), ATerm l_88 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_90 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_91 (ATerm), ATerm h_91 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_91 (ATerm));
ATerm optimize2_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Tl_0 (ATerm t)
{
  ATerm w_2 = NULL,k_3 = NULL,l_3 = NULL;
  w_2 = t;
  v_2 :
  if(((ATgetType(w_2) == AT_LIST) && ((ATermList) w_2 != ATempty)))
    {
      k_3 = ATgetFirst((ATermList) w_2);
      l_3 = (ATerm) ATgetNext((ATermList) w_2);
      t = not_null(l_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      {
        t = not_null(f_4);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm p_5 = t;
            int t_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(t_5);
              }
            else
              {
                t = p_5;
                {
                  ATerm v_5 = t;
                  int y_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_5;
                      z_5 = t;
                      {
                        ATerm a_0 (ATerm t)
                        {
                          t = not_null(g_4);
                          return(t);
                        }
                        t = HdMember_1(t, a_0);
                      }
                      t = z_5;
                      t = Cons_2(t, _id, k_4);
                      LocalPopChoice(y_5);
                    }
                  else
                    {
                      t = v_5;
                      {
                        t = Tl_0(t);
                        t = k_4(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = k_4(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm q_4 = NULL,r_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym_DynamicRules_1))
    {
      r_4 = ATgetArgument(q_4, 0);
      {
        ATerm u_4 = NULL,w_4 = NULL;
        ATerm v_4 = NULL;
        t = SSLgetAnnotations(not_null(q_4));
        {
          v_4 = t;
          if(((u_4 != NULL) && (u_4 != v_4)))
            _fail(v_4);
          else
            u_4 = v_4;
        }
        {
          t = not_null(r_4);
          {
            ATerm y_4 = NULL;
            t = i_85(t);
            {
              w_4 = t;
              {
                ATerm z_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(w_4)), not_null(u_4));
                {
                  z_4 = t;
                  if(((y_4 != NULL) && (y_4 != z_4)))
                    _fail(z_4);
                  else
                    y_4 = z_4;
                }
                t = not_null(y_4);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm f_88 (ATerm), ATerm g_88 (ATerm))
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
  k_5 = t;
  j_5 :
  if(match_cons(k_5, sym_Scope_2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      {
        ATerm q_5 = NULL,s_5 = NULL;
        ATerm r_5 = NULL;
        t = SSLgetAnnotations(not_null(k_5));
        {
          r_5 = t;
          if(((q_5 != NULL) && (q_5 != r_5)))
            _fail(r_5);
          else
            q_5 = r_5;
        }
        {
          t = not_null(l_5);
          {
            ATerm u_5 = NULL;
            t = f_88(t);
            {
              s_5 = t;
              {
                t = not_null(m_5);
                {
                  ATerm w_5 = NULL;
                  t = g_88(t);
                  {
                    u_5 = t;
                    {
                      ATerm x_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(s_5), not_null(u_5)), not_null(q_5));
                      {
                        x_5 = t;
                        if(((w_5 != NULL) && (w_5 != x_5)))
                          _fail(x_5);
                        else
                          w_5 = x_5;
                      }
                      t = not_null(w_5);
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
ATerm tboundin_3 (ATerm t, ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm))
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, x_111, v_111);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      t = DynamicRules_1(t, v_111);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_DynamicRules_1))
    {
      g_6 = ATgetArgument(f_6, 0);
      {
        t = not_null(g_6);
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  l_6 :
  if(match_cons(q_6, sym_LRule_1))
    {
      r_6 = ATgetArgument(q_6, 0);
      m_6 :
      if(match_cons(r_6, sym_Rule_3))
        {
          n_6 = ATgetArgument(r_6, 0);
          o_6 = ATgetArgument(r_6, 1);
          p_6 = ATgetArgument(r_6, 2);
          {
            t = not_null(n_6);
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
      if(match_cons(q_6, sym_Scope_2))
        {
          r_6 = ATgetArgument(q_6, 0);
          s_6 = ATgetArgument(q_6, 1);
          t = not_null(r_6);
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
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_Var_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      t = (ATerm) ATinsert(ATempty, not_null(d_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym__2))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      {
        t = not_null(j_7);
        {
          ATerm o_7 (ATerm t)
          {
            ATerm c_6 = t;
            int d_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_7);
                LocalPopChoice(d_6);
              }
            else
              {
                t = c_6;
                {
                  ATerm h_6 = t;
                  int i_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_0 (ATerm t)
                      {
                        t = not_null(k_7);
                        return(t);
                      }
                      t = HdMember_1(t, b_0);
                      t = o_7(t);
                      LocalPopChoice(i_6);
                    }
                  else
                    {
                      t = h_6;
                      t = Cons_2(t, _id, o_7);
                    }
                }
              }
            return(t);
          }
          t = o_7(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm))
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_99(t);
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
        ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
        t_7 = t;
        s_7 :
        if(((ATgetType(t_7) == AT_LIST) && ((ATermList) t_7 != ATempty)))
          {
            u_7 = ATgetFirst((ATermList) t_7);
            v_7 = (ATerm) ATgetNext((ATermList) t_7);
            {
              ATerm y_7 = NULL,a_8 = NULL;
              ATerm t_6;
              t_6 = t;
              {
                ATerm z_7 = NULL;
                t = not_null(u_7);
                {
                  t = z_99(t);
                  {
                    z_7 = t;
                    if(((y_7 != NULL) && (y_7 != z_7)))
                      _fail(z_7);
                    else
                      y_7 = z_7;
                  }
                }
              }
              t = t_6;
              {
                ATerm b_8 = NULL;
                t = not_null(v_7);
                {
                  t = foldr_3(t, x_99, y_99, z_99);
                  {
                    b_8 = t;
                    if(((a_8 != NULL) && (a_8 != b_8)))
                      _fail(b_8);
                    else
                      a_8 = b_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), not_null(a_8));
                  t = y_99(t);
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
ATerm crush_3 (ATerm t, ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm))
{
  ATerm j_8 = NULL;
  ATerm l_8 = NULL;
  j_8 = t;
  {
    ATerm m_8 = NULL;
    ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
    t = not_null(j_8);
    {
      m_8 = t;
      {
        t = SSL_explode_term(not_null(m_8));
        {
          o_8 = t;
          i_8 :
          if(match_cons(o_8, sym__2))
            {
              p_8 = ATgetArgument(o_8, 0);
              q_8 = ATgetArgument(o_8, 1);
              if(((l_8 != NULL) && (l_8 != q_8)))
                _fail(q_8);
              else
                l_8 = q_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_8);
      t = foldr_3(t, l_101, m_101, n_101);
    }
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm x_8 (ATerm t)
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_96(t);
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
              ATerm v_8 = NULL;
              ATerm y_6;
              y_6 = t;
              {
                ATerm w_8 = NULL;
                t = w_96(t);
                {
                  w_8 = t;
                  if(((v_8 != NULL) && (v_8 != w_8)))
                    _fail(w_8);
                  else
                    v_8 = w_8;
                }
              }
              t = y_6;
              {
                ATerm e_0 (ATerm t)
                {
                  ATerm g_0 (ATerm t)
                  {
                    t = not_null(v_8);
                    return(t);
                  }
                  t = split_2(t, x_8, g_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm f_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_96(t, e_0, x_8, f_0);
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, n_0, union_0, _id);
                }
              }
              LocalPopChoice(x_6);
            }
          else
            {
              t = w_6;
              {
                ATerm o_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_0, union_0, x_8);
              }
            }
        }
      }
    return(t);
  }
  t = x_8(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, p_0, tboundin_3);
  return(t);
}
ATerm CleanupScope_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Scope_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      {
        ATerm j_9 = NULL;
        ATerm k_9 = NULL,m_9 = NULL;
        ATerm l_9 = NULL;
        t = not_null(g_9);
        {
          t = tvars_0(t);
          {
            l_9 = t;
            if(((k_9 != NULL) && (k_9 != l_9)))
              _fail(l_9);
            else
              k_9 = l_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(k_9));
          {
            t = isect_0(t);
            {
              m_9 = t;
              {
                if(((j_9 != NULL) && (j_9 != m_9)))
                  _fail(m_9);
                else
                  j_9 = m_9;
                {
                  ATerm e_7 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm n_9 = NULL;
                      n_9 = t;
                      if(((f_9 != NULL) && (f_9 != n_9)))
                        _fail(n_9);
                      else
                        f_9 = n_9;
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = e_7;
                    }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_9), not_null(g_9));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_107 (ATerm))
{
  ATerm s_9 (ATerm t)
  {
    t = w_107(t);
    t = _all(t, s_9);
    return(t);
  }
  t = s_9(t);
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
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  ATerm m_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_9), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_10), not_null(a_10)));
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_10), not_null(f_10)));
    return(t);
  }
  b_10 = t;
  v_9 :
  if(match_cons(b_10, sym_Seq_2))
    {
      c_10 = ATgetArgument(b_10, 0);
      f_10 = ATgetArgument(b_10, 1);
      w_9 :
      if(match_cons(f_10, sym_Scope_2))
        {
          z_9 = ATgetArgument(f_10, 0);
          a_10 = ATgetArgument(f_10, 1);
          x_9 :
          if(match_cons(c_10, sym_Scope_2))
            {
              d_10 = ATgetArgument(c_10, 0);
              e_10 = ATgetArgument(c_10, 1);
              {
                ATerm f_7 = t;
                int g_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_10(t);
                    LocalPopChoice(g_7);
                  }
                else
                  {
                    t = f_7;
                    t = n_10(t);
                  }
              }
            }
          else
            {
              t = m_10(t);
            }
        }
      else
        {
          y_9 :
          if(match_cons(c_10, sym_Scope_2))
            {
              d_10 = ATgetArgument(c_10, 0);
              e_10 = ATgetArgument(c_10, 1);
              t = n_10(t);
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  u_10 = t;
  p_10 :
  if(match_cons(u_10, sym_Let_2))
    {
      v_10 = ATgetArgument(u_10, 0);
      b_11 = ATgetArgument(u_10, 1);
      q_10 :
      if(((ATgetType(v_10) == AT_LIST) && ((ATermList) v_10 != ATempty)))
        {
          w_10 = ATgetFirst((ATermList) v_10);
          a_11 = (ATerm) ATgetNext((ATermList) v_10);
          r_10 :
          if(match_cons(w_10, sym_SDef_3))
            {
              x_10 = ATgetArgument(w_10, 0);
              y_10 = ATgetArgument(w_10, 1);
              z_10 = ATgetArgument(w_10, 2);
              s_10 :
              if(((ATermList) y_10 == ATempty))
                {
                  t_10 :
                  if(((ATermList) a_11 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_l_7), not_null(x_10), (ATerm)ATempty, not_null(z_10))), not_null(b_11));
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
ATerm at_suffix_1 (ATerm t, ATerm w_103 (ATerm))
{
  ATerm g_11 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_103(t);
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        t = Cons_2(t, _id, g_11);
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  s_11 :
  if(match_cons(t_11, sym_Let_2))
    {
      u_11 = ATgetArgument(t_11, 0);
      v_11 = ATgetArgument(t_11, 1);
      {
        ATerm y_11 = NULL,z_11 = NULL;
        ATerm o_12 = NULL;
        t = not_null(u_11);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
            a_12 = t;
            o_11 :
            if(((ATgetType(a_12) == AT_LIST) && ((ATermList) a_12 != ATempty)))
              {
                b_12 = ATgetFirst((ATermList) a_12);
                f_12 = (ATerm) ATgetNext((ATermList) a_12);
                p_11 :
                if(match_cons(b_12, sym_SDef_3))
                  {
                    c_12 = ATgetArgument(b_12, 0);
                    d_12 = ATgetArgument(b_12, 1);
                    e_12 = ATgetArgument(b_12, 2);
                    q_11 :
                    if(((ATermList) d_12 == ATempty))
                      {
                        {
                          ATerm n_12 = NULL;
                          t = not_null(v_11);
                          {
                            ATerm u_0 (ATerm t)
                            {
                              ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
                              j_12 = t;
                              k_11 :
                              if(match_cons(j_12, sym_Call_2))
                                {
                                  k_12 = ATgetArgument(j_12, 0);
                                  m_12 = ATgetArgument(j_12, 1);
                                  l_11 :
                                  if(match_cons(k_12, sym_SVar_1))
                                    {
                                      l_12 = ATgetArgument(k_12, 0);
                                      m_11 :
                                      if(((ATermList) m_12 == ATempty))
                                        {
                                          {
                                            if(((c_12 != NULL) && (c_12 != l_12)))
                                              _fail(l_12);
                                            else
                                              c_12 = l_12;
                                            t = not_null(e_12);
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
                            t = oncetd_1(t, u_0);
                            {
                              n_12 = t;
                              {
                                if(((y_11 != NULL) && (y_11 != n_12)))
                                  _fail(n_12);
                                else
                                  y_11 = n_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_12)), (ATerm) ATempty), not_null(y_11));
                                  {
                                    ATerm p_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = in_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = p_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(f_12);
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
          t = at_suffix_1(t, t_0);
          {
            o_12 = t;
            if(((z_11 != NULL) && (z_11 != o_12)))
              _fail(o_12);
            else
              z_11 = o_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_11), not_null(y_11));
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  c_13 = t;
  w_12 :
  if(match_cons(c_13, sym__2))
    {
      d_13 = ATgetArgument(c_13, 0);
      f_13 = ATgetArgument(c_13, 1);
      x_12 :
      if(match_cons(d_13, sym_Build_1))
        {
          e_13 = ATgetArgument(d_13, 0);
          y_12 :
          if(match_cons(f_13, sym_Where_1))
            {
              g_13 = ATgetArgument(f_13, 0);
              z_12 :
              if(match_cons(g_13, sym_Prim_2))
                {
                  a_13 = ATgetArgument(g_13, 0);
                  b_13 = ATgetArgument(g_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(a_13), not_null(b_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(f_13, sym_Prim_2))
                {
                  g_13 = ATgetArgument(f_13, 0);
                  h_13 = ATgetArgument(f_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_13), not_null(h_13));
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
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  x_13 = t;
  s_13 :
  if(match_cons(x_13, sym__2))
    {
      y_13 = ATgetArgument(x_13, 0);
      a_14 = ATgetArgument(x_13, 1);
      t_13 :
      if(match_cons(y_13, sym_Build_1))
        {
          z_13 = ATgetArgument(y_13, 0);
          u_13 :
          if(match_cons(a_14, sym_Where_1))
            {
              b_14 = ATgetArgument(a_14, 0);
              v_13 :
              if(match_cons(b_14, sym_Build_1))
                {
                  w_13 = ATgetArgument(b_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(a_14, sym_Build_1))
                {
                  b_14 = ATgetArgument(a_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_14));
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
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  r_14 = t;
  m_14 :
  if(match_cons(r_14, sym__2))
    {
      s_14 = ATgetArgument(r_14, 0);
      w_14 = ATgetArgument(r_14, 1);
      n_14 :
      if(match_cons(s_14, sym_Build_1))
        {
          t_14 = ATgetArgument(s_14, 0);
          o_14 :
          if(match_cons(t_14, sym_Op_2))
            {
              u_14 = ATgetArgument(t_14, 0);
              v_14 = ATgetArgument(t_14, 1);
              p_14 :
              if(match_cons(w_14, sym_Match_1))
                {
                  x_14 = ATgetArgument(w_14, 0);
                  q_14 :
                  if(match_cons(x_14, sym_Op_2))
                    {
                      y_14 = ATgetArgument(x_14, 0);
                      z_14 = ATgetArgument(x_14, 1);
                      {
                        ATerm c_15 = NULL,d_15 = NULL;
                        if(((u_14 != NULL) && (u_14 != y_14)))
                          _fail(y_14);
                        else
                          u_14 = y_14;
                        {
                          if(((c_15 != NULL) && (c_15 != z_14)))
                            _fail(z_14);
                          else
                            c_15 = z_14;
                          {
                            ATerm j_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_14), not_null(c_15));
                            {
                              ATerm v_0 (ATerm t)
                              {
                                ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
                                e_15 = t;
                                k_14 :
                                if(match_cons(e_15, sym__2))
                                  {
                                    f_15 = ATgetArgument(e_15, 0);
                                    g_15 = ATgetArgument(e_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, v_0);
                              {
                                j_15 = t;
                                if(((d_15 != NULL) && (d_15 != j_15)))
                                  _fail(j_15);
                                else
                                  d_15 = j_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(d_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(u_14), not_null(v_14))));
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
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      if(((q_15 != NULL) && (q_15 != r_15)))
        _fail(r_15);
      else
        q_15 = r_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  a_16 = t;
  v_15 :
  if(match_cons(a_16, sym__2))
    {
      b_16 = ATgetArgument(a_16, 0);
      f_16 = ATgetArgument(a_16, 1);
      w_15 :
      if(match_cons(b_16, sym_Build_1))
        {
          c_16 = ATgetArgument(b_16, 0);
          x_15 :
          if(match_cons(c_16, sym_Op_2))
            {
              d_16 = ATgetArgument(c_16, 0);
              e_16 = ATgetArgument(c_16, 1);
              y_15 :
              if(match_cons(f_16, sym_Match_1))
                {
                  g_16 = ATgetArgument(f_16, 0);
                  z_15 :
                  if(match_cons(g_16, sym_Op_2))
                    {
                      h_16 = ATgetArgument(g_16, 0);
                      i_16 = ATgetArgument(g_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(h_16));
                        {
                          ATerm q_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = q_7;
                            }
                        }
                        t = term_r_7;
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
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
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
                  t = BuildBuild_0(t);
                  LocalPopChoice(f_8);
                }
              else
                {
                  t = e_8;
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
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  ATerm j_17 (ATerm t)
  {
    ATerm g_17 = NULL;
    ATerm h_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), not_null(y_16));
    {
      t = BMF_0(t);
      {
        h_17 = t;
        if(((g_17 != NULL) && (g_17 != h_17)))
          _fail(h_17);
        else
          g_17 = h_17;
      }
    }
    t = not_null(g_17);
    return(t);
  }
  w_16 = t;
  s_16 :
  if(match_cons(w_16, sym_Seq_2))
    {
      x_16 = ATgetArgument(w_16, 0);
      y_16 = ATgetArgument(w_16, 1);
      t_16 :
      if(match_cons(y_16, sym_Seq_2))
        {
          u_16 = ATgetArgument(y_16, 0);
          v_16 = ATgetArgument(y_16, 1);
          {
            ATerm g_8 = t;
            int h_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_17 = NULL;
                ATerm d_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), not_null(u_16));
                {
                  t = BMF_0(t);
                  {
                    d_17 = t;
                    if(((c_17 != NULL) && (c_17 != d_17)))
                      _fail(d_17);
                    else
                      c_17 = d_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_17), not_null(v_16));
                LocalPopChoice(h_8);
              }
            else
              {
                t = g_8;
                t = j_17(t);
              }
          }
        }
      else
        {
          t = j_17(t);
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
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  r_17 = t;
  n_17 :
  if(match_cons(r_17, sym_Seq_2))
    {
      s_17 = ATgetArgument(r_17, 0);
      u_17 = ATgetArgument(r_17, 1);
      o_17 :
      if(match_cons(s_17, sym_Build_1))
        {
          t_17 = ATgetArgument(s_17, 0);
          p_17 :
          if(match_cons(u_17, sym_Seq_2))
            {
              v_17 = ATgetArgument(u_17, 0);
              x_17 = ATgetArgument(u_17, 1);
              q_17 :
              if(match_cons(v_17, sym_Build_1))
                {
                  w_17 = ATgetArgument(v_17, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_17)), not_null(x_17));
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
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
  g_18 = t;
  e_18 :
  if(match_cons(g_18, sym_Scope_2))
    {
      h_18 = ATgetArgument(g_18, 0);
      i_18 = ATgetArgument(g_18, 1);
      f_18 :
      if(match_cons(i_18, sym_Scope_2))
        {
          j_18 = ATgetArgument(i_18, 0);
          k_18 = ATgetArgument(i_18, 1);
          {
            ATerm o_18 = NULL;
            ATerm p_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(j_18));
            {
              t = conc_0(t);
              {
                p_18 = t;
                if(((o_18 != NULL) && (o_18 != p_18)))
                  _fail(p_18);
                else
                  o_18 = p_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_18), not_null(k_18));
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
  ATerm u_18 = NULL,v_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_Var_1))
    {
      v_18 = ATgetArgument(u_18, 0);
      t = not_null(v_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  b_19 = t;
  z_18 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      a_19 :
      if(((ATgetType(d_19) == AT_LIST) && ((ATermList) d_19 != ATempty)))
        {
          e_19 = ATgetFirst((ATermList) d_19);
          f_19 = (ATerm) ATgetNext((ATermList) d_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(f_19));
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
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  n_19 = t;
  k_19 :
  if(match_cons(n_19, sym__2))
    {
      o_19 = ATgetArgument(n_19, 0);
      p_19 = ATgetArgument(n_19, 1);
      l_19 :
      if(((ATgetType(p_19) == AT_LIST) && ((ATermList) p_19 != ATempty)))
        {
          q_19 = ATgetFirst((ATermList) p_19);
          t_19 = (ATerm) ATgetNext((ATermList) p_19);
          m_19 :
          if(match_cons(q_19, sym__2))
            {
              r_19 = ATgetArgument(q_19, 0);
              s_19 = ATgetArgument(q_19, 1);
              {
                ATerm v_19 = NULL;
                if(((o_19 != NULL) && (o_19 != r_19)))
                  _fail(r_19);
                else
                  o_19 = r_19;
                {
                  if(((v_19 != NULL) && (v_19 != s_19)))
                    _fail(s_19);
                  else
                    v_19 = s_19;
                  t = not_null(v_19);
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
  ATerm k_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = k_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm c_111 (ATerm), ATerm d_111 (ATerm))
{
  ATerm b_20 = NULL;
  ATerm d_20 = NULL,e_20 = NULL;
  b_20 = t;
  {
    ATerm f_20 = NULL;
    t = not_null(b_20);
    {
      ATerm g_20 = NULL;
      t = c_111(t);
      {
        f_20 = t;
        {
          if(((d_20 != NULL) && (d_20 != f_20)))
            _fail(f_20);
          else
            d_20 = f_20;
          {
            t = d_111(t);
            {
              g_20 = t;
              if(((e_20 != NULL) && (e_20 != g_20)))
                _fail(g_20);
              else
                e_20 = g_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(e_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm k_20 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = _all(t, k_20);
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym__2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      {
        ATerm u_20 = NULL;
        if(((u_20 != NULL) && (u_20 != r_20)))
          _fail(r_20);
        else
          u_20 = r_20;
      }
    }
  else
    {
      if(match_cons(p_20, sym__3))
        {
          q_20 = ATgetArgument(p_20, 0);
          r_20 = ATgetArgument(p_20, 1);
          s_20 = ATgetArgument(p_20, 2);
          {
            ATerm a_21 = NULL;
            ATerm b_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(r_20));
            {
              t = zip_1(t, _id);
              {
                b_21 = t;
                if(((a_21 != NULL) && (a_21 != b_21)))
                  _fail(b_21);
                else
                  a_21 = b_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(s_20));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm e_111 (ATerm), ATerm f_111 (ATerm))
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
  t = subs_args_0(t);
  {
    h_21 = t;
    g_21 :
    if(match_cons(h_21, sym__2))
      {
        i_21 = ATgetArgument(h_21, 0);
        j_21 = ATgetArgument(h_21, 1);
        {
          t = not_null(j_21);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = not_null(i_21);
                return(t);
              }
              t = SubsVar_2(t, e_111, x_0);
              t = f_111(t);
              return(t);
            }
            t = alltd_1(t, w_0);
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
ATerm substitute_1 (ATerm t, ATerm g_111 (ATerm))
{
  t = substitute_2(t, g_111, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  q_21 = t;
  o_21 :
  if(match_cons(q_21, sym__2))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      p_21 :
      if(((ATgetType(s_21) == AT_LIST) && ((ATermList) s_21 != ATempty)))
        {
          t_21 = ATgetFirst((ATermList) s_21);
          u_21 = (ATerm) ATgetNext((ATermList) s_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_21)), not_null(t_21)), not_null(u_21));
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
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  j_22 = t;
  h_22 :
  if(((ATgetType(j_22) == AT_LIST) && ((ATermList) j_22 != ATempty)))
    {
      k_22 = ATgetFirst((ATermList) j_22);
      n_22 = (ATerm) ATgetNext((ATermList) j_22);
      i_22 :
      if(match_cons(k_22, sym__2))
        {
          l_22 = ATgetArgument(k_22, 0);
          m_22 = ATgetArgument(k_22, 1);
          {
            ATerm r_22 = NULL,s_22 = NULL,y_22 = NULL,e_23 = NULL;
            ATerm t_8;
            t_8 = t;
            {
              ATerm t_22 = NULL;
              ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
              t = not_null(m_22);
              {
                t_22 = t;
                {
                  t = SSL_explode_term(not_null(t_22));
                  {
                    v_22 = t;
                    c_22 :
                    if(match_cons(v_22, sym__2))
                      {
                        w_22 = ATgetArgument(v_22, 0);
                        x_22 = ATgetArgument(v_22, 1);
                        {
                          if(((r_22 != NULL) && (r_22 != w_22)))
                            _fail(w_22);
                          else
                            r_22 = w_22;
                          if(((s_22 != NULL) && (s_22 != x_22)))
                            _fail(x_22);
                          else
                            s_22 = x_22;
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
            t = t_8;
            {
              ATerm u_8;
              u_8 = t;
              {
                ATerm z_22 = NULL;
                ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
                t = not_null(l_22);
                {
                  z_22 = t;
                  {
                    t = SSL_explode_term(not_null(z_22));
                    {
                      b_23 = t;
                      f_22 :
                      if(match_cons(b_23, sym__2))
                        {
                          c_23 = ATgetArgument(b_23, 0);
                          d_23 = ATgetArgument(b_23, 1);
                          {
                            if(((r_22 != NULL) && (r_22 != c_23)))
                              _fail(c_23);
                            else
                              r_22 = c_23;
                            if(((y_22 != NULL) && (y_22 != d_23)))
                              _fail(d_23);
                            else
                              y_22 = d_23;
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
              t = u_8;
              {
                ATerm f_23 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), not_null(s_22));
                {
                  t = zip_1(t, _id);
                  {
                    f_23 = t;
                    if(((e_23 != NULL) && (e_23 != f_23)))
                      _fail(f_23);
                    else
                      e_23 = f_23;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(n_22));
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  n_23 :
  if(((ATgetType(p_23) == AT_LIST) && ((ATermList) p_23 != ATempty)))
    {
      q_23 = ATgetFirst((ATermList) p_23);
      t_23 = (ATerm) ATgetNext((ATermList) p_23);
      o_23 :
      if(match_cons(q_23, sym__2))
        {
          r_23 = ATgetArgument(q_23, 0);
          s_23 = ATgetArgument(q_23, 1);
          {
            ATerm v_23 = NULL;
            if(((r_23 != NULL) && (r_23 != s_23)))
              _fail(s_23);
            else
              r_23 = s_23;
            {
              if(((v_23 != NULL) && (v_23 != t_23)))
                _fail(t_23);
              else
                v_23 = t_23;
              t = not_null(v_23);
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
ATerm while_not_2 (ATerm t, ATerm k_95 (ATerm), ATerm l_95 (ATerm))
{
  ATerm x_23 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_95(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          t = l_95(t);
          t = x_23(t);
        }
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm))
{
  t = n_95(t);
  t = while_not_2(t, o_95, p_95);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm a_101 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  a_24 :
  if(((ATgetType(b_24) == AT_LIST) && ((ATermList) b_24 != ATempty)))
    {
      c_24 = ATgetFirst((ATermList) b_24);
      d_24 = (ATerm) ATgetNext((ATermList) b_24);
      {
        t = a_101(t);
        {
          ATerm y_0 (ATerm t)
          {
            ATerm g_24 = NULL;
            g_24 = t;
            if(((c_24 != NULL) && (c_24 != g_24)))
              _fail(g_24);
            else
              c_24 = g_24;
            return(t);
          }
          t = fetch_1(t, y_0);
        }
        t = not_null(d_24);
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
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
      m_24 = t;
      k_24 :
      if(match_cons(m_24, sym__2))
        {
          n_24 = ATgetArgument(m_24, 0);
          o_24 = ATgetArgument(m_24, 1);
          {
            t = not_null(n_24);
            {
              ATerm u_24 (ATerm t)
              {
                ATerm c_9 = t;
                int h_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(h_9);
                  }
                else
                  {
                    t = c_9;
                    {
                      ATerm i_9 = t;
                      int o_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_0 (ATerm t)
                          {
                            t = not_null(o_24);
                            return(t);
                          }
                          t = HdMember_1(t, z_0);
                          t = u_24(t);
                          LocalPopChoice(o_9);
                        }
                      else
                        {
                          t = i_9;
                          t = Cons_2(t, _id, u_24);
                        }
                    }
                  }
                return(t);
              }
              t = u_24(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm r_24 = NULL;
          r_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_24));
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_1 (ATerm t)
              {
                ATerm r_9 = t;
                int t_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(t_9);
                  }
                else
                  {
                    t = r_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, d_1);
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, a_1, b_1, c_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_109 (ATerm))
{
  ATerm w_24 (ATerm t)
  {
    ATerm u_9 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_109(t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = u_9;
        t = _one(t, w_24);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym__2))
    {
      b_25 = ATgetArgument(a_25, 0);
      c_25 = ATgetArgument(a_25, 1);
      {
        t = not_null(c_25);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_25 = NULL;
            f_25 = t;
            if(((b_25 != NULL) && (b_25 != f_25)))
              _fail(f_25);
            else
              b_25 = f_25;
            return(t);
          }
          t = oncetd_1(t, e_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm n_25 = NULL,o_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym_Var_1))
    {
      o_25 = ATgetArgument(n_25, 0);
      {
        ATerm r_25 = NULL,t_25 = NULL;
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(n_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        {
          t = not_null(o_25);
          {
            ATerm v_25 = NULL;
            t = e_86(t);
            {
              t_25 = t;
              {
                ATerm w_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_25)), not_null(r_25));
                {
                  w_25 = t;
                  if(((v_25 != NULL) && (v_25 != w_25)))
                    _fail(w_25);
                  else
                    v_25 = w_25;
                }
                t = not_null(v_25);
              }
            }
          }
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
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  s_27 = t;
  r_26 :
  if(match_cons(s_27, sym_Seq_2))
    {
      t_27 = ATgetArgument(s_27, 0);
      v_27 = ATgetArgument(s_27, 1);
      s_26 :
      if(match_cons(t_27, sym_Assign_1))
        {
          u_27 = ATgetArgument(t_27, 0);
          t_26 :
          if(match_cons(u_27, sym_Var_1))
            {
              l_27 = ATgetArgument(u_27, 0);
              u_26 :
              if(match_cons(v_27, sym_Seq_2))
                {
                  w_27 = ATgetArgument(v_27, 0);
                  x_27 = ATgetArgument(v_27, 1);
                  v_26 :
                  if(match_cons(w_27, sym_Build_1))
                    {
                      o_27 = ATgetArgument(w_27, 0);
                      w_26 :
                      if(match_cons(o_27, sym_Var_1))
                        {
                          p_27 = ATgetArgument(o_27, 0);
                          {
                            ATerm d_28 = NULL;
                            if(((l_27 != NULL) && (l_27 != p_27)))
                              _fail(p_27);
                            else
                              l_27 = p_27;
                            {
                              if(((d_28 != NULL) && (d_28 != x_27)))
                                _fail(x_27);
                              else
                                d_28 = x_27;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27))), not_null(d_28));
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
          if(match_cons(t_27, sym_Build_1))
            {
              u_27 = ATgetArgument(t_27, 0);
              x_26 :
              if(match_cons(v_27, sym_Scope_2))
                {
                  w_27 = ATgetArgument(v_27, 0);
                  x_27 = ATgetArgument(v_27, 1);
                  y_26 :
                  if(match_cons(x_27, sym_Seq_2))
                    {
                      y_27 = ATgetArgument(x_27, 0);
                      b_28 = ATgetArgument(x_27, 1);
                      z_26 :
                      if(match_cons(y_27, sym_Assign_1))
                        {
                          z_27 = ATgetArgument(y_27, 0);
                          a_27 :
                          if(match_cons(z_27, sym_Var_1))
                            {
                              a_28 = ATgetArgument(z_27, 0);
                              {
                                ATerm h_10 = t;
                                int i_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_29 = NULL,i_29 = NULL;
                                    ATerm j_10;
                                    j_10 = t;
                                    {
                                      ATerm h_29 = NULL;
                                      t = not_null(u_27);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(w_27));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), (ATerm) ATinsert(ATempty, not_null(a_28)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  h_29 = t;
                                                  if(((g_29 != NULL) && (g_29 != h_29)))
                                                    _fail(h_29);
                                                  else
                                                    g_29 = h_29;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = j_10;
                                    {
                                      ATerm j_29 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_28)), (ATerm)ATinsert(ATempty, not_null(u_27)), not_null(b_28));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          j_29 = t;
                                          if(((i_29 != NULL) && (i_29 != j_29)))
                                            _fail(j_29);
                                          else
                                            i_29 = j_29;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_29), not_null(i_29)));
                                    }
                                    LocalPopChoice(i_10);
                                  }
                                else
                                  {
                                    t = h_10;
                                    {
                                      ATerm o_29 = NULL,q_29 = NULL;
                                      ATerm k_10;
                                      k_10 = t;
                                      {
                                        ATerm p_29 = NULL;
                                        t = not_null(u_27);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(w_27));
                                            {
                                              t = in_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), (ATerm) ATinsert(ATempty, not_null(a_28)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    p_29 = t;
                                                    if(((o_29 != NULL) && (o_29 != p_29)))
                                                      _fail(p_29);
                                                    else
                                                      o_29 = p_29;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = k_10;
                                      {
                                        ATerm r_29 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_28)), (ATerm)ATinsert(ATempty, not_null(u_27)), not_null(b_28));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            r_29 = t;
                                            if(((q_29 != NULL) && (q_29 != r_29)))
                                              _fail(r_29);
                                            else
                                              q_29 = r_29;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_29), not_null(q_29)));
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
      if(match_cons(s_27, sym_Scope_2))
        {
          t_27 = ATgetArgument(s_27, 0);
          v_27 = ATgetArgument(s_27, 1);
          b_27 :
          if(match_cons(v_27, sym_Seq_2))
            {
              w_27 = ATgetArgument(v_27, 0);
              x_27 = ATgetArgument(v_27, 1);
              c_27 :
              if(match_cons(w_27, sym_Assign_1))
                {
                  o_27 = ATgetArgument(w_27, 0);
                  d_27 :
                  if(match_cons(o_27, sym_Var_1))
                    {
                      p_27 = ATgetArgument(o_27, 0);
                      e_27 :
                      if(match_cons(x_27, sym_Seq_2))
                        {
                          y_27 = ATgetArgument(x_27, 0);
                          b_28 = ATgetArgument(x_27, 1);
                          f_27 :
                          if(match_cons(y_27, sym_Assign_2))
                            {
                              z_27 = ATgetArgument(y_27, 0);
                              m_27 = ATgetArgument(y_27, 1);
                              g_27 :
                              if(match_cons(z_27, sym_Var_1))
                                {
                                  a_28 = ATgetArgument(z_27, 0);
                                  h_27 :
                                  if(match_cons(m_27, sym_Var_1))
                                    {
                                      n_27 = ATgetArgument(m_27, 0);
                                      {
                                        ATerm h_28 = NULL,i_28 = NULL,k_28 = NULL;
                                        if(((p_27 != NULL) && (p_27 != n_27)))
                                          _fail(n_27);
                                        else
                                          p_27 = n_27;
                                        {
                                          if(((h_28 != NULL) && (h_28 != b_28)))
                                            _fail(b_28);
                                          else
                                            h_28 = b_28;
                                          {
                                            ATerm l_10;
                                            l_10 = t;
                                            {
                                              ATerm j_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(t_27));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(t_27));
                                                  {
                                                    t = in_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), (ATerm) ATinsert(ATempty, not_null(a_28)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          j_28 = t;
                                                          if(((i_28 != NULL) && (i_28 != j_28)))
                                                            _fail(j_28);
                                                          else
                                                            i_28 = j_28;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = l_10;
                                            {
                                              ATerm l_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_27))), not_null(h_28));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  l_28 = t;
                                                  if(((k_28 != NULL) && (k_28 != l_28)))
                                                    _fail(l_28);
                                                  else
                                                    k_28 = l_28;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_27))), not_null(k_28)));
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
                              if(match_cons(y_27, sym_Assign_1))
                                {
                                  z_27 = ATgetArgument(y_27, 0);
                                  i_27 :
                                  if(match_cons(z_27, sym_Var_1))
                                    {
                                      a_28 = ATgetArgument(z_27, 0);
                                      {
                                        ATerm q_28 = NULL,s_28 = NULL;
                                        ATerm o_10;
                                        o_10 = t;
                                        {
                                          ATerm r_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(t_27));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(t_27));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), (ATerm) ATinsert(ATempty, not_null(a_28)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      r_28 = t;
                                                      if(((q_28 != NULL) && (q_28 != r_28)))
                                                        _fail(r_28);
                                                      else
                                                        q_28 = r_28;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = o_10;
                                        {
                                          ATerm t_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(a_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_27))), not_null(b_28));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              t_28 = t;
                                              if(((s_28 != NULL) && (s_28 != t_28)))
                                                _fail(t_28);
                                              else
                                                s_28 = t_28;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_27))), not_null(s_28)));
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
                  if(match_cons(w_27, sym_Assign_2))
                    {
                      o_27 = ATgetArgument(w_27, 0);
                      q_27 = ATgetArgument(w_27, 1);
                      j_27 :
                      if(match_cons(o_27, sym_Var_1))
                        {
                          p_27 = ATgetArgument(o_27, 0);
                          k_27 :
                          if(match_cons(q_27, sym_Var_1))
                            {
                              r_27 = ATgetArgument(q_27, 0);
                              {
                                ATerm y_28 = NULL,a_29 = NULL;
                                ATerm c_11;
                                c_11 = t;
                                {
                                  ATerm z_28 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(t_27));
                                  {
                                    t = in_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), (ATerm) ATinsert(ATempty, not_null(p_27)));
                                      {
                                        t = diff_0(t);
                                        {
                                          z_28 = t;
                                          if(((y_28 != NULL) && (y_28 != z_28)))
                                            _fail(z_28);
                                          else
                                            y_28 = z_28;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = c_11;
                                {
                                  ATerm b_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(p_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_27))), not_null(x_27));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      b_29 = t;
                                      if(((a_29 != NULL) && (a_29 != b_29)))
                                        _fail(b_29);
                                      else
                                        a_29 = b_29;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_28), not_null(a_29));
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
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  l_30 = t;
  j_30 :
  if(match_cons(l_30, sym_Seq_2))
    {
      m_30 = ATgetArgument(l_30, 0);
      n_30 = ATgetArgument(l_30, 1);
      k_30 :
      if(match_cons(n_30, sym_Let_2))
        {
          o_30 = ATgetArgument(n_30, 0);
          p_30 = ATgetArgument(n_30, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_30), not_null(p_30)));
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
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym_Cong_2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      {
        ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,q_32 = NULL,s_32 = NULL,u_32 = NULL;
        ATerm d_11;
        d_11 = t;
        {
          ATerm w_31 = NULL;
          t = not_null(n_31);
          {
            ATerm z_31 = NULL;
            t = map_1(t, new_0);
            {
              w_31 = t;
              {
                if(((t_31 != NULL) && (t_31 != w_31)))
                  _fail(w_31);
                else
                  t_31 = w_31;
                {
                  t = not_null(t_31);
                  {
                    ATerm a_32 = NULL;
                    ATerm f_1 (ATerm t)
                    {
                      ATerm x_31 = NULL;
                      ATerm y_31 = NULL;
                      y_31 = t;
                      if(((x_31 != NULL) && (x_31 != y_31)))
                        _fail(y_31);
                      else
                        x_31 = y_31;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_31));
                      return(t);
                    }
                    t = map_1(t, f_1);
                    {
                      z_31 = t;
                      {
                        if(((q_31 != NULL) && (q_31 != z_31)))
                          _fail(z_31);
                        else
                          q_31 = z_31;
                        {
                          ATerm b_32 = NULL;
                          t = new_0(t);
                          {
                            a_32 = t;
                            {
                              if(((r_31 != NULL) && (r_31 != a_32)))
                                _fail(a_32);
                              else
                                r_31 = a_32;
                              {
                                t = not_null(n_31);
                                {
                                  ATerm e_32 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    b_32 = t;
                                    {
                                      if(((u_31 != NULL) && (u_31 != b_32)))
                                        _fail(b_32);
                                      else
                                        u_31 = b_32;
                                      {
                                        t = not_null(u_31);
                                        {
                                          ATerm f_32 = NULL,p_32 = NULL;
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm c_32 = NULL;
                                            ATerm d_32 = NULL;
                                            d_32 = t;
                                            if(((c_32 != NULL) && (c_32 != d_32)))
                                              _fail(d_32);
                                            else
                                              c_32 = d_32;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_32));
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            e_32 = t;
                                            {
                                              if(((s_31 != NULL) && (s_31 != e_32)))
                                                _fail(e_32);
                                              else
                                                s_31 = e_32;
                                              {
                                                ATerm g_32 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(u_31));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    g_32 = t;
                                                    if(((f_32 != NULL) && (f_32 != g_32)))
                                                      _fail(g_32);
                                                    else
                                                      f_32 = g_32;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_32), not_null(n_31));
                                                  {
                                                    ATerm h_1 (ATerm t)
                                                    {
                                                      ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
                                                      h_32 = t;
                                                      e_31 :
                                                      if(match_cons(h_32, sym__2))
                                                        {
                                                          i_32 = ATgetArgument(h_32, 0);
                                                          l_32 = ATgetArgument(h_32, 1);
                                                          f_31 :
                                                          if(match_cons(i_32, sym__2))
                                                            {
                                                              j_32 = ATgetArgument(i_32, 0);
                                                              k_32 = ATgetArgument(i_32, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_32))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_32)))));
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
                                                      p_32 = t;
                                                      if(((v_31 != NULL) && (v_31 != p_32)))
                                                        _fail(p_32);
                                                      else
                                                        v_31 = p_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = d_11;
        {
          ATerm e_11;
          e_11 = t;
          {
            ATerm r_32 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(u_31));
            {
              t = conc_0(t);
              {
                r_32 = t;
                if(((q_32 != NULL) && (q_32 != r_32)))
                  _fail(r_32);
                else
                  q_32 = r_32;
              }
            }
          }
          t = e_11;
          {
            ATerm f_11;
            f_11 = t;
            {
              ATerm t_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_31), not_null(q_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_31))));
              {
                t = Mapp2_0(t);
                {
                  t_32 = t;
                  if(((s_32 != NULL) && (s_32 != t_32)))
                    _fail(t_32);
                  else
                    s_32 = t_32;
                }
              }
            }
            t = f_11;
            {
              ATerm v_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(m_31), not_null(s_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_31))));
              {
                t = Bapp2_0(t);
                {
                  v_32 = t;
                  if(((u_32 != NULL) && (u_32 != v_32)))
                    _fail(v_32);
                  else
                    u_32 = v_32;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(q_32)), not_null(r_31)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(v_31)), not_null(u_32))));
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym_Build_1))
    {
      v_36 = ATgetArgument(u_36, 0);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
            ATerm o_37 = NULL;
            ATerm s_37 = NULL;
            t = new_0(t);
            {
              o_37 = t;
              {
                if(((j_37 != NULL) && (j_37 != o_37)))
                  _fail(o_37);
                else
                  j_37 = o_37;
                {
                  t = not_null(v_36);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
                      p_37 = t;
                      j_36 :
                      if(match_cons(p_37, sym_Anno_2))
                        {
                          q_37 = ATgetArgument(p_37, 0);
                          r_37 = ATgetArgument(p_37, 1);
                          {
                            if(((h_37 != NULL) && (h_37 != q_37)))
                              _fail(q_37);
                            else
                              h_37 = q_37;
                            {
                              if(((i_37 != NULL) && (i_37 != r_37)))
                                _fail(r_37);
                              else
                                i_37 = r_37;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_37));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, i_1);
                    {
                      s_37 = t;
                      if(((k_37 != NULL) && (k_37 != s_37)))
                        _fail(s_37);
                      else
                        k_37 = s_37;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_37)), not_null(h_37))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_37))));
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm n_11 = t;
              int r_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                  ATerm x_37 = NULL;
                  ATerm a_38 = NULL;
                  t = new_0(t);
                  {
                    x_37 = t;
                    {
                      if(((v_37 != NULL) && (v_37 != x_37)))
                        _fail(x_37);
                      else
                        v_37 = x_37;
                      {
                        t = not_null(v_36);
                        {
                          ATerm j_1 (ATerm t)
                          {
                            ATerm y_37 = NULL,z_37 = NULL;
                            y_37 = t;
                            n_36 :
                            if(match_cons(y_37, sym_RootApp_1))
                              {
                                z_37 = ATgetArgument(y_37, 0);
                                {
                                  if(((u_37 != NULL) && (u_37 != z_37)))
                                    _fail(z_37);
                                  else
                                    u_37 = z_37;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_37));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, j_1);
                          {
                            a_38 = t;
                            if(((w_37 != NULL) && (w_37 != a_38)))
                              _fail(a_38);
                            else
                              w_37 = a_38;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_37))));
                  LocalPopChoice(r_11);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,t_39 = NULL;
                    ATerm u_39 = NULL;
                    ATerm y_39 = NULL;
                    t = new_0(t);
                    {
                      u_39 = t;
                      {
                        if(((f_39 != NULL) && (f_39 != u_39)))
                          _fail(u_39);
                        else
                          f_39 = u_39;
                        {
                          t = not_null(v_36);
                          {
                            ATerm k_1 (ATerm t)
                            {
                              ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
                              v_39 = t;
                              r_36 :
                              if(match_cons(v_39, sym_App_2))
                                {
                                  w_39 = ATgetArgument(v_39, 0);
                                  x_39 = ATgetArgument(v_39, 1);
                                  {
                                    if(((d_39 != NULL) && (d_39 != w_39)))
                                      _fail(w_39);
                                    else
                                      d_39 = w_39;
                                    {
                                      if(((e_39 != NULL) && (e_39 != x_39)))
                                        _fail(x_39);
                                      else
                                        e_39 = x_39;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_39));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, k_1);
                            {
                              y_39 = t;
                              if(((t_39 != NULL) && (t_39 != y_39)))
                                _fail(y_39);
                              else
                                t_39 = y_39;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_39), not_null(e_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_39)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_39))));
                  }
                }
            }
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
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
  o_41 = t;
  n_41 :
  if(match_cons(o_41, sym__2))
    {
      p_41 = ATgetArgument(o_41, 0);
      q_41 = ATgetArgument(o_41, 1);
      {
        t = not_null(p_41);
        {
          ATerm l_1 (ATerm t)
          {
            t = not_null(q_41);
            return(t);
          }
          t = at_end_1(t, l_1);
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
  ATerm w_41 = NULL,g_42 = NULL,h_42 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym__2))
    {
      g_42 = ATgetArgument(w_41, 0);
      h_42 = ATgetArgument(w_41, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_42)), not_null(g_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  p_42 = t;
  m_42 :
  if(match_cons(p_42, sym__2))
    {
      q_42 = ATgetArgument(p_42, 0);
      w_42 = ATgetArgument(p_42, 1);
      n_42 :
      if(((ATgetType(q_42) == AT_LIST) && ((ATermList) q_42 != ATempty)))
        {
          r_42 = ATgetFirst((ATermList) q_42);
          s_42 = (ATerm) ATgetNext((ATermList) q_42);
          o_42 :
          if(((ATgetType(w_42) == AT_LIST) && ((ATermList) w_42 != ATempty)))
            {
              x_42 = ATgetFirst((ATermList) w_42);
              y_42 = (ATerm) ATgetNext((ATermList) w_42);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_42), not_null(x_42)), (ATerm) ATmakeAppl(sym__2, not_null(s_42), not_null(y_42)));
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
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  i_43 = t;
  f_43 :
  if(match_cons(i_43, sym__2))
    {
      j_43 = ATgetArgument(i_43, 0);
      k_43 = ATgetArgument(i_43, 1);
      g_43 :
      if(((ATermList) j_43 == ATempty))
        {
          h_43 :
          if(((ATermList) k_43 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm))
{
  ATerm m_43 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        {
          t = d_105(t);
          {
            t = _2(t, f_105, m_43);
            t = e_105(t);
          }
        }
      }
    return(t);
  }
  t = m_43(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm y_44 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
  y_44 = t;
  f_44 :
  if(match_cons(y_44, sym_Call_2))
    {
      h_45 = ATgetArgument(y_44, 0);
      j_45 = ATgetArgument(y_44, 1);
      g_44 :
      if(match_cons(h_45, sym_SVar_1))
        {
          i_45 = ATgetArgument(h_45, 0);
          q_44 :
          if(match_string(i_45, "Anno_Cong__"))
            {
              r_44 :
              if(((ATgetType(j_45) == AT_LIST) && ((ATermList) j_45 != ATempty)))
                {
                  k_45 = ATgetFirst((ATermList) j_45);
                  n_45 = (ATerm) ATgetNext((ATermList) j_45);
                  s_44 :
                  if(match_cons(k_45, sym_Cong_2))
                    {
                      l_45 = ATgetArgument(k_45, 0);
                      m_45 = ATgetArgument(k_45, 1);
                      t_44 :
                      if(((ATgetType(n_45) == AT_LIST) && ((ATermList) n_45 != ATempty)))
                        {
                          o_45 = ATgetFirst((ATermList) n_45);
                          p_45 = (ATerm) ATgetNext((ATermList) n_45);
                          x_44 :
                          if(((ATermList) p_45 == ATempty))
                            {
                              {
                                ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,e_47 = NULL,g_47 = NULL,i_47 = NULL;
                                ATerm g_12;
                                g_12 = t;
                                {
                                  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(m_45)), not_null(o_45));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      h_46 = t;
                                      b_44 :
                                      if(((ATgetType(h_46) == AT_LIST) && ((ATermList) h_46 != ATempty)))
                                        {
                                          i_46 = ATgetFirst((ATermList) h_46);
                                          j_46 = (ATerm) ATgetNext((ATermList) h_46);
                                          {
                                            ATerm m_46 = NULL;
                                            if(((t_45 != NULL) && (t_45 != i_46)))
                                              _fail(i_46);
                                            else
                                              t_45 = i_46;
                                            {
                                              if(((z_45 != NULL) && (z_45 != j_46)))
                                                _fail(j_46);
                                              else
                                                z_45 = j_46;
                                              {
                                                ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
                                                ATerm m_1 (ATerm t)
                                                {
                                                  ATerm k_46 = NULL;
                                                  ATerm l_46 = NULL;
                                                  l_46 = t;
                                                  if(((k_46 != NULL) && (k_46 != l_46)))
                                                    _fail(l_46);
                                                  else
                                                    k_46 = l_46;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_46));
                                                  return(t);
                                                }
                                                t = map_1(t, m_1);
                                                {
                                                  m_46 = t;
                                                  {
                                                    if(((u_45 != NULL) && (u_45 != m_46)))
                                                      _fail(m_46);
                                                    else
                                                      u_45 = m_46;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(m_45)), not_null(o_45));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          n_46 = t;
                                                          a_44 :
                                                          if(((ATgetType(n_46) == AT_LIST) && ((ATermList) n_46 != ATempty)))
                                                            {
                                                              o_46 = ATgetFirst((ATermList) n_46);
                                                              p_46 = (ATerm) ATgetNext((ATermList) n_46);
                                                              {
                                                                ATerm s_46 = NULL;
                                                                if(((v_45 != NULL) && (v_45 != o_46)))
                                                                  _fail(o_46);
                                                                else
                                                                  v_45 = o_46;
                                                                {
                                                                  if(((a_46 != NULL) && (a_46 != p_46)))
                                                                    _fail(p_46);
                                                                  else
                                                                    a_46 = p_46;
                                                                  {
                                                                    ATerm t_46 = NULL,d_47 = NULL;
                                                                    ATerm n_1 (ATerm t)
                                                                    {
                                                                      ATerm q_46 = NULL;
                                                                      ATerm r_46 = NULL;
                                                                      r_46 = t;
                                                                      if(((q_46 != NULL) && (q_46 != r_46)))
                                                                        _fail(r_46);
                                                                      else
                                                                        q_46 = r_46;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_46));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, n_1);
                                                                    {
                                                                      s_46 = t;
                                                                      {
                                                                        if(((y_45 != NULL) && (y_45 != s_46)))
                                                                          _fail(s_46);
                                                                        else
                                                                          y_45 = s_46;
                                                                        {
                                                                          ATerm u_46 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_45), not_null(a_46));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              u_46 = t;
                                                                              if(((t_46 != NULL) && (t_46 != u_46)))
                                                                                _fail(u_46);
                                                                              else
                                                                                t_46 = u_46;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(t_46), (ATerm) ATinsert(CheckATermList(not_null(m_45)), not_null(o_45)));
                                                                            {
                                                                              ATerm o_1 (ATerm t)
                                                                              {
                                                                                ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
                                                                                v_46 = t;
                                                                                x_43 :
                                                                                if(match_cons(v_46, sym__2))
                                                                                  {
                                                                                    w_46 = ATgetArgument(v_46, 0);
                                                                                    z_46 = ATgetArgument(v_46, 1);
                                                                                    y_43 :
                                                                                    if(match_cons(w_46, sym__2))
                                                                                      {
                                                                                        x_46 = ATgetArgument(w_46, 0);
                                                                                        y_46 = ATgetArgument(w_46, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_46))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_46)))));
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
                                                                              t = zip_1(t, o_1);
                                                                              {
                                                                                d_47 = t;
                                                                                if(((b_46 != NULL) && (b_46 != d_47)))
                                                                                  _fail(d_47);
                                                                                else
                                                                                  b_46 = d_47;
                                                                              }
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
                                    }
                                  }
                                }
                                t = g_12;
                                {
                                  ATerm h_12;
                                  h_12 = t;
                                  {
                                    ATerm f_47 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_45), not_null(a_46));
                                    {
                                      t = conc_0(t);
                                      {
                                        f_47 = t;
                                        if(((e_47 != NULL) && (e_47 != f_47)))
                                          _fail(f_47);
                                        else
                                          e_47 = f_47;
                                      }
                                    }
                                  }
                                  t = h_12;
                                  {
                                    ATerm i_12;
                                    i_12 = t;
                                    {
                                      ATerm h_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_45), not_null(u_45)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_45))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          h_47 = t;
                                          if(((g_47 != NULL) && (g_47 != h_47)))
                                            _fail(h_47);
                                          else
                                            g_47 = h_47;
                                        }
                                      }
                                    }
                                    t = i_12;
                                    {
                                      ATerm j_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(l_45), not_null(y_45)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_45))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          j_47 = t;
                                          if(((i_47 != NULL) && (i_47 != j_47)))
                                            _fail(j_47);
                                          else
                                            i_47 = j_47;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(e_47)), not_null(v_45)), not_null(t_45)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(b_46)), not_null(i_47))));
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
ATerm Prim_2 (ATerm t, ATerm i_88 (ATerm), ATerm j_88 (ATerm))
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym_Prim_2))
    {
      e_48 = ATgetArgument(d_48, 0);
      f_48 = ATgetArgument(d_48, 1);
      {
        ATerm j_48 = NULL,l_48 = NULL;
        ATerm k_48 = NULL;
        t = SSLgetAnnotations(not_null(d_48));
        {
          k_48 = t;
          if(((j_48 != NULL) && (j_48 != k_48)))
            _fail(k_48);
          else
            j_48 = k_48;
        }
        {
          t = not_null(e_48);
          {
            ATerm n_48 = NULL;
            t = i_88(t);
            {
              l_48 = t;
              {
                t = not_null(f_48);
                {
                  ATerm p_48 = NULL;
                  t = j_88(t);
                  {
                    n_48 = t;
                    {
                      ATerm q_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(l_48), not_null(n_48)), not_null(j_48));
                      {
                        q_48 = t;
                        if(((p_48 != NULL) && (p_48 != q_48)))
                          _fail(q_48);
                        else
                          p_48 = q_48;
                      }
                      t = not_null(p_48);
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
ATerm Explode_2 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm))
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym_Explode_2))
    {
      d_49 = ATgetArgument(c_49, 0);
      e_49 = ATgetArgument(c_49, 1);
      {
        ATerm i_49 = NULL,k_49 = NULL;
        ATerm j_49 = NULL;
        t = SSLgetAnnotations(not_null(c_49));
        {
          j_49 = t;
          if(((i_49 != NULL) && (i_49 != j_49)))
            _fail(j_49);
          else
            i_49 = j_49;
        }
        {
          t = not_null(d_49);
          {
            ATerm m_49 = NULL;
            t = n_84(t);
            {
              k_49 = t;
              {
                t = not_null(e_49);
                {
                  ATerm o_49 = NULL;
                  t = o_84(t);
                  {
                    m_49 = t;
                    {
                      ATerm p_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(k_49), not_null(m_49)), not_null(i_49));
                      {
                        p_49 = t;
                        if(((o_49 != NULL) && (o_49 != p_49)))
                          _fail(p_49);
                        else
                          o_49 = p_49;
                      }
                      t = not_null(o_49);
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
ATerm Op_2 (ATerm t, ATerm i_86 (ATerm), ATerm j_86 (ATerm))
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym_Op_2))
    {
      c_50 = ATgetArgument(b_50, 0);
      d_50 = ATgetArgument(b_50, 1);
      {
        ATerm h_50 = NULL,j_50 = NULL;
        ATerm i_50 = NULL;
        t = SSLgetAnnotations(not_null(b_50));
        {
          i_50 = t;
          if(((h_50 != NULL) && (h_50 != i_50)))
            _fail(i_50);
          else
            h_50 = i_50;
        }
        {
          t = not_null(c_50);
          {
            ATerm l_50 = NULL;
            t = i_86(t);
            {
              j_50 = t;
              {
                t = not_null(d_50);
                {
                  ATerm n_50 = NULL;
                  t = j_86(t);
                  {
                    l_50 = t;
                    {
                      ATerm o_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_50), not_null(l_50)), not_null(h_50));
                      {
                        o_50 = t;
                        if(((n_50 != NULL) && (n_50 != o_50)))
                          _fail(o_50);
                        else
                          n_50 = o_50;
                      }
                      t = not_null(n_50);
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
ATerm pat_td_1 (ATerm t, ATerm u_112 (ATerm))
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_112(t);
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
            ATerm p_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                t = pat_td_1(t, u_112);
                return(t);
              }
              t = fetch_1(t, q_1);
              return(t);
            }
            t = Op_2(t, _id, p_1);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm t_12 = t;
              int u_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    t = pat_td_1(t, u_112);
                    return(t);
                  }
                  t = Explode_2(t, _id, r_1);
                  LocalPopChoice(u_12);
                }
              else
                {
                  t = t_12;
                  {
                    ATerm v_12 = t;
                    int i_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = pat_td_1(t, u_112);
                          return(t);
                        }
                        t = Explode_2(t, s_1, _id);
                        LocalPopChoice(i_13);
                      }
                    else
                      {
                        t = v_12;
                        {
                          ATerm t_1 (ATerm t)
                          {
                            ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1(t, u_112);
                              return(t);
                            }
                            t = fetch_1(t, u_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, t_1);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  k_51 = t;
  j_51 :
  if(match_cons(k_51, sym_Match_1))
    {
      l_51 = ATgetArgument(k_51, 0);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
            ATerm r_51 = NULL;
            ATerm v_51 = NULL;
            t = new_0(t);
            {
              r_51 = t;
              {
                if(((p_51 != NULL) && (p_51 != r_51)))
                  _fail(r_51);
                else
                  p_51 = r_51;
                {
                  t = not_null(l_51);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
                      s_51 = t;
                      z_50 :
                      if(match_cons(s_51, sym_Anno_2))
                        {
                          t_51 = ATgetArgument(s_51, 0);
                          u_51 = ATgetArgument(s_51, 1);
                          {
                            if(((n_51 != NULL) && (n_51 != t_51)))
                              _fail(t_51);
                            else
                              n_51 = t_51;
                            {
                              if(((o_51 != NULL) && (o_51 != u_51)))
                                _fail(u_51);
                              else
                                o_51 = u_51;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_51)), not_null(n_51));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, v_1);
                    {
                      v_51 = t;
                      if(((q_51 != NULL) && (q_51 != v_51)))
                        _fail(v_51);
                      else
                        q_51 = v_51;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_51)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_51)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_51))))));
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
                  ATerm a_52 = NULL;
                  ATerm d_52 = NULL;
                  t = new_0(t);
                  {
                    a_52 = t;
                    {
                      if(((y_51 != NULL) && (y_51 != a_52)))
                        _fail(a_52);
                      else
                        y_51 = a_52;
                      {
                        t = not_null(l_51);
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm b_52 = NULL,c_52 = NULL;
                            b_52 = t;
                            d_51 :
                            if(match_cons(b_52, sym_RootApp_1))
                              {
                                c_52 = ATgetArgument(b_52, 0);
                                {
                                  if(((x_51 != NULL) && (x_51 != c_52)))
                                    _fail(c_52);
                                  else
                                    x_51 = c_52;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_51));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, w_1);
                          {
                            d_52 = t;
                            if(((z_51 != NULL) && (z_51 != d_52)))
                              _fail(d_52);
                            else
                              z_51 = d_52;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_51))), not_null(x_51))));
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = m_13;
                  {
                    ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
                    ATerm j_52 = NULL;
                    ATerm n_52 = NULL;
                    t = new_0(t);
                    {
                      j_52 = t;
                      {
                        if(((h_52 != NULL) && (h_52 != j_52)))
                          _fail(j_52);
                        else
                          h_52 = j_52;
                        {
                          t = not_null(l_51);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
                              k_52 = t;
                              h_51 :
                              if(match_cons(k_52, sym_App_2))
                                {
                                  l_52 = ATgetArgument(k_52, 0);
                                  m_52 = ATgetArgument(k_52, 1);
                                  {
                                    if(((g_52 != NULL) && (g_52 != l_52)))
                                      _fail(l_52);
                                    else
                                      g_52 = l_52;
                                    {
                                      if(((f_52 != NULL) && (f_52 != m_52)))
                                        _fail(m_52);
                                      else
                                        f_52 = m_52;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_52));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, x_1);
                            {
                              n_52 = t;
                              if(((i_52 != NULL) && (i_52 != n_52)))
                                _fail(n_52);
                              else
                                i_52 = n_52;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_52)), not_null(g_52)))));
                  }
                }
            }
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
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym_Cong_2))
    {
      j_53 = ATgetArgument(i_53, 0);
      k_53 = ATgetArgument(i_53, 1);
      {
        ATerm n_53 = NULL;
        ATerm r_53 = NULL;
        t = not_null(k_53);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm o_53 = NULL,p_53 = NULL;
            p_53 = t;
            d_53 :
            if(match_cons(p_53, sym_Match_1))
              {
                o_53 = ATgetArgument(p_53, 0);
                t = not_null(o_53);
              }
            else
              {
                if(match_cons(p_53, sym_Id_0))
                  {
                    t = term_o_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, y_1);
          {
            r_53 = t;
            if(((n_53 != NULL) && (n_53 != r_53)))
              _fail(r_53);
            else
              n_53 = r_53;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(j_53), not_null(n_53)));
          t = Mapp2_0(t);
        }
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
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  x_53 :
  if(match_cons(z_53, sym_Scope_2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      y_53 :
      if(((ATermList) a_54 == ATempty))
        {
          t = not_null(b_54);
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
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  k_54 :
  if(match_cons(x_54, sym_Where_1))
    {
      y_54 = ATgetArgument(x_54, 0);
      l_54 :
      if(match_cons(y_54, sym_Seq_2))
        {
          w_54 = ATgetArgument(y_54, 0);
          s_54 = ATgetArgument(y_54, 1);
          m_54 :
          if(match_cons(w_54, sym_Where_1))
            {
              r_54 = ATgetArgument(w_54, 0);
              n_54 :
              if(match_cons(s_54, sym_Seq_2))
                {
                  t_54 = ATgetArgument(s_54, 0);
                  v_54 = ATgetArgument(s_54, 1);
                  o_54 :
                  if(match_cons(t_54, sym_Build_1))
                    {
                      u_54 = ATgetArgument(t_54, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_54)), not_null(v_54))));
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
          if(match_cons(y_54, sym_Where_1))
            {
              w_54 = ATgetArgument(y_54, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(w_54));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(x_54, sym_Test_1))
        {
          y_54 = ATgetArgument(x_54, 0);
          p_54 :
          if(match_cons(y_54, sym_Test_1))
            {
              w_54 = ATgetArgument(y_54, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(w_54));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(x_54, sym_Not_1))
            {
              y_54 = ATgetArgument(x_54, 0);
              q_54 :
              if(match_cons(y_54, sym_Not_1))
                {
                  w_54 = ATgetArgument(y_54, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(w_54));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(x_54, sym_LChoice_2))
                {
                  y_54 = ATgetArgument(x_54, 0);
                  z_54 = ATgetArgument(x_54, 1);
                  {
                    if(((y_54 != NULL) && (y_54 != z_54)))
                      _fail(z_54);
                    else
                      y_54 = z_54;
                    t = not_null(y_54);
                  }
                }
              else
                {
                  if(match_cons(x_54, sym_Choice_2))
                    {
                      y_54 = ATgetArgument(x_54, 0);
                      z_54 = ATgetArgument(x_54, 1);
                      {
                        if(((y_54 != NULL) && (y_54 != z_54)))
                          _fail(z_54);
                        else
                          y_54 = z_54;
                        t = not_null(y_54);
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
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
  v_55 = t;
  r_55 :
  if(match_cons(v_55, sym_LChoice_2))
    {
      w_55 = ATgetArgument(v_55, 0);
      z_55 = ATgetArgument(v_55, 1);
      s_55 :
      if(match_cons(w_55, sym_LChoice_2))
        {
          x_55 = ATgetArgument(w_55, 0);
          y_55 = ATgetArgument(w_55, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(x_55), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_55), not_null(z_55)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(v_55, sym_Seq_2))
        {
          w_55 = ATgetArgument(v_55, 0);
          z_55 = ATgetArgument(v_55, 1);
          t_55 :
          if(match_cons(w_55, sym_Seq_2))
            {
              x_55 = ATgetArgument(w_55, 0);
              y_55 = ATgetArgument(w_55, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_55), not_null(z_55)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(v_55, sym_Choice_2))
            {
              w_55 = ATgetArgument(v_55, 0);
              z_55 = ATgetArgument(v_55, 1);
              u_55 :
              if(match_cons(w_55, sym_Choice_2))
                {
                  x_55 = ATgetArgument(w_55, 0);
                  y_55 = ATgetArgument(w_55, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(x_55), (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_55), not_null(z_55)));
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
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  h_57 = t;
  z_56 :
  if(match_cons(h_57, sym_InfixApp_3))
    {
      i_57 = ATgetArgument(h_57, 0);
      e_57 = ATgetArgument(h_57, 1);
      d_57 = ATgetArgument(h_57, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_57), (ATerm) ATmakeAppl(sym_Op_2, term_p_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_57)), not_null(i_57))));
    }
  else
    {
      if(match_cons(h_57, sym_BAM_3))
        {
          i_57 = ATgetArgument(h_57, 0);
          e_57 = ATgetArgument(h_57, 1);
          d_57 = ATgetArgument(h_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(d_57))), not_null(i_57)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_57))));
        }
      else
        {
          if(match_cons(h_57, sym_AM_2))
            {
              i_57 = ATgetArgument(h_57, 0);
              e_57 = ATgetArgument(h_57, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_57), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_57)));
            }
          else
            {
              if(match_cons(h_57, sym_MA_2))
                {
                  i_57 = ATgetArgument(h_57, 0);
                  e_57 = ATgetArgument(h_57, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_57)), not_null(e_57));
                }
              else
                {
                  if(match_cons(h_57, sym_BA_2))
                    {
                      i_57 = ATgetArgument(h_57, 0);
                      e_57 = ATgetArgument(h_57, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_57)), not_null(i_57));
                    }
                  else
                    {
                      if(match_cons(h_57, sym_Lets_2))
                        {
                          i_57 = ATgetArgument(h_57, 0);
                          e_57 = ATgetArgument(h_57, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_57), not_null(e_57));
                        }
                      else
                        {
                          if(match_cons(h_57, sym_LChoices_1))
                            {
                              i_57 = ATgetArgument(h_57, 0);
                              a_57 :
                              if(((ATgetType(i_57) == AT_LIST) && ((ATermList) i_57 != ATempty)))
                                {
                                  f_57 = ATgetFirst((ATermList) i_57);
                                  g_57 = (ATerm) ATgetNext((ATermList) i_57);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_57), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_57)));
                                }
                              else
                                {
                                  if(((ATermList) i_57 == ATempty))
                                    {
                                      t = term_r_7;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(h_57, sym_Choices_1))
                                {
                                  i_57 = ATgetArgument(h_57, 0);
                                  b_57 :
                                  if(((ATgetType(i_57) == AT_LIST) && ((ATermList) i_57 != ATempty)))
                                    {
                                      f_57 = ATgetFirst((ATermList) i_57);
                                      g_57 = (ATerm) ATgetNext((ATermList) i_57);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_57), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_57)));
                                    }
                                  else
                                    {
                                      if(((ATermList) i_57 == ATempty))
                                        {
                                          t = term_r_7;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(h_57, sym_Seqs_1))
                                    {
                                      i_57 = ATgetArgument(h_57, 0);
                                      c_57 :
                                      if(((ATgetType(i_57) == AT_LIST) && ((ATermList) i_57 != ATempty)))
                                        {
                                          f_57 = ATgetFirst((ATermList) i_57);
                                          g_57 = (ATerm) ATgetNext((ATermList) i_57);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_57), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_57)));
                                        }
                                      else
                                        {
                                          if(((ATermList) i_57 == ATempty))
                                            {
                                              t = term_q_13;
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
  ATerm s_58 = NULL,t_58 = NULL;
  s_58 = t;
  q_58 :
  if(match_cons(s_58, sym_Where_1))
    {
      t_58 = ATgetArgument(s_58, 0);
      r_58 :
      if(match_cons(t_58, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  y_58 = t;
  w_58 :
  if(match_cons(y_58, sym_LChoice_2))
    {
      z_58 = ATgetArgument(y_58, 0);
      a_59 = ATgetArgument(y_58, 1);
      x_58 :
      if(match_cons(a_59, sym_Fail_0))
        {
          t = not_null(z_58);
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
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  i_59 = t;
  g_59 :
  if(match_cons(i_59, sym_LChoice_2))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
      h_59 :
      if(match_cons(j_59, sym_Fail_0))
        {
          t = not_null(k_59);
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
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
  q_59 = t;
  o_59 :
  if(match_cons(q_59, sym_Choice_2))
    {
      r_59 = ATgetArgument(q_59, 0);
      s_59 = ATgetArgument(q_59, 1);
      p_59 :
      if(match_cons(s_59, sym_Fail_0))
        {
          t = not_null(r_59);
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
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL;
  c_60 = t;
  w_59 :
  if(match_cons(c_60, sym_Choice_2))
    {
      d_60 = ATgetArgument(c_60, 0);
      e_60 = ATgetArgument(c_60, 1);
      b_60 :
      if(match_cons(d_60, sym_Fail_0))
        {
          t = not_null(e_60);
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
  ATerm k_60 = NULL,l_60 = NULL,o_60 = NULL;
  k_60 = t;
  j_60 :
  if(match_cons(k_60, sym_Cong_2))
    {
      l_60 = ATgetArgument(k_60, 0);
      o_60 = ATgetArgument(k_60, 1);
      {
        t = not_null(o_60);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm v_60 = NULL;
            v_60 = t;
            i_60 :
            if(!(match_cons(v_60, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, z_1);
        }
        t = term_r_7;
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
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  d_61 = t;
  b_61 :
  if(match_cons(d_61, sym_Path_2))
    {
      e_61 = ATgetArgument(d_61, 0);
      f_61 = ATgetArgument(d_61, 1);
      c_61 :
      if(match_cons(f_61, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm l_61 = NULL,m_61 = NULL;
  l_61 = t;
  j_61 :
  if(match_cons(l_61, sym_One_1))
    {
      m_61 = ATgetArgument(l_61, 0);
      k_61 :
      if(match_cons(m_61, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm t_61 = NULL,u_61 = NULL;
  t_61 = t;
  r_61 :
  if(match_cons(t_61, sym_Some_1))
    {
      u_61 = ATgetArgument(t_61, 0);
      s_61 :
      if(match_cons(u_61, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm z_61 = NULL,d_62 = NULL,e_62 = NULL;
  z_61 = t;
  x_61 :
  if(match_cons(z_61, sym_Rec_2))
    {
      d_62 = ATgetArgument(z_61, 0);
      e_62 = ATgetArgument(z_61, 1);
      y_61 :
      if(match_cons(e_62, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm o_62 = NULL,p_62 = NULL,u_62 = NULL;
  o_62 = t;
  m_62 :
  if(match_cons(o_62, sym_Scope_2))
    {
      p_62 = ATgetArgument(o_62, 0);
      u_62 = ATgetArgument(o_62, 1);
      n_62 :
      if(match_cons(u_62, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm c_63 = NULL,d_63 = NULL,e_63 = NULL;
  c_63 = t;
  y_62 :
  if(match_cons(c_63, sym_Seq_2))
    {
      d_63 = ATgetArgument(c_63, 0);
      e_63 = ATgetArgument(c_63, 1);
      z_62 :
      if(match_cons(d_63, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm k_63 = NULL,l_63 = NULL;
  k_63 = t;
  i_63 :
  if(match_cons(k_63, sym_Not_1))
    {
      l_63 = ATgetArgument(k_63, 0);
      j_63 :
      if(match_cons(l_63, sym_Fail_0))
        {
          t = term_q_13;
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
  ATerm q_63 = NULL,r_63 = NULL;
  q_63 = t;
  o_63 :
  if(match_cons(q_63, sym_Test_1))
    {
      r_63 = ATgetArgument(q_63, 0);
      p_63 :
      if(match_cons(r_63, sym_Fail_0))
        {
          t = term_r_7;
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
  ATerm r_13 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = r_13;
      {
        ATerm d_14 = t;
        int e_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(e_14);
          }
        else
          {
            t = d_14;
            {
              ATerm f_14 = t;
              int g_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(g_14);
                }
              else
                {
                  t = f_14;
                  {
                    ATerm h_14 = t;
                    int i_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(i_14);
                      }
                    else
                      {
                        t = h_14;
                        {
                          ATerm j_14 = t;
                          int l_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(l_14);
                            }
                          else
                            {
                              t = j_14;
                              {
                                ATerm a_15 = t;
                                int b_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(b_15);
                                  }
                                else
                                  {
                                    t = a_15;
                                    {
                                      ATerm h_15 = t;
                                      int i_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(i_15);
                                        }
                                      else
                                        {
                                          t = h_15;
                                          {
                                            ATerm k_15 = t;
                                            int l_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(l_15);
                                              }
                                            else
                                              {
                                                t = k_15;
                                                {
                                                  ATerm m_15 = t;
                                                  int n_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(n_15);
                                                    }
                                                  else
                                                    {
                                                      t = m_15;
                                                      {
                                                        ATerm s_15 = t;
                                                        int t_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(t_15);
                                                          }
                                                        else
                                                          {
                                                            t = s_15;
                                                            {
                                                              ATerm u_15 = t;
                                                              int j_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(j_16);
                                                                }
                                                              else
                                                                {
                                                                  t = u_15;
                                                                  {
                                                                    ATerm k_16 = t;
                                                                    int l_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(l_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_16;
                                                                        {
                                                                          ATerm m_16 = t;
                                                                          int n_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(n_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_16;
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
  ATerm w_63 = NULL,x_63 = NULL;
  w_63 = t;
  u_63 :
  if(match_cons(w_63, sym_Match_1))
    {
      x_63 = ATgetArgument(w_63, 0);
      v_63 :
      if(match_cons(x_63, sym_Wld_0))
        {
          t = term_q_13;
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
  ATerm c_64 = NULL,d_64 = NULL;
  c_64 = t;
  a_64 :
  if(match_cons(c_64, sym_Where_1))
    {
      d_64 = ATgetArgument(c_64, 0);
      b_64 :
      if(match_cons(d_64, sym_Id_0))
        {
          t = term_q_13;
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
  ATerm i_64 = NULL,j_64 = NULL;
  i_64 = t;
  g_64 :
  if(match_cons(i_64, sym_All_1))
    {
      j_64 = ATgetArgument(i_64, 0);
      h_64 :
      if(match_cons(j_64, sym_Id_0))
        {
          t = term_q_13;
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
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  m_64 :
  if(match_cons(o_64, sym_Rec_2))
    {
      p_64 = ATgetArgument(o_64, 0);
      q_64 = ATgetArgument(o_64, 1);
      n_64 :
      if(match_cons(q_64, sym_Id_0))
        {
          t = term_q_13;
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
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
  w_64 = t;
  u_64 :
  if(match_cons(w_64, sym_Scope_2))
    {
      x_64 = ATgetArgument(w_64, 0);
      y_64 = ATgetArgument(w_64, 1);
      v_64 :
      if(match_cons(y_64, sym_Id_0))
        {
          t = term_q_13;
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
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
  e_65 = t;
  c_65 :
  if(match_cons(e_65, sym_LChoice_2))
    {
      f_65 = ATgetArgument(e_65, 0);
      g_65 = ATgetArgument(e_65, 1);
      d_65 :
      if(match_cons(f_65, sym_Id_0))
        {
          t = term_q_13;
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
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL;
  m_65 = t;
  k_65 :
  if(match_cons(m_65, sym_Seq_2))
    {
      n_65 = ATgetArgument(m_65, 0);
      o_65 = ATgetArgument(m_65, 1);
      l_65 :
      if(match_cons(o_65, sym_Id_0))
        {
          t = not_null(n_65);
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
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  s_65 :
  if(match_cons(u_65, sym_Seq_2))
    {
      v_65 = ATgetArgument(u_65, 0);
      w_65 = ATgetArgument(u_65, 1);
      t_65 :
      if(match_cons(v_65, sym_Id_0))
        {
          t = not_null(w_65);
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
  ATerm c_66 = NULL,d_66 = NULL;
  c_66 = t;
  a_66 :
  if(match_cons(c_66, sym_Not_1))
    {
      d_66 = ATgetArgument(c_66, 0);
      b_66 :
      if(match_cons(d_66, sym_Id_0))
        {
          t = term_r_7;
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
  ATerm v_66 = NULL,w_66 = NULL;
  v_66 = t;
  r_66 :
  if(match_cons(v_66, sym_Test_1))
    {
      w_66 = ATgetArgument(v_66, 0);
      t_66 :
      if(match_cons(w_66, sym_Id_0))
        {
          t = term_q_13;
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
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm z_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  {
                    ATerm b_17 = t;
                    int e_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(e_17);
                      }
                    else
                      {
                        t = b_17;
                        {
                          ATerm f_17 = t;
                          int i_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(i_17);
                            }
                          else
                            {
                              t = f_17;
                              {
                                ATerm k_17 = t;
                                int l_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(l_17);
                                  }
                                else
                                  {
                                    t = k_17;
                                    {
                                      ATerm m_17 = t;
                                      int y_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(y_17);
                                        }
                                      else
                                        {
                                          t = m_17;
                                          {
                                            ATerm z_17 = t;
                                            int a_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(a_18);
                                              }
                                            else
                                              {
                                                t = z_17;
                                                {
                                                  ATerm b_18 = t;
                                                  int c_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(c_18);
                                                    }
                                                  else
                                                    {
                                                      t = b_18;
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
  ATerm d_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = d_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            {
              ATerm q_18 = t;
              int r_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(r_18);
                }
              else
                {
                  t = q_18;
                  {
                    ATerm s_18 = t;
                    int w_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(w_18);
                      }
                    else
                      {
                        t = s_18;
                        {
                          ATerm x_18 = t;
                          int y_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(y_18);
                            }
                          else
                            {
                              t = x_18;
                              {
                                ATerm g_19 = t;
                                int h_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(h_19);
                                  }
                                else
                                  {
                                    t = g_19;
                                    {
                                      ATerm i_19 = t;
                                      int j_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(j_19);
                                        }
                                      else
                                        {
                                          t = i_19;
                                          {
                                            ATerm u_19 = t;
                                            int w_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(w_19);
                                              }
                                            else
                                              {
                                                t = u_19;
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
      }
    }
  return(t);
}
ATerm Optimize_0 (ATerm t)
{
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = x_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm c_20 = t;
              int h_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(h_20);
                }
              else
                {
                  t = c_20;
                  {
                    ATerm i_20 = t;
                    int j_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(j_20);
                      }
                    else
                      {
                        t = i_20;
                        {
                          ATerm l_20 = t;
                          int m_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(m_20);
                            }
                          else
                            {
                              t = l_20;
                              {
                                ATerm n_20 = t;
                                int t_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(t_20);
                                  }
                                else
                                  {
                                    t = n_20;
                                    {
                                      ATerm v_20 = t;
                                      int w_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(w_20);
                                        }
                                      else
                                        {
                                          t = v_20;
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
ATerm repeat_2 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm y_66 (ATerm t)
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        t = y_66(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = u_94(t);
      }
    return(t);
  }
  t = y_66(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_94 (ATerm))
{
  t = repeat_2(t, w_94, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm a_108 (ATerm))
{
  ATerm e_67 (ATerm t)
  {
    t = a_108(t);
    {
      t = _all(t, e_67);
      t = a_108(t);
    }
    return(t);
  }
  t = e_67(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm b_2 (ATerm t)
    {
      ATerm z_20 = t;
      int c_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(c_21);
        }
      else
        {
          t = z_20;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, b_2);
    return(t);
  }
  t = downup_1(t, a_2);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm))
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,q_67 = NULL;
  m_67 = t;
  l_67 :
  if(match_cons(m_67, sym_SDef_3))
    {
      n_67 = ATgetArgument(m_67, 0);
      o_67 = ATgetArgument(m_67, 1);
      q_67 = ATgetArgument(m_67, 2);
      {
        ATerm v_67 = NULL,x_67 = NULL;
        ATerm w_67 = NULL;
        t = SSLgetAnnotations(not_null(m_67));
        {
          w_67 = t;
          if(((v_67 != NULL) && (v_67 != w_67)))
            _fail(w_67);
          else
            v_67 = w_67;
        }
        {
          t = not_null(n_67);
          {
            ATerm h_68 = NULL;
            t = f_87(t);
            {
              x_67 = t;
              {
                t = not_null(o_67);
                {
                  ATerm v_68 = NULL;
                  t = g_87(t);
                  {
                    h_68 = t;
                    {
                      t = not_null(q_67);
                      {
                        ATerm x_68 = NULL;
                        t = h_87(t);
                        {
                          v_68 = t;
                          {
                            ATerm y_68 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(x_67), not_null(h_68), not_null(v_68)), not_null(v_67));
                            {
                              y_68 = t;
                              if(((x_68 != NULL) && (x_68 != y_68)))
                                _fail(y_68);
                              else
                                x_68 = y_68;
                            }
                            t = not_null(x_68);
                          }
                        }
                      }
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
ATerm Strategies_1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm p_69 = NULL,q_69 = NULL;
  p_69 = t;
  o_69 :
  if(match_cons(p_69, sym_Strategies_1))
    {
      q_69 = ATgetArgument(p_69, 0);
      {
        ATerm c_70 = NULL,j_70 = NULL;
        ATerm i_70 = NULL;
        t = SSLgetAnnotations(not_null(p_69));
        {
          i_70 = t;
          if(((c_70 != NULL) && (c_70 != i_70)))
            _fail(i_70);
          else
            c_70 = i_70;
        }
        {
          t = not_null(q_69);
          {
            ATerm l_70 = NULL;
            t = s_85(t);
            {
              j_70 = t;
              {
                ATerm v_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(j_70)), not_null(c_70));
                {
                  v_70 = t;
                  if(((l_70 != NULL) && (l_70 != v_70)))
                    _fail(v_70);
                  else
                    l_70 = v_70;
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
ATerm Specification_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm f_71 = NULL,g_71 = NULL;
  f_71 = t;
  e_71 :
  if(match_cons(f_71, sym_Specification_1))
    {
      g_71 = ATgetArgument(f_71, 0);
      {
        ATerm j_71 = NULL,l_71 = NULL;
        ATerm k_71 = NULL;
        t = SSLgetAnnotations(not_null(f_71));
        {
          k_71 = t;
          if(((j_71 != NULL) && (j_71 != k_71)))
            _fail(k_71);
          else
            j_71 = k_71;
        }
        {
          t = not_null(g_71);
          {
            ATerm n_71 = NULL;
            t = u_85(t);
            {
              l_71 = t;
              {
                ATerm o_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(l_71)), not_null(j_71));
                {
                  o_71 = t;
                  if(((n_71 != NULL) && (n_71 != o_71)))
                    _fail(o_71);
                  else
                    n_71 = o_71;
                }
                t = not_null(n_71);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm d_2 (ATerm t)
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          ATerm g_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, x_112);
            return(t);
          }
          t = map_1(t, g_2);
          return(t);
        }
        t = Strategies_1(t, f_2);
        return(t);
      }
      t = Cons_2(t, e_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, d_2);
    return(t);
  }
  t = Specification_1(t, c_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm))
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL;
  z_71 = t;
  y_71 :
  if(match_cons(z_71, sym__2))
    {
      a_72 = ATgetArgument(z_71, 0);
      b_72 = ATgetArgument(z_71, 1);
      {
        ATerm f_72 = NULL,h_72 = NULL;
        ATerm g_72 = NULL;
        t = SSLgetAnnotations(not_null(z_71));
        {
          g_72 = t;
          if(((f_72 != NULL) && (f_72 != g_72)))
            _fail(g_72);
          else
            f_72 = g_72;
        }
        {
          t = not_null(a_72);
          {
            ATerm j_72 = NULL;
            t = m_76(t);
            {
              h_72 = t;
              {
                t = not_null(b_72);
                {
                  ATerm l_72 = NULL;
                  t = n_76(t);
                  {
                    j_72 = t;
                    {
                      ATerm m_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_72), not_null(j_72)), not_null(f_72));
                      {
                        m_72 = t;
                        if(((l_72 != NULL) && (l_72 != m_72)))
                          _fail(m_72);
                        else
                          l_72 = m_72;
                      }
                      t = not_null(l_72);
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
  ATerm u_72 = NULL;
  ATerm d_21;
  d_21 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm v_72 = NULL,w_72 = NULL;
      v_72 = t;
      t_72 :
      if(match_cons(v_72, sym_Program_1))
        {
          w_72 = ATgetArgument(v_72, 0);
          if(((u_72 != NULL) && (u_72 != w_72)))
            _fail(w_72);
          else
            u_72 = w_72;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_21), not_null(u_72)), term_f_21));
      {
        t = printnl_0(t);
        {
          t = term_l_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATempty, term_m_21));
  {
    t = printnl_0(t);
    {
      t = term_l_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm j_2 (ATerm t)
    {
      ATerm n_21 = t;
      if((PushChoice() == 0))
        {
          ATerm k_2 (ATerm t)
          {
            ATerm f_73 = NULL;
            f_73 = t;
            y_72 :
            if(!(match_cons(f_73, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, k_2);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_21;
        }
      return(t);
    }
    t = _2(t, j_2, _id);
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          ATerm g_73 = NULL,h_73 = NULL;
          g_73 = t;
          a_73 :
          if(match_cons(g_73, sym_Runtime_1))
            {
              h_73 = ATgetArgument(g_73, 0);
              if(((e_73 != NULL) && (e_73 != h_73)))
                _fail(h_73);
              else
                e_73 = h_73;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, m_2);
        return(t);
      }
      t = _2(t, l_2, _id);
      {
        ATerm n_2 (ATerm t)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm i_73 = NULL,j_73 = NULL;
            i_73 = t;
            c_73 :
            if(match_cons(i_73, sym_Program_1))
              {
                j_73 = ATgetArgument(i_73, 0);
                if(((d_73 != NULL) && (d_73 != j_73)))
                  _fail(j_73);
                else
                  d_73 = j_73;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_2);
          return(t);
        }
        t = _2(t, n_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_21), not_null(e_73)), term_v_21), not_null(d_73)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, i_2);
  {
    t = term_x_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL;
  o_73 = t;
  n_73 :
  if(match_cons(o_73, sym__2))
    {
      p_73 = ATgetArgument(o_73, 0);
      q_73 = ATgetArgument(o_73, 1);
      t = SSL_WriteToTextFile(not_null(p_73), not_null(q_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_cons(w_73, sym__2))
    {
      x_73 = ATgetArgument(w_73, 0);
      y_73 = ATgetArgument(w_73, 1);
      t = SSL_WriteToBinaryFile(not_null(x_73), not_null(y_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_74 = NULL;
  ATerm y_21;
  y_21 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm h_74 = NULL,i_74 = NULL;
            h_74 = t;
            d_74 :
            if(match_cons(h_74, sym_Output_1))
              {
                i_74 = ATgetArgument(h_74, 0);
                if(((g_74 != NULL) && (g_74 != i_74)))
                  _fail(i_74);
                else
                  g_74 = i_74;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_2);
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          {
            ATerm j_74 = NULL;
            t = term_b_22;
            {
              j_74 = t;
              if(((g_74 != NULL) && (g_74 != j_74)))
                _fail(j_74);
              else
                g_74 = j_74;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = y_21;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(g_74);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm d_22 = t;
      int e_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              ATerm k_74 = NULL;
              k_74 = t;
              f_74 :
              if(!(match_cons(k_74, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          LocalPopChoice(e_22);
        }
      else
        {
          t = d_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_91 (ATerm))
{
  ATerm q_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  ATerm g_22;
  g_22 = t;
  t = dtime_0(t);
  t = g_22;
  {
    t = x_91(t);
    {
      ATerm o_22;
      o_22 = t;
      {
        ATerm r_74 = NULL;
        t = dtime_0(t);
        {
          r_74 = t;
          if(((q_74 != NULL) && (q_74 != r_74)))
            _fail(r_74);
          else
            q_74 = r_74;
        }
      }
      t = o_22;
      {
        s_74 = t;
        p_74 :
        if(match_cons(s_74, sym__2))
          {
            t_74 = ATgetArgument(s_74, 0);
            u_74 = ATgetArgument(s_74, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_74)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_74))), not_null(u_74));
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
  ATerm a_75 = NULL;
  a_75 = t;
  t = SSL_ReadFromFile(not_null(a_75));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_106 (ATerm), ATerm q_106 (ATerm))
{
  ATerm f_75 = NULL,h_75 = NULL;
  ATerm p_22;
  p_22 = t;
  {
    ATerm g_75 = NULL;
    t = p_106(t);
    {
      g_75 = t;
      if(((f_75 != NULL) && (f_75 != g_75)))
        _fail(g_75);
      else
        f_75 = g_75;
    }
  }
  t = p_22;
  {
    ATerm i_75 = NULL;
    t = q_106(t);
    {
      i_75 = t;
      if(((h_75 != NULL) && (h_75 != i_75)))
        _fail(i_75);
      else
        h_75 = i_75;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_75), not_null(h_75));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_75 = NULL;
  ATerm q_22;
  q_22 = t;
  {
    ATerm u_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm p_75 = NULL,q_75 = NULL;
          p_75 = t;
          m_75 :
          if(match_cons(p_75, sym_Input_1))
            {
              q_75 = ATgetArgument(p_75, 0);
              if(((o_75 != NULL) && (o_75 != q_75)))
                _fail(q_75);
              else
                o_75 = q_75;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_2);
        LocalPopChoice(a_23);
      }
    else
      {
        t = u_22;
        {
          ATerm r_75 = NULL;
          t = term_g_23;
          {
            r_75 = t;
            if(((o_75 != NULL) && (o_75 != r_75)))
              _fail(r_75);
            else
              o_75 = r_75;
          }
        }
      }
  }
  t = q_22;
  {
    ATerm y_2 (ATerm t)
    {
      t = not_null(o_75);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_75 = NULL;
  y_75 = t;
  x_75 :
  if(match_cons(y_75, sym_Version_0))
    {
      ATerm a_76 = NULL,c_76 = NULL;
      ATerm h_23;
      h_23 = t;
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
      t = h_23;
      {
        ATerm d_76 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_76));
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
ATerm need_help_1 (ATerm t, ATerm w_91 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_2);
  t = w_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_76 = NULL;
  i_76 = t;
  t = SSL_table_create(not_null(i_76));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_76 = NULL;
  o_76 = t;
  {
    ATerm m_23;
    m_23 = t;
    {
      t = term_u_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_23, term_w_23, not_null(o_76));
          t = table_put_0(t);
        }
      }
    }
    t = m_23;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL;
  w_76 = t;
  u_76 :
  if(match_string(w_76, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(w_76) == AT_LIST) && ((ATermList) w_76 != ATempty)))
        {
          x_76 = ATgetFirst((ATermList) w_76);
          y_76 = (ATerm) ATgetNext((ATermList) w_76);
          v_76 :
          if(((ATgetType(y_76) == AT_LIST) && ((ATermList) y_76 != ATempty)))
            {
              z_76 = ATgetFirst((ATermList) y_76);
              a_77 = (ATerm) ATgetNext((ATermList) y_76);
              {
                ATerm e_77 = NULL;
                ATerm y_23;
                y_23 = t;
                {
                  t = not_null(x_76);
                  t = k_0(t);
                }
                t = y_23;
                {
                  ATerm f_77 = NULL;
                  t = not_null(z_76);
                  {
                    t = l_0(t);
                    {
                      f_77 = t;
                      if(((e_77 != NULL) && (e_77 != f_77)))
                        _fail(f_77);
                      else
                        e_77 = f_77;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_77)), not_null(e_77));
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
  ATerm z_23 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm u_77 = NULL;
        u_77 = t;
        j_77 :
        if(!(match_string(u_77, "-S")))
          {
            if(!(match_string(u_77, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_f_24;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_h_24;
        return(t);
      }
      t = Option_3(t, a_3, b_3, c_3);
      LocalPopChoice(e_24);
    }
  else
    {
      t = z_23;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              ATerm x_77 = NULL;
              x_77 = t;
              k_77 :
              if(!(match_string(x_77, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_l_24;
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              t = term_p_24;
              return(t);
            }
            t = Option_3(t, d_3, e_3, f_3);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm q_24 = t;
              int s_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm y_77 = NULL;
                    y_77 = t;
                    l_77 :
                    if(!(match_string(y_77, "-v")))
                      {
                        if(!(match_string(y_77, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_3 (ATerm t)
                  {
                    t = term_t_24;
                    return(t);
                  }
                  ATerm i_3 (ATerm t)
                  {
                    t = term_v_24;
                    return(t);
                  }
                  t = Option_3(t, g_3, h_3, i_3);
                  LocalPopChoice(s_24);
                }
              else
                {
                  t = q_24;
                  {
                    ATerm x_24 = t;
                    int y_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_3 (ATerm t)
                        {
                          ATerm z_77 = NULL;
                          z_77 = t;
                          m_77 :
                          if(!(match_string(z_77, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_3 (ATerm t)
                        {
                          ATerm a_78 = NULL;
                          ATerm b_78 = NULL;
                          b_78 = t;
                          if(((a_78 != NULL) && (a_78 != b_78)))
                            _fail(b_78);
                          else
                            a_78 = b_78;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_78));
                          return(t);
                        }
                        ATerm n_3 (ATerm t)
                        {
                          t = term_d_25;
                          return(t);
                        }
                        t = ArgOption_3(t, j_3, m_3, n_3);
                        LocalPopChoice(y_24);
                      }
                    else
                      {
                        t = x_24;
                        {
                          ATerm e_25 = t;
                          int g_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_3 (ATerm t)
                              {
                                ATerm c_78 = NULL;
                                c_78 = t;
                                o_77 :
                                if(!(match_string(c_78, "-i")))
                                  {
                                    if(!(match_string(c_78, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm p_3 (ATerm t)
                              {
                                ATerm d_78 = NULL;
                                ATerm e_78 = NULL;
                                e_78 = t;
                                if(((d_78 != NULL) && (d_78 != e_78)))
                                  _fail(e_78);
                                else
                                  d_78 = e_78;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_78));
                                return(t);
                              }
                              ATerm q_3 (ATerm t)
                              {
                                t = term_h_25;
                                return(t);
                              }
                              t = ArgOption_3(t, o_3, p_3, q_3);
                              LocalPopChoice(g_25);
                            }
                          else
                            {
                              t = e_25;
                              {
                                ATerm i_25 = t;
                                int j_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_3 (ATerm t)
                                    {
                                      ATerm f_78 = NULL;
                                      f_78 = t;
                                      q_77 :
                                      if(!(match_string(f_78, "-o")))
                                        {
                                          if(!(match_string(f_78, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm s_3 (ATerm t)
                                    {
                                      ATerm g_78 = NULL;
                                      ATerm h_78 = NULL;
                                      h_78 = t;
                                      if(((g_78 != NULL) && (g_78 != h_78)))
                                        _fail(h_78);
                                      else
                                        g_78 = h_78;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_78));
                                      return(t);
                                    }
                                    ATerm t_3 (ATerm t)
                                    {
                                      t = term_k_25;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, r_3, s_3, t_3);
                                    LocalPopChoice(j_25);
                                  }
                                else
                                  {
                                    t = i_25;
                                    {
                                      ATerm l_25 = t;
                                      int p_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_3 (ATerm t)
                                          {
                                            ATerm i_78 = NULL;
                                            i_78 = t;
                                            s_77 :
                                            if(!(match_string(i_78, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm v_3 (ATerm t)
                                          {
                                            t = term_q_25;
                                            return(t);
                                          }
                                          ATerm w_3 (ATerm t)
                                          {
                                            t = term_u_25;
                                            return(t);
                                          }
                                          t = Option_3(t, u_3, v_3, w_3);
                                          LocalPopChoice(p_25);
                                        }
                                      else
                                        {
                                          t = l_25;
                                          {
                                            ATerm x_3 (ATerm t)
                                            {
                                              ATerm j_78 = NULL;
                                              j_78 = t;
                                              t_77 :
                                              if(!(match_string(j_78, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm y_3 (ATerm t)
                                            {
                                              t = term_x_25;
                                              return(t);
                                            }
                                            ATerm z_3 (ATerm t)
                                            {
                                              t = term_y_25;
                                              return(t);
                                            }
                                            t = Option_3(t, x_3, y_3, z_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm o_78 = NULL;
  o_78 = t;
  t = SSL_table_destroy(not_null(o_78));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_78 = NULL;
  s_78 = t;
  t = SSL_exit(not_null(s_78));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm w_78 = NULL;
  w_78 = t;
  t = SSL_implode_string(not_null(w_78));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm z_78 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_78);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          t = Nil_0(t);
          t = s_103(t);
        }
      }
    return(t);
  }
  t = z_78(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
        ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL;
        c_79 = t;
        b_79 :
        if(((ATgetType(c_79) == AT_LIST) && ((ATermList) c_79 != ATempty)))
          {
            d_79 = ATgetFirst((ATermList) c_79);
            e_79 = (ATerm) ATgetNext((ATermList) c_79);
            {
              t = not_null(d_79);
              {
                ATerm a_4 (ATerm t)
                {
                  t = not_null(e_79);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_4);
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
  ATerm k_79 = NULL;
  k_79 = t;
  t = SSL_explode_string(not_null(k_79));
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
ATerm long_description_1 (ATerm t, ATerm d_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_103 (ATerm))
{
  ATerm n_79 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = Cons_2(t, e_103, n_79);
      }
    return(t);
  }
  t = n_79(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  w_79 = t;
  t_79 :
  if(((ATgetType(w_79) == AT_LIST) && ((ATermList) w_79 != ATempty)))
    {
      u_79 = ATgetFirst((ATermList) w_79);
      v_79 = (ATerm) ATgetNext((ATermList) w_79);
      {
        ATerm z_79 = NULL;
        t = not_null(v_79);
        {
          ATerm f_26;
          f_26 = t;
          {
            ATerm a_80 = NULL,c_80 = NULL,e_80 = NULL;
            ATerm g_26;
            g_26 = t;
            {
              ATerm b_80 = NULL;
              t = j_0(t);
              {
                b_80 = t;
                if(((a_80 != NULL) && (a_80 != b_80)))
                  _fail(b_80);
                else
                  a_80 = b_80;
              }
            }
            t = g_26;
            {
              ATerm d_80 = NULL;
              t = not_null(u_79);
              {
                t = i_0(t);
                {
                  d_80 = t;
                  if(((c_80 != NULL) && (c_80 != d_80)))
                    _fail(d_80);
                  else
                    c_80 = d_80;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_80)), not_null(c_80));
                {
                  e_80 = t;
                  if(((z_79 != NULL) && (z_79 != e_80)))
                    _fail(e_80);
                  else
                    z_79 = e_80;
                }
              }
            }
          }
          t = f_26;
          {
            ATerm b_4 (ATerm t)
            {
              t = not_null(z_79);
              return(t);
            }
            t = reverse_acc_2(t, i_0, b_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_79 == ATempty))
        {
          {
            t = term_h_26;
            t = j_0(t);
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
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm p_80 = NULL,q_80 = NULL;
  p_80 = t;
  o_80 :
  if(match_cons(p_80, sym_Program_1))
    {
      q_80 = ATgetArgument(p_80, 0);
      {
        ATerm t_80 = NULL,v_80 = NULL;
        ATerm u_80 = NULL;
        t = SSLgetAnnotations(not_null(p_80));
        {
          u_80 = t;
          if(((t_80 != NULL) && (t_80 != u_80)))
            _fail(u_80);
          else
            t_80 = u_80;
        }
        {
          t = not_null(q_80);
          {
            ATerm x_80 = NULL;
            t = v_77(t);
            {
              v_80 = t;
              {
                ATerm y_80 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_80)), not_null(t_80));
                {
                  y_80 = t;
                  if(((x_80 != NULL) && (x_80 != y_80)))
                    _fail(y_80);
                  else
                    x_80 = y_80;
                }
                t = not_null(x_80);
              }
            }
          }
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
  ATerm h_81 = NULL;
  ATerm h_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      ATerm i_81 = NULL;
      i_81 = t;
      if(((h_81 != NULL) && (h_81 != i_81)))
        _fail(i_81);
      else
        h_81 = i_81;
      return(t);
    }
    t = Program_1(t, i_4);
    return(t);
  }
  t = option_defined_1(t, h_4);
  {
    ATerm j_4 (ATerm t)
    {
      ATerm j_81 = NULL;
      ATerm k_81 = NULL;
      t = term_h_26;
      {
        ATerm l_4 (ATerm t)
        {
          t = not_null(h_81);
          return(t);
        }
        t = short_description_1(t, l_4);
        {
          t = concat_strings_0(t);
          {
            k_81 = t;
            if(((j_81 != NULL) && (j_81 != k_81)))
              _fail(k_81);
            else
              j_81 = k_81;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATempty, not_null(j_81)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATempty, term_i_26));
      {
        t = printnl_0(t);
        {
          t = term_l_26;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm l_81 = NULL;
                  l_81 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_81)), term_m_26));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_4);
                {
                  ATerm n_4 (ATerm t)
                  {
                    ATerm n_81 = NULL;
                    ATerm o_81 = NULL;
                    t = term_h_26;
                    {
                      ATerm o_4 (ATerm t)
                      {
                        t = not_null(h_81);
                        return(t);
                      }
                      t = long_description_1(t, o_4);
                      {
                        t = concat_strings_0(t);
                        {
                          o_81 = t;
                          if(((n_81 != NULL) && (n_81 != o_81)))
                            _fail(o_81);
                          else
                            n_81 = o_81;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_81)), term_n_26));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_4);
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
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
  v_81 = t;
  u_81 :
  if(match_cons(v_81, sym__2))
    {
      w_81 = ATgetArgument(v_81, 0);
      x_81 = ATgetArgument(v_81, 1);
      {
        ATerm o_26;
        o_26 = t;
        t = SSL_printnl(not_null(w_81), not_null(x_81));
        t = o_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_77 (ATerm))
{
  ATerm g_82 = NULL,h_82 = NULL;
  g_82 = t;
  f_82 :
  if(match_cons(g_82, sym_Undefined_1))
    {
      h_82 = ATgetArgument(g_82, 0);
      {
        ATerm k_82 = NULL,m_82 = NULL;
        ATerm l_82 = NULL;
        t = SSLgetAnnotations(not_null(g_82));
        {
          l_82 = t;
          if(((k_82 != NULL) && (k_82 != l_82)))
            _fail(l_82);
          else
            k_82 = l_82;
        }
        {
          t = not_null(h_82);
          {
            ATerm o_82 = NULL;
            t = w_77(t);
            {
              m_82 = t;
              {
                ATerm p_82 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_82)), not_null(k_82));
                {
                  p_82 = t;
                  if(((o_82 != NULL) && (o_82 != p_82)))
                    _fail(p_82);
                  else
                    o_82 = p_82;
                }
                t = not_null(o_82);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_103 (ATerm))
{
  ATerm u_82 (ATerm t)
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_103, _id);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = Cons_2(t, _id, u_82);
      }
    return(t);
  }
  t = u_82(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = fetch_1(t, b_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_82 = NULL;
  z_82 = t;
  y_82 :
  if(match_cons(z_82, sym_Help_0))
    {
      ATerm b_83 = NULL,d_83 = NULL;
      ATerm c_28;
      c_28 = t;
      {
        ATerm c_83 = NULL;
        t = SSLgetAnnotations(not_null(z_82));
        {
          c_83 = t;
          if(((b_83 != NULL) && (b_83 != c_83)))
            _fail(c_83);
          else
            b_83 = c_83;
        }
      }
      t = c_28;
      {
        ATerm e_83 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_83));
        {
          e_83 = t;
          if(((d_83 != NULL) && (d_83 != e_83)))
            _fail(e_83);
          else
            d_83 = e_83;
        }
        t = not_null(d_83);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_107(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL;
  k_83 = t;
  j_83 :
  if(match_cons(k_83, sym__2))
    {
      l_83 = ATgetArgument(k_83, 0);
      m_83 = ATgetArgument(k_83, 1);
      t = SSL_table_get(not_null(l_83), not_null(m_83));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL;
  t_83 = t;
  s_83 :
  if(match_cons(t_83, sym__3))
    {
      u_83 = ATgetArgument(t_83, 0);
      v_83 = ATgetArgument(t_83, 1);
      w_83 = ATgetArgument(t_83, 2);
      {
        ATerm g_28;
        g_28 = t;
        {
          ATerm a_84 = NULL;
          ATerm b_84 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(v_83));
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
                t = (ATerm) ATempty;
              }
            {
              b_84 = t;
              if(((a_84 != NULL) && (a_84 != b_84)))
                _fail(b_84);
              else
                a_84 = b_84;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_83), not_null(v_83), (ATerm) ATinsert(CheckATermList(not_null(a_84)), not_null(w_83)));
            t = table_put_0(t);
          }
        }
        t = g_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_90 (ATerm))
{
  ATerm f_84 = NULL;
  ATerm g_84 = NULL;
  t = term_h_26;
  {
    t = h_90(t);
    {
      g_84 = t;
      if(((f_84 != NULL) && (f_84 != g_84)))
        _fail(g_84);
      else
        f_84 = g_84;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_26, term_k_26, not_null(f_84));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm m_84 = NULL,p_84 = NULL,q_84 = NULL;
  m_84 = t;
  l_84 :
  if(match_string(m_84, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(m_84) == AT_LIST) && ((ATermList) m_84 != ATempty)))
        {
          p_84 = ATgetFirst((ATermList) m_84);
          q_84 = (ATerm) ATgetNext((ATermList) m_84);
          {
            ATerm t_84 = NULL;
            ATerm o_28;
            o_28 = t;
            {
              t = not_null(p_84);
              t = c_0(t);
            }
            t = o_28;
            {
              ATerm u_84 = NULL;
              t = term_h_26;
              {
                t = d_0(t);
                {
                  u_84 = t;
                  if(((t_84 != NULL) && (t_84 != u_84)))
                    _fail(u_84);
                  else
                    t_84 = u_84;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_84)), not_null(t_84));
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
  ATerm s_4 (ATerm t)
  {
    ATerm z_84 = NULL;
    z_84 = t;
    y_84 :
    if(!(match_string(z_84, "--help")))
      {
        if(!(match_string(z_84, "-h")))
          {
            if(!(match_string(z_84, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_u_28;
    return(t);
  }
  t = Option_3(t, s_4, t_4, x_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
  c_85 = t;
  b_85 :
  if(((ATgetType(c_85) == AT_LIST) && ((ATermList) c_85 != ATempty)))
    {
      d_85 = ATgetFirst((ATermList) c_85);
      e_85 = (ATerm) ATgetNext((ATermList) c_85);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_85)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_85)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_88 (ATerm), ATerm l_88 (ATerm))
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  p_85 = t;
  o_85 :
  if(((ATgetType(p_85) == AT_LIST) && ((ATermList) p_85 != ATempty)))
    {
      q_85 = ATgetFirst((ATermList) p_85);
      r_85 = (ATerm) ATgetNext((ATermList) p_85);
      {
        ATerm x_85 = NULL,z_85 = NULL;
        ATerm y_85 = NULL;
        t = SSLgetAnnotations(not_null(p_85));
        {
          y_85 = t;
          if(((x_85 != NULL) && (x_85 != y_85)))
            _fail(y_85);
          else
            x_85 = y_85;
        }
        {
          t = not_null(q_85);
          {
            ATerm b_86 = NULL;
            t = k_88(t);
            {
              z_85 = t;
              {
                t = not_null(r_85);
                {
                  ATerm d_86 = NULL;
                  t = l_88(t);
                  {
                    b_86 = t;
                    {
                      ATerm f_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_86)), not_null(z_85)), not_null(x_85));
                      {
                        f_86 = t;
                        if(((d_86 != NULL) && (d_86 != f_86)))
                          _fail(f_86);
                        else
                          d_86 = f_86;
                      }
                      t = not_null(d_86);
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
  ATerm r_86 = NULL;
  r_86 = t;
  q_86 :
  if(((ATermList) r_86 == ATempty))
    {
      {
        ATerm t_86 = NULL,v_86 = NULL;
        ATerm v_28;
        v_28 = t;
        {
          ATerm u_86 = NULL;
          t = SSLgetAnnotations(not_null(r_86));
          {
            u_86 = t;
            if(((t_86 != NULL) && (t_86 != u_86)))
              _fail(u_86);
            else
              t_86 = u_86;
          }
        }
        t = v_28;
        {
          ATerm w_86 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_86));
          {
            w_86 = t;
            if(((v_86 != NULL) && (v_86 != w_86)))
              _fail(w_86);
            else
              v_86 = w_86;
          }
          t = not_null(v_86);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_90 (ATerm))
{
  ATerm w_28;
  w_28 = t;
  {
    ATerm a_5 (ATerm t)
    {
      t = term_x_28;
      t = f_90(t);
      return(t);
    }
    t = try_1(t, a_5);
  }
  t = w_28;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm b_87 = NULL;
      b_87 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_87));
      return(t);
    }
    ATerm c_5 (ATerm t)
    {
      ATerm c_29 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_29 = t;
          int f_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_29);
            }
          else
            {
              t = e_29;
              {
                t = f_90(t);
                t = Cons_2(t, _id, c_5);
              }
            }
          LocalPopChoice(d_29);
        }
      else
        {
          t = c_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_5, c_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
  ATerm k_29;
  k_29 = t;
  {
    ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
    n_87 = t;
    j_87 :
    if(match_cons(n_87, sym__3))
      {
        o_87 = ATgetArgument(n_87, 0);
        p_87 = ATgetArgument(n_87, 1);
        q_87 = ATgetArgument(n_87, 2);
        {
          if(((k_87 != NULL) && (k_87 != o_87)))
            _fail(o_87);
          else
            k_87 = o_87;
          {
            if(((l_87 != NULL) && (l_87 != p_87)))
              _fail(p_87);
            else
              l_87 = p_87;
            {
              if(((m_87 != NULL) && (m_87 != q_87)))
                _fail(q_87);
              else
                m_87 = q_87;
              t = SSL_table_put(not_null(k_87), not_null(l_87), not_null(m_87));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = k_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm t_87 = NULL;
  ATerm l_29;
  l_29 = t;
  {
    t = term_m_29;
    t = table_put_0(t);
  }
  t = l_29;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm n_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_90(t);
          LocalPopChoice(s_29);
        }
      else
        {
          t = n_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_5);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_x_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm u_87 = NULL;
                  u_87 = t;
                  if(((t_87 != NULL) && (t_87 != u_87)))
                    _fail(u_87);
                  else
                    t_87 = u_87;
                  return(t);
                }
                t = Undefined_1(t, g_5);
                return(t);
              }
              t = option_defined_1(t, f_5);
              {
                ATerm v_29;
                v_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_87)), term_w_29));
                  t = printnl_0(t);
                }
                t = v_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_5);
      {
        ATerm x_29;
        x_29 = t;
        {
          t = term_j_26;
          t = table_destroy_0(t);
        }
        t = x_29;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm))
{
  ATerm h_5 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, h_5);
  {
    t = store_options_0(t);
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, n_91);
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, l_91);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_91 (ATerm), ATerm h_91 (ATerm))
{
  t = iowrap_3(t, g_91, h_91, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_91 (ATerm))
{
  ATerm i_5 (ATerm t)
  {
    t = _2(t, _id, d_91);
    return(t);
  }
  t = iowrap_2(t, i_5, _fail);
  return(t);
}
ATerm optimize2_comp_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      t = simplify_widen_0(t);
      {
        t = simplify_0(t);
        t = simplify_clean_0(t);
      }
      return(t);
    }
    t = apply_to_bodies_1(t, o_5);
    return(t);
  }
  t = iowrap_1(t, n_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize2_comp_0(t);
  return(t);
}
