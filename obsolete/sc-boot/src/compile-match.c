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
ATerm term_a_27;
ATerm term_t_26;
ATerm term_l_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_m_23;
ATerm term_b_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_v_21;
ATerm term_w_20;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_j_14;
ATerm term_f_14;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
void init_constant_terms (void)
{
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATinsert(ATempty, term_d_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Var_1, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Assign_1, term_f_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATinsert(ATempty, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATinsert(ATempty, term_n_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_o_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATinsert(ATempty, term_s_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATinsert(ATempty, term_n_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_o_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_r_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__3, term_q_25, term_r_25, (ATerm) ATempty);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm g_88 (ATerm));
ATerm Rec_2 (ATerm, ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm Let_2 (ATerm, ATerm h_64 (ATerm), ATerm i_64 (ATerm));
ATerm sboundin_3 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm e_64 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm c_88 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm p_62 (ATerm));
ATerm Scope_2 (ATerm, ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm tboundin_3 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_72 (ATerm), ATerm g_72 (ATerm));
ATerm for_3 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm d_75 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_74 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm q_74 (ATerm));
ATerm rename_4 (ATerm, ATerm r_75 (ATerm, ATerm (ATerm)), ATerm s_75 (ATerm), ATerm t_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_75 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm x_60 (ATerm));
ATerm Call_2 (ATerm, ATerm t_64 (ATerm), ATerm u_64 (ATerm));
ATerm Prim_2 (ATerm, ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Var_1 (ATerm, ATerm l_63 (ATerm));
ATerm Op_2 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm));
ATerm Build_1 (ATerm, ATerm g_65 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm u_81 (ATerm));
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_69 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm u_65 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm y_81 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm u_80 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm w_75 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm b_62 (ATerm), ATerm c_62 (ATerm));
ATerm Row_3 (ATerm, ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm s_60 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_69 (ATerm));
ATerm restore_always_2 (ATerm, ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_69 (ATerm));
ATerm scope_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm zip_1 (ATerm, ATerm p_81 (ATerm));
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
ATerm foldr_3 (ATerm, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm crush_3 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm collect_om_1 (ATerm, ATerm q_78 (ATerm));
ATerm collect_1 (ATerm, ATerm s_78 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm u_77 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_76 (ATerm), ATerm r_76 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm list_1 (ATerm, ATerm u_79 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm h_79 (ATerm), ATerm i_79 (ATerm));
ATerm is_int_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm collect_split_1 (ATerm, ATerm d_79 (ATerm));
ATerm collect_split_2 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm e_89 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm v_81 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_84 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_71 (ATerm));
ATerm downup_1 (ATerm, ATerm i_84 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
ATerm SDef_3 (ATerm, ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm l_64 (ATerm));
ATerm Strategies_1 (ATerm, ATerm z_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm b_63 (ATerm));
ATerm apply_to_bodies_1 (ATerm, ATerm f_89 (ATerm));
ATerm _2 (ATerm, ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_68 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_82 (ATerm), ATerm y_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_68 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_80 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_67 (ATerm));
ATerm map_1 (ATerm, ATerm s_79 (ATerm));
ATerm reverse_1 (ATerm, ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_67 (ATerm));
ATerm Program_1 (ATerm, ATerm h_55 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_55 (ATerm));
ATerm fetch_1 (ATerm, ATerm a_80 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_68 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_83 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_67 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_67 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_67 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_68 (ATerm), ATerm j_68 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_68 (ATerm));
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(((ATgetType(r_3) == AT_LIST) && ((ATermList) r_3 != ATempty)))
    {
      s_3 = ATgetFirst((ATermList) r_3);
      t_3 = (ATerm) ATgetNext((ATermList) r_3);
      t = not_null(s_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, g_88);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
            d_4 = t;
            y_3 :
            if(match_cons(d_4, sym__2))
              {
                e_4 = ATgetArgument(d_4, 0);
                i_4 = ATgetArgument(d_4, 1);
                z_3 :
                if(match_cons(e_4, sym_SDef_3))
                  {
                    f_4 = ATgetArgument(e_4, 0);
                    g_4 = ATgetArgument(e_4, 1);
                    h_4 = ATgetArgument(e_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_4), not_null(g_4), not_null(h_4));
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
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, g_88);
              {
                ATerm q_0 (ATerm t)
                {
                  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
                  m_4 = t;
                  b_4 :
                  if(match_cons(m_4, sym__2))
                    {
                      n_4 = ATgetArgument(m_4, 0);
                      q_4 = ATgetArgument(m_4, 1);
                      c_4 :
                      if(match_cons(n_4, sym_VarDec_2))
                        {
                          o_4 = ATgetArgument(n_4, 0);
                          p_4 = ATgetArgument(n_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_4), not_null(p_4));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, q_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            {
              ATerm r_0 (ATerm t)
              {
                t = g_88(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, r_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym_Rec_2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      {
        ATerm f_5 = NULL;
        t = not_null(b_5);
        {
          ATerm h_5 = NULL;
          t = f_64(t);
          {
            f_5 = t;
            {
              t = not_null(c_5);
              {
                t = g_64(t);
                {
                  h_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(f_5), not_null(h_5));
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
ATerm Let_2 (ATerm t, ATerm h_64 (ATerm), ATerm i_64 (ATerm))
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_Let_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      {
        ATerm v_5 = NULL;
        t = not_null(r_5);
        {
          ATerm x_5 = NULL;
          t = h_64(t);
          {
            v_5 = t;
            {
              t = not_null(s_5);
              {
                t = i_64(t);
                {
                  x_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_5), not_null(x_5));
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
ATerm sboundin_3 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm))
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, h_88, h_88);
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm x_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, j_88, j_88, h_88);
            LocalPopChoice(z_8);
          }
        else
          {
            t = x_8;
            t = Rec_2(t, j_88, h_88);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_Rec_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      t = (ATerm) ATinsert(ATempty, not_null(f_6));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym_SDef_3))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      r_6 = ATgetArgument(o_6, 2);
      {
        t = not_null(q_6);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
            v_6 = t;
            m_6 :
            if(match_cons(v_6, sym_VarDec_2))
              {
                w_6 = ATgetArgument(v_6, 0);
                x_6 = ATgetArgument(v_6, 1);
                t = not_null(w_6);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, s_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_Let_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        t = not_null(g_7);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
            k_7 = t;
            d_7 :
            if(match_cons(k_7, sym_SDef_3))
              {
                l_7 = ATgetArgument(k_7, 0);
                m_7 = ATgetArgument(k_7, 1);
                n_7 = ATgetArgument(k_7, 2);
                t = not_null(l_7);
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
ATerm SVar_1 (ATerm t, ATerm e_64 (ATerm))
{
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_SVar_1))
    {
      x_7 = ATgetArgument(w_7, 0);
      {
        ATerm z_7 = NULL;
        t = not_null(x_7);
        {
          t = e_64(t);
          {
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(z_7));
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
  ATerm u_0 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
          ATerm c_9 = t;
          int d_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(d_9);
            }
          else
            {
              t = c_9;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, u_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm c_88 (ATerm))
{
  t = Scope_2(t, c_88, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm p_62 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_DynamicRules_1))
    {
      h_8 = ATgetArgument(g_8, 0);
      {
        ATerm j_8 = NULL;
        t = not_null(h_8);
        {
          t = p_62(t);
          {
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(j_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_Scope_2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      {
        ATerm w_8 = NULL;
        t = not_null(s_8);
        {
          ATerm y_8 = NULL;
          t = j_65(t);
          {
            w_8 = t;
            {
              t = not_null(t_8);
              {
                t = k_65(t);
                {
                  y_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_8), not_null(y_8));
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
ATerm tboundin_3 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, f_88, d_88);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = DynamicRules_1(t, d_88);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym_DynamicRules_1))
    {
      g_9 = ATgetArgument(f_9, 0);
      {
        t = not_null(g_9);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym_Var_1))
    {
      m_9 = ATgetArgument(l_9, 0);
      t = (ATerm) ATinsert(ATempty, not_null(m_9));
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  s_9 = t;
  q_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      r_9 :
      if(((ATgetType(u_9) == AT_LIST) && ((ATermList) u_9 != ATempty)))
        {
          v_9 = ATgetFirst((ATermList) u_9);
          w_9 = (ATerm) ATgetNext((ATermList) u_9);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_9)), not_null(v_9)), not_null(w_9));
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
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  l_10 = t;
  j_10 :
  if(((ATgetType(l_10) == AT_LIST) && ((ATermList) l_10 != ATempty)))
    {
      m_10 = ATgetFirst((ATermList) l_10);
      p_10 = (ATerm) ATgetNext((ATermList) l_10);
      k_10 :
      if(match_cons(m_10, sym__2))
        {
          n_10 = ATgetArgument(m_10, 0);
          o_10 = ATgetArgument(m_10, 1);
          {
            ATerm t_10 = NULL,u_10 = NULL,a_11 = NULL,g_11 = NULL;
            ATerm j_9;
            j_9 = t;
            {
              ATerm v_10 = NULL;
              ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
              t = not_null(o_10);
              {
                v_10 = t;
                {
                  t = SSL_explode_term(not_null(v_10));
                  {
                    x_10 = t;
                    e_10 :
                    if(match_cons(x_10, sym__2))
                      {
                        y_10 = ATgetArgument(x_10, 0);
                        z_10 = ATgetArgument(x_10, 1);
                        {
                          if(((t_10 != NULL) && (t_10 != y_10)))
                            _fail(y_10);
                          else
                            t_10 = y_10;
                          if(((u_10 != NULL) && (u_10 != z_10)))
                            _fail(z_10);
                          else
                            u_10 = z_10;
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
              ATerm n_9;
              n_9 = t;
              {
                ATerm b_11 = NULL;
                ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
                t = not_null(n_10);
                {
                  b_11 = t;
                  {
                    t = SSL_explode_term(not_null(b_11));
                    {
                      d_11 = t;
                      h_10 :
                      if(match_cons(d_11, sym__2))
                        {
                          e_11 = ATgetArgument(d_11, 0);
                          f_11 = ATgetArgument(d_11, 1);
                          {
                            if(((t_10 != NULL) && (t_10 != e_11)))
                              _fail(e_11);
                            else
                              t_10 = e_11;
                            if(((a_11 != NULL) && (a_11 != f_11)))
                              _fail(f_11);
                            else
                              a_11 = f_11;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = n_9;
              {
                ATerm h_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(u_10));
                {
                  t = zip_1(t, _id);
                  {
                    h_11 = t;
                    if(((g_11 != NULL) && (g_11 != h_11)))
                      _fail(h_11);
                    else
                      g_11 = h_11;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(p_10));
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
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  r_11 = t;
  p_11 :
  if(((ATgetType(r_11) == AT_LIST) && ((ATermList) r_11 != ATempty)))
    {
      s_11 = ATgetFirst((ATermList) r_11);
      v_11 = (ATerm) ATgetNext((ATermList) r_11);
      q_11 :
      if(match_cons(s_11, sym__2))
        {
          t_11 = ATgetArgument(s_11, 0);
          u_11 = ATgetArgument(s_11, 1);
          {
            ATerm x_11 = NULL;
            if(((t_11 != NULL) && (t_11 != u_11)))
              _fail(u_11);
            else
              t_11 = u_11;
            {
              if(((x_11 != NULL) && (x_11 != v_11)))
                _fail(v_11);
              else
                x_11 = v_11;
              t = not_null(x_11);
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
ATerm while_not_2 (ATerm t, ATerm f_72 (ATerm), ATerm g_72 (ATerm))
{
  ATerm z_12 (ATerm t)
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_72(t);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          t = g_72(t);
          t = z_12(t);
        }
      }
    return(t);
  }
  t = z_12(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  t = i_72(t);
  t = while_not_2(t, j_72, k_72);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
      g_14 = t;
      e_14 :
      if(match_cons(g_14, sym__2))
        {
          h_14 = ATgetArgument(g_14, 0);
          i_14 = ATgetArgument(g_14, 1);
          {
            t = not_null(h_14);
            {
              ATerm o_14 (ATerm t)
              {
                ATerm z_9 = t;
                int a_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(a_10);
                  }
                else
                  {
                    t = z_9;
                    {
                      ATerm b_10 = t;
                      int c_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_0 (ATerm t)
                          {
                            t = not_null(i_14);
                            return(t);
                          }
                          t = HdMember_1(t, v_0);
                          t = o_14(t);
                          LocalPopChoice(c_10);
                        }
                      else
                        {
                          t = b_10;
                          t = Cons_2(t, _id, o_14);
                        }
                    }
                  }
                return(t);
              }
              t = o_14(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm l_14 = NULL;
          l_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_14));
          return(t);
        }
        ATerm x_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm y_0 (ATerm t)
        {
          ATerm d_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 (ATerm t)
              {
                ATerm g_10 = t;
                int i_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(i_10);
                  }
                else
                  {
                    t = g_10;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, z_0);
              LocalPopChoice(f_10);
            }
          else
            {
              t = d_10;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, w_0, x_0, y_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm s_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_14 (ATerm t)
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_73(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          ATerm s_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_14 = NULL;
              ATerm c_11;
              c_11 = t;
              {
                ATerm s_14 = NULL;
                t = r_73(t);
                {
                  s_14 = t;
                  if(((r_14 != NULL) && (r_14 != s_14)))
                    _fail(s_14);
                  else
                    r_14 = s_14;
                }
              }
              t = c_11;
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = not_null(r_14);
                    return(t);
                  }
                  t = split_2(t, t_14, c_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = s_73(t, a_1, t_14, b_1);
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, d_1, union_0, _id);
                }
              }
              LocalPopChoice(w_10);
            }
          else
            {
              t = s_10;
              {
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, e_1, union_0, t_14);
              }
            }
        }
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  x_14 :
  if(match_cons(c_15, sym_LRule_1))
    {
      d_15 = ATgetArgument(c_15, 0);
      y_14 :
      if(match_cons(d_15, sym_Rule_3))
        {
          z_14 = ATgetArgument(d_15, 0);
          a_15 = ATgetArgument(d_15, 1);
          b_15 = ATgetArgument(d_15, 2);
          {
            t = not_null(z_14);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(c_15, sym_Scope_2))
        {
          d_15 = ATgetArgument(c_15, 0);
          e_15 = ATgetArgument(c_15, 1);
          t = not_null(d_15);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym__3))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      w_16 = ATgetArgument(t_16, 2);
      {
        t = not_null(u_16);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm a_17 = NULL;
            a_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), not_null(w_16));
              t = j_75(t);
            }
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm c_17 = NULL;
            c_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(v_16));
              t = j_75(t);
            }
            return(t);
          }
          t = k_75(t, g_1, h_1, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm, ATerm (ATerm)))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      {
        ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,b_18 = NULL;
        ATerm k_11;
        k_11 = t;
        {
          ATerm w_17 = NULL;
          t = not_null(p_17);
          {
            ATerm x_17 = NULL;
            t = p_75(t);
            {
              w_17 = t;
              {
                if(((t_17 != NULL) && (t_17 != w_17)))
                  _fail(w_17);
                else
                  t_17 = w_17;
                {
                  ATerm y_17 = NULL,a_18 = NULL;
                  t = map_1(t, new_0);
                  {
                    x_17 = t;
                    {
                      if(((u_17 != NULL) && (u_17 != x_17)))
                        _fail(x_17);
                      else
                        u_17 = x_17;
                      {
                        ATerm z_17 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(u_17));
                        {
                          t = zip_1(t, _id);
                          {
                            z_17 = t;
                            if(((y_17 != NULL) && (y_17 != z_17)))
                              _fail(z_17);
                            else
                              y_17 = z_17;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(q_17));
                          {
                            t = conc_0(t);
                            {
                              a_18 = t;
                              if(((v_17 != NULL) && (v_17 != a_18)))
                                _fail(a_18);
                              else
                                v_17 = a_18;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = k_11;
        {
          ATerm c_18 = NULL;
          t = not_null(p_17);
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(u_17);
              return(t);
            }
            t = q_75(t, i_1);
            {
              c_18 = t;
              if(((b_18 != NULL) && (b_18 != c_18)))
                _fail(c_18);
              else
                b_18 = c_18;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(b_18), not_null(q_17), not_null(v_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  m_18 = t;
  k_18 :
  if(match_cons(m_18, sym__2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      l_18 :
      if(((ATgetType(o_18) == AT_LIST) && ((ATermList) o_18 != ATempty)))
        {
          p_18 = ATgetFirst((ATermList) o_18);
          q_18 = (ATerm) ATgetNext((ATermList) o_18);
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(q_18));
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
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  y_18 = t;
  v_18 :
  if(match_cons(y_18, sym__2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      w_18 :
      if(((ATgetType(a_19) == AT_LIST) && ((ATermList) a_19 != ATempty)))
        {
          b_19 = ATgetFirst((ATermList) a_19);
          e_19 = (ATerm) ATgetNext((ATermList) a_19);
          x_18 :
          if(match_cons(b_19, sym__2))
            {
              c_19 = ATgetArgument(b_19, 0);
              d_19 = ATgetArgument(b_19, 1);
              {
                ATerm g_19 = NULL;
                if(((z_18 != NULL) && (z_18 != c_19)))
                  _fail(c_19);
                else
                  z_18 = c_19;
                {
                  if(((g_19 != NULL) && (g_19 != d_19)))
                    _fail(d_19);
                  else
                    g_19 = d_19;
                  t = not_null(g_19);
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
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm d_75 (ATerm, ATerm (ATerm)))
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        t = not_null(m_19);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(n_19);
              return(t);
            }
            t = split_2(t, _id, k_1);
            t = lookup_0(t);
            return(t);
          }
          t = d_75(t, j_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_74 (ATerm))
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
          ATerm l_1 (ATerm t)
          {
            ATerm a_20 = NULL;
            a_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(x_19));
              t = l_74(t);
            }
            return(t);
          }
          t = _all(t, l_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm e_20 (ATerm t)
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_74(t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = all_dist_1(t, e_20);
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm r_75 (ATerm, ATerm (ATerm)), ATerm s_75 (ATerm), ATerm t_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_75 (ATerm, ATerm (ATerm)))
{
  ATerm g_20 = NULL;
  g_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), (ATerm) ATempty);
    {
      ATerm j_20 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm w_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, r_75);
              LocalPopChoice(y_11);
            }
          else
            {
              t = w_11;
              {
                t = RnBinding_2(t, s_75, u_75);
                t = DistBinding_2(t, j_20, t_75);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_1);
        return(t);
      }
      t = j_20(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm k_20 (ATerm t, ATerm l_20 (ATerm))
  {
    t = Scope_2(t, l_20, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, k_20);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  x_20 :
  if(match_cons(q_21, sym_Seqs_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm t_21 = NULL;
        t = not_null(r_21);
        {
          t = x_60(t);
          {
            t_21 = t;
            t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm t_64 (ATerm), ATerm u_64 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym_Call_2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      {
        ATerm g_22 = NULL;
        t = not_null(c_22);
        {
          ATerm i_22 = NULL;
          t = t_64(t);
          {
            g_22 = t;
            {
              t = not_null(d_22);
              {
                t = u_64(t);
                {
                  i_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(g_22), not_null(i_22));
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
ATerm Prim_2 (ATerm t, ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Prim_2))
    {
      z_22 = ATgetArgument(y_22, 0);
      a_23 = ATgetArgument(y_22, 1);
      {
        ATerm i_23 = NULL;
        t = not_null(z_22);
        {
          ATerm k_23 = NULL;
          t = m_65(t);
          {
            i_23 = t;
            {
              t = not_null(a_23);
              {
                t = n_65(t);
                {
                  k_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(i_23), not_null(k_23));
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
ATerm Str_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym_Str_1))
    {
      v_23 = ATgetArgument(u_23, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_23 = NULL;
            t = not_null(v_23);
            {
              t = p_0(t);
              {
                y_23 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_23));
              }
            }
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm b_24 = NULL;
              t = not_null(v_23);
              {
                t = p_0(t);
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
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_Real_1))
    {
      n_24 = ATgetArgument(m_24, 0);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_24 = NULL;
            t = not_null(n_24);
            {
              t = o_0(t);
              {
                y_24 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(y_24));
              }
            }
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            {
              ATerm b_25 = NULL;
              t = not_null(n_24);
              {
                t = o_0(t);
                {
                  b_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(b_25));
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
ATerm Int_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Int_1))
    {
      i_26 = ATgetArgument(h_26, 0);
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_26 = NULL;
            t = not_null(i_26);
            {
              t = n_0(t);
              {
                k_26 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(k_26));
              }
            }
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm n_26 = NULL;
              t = not_null(i_26);
              {
                t = n_0(t);
                {
                  n_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(n_26));
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
ATerm Var_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  x_26 :
  if(match_cons(d_27, sym_Var_1))
    {
      e_27 = ATgetArgument(d_27, 0);
      {
        ATerm g_27 = NULL;
        t = not_null(e_27);
        {
          t = l_63(t);
          {
            g_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_27));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_Op_2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      {
        ATerm w_27 = NULL;
        t = not_null(s_27);
        {
          ATerm y_27 = NULL;
          t = p_63(t);
          {
            w_27 = t;
            {
              t = not_null(t_27);
              {
                t = q_63(t);
                {
                  y_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(w_27), not_null(y_27));
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
ATerm Build_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Build_1))
    {
      h_28 = ATgetArgument(g_28, 0);
      {
        ATerm j_28 = NULL;
        t = not_null(h_28);
        {
          t = g_65(t);
          {
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_28));
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
  ATerm o_28 = NULL;
  o_28 = t;
  n_28 :
  if(!(match_cons(o_28, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  p_28 :
  if(!(match_cons(q_28, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm j_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = j_12;
                  {
                    ATerm l_12 = t;
                    int m_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          ATerm n_12 = t;
                          int o_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
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
                                    ATerm o_1 (ATerm t)
                                    {
                                      ATerm p_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, p_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, o_1);
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
                                          t = Int_1(t, _id);
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
                                                t = Real_1(t, _id);
                                                LocalPopChoice(u_12);
                                              }
                                            else
                                              {
                                                t = t_12;
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
                        t = Build_1(t, n_1);
                        LocalPopChoice(m_12);
                      }
                    else
                      {
                        t = l_12;
                        {
                          ATerm v_12 = t;
                          int w_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
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
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(y_12);
                                  }
                                else
                                  {
                                    t = x_12;
                                    {
                                      ATerm q_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, q_1);
                                    }
                                  }
                              }
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym_Row_2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_29 = NULL;
            ATerm c_29 = NULL;
            t = not_null(y_28);
            {
              ATerm c_13 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                t = c_13;
              {
                t = new_0(t);
                {
                  c_29 = t;
                  if(((b_29 != NULL) && (b_29 != c_29)))
                    _fail(c_29);
                  else
                    b_29 = c_29;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_29), (ATerm)ATempty, not_null(y_28))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(x_28), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_29)), (ATerm) ATempty)));
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              t = not_null(y_28);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(x_28), not_null(y_28)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm u_81 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, u_81);
  return(t);
}
ATerm MatrixScope_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym_Matrix_2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      {
        ATerm r_29 = NULL,s_29 = NULL;
        ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
        t = not_null(o_29);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              t_29 = t;
              k_29 :
              if(match_cons(t_29, sym__2))
                {
                  u_29 = ATgetArgument(t_29, 0);
                  v_29 = ATgetArgument(t_29, 1);
                  {
                    if(((r_29 != NULL) && (r_29 != u_29)))
                      _fail(u_29);
                    else
                      r_29 = u_29;
                    if(((s_29 != NULL) && (s_29 != v_29)))
                      _fail(v_29);
                    else
                      s_29 = v_29;
                  }
                }
              else
                _fail(t);
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_29), (ATerm) ATmakeAppl(sym_Let_2, not_null(r_29), (ATerm) ATmakeAppl(sym_Seq_2, term_g_13, (ATerm) ATmakeAppl(sym_Matrix_1, not_null(s_29)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_69 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym__2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      {
        ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
        ATerm h_13;
        h_13 = t;
        {
          ATerm l_30 = NULL;
          ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
          t = g_69(t);
          {
            l_30 = t;
            {
              if(((i_30 != NULL) && (i_30 != l_30)))
                _fail(l_30);
              else
                i_30 = l_30;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_30), not_null(e_30), not_null(f_30));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_13 = t;
                    int j_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), term_k_13);
                        t = table_get_0(t);
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = i_13;
                        t = term_l_13;
                      }
                    {
                      m_30 = t;
                      b_30 :
                      if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
                        {
                          n_30 = ATgetFirst((ATermList) m_30);
                          o_30 = (ATerm) ATgetNext((ATermList) m_30);
                          {
                            if(((j_30 != NULL) && (j_30 != n_30)))
                              _fail(n_30);
                            else
                              j_30 = n_30;
                            {
                              if(((k_30 != NULL) && (k_30 != o_30)))
                                _fail(o_30);
                              else
                                k_30 = o_30;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_30), term_k_13, (ATerm) ATinsert(CheckATermList(not_null(k_30)), (ATerm) ATinsert(CheckATermList(not_null(j_30)), not_null(e_30))));
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
        t = h_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WildPat_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  x_30 = t;
  t_30 :
  if(match_cons(x_30, sym_Row_3))
    {
      y_30 = ATgetArgument(x_30, 0);
      d_31 = ATgetArgument(x_30, 1);
      e_31 = ATgetArgument(x_30, 2);
      u_30 :
      if(((ATgetType(y_30) == AT_LIST) && ((ATermList) y_30 != ATempty)))
        {
          z_30 = ATgetFirst((ATermList) y_30);
          c_31 = (ATerm) ATgetNext((ATermList) y_30);
          v_30 :
          if(match_cons(z_30, sym_As_2))
            {
              a_31 = ATgetArgument(z_30, 0);
              b_31 = ATgetArgument(z_30, 1);
              w_30 :
              if(match_cons(b_31, sym_Wld_0))
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(c_31), not_null(d_31), not_null(e_31));
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
  ATerm k_31 = NULL;
  t = filter_1(t, WildPat_0);
  {
    k_31 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(k_31));
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym_Wld_0))
    {
      ATerm v_32 = NULL;
      ATerm c_33 = NULL;
      t = m_0(t);
      {
        ATerm r_1 (ATerm t)
        {
          ATerm z_32 = NULL,a_33 = NULL;
          z_32 = t;
          a_32 :
          if(match_cons(z_32, sym_Var_1))
            {
              a_33 = ATgetArgument(z_32, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(a_33)), term_m_13);
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, r_1);
        {
          c_33 = t;
          if(((v_32 != NULL) && (v_32 != c_33)))
            _fail(c_33);
          else
            v_32 = c_33;
        }
      }
      t = not_null(v_32);
    }
  else
    {
      if(match_cons(s_32, sym_Int_1))
        {
          t_32 = ATgetArgument(s_32, 0);
          {
            ATerm e_33 = NULL,f_33 = NULL;
            t = l_0(t);
            {
              e_33 = t;
              e_32 :
              if(match_cons(e_33, sym_Int_1))
                {
                  f_33 = ATgetArgument(e_33, 0);
                  {
                    ATerm g_33 = NULL;
                    if(((t_32 != NULL) && (t_32 != f_33)))
                      _fail(f_33);
                    else
                      t_32 = f_33;
                    {
                      t = m_0(t);
                      {
                        g_33 = t;
                        d_32 :
                        if(((ATermList) g_33 == ATempty))
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
          if(match_cons(s_32, sym_Real_1))
            {
              t_32 = ATgetArgument(s_32, 0);
              {
                ATerm i_33 = NULL,j_33 = NULL;
                t = l_0(t);
                {
                  i_33 = t;
                  h_32 :
                  if(match_cons(i_33, sym_Real_1))
                    {
                      j_33 = ATgetArgument(i_33, 0);
                      {
                        ATerm k_33 = NULL;
                        if(((t_32 != NULL) && (t_32 != j_33)))
                          _fail(j_33);
                        else
                          t_32 = j_33;
                        {
                          t = m_0(t);
                          {
                            k_33 = t;
                            g_32 :
                            if(((ATermList) k_33 == ATempty))
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
              if(match_cons(s_32, sym_Str_1))
                {
                  t_32 = ATgetArgument(s_32, 0);
                  {
                    ATerm m_33 = NULL,n_33 = NULL;
                    t = l_0(t);
                    {
                      m_33 = t;
                      k_32 :
                      if(match_cons(m_33, sym_Str_1))
                        {
                          n_33 = ATgetArgument(m_33, 0);
                          {
                            ATerm o_33 = NULL;
                            if(((t_32 != NULL) && (t_32 != n_33)))
                              _fail(n_33);
                            else
                              t_32 = n_33;
                            {
                              t = m_0(t);
                              {
                                o_33 = t;
                                j_32 :
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
                  if(match_cons(s_32, sym_Op_2))
                    {
                      t_32 = ATgetArgument(s_32, 0);
                      u_32 = ATgetArgument(s_32, 1);
                      {
                        ATerm r_33 = NULL;
                        ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
                        t = l_0(t);
                        {
                          s_33 = t;
                          q_32 :
                          if(match_cons(s_33, sym_Fun_2))
                            {
                              t_33 = ATgetArgument(s_33, 0);
                              u_33 = ATgetArgument(s_33, 1);
                              {
                                ATerm v_33 = NULL;
                                if(((t_32 != NULL) && (t_32 != t_33)))
                                  _fail(t_33);
                                else
                                  t_32 = t_33;
                                {
                                  if(((r_33 != NULL) && (r_33 != u_33)))
                                    _fail(u_33);
                                  else
                                    r_33 = u_33;
                                  {
                                    ATerm w_33 = NULL;
                                    t = not_null(u_32);
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
                        t = not_null(u_32);
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
ATerm ConsTransition_1 (ATerm t, ATerm u_65 (ATerm))
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
                ATerm n_13;
                n_13 = t;
                {
                  ATerm c_35 = NULL;
                  t = not_null(t_34);
                  {
                    t = u_65(t);
                    {
                      c_35 = t;
                      if(((b_35 != NULL) && (b_35 != c_35)))
                        _fail(c_35);
                      else
                        b_35 = c_35;
                    }
                  }
                }
                t = n_13;
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
              ATerm s_1 (ATerm t)
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = not_null(p_35);
                    return(t);
                  }
                  ATerm v_1 (ATerm t)
                  {
                    t = not_null(q_35);
                    return(t);
                  }
                  t = MatchCons_2(t, u_1, v_1);
                  return(t);
                }
                t = ConsTransition_1(t, t_1);
                return(t);
              }
              t = filter_1(t, s_1);
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
  ATerm o_36 = NULL,p_36 = NULL,t_36 = NULL;
  o_36 = t;
  l_36 :
  if(match_cons(o_36, sym__2))
    {
      p_36 = ATgetArgument(o_36, 0);
      t_36 = ATgetArgument(o_36, 1);
      n_36 :
      if(((ATermList) t_36 == ATempty))
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
ATerm rzip_1 (ATerm t, ATerm y_81 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, y_81);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  y_36 :
  if(((ATgetType(z_36) == AT_LIST) && ((ATermList) z_36 != ATempty)))
    {
      a_37 = ATgetFirst((ATermList) z_36);
      b_37 = (ATerm) ATgetNext((ATermList) z_36);
      {
        ATerm g_37 = NULL;
        ATerm i_37 = NULL;
        t = not_null(b_37);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm o_13 = t;
            if((PushChoice() == 0))
              {
                ATerm h_37 = NULL;
                h_37 = t;
                if(((a_37 != NULL) && (a_37 != h_37)))
                  _fail(h_37);
                else
                  a_37 = h_37;
                PopChoice();
                _fail(t);
              }
            else
              t = o_13;
            return(t);
          }
          t = filter_1(t, w_1);
          {
            i_37 = t;
            if(((g_37 != NULL) && (g_37 != i_37)))
              _fail(i_37);
            else
              g_37 = i_37;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(g_37)), not_null(a_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm m_37 (ATerm t)
  {
    t = u_80(t);
    {
      ATerm p_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(q_13);
        }
      else
        {
          t = p_13;
          t = Cons_2(t, _id, m_37);
        }
    }
    return(t);
  }
  t = m_37(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, x_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm v_37 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
    v_37 = t;
    o_37 :
    if(match_cons(v_37, sym_As_2))
      {
        c_38 = ATgetArgument(v_37, 0);
        e_38 = ATgetArgument(v_37, 1);
        p_37 :
        if(match_cons(c_38, sym_Off_1))
          {
            d_38 = ATgetArgument(c_38, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_38));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, y_1);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = term_d_13;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  t = foldr_3(t, z_1, add_0, a_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  w_38 = t;
  o_38 :
  if(match_cons(w_38, sym_Row_3))
    {
      x_38 = ATgetArgument(w_38, 0);
      e_39 = ATgetArgument(w_38, 1);
      f_39 = ATgetArgument(w_38, 2);
      p_38 :
      if(((ATgetType(x_38) == AT_LIST) && ((ATermList) x_38 != ATempty)))
        {
          y_38 = ATgetFirst((ATermList) x_38);
          d_39 = (ATerm) ATgetNext((ATermList) x_38);
          q_38 :
          if(match_cons(y_38, sym_As_2))
            {
              z_38 = ATgetArgument(y_38, 0);
              a_39 = ATgetArgument(y_38, 1);
              v_38 :
              if(match_cons(a_39, sym_Str_1))
                {
                  b_39 = ATgetArgument(a_39, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(b_39)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(a_39, sym_Real_1))
                    {
                      b_39 = ATgetArgument(a_39, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(b_39)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(a_39, sym_Int_1))
                        {
                          b_39 = ATgetArgument(a_39, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(b_39)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(a_39, sym_Op_2))
                            {
                              b_39 = ATgetArgument(a_39, 0);
                              c_39 = ATgetArgument(a_39, 1);
                              {
                                ATerm l_39 = NULL,n_39 = NULL;
                                ATerm s_13;
                                s_13 = t;
                                {
                                  ATerm m_39 = NULL;
                                  t = not_null(c_39);
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
                                t = s_13;
                                {
                                  ATerm s_39 = NULL;
                                  t = not_null(c_39);
                                  {
                                    t = offsets_0(t);
                                    {
                                      s_39 = t;
                                      if(((n_39 != NULL) && (n_39 != s_39)))
                                        _fail(s_39);
                                      else
                                        n_39 = s_39;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(b_39), not_null(l_39)), not_null(n_39));
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
ATerm filter_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = filter_1(t, w_75);
              return(t);
            }
            t = Cons_2(t, w_75, b_2);
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm b_40 = NULL,c_40 = NULL,f_40 = NULL;
              b_40 = t;
              a_40 :
              if(((ATgetType(b_40) == AT_LIST) && ((ATermList) b_40 != ATempty)))
                {
                  c_40 = ATgetFirst((ATermList) b_40);
                  f_40 = (ATerm) ATgetNext((ATermList) b_40);
                  {
                    t = not_null(f_40);
                    t = filter_1(t, w_75);
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
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_41 (ATerm t)
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2(t, _id, t_41);
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm e_41 = NULL;
                      e_41 = t;
                      m_40 :
                      if(!(match_int(e_41, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm d_2 (ATerm t)
                    {
                      t = (ATerm) ATempty;
                      return(t);
                    }
                    t = Cons_2(t, c_2, d_2);
                  }
                }
              return(t);
            }
            t = t_41(t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = (ATerm) ATempty;
          }
        t = implode_string_0(t);
      }
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
        f_41 = t;
        o_40 :
        if(((ATgetType(f_41) == AT_LIST) && ((ATermList) f_41 != ATempty)))
          {
            g_41 = ATgetFirst((ATermList) f_41);
            r_41 = (ATerm) ATgetNext((ATermList) f_41);
            p_40 :
            if(match_cons(g_41, sym_Row_3))
              {
                h_41 = ATgetArgument(g_41, 0);
                p_41 = ATgetArgument(g_41, 1);
                q_41 = ATgetArgument(g_41, 2);
                q_40 :
                if(((ATgetType(h_41) == AT_LIST) && ((ATermList) h_41 != ATempty)))
                  {
                    i_41 = ATgetFirst((ATermList) h_41);
                    m_41 = (ATerm) ATgetNext((ATermList) h_41);
                    y_40 :
                    if(match_cons(i_41, sym_As_2))
                      {
                        j_41 = ATgetArgument(i_41, 0);
                        l_41 = ATgetArgument(i_41, 1);
                        d_41 :
                        if(match_cons(j_41, sym_Off_1))
                          {
                            k_41 = ATgetArgument(j_41, 0);
                            t = not_null(k_41);
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
  ATerm c_43 = NULL,d_43 = NULL;
  c_43 = t;
  v_42 :
  if(match_cons(c_43, sym_Matrix_1))
    {
      d_43 = ATgetArgument(c_43, 0);
      {
        ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
        ATerm k_43 = NULL;
        t = not_null(d_43);
        {
          ATerm l_43 = NULL;
          t = get_path_0(t);
          {
            k_43 = t;
            {
              if(((f_43 != NULL) && (f_43 != k_43)))
                _fail(k_43);
              else
                f_43 = k_43;
              {
                t = not_null(d_43);
                {
                  ATerm m_43 = NULL;
                  t = outedges_0(t);
                  {
                    l_43 = t;
                    {
                      if(((g_43 != NULL) && (g_43 != l_43)))
                        _fail(l_43);
                      else
                        g_43 = l_43;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_43), not_null(g_43));
                        {
                          ATerm n_43 = NULL;
                          t = transitions_0(t);
                          {
                            m_43 = t;
                            {
                              if(((h_43 != NULL) && (h_43 != m_43)))
                                _fail(m_43);
                              else
                                h_43 = m_43;
                              {
                                t = not_null(d_43);
                                {
                                  ATerm o_43 = NULL;
                                  t = default_state_0(t);
                                  {
                                    n_43 = t;
                                    {
                                      if(((i_43 != NULL) && (i_43 != n_43)))
                                        _fail(n_43);
                                      else
                                        i_43 = n_43;
                                      {
                                        t = new_0(t);
                                        {
                                          o_43 = t;
                                          {
                                            if(((j_43 != NULL) && (j_43 != o_43)))
                                              _fail(o_43);
                                            else
                                              j_43 = o_43;
                                            {
                                              ATerm d_14;
                                              d_14 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_43)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_14, not_null(j_43)));
                                                {
                                                  ATerm e_2 (ATerm t)
                                                  {
                                                    t = term_j_14;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, e_2);
                                                }
                                              }
                                              t = d_14;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(j_43), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_43)), not_null(h_43), not_null(i_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  y_43 = t;
  w_43 :
  if(match_cons(y_43, sym_Row_3))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      d_44 = ATgetArgument(y_43, 2);
      x_43 :
      if(((ATgetType(a_44) == AT_LIST) && ((ATermList) a_44 != ATempty)))
        {
          b_44 = ATgetFirst((ATermList) a_44);
          c_44 = (ATerm) ATgetNext((ATermList) a_44);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(z_43)), not_null(b_44)), not_null(c_44), not_null(d_44));
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
  ATerm m_44 = NULL,n_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_Matrix_1))
    {
      n_44 = ATgetArgument(m_44, 0);
      {
        ATerm p_44 = NULL;
        ATerm q_44 = NULL;
        t = not_null(n_44);
        {
          ATerm k_14 = t;
          if((PushChoice() == 0))
            {
              ATerm f_2 (ATerm t)
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm i_2 (ATerm t)
                    {
                      ATerm m_14 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = m_14;
                      return(t);
                    }
                    t = As_2(t, _id, i_2);
                    return(t);
                  }
                  t = Cons_2(t, h_2, _id);
                  return(t);
                }
                t = Row_3(t, g_2, _id, _id);
                return(t);
              }
              t = map_1(t, f_2);
              PopChoice();
              _fail(t);
            }
          else
            t = k_14;
          {
            t = not_null(n_44);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                q_44 = t;
                if(((p_44 != NULL) && (p_44 != q_44)))
                  _fail(q_44);
                else
                  p_44 = q_44;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(p_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  t_44 :
  if(!(match_cons(u_44, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm b_62 (ATerm), ATerm c_62 (ATerm))
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym_As_2))
    {
      a_45 = ATgetArgument(z_44, 0);
      b_45 = ATgetArgument(z_44, 1);
      {
        ATerm e_45 = NULL;
        t = not_null(a_45);
        {
          ATerm g_45 = NULL;
          t = b_62(t);
          {
            e_45 = t;
            {
              t = not_null(b_45);
              {
                t = c_62(t);
                {
                  g_45 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(e_45), not_null(g_45));
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
ATerm Row_3 (ATerm t, ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm s_60 (ATerm))
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
          ATerm b_46 = NULL;
          t = q_60(t);
          {
            y_45 = t;
            {
              t = not_null(t_45);
              {
                ATerm d_46 = NULL;
                t = r_60(t);
                {
                  b_46 = t;
                  {
                    t = not_null(u_45);
                    {
                      t = s_60(t);
                      {
                        d_46 = t;
                        t = (ATerm) ATmakeAppl(sym_Row_3, not_null(y_45), not_null(b_46), not_null(d_46));
                      }
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
  ATerm d_48 = NULL,e_48 = NULL;
  d_48 = t;
  q_47 :
  if(match_cons(d_48, sym_Matrix_1))
    {
      e_48 = ATgetArgument(d_48, 0);
      {
        ATerm g_48 = NULL;
        ATerm h_48 = NULL;
        t = not_null(e_48);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              ATerm l_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, l_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, k_2, _id);
            return(t);
          }
          t = map_1(t, j_2);
          {
            h_48 = t;
            if(((g_48 != NULL) && (g_48 != h_48)))
              _fail(h_48);
            else
              g_48 = h_48;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_48));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_Matrix_1))
    {
      s_48 = ATgetArgument(r_48, 0);
      {
        ATerm u_48 = NULL;
        ATerm a_49 = NULL;
        t = not_null(s_48);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
            v_48 = t;
            m_48 :
            if(match_cons(v_48, sym_Row_3))
              {
                w_48 = ATgetArgument(v_48, 0);
                x_48 = ATgetArgument(v_48, 1);
                y_48 = ATgetArgument(v_48, 2);
                n_48 :
                if(((ATermList) w_48 == ATempty))
                  {
                    o_48 :
                    if(((ATermList) x_48 == ATempty))
                      {
                        t = not_null(y_48);
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
          t = map_1(t, m_2);
          {
            a_49 = t;
            if(((u_48 != NULL) && (u_48 != a_49)))
              _fail(a_49);
            else
              u_48 = a_49;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_48));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm n_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = n_14;
      {
        ATerm q_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            LocalPopChoice(u_14);
          }
        else
          {
            t = q_14;
            {
              ATerm v_14 = t;
              int w_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  LocalPopChoice(w_14);
                }
              else
                {
                  t = v_14;
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
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  f_49 :
  if(((ATgetType(g_49) == AT_LIST) && ((ATermList) g_49 != ATempty)))
    {
      h_49 = ATgetFirst((ATermList) g_49);
      i_49 = (ATerm) ATgetNext((ATermList) g_49);
      t = not_null(i_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  o_49 :
  if(match_cons(p_49, sym__2))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      {
        ATerm f_15;
        f_15 = t;
        {
          ATerm u_49 = NULL;
          ATerm v_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), not_null(r_49));
          {
            ATerm g_15 = t;
            int h_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(h_15);
              }
            else
              {
                t = g_15;
                t = (ATerm) ATempty;
              }
            {
              v_49 = t;
              if(((u_49 != NULL) && (u_49 != v_49)))
                _fail(v_49);
              else
                u_49 = v_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_49), not_null(r_49), not_null(u_49));
            t = table_put_0(t);
          }
        }
        t = f_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_69 (ATerm))
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  ATerm i_15;
  i_15 = t;
  {
    ATerm f_50 = NULL;
    ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
    t = d_69(t);
    {
      f_50 = t;
      {
        if(((d_50 != NULL) && (d_50 != f_50)))
          _fail(f_50);
        else
          d_50 = f_50;
        {
          ATerm j_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), term_k_13);
              t = table_get_0(t);
              LocalPopChoice(k_15);
            }
          else
            {
              t = j_15;
              t = term_l_13;
            }
          {
            g_50 = t;
            b_50 :
            if(((ATgetType(g_50) == AT_LIST) && ((ATermList) g_50 != ATempty)))
              {
                h_50 = ATgetFirst((ATermList) g_50);
                i_50 = (ATerm) ATgetNext((ATermList) g_50);
                {
                  if(((e_50 != NULL) && (e_50 != h_50)))
                    _fail(h_50);
                  else
                    e_50 = h_50;
                  {
                    if(((c_50 != NULL) && (c_50 != i_50)))
                      _fail(i_50);
                    else
                      c_50 = i_50;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_50), term_k_13, not_null(c_50));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(e_50);
                          {
                            ATerm n_2 (ATerm t)
                            {
                              ATerm j_50 = NULL;
                              j_50 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), not_null(j_50));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_2);
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
  t = i_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_84(t);
      t = d_84(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      {
        t = d_84(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm q_50 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm r_50 = NULL;
    ATerm s_50 = NULL;
    t = c_69(t);
    {
      r_50 = t;
      {
        if(((q_50 != NULL) && (q_50 != r_50)))
          _fail(r_50);
        else
          q_50 = r_50;
        {
          ATerm t_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_50), term_k_13);
          {
            ATerm o_15 = t;
            int p_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_15);
              }
            else
              {
                t = o_15;
                t = (ATerm) ATempty;
              }
            {
              t_50 = t;
              if(((s_50 != NULL) && (s_50 != t_50)))
                _fail(t_50);
              else
                s_50 = t_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_50), term_k_13, (ATerm) ATinsert(CheckATermList(not_null(s_50)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  t = begin_scope_1(t, e_69);
  {
    ATerm o_2 (ATerm t)
    {
      t = end_scope_1(t, e_69);
      return(t);
    }
    t = restore_always_2(t, f_69, o_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_j_14;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm r_2 (ATerm t)
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, r_2);
    t = _all(t, q_2);
    return(t);
  }
  t = scope_2(t, p_2, q_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm d_51 = NULL,s_51 = NULL,t_51 = NULL;
  d_51 = t;
  c_51 :
  if(match_cons(d_51, sym__2))
    {
      s_51 = ATgetArgument(d_51, 0);
      t_51 = ATgetArgument(d_51, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_51)), not_null(s_51));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm x_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
  x_53 = t;
  u_53 :
  if(match_cons(x_53, sym__2))
    {
      a_54 = ATgetArgument(x_53, 0);
      d_54 = ATgetArgument(x_53, 1);
      v_53 :
      if(((ATgetType(a_54) == AT_LIST) && ((ATermList) a_54 != ATempty)))
        {
          b_54 = ATgetFirst((ATermList) a_54);
          c_54 = (ATerm) ATgetNext((ATermList) a_54);
          w_53 :
          if(((ATgetType(d_54) == AT_LIST) && ((ATermList) d_54 != ATempty)))
            {
              e_54 = ATgetFirst((ATermList) d_54);
              f_54 = (ATerm) ATgetNext((ATermList) d_54);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_54), not_null(e_54)), (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(f_54)));
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
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  m_54 :
  if(match_cons(p_54, sym__2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      n_54 :
      if(((ATermList) q_54 == ATempty))
        {
          o_54 :
          if(((ATermList) r_54 == ATempty))
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
ATerm zip_1 (ATerm t, ATerm p_81 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_81);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  g_55 :
  if(match_cons(j_55, sym_Cong_2))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
      {
        ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,m_56 = NULL;
        ATerm u_15;
        u_15 = t;
        {
          ATerm t_55 = NULL;
          t = not_null(l_55);
          {
            ATerm w_55 = NULL;
            t = map_1(t, new_0);
            {
              t_55 = t;
              {
                if(((q_55 != NULL) && (q_55 != t_55)))
                  _fail(t_55);
                else
                  q_55 = t_55;
                {
                  t = not_null(q_55);
                  {
                    ATerm x_55 = NULL;
                    ATerm s_2 (ATerm t)
                    {
                      ATerm u_55 = NULL;
                      ATerm v_55 = NULL;
                      v_55 = t;
                      if(((u_55 != NULL) && (u_55 != v_55)))
                        _fail(v_55);
                      else
                        u_55 = v_55;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_55));
                      return(t);
                    }
                    t = map_1(t, s_2);
                    {
                      w_55 = t;
                      {
                        if(((o_55 != NULL) && (o_55 != w_55)))
                          _fail(w_55);
                        else
                          o_55 = w_55;
                        {
                          t = not_null(l_55);
                          {
                            ATerm a_56 = NULL;
                            t = map_1(t, new_0);
                            {
                              x_55 = t;
                              {
                                if(((r_55 != NULL) && (r_55 != x_55)))
                                  _fail(x_55);
                                else
                                  r_55 = x_55;
                                {
                                  t = not_null(r_55);
                                  {
                                    ATerm b_56 = NULL,l_56 = NULL;
                                    ATerm t_2 (ATerm t)
                                    {
                                      ATerm y_55 = NULL;
                                      ATerm z_55 = NULL;
                                      z_55 = t;
                                      if(((y_55 != NULL) && (y_55 != z_55)))
                                        _fail(z_55);
                                      else
                                        y_55 = z_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_55));
                                      return(t);
                                    }
                                    t = map_1(t, t_2);
                                    {
                                      a_56 = t;
                                      {
                                        if(((p_55 != NULL) && (p_55 != a_56)))
                                          _fail(a_56);
                                        else
                                          p_55 = a_56;
                                        {
                                          ATerm c_56 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(r_55));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              c_56 = t;
                                              if(((b_56 != NULL) && (b_56 != c_56)))
                                                _fail(c_56);
                                              else
                                                b_56 = c_56;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_56), not_null(l_55));
                                            {
                                              ATerm u_2 (ATerm t)
                                              {
                                                ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
                                                d_56 = t;
                                                c_55 :
                                                if(match_cons(d_56, sym__2))
                                                  {
                                                    e_56 = ATgetArgument(d_56, 0);
                                                    h_56 = ATgetArgument(d_56, 1);
                                                    d_55 :
                                                    if(match_cons(e_56, sym__2))
                                                      {
                                                        f_56 = ATgetArgument(e_56, 0);
                                                        g_56 = ATgetArgument(e_56, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_56))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_56), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_56)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, u_2);
                                              {
                                                l_56 = t;
                                                if(((s_55 != NULL) && (s_55 != l_56)))
                                                  _fail(l_56);
                                                else
                                                  s_55 = l_56;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = u_15;
        {
          ATerm n_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(r_55));
          {
            t = conc_0(t);
            {
              n_56 = t;
              if(((m_56 != NULL) && (m_56 != n_56)))
                _fail(n_56);
              else
                m_56 = n_56;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_55), not_null(o_55))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_55)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_55), not_null(p_55))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
  f_57 = t;
  e_57 :
  if(match_cons(f_57, sym_Cong_2))
    {
      g_57 = ATgetArgument(f_57, 0);
      h_57 = ATgetArgument(f_57, 1);
      {
        ATerm k_57 = NULL;
        ATerm o_57 = NULL;
        t = not_null(h_57);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm l_57 = NULL,m_57 = NULL;
            m_57 = t;
            c_57 :
            if(match_cons(m_57, sym_Match_1))
              {
                l_57 = ATgetArgument(m_57, 0);
                t = not_null(l_57);
              }
            else
              {
                if(match_cons(m_57, sym_Id_0))
                  t = term_m_13;
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_2);
          {
            o_57 = t;
            if(((k_57 != NULL) && (k_57 != o_57)))
              _fail(o_57);
            else
              k_57 = o_57;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(g_57), not_null(k_57)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  w_57 = t;
  u_57 :
  if(match_cons(w_57, sym_Scope_2))
    {
      x_57 = ATgetArgument(w_57, 0);
      y_57 = ATgetArgument(w_57, 1);
      v_57 :
      if(((ATermList) x_57 == ATempty))
        {
          t = not_null(y_57);
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
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  h_58 :
  if(match_cons(u_58, sym_Where_1))
    {
      v_58 = ATgetArgument(u_58, 0);
      i_58 :
      if(match_cons(v_58, sym_Seq_2))
        {
          t_58 = ATgetArgument(v_58, 0);
          p_58 = ATgetArgument(v_58, 1);
          j_58 :
          if(match_cons(t_58, sym_Where_1))
            {
              o_58 = ATgetArgument(t_58, 0);
              k_58 :
              if(match_cons(p_58, sym_Seq_2))
                {
                  q_58 = ATgetArgument(p_58, 0);
                  s_58 = ATgetArgument(p_58, 1);
                  l_58 :
                  if(match_cons(q_58, sym_Build_1))
                    {
                      r_58 = ATgetArgument(q_58, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_58), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_58)), not_null(s_58))));
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
          if(match_cons(v_58, sym_Where_1))
            {
              t_58 = ATgetArgument(v_58, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(t_58));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(u_58, sym_Test_1))
        {
          v_58 = ATgetArgument(u_58, 0);
          m_58 :
          if(match_cons(v_58, sym_Test_1))
            {
              t_58 = ATgetArgument(v_58, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(t_58));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(u_58, sym_Not_1))
            {
              v_58 = ATgetArgument(u_58, 0);
              n_58 :
              if(match_cons(v_58, sym_Not_1))
                {
                  t_58 = ATgetArgument(v_58, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(t_58));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(u_58, sym_LChoice_2))
                {
                  v_58 = ATgetArgument(u_58, 0);
                  w_58 = ATgetArgument(u_58, 1);
                  {
                    if(((v_58 != NULL) && (v_58 != w_58)))
                      _fail(w_58);
                    else
                      v_58 = w_58;
                    t = not_null(v_58);
                  }
                }
              else
                {
                  if(match_cons(u_58, sym_Choice_2))
                    {
                      v_58 = ATgetArgument(u_58, 0);
                      w_58 = ATgetArgument(u_58, 1);
                      {
                        if(((v_58 != NULL) && (v_58 != w_58)))
                          _fail(w_58);
                        else
                          v_58 = w_58;
                        t = not_null(v_58);
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
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  s_59 = t;
  o_59 :
  if(match_cons(s_59, sym_LChoice_2))
    {
      t_59 = ATgetArgument(s_59, 0);
      w_59 = ATgetArgument(s_59, 1);
      p_59 :
      if(match_cons(t_59, sym_LChoice_2))
        {
          u_59 = ATgetArgument(t_59, 0);
          v_59 = ATgetArgument(t_59, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_59), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_59), not_null(w_59)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_59, sym_Seq_2))
        {
          t_59 = ATgetArgument(s_59, 0);
          w_59 = ATgetArgument(s_59, 1);
          q_59 :
          if(match_cons(t_59, sym_Seq_2))
            {
              u_59 = ATgetArgument(t_59, 0);
              v_59 = ATgetArgument(t_59, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_59), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_59), not_null(w_59)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(s_59, sym_Choice_2))
            {
              t_59 = ATgetArgument(s_59, 0);
              w_59 = ATgetArgument(s_59, 1);
              r_59 :
              if(match_cons(t_59, sym_Choice_2))
                {
                  u_59 = ATgetArgument(t_59, 0);
                  v_59 = ATgetArgument(t_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_59), (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_59), not_null(w_59)));
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
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL;
  h_61 = t;
  z_60 :
  if(match_cons(h_61, sym_InfixApp_3))
    {
      i_61 = ATgetArgument(h_61, 0);
      e_61 = ATgetArgument(h_61, 1);
      d_61 = ATgetArgument(h_61, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_61), (ATerm) ATmakeAppl(sym_Op_2, term_v_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_61)), not_null(i_61))));
    }
  else
    {
      if(match_cons(h_61, sym_BAM_3))
        {
          i_61 = ATgetArgument(h_61, 0);
          e_61 = ATgetArgument(h_61, 1);
          d_61 = ATgetArgument(h_61, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(d_61))), not_null(i_61)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_61))));
        }
      else
        {
          if(match_cons(h_61, sym_AM_2))
            {
              i_61 = ATgetArgument(h_61, 0);
              e_61 = ATgetArgument(h_61, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_61), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_61)));
            }
          else
            {
              if(match_cons(h_61, sym_MA_2))
                {
                  i_61 = ATgetArgument(h_61, 0);
                  e_61 = ATgetArgument(h_61, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_61)), not_null(e_61));
                }
              else
                {
                  if(match_cons(h_61, sym_BA_2))
                    {
                      i_61 = ATgetArgument(h_61, 0);
                      e_61 = ATgetArgument(h_61, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_61)), not_null(i_61));
                    }
                  else
                    {
                      if(match_cons(h_61, sym_Lets_2))
                        {
                          i_61 = ATgetArgument(h_61, 0);
                          e_61 = ATgetArgument(h_61, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_61), not_null(e_61));
                        }
                      else
                        {
                          if(match_cons(h_61, sym_LChoices_1))
                            {
                              i_61 = ATgetArgument(h_61, 0);
                              a_61 :
                              if(((ATgetType(i_61) == AT_LIST) && ((ATermList) i_61 != ATempty)))
                                {
                                  f_61 = ATgetFirst((ATermList) i_61);
                                  g_61 = (ATerm) ATgetNext((ATermList) i_61);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_61), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_61)));
                                }
                              else
                                {
                                  if(((ATermList) i_61 == ATempty))
                                    {
                                      t = term_w_15;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(h_61, sym_Choices_1))
                                {
                                  i_61 = ATgetArgument(h_61, 0);
                                  b_61 :
                                  if(((ATgetType(i_61) == AT_LIST) && ((ATermList) i_61 != ATempty)))
                                    {
                                      f_61 = ATgetFirst((ATermList) i_61);
                                      g_61 = (ATerm) ATgetNext((ATermList) i_61);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_61), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_61)));
                                    }
                                  else
                                    {
                                      if(((ATermList) i_61 == ATempty))
                                        {
                                          t = term_w_15;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(h_61, sym_Seqs_1))
                                    {
                                      i_61 = ATgetArgument(h_61, 0);
                                      c_61 :
                                      if(((ATgetType(i_61) == AT_LIST) && ((ATermList) i_61 != ATempty)))
                                        {
                                          f_61 = ATgetFirst((ATermList) i_61);
                                          g_61 = (ATerm) ATgetNext((ATermList) i_61);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_61), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_61)));
                                        }
                                      else
                                        {
                                          if(((ATermList) i_61 == ATempty))
                                            {
                                              t = term_x_15;
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
  ATerm v_62 = NULL,w_62 = NULL;
  v_62 = t;
  t_62 :
  if(match_cons(v_62, sym_Where_1))
    {
      w_62 = ATgetArgument(v_62, 0);
      u_62 :
      if(match_cons(w_62, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
  d_63 = t;
  a_63 :
  if(match_cons(d_63, sym_LChoice_2))
    {
      e_63 = ATgetArgument(d_63, 0);
      f_63 = ATgetArgument(d_63, 1);
      c_63 :
      if(match_cons(f_63, sym_Fail_0))
        t = not_null(e_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  j_63 :
  if(match_cons(m_63, sym_LChoice_2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      k_63 :
      if(match_cons(n_63, sym_Fail_0))
        t = not_null(o_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
  w_63 = t;
  u_63 :
  if(match_cons(w_63, sym_Choice_2))
    {
      x_63 = ATgetArgument(w_63, 0);
      y_63 = ATgetArgument(w_63, 1);
      v_63 :
      if(match_cons(y_63, sym_Fail_0))
        t = not_null(x_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL;
  m_64 = t;
  c_64 :
  if(match_cons(m_64, sym_Choice_2))
    {
      n_64 = ATgetArgument(m_64, 0);
      o_64 = ATgetArgument(m_64, 1);
      d_64 :
      if(match_cons(n_64, sym_Fail_0))
        t = not_null(o_64);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
  w_64 = t;
  v_64 :
  if(match_cons(w_64, sym_Cong_2))
    {
      x_64 = ATgetArgument(w_64, 0);
      y_64 = ATgetArgument(w_64, 1);
      {
        t = not_null(y_64);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm b_65 = NULL;
            b_65 = t;
            s_64 :
            if(!(match_cons(b_65, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, w_2);
        }
        t = term_w_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,l_65 = NULL;
  h_65 = t;
  e_65 :
  if(match_cons(h_65, sym_Path_2))
    {
      i_65 = ATgetArgument(h_65, 0);
      l_65 = ATgetArgument(h_65, 1);
      f_65 :
      if(match_cons(l_65, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL;
  y_65 = t;
  w_65 :
  if(match_cons(y_65, sym_One_1))
    {
      z_65 = ATgetArgument(y_65, 0);
      x_65 :
      if(match_cons(z_65, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  e_66 = t;
  c_66 :
  if(match_cons(e_66, sym_Some_1))
    {
      f_66 = ATgetArgument(e_66, 0);
      d_66 :
      if(match_cons(f_66, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
  k_66 = t;
  i_66 :
  if(match_cons(k_66, sym_Rec_2))
    {
      l_66 = ATgetArgument(k_66, 0);
      m_66 = ATgetArgument(k_66, 1);
      j_66 :
      if(match_cons(m_66, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  q_66 :
  if(match_cons(s_66, sym_Scope_2))
    {
      t_66 = ATgetArgument(s_66, 0);
      u_66 = ATgetArgument(s_66, 1);
      r_66 :
      if(match_cons(u_66, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  y_66 :
  if(match_cons(a_67, sym_Seq_2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      z_66 :
      if(match_cons(b_67, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL;
  o_67 = t;
  m_67 :
  if(match_cons(o_67, sym_Not_1))
    {
      p_67 = ATgetArgument(o_67, 0);
      n_67 :
      if(match_cons(p_67, sym_Fail_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  u_67 = t;
  s_67 :
  if(match_cons(u_67, sym_Test_1))
    {
      v_67 = ATgetArgument(u_67, 0);
      t_67 :
      if(match_cons(v_67, sym_Fail_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
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
            t = F2_0(t);
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
                  t = F3_0(t);
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
                        t = F5_0(t);
                        LocalPopChoice(f_16);
                      }
                    else
                      {
                        t = e_16;
                        {
                          ATerm g_16 = t;
                          int h_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(h_16);
                            }
                          else
                            {
                              t = g_16;
                              {
                                ATerm i_16 = t;
                                int j_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(j_16);
                                  }
                                else
                                  {
                                    t = i_16;
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
                                            int n_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(n_16);
                                              }
                                            else
                                              {
                                                t = m_16;
                                                {
                                                  ATerm o_16 = t;
                                                  int p_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
                                                            LocalPopChoice(r_16);
                                                          }
                                                        else
                                                          {
                                                            t = q_16;
                                                            {
                                                              ATerm x_16 = t;
                                                              int y_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(y_16);
                                                                }
                                                              else
                                                                {
                                                                  t = x_16;
                                                                  {
                                                                    ATerm z_16 = t;
                                                                    int b_17 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(b_17);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_16;
                                                                        {
                                                                          ATerm d_17 = t;
                                                                          int e_17 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(e_17);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_17;
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
  ATerm a_68 = NULL,b_68 = NULL;
  a_68 = t;
  y_67 :
  if(match_cons(a_68, sym_Match_1))
    {
      b_68 = ATgetArgument(a_68, 0);
      z_67 :
      if(match_cons(b_68, sym_Wld_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL;
  k_68 = t;
  g_68 :
  if(match_cons(k_68, sym_Where_1))
    {
      l_68 = ATgetArgument(k_68, 0);
      h_68 :
      if(match_cons(l_68, sym_Id_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL;
  t_68 = t;
  r_68 :
  if(match_cons(t_68, sym_All_1))
    {
      u_68 = ATgetArgument(t_68, 0);
      s_68 :
      if(match_cons(u_68, sym_Id_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm b_69 = NULL,h_69 = NULL,i_69 = NULL;
  b_69 = t;
  x_68 :
  if(match_cons(b_69, sym_Rec_2))
    {
      h_69 = ATgetArgument(b_69, 0);
      i_69 = ATgetArgument(b_69, 1);
      a_69 :
      if(match_cons(i_69, sym_Id_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  m_69 :
  if(match_cons(o_69, sym_Scope_2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
      n_69 :
      if(match_cons(q_69, sym_Id_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  w_69 = t;
  u_69 :
  if(match_cons(w_69, sym_LChoice_2))
    {
      x_69 = ATgetArgument(w_69, 0);
      y_69 = ATgetArgument(w_69, 1);
      v_69 :
      if(match_cons(x_69, sym_Id_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL;
  e_70 = t;
  c_70 :
  if(match_cons(e_70, sym_Seq_2))
    {
      f_70 = ATgetArgument(e_70, 0);
      g_70 = ATgetArgument(e_70, 1);
      d_70 :
      if(match_cons(g_70, sym_Id_0))
        t = not_null(f_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  k_70 :
  if(match_cons(m_70, sym_Seq_2))
    {
      n_70 = ATgetArgument(m_70, 0);
      o_70 = ATgetArgument(m_70, 1);
      l_70 :
      if(match_cons(n_70, sym_Id_0))
        t = not_null(o_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL;
  u_70 = t;
  s_70 :
  if(match_cons(u_70, sym_Not_1))
    {
      v_70 = ATgetArgument(u_70, 0);
      t_70 :
      if(match_cons(v_70, sym_Id_0))
        t = term_w_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL;
  a_71 = t;
  y_70 :
  if(match_cons(a_71, sym_Test_1))
    {
      b_71 = ATgetArgument(a_71, 0);
      z_70 :
      if(match_cons(b_71, sym_Id_0))
        t = term_x_15;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
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
            t = I2_0(t);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm j_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = j_17;
                  {
                    ATerm l_17 = t;
                    int m_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(m_17);
                      }
                    else
                      {
                        t = l_17;
                        {
                          ATerm r_17 = t;
                          int s_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(s_17);
                            }
                          else
                            {
                              t = r_17;
                              {
                                ATerm d_18 = t;
                                int e_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(e_18);
                                  }
                                else
                                  {
                                    t = d_18;
                                    {
                                      ATerm f_18 = t;
                                      int g_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(g_18);
                                        }
                                      else
                                        {
                                          t = f_18;
                                          {
                                            ATerm h_18 = t;
                                            int i_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(i_18);
                                              }
                                            else
                                              {
                                                t = h_18;
                                                {
                                                  ATerm j_18 = t;
                                                  int r_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(r_18);
                                                    }
                                                  else
                                                    {
                                                      t = j_18;
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
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm u_18 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = u_18;
            {
              ATerm h_19 = t;
              int i_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(i_19);
                }
              else
                {
                  t = h_19;
                  {
                    ATerm j_19 = t;
                    int o_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(o_19);
                      }
                    else
                      {
                        t = j_19;
                        {
                          ATerm p_19 = t;
                          int q_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(q_19);
                            }
                          else
                            {
                              t = p_19;
                              {
                                ATerm r_19 = t;
                                int s_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(s_19);
                                  }
                                else
                                  {
                                    t = r_19;
                                    {
                                      ATerm t_19 = t;
                                      int y_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(y_19);
                                        }
                                      else
                                        {
                                          t = t_19;
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
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  e_71 :
  if(match_cons(f_71, sym__2))
    {
      g_71 = ATgetArgument(f_71, 0);
      h_71 = ATgetArgument(f_71, 1);
      {
        t = not_null(g_71);
        {
          ATerm x_2 (ATerm t)
          {
            t = not_null(h_71);
            return(t);
          }
          t = at_end_1(t, x_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
  l_73 = t;
  s_72 :
  if(match_cons(l_73, sym_LChoice_2))
    {
      m_73 = ATgetArgument(l_73, 0);
      x_73 = ATgetArgument(l_73, 1);
      t_72 :
      if(match_cons(m_73, sym_Matrix_2))
        {
          n_73 = ATgetArgument(m_73, 0);
          o_73 = ATgetArgument(m_73, 1);
          u_72 :
          if(match_cons(x_73, sym_Choice_2))
            {
              j_73 = ATgetArgument(x_73, 0);
              k_73 = ATgetArgument(x_73, 1);
              v_72 :
              if(match_cons(j_73, sym_Matrix_2))
                {
                  h_73 = ATgetArgument(j_73, 0);
                  i_73 = ATgetArgument(j_73, 1);
                  {
                    ATerm d_74 = NULL,f_74 = NULL;
                    ATerm z_19;
                    z_19 = t;
                    {
                      ATerm e_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(h_73));
                      {
                        t = union_0(t);
                        {
                          e_74 = t;
                          if(((d_74 != NULL) && (d_74 != e_74)))
                            _fail(e_74);
                          else
                            d_74 = e_74;
                        }
                      }
                    }
                    t = z_19;
                    {
                      ATerm g_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), not_null(i_73));
                      {
                        t = conc_0(t);
                        {
                          g_74 = t;
                          if(((f_74 != NULL) && (f_74 != g_74)))
                            _fail(g_74);
                          else
                            f_74 = g_74;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(d_74), not_null(f_74)), not_null(k_73));
                    }
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(x_73, sym_LChoice_2))
                {
                  j_73 = ATgetArgument(x_73, 0);
                  k_73 = ATgetArgument(x_73, 1);
                  w_72 :
                  if(match_cons(j_73, sym_Matrix_2))
                    {
                      h_73 = ATgetArgument(j_73, 0);
                      i_73 = ATgetArgument(j_73, 1);
                      {
                        ATerm n_74 = NULL,p_74 = NULL;
                        ATerm b_20;
                        b_20 = t;
                        {
                          ATerm o_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(h_73));
                          {
                            t = union_0(t);
                            {
                              o_74 = t;
                              if(((n_74 != NULL) && (n_74 != o_74)))
                                _fail(o_74);
                              else
                                n_74 = o_74;
                            }
                          }
                        }
                        t = b_20;
                        {
                          ATerm s_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), not_null(i_73));
                          {
                            t = conc_0(t);
                            {
                              s_74 = t;
                              if(((p_74 != NULL) && (p_74 != s_74)))
                                _fail(s_74);
                              else
                                p_74 = s_74;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(n_74), not_null(p_74)), not_null(k_73));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(x_73, sym_Matrix_2))
                    {
                      j_73 = ATgetArgument(x_73, 0);
                      k_73 = ATgetArgument(x_73, 1);
                      {
                        ATerm x_74 = NULL,z_74 = NULL;
                        ATerm c_20;
                        c_20 = t;
                        {
                          ATerm y_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(j_73));
                          {
                            t = union_0(t);
                            {
                              y_74 = t;
                              if(((x_74 != NULL) && (x_74 != y_74)))
                                _fail(y_74);
                              else
                                x_74 = y_74;
                            }
                          }
                        }
                        t = c_20;
                        {
                          ATerm a_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), not_null(k_73));
                          {
                            t = conc_0(t);
                            {
                              a_75 = t;
                              if(((z_74 != NULL) && (z_74 != a_75)))
                                _fail(a_75);
                              else
                                z_74 = a_75;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(x_74), not_null(z_74));
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
      if(match_cons(l_73, sym_Choice_2))
        {
          m_73 = ATgetArgument(l_73, 0);
          x_73 = ATgetArgument(l_73, 1);
          x_72 :
          if(match_cons(m_73, sym_Matrix_2))
            {
              n_73 = ATgetArgument(m_73, 0);
              o_73 = ATgetArgument(m_73, 1);
              y_72 :
              if(match_cons(x_73, sym_LChoice_2))
                {
                  j_73 = ATgetArgument(x_73, 0);
                  k_73 = ATgetArgument(x_73, 1);
                  a_73 :
                  if(match_cons(j_73, sym_Matrix_2))
                    {
                      h_73 = ATgetArgument(j_73, 0);
                      i_73 = ATgetArgument(j_73, 1);
                      {
                        ATerm h_75 = NULL,l_75 = NULL;
                        ATerm d_20;
                        d_20 = t;
                        {
                          ATerm i_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(h_73));
                          {
                            t = union_0(t);
                            {
                              i_75 = t;
                              if(((h_75 != NULL) && (h_75 != i_75)))
                                _fail(i_75);
                              else
                                h_75 = i_75;
                            }
                          }
                        }
                        t = d_20;
                        {
                          ATerm m_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), not_null(i_73));
                          {
                            t = conc_0(t);
                            {
                              m_75 = t;
                              if(((l_75 != NULL) && (l_75 != m_75)))
                                _fail(m_75);
                              else
                                l_75 = m_75;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(h_75), not_null(l_75)), not_null(k_73));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(x_73, sym_Choice_2))
                    {
                      j_73 = ATgetArgument(x_73, 0);
                      k_73 = ATgetArgument(x_73, 1);
                      b_73 :
                      if(match_cons(j_73, sym_Matrix_2))
                        {
                          h_73 = ATgetArgument(j_73, 0);
                          i_73 = ATgetArgument(j_73, 1);
                          {
                            ATerm a_76 = NULL,c_76 = NULL;
                            ATerm f_20;
                            f_20 = t;
                            {
                              ATerm b_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(h_73));
                              {
                                t = union_0(t);
                                {
                                  b_76 = t;
                                  if(((a_76 != NULL) && (a_76 != b_76)))
                                    _fail(b_76);
                                  else
                                    a_76 = b_76;
                                }
                              }
                            }
                            t = f_20;
                            {
                              ATerm d_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), not_null(i_73));
                              {
                                t = conc_0(t);
                                {
                                  d_76 = t;
                                  if(((c_76 != NULL) && (c_76 != d_76)))
                                    _fail(d_76);
                                  else
                                    c_76 = d_76;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(a_76), not_null(c_76)), not_null(k_73));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(x_73, sym_Matrix_2))
                        {
                          j_73 = ATgetArgument(x_73, 0);
                          k_73 = ATgetArgument(x_73, 1);
                          {
                            ATerm i_76 = NULL,k_76 = NULL;
                            ATerm h_20;
                            h_20 = t;
                            {
                              ATerm j_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), not_null(j_73));
                              {
                                t = union_0(t);
                                {
                                  j_76 = t;
                                  if(((i_76 != NULL) && (i_76 != j_76)))
                                    _fail(j_76);
                                  else
                                    i_76 = j_76;
                                }
                              }
                            }
                            t = h_20;
                            {
                              ATerm l_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_73), not_null(k_73));
                              {
                                t = conc_0(t);
                                {
                                  l_76 = t;
                                  if(((k_76 != NULL) && (k_76 != l_76)))
                                    _fail(l_76);
                                  else
                                    k_76 = l_76;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(i_76), not_null(k_76));
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
          if(match_cons(l_73, sym_Scope_2))
            {
              m_73 = ATgetArgument(l_73, 0);
              x_73 = ATgetArgument(l_73, 1);
              c_73 :
              if(match_cons(x_73, sym_Matrix_2))
                {
                  j_73 = ATgetArgument(x_73, 0);
                  k_73 = ATgetArgument(x_73, 1);
                  {
                    ATerm p_76 = NULL;
                    ATerm a_77 = NULL;
                    t = not_null(k_73);
                    {
                      ATerm y_2 (ATerm t)
                      {
                        ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
                        v_76 = t;
                        q_72 :
                        if(match_cons(v_76, sym_Row_2))
                          {
                            w_76 = ATgetArgument(v_76, 0);
                            x_76 = ATgetArgument(v_76, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(w_76), (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_73), not_null(x_76)));
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = map_1(t, y_2);
                      {
                        a_77 = t;
                        if(((p_76 != NULL) && (p_76 != a_77)))
                          _fail(a_77);
                        else
                          p_76 = a_77;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(j_73), not_null(p_76));
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(l_73, sym_Seq_2))
                {
                  m_73 = ATgetArgument(l_73, 0);
                  x_73 = ATgetArgument(l_73, 1);
                  d_73 :
                  if(match_cons(m_73, sym_Matrix_2))
                    {
                      n_73 = ATgetArgument(m_73, 0);
                      o_73 = ATgetArgument(m_73, 1);
                      e_73 :
                      if(((ATgetType(o_73) == AT_LIST) && ((ATermList) o_73 != ATempty)))
                        {
                          p_73 = ATgetFirst((ATermList) o_73);
                          w_73 = (ATerm) ATgetNext((ATermList) o_73);
                          f_73 :
                          if(match_cons(p_73, sym_Row_2))
                            {
                              u_73 = ATgetArgument(p_73, 0);
                              v_73 = ATgetArgument(p_73, 1);
                              g_73 :
                              if(((ATermList) w_73 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(n_73), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(u_73), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_73), not_null(x_73)))));
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
ATerm foldr_3 (ATerm t, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm i_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_76(t);
      LocalPopChoice(m_20);
    }
  else
    {
      t = i_20;
      {
        ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
        m_78 = t;
        l_78 :
        if(((ATgetType(m_78) == AT_LIST) && ((ATermList) m_78 != ATempty)))
          {
            n_78 = ATgetFirst((ATermList) m_78);
            o_78 = (ATerm) ATgetNext((ATermList) m_78);
            {
              ATerm u_78 = NULL,w_78 = NULL;
              ATerm n_20;
              n_20 = t;
              {
                ATerm v_78 = NULL;
                t = not_null(n_78);
                {
                  t = u_76(t);
                  {
                    v_78 = t;
                    if(((u_78 != NULL) && (u_78 != v_78)))
                      _fail(v_78);
                    else
                      u_78 = v_78;
                  }
                }
              }
              t = n_20;
              {
                ATerm x_78 = NULL;
                t = not_null(o_78);
                {
                  t = foldr_3(t, s_76, t_76, u_76);
                  {
                    x_78 = t;
                    if(((w_78 != NULL) && (w_78 != x_78)))
                      _fail(x_78);
                    else
                      w_78 = x_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_78), not_null(w_78));
                  t = t_76(t);
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
ATerm crush_3 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  ATerm l_79 = NULL;
  ATerm n_79 = NULL;
  l_79 = t;
  {
    ATerm o_79 = NULL;
    ATerm q_79 = NULL,r_79 = NULL,w_79 = NULL;
    t = not_null(l_79);
    {
      o_79 = t;
      {
        t = SSL_explode_term(not_null(o_79));
        {
          q_79 = t;
          k_79 :
          if(match_cons(q_79, sym__2))
            {
              r_79 = ATgetArgument(q_79, 0);
              w_79 = ATgetArgument(q_79, 1);
              if(((n_79 != NULL) && (n_79 != w_79)))
                _fail(w_79);
              else
                n_79 = w_79;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(n_79);
      t = foldr_3(t, f_78, g_78, h_78);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm q_78 (ATerm))
{
  ATerm f_80 (ATerm t)
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_80 = NULL;
        ATerm e_80 = NULL;
        t = q_78(t);
        {
          e_80 = t;
          if(((d_80 != NULL) && (d_80 != e_80)))
            _fail(e_80);
          else
            d_80 = e_80;
        }
        t = (ATerm) ATinsert(ATempty, not_null(d_80));
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          ATerm z_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, z_2, union_0, f_80);
        }
      }
    return(t);
  }
  t = f_80(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm s_78 (ATerm))
{
  t = collect_om_1(t, s_78);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm l_80 = NULL,m_80 = NULL;
    l_80 = t;
    k_80 :
    if(match_cons(l_80, sym_Off_1))
      {
        m_80 = ATgetArgument(l_80, 0);
        t = not_null(m_80);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, a_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,f_81 = NULL;
  a_81 = t;
  r_80 :
  if(match_cons(a_81, sym_As_2))
    {
      b_81 = ATgetArgument(a_81, 0);
      d_81 = ATgetArgument(a_81, 1);
      s_80 :
      if(match_cons(b_81, sym_Var_1))
        {
          c_81 = ATgetArgument(b_81, 0);
          t_80 :
          if(match_cons(d_81, sym_As_2))
            {
              f_81 = ATgetArgument(d_81, 0);
              z_80 = ATgetArgument(d_81, 1);
              w_80 :
              if(match_cons(f_81, sym_Off_1))
                {
                  y_80 = ATgetArgument(f_81, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_81)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_80))));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(b_81, sym_Off_1))
            {
              c_81 = ATgetArgument(b_81, 0);
              x_80 :
              if(match_cons(d_81, sym_Var_1))
                {
                  f_81 = ATgetArgument(d_81, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_81)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_81))));
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
  ATerm w_81 = NULL,x_81 = NULL,z_81 = NULL;
  w_81 = t;
  t_81 :
  if(((ATermList) w_81 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(w_81) == AT_LIST) && ((ATermList) w_81 != ATempty)))
        {
          x_81 = ATgetFirst((ATermList) w_81);
          z_81 = (ATerm) ATgetNext((ATermList) w_81);
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
  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  j_82 = t;
  c_82 :
  if(match_cons(j_82, sym_As_2))
    {
      k_82 = ATgetArgument(j_82, 0);
      m_82 = ATgetArgument(j_82, 1);
      d_82 :
      if(match_cons(k_82, sym_Var_1))
        {
          l_82 = ATgetArgument(k_82, 0);
          e_82 :
          if(match_cons(m_82, sym_As_2))
            {
              n_82 = ATgetArgument(m_82, 0);
              i_82 = ATgetArgument(m_82, 1);
              f_82 :
              if(match_cons(n_82, sym_Off_1))
                {
                  h_82 = ATgetArgument(n_82, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_82)), not_null(i_82));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(k_82, sym_Off_1))
            {
              l_82 = ATgetArgument(k_82, 0);
              g_82 :
              if(match_cons(m_82, sym_Var_1))
                {
                  n_82 = ATgetArgument(m_82, 0);
                  {
                    t = not_null(l_82);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(l_82)), term_m_13);
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
ATerm HdMember_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL;
  a_83 = t;
  z_82 :
  if(((ATgetType(a_83) == AT_LIST) && ((ATermList) a_83 != ATempty)))
    {
      b_83 = ATgetFirst((ATermList) a_83);
      c_83 = (ATerm) ATgetNext((ATermList) a_83);
      {
        t = u_77(t);
        {
          ATerm b_3 (ATerm t)
          {
            ATerm f_83 = NULL;
            f_83 = t;
            if(((b_83 != NULL) && (b_83 != f_83)))
              _fail(f_83);
            else
              b_83 = f_83;
            return(t);
          }
          t = fetch_1(t, b_3);
        }
        t = not_null(c_83);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL;
  k_83 = t;
  j_83 :
  if(match_cons(k_83, sym__2))
    {
      l_83 = ATgetArgument(k_83, 0);
      m_83 = ATgetArgument(k_83, 1);
      {
        t = not_null(l_83);
        {
          ATerm r_83 (ATerm t)
          {
            ATerm q_20 = t;
            int r_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_83);
                LocalPopChoice(r_20);
              }
            else
              {
                t = q_20;
                {
                  ATerm s_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = not_null(m_83);
                        return(t);
                      }
                      t = HdMember_1(t, c_3);
                      t = r_83(t);
                      LocalPopChoice(t_20);
                    }
                  else
                    {
                      t = s_20;
                      t = Cons_2(t, _id, r_83);
                    }
                }
              }
            return(t);
          }
          t = r_83(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_76 (ATerm), ATerm r_76 (ATerm))
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_76(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL;
        v_83 = t;
        u_83 :
        if(((ATgetType(v_83) == AT_LIST) && ((ATermList) v_83 != ATempty)))
          {
            w_83 = ATgetFirst((ATermList) v_83);
            x_83 = (ATerm) ATgetNext((ATermList) v_83);
            {
              ATerm a_84 = NULL;
              ATerm b_84 = NULL;
              t = not_null(x_83);
              {
                t = foldr_2(t, q_76, r_76);
                {
                  b_84 = t;
                  if(((a_84 != NULL) && (a_84 != b_84)))
                    _fail(b_84);
                  else
                    a_84 = b_84;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_83), not_null(a_84));
                t = r_76(t);
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
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_2(t, d_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL;
  o_84 = t;
  l_84 :
  if(match_cons(o_84, sym__2))
    {
      p_84 = ATgetArgument(o_84, 0);
      s_84 = ATgetArgument(o_84, 1);
      m_84 :
      if(match_cons(p_84, sym__2))
        {
          q_84 = ATgetArgument(p_84, 0);
          r_84 = ATgetArgument(p_84, 1);
          n_84 :
          if(match_cons(s_84, sym__2))
            {
              t_84 = ATgetArgument(s_84, 0);
              u_84 = ATgetArgument(s_84, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_84)), not_null(q_84)), (ATerm) ATinsert(CheckATermList(not_null(u_84)), not_null(r_84)));
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
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
  c_85 = t;
  b_85 :
  if(((ATgetType(c_85) == AT_LIST) && ((ATermList) c_85 != ATempty)))
    {
      d_85 = ATgetFirst((ATermList) c_85);
      e_85 = (ATerm) ATgetNext((ATermList) c_85);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_85), not_null(e_85));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm k_85 = NULL;
  k_85 = t;
  j_85 :
  if(((ATermList) k_85 == ATempty))
    {
      t = term_w_20;
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm list_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm m_85 (ATerm t)
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
        t = Cons_2(t, u_79, m_85);
      }
    return(t);
  }
  t = m_85(t);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm h_79 (ATerm), ATerm i_79 (ATerm))
{
  ATerm y_85 = NULL;
  ATerm a_86 = NULL,b_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,t_86 = NULL;
  y_85 = t;
  {
    ATerm a_21;
    a_21 = t;
    {
      ATerm c_86 = NULL;
      ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
      t = not_null(y_85);
      {
        c_86 = t;
        {
          t = SSL_explode_term(not_null(c_86));
          {
            e_86 = t;
            q_85 :
            if(match_cons(e_86, sym__2))
              {
                f_86 = ATgetArgument(e_86, 0);
                g_86 = ATgetArgument(e_86, 1);
                {
                  if(((a_86 != NULL) && (a_86 != f_86)))
                    _fail(f_86);
                  else
                    a_86 = f_86;
                  if(((b_86 != NULL) && (b_86 != g_86)))
                    _fail(g_86);
                  else
                    b_86 = g_86;
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
    t = a_21;
    {
      ATerm b_21;
      b_21 = t;
      {
        ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
        t = not_null(b_86);
        {
          t = list_1(t, h_79);
          {
            t = unzip_0(t);
            {
              l_86 = t;
              v_85 :
              if(match_cons(l_86, sym__2))
                {
                  m_86 = ATgetArgument(l_86, 0);
                  n_86 = ATgetArgument(l_86, 1);
                  {
                    ATerm o_86 = NULL;
                    if(((i_86 != NULL) && (i_86 != m_86)))
                      _fail(m_86);
                    else
                      i_86 = m_86;
                    {
                      if(((h_86 != NULL) && (h_86 != n_86)))
                        _fail(n_86);
                      else
                        h_86 = n_86;
                      {
                        ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
                        t = SSL_mkterm(not_null(a_86), not_null(i_86));
                        {
                          o_86 = t;
                          {
                            t = i_79(t);
                            {
                              q_86 = t;
                              u_85 :
                              if(match_cons(q_86, sym__2))
                                {
                                  r_86 = ATgetArgument(q_86, 0);
                                  s_86 = ATgetArgument(q_86, 1);
                                  {
                                    if(((j_86 != NULL) && (j_86 != r_86)))
                                      _fail(r_86);
                                    else
                                      j_86 = r_86;
                                    if(((k_86 != NULL) && (k_86 != s_86)))
                                      _fail(s_86);
                                    else
                                      k_86 = s_86;
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
      }
      t = b_21;
      {
        ATerm u_86 = NULL,w_86 = NULL;
        ATerm v_86 = NULL;
        t = not_null(h_86);
        {
          t = unions_0(t);
          {
            v_86 = t;
            if(((u_86 != NULL) && (u_86 != v_86)))
              _fail(v_86);
            else
              u_86 = v_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_86), not_null(u_86));
          {
            t = union_0(t);
            {
              w_86 = t;
              if(((t_86 != NULL) && (t_86 != w_86)))
                _fail(w_86);
              else
                t_86 = w_86;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_86), not_null(t_86));
      }
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm g_87 = NULL;
  g_87 = t;
  t = SSL_is_int(not_null(g_87));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_87 = NULL;
  k_87 = t;
  t = SSL_is_string(not_null(k_87));
  return(t);
}
ATerm collect_split_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm n_87 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = is_int_0(t);
          }
        t = d_79(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = CollectSplit_2(t, n_87, d_79);
      }
    return(t);
  }
  t = n_87(t);
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      t = try_1(t, f_79);
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm g_21 = t;
      int h_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_79(t);
          LocalPopChoice(h_21);
        }
      else
        {
          t = g_21;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = split_2(t, f_3, g_3);
    return(t);
  }
  t = collect_split_1(t, e_3);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
  r_87 = t;
  q_87 :
  if(match_cons(r_87, sym__2))
    {
      s_87 = ATgetArgument(r_87, 0);
      t_87 = ATgetArgument(r_87, 1);
      {
        ATerm w_87 = NULL;
        ATerm x_87 = NULL;
        t = e_89(t);
        {
          x_87 = t;
          if(((w_87 != NULL) && (w_87 != x_87)))
            _fail(x_87);
          else
            w_87 = x_87;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(w_87)), not_null(s_87))), not_null(t_87));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
  k_88 = t;
  b_88 :
  if(match_cons(k_88, sym__2))
    {
      l_88 = ATgetArgument(k_88, 0);
      m_88 = ATgetArgument(k_88, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_88)), not_null(l_88));
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
  s_88 = t;
  r_88 :
  if(match_cons(s_88, sym__2))
    {
      t_88 = ATgetArgument(s_88, 0);
      u_88 = ATgetArgument(s_88, 1);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_88), not_null(u_88));
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = SSL_addr(not_null(t_88), not_null(u_88));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
  c_89 = t;
  a_89 :
  if(match_cons(c_89, sym__2))
    {
      d_89 = ATgetArgument(c_89, 0);
      g_89 = ATgetArgument(c_89, 1);
      b_89 :
      if(((ATgetType(g_89) == AT_LIST) && ((ATermList) g_89 != ATempty)))
        {
          h_89 = ATgetFirst((ATermList) g_89);
          i_89 = (ATerm) ATgetNext((ATermList) g_89);
          {
            ATerm m_89 = NULL;
            ATerm n_89 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_89), term_r_13);
            {
              t = add_0(t);
              {
                n_89 = t;
                if(((m_89 != NULL) && (m_89 != n_89)))
                  _fail(n_89);
                else
                  m_89 = n_89;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_89), not_null(h_89)), (ATerm) ATmakeAppl(sym__2, not_null(m_89), not_null(i_89)));
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
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
  t_89 = t;
  r_89 :
  if(match_cons(t_89, sym__2))
    {
      u_89 = ATgetArgument(t_89, 0);
      v_89 = ATgetArgument(t_89, 1);
      s_89 :
      if(((ATermList) v_89 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm m_81 (ATerm), ATerm n_81 (ATerm))
{
  ATerm y_89 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_81(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
          t = l_81(t);
          {
            t = _2(t, n_81, y_89);
            t = m_81(t);
          }
        }
      }
    return(t);
  }
  t = y_89(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm a_90 = NULL;
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, not_null(a_90));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm v_81 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, v_81);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL;
  ATerm f_91 (ATerm t)
  {
    ATerm v_90 = NULL;
    ATerm w_90 = NULL;
    t = not_null(q_90);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = not_null(p_90);
          return(t);
        }
        t = Annotate_1(t, i_3);
        return(t);
      }
      t = nzip0_1(t, h_3);
      {
        w_90 = t;
        if(((v_90 != NULL) && (v_90 != w_90)))
          _fail(w_90);
        else
          v_90 = w_90;
      }
    }
    t = not_null(v_90);
    return(t);
  }
  ATerm g_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), term_m_13);
    return(t);
  }
  ATerm h_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_90)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), not_null(s_90)));
    return(t);
  }
  ATerm i_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_90), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), not_null(s_90))));
    return(t);
  }
  n_90 = t;
  i_90 :
  if(match_cons(n_90, sym_As_2))
    {
      o_90 = ATgetArgument(n_90, 0);
      q_90 = ATgetArgument(n_90, 1);
      j_90 :
      if(match_cons(o_90, sym_Off_1))
        {
          p_90 = ATgetArgument(o_90, 0);
          k_90 :
          if(match_cons(q_90, sym_BuildDefault_1))
            {
              r_90 = ATgetArgument(q_90, 0);
              {
                ATerm m_21 = t;
                int n_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_91(t);
                    LocalPopChoice(n_21);
                  }
                else
                  {
                    t = m_21;
                    t = g_91(t);
                  }
              }
            }
          else
            {
              if(match_cons(q_90, sym_As_2))
                {
                  r_90 = ATgetArgument(q_90, 0);
                  s_90 = ATgetArgument(q_90, 1);
                  l_90 :
                  if(match_cons(r_90, sym_Var_1))
                    {
                      m_90 = ATgetArgument(r_90, 0);
                      {
                        ATerm o_21 = t;
                        int p_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_91(t);
                            LocalPopChoice(p_21);
                          }
                        else
                          {
                            t = o_21;
                            t = h_91(t);
                          }
                      }
                    }
                  else
                    t = f_91(t);
                }
              else
                {
                  if(match_cons(q_90, sym_Op_2))
                    {
                      r_90 = ATgetArgument(q_90, 0);
                      s_90 = ATgetArgument(q_90, 1);
                      {
                        ATerm s_21 = t;
                        int u_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_91(t);
                            LocalPopChoice(u_21);
                          }
                        else
                          {
                            t = s_21;
                            t = i_91(t);
                          }
                      }
                    }
                  else
                    t = f_91(t);
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
ATerm topdown_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm k_91 (ATerm t)
  {
    t = e_84(t);
    t = _all(t, k_91);
    return(t);
  }
  t = k_91(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm p_91 = NULL;
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
  p_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_v_21, (ATerm) ATinsert(ATempty, not_null(p_91)));
    {
      ATerm j_3 (ATerm t)
      {
        t = try_1(t, Propagate_0);
        return(t);
      }
      t = topdown_1(t, j_3);
      {
        t = collect_substitutions_0(t);
        {
          r_91 = t;
          o_91 :
          if(match_cons(r_91, sym__2))
            {
              s_91 = ATgetArgument(r_91, 0);
              t_91 = ATgetArgument(r_91, 1);
              {
                ATerm w_91 = NULL;
                ATerm x_91 = NULL;
                t = not_null(s_91);
                {
                  t = collect_offsets_0(t);
                  {
                    x_91 = t;
                    if(((w_91 != NULL) && (w_91 != x_91)))
                      _fail(x_91);
                    else
                      w_91 = x_91;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(w_91), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(s_91), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_91)))));
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
  ATerm d_92 = NULL,e_92 = NULL;
  d_92 = t;
  c_92 :
  if(match_cons(d_92, sym_Match_1))
    {
      e_92 = ATgetArgument(d_92, 0);
      {
        t = not_null(e_92);
        t = term_to_matrix_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm h_92 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_71(t);
        t = h_92(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = p_71(t);
      }
    return(t);
  }
  t = h_92(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_71 (ATerm))
{
  t = repeat_2(t, r_71, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm i_84 (ATerm))
{
  ATerm i_92 (ATerm t)
  {
    t = i_84(t);
    {
      t = _all(t, i_92);
      t = i_84(t);
    }
    return(t);
  }
  t = i_92(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm y_21 = t;
      int z_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          LocalPopChoice(z_21);
        }
      else
        {
          t = y_21;
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, l_3);
    return(t);
  }
  t = downup_1(t, k_3);
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
ATerm SDef_3 (ATerm t, ATerm j_64 (ATerm), ATerm k_64 (ATerm), ATerm l_64 (ATerm))
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL;
  o_92 = t;
  n_92 :
  if(match_cons(o_92, sym_SDef_3))
    {
      p_92 = ATgetArgument(o_92, 0);
      q_92 = ATgetArgument(o_92, 1);
      r_92 = ATgetArgument(o_92, 2);
      {
        ATerm v_92 = NULL;
        t = not_null(p_92);
        {
          ATerm x_92 = NULL;
          t = j_64(t);
          {
            v_92 = t;
            {
              t = not_null(q_92);
              {
                ATerm z_92 = NULL;
                t = k_64(t);
                {
                  x_92 = t;
                  {
                    t = not_null(r_92);
                    {
                      t = l_64(t);
                      {
                        z_92 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_92), not_null(x_92), not_null(z_92));
                      }
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
ATerm Strategies_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm i_93 = NULL,j_93 = NULL;
  i_93 = t;
  h_93 :
  if(match_cons(i_93, sym_Strategies_1))
    {
      j_93 = ATgetArgument(i_93, 0);
      {
        ATerm l_93 = NULL;
        t = not_null(j_93);
        {
          t = z_62(t);
          {
            l_93 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_93));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm b_63 (ATerm))
{
  ATerm s_93 = NULL,t_93 = NULL;
  s_93 = t;
  r_93 :
  if(match_cons(s_93, sym_Specification_1))
    {
      t_93 = ATgetArgument(s_93, 0);
      {
        ATerm v_93 = NULL;
        t = not_null(t_93);
        {
          t = b_63(t);
          {
            v_93 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(v_93));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          ATerm u_3 (ATerm t)
          {
            t = SDef_3(t, _id, _id, f_89);
            return(t);
          }
          t = map_1(t, u_3);
          return(t);
        }
        t = Strategies_1(t, p_3);
        return(t);
      }
      t = Cons_2(t, o_3, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, n_3);
    return(t);
  }
  t = Specification_1(t, m_3);
  return(t);
}
ATerm _2 (ATerm t, ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL;
  d_94 = t;
  c_94 :
  if(match_cons(d_94, sym__2))
    {
      e_94 = ATgetArgument(d_94, 0);
      f_94 = ATgetArgument(d_94, 1);
      {
        ATerm i_94 = NULL;
        t = not_null(e_94);
        {
          ATerm k_94 = NULL;
          t = y_53(t);
          {
            i_94 = t;
            {
              t = not_null(f_94);
              {
                t = z_53(t);
                {
                  k_94 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_94), not_null(k_94));
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
  ATerm r_94 = NULL;
  ATerm h_22;
  h_22 = t;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm s_94 = NULL,t_94 = NULL;
      s_94 = t;
      q_94 :
      if(match_cons(s_94, sym_Program_1))
        {
          t_94 = ATgetArgument(s_94, 0);
          if(((r_94 != NULL) && (r_94 != t_94)))
            _fail(t_94);
          else
            r_94 = t_94;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, v_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATinsert(CheckATermList(term_m_22), not_null(r_94)), term_k_22));
      {
        t = printnl_0(t);
        {
          t = term_r_13;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_22;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_p_22;
  {
    t = printnl_0(t);
    {
      t = term_r_13;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm q_22 = t;
      if((PushChoice() == 0))
        {
          ATerm a_4 (ATerm t)
          {
            ATerm c_95 = NULL;
            c_95 = t;
            v_94 :
            if(!(match_cons(c_95, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_4);
          PopChoice();
          _fail(t);
        }
      else
        t = q_22;
      return(t);
    }
    t = _2(t, x_3, _id);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm k_4 (ATerm t)
        {
          ATerm d_95 = NULL,e_95 = NULL;
          d_95 = t;
          x_94 :
          if(match_cons(d_95, sym_Runtime_1))
            {
              e_95 = ATgetArgument(d_95, 0);
              if(((b_95 != NULL) && (b_95 != e_95)))
                _fail(e_95);
              else
                b_95 = e_95;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_4);
        return(t);
      }
      t = _2(t, j_4, _id);
      {
        ATerm l_4 (ATerm t)
        {
          ATerm r_4 (ATerm t)
          {
            ATerm f_95 = NULL,g_95 = NULL;
            f_95 = t;
            z_94 :
            if(match_cons(f_95, sym_Program_1))
              {
                g_95 = ATgetArgument(f_95, 0);
                if(((a_95 != NULL) && (a_95 != g_95)))
                  _fail(g_95);
                else
                  a_95 = g_95;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_4);
          return(t);
        }
        t = _2(t, l_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_t_22), not_null(b_95)), term_r_22), not_null(a_95)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, w_3);
  {
    t = term_d_13;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
  l_95 = t;
  k_95 :
  if(match_cons(l_95, sym__2))
    {
      m_95 = ATgetArgument(l_95, 0);
      n_95 = ATgetArgument(l_95, 1);
      t = SSL_WriteToTextFile(not_null(m_95), not_null(n_95));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL;
  t_95 = t;
  s_95 :
  if(match_cons(t_95, sym__2))
    {
      u_95 = ATgetArgument(t_95, 0);
      v_95 = ATgetArgument(t_95, 1);
      t = SSL_WriteToBinaryFile(not_null(u_95), not_null(v_95));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm e_96 = NULL;
  ATerm u_22;
  u_22 = t;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            ATerm f_96 = NULL,g_96 = NULL;
            f_96 = t;
            b_96 :
            if(match_cons(f_96, sym_Output_1))
              {
                g_96 = ATgetArgument(f_96, 0);
                if(((e_96 != NULL) && (e_96 != g_96)))
                  _fail(g_96);
                else
                  e_96 = g_96;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_4);
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          {
            ATerm h_96 = NULL;
            t = term_b_23;
            {
              h_96 = t;
              if(((e_96 != NULL) && (e_96 != h_96)))
                _fail(h_96);
              else
                e_96 = h_96;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_4, _id);
  }
  t = u_22;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm v_4 (ATerm t)
      {
        t = not_null(e_96);
        return(t);
      }
      t = split_2(t, v_4, _id);
      return(t);
    }
    t = _2(t, _id, u_4);
    {
      ATerm c_23 = t;
      int d_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_4 (ATerm t)
          {
            ATerm x_4 (ATerm t)
            {
              ATerm j_96 = NULL;
              j_96 = t;
              d_96 :
              if(!(match_cons(j_96, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, x_4);
            return(t);
          }
          t = _2(t, w_4, WriteToBinaryFile_0);
          LocalPopChoice(d_23);
        }
      else
        {
          t = c_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm p_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
  ATerm e_23;
  e_23 = t;
  t = dtime_0(t);
  t = e_23;
  {
    t = z_68(t);
    {
      ATerm f_23;
      f_23 = t;
      {
        ATerm q_96 = NULL;
        t = dtime_0(t);
        {
          q_96 = t;
          if(((p_96 != NULL) && (p_96 != q_96)))
            _fail(q_96);
          else
            p_96 = q_96;
        }
      }
      t = f_23;
      {
        r_96 = t;
        o_96 :
        if(match_cons(r_96, sym__2))
          {
            s_96 = ATgetArgument(r_96, 0);
            t_96 = ATgetArgument(r_96, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_96)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_96))), not_null(t_96));
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
  ATerm z_96 = NULL;
  z_96 = t;
  t = SSL_ReadFromFile(not_null(z_96));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_82 (ATerm), ATerm y_82 (ATerm))
{
  ATerm e_97 = NULL,g_97 = NULL;
  ATerm g_23;
  g_23 = t;
  {
    ATerm f_97 = NULL;
    t = x_82(t);
    {
      f_97 = t;
      if(((e_97 != NULL) && (e_97 != f_97)))
        _fail(f_97);
      else
        e_97 = f_97;
    }
  }
  t = g_23;
  {
    ATerm h_97 = NULL;
    t = y_82(t);
    {
      h_97 = t;
      if(((g_97 != NULL) && (g_97 != h_97)))
        _fail(h_97);
      else
        g_97 = h_97;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_97), not_null(g_97));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_97 = NULL;
  ATerm h_23;
  h_23 = t;
  {
    ATerm j_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 (ATerm t)
        {
          ATerm o_97 = NULL,p_97 = NULL;
          o_97 = t;
          l_97 :
          if(match_cons(o_97, sym_Input_1))
            {
              p_97 = ATgetArgument(o_97, 0);
              if(((n_97 != NULL) && (n_97 != p_97)))
                _fail(p_97);
              else
                n_97 = p_97;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_4);
        LocalPopChoice(l_23);
      }
    else
      {
        t = j_23;
        {
          ATerm q_97 = NULL;
          t = term_m_23;
          {
            q_97 = t;
            if(((n_97 != NULL) && (n_97 != q_97)))
              _fail(q_97);
            else
              n_97 = q_97;
          }
        }
      }
  }
  t = h_23;
  {
    ATerm d_5 (ATerm t)
    {
      t = not_null(n_97);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_97 = NULL;
  u_97 = t;
  t_97 :
  if(!(match_cons(u_97, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm e_5 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_5);
  t = y_68(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  t = SSL_table_create(not_null(w_97));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm a_98 = NULL;
  a_98 = t;
  {
    ATerm r_23;
    r_23 = t;
    {
      t = term_s_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_23, term_w_23, not_null(a_98));
          t = table_put_0(t);
        }
      }
    }
    t = r_23;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL;
  i_98 = t;
  g_98 :
  if(match_string(i_98, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(i_98) == AT_LIST) && ((ATermList) i_98 != ATempty)))
        {
          j_98 = ATgetFirst((ATermList) i_98);
          k_98 = (ATerm) ATgetNext((ATermList) i_98);
          h_98 :
          if(((ATgetType(k_98) == AT_LIST) && ((ATermList) k_98 != ATempty)))
            {
              l_98 = ATgetFirst((ATermList) k_98);
              m_98 = (ATerm) ATgetNext((ATermList) k_98);
              {
                ATerm q_98 = NULL;
                ATerm x_23;
                x_23 = t;
                {
                  t = not_null(j_98);
                  t = i_0(t);
                }
                t = x_23;
                {
                  ATerm s_98 = NULL;
                  t = not_null(l_98);
                  {
                    t = j_0(t);
                    {
                      s_98 = t;
                      if(((q_98 != NULL) && (q_98 != s_98)))
                        _fail(s_98);
                      else
                        q_98 = s_98;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_98)), not_null(q_98));
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
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm h_99 = NULL;
        h_99 = t;
        w_98 :
        if(!(match_string(h_99, "-S")))
          {
            if(!(match_string(h_99, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = term_c_24;
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = term_d_24;
        return(t);
      }
      t = Option_3(t, g_5, i_5, j_5);
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              ATerm i_99 = NULL;
              i_99 = t;
              x_98 :
              if(!(match_string(i_99, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm l_5 (ATerm t)
            {
              t = term_g_24;
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              t = term_h_24;
              return(t);
            }
            t = Option_3(t, k_5, l_5, m_5);
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            {
              ATerm i_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm k_99 = NULL;
                    k_99 = t;
                    y_98 :
                    if(!(match_string(k_99, "-v")))
                      {
                        if(!(match_string(k_99, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm o_5 (ATerm t)
                  {
                    t = term_k_24;
                    return(t);
                  }
                  ATerm t_5 (ATerm t)
                  {
                    t = term_o_24;
                    return(t);
                  }
                  t = Option_3(t, n_5, o_5, t_5);
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = i_24;
                  {
                    ATerm p_24 = t;
                    int q_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_5 (ATerm t)
                        {
                          ATerm l_99 = NULL;
                          l_99 = t;
                          z_98 :
                          if(!(match_string(l_99, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_5 (ATerm t)
                        {
                          ATerm m_99 = NULL;
                          ATerm n_99 = NULL;
                          n_99 = t;
                          if(((m_99 != NULL) && (m_99 != n_99)))
                            _fail(n_99);
                          else
                            m_99 = n_99;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_99));
                          return(t);
                        }
                        ATerm y_5 (ATerm t)
                        {
                          t = term_r_24;
                          return(t);
                        }
                        t = ArgOption_3(t, u_5, w_5, y_5);
                        LocalPopChoice(q_24);
                      }
                    else
                      {
                        t = p_24;
                        {
                          ATerm s_24 = t;
                          int t_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_5 (ATerm t)
                              {
                                ATerm o_99 = NULL;
                                o_99 = t;
                                b_99 :
                                if(!(match_string(o_99, "-i")))
                                  {
                                    if(!(match_string(o_99, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_6 (ATerm t)
                              {
                                ATerm p_99 = NULL;
                                ATerm q_99 = NULL;
                                q_99 = t;
                                if(((p_99 != NULL) && (p_99 != q_99)))
                                  _fail(q_99);
                                else
                                  p_99 = q_99;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_99));
                                return(t);
                              }
                              ATerm b_6 (ATerm t)
                              {
                                t = term_u_24;
                                return(t);
                              }
                              t = ArgOption_3(t, z_5, a_6, b_6);
                              LocalPopChoice(t_24);
                            }
                          else
                            {
                              t = s_24;
                              {
                                ATerm v_24 = t;
                                int w_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_6 (ATerm t)
                                    {
                                      ATerm r_99 = NULL;
                                      r_99 = t;
                                      d_99 :
                                      if(!(match_string(r_99, "-o")))
                                        {
                                          if(!(match_string(r_99, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_6 (ATerm t)
                                    {
                                      ATerm s_99 = NULL;
                                      ATerm t_99 = NULL;
                                      t_99 = t;
                                      if(((s_99 != NULL) && (s_99 != t_99)))
                                        _fail(t_99);
                                      else
                                        s_99 = t_99;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_99));
                                      return(t);
                                    }
                                    ATerm i_6 (ATerm t)
                                    {
                                      t = term_x_24;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_6, h_6, i_6);
                                    LocalPopChoice(w_24);
                                  }
                                else
                                  {
                                    t = v_24;
                                    {
                                      ATerm z_24 = t;
                                      int a_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_6 (ATerm t)
                                          {
                                            ATerm u_99 = NULL;
                                            u_99 = t;
                                            f_99 :
                                            if(!(match_string(u_99, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_6 (ATerm t)
                                          {
                                            t = term_c_25;
                                            return(t);
                                          }
                                          ATerm l_6 (ATerm t)
                                          {
                                            t = term_d_25;
                                            return(t);
                                          }
                                          t = Option_3(t, j_6, k_6, l_6);
                                          LocalPopChoice(a_25);
                                        }
                                      else
                                        {
                                          t = z_24;
                                          {
                                            ATerm s_6 (ATerm t)
                                            {
                                              ATerm v_99 = NULL;
                                              v_99 = t;
                                              g_99 :
                                              if(!(match_string(v_99, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_6 (ATerm t)
                                            {
                                              t = term_e_25;
                                              return(t);
                                            }
                                            ATerm u_6 (ATerm t)
                                            {
                                              t = term_f_25;
                                              return(t);
                                            }
                                            t = Option_3(t, s_6, t_6, u_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm a_100 = NULL;
  a_100 = t;
  t = SSL_table_destroy(not_null(a_100));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_100 = NULL;
  e_100 = t;
  t = SSL_exit(not_null(e_100));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_100 = NULL;
  i_100 = t;
  t = SSL_implode_string(not_null(i_100));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm l_100 (ATerm t)
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_100);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        {
          t = Nil_0(t);
          t = g_80(t);
        }
      }
    return(t);
  }
  t = l_100(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
        o_100 = t;
        n_100 :
        if(((ATgetType(o_100) == AT_LIST) && ((ATermList) o_100 != ATempty)))
          {
            p_100 = ATgetFirst((ATermList) o_100);
            q_100 = (ATerm) ATgetNext((ATermList) o_100);
            {
              t = not_null(p_100);
              {
                ATerm y_6 (ATerm t)
                {
                  t = not_null(q_100);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_6);
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
  ATerm w_100 = NULL;
  w_100 = t;
  t = SSL_explode_string(not_null(w_100));
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
ATerm long_description_1 (ATerm t, ATerm f_67 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm z_100 (ATerm t)
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = Cons_2(t, s_79, z_100);
      }
    return(t);
  }
  t = z_100(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
  g_101 = t;
  d_101 :
  if(((ATgetType(g_101) == AT_LIST) && ((ATermList) g_101 != ATempty)))
    {
      e_101 = ATgetFirst((ATermList) g_101);
      f_101 = (ATerm) ATgetNext((ATermList) g_101);
      {
        t = not_null(f_101);
        {
          ATerm z_6 (ATerm t)
          {
            ATerm j_101 = NULL;
            ATerm k_101 = NULL;
            t = h_0(t);
            {
              k_101 = t;
              if(((j_101 != NULL) && (j_101 != k_101)))
                _fail(k_101);
              else
                j_101 = k_101;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(j_101)), not_null(e_101));
            return(t);
          }
          t = reverse_1(t, z_6);
        }
      }
    }
  else
    {
      if(((ATermList) g_101 == ATempty))
        {
          {
            t = term_m_25;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, a_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_67 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm r_101 = NULL,s_101 = NULL;
  r_101 = t;
  q_101 :
  if(match_cons(r_101, sym_Program_1))
    {
      s_101 = ATgetArgument(r_101, 0);
      {
        ATerm u_101 = NULL;
        t = not_null(s_101);
        {
          t = h_55(t);
          {
            u_101 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_101));
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
  ATerm c_102 = NULL;
  ATerm b_7 (ATerm t)
  {
    ATerm c_7 (ATerm t)
    {
      ATerm d_102 = NULL;
      d_102 = t;
      if(((c_102 != NULL) && (c_102 != d_102)))
        _fail(d_102);
      else
        c_102 = d_102;
      return(t);
    }
    t = Program_1(t, c_7);
    return(t);
  }
  t = option_defined_1(t, b_7);
  {
    ATerm i_7 (ATerm t)
    {
      ATerm e_102 = NULL;
      ATerm f_102 = NULL;
      t = term_m_25;
      {
        ATerm j_7 (ATerm t)
        {
          t = not_null(c_102);
          return(t);
        }
        t = short_description_1(t, j_7);
        {
          t = concat_strings_0(t);
          {
            f_102 = t;
            if(((e_102 != NULL) && (e_102 != f_102)))
              _fail(f_102);
            else
              e_102 = f_102;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATempty, not_null(e_102)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, i_7);
    {
      t = term_p_25;
      {
        t = printnl_0(t);
        {
          t = term_s_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm g_102 = NULL;
                  g_102 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_102)), term_t_25));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_7);
                {
                  ATerm p_7 (ATerm t)
                  {
                    ATerm i_102 = NULL;
                    ATerm j_102 = NULL;
                    t = term_m_25;
                    {
                      ATerm q_7 (ATerm t)
                      {
                        t = not_null(c_102);
                        return(t);
                      }
                      t = long_description_1(t, q_7);
                      {
                        t = concat_strings_0(t);
                        {
                          j_102 = t;
                          if(((i_102 != NULL) && (i_102 != j_102)))
                            _fail(j_102);
                          else
                            i_102 = j_102;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_102)), term_u_25));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_7);
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
  ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL;
  q_102 = t;
  p_102 :
  if(match_cons(q_102, sym__2))
    {
      r_102 = ATgetArgument(q_102, 0);
      s_102 = ATgetArgument(q_102, 1);
      {
        ATerm v_25;
        v_25 = t;
        t = SSL_printnl(not_null(r_102), not_null(s_102));
        t = v_25;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm z_102 = NULL,a_103 = NULL;
  z_102 = t;
  y_102 :
  if(match_cons(z_102, sym_Undefined_1))
    {
      a_103 = ATgetArgument(z_102, 0);
      {
        ATerm c_103 = NULL;
        t = not_null(a_103);
        {
          t = i_55(t);
          {
            c_103 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_103));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm g_103 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_80, _id);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = Cons_2(t, _id, g_103);
      }
    return(t);
  }
  t = g_103(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_68 (ATerm))
{
  t = fetch_1(t, d_68);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_103 = NULL;
  i_103 = t;
  h_103 :
  if(!(match_cons(i_103, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_83 (ATerm))
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_83(t);
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
  l_103 = t;
  k_103 :
  if(match_cons(l_103, sym__2))
    {
      m_103 = ATgetArgument(l_103, 0);
      n_103 = ATgetArgument(l_103, 1);
      t = SSL_table_get(not_null(m_103), not_null(n_103));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL;
  u_103 = t;
  t_103 :
  if(match_cons(u_103, sym__3))
    {
      v_103 = ATgetArgument(u_103, 0);
      w_103 = ATgetArgument(u_103, 1);
      x_103 = ATgetArgument(u_103, 2);
      {
        ATerm a_26;
        a_26 = t;
        {
          ATerm b_104 = NULL;
          ATerm c_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_103), not_null(w_103));
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
                t = (ATerm) ATempty;
              }
            {
              c_104 = t;
              if(((b_104 != NULL) && (b_104 != c_104)))
                _fail(c_104);
              else
                b_104 = c_104;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_103), not_null(w_103), (ATerm) ATinsert(CheckATermList(not_null(b_104)), not_null(x_103)));
            t = table_put_0(t);
          }
        }
        t = a_26;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_67 (ATerm))
{
  ATerm g_104 = NULL;
  ATerm h_104 = NULL;
  t = term_m_25;
  {
    t = j_67(t);
    {
      h_104 = t;
      if(((g_104 != NULL) && (g_104 != h_104)))
        _fail(h_104);
      else
        g_104 = h_104;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_25, term_r_25, not_null(g_104));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_string(n_104, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(n_104) == AT_LIST) && ((ATermList) n_104 != ATempty)))
        {
          o_104 = ATgetFirst((ATermList) n_104);
          p_104 = (ATerm) ATgetNext((ATermList) n_104);
          {
            ATerm s_104 = NULL;
            ATerm d_26;
            d_26 = t;
            {
              t = not_null(o_104);
              t = a_0(t);
            }
            t = d_26;
            {
              ATerm t_104 = NULL;
              t = term_m_25;
              {
                t = f_0(t);
                {
                  t_104 = t;
                  if(((s_104 != NULL) && (s_104 != t_104)))
                    _fail(t_104);
                  else
                    s_104 = t_104;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_104)), not_null(s_104));
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
  ATerm r_7 (ATerm t)
  {
    ATerm y_104 = NULL;
    y_104 = t;
    x_104 :
    if(!(match_string(y_104, "--help")))
      {
        if(!(match_string(y_104, "-h")))
          {
            if(!(match_string(y_104, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_f_26;
    return(t);
  }
  t = Option_3(t, r_7, s_7, t_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL,d_105 = NULL;
  b_105 = t;
  a_105 :
  if(((ATgetType(b_105) == AT_LIST) && ((ATermList) b_105 != ATempty)))
    {
      c_105 = ATgetFirst((ATermList) b_105);
      d_105 = (ATerm) ATgetNext((ATermList) b_105);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_105)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_105)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL;
  l_105 = t;
  k_105 :
  if(((ATgetType(l_105) == AT_LIST) && ((ATermList) l_105 != ATempty)))
    {
      m_105 = ATgetFirst((ATermList) l_105);
      n_105 = (ATerm) ATgetNext((ATermList) l_105);
      {
        ATerm q_105 = NULL;
        t = not_null(m_105);
        {
          ATerm s_105 = NULL;
          t = o_65(t);
          {
            q_105 = t;
            {
              t = not_null(n_105);
              {
                t = p_65(t);
                {
                  s_105 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_105)), not_null(q_105));
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
  ATerm y_105 = NULL;
  y_105 = t;
  x_105 :
  if(((ATermList) y_105 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_67 (ATerm))
{
  ATerm j_26;
  j_26 = t;
  {
    ATerm u_7 (ATerm t)
    {
      t = term_l_26;
      t = h_67(t);
      return(t);
    }
    t = try_1(t, u_7);
  }
  t = j_26;
  {
    ATerm y_7 (ATerm t)
    {
      ATerm a_106 = NULL;
      a_106 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_106));
      return(t);
    }
    ATerm a_8 (ATerm t)
    {
      ATerm m_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              {
                t = h_67(t);
                t = Cons_2(t, _id, a_8);
              }
            }
          LocalPopChoice(o_26);
        }
      else
        {
          t = m_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_7, a_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
  ATerm r_26;
  r_26 = t;
  {
    ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL;
    j_106 = t;
    f_106 :
    if(match_cons(j_106, sym__3))
      {
        k_106 = ATgetArgument(j_106, 0);
        l_106 = ATgetArgument(j_106, 1);
        m_106 = ATgetArgument(j_106, 2);
        {
          if(((g_106 != NULL) && (g_106 != k_106)))
            _fail(k_106);
          else
            g_106 = k_106;
          {
            if(((h_106 != NULL) && (h_106 != l_106)))
              _fail(l_106);
            else
              h_106 = l_106;
            {
              if(((i_106 != NULL) && (i_106 != m_106)))
                _fail(m_106);
              else
                i_106 = m_106;
              t = SSL_table_put(not_null(g_106), not_null(h_106), not_null(i_106));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = r_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm p_106 = NULL;
  ATerm s_26;
  s_26 = t;
  {
    t = term_t_26;
    t = table_put_0(t);
  }
  t = s_26;
  {
    ATerm b_8 (ATerm t)
    {
      ATerm u_26 = t;
      int v_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_67(t);
          LocalPopChoice(v_26);
        }
      else
        {
          t = u_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_8);
    {
      ATerm c_8 (ATerm t)
      {
        ATerm w_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_26);
          }
        else
          {
            t = w_26;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm e_8 (ATerm t)
                {
                  ATerm q_106 = NULL;
                  q_106 = t;
                  if(((p_106 != NULL) && (p_106 != q_106)))
                    _fail(q_106);
                  else
                    p_106 = q_106;
                  return(t);
                }
                t = Undefined_1(t, e_8);
                return(t);
              }
              t = option_defined_1(t, d_8);
              {
                ATerm z_26;
                z_26 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_106)), term_a_27));
                  t = printnl_0(t);
                }
                t = z_26;
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_13;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_8);
      {
        ATerm b_27;
        b_27 = t;
        {
          t = term_q_25;
          t = table_destroy_0(t);
        }
        t = b_27;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm))
{
  ATerm i_8 (ATerm t)
  {
    ATerm c_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_68(t);
        LocalPopChoice(f_27);
      }
    else
      {
        t = c_27;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_8);
  {
    t = store_options_0(t);
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, p_68);
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          {
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, n_68);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_68 (ATerm), ATerm j_68 (ATerm))
{
  t = iowrap_3(t, i_68, j_68, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_68 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    t = _2(t, _id, f_68);
    return(t);
  }
  t = iowrap_2(t, k_8, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, l_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
