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
ATerm term_z_30;
ATerm term_s_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_c_28;
ATerm term_u_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_a_26;
ATerm term_r_25;
ATerm term_g_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_m_24;
ATerm term_k_23;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_l_16;
ATerm term_c_15;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_h_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_l_11;
void init_constant_terms (void)
{
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_z_28);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__3, term_y_28, term_z_28, (ATerm) ATempty);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm y_111 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_87 (ATerm), ATerm c_87 (ATerm));
ATerm Let_2 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm));
ATerm sboundin_3 (ATerm, ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm a_87 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm u_111 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm i_85 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm tboundin_3 (ATerm, ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm for_3 (ATerm, ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm o_98 (ATerm), ATerm p_98 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm u_98 (ATerm), ATerm v_98 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm i_98 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm q_97 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_97 (ATerm));
ATerm rename_4 (ATerm, ATerm w_98 (ATerm, ATerm (ATerm)), ATerm x_98 (ATerm), ATerm y_98 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_98 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm n_83 (ATerm));
ATerm Call_2 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm));
ATerm Str_1 (ATerm, ATerm r_0 (ATerm));
ATerm Real_1 (ATerm, ATerm q_0 (ATerm));
ATerm Int_1 (ATerm, ATerm p_0 (ATerm));
ATerm Var_1 (ATerm, ATerm e_86 (ATerm));
ATerm list_1 (ATerm, ATerm g_103 (ATerm));
ATerm Build_1 (ATerm, ATerm c_88 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm f_93 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm s_88 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm q_105 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm i_104 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm b_99 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm Row_3 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm c_93 (ATerm));
ATerm restore_always_2 (ATerm, ATerm u_107 (ATerm), ATerm v_107 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_93 (ATerm));
ATerm scope_2 (ATerm, ATerm d_93 (ATerm), ATerm e_93 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
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
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm));
ATerm crush_3 (ATerm, ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm));
ATerm collect_om_1 (ATerm, ATerm z_101 (ATerm));
ATerm collect_1 (ATerm, ATerm b_102 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm a_101 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_99 (ATerm), ATerm w_99 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm m_105 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm t_102 (ATerm), ATerm u_102 (ATerm));
ATerm collect_split_2 (ATerm, ATerm q_102 (ATerm), ATerm r_102 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm w_112 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm n_105 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_107 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_94 (ATerm));
ATerm downup_1 (ATerm, ATerm a_108 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
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
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm v_3 = NULL,z_3 = NULL,a_4 = NULL;
  v_3 = t;
  u_3 :
  if(((ATgetType(v_3) == AT_LIST) && ((ATermList) v_3 != ATempty)))
    {
      z_3 = ATgetFirst((ATermList) v_3);
      a_4 = (ATerm) ATgetNext((ATermList) v_3);
      t = not_null(z_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm y_111 (ATerm))
{
  ATerm v_6 = t;
  int y_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, y_111);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm o_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,h_8 = NULL,i_8 = NULL;
            o_7 = t;
            w_6 :
            if(match_cons(o_7, sym__2))
              {
                z_7 = ATgetArgument(o_7, 0);
                i_8 = ATgetArgument(o_7, 1);
                x_6 :
                if(match_cons(z_7, sym_SDef_3))
                  {
                    a_8 = ATgetArgument(z_7, 0);
                    b_8 = ATgetArgument(z_7, 1);
                    h_8 = ATgetArgument(z_7, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_8), not_null(b_8), not_null(h_8));
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
          t = zip_1(t, e_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
      LocalPopChoice(y_6);
    }
  else
    {
      t = v_6;
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = split_2(t, _id, y_111);
              {
                ATerm g_0 (ATerm t)
                {
                  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL;
                  m_8 = t;
                  m_7 :
                  if(match_cons(m_8, sym__2))
                    {
                      n_8 = ATgetArgument(m_8, 0);
                      q_8 = ATgetArgument(m_8, 1);
                      n_7 :
                      if(match_cons(n_8, sym_VarDec_2))
                        {
                          o_8 = ATgetArgument(n_8, 0);
                          p_8 = ATgetArgument(n_8, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_8), not_null(p_8));
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
                t = zip_1(t, g_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, f_0, _id);
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            {
              ATerm s_0 (ATerm t)
              {
                t = y_111(t);
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
ATerm Rec_2 (ATerm t, ATerm b_87 (ATerm), ATerm c_87 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_Rec_2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        ATerm i_9 = NULL,k_9 = NULL;
        ATerm j_9 = NULL;
        t = SSLgetAnnotations(not_null(c_9));
        {
          j_9 = t;
          if(((i_9 != NULL) && (i_9 != j_9)))
            _fail(j_9);
          else
            i_9 = j_9;
        }
        {
          t = not_null(d_9);
          {
            ATerm m_9 = NULL;
            t = b_87(t);
            {
              k_9 = t;
              {
                t = not_null(e_9);
                {
                  ATerm o_9 = NULL;
                  t = c_87(t);
                  {
                    m_9 = t;
                    {
                      ATerm p_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(k_9), not_null(m_9)), not_null(i_9));
                      {
                        p_9 = t;
                        if(((o_9 != NULL) && (o_9 != p_9)))
                          _fail(p_9);
                        else
                          o_9 = p_9;
                      }
                      t = not_null(o_9);
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
ATerm Let_2 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm))
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  b_10 = t;
  a_10 :
  if(match_cons(b_10, sym_Let_2))
    {
      c_10 = ATgetArgument(b_10, 0);
      d_10 = ATgetArgument(b_10, 1);
      {
        ATerm h_10 = NULL,j_10 = NULL;
        ATerm i_10 = NULL;
        t = SSLgetAnnotations(not_null(b_10));
        {
          i_10 = t;
          if(((h_10 != NULL) && (h_10 != i_10)))
            _fail(i_10);
          else
            h_10 = i_10;
        }
        {
          t = not_null(c_10);
          {
            ATerm l_10 = NULL;
            t = d_87(t);
            {
              j_10 = t;
              {
                t = not_null(d_10);
                {
                  ATerm n_10 = NULL;
                  t = e_87(t);
                  {
                    l_10 = t;
                    {
                      ATerm o_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(j_10), not_null(l_10)), not_null(h_10));
                      {
                        o_10 = t;
                        if(((n_10 != NULL) && (n_10 != o_10)))
                          _fail(o_10);
                        else
                          n_10 = o_10;
                      }
                      t = not_null(n_10);
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
ATerm sboundin_3 (ATerm t, ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm))
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, z_111, z_111);
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
            t = SDef_3(t, b_112, b_112, z_111);
            LocalPopChoice(e_7);
          }
        else
          {
            t = d_7;
            t = Rec_2(t, b_112, z_111);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  v_10 :
  if(match_cons(w_10, sym_Rec_2))
    {
      x_10 = ATgetArgument(w_10, 0);
      y_10 = ATgetArgument(w_10, 1);
      t = (ATerm) ATinsert(ATempty, not_null(x_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym_SDef_3))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      j_11 = ATgetArgument(g_11, 2);
      {
        t = not_null(i_11);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
            n_11 = t;
            e_11 :
            if(match_cons(n_11, sym_VarDec_2))
              {
                o_11 = ATgetArgument(n_11, 0);
                p_11 = ATgetArgument(n_11, 1);
                t = not_null(o_11);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, t_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym_Let_2))
    {
      y_11 = ATgetArgument(x_11, 0);
      z_11 = ATgetArgument(x_11, 1);
      {
        t = not_null(y_11);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
            c_12 = t;
            v_11 :
            if(match_cons(c_12, sym_SDef_3))
              {
                d_12 = ATgetArgument(c_12, 0);
                e_12 = ATgetArgument(c_12, 1);
                f_12 = ATgetArgument(c_12, 2);
                t = not_null(d_12);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm q_12 = NULL,r_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym_SVar_1))
    {
      r_12 = ATgetArgument(q_12, 0);
      {
        ATerm u_12 = NULL,w_12 = NULL;
        ATerm v_12 = NULL;
        t = SSLgetAnnotations(not_null(q_12));
        {
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
        }
        {
          t = not_null(r_12);
          {
            ATerm y_12 = NULL;
            t = a_87(t);
            {
              w_12 = t;
              {
                ATerm z_12 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(w_12)), not_null(u_12));
                {
                  z_12 = t;
                  if(((y_12 != NULL) && (y_12 != z_12)))
                    _fail(z_12);
                  else
                    y_12 = z_12;
                }
                t = not_null(y_12);
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
ATerm srename_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
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
              t = Bind2_0(t);
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, v_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm u_111 (ATerm))
{
  t = Scope_2(t, u_111, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_DynamicRules_1))
    {
      k_13 = ATgetArgument(j_13, 0);
      {
        ATerm n_13 = NULL,p_13 = NULL;
        ATerm o_13 = NULL;
        t = SSLgetAnnotations(not_null(j_13));
        {
          o_13 = t;
          if(((n_13 != NULL) && (n_13 != o_13)))
            _fail(o_13);
          else
            n_13 = o_13;
        }
        {
          t = not_null(k_13);
          {
            ATerm r_13 = NULL;
            t = i_85(t);
            {
              p_13 = t;
              {
                ATerm s_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(p_13)), not_null(n_13));
                {
                  s_13 = t;
                  if(((r_13 != NULL) && (r_13 != s_13)))
                    _fail(s_13);
                  else
                    r_13 = s_13;
                }
                t = not_null(r_13);
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  d_14 = t;
  c_14 :
  if(match_cons(d_14, sym_Scope_2))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      {
        ATerm j_14 = NULL,l_14 = NULL;
        ATerm k_14 = NULL;
        t = SSLgetAnnotations(not_null(d_14));
        {
          k_14 = t;
          if(((j_14 != NULL) && (j_14 != k_14)))
            _fail(k_14);
          else
            j_14 = k_14;
        }
        {
          t = not_null(e_14);
          {
            ATerm n_14 = NULL;
            t = f_88(t);
            {
              l_14 = t;
              {
                t = not_null(f_14);
                {
                  ATerm p_14 = NULL;
                  t = g_88(t);
                  {
                    n_14 = t;
                    {
                      ATerm q_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(l_14), not_null(n_14)), not_null(j_14));
                      {
                        q_14 = t;
                        if(((p_14 != NULL) && (p_14 != q_14)))
                          _fail(q_14);
                        else
                          p_14 = q_14;
                      }
                      t = not_null(p_14);
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
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, x_111, v_111);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = DynamicRules_1(t, v_111);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_DynamicRules_1))
    {
      z_14 = ATgetArgument(y_14, 0);
      {
        t = not_null(z_14);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym_Var_1))
    {
      f_15 = ATgetArgument(e_15, 0);
      t = (ATerm) ATinsert(ATempty, not_null(f_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  l_15 = t;
  j_15 :
  if(match_cons(l_15, sym__2))
    {
      m_15 = ATgetArgument(l_15, 0);
      n_15 = ATgetArgument(l_15, 1);
      k_15 :
      if(((ATgetType(n_15) == AT_LIST) && ((ATermList) n_15 != ATempty)))
        {
          o_15 = ATgetFirst((ATermList) n_15);
          p_15 = (ATerm) ATgetNext((ATermList) n_15);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_15)), not_null(o_15)), not_null(p_15));
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  e_16 = t;
  c_16 :
  if(((ATgetType(e_16) == AT_LIST) && ((ATermList) e_16 != ATempty)))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      i_16 = (ATerm) ATgetNext((ATermList) e_16);
      d_16 :
      if(match_cons(f_16, sym__2))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          {
            ATerm m_16 = NULL,n_16 = NULL,t_16 = NULL,z_16 = NULL;
            ATerm l_7;
            l_7 = t;
            {
              ATerm o_16 = NULL;
              ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
              t = not_null(h_16);
              {
                o_16 = t;
                {
                  t = SSL_explode_term(not_null(o_16));
                  {
                    q_16 = t;
                    x_15 :
                    if(match_cons(q_16, sym__2))
                      {
                        r_16 = ATgetArgument(q_16, 0);
                        s_16 = ATgetArgument(q_16, 1);
                        {
                          if(((m_16 != NULL) && (m_16 != r_16)))
                            _fail(r_16);
                          else
                            m_16 = r_16;
                          if(((n_16 != NULL) && (n_16 != s_16)))
                            _fail(s_16);
                          else
                            n_16 = s_16;
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
            t = l_7;
            {
              ATerm p_7;
              p_7 = t;
              {
                ATerm u_16 = NULL;
                ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
                t = not_null(g_16);
                {
                  u_16 = t;
                  {
                    t = SSL_explode_term(not_null(u_16));
                    {
                      w_16 = t;
                      a_16 :
                      if(match_cons(w_16, sym__2))
                        {
                          x_16 = ATgetArgument(w_16, 0);
                          y_16 = ATgetArgument(w_16, 1);
                          {
                            if(((m_16 != NULL) && (m_16 != x_16)))
                              _fail(x_16);
                            else
                              m_16 = x_16;
                            if(((t_16 != NULL) && (t_16 != y_16)))
                              _fail(y_16);
                            else
                              t_16 = y_16;
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
              t = p_7;
              {
                ATerm a_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), not_null(n_16));
                {
                  t = zip_1(t, _id);
                  {
                    a_17 = t;
                    if(((z_16 != NULL) && (z_16 != a_17)))
                      _fail(a_17);
                    else
                      z_16 = a_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), not_null(i_16));
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  k_17 = t;
  i_17 :
  if(((ATgetType(k_17) == AT_LIST) && ((ATermList) k_17 != ATempty)))
    {
      l_17 = ATgetFirst((ATermList) k_17);
      o_17 = (ATerm) ATgetNext((ATermList) k_17);
      j_17 :
      if(match_cons(l_17, sym__2))
        {
          m_17 = ATgetArgument(l_17, 0);
          n_17 = ATgetArgument(l_17, 1);
          {
            ATerm q_17 = NULL;
            if(((m_17 != NULL) && (m_17 != n_17)))
              _fail(n_17);
            else
              m_17 = n_17;
            {
              if(((q_17 != NULL) && (q_17 != o_17)))
                _fail(o_17);
              else
                q_17 = o_17;
              t = not_null(q_17);
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
  ATerm s_17 (ATerm t)
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_95(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        {
          t = l_95(t);
          t = s_17(t);
        }
      }
    return(t);
  }
  t = s_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm))
{
  t = n_95(t);
  t = while_not_2(t, o_95, p_95);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
      w_17 = t;
      u_17 :
      if(match_cons(w_17, sym__2))
        {
          x_17 = ATgetArgument(w_17, 0);
          y_17 = ATgetArgument(w_17, 1);
          {
            t = not_null(x_17);
            {
              ATerm e_18 (ATerm t)
              {
                ATerm u_7 = t;
                int v_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(v_7);
                  }
                else
                  {
                    t = u_7;
                    {
                      ATerm w_7 = t;
                      int x_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_0 (ATerm t)
                          {
                            t = not_null(y_17);
                            return(t);
                          }
                          t = HdMember_1(t, w_0);
                          t = e_18(t);
                          LocalPopChoice(x_7);
                        }
                      else
                        {
                          t = w_7;
                          t = Cons_2(t, _id, e_18);
                        }
                    }
                  }
                return(t);
              }
              t = e_18(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm x_0 (ATerm t)
        {
          ATerm b_18 = NULL;
          b_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_18));
          return(t);
        }
        ATerm y_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          ATerm y_7 = t;
          int c_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_1 (ATerm t)
              {
                ATerm d_8 = t;
                int e_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(e_8);
                  }
                else
                  {
                    t = d_8;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, a_1);
              LocalPopChoice(c_8);
            }
          else
            {
              t = y_7;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, x_0, y_0, z_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_18 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_96(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm j_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_18 = NULL;
              ATerm l_8;
              l_8 = t;
              {
                ATerm i_18 = NULL;
                t = w_96(t);
                {
                  i_18 = t;
                  if(((h_18 != NULL) && (h_18 != i_18)))
                    _fail(i_18);
                  else
                    h_18 = i_18;
                }
              }
              t = l_8;
              {
                ATerm b_1 (ATerm t)
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = not_null(h_18);
                    return(t);
                  }
                  t = split_2(t, j_18, d_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_96(t, b_1, j_18, c_1);
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, e_1, union_0, _id);
                }
              }
              LocalPopChoice(k_8);
            }
          else
            {
              t = j_8;
              {
                ATerm f_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, f_1, union_0, j_18);
              }
            }
        }
      }
    return(t);
  }
  t = j_18(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, g_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  n_18 :
  if(match_cons(s_18, sym_LRule_1))
    {
      t_18 = ATgetArgument(s_18, 0);
      o_18 :
      if(match_cons(t_18, sym_Rule_3))
        {
          p_18 = ATgetArgument(t_18, 0);
          q_18 = ATgetArgument(t_18, 1);
          r_18 = ATgetArgument(t_18, 2);
          {
            t = not_null(p_18);
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
      if(match_cons(s_18, sym_Scope_2))
        {
          t_18 = ATgetArgument(s_18, 0);
          u_18 = ATgetArgument(s_18, 1);
          t = not_null(t_18);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm o_98 (ATerm), ATerm p_98 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym__3))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      j_19 = ATgetArgument(g_19, 2);
      {
        t = not_null(h_19);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm n_19 = NULL;
            n_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(j_19));
              t = o_98(t);
            }
            return(t);
          }
          ATerm i_1 (ATerm t)
          {
            ATerm p_19 = NULL;
            p_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), not_null(i_19));
              t = o_98(t);
            }
            return(t);
          }
          t = p_98(t, h_1, i_1, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm u_98 (ATerm), ATerm v_98 (ATerm, ATerm (ATerm)))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym__2))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      {
        ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,o_20 = NULL;
        ATerm t_8;
        t_8 = t;
        {
          ATerm j_20 = NULL;
          t = not_null(c_20);
          {
            ATerm k_20 = NULL;
            t = u_98(t);
            {
              j_20 = t;
              {
                if(((g_20 != NULL) && (g_20 != j_20)))
                  _fail(j_20);
                else
                  g_20 = j_20;
                {
                  ATerm l_20 = NULL,n_20 = NULL;
                  t = map_1(t, new_0);
                  {
                    k_20 = t;
                    {
                      if(((h_20 != NULL) && (h_20 != k_20)))
                        _fail(k_20);
                      else
                        h_20 = k_20;
                      {
                        ATerm m_20 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(h_20));
                        {
                          t = zip_1(t, _id);
                          {
                            m_20 = t;
                            if(((l_20 != NULL) && (l_20 != m_20)))
                              _fail(m_20);
                            else
                              l_20 = m_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(d_20));
                          {
                            t = conc_0(t);
                            {
                              n_20 = t;
                              if(((i_20 != NULL) && (i_20 != n_20)))
                                _fail(n_20);
                              else
                                i_20 = n_20;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_8;
        {
          ATerm p_20 = NULL;
          t = not_null(c_20);
          {
            ATerm j_1 (ATerm t)
            {
              t = not_null(h_20);
              return(t);
            }
            t = v_98(t, j_1);
            {
              p_20 = t;
              if(((o_20 != NULL) && (o_20 != p_20)))
                _fail(p_20);
              else
                o_20 = p_20;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(o_20), not_null(d_20), not_null(i_20));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  z_20 = t;
  x_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      y_20 :
      if(((ATgetType(b_21) == AT_LIST) && ((ATermList) b_21 != ATempty)))
        {
          c_21 = ATgetFirst((ATermList) b_21);
          d_21 = (ATerm) ATgetNext((ATermList) b_21);
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), not_null(d_21));
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  l_21 = t;
  i_21 :
  if(match_cons(l_21, sym__2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      j_21 :
      if(((ATgetType(n_21) == AT_LIST) && ((ATermList) n_21 != ATempty)))
        {
          o_21 = ATgetFirst((ATermList) n_21);
          r_21 = (ATerm) ATgetNext((ATermList) n_21);
          k_21 :
          if(match_cons(o_21, sym__2))
            {
              p_21 = ATgetArgument(o_21, 0);
              q_21 = ATgetArgument(o_21, 1);
              {
                ATerm t_21 = NULL;
                if(((m_21 != NULL) && (m_21 != p_21)))
                  _fail(p_21);
                else
                  m_21 = p_21;
                {
                  if(((t_21 != NULL) && (t_21 != q_21)))
                    _fail(q_21);
                  else
                    t_21 = q_21;
                  t = not_null(t_21);
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm i_98 (ATerm, ATerm (ATerm)))
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  x_21 :
  if(match_cons(y_21, sym__2))
    {
      z_21 = ATgetArgument(y_21, 0);
      a_22 = ATgetArgument(y_21, 1);
      {
        t = not_null(z_21);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_1 (ATerm t)
            {
              t = not_null(a_22);
              return(t);
            }
            t = split_2(t, _id, l_1);
            t = lookup_0(t);
            return(t);
          }
          t = i_98(t, k_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym__2))
    {
      i_22 = ATgetArgument(h_22, 0);
      j_22 = ATgetArgument(h_22, 1);
      {
        t = not_null(i_22);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm m_22 = NULL;
            m_22 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), not_null(j_22));
              t = q_97(t);
            }
            return(t);
          }
          t = _all(t, m_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm v_97 (ATerm))
{
  ATerm q_22 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_97(t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = all_dist_1(t, q_22);
      }
    return(t);
  }
  t = q_22(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm w_98 (ATerm, ATerm (ATerm)), ATerm x_98 (ATerm), ATerm y_98 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm z_98 (ATerm, ATerm (ATerm)))
{
  ATerm s_22 = NULL;
  s_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), (ATerm) ATempty);
    {
      ATerm v_22 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          ATerm y_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, w_98);
              LocalPopChoice(z_8);
            }
          else
            {
              t = y_8;
              {
                t = RnBinding_2(t, x_98, z_98);
                t = DistBinding_2(t, v_22, y_98);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, n_1);
        return(t);
      }
      t = v_22(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm w_22 (ATerm t, ATerm x_22 (ATerm))
  {
    t = Scope_2(t, x_22, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, w_22);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm d_23 = NULL,e_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym_Seqs_1))
    {
      e_23 = ATgetArgument(d_23, 0);
      {
        ATerm h_23 = NULL,j_23 = NULL;
        ATerm i_23 = NULL;
        t = SSLgetAnnotations(not_null(d_23));
        {
          i_23 = t;
          if(((h_23 != NULL) && (h_23 != i_23)))
            _fail(i_23);
          else
            h_23 = i_23;
        }
        {
          t = not_null(e_23);
          {
            ATerm l_23 = NULL;
            t = n_83(t);
            {
              j_23 = t;
              {
                ATerm m_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, not_null(j_23)), not_null(h_23));
                {
                  m_23 = t;
                  if(((l_23 != NULL) && (l_23 != m_23)))
                    _fail(m_23);
                  else
                    l_23 = m_23;
                }
                t = not_null(l_23);
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
ATerm Call_2 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm))
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_Call_2))
    {
      y_23 = ATgetArgument(x_23, 0);
      z_23 = ATgetArgument(x_23, 1);
      {
        ATerm d_24 = NULL,f_24 = NULL;
        ATerm e_24 = NULL;
        t = SSLgetAnnotations(not_null(x_23));
        {
          e_24 = t;
          if(((d_24 != NULL) && (d_24 != e_24)))
            _fail(e_24);
          else
            d_24 = e_24;
        }
        {
          t = not_null(y_23);
          {
            ATerm h_24 = NULL;
            t = p_87(t);
            {
              f_24 = t;
              {
                t = not_null(z_23);
                {
                  ATerm j_24 = NULL;
                  t = q_87(t);
                  {
                    h_24 = t;
                    {
                      ATerm k_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(f_24), not_null(h_24)), not_null(d_24));
                      {
                        k_24 = t;
                        if(((j_24 != NULL) && (j_24 != k_24)))
                          _fail(k_24);
                        else
                          j_24 = k_24;
                      }
                      t = not_null(j_24);
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
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  y_24 :
  if(match_cons(z_24, sym_Str_1))
    {
      a_25 = ATgetArgument(z_24, 0);
      {
        ATerm a_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_25 = NULL,f_25 = NULL;
            ATerm e_25 = NULL;
            t = SSLgetAnnotations(not_null(z_24));
            {
              e_25 = t;
              if(((d_25 != NULL) && (d_25 != e_25)))
                _fail(e_25);
              else
                d_25 = e_25;
            }
            {
              t = not_null(a_25);
              {
                ATerm h_25 = NULL;
                t = r_0(t);
                {
                  f_25 = t;
                  {
                    ATerm i_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_25)), not_null(d_25));
                    {
                      i_25 = t;
                      if(((h_25 != NULL) && (h_25 != i_25)))
                        _fail(i_25);
                      else
                        h_25 = i_25;
                    }
                    t = not_null(h_25);
                  }
                }
              }
            }
            LocalPopChoice(f_9);
          }
        else
          {
            t = a_9;
            {
              ATerm l_25 = NULL,n_25 = NULL;
              ATerm m_25 = NULL;
              t = SSLgetAnnotations(not_null(z_24));
              {
                m_25 = t;
                if(((l_25 != NULL) && (l_25 != m_25)))
                  _fail(m_25);
                else
                  l_25 = m_25;
              }
              {
                t = not_null(a_25);
                {
                  ATerm p_25 = NULL;
                  t = r_0(t);
                  {
                    n_25 = t;
                    {
                      ATerm q_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(n_25)), not_null(l_25));
                      {
                        q_25 = t;
                        if(((p_25 != NULL) && (p_25 != q_25)))
                          _fail(q_25);
                        else
                          p_25 = q_25;
                      }
                      t = not_null(p_25);
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
ATerm Real_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm i_26 = NULL,j_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym_Real_1))
    {
      j_26 = ATgetArgument(i_26, 0);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_26 = NULL,o_26 = NULL;
            ATerm n_26 = NULL;
            t = SSLgetAnnotations(not_null(i_26));
            {
              n_26 = t;
              if(((m_26 != NULL) && (m_26 != n_26)))
                _fail(n_26);
              else
                m_26 = n_26;
            }
            {
              t = not_null(j_26);
              {
                ATerm q_26 = NULL;
                t = q_0(t);
                {
                  o_26 = t;
                  {
                    ATerm r_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(o_26)), not_null(m_26));
                    {
                      r_26 = t;
                      if(((q_26 != NULL) && (q_26 != r_26)))
                        _fail(r_26);
                      else
                        q_26 = r_26;
                    }
                    t = not_null(q_26);
                  }
                }
              }
            }
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm u_26 = NULL,w_26 = NULL;
              ATerm v_26 = NULL;
              t = SSLgetAnnotations(not_null(i_26));
              {
                v_26 = t;
                if(((u_26 != NULL) && (u_26 != v_26)))
                  _fail(v_26);
                else
                  u_26 = v_26;
              }
              {
                t = not_null(j_26);
                {
                  ATerm y_26 = NULL;
                  t = q_0(t);
                  {
                    w_26 = t;
                    {
                      ATerm z_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(w_26)), not_null(u_26));
                      {
                        z_26 = t;
                        if(((y_26 != NULL) && (y_26 != z_26)))
                          _fail(z_26);
                        else
                          y_26 = z_26;
                      }
                      t = not_null(y_26);
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
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_Int_1))
    {
      s_27 = ATgetArgument(r_27, 0);
      {
        ATerm l_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_27 = NULL,x_27 = NULL;
            ATerm w_27 = NULL;
            t = SSLgetAnnotations(not_null(r_27));
            {
              w_27 = t;
              if(((v_27 != NULL) && (v_27 != w_27)))
                _fail(w_27);
              else
                v_27 = w_27;
            }
            {
              t = not_null(s_27);
              {
                ATerm z_27 = NULL;
                t = p_0(t);
                {
                  x_27 = t;
                  {
                    ATerm a_28 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(x_27)), not_null(v_27));
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
            LocalPopChoice(n_9);
          }
        else
          {
            t = l_9;
            {
              ATerm d_28 = NULL,f_28 = NULL;
              ATerm e_28 = NULL;
              t = SSLgetAnnotations(not_null(r_27));
              {
                e_28 = t;
                if(((d_28 != NULL) && (d_28 != e_28)))
                  _fail(e_28);
                else
                  d_28 = e_28;
              }
              {
                t = not_null(s_27);
                {
                  ATerm h_28 = NULL;
                  t = p_0(t);
                  {
                    f_28 = t;
                    {
                      ATerm i_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(f_28)), not_null(d_28));
                      {
                        i_28 = t;
                        if(((h_28 != NULL) && (h_28 != i_28)))
                          _fail(i_28);
                        else
                          h_28 = i_28;
                      }
                      t = not_null(h_28);
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
ATerm Var_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm w_28 = NULL,x_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym_Var_1))
    {
      x_28 = ATgetArgument(w_28, 0);
      {
        ATerm a_29 = NULL,c_29 = NULL;
        ATerm b_29 = NULL;
        t = SSLgetAnnotations(not_null(w_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
        {
          t = not_null(x_28);
          {
            ATerm e_29 = NULL;
            t = e_86(t);
            {
              c_29 = t;
              {
                ATerm f_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(c_29)), not_null(a_29));
                {
                  f_29 = t;
                  if(((e_29 != NULL) && (e_29 != f_29)))
                    _fail(f_29);
                  else
                    e_29 = f_29;
                }
                t = not_null(e_29);
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
ATerm list_1 (ATerm t, ATerm g_103 (ATerm))
{
  ATerm k_29 (ATerm t)
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = Cons_2(t, g_103, k_29);
      }
    return(t);
  }
  t = k_29(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm c_88 (ATerm))
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  p_29 :
  if(match_cons(q_29, sym_Build_1))
    {
      r_29 = ATgetArgument(q_29, 0);
      {
        ATerm u_29 = NULL,w_29 = NULL;
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(q_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
        {
          t = not_null(r_29);
          {
            ATerm y_29 = NULL;
            t = c_88(t);
            {
              w_29 = t;
              {
                ATerm z_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(w_29)), not_null(u_29));
                {
                  z_29 = t;
                  if(((y_29 != NULL) && (y_29 != z_29)))
                    _fail(z_29);
                  else
                    y_29 = z_29;
                }
                t = not_null(y_29);
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
  ATerm i_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym_Fail_0))
    {
      ATerm k_30 = NULL,m_30 = NULL;
      ATerm s_9;
      s_9 = t;
      {
        ATerm l_30 = NULL;
        t = SSLgetAnnotations(not_null(i_30));
        {
          l_30 = t;
          if(((k_30 != NULL) && (k_30 != l_30)))
            _fail(l_30);
          else
            k_30 = l_30;
        }
      }
      t = s_9;
      {
        ATerm n_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(k_30));
        {
          n_30 = t;
          if(((m_30 != NULL) && (m_30 != n_30)))
            _fail(n_30);
          else
            m_30 = n_30;
        }
        t = not_null(m_30);
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
  ATerm v_31 = NULL;
  v_31 = t;
  u_30 :
  if(match_cons(v_31, sym_Id_0))
    {
      ATerm a_33 = NULL,c_33 = NULL;
      ATerm t_9;
      t_9 = t;
      {
        ATerm b_33 = NULL;
        t = SSLgetAnnotations(not_null(v_31));
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
      }
      t = t_9;
      {
        ATerm d_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(a_33));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm e_10 = t;
                    int f_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_1 (ATerm t)
                        {
                          ATerm g_10 = t;
                          int k_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              LocalPopChoice(k_10);
                            }
                          else
                            {
                              t = g_10;
                              {
                                ATerm m_10 = t;
                                int p_10 = stack_ptr;
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
                                    LocalPopChoice(p_10);
                                  }
                                else
                                  {
                                    t = m_10;
                                    {
                                      ATerm q_10 = t;
                                      int r_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          LocalPopChoice(r_10);
                                        }
                                      else
                                        {
                                          t = q_10;
                                          {
                                            ATerm s_10 = t;
                                            int t_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                LocalPopChoice(t_10);
                                              }
                                            else
                                              {
                                                t = s_10;
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
                        LocalPopChoice(f_10);
                      }
                    else
                      {
                        t = e_10;
                        {
                          ATerm u_10 = t;
                          int z_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              LocalPopChoice(z_10);
                            }
                          else
                            {
                              t = u_10;
                              {
                                ATerm a_11 = t;
                                int b_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    LocalPopChoice(b_11);
                                  }
                                else
                                  {
                                    t = a_11;
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
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  l_33 :
  if(match_cons(m_33, sym_Row_2))
    {
      n_33 = ATgetArgument(m_33, 0);
      o_33 = ATgetArgument(m_33, 1);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_33 = NULL;
            ATerm s_33 = NULL;
            t = not_null(o_33);
            {
              ATerm k_11 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = k_11;
                }
              {
                t = new_0(t);
                {
                  s_33 = t;
                  if(((r_33 != NULL) && (r_33 != s_33)))
                    _fail(s_33);
                  else
                    r_33 = s_33;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_33), (ATerm)ATempty, not_null(o_33))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(n_33), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(r_33)), (ATerm) ATempty)));
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              t = not_null(o_33);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(n_33), not_null(o_33)));
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
ATerm MatrixScope_0 (ATerm t)
{
  ATerm c_34 = NULL,h_35 = NULL,i_35 = NULL;
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym_Matrix_2))
    {
      h_35 = ATgetArgument(c_34, 0);
      i_35 = ATgetArgument(c_34, 1);
      {
        ATerm y_35 = NULL,z_35 = NULL;
        ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
        t = not_null(i_35);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              a_36 = t;
              a_34 :
              if(match_cons(a_36, sym__2))
                {
                  b_36 = ATgetArgument(a_36, 0);
                  c_36 = ATgetArgument(a_36, 1);
                  {
                    if(((y_35 != NULL) && (y_35 != b_36)))
                      _fail(b_36);
                    else
                      y_35 = b_36;
                    if(((z_35 != NULL) && (z_35 != c_36)))
                      _fail(c_36);
                    else
                      z_35 = c_36;
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_35), (ATerm) ATmakeAppl(sym_Let_2, not_null(y_35), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_11))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(z_35)))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_93 (ATerm))
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym__2))
    {
      l_36 = ATgetArgument(k_36, 0);
      m_36 = ATgetArgument(k_36, 1);
      {
        ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
        ATerm m_11;
        m_11 = t;
        {
          ATerm s_36 = NULL;
          ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
          t = f_93(t);
          {
            s_36 = t;
            {
              if(((p_36 != NULL) && (p_36 != s_36)))
                _fail(s_36);
              else
                p_36 = s_36;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_36), not_null(l_36), not_null(m_36));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_11 = t;
                    int r_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), term_s_11);
                        t = table_get_0(t);
                        LocalPopChoice(r_11);
                      }
                    else
                      {
                        t = q_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_36 = t;
                      i_36 :
                      if(((ATgetType(t_36) == AT_LIST) && ((ATermList) t_36 != ATempty)))
                        {
                          u_36 = ATgetFirst((ATermList) t_36);
                          v_36 = (ATerm) ATgetNext((ATermList) t_36);
                          {
                            if(((q_36 != NULL) && (q_36 != u_36)))
                              _fail(u_36);
                            else
                              q_36 = u_36;
                            {
                              if(((r_36 != NULL) && (r_36 != v_36)))
                                _fail(v_36);
                              else
                                r_36 = v_36;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_36), term_s_11, (ATerm) ATinsert(CheckATermList(not_null(r_36)), (ATerm) ATinsert(CheckATermList(not_null(q_36)), not_null(l_36))));
                                t = table_put_0(t);
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
        t = m_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WildPat_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  e_37 = t;
  a_37 :
  if(match_cons(e_37, sym_Row_3))
    {
      f_37 = ATgetArgument(e_37, 0);
      k_37 = ATgetArgument(e_37, 1);
      l_37 = ATgetArgument(e_37, 2);
      b_37 :
      if(((ATgetType(f_37) == AT_LIST) && ((ATermList) f_37 != ATempty)))
        {
          g_37 = ATgetFirst((ATermList) f_37);
          j_37 = (ATerm) ATgetNext((ATermList) f_37);
          c_37 :
          if(match_cons(g_37, sym_As_2))
            {
              h_37 = ATgetArgument(g_37, 0);
              i_37 = ATgetArgument(g_37, 1);
              d_37 :
              if(match_cons(i_37, sym_Wld_0))
                {
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(j_37), not_null(k_37), not_null(l_37));
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
ATerm default_state_0 (ATerm t)
{
  ATerm r_37 = NULL;
  t = filter_1(t, WildPat_0);
  {
    r_37 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(r_37));
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  v_37 :
  if(match_cons(w_37, sym__2))
    {
      x_37 = ATgetArgument(w_37, 0);
      y_37 = ATgetArgument(w_37, 1);
      if(((x_37 != NULL) && (x_37 != y_37)))
        _fail(y_37);
      else
        x_37 = y_37;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym_Wld_0))
    {
      ATerm z_38 = NULL;
      ATerm d_39 = NULL;
      t = o_0(t);
      {
        ATerm s_1 (ATerm t)
        {
          ATerm a_39 = NULL,b_39 = NULL;
          a_39 = t;
          h_38 :
          if(match_cons(a_39, sym_Var_1))
            {
              b_39 = ATgetArgument(a_39, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(b_39)), term_t_11);
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = map_1(t, s_1);
        {
          d_39 = t;
          if(((z_38 != NULL) && (z_38 != d_39)))
            _fail(d_39);
          else
            z_38 = d_39;
        }
      }
      t = not_null(z_38);
    }
  else
    {
      if(match_cons(w_38, sym_Int_1))
        {
          x_38 = ATgetArgument(w_38, 0);
          {
            ATerm f_39 = NULL,h_39 = NULL;
            t = n_0(t);
            {
              f_39 = t;
              l_38 :
              if(match_cons(f_39, sym_Int_1))
                {
                  h_39 = ATgetArgument(f_39, 0);
                  {
                    ATerm i_39 = NULL;
                    if(((x_38 != NULL) && (x_38 != h_39)))
                      _fail(h_39);
                    else
                      x_38 = h_39;
                    {
                      t = o_0(t);
                      {
                        i_39 = t;
                        k_38 :
                        if(((ATermList) i_39 == ATempty))
                          {
                            {
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
              else
                {
                  _fail(t);
                }
            }
            t = (ATerm) ATempty;
          }
        }
      else
        {
          if(match_cons(w_38, sym_Real_1))
            {
              x_38 = ATgetArgument(w_38, 0);
              {
                ATerm k_39 = NULL,l_39 = NULL;
                t = n_0(t);
                {
                  k_39 = t;
                  o_38 :
                  if(match_cons(k_39, sym_Real_1))
                    {
                      l_39 = ATgetArgument(k_39, 0);
                      {
                        ATerm m_39 = NULL;
                        if(((x_38 != NULL) && (x_38 != l_39)))
                          _fail(l_39);
                        else
                          x_38 = l_39;
                        {
                          t = o_0(t);
                          {
                            m_39 = t;
                            n_38 :
                            if(((ATermList) m_39 == ATempty))
                              {
                                {
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
                  else
                    {
                      _fail(t);
                    }
                }
                t = (ATerm) ATempty;
              }
            }
          else
            {
              if(match_cons(w_38, sym_Str_1))
                {
                  x_38 = ATgetArgument(w_38, 0);
                  {
                    ATerm o_39 = NULL,p_39 = NULL;
                    t = n_0(t);
                    {
                      o_39 = t;
                      r_38 :
                      if(match_cons(o_39, sym_Str_1))
                        {
                          p_39 = ATgetArgument(o_39, 0);
                          {
                            ATerm q_39 = NULL;
                            if(((x_38 != NULL) && (x_38 != p_39)))
                              _fail(p_39);
                            else
                              x_38 = p_39;
                            {
                              t = o_0(t);
                              {
                                q_39 = t;
                                q_38 :
                                if(((ATermList) q_39 == ATempty))
                                  {
                                    {
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
                      else
                        {
                          _fail(t);
                        }
                    }
                    t = (ATerm) ATempty;
                  }
                }
              else
                {
                  if(match_cons(w_38, sym_Op_2))
                    {
                      x_38 = ATgetArgument(w_38, 0);
                      y_38 = ATgetArgument(w_38, 1);
                      {
                        ATerm t_39 = NULL;
                        ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
                        t = n_0(t);
                        {
                          u_39 = t;
                          u_38 :
                          if(match_cons(u_39, sym_Fun_2))
                            {
                              v_39 = ATgetArgument(u_39, 0);
                              w_39 = ATgetArgument(u_39, 1);
                              {
                                ATerm x_39 = NULL;
                                if(((x_38 != NULL) && (x_38 != v_39)))
                                  _fail(v_39);
                                else
                                  x_38 = v_39;
                                {
                                  if(((t_39 != NULL) && (t_39 != w_39)))
                                    _fail(w_39);
                                  else
                                    t_39 = w_39;
                                  {
                                    ATerm y_39 = NULL;
                                    t = not_null(y_38);
                                    {
                                      t = length_0(t);
                                      {
                                        y_39 = t;
                                        if(((x_39 != NULL) && (x_39 != y_39)))
                                          _fail(y_39);
                                        else
                                          x_39 = y_39;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), not_null(t_39));
                                      t = eq_0(t);
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
                        t = not_null(y_38);
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
ATerm ConsTransition_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,g_42 = NULL;
  s_41 = t;
  p_41 :
  if(match_cons(s_41, sym_Row_3))
    {
      t_41 = ATgetArgument(s_41, 0);
      y_41 = ATgetArgument(s_41, 1);
      g_42 = ATgetArgument(s_41, 2);
      q_41 :
      if(((ATgetType(t_41) == AT_LIST) && ((ATermList) t_41 != ATempty)))
        {
          u_41 = ATgetFirst((ATermList) t_41);
          x_41 = (ATerm) ATgetNext((ATermList) t_41);
          r_41 :
          if(match_cons(u_41, sym_As_2))
            {
              v_41 = ATgetArgument(u_41, 0);
              w_41 = ATgetArgument(u_41, 1);
              {
                ATerm l_42 = NULL,n_42 = NULL;
                ATerm u_11;
                u_11 = t;
                {
                  ATerm m_42 = NULL;
                  t = not_null(w_41);
                  {
                    t = s_88(t);
                    {
                      m_42 = t;
                      if(((l_42 != NULL) && (l_42 != m_42)))
                        _fail(m_42);
                      else
                        l_42 = m_42;
                    }
                  }
                }
                t = u_11;
                {
                  ATerm o_42 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_42), not_null(y_41));
                  {
                    t = conc_0(t);
                    {
                      o_42 = t;
                      if(((n_42 != NULL) && (n_42 != o_42)))
                        _fail(o_42);
                      else
                        n_42 = o_42;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(x_41), not_null(n_42), not_null(g_42));
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
ATerm Transition_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  b_43 = t;
  z_42 :
  if(match_cons(b_43, sym__2))
    {
      c_43 = ATgetArgument(b_43, 0);
      d_43 = ATgetArgument(b_43, 1);
      a_43 :
      if(match_cons(d_43, sym__2))
        {
          e_43 = ATgetArgument(d_43, 0);
          f_43 = ATgetArgument(d_43, 1);
          {
            ATerm j_43 = NULL;
            ATerm k_43 = NULL;
            t = not_null(c_43);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = not_null(e_43);
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    t = not_null(f_43);
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
                k_43 = t;
                if(((j_43 != NULL) && (j_43 != k_43)))
                  _fail(k_43);
                else
                  j_43 = k_43;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(e_43), not_null(f_43), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(j_43)));
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
ATerm RZip2_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  r_43 = t;
  p_43 :
  if(match_cons(r_43, sym__2))
    {
      s_43 = ATgetArgument(r_43, 0);
      t_43 = ATgetArgument(r_43, 1);
      q_43 :
      if(((ATgetType(t_43) == AT_LIST) && ((ATermList) t_43 != ATempty)))
        {
          u_43 = ATgetFirst((ATermList) t_43);
          v_43 = (ATerm) ATgetNext((ATermList) t_43);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(s_43), not_null(u_43)), (ATerm) ATmakeAppl(sym__2, not_null(s_43), not_null(v_43)));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  b_44 :
  if(match_cons(d_44, sym__2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      c_44 :
      if(((ATermList) f_44 == ATempty))
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
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm q_105 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, q_105);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,h_45 = NULL;
  x_44 = t;
  t_44 :
  if(((ATgetType(x_44) == AT_LIST) && ((ATermList) x_44 != ATempty)))
    {
      y_44 = ATgetFirst((ATermList) x_44);
      h_45 = (ATerm) ATgetNext((ATermList) x_44);
      {
        ATerm k_45 = NULL;
        ATerm m_45 = NULL;
        t = not_null(h_45);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm a_12 = t;
            if((PushChoice() == 0))
              {
                ATerm l_45 = NULL;
                l_45 = t;
                if(((y_44 != NULL) && (y_44 != l_45)))
                  _fail(l_45);
                else
                  y_44 = l_45;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_12;
              }
            return(t);
          }
          t = filter_1(t, x_1);
          {
            m_45 = t;
            if(((k_45 != NULL) && (k_45 != m_45)))
              _fail(m_45);
            else
              k_45 = m_45;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(k_45)), not_null(y_44));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm i_104 (ATerm))
{
  ATerm q_45 (ATerm t)
  {
    t = i_104(t);
    {
      ATerm b_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(g_12);
        }
      else
        {
          t = b_12;
          t = Cons_2(t, _id, q_45);
        }
    }
    return(t);
  }
  t = q_45(t);
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
    ATerm u_45 = NULL,v_45 = NULL,y_45 = NULL,z_45 = NULL;
    u_45 = t;
    s_45 :
    if(match_cons(u_45, sym_As_2))
      {
        v_45 = ATgetArgument(u_45, 0);
        z_45 = ATgetArgument(u_45, 1);
        t_45 :
        if(match_cons(v_45, sym_Off_1))
          {
            y_45 = ATgetArgument(v_45, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_45));
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
  t = map_1(t, z_1);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_h_12;
    return(t);
  }
  t = foldr_3(t, a_2, add_0, b_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  c_47 = t;
  o_46 :
  if(match_cons(c_47, sym_Row_3))
    {
      d_47 = ATgetArgument(c_47, 0);
      m_47 = ATgetArgument(c_47, 1);
      n_47 = ATgetArgument(c_47, 2);
      p_46 :
      if(((ATgetType(d_47) == AT_LIST) && ((ATermList) d_47 != ATempty)))
        {
          e_47 = ATgetFirst((ATermList) d_47);
          l_47 = (ATerm) ATgetNext((ATermList) d_47);
          q_46 :
          if(match_cons(e_47, sym_As_2))
            {
              f_47 = ATgetArgument(e_47, 0);
              i_47 = ATgetArgument(e_47, 1);
              b_47 :
              if(match_cons(i_47, sym_Str_1))
                {
                  j_47 = ATgetArgument(i_47, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(j_47)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(i_47, sym_Real_1))
                    {
                      j_47 = ATgetArgument(i_47, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(j_47)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(i_47, sym_Int_1))
                        {
                          j_47 = ATgetArgument(i_47, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(j_47)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(i_47, sym_Op_2))
                            {
                              j_47 = ATgetArgument(i_47, 0);
                              k_47 = ATgetArgument(i_47, 1);
                              {
                                ATerm t_47 = NULL,v_47 = NULL;
                                ATerm i_12;
                                i_12 = t;
                                {
                                  ATerm u_47 = NULL;
                                  t = not_null(k_47);
                                  {
                                    t = length_0(t);
                                    {
                                      u_47 = t;
                                      if(((t_47 != NULL) && (t_47 != u_47)))
                                        _fail(u_47);
                                      else
                                        t_47 = u_47;
                                    }
                                  }
                                }
                                t = i_12;
                                {
                                  ATerm w_47 = NULL;
                                  t = not_null(k_47);
                                  {
                                    t = offsets_0(t);
                                    {
                                      w_47 = t;
                                      if(((v_47 != NULL) && (v_47 != w_47)))
                                        _fail(w_47);
                                      else
                                        v_47 = w_47;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(j_47), not_null(t_47)), not_null(v_47));
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
ATerm filter_1 (ATerm t, ATerm b_99 (ATerm))
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
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              t = filter_1(t, b_99);
              return(t);
            }
            t = Cons_2(t, b_99, c_2);
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
              f_48 = t;
              e_48 :
              if(((ATgetType(f_48) == AT_LIST) && ((ATermList) f_48 != ATempty)))
                {
                  g_48 = ATgetFirst((ATermList) f_48);
                  h_48 = (ATerm) ATgetNext((ATermList) f_48);
                  {
                    t = not_null(h_48);
                    t = filter_1(t, b_99);
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
ATerm outedges_0 (ATerm t)
{
  t = filter_1(t, ConsArgs_0);
  t = uniq_0(t);
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_49 (ATerm t)
            {
              ATerm x_12 = t;
              int a_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2(t, _id, e_49);
                  LocalPopChoice(a_13);
                }
              else
                {
                  t = x_12;
                  {
                    ATerm d_2 (ATerm t)
                    {
                      ATerm r_48 = NULL;
                      r_48 = t;
                      k_48 :
                      if(!(match_int(r_48, 47)))
                        {
                          _fail(t);
                        }
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
            t = e_49(t);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = (ATerm) ATempty;
          }
        t = implode_string_0(t);
      }
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
        s_48 = t;
        m_48 :
        if(((ATgetType(s_48) == AT_LIST) && ((ATermList) s_48 != ATempty)))
          {
            t_48 = ATgetFirst((ATermList) s_48);
            c_49 = (ATerm) ATgetNext((ATermList) s_48);
            n_48 :
            if(match_cons(t_48, sym_Row_3))
              {
                u_48 = ATgetArgument(t_48, 0);
                a_49 = ATgetArgument(t_48, 1);
                b_49 = ATgetArgument(t_48, 2);
                o_48 :
                if(((ATgetType(u_48) == AT_LIST) && ((ATermList) u_48 != ATempty)))
                  {
                    v_48 = ATgetFirst((ATermList) u_48);
                    z_48 = (ATerm) ATgetNext((ATermList) u_48);
                    p_48 :
                    if(match_cons(v_48, sym_As_2))
                      {
                        w_48 = ATgetArgument(v_48, 0);
                        y_48 = ATgetArgument(v_48, 1);
                        q_48 :
                        if(match_cons(w_48, sym_Off_1))
                          {
                            x_48 = ATgetArgument(w_48, 0);
                            t = not_null(x_48);
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
  return(t);
}
ATerm Mixture_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  n_49 = t;
  m_49 :
  if(match_cons(n_49, sym_Matrix_1))
    {
      o_49 = ATgetArgument(n_49, 0);
      {
        ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
        ATerm v_49 = NULL;
        t = not_null(o_49);
        {
          ATerm w_49 = NULL;
          t = get_path_0(t);
          {
            v_49 = t;
            {
              if(((q_49 != NULL) && (q_49 != v_49)))
                _fail(v_49);
              else
                q_49 = v_49;
              {
                t = not_null(o_49);
                {
                  ATerm x_49 = NULL;
                  t = outedges_0(t);
                  {
                    w_49 = t;
                    {
                      if(((r_49 != NULL) && (r_49 != w_49)))
                        _fail(w_49);
                      else
                        r_49 = w_49;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_49), not_null(r_49));
                        {
                          ATerm y_49 = NULL;
                          t = transitions_0(t);
                          {
                            x_49 = t;
                            {
                              if(((s_49 != NULL) && (s_49 != x_49)))
                                _fail(x_49);
                              else
                                s_49 = x_49;
                              {
                                t = not_null(o_49);
                                {
                                  ATerm z_49 = NULL;
                                  t = default_state_0(t);
                                  {
                                    y_49 = t;
                                    {
                                      if(((t_49 != NULL) && (t_49 != y_49)))
                                        _fail(y_49);
                                      else
                                        t_49 = y_49;
                                      {
                                        t = new_0(t);
                                        {
                                          z_49 = t;
                                          {
                                            if(((u_49 != NULL) && (u_49 != z_49)))
                                              _fail(z_49);
                                            else
                                              u_49 = z_49;
                                            {
                                              ATerm b_13;
                                              b_13 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(o_49)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_13, not_null(u_49)));
                                                {
                                                  ATerm f_2 (ATerm t)
                                                  {
                                                    t = term_d_13;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, f_2);
                                                }
                                              }
                                              t = b_13;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(u_49), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_49)), not_null(s_49), not_null(t_49));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL;
  j_50 = t;
  h_50 :
  if(match_cons(j_50, sym_Row_3))
    {
      k_50 = ATgetArgument(j_50, 0);
      l_50 = ATgetArgument(j_50, 1);
      o_50 = ATgetArgument(j_50, 2);
      i_50 :
      if(((ATgetType(l_50) == AT_LIST) && ((ATermList) l_50 != ATempty)))
        {
          m_50 = ATgetFirst((ATermList) l_50);
          n_50 = (ATerm) ATgetNext((ATermList) l_50);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(k_50)), not_null(m_50)), not_null(n_50), not_null(o_50));
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
ATerm ShiftColumn_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym_Matrix_1))
    {
      y_50 = ATgetArgument(x_50, 0);
      {
        ATerm a_51 = NULL;
        ATerm b_51 = NULL;
        t = not_null(y_50);
        {
          ATerm e_13 = t;
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
                      ATerm f_13 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = f_13;
                        }
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
            {
              t = e_13;
            }
          {
            t = not_null(y_50);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                b_51 = t;
                if(((a_51 != NULL) && (a_51 != b_51)))
                  _fail(b_51);
                else
                  a_51 = b_51;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(a_51));
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
  ATerm i_51 = NULL;
  i_51 = t;
  h_51 :
  if(match_cons(i_51, sym_Wld_0))
    {
      ATerm k_51 = NULL,m_51 = NULL;
      ATerm g_13;
      g_13 = t;
      {
        ATerm l_51 = NULL;
        t = SSLgetAnnotations(not_null(i_51));
        {
          l_51 = t;
          if(((k_51 != NULL) && (k_51 != l_51)))
            _fail(l_51);
          else
            k_51 = l_51;
        }
      }
      t = g_13;
      {
        ATerm n_51 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(k_51));
        {
          n_51 = t;
          if(((m_51 != NULL) && (m_51 != n_51)))
            _fail(n_51);
          else
            m_51 = n_51;
        }
        t = not_null(m_51);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm As_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym_As_2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      {
        ATerm d_52 = NULL,f_52 = NULL;
        ATerm e_52 = NULL;
        t = SSLgetAnnotations(not_null(x_51));
        {
          e_52 = t;
          if(((d_52 != NULL) && (d_52 != e_52)))
            _fail(e_52);
          else
            d_52 = e_52;
        }
        {
          t = not_null(y_51);
          {
            ATerm h_52 = NULL;
            t = r_84(t);
            {
              f_52 = t;
              {
                t = not_null(z_51);
                {
                  ATerm j_52 = NULL;
                  t = s_84(t);
                  {
                    h_52 = t;
                    {
                      ATerm k_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(f_52), not_null(h_52)), not_null(d_52));
                      {
                        k_52 = t;
                        if(((j_52 != NULL) && (j_52 != k_52)))
                          _fail(k_52);
                        else
                          j_52 = k_52;
                      }
                      t = not_null(j_52);
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
ATerm Row_3 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
  a_53 = t;
  z_52 :
  if(match_cons(a_53, sym_Row_3))
    {
      b_53 = ATgetArgument(a_53, 0);
      c_53 = ATgetArgument(a_53, 1);
      d_53 = ATgetArgument(a_53, 2);
      {
        ATerm k_53 = NULL,m_53 = NULL;
        ATerm l_53 = NULL;
        t = SSLgetAnnotations(not_null(a_53));
        {
          l_53 = t;
          if(((k_53 != NULL) && (k_53 != l_53)))
            _fail(l_53);
          else
            k_53 = l_53;
        }
        {
          t = not_null(b_53);
          {
            ATerm o_53 = NULL;
            t = g_83(t);
            {
              m_53 = t;
              {
                t = not_null(c_53);
                {
                  ATerm q_53 = NULL;
                  t = h_83(t);
                  {
                    o_53 = t;
                    {
                      t = not_null(d_53);
                      {
                        ATerm s_53 = NULL;
                        t = i_83(t);
                        {
                          q_53 = t;
                          {
                            ATerm t_53 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, not_null(m_53), not_null(o_53), not_null(q_53)), not_null(k_53));
                            {
                              t_53 = t;
                              if(((s_53 != NULL) && (s_53 != t_53)))
                                _fail(t_53);
                              else
                                s_53 = t_53;
                            }
                            t = not_null(s_53);
                          }
                        }
                      }
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
ATerm SkipWild_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym_Matrix_1))
    {
      e_54 = ATgetArgument(d_54, 0);
      {
        ATerm g_54 = NULL;
        ATerm h_54 = NULL;
        t = not_null(e_54);
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
            h_54 = t;
            if(((g_54 != NULL) && (g_54 != h_54)))
              _fail(h_54);
            else
              g_54 = h_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_54));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Matrix_1))
    {
      s_54 = ATgetArgument(r_54, 0);
      {
        ATerm u_54 = NULL;
        ATerm a_55 = NULL;
        t = not_null(s_54);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
            v_54 = t;
            m_54 :
            if(match_cons(v_54, sym_Row_3))
              {
                w_54 = ATgetArgument(v_54, 0);
                x_54 = ATgetArgument(v_54, 1);
                y_54 = ATgetArgument(v_54, 2);
                n_54 :
                if(((ATermList) w_54 == ATempty))
                  {
                    o_54 :
                    if(((ATermList) x_54 == ATempty))
                      {
                        t = not_null(y_54);
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
          t = map_1(t, n_2);
          {
            a_55 = t;
            if(((u_54 != NULL) && (u_54 != a_55)))
              _fail(a_55);
            else
              u_54 = a_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_54));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm h_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = h_13;
      {
        ATerm m_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = m_13;
            {
              ATerm t_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = t_13;
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
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
  g_55 = t;
  f_55 :
  if(((ATgetType(g_55) == AT_LIST) && ((ATermList) g_55 != ATempty)))
    {
      h_55 = ATgetFirst((ATermList) g_55);
      i_55 = (ATerm) ATgetNext((ATermList) g_55);
      t = not_null(i_55);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  o_55 :
  if(match_cons(p_55, sym__2))
    {
      q_55 = ATgetArgument(p_55, 0);
      r_55 = ATgetArgument(p_55, 1);
      {
        ATerm v_13;
        v_13 = t;
        {
          ATerm u_55 = NULL;
          ATerm v_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(r_55));
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                t = (ATerm) ATempty;
              }
            {
              v_55 = t;
              if(((u_55 != NULL) && (u_55 != v_55)))
                _fail(v_55);
              else
                u_55 = v_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_55), not_null(r_55), not_null(u_55));
            t = table_put_0(t);
          }
        }
        t = v_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_93 (ATerm))
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm f_56 = NULL;
    ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
    t = c_93(t);
    {
      f_56 = t;
      {
        if(((d_56 != NULL) && (d_56 != f_56)))
          _fail(f_56);
        else
          d_56 = f_56;
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_56), term_s_11);
              t = table_get_0(t);
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_56 = t;
            b_56 :
            if(((ATgetType(g_56) == AT_LIST) && ((ATermList) g_56 != ATempty)))
              {
                h_56 = ATgetFirst((ATermList) g_56);
                i_56 = (ATerm) ATgetNext((ATermList) g_56);
                {
                  if(((e_56 != NULL) && (e_56 != h_56)))
                    _fail(h_56);
                  else
                    e_56 = h_56;
                  {
                    if(((c_56 != NULL) && (c_56 != i_56)))
                      _fail(i_56);
                    else
                      c_56 = i_56;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_56), term_s_11, not_null(c_56));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(e_56);
                          {
                            ATerm o_2 (ATerm t)
                            {
                              ATerm j_56 = NULL;
                              j_56 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_56), not_null(j_56));
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
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = y_13;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_107 (ATerm), ATerm v_107 (ATerm))
{
  ATerm b_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_107(t);
      t = v_107(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = b_14;
      {
        t = v_107(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_93 (ATerm))
{
  ATerm q_56 = NULL;
  ATerm h_14;
  h_14 = t;
  {
    ATerm r_56 = NULL;
    ATerm s_56 = NULL;
    t = b_93(t);
    {
      r_56 = t;
      {
        if(((q_56 != NULL) && (q_56 != r_56)))
          _fail(r_56);
        else
          q_56 = r_56;
        {
          ATerm t_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_56), term_s_11);
          {
            ATerm i_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_14);
              }
            else
              {
                t = i_14;
                t = (ATerm) ATempty;
              }
            {
              t_56 = t;
              if(((s_56 != NULL) && (s_56 != t_56)))
                _fail(t_56);
              else
                s_56 = t_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_56), term_s_11, (ATerm) ATinsert(CheckATermList(not_null(s_56)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = h_14;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm d_93 (ATerm), ATerm e_93 (ATerm))
{
  t = begin_scope_1(t, d_93);
  {
    ATerm p_2 (ATerm t)
    {
      t = end_scope_1(t, d_93);
      return(t);
    }
    t = restore_always_2(t, e_93, p_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = term_d_13;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm s_2 (ATerm t)
    {
      ATerm o_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = o_14;
          {
            ATerm s_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                LocalPopChoice(t_14);
              }
            else
              {
                t = s_14;
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
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  u_57 = t;
  t_57 :
  if(match_cons(u_57, sym_Cong_2))
    {
      v_57 = ATgetArgument(u_57, 0);
      w_57 = ATgetArgument(u_57, 1);
      {
        ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,o_59 = NULL,q_59 = NULL,s_59 = NULL;
        ATerm u_14;
        u_14 = t;
        {
          ATerm q_58 = NULL;
          t = not_null(w_57);
          {
            ATerm t_58 = NULL;
            t = map_1(t, new_0);
            {
              q_58 = t;
              {
                if(((n_58 != NULL) && (n_58 != q_58)))
                  _fail(q_58);
                else
                  n_58 = q_58;
                {
                  t = not_null(n_58);
                  {
                    ATerm u_58 = NULL;
                    ATerm t_2 (ATerm t)
                    {
                      ATerm r_58 = NULL;
                      ATerm s_58 = NULL;
                      s_58 = t;
                      if(((r_58 != NULL) && (r_58 != s_58)))
                        _fail(s_58);
                      else
                        r_58 = s_58;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_58));
                      return(t);
                    }
                    t = map_1(t, t_2);
                    {
                      t_58 = t;
                      {
                        if(((k_58 != NULL) && (k_58 != t_58)))
                          _fail(t_58);
                        else
                          k_58 = t_58;
                        {
                          ATerm v_58 = NULL;
                          t = new_0(t);
                          {
                            u_58 = t;
                            {
                              if(((l_58 != NULL) && (l_58 != u_58)))
                                _fail(u_58);
                              else
                                l_58 = u_58;
                              {
                                t = not_null(w_57);
                                {
                                  ATerm y_58 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    v_58 = t;
                                    {
                                      if(((o_58 != NULL) && (o_58 != v_58)))
                                        _fail(v_58);
                                      else
                                        o_58 = v_58;
                                      {
                                        t = not_null(o_58);
                                        {
                                          ATerm d_59 = NULL,n_59 = NULL;
                                          ATerm u_2 (ATerm t)
                                          {
                                            ATerm w_58 = NULL;
                                            ATerm x_58 = NULL;
                                            x_58 = t;
                                            if(((w_58 != NULL) && (w_58 != x_58)))
                                              _fail(x_58);
                                            else
                                              w_58 = x_58;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_58));
                                            return(t);
                                          }
                                          t = map_1(t, u_2);
                                          {
                                            y_58 = t;
                                            {
                                              if(((m_58 != NULL) && (m_58 != y_58)))
                                                _fail(y_58);
                                              else
                                                m_58 = y_58;
                                              {
                                                ATerm e_59 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_58), not_null(o_58));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    e_59 = t;
                                                    if(((d_59 != NULL) && (d_59 != e_59)))
                                                      _fail(e_59);
                                                    else
                                                      d_59 = e_59;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_59), not_null(w_57));
                                                  {
                                                    ATerm v_2 (ATerm t)
                                                    {
                                                      ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
                                                      f_59 = t;
                                                      l_57 :
                                                      if(match_cons(f_59, sym__2))
                                                        {
                                                          g_59 = ATgetArgument(f_59, 0);
                                                          j_59 = ATgetArgument(f_59, 1);
                                                          o_57 :
                                                          if(match_cons(g_59, sym__2))
                                                            {
                                                              h_59 = ATgetArgument(g_59, 0);
                                                              i_59 = ATgetArgument(g_59, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_59))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_59), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_59)))));
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
                                                    t = zip_1(t, v_2);
                                                    {
                                                      n_59 = t;
                                                      if(((p_58 != NULL) && (p_58 != n_59)))
                                                        _fail(n_59);
                                                      else
                                                        p_58 = n_59;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = u_14;
        {
          ATerm v_14;
          v_14 = t;
          {
            ATerm p_59 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_58), not_null(o_58));
            {
              t = conc_0(t);
              {
                p_59 = t;
                if(((o_59 != NULL) && (o_59 != p_59)))
                  _fail(p_59);
                else
                  o_59 = p_59;
              }
            }
          }
          t = v_14;
          {
            ATerm w_14;
            w_14 = t;
            {
              ATerm r_59 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_57), not_null(k_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_58))));
              {
                t = Mapp2_0(t);
                {
                  r_59 = t;
                  if(((q_59 != NULL) && (q_59 != r_59)))
                    _fail(r_59);
                  else
                    q_59 = r_59;
                }
              }
            }
            t = w_14;
            {
              ATerm t_59 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(v_57), not_null(m_58)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_58))));
              {
                t = Bapp2_0(t);
                {
                  t_59 = t;
                  if(((s_59 != NULL) && (s_59 != t_59)))
                    _fail(t_59);
                  else
                    s_59 = t_59;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(o_59)), not_null(l_58)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_59), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(p_58)), not_null(s_59))));
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
  ATerm t_61 = NULL,u_61 = NULL;
  t_61 = t;
  s_61 :
  if(match_cons(t_61, sym_Build_1))
    {
      u_61 = ATgetArgument(t_61, 0);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
            ATerm d_62 = NULL;
            ATerm h_62 = NULL;
            t = new_0(t);
            {
              d_62 = t;
              {
                if(((y_61 != NULL) && (y_61 != d_62)))
                  _fail(d_62);
                else
                  y_61 = d_62;
                {
                  t = not_null(u_61);
                  {
                    ATerm w_2 (ATerm t)
                    {
                      ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
                      e_62 = t;
                      x_60 :
                      if(match_cons(e_62, sym_Anno_2))
                        {
                          f_62 = ATgetArgument(e_62, 0);
                          g_62 = ATgetArgument(e_62, 1);
                          {
                            if(((w_61 != NULL) && (w_61 != f_62)))
                              _fail(f_62);
                            else
                              w_61 = f_62;
                            {
                              if(((x_61 != NULL) && (x_61 != g_62)))
                                _fail(g_62);
                              else
                                x_61 = g_62;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_61));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, w_2);
                    {
                      h_62 = t;
                      if(((z_61 != NULL) && (z_61 != h_62)))
                        _fail(h_62);
                      else
                        z_61 = h_62;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_61)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_61)), not_null(w_61))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_61))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_61))));
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm g_15 = t;
              int h_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
                  ATerm u_62 = NULL;
                  ATerm j_63 = NULL;
                  t = new_0(t);
                  {
                    u_62 = t;
                    {
                      if(((o_62 != NULL) && (o_62 != u_62)))
                        _fail(u_62);
                      else
                        o_62 = u_62;
                      {
                        t = not_null(u_61);
                        {
                          ATerm x_2 (ATerm t)
                          {
                            ATerm v_62 = NULL,w_62 = NULL;
                            v_62 = t;
                            c_61 :
                            if(match_cons(v_62, sym_RootApp_1))
                              {
                                w_62 = ATgetArgument(v_62, 0);
                                {
                                  if(((n_62 != NULL) && (n_62 != w_62)))
                                    _fail(w_62);
                                  else
                                    n_62 = w_62;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_62));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, x_2);
                          {
                            j_63 = t;
                            if(((p_62 != NULL) && (p_62 != j_63)))
                              _fail(j_63);
                            else
                              p_62 = j_63;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_62)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_62), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_62))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_62))));
                  LocalPopChoice(h_15);
                }
              else
                {
                  t = g_15;
                  {
                    ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
                    ATerm v_63 = NULL;
                    ATerm z_63 = NULL;
                    t = new_0(t);
                    {
                      v_63 = t;
                      {
                        if(((t_63 != NULL) && (t_63 != v_63)))
                          _fail(v_63);
                        else
                          t_63 = v_63;
                        {
                          t = not_null(u_61);
                          {
                            ATerm y_2 (ATerm t)
                            {
                              ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL;
                              w_63 = t;
                              q_61 :
                              if(match_cons(w_63, sym_App_2))
                                {
                                  x_63 = ATgetArgument(w_63, 0);
                                  y_63 = ATgetArgument(w_63, 1);
                                  {
                                    if(((r_63 != NULL) && (r_63 != x_63)))
                                      _fail(x_63);
                                    else
                                      r_63 = x_63;
                                    {
                                      if(((s_63 != NULL) && (s_63 != y_63)))
                                        _fail(y_63);
                                      else
                                        s_63 = y_63;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_63));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, y_2);
                            {
                              z_63 = t;
                              if(((u_63 != NULL) && (u_63 != z_63)))
                                _fail(z_63);
                              else
                                u_63 = z_63;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_63)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_63), not_null(s_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_63)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_63))));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  n_64 :
  if(match_cons(o_64, sym__2))
    {
      p_64 = ATgetArgument(o_64, 0);
      q_64 = ATgetArgument(o_64, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_64)), not_null(p_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
  y_64 = t;
  v_64 :
  if(match_cons(y_64, sym__2))
    {
      z_64 = ATgetArgument(y_64, 0);
      c_65 = ATgetArgument(y_64, 1);
      w_64 :
      if(((ATgetType(z_64) == AT_LIST) && ((ATermList) z_64 != ATempty)))
        {
          a_65 = ATgetFirst((ATermList) z_64);
          b_65 = (ATerm) ATgetNext((ATermList) z_64);
          x_64 :
          if(((ATgetType(c_65) == AT_LIST) && ((ATermList) c_65 != ATempty)))
            {
              d_65 = ATgetFirst((ATermList) c_65);
              e_65 = (ATerm) ATgetNext((ATermList) c_65);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(a_65), not_null(d_65)), (ATerm) ATmakeAppl(sym__2, not_null(b_65), not_null(e_65)));
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
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  o_65 = t;
  l_65 :
  if(match_cons(o_65, sym__2))
    {
      p_65 = ATgetArgument(o_65, 0);
      q_65 = ATgetArgument(o_65, 1);
      m_65 :
      if(((ATermList) p_65 == ATempty))
        {
          n_65 :
          if(((ATermList) q_65 == ATempty))
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
ATerm zip_1 (ATerm t, ATerm h_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm r_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  r_66 = t;
  k_66 :
  if(match_cons(r_66, sym_Call_2))
    {
      t_66 = ATgetArgument(r_66, 0);
      v_66 = ATgetArgument(r_66, 1);
      l_66 :
      if(match_cons(t_66, sym_SVar_1))
        {
          u_66 = ATgetArgument(t_66, 0);
          m_66 :
          if(match_string(u_66, "Anno_Cong__"))
            {
              n_66 :
              if(((ATgetType(v_66) == AT_LIST) && ((ATermList) v_66 != ATempty)))
                {
                  w_66 = ATgetFirst((ATermList) v_66);
                  w_67 = (ATerm) ATgetNext((ATermList) v_66);
                  o_66 :
                  if(match_cons(w_66, sym_Cong_2))
                    {
                      x_66 = ATgetArgument(w_66, 0);
                      y_66 = ATgetArgument(w_66, 1);
                      p_66 :
                      if(((ATgetType(w_67) == AT_LIST) && ((ATermList) w_67 != ATempty)))
                        {
                          x_67 = ATgetFirst((ATermList) w_67);
                          y_67 = (ATerm) ATgetNext((ATermList) w_67);
                          q_66 :
                          if(((ATermList) y_67 == ATempty))
                            {
                              {
                                ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,c_71 = NULL,e_71 = NULL,g_71 = NULL;
                                ATerm i_15;
                                i_15 = t;
                                {
                                  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(x_67));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      d_69 = t;
                                      g_66 :
                                      if(((ATgetType(d_69) == AT_LIST) && ((ATermList) d_69 != ATempty)))
                                        {
                                          e_69 = ATgetFirst((ATermList) d_69);
                                          f_69 = (ATerm) ATgetNext((ATermList) d_69);
                                          {
                                            ATerm i_69 = NULL;
                                            if(((w_68 != NULL) && (w_68 != e_69)))
                                              _fail(e_69);
                                            else
                                              w_68 = e_69;
                                            {
                                              if(((a_69 != NULL) && (a_69 != f_69)))
                                                _fail(f_69);
                                              else
                                                a_69 = f_69;
                                              {
                                                ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
                                                ATerm z_2 (ATerm t)
                                                {
                                                  ATerm g_69 = NULL;
                                                  ATerm h_69 = NULL;
                                                  h_69 = t;
                                                  if(((g_69 != NULL) && (g_69 != h_69)))
                                                    _fail(h_69);
                                                  else
                                                    g_69 = h_69;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_69));
                                                  return(t);
                                                }
                                                t = map_1(t, z_2);
                                                {
                                                  i_69 = t;
                                                  {
                                                    if(((x_68 != NULL) && (x_68 != i_69)))
                                                      _fail(i_69);
                                                    else
                                                      x_68 = i_69;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(x_67));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          o_69 = t;
                                                          e_66 :
                                                          if(((ATgetType(o_69) == AT_LIST) && ((ATermList) o_69 != ATempty)))
                                                            {
                                                              p_69 = ATgetFirst((ATermList) o_69);
                                                              q_69 = (ATerm) ATgetNext((ATermList) o_69);
                                                              {
                                                                ATerm c_70 = NULL;
                                                                if(((y_68 != NULL) && (y_68 != p_69)))
                                                                  _fail(p_69);
                                                                else
                                                                  y_68 = p_69;
                                                                {
                                                                  if(((b_69 != NULL) && (b_69 != q_69)))
                                                                    _fail(q_69);
                                                                  else
                                                                    b_69 = q_69;
                                                                  {
                                                                    ATerm i_70 = NULL,b_71 = NULL;
                                                                    ATerm a_3 (ATerm t)
                                                                    {
                                                                      ATerm r_69 = NULL;
                                                                      ATerm b_70 = NULL;
                                                                      b_70 = t;
                                                                      if(((r_69 != NULL) && (r_69 != b_70)))
                                                                        _fail(b_70);
                                                                      else
                                                                        r_69 = b_70;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_69));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, a_3);
                                                                    {
                                                                      c_70 = t;
                                                                      {
                                                                        if(((z_68 != NULL) && (z_68 != c_70)))
                                                                          _fail(c_70);
                                                                        else
                                                                          z_68 = c_70;
                                                                        {
                                                                          ATerm j_70 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(b_69));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              j_70 = t;
                                                                              if(((i_70 != NULL) && (i_70 != j_70)))
                                                                                _fail(j_70);
                                                                              else
                                                                                i_70 = j_70;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_70), (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(x_67)));
                                                                            {
                                                                              ATerm b_3 (ATerm t)
                                                                              {
                                                                                ATerm k_70 = NULL,l_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL;
                                                                                k_70 = t;
                                                                                b_66 :
                                                                                if(match_cons(k_70, sym__2))
                                                                                  {
                                                                                    l_70 = ATgetArgument(k_70, 0);
                                                                                    x_70 = ATgetArgument(k_70, 1);
                                                                                    c_66 :
                                                                                    if(match_cons(l_70, sym__2))
                                                                                      {
                                                                                        v_70 = ATgetArgument(l_70, 0);
                                                                                        w_70 = ATgetArgument(l_70, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_70))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_70), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_70)))));
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
                                                                              t = zip_1(t, b_3);
                                                                              {
                                                                                b_71 = t;
                                                                                if(((c_69 != NULL) && (c_69 != b_71)))
                                                                                  _fail(b_71);
                                                                                else
                                                                                  c_69 = b_71;
                                                                              }
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
                                t = i_15;
                                {
                                  ATerm q_15;
                                  q_15 = t;
                                  {
                                    ATerm d_71 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(b_69));
                                    {
                                      t = conc_0(t);
                                      {
                                        d_71 = t;
                                        if(((c_71 != NULL) && (c_71 != d_71)))
                                          _fail(d_71);
                                        else
                                          c_71 = d_71;
                                      }
                                    }
                                  }
                                  t = q_15;
                                  {
                                    ATerm r_15;
                                    r_15 = t;
                                    {
                                      ATerm f_71 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_66), not_null(x_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_68))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          f_71 = t;
                                          if(((e_71 != NULL) && (e_71 != f_71)))
                                            _fail(f_71);
                                          else
                                            e_71 = f_71;
                                        }
                                      }
                                    }
                                    t = r_15;
                                    {
                                      ATerm h_71 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(x_66), not_null(z_68)), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_68))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          h_71 = t;
                                          if(((g_71 != NULL) && (g_71 != h_71)))
                                            _fail(h_71);
                                          else
                                            g_71 = h_71;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(c_71)), not_null(y_68)), not_null(w_68)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_71), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(c_69)), not_null(g_71))));
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
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  b_72 = t;
  a_72 :
  if(match_cons(b_72, sym_Prim_2))
    {
      c_72 = ATgetArgument(b_72, 0);
      d_72 = ATgetArgument(b_72, 1);
      {
        ATerm h_72 = NULL,j_72 = NULL;
        ATerm i_72 = NULL;
        t = SSLgetAnnotations(not_null(b_72));
        {
          i_72 = t;
          if(((h_72 != NULL) && (h_72 != i_72)))
            _fail(i_72);
          else
            h_72 = i_72;
        }
        {
          t = not_null(c_72);
          {
            ATerm l_72 = NULL;
            t = i_88(t);
            {
              j_72 = t;
              {
                t = not_null(d_72);
                {
                  ATerm n_72 = NULL;
                  t = j_88(t);
                  {
                    l_72 = t;
                    {
                      ATerm o_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(j_72), not_null(l_72)), not_null(h_72));
                      {
                        o_72 = t;
                        if(((n_72 != NULL) && (n_72 != o_72)))
                          _fail(o_72);
                        else
                          n_72 = o_72;
                      }
                      t = not_null(n_72);
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
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL;
  a_73 = t;
  z_72 :
  if(match_cons(a_73, sym_Explode_2))
    {
      b_73 = ATgetArgument(a_73, 0);
      c_73 = ATgetArgument(a_73, 1);
      {
        ATerm g_73 = NULL,i_73 = NULL;
        ATerm h_73 = NULL;
        t = SSLgetAnnotations(not_null(a_73));
        {
          h_73 = t;
          if(((g_73 != NULL) && (g_73 != h_73)))
            _fail(h_73);
          else
            g_73 = h_73;
        }
        {
          t = not_null(b_73);
          {
            ATerm o_73 = NULL;
            t = n_84(t);
            {
              i_73 = t;
              {
                t = not_null(c_73);
                {
                  ATerm q_73 = NULL;
                  t = o_84(t);
                  {
                    o_73 = t;
                    {
                      ATerm r_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(i_73), not_null(o_73)), not_null(g_73));
                      {
                        r_73 = t;
                        if(((q_73 != NULL) && (q_73 != r_73)))
                          _fail(r_73);
                        else
                          q_73 = r_73;
                      }
                      t = not_null(q_73);
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
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL;
  p_76 = t;
  o_76 :
  if(match_cons(p_76, sym_Op_2))
    {
      q_76 = ATgetArgument(p_76, 0);
      r_76 = ATgetArgument(p_76, 1);
      {
        ATerm v_76 = NULL,x_76 = NULL;
        ATerm w_76 = NULL;
        t = SSLgetAnnotations(not_null(p_76));
        {
          w_76 = t;
          if(((v_76 != NULL) && (v_76 != w_76)))
            _fail(w_76);
          else
            v_76 = w_76;
        }
        {
          t = not_null(q_76);
          {
            ATerm z_76 = NULL;
            t = i_86(t);
            {
              x_76 = t;
              {
                t = not_null(r_76);
                {
                  ATerm b_77 = NULL;
                  t = j_86(t);
                  {
                    z_76 = t;
                    {
                      ATerm c_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(x_76), not_null(z_76)), not_null(v_76));
                      {
                        c_77 = t;
                        if(((b_77 != NULL) && (b_77 != c_77)))
                          _fail(c_77);
                        else
                          b_77 = c_77;
                      }
                      t = not_null(b_77);
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
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_112(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm d_3 (ATerm t)
              {
                t = pat_td_1(t, u_112);
                return(t);
              }
              t = fetch_1(t, d_3);
              return(t);
            }
            t = Op_2(t, _id, c_3);
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm w_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_3 (ATerm t)
                  {
                    t = pat_td_1(t, u_112);
                    return(t);
                  }
                  t = Explode_2(t, _id, e_3);
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = w_15;
                  {
                    ATerm z_15 = t;
                    int b_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_3 (ATerm t)
                        {
                          t = pat_td_1(t, u_112);
                          return(t);
                        }
                        t = Explode_2(t, f_3, _id);
                        LocalPopChoice(b_16);
                      }
                    else
                      {
                        t = z_15;
                        {
                          ATerm g_3 (ATerm t)
                          {
                            ATerm h_3 (ATerm t)
                            {
                              t = pat_td_1(t, u_112);
                              return(t);
                            }
                            t = fetch_1(t, h_3);
                            return(t);
                          }
                          t = Prim_2(t, _id, g_3);
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
  ATerm a_78 = NULL,b_78 = NULL;
  a_78 = t;
  z_77 :
  if(match_cons(a_78, sym_Match_1))
    {
      b_78 = ATgetArgument(a_78, 0);
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL,g_78 = NULL;
            ATerm h_78 = NULL;
            ATerm l_78 = NULL;
            t = new_0(t);
            {
              h_78 = t;
              {
                if(((f_78 != NULL) && (f_78 != h_78)))
                  _fail(h_78);
                else
                  f_78 = h_78;
                {
                  t = not_null(b_78);
                  {
                    ATerm i_3 (ATerm t)
                    {
                      ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL;
                      i_78 = t;
                      n_77 :
                      if(match_cons(i_78, sym_Anno_2))
                        {
                          j_78 = ATgetArgument(i_78, 0);
                          k_78 = ATgetArgument(i_78, 1);
                          {
                            if(((d_78 != NULL) && (d_78 != j_78)))
                              _fail(j_78);
                            else
                              d_78 = j_78;
                            {
                              if(((e_78 != NULL) && (e_78 != k_78)))
                                _fail(k_78);
                              else
                                e_78 = k_78;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_78)), not_null(d_78));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, i_3);
                    {
                      l_78 = t;
                      if(((g_78 != NULL) && (g_78 != l_78)))
                        _fail(l_78);
                      else
                        g_78 = l_78;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_78)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_78)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_78))))));
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            {
              ATerm p_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
                  ATerm q_78 = NULL;
                  ATerm t_78 = NULL;
                  t = new_0(t);
                  {
                    q_78 = t;
                    {
                      if(((o_78 != NULL) && (o_78 != q_78)))
                        _fail(q_78);
                      else
                        o_78 = q_78;
                      {
                        t = not_null(b_78);
                        {
                          ATerm j_3 (ATerm t)
                          {
                            ATerm r_78 = NULL,s_78 = NULL;
                            r_78 = t;
                            r_77 :
                            if(match_cons(r_78, sym_RootApp_1))
                              {
                                s_78 = ATgetArgument(r_78, 0);
                                {
                                  if(((n_78 != NULL) && (n_78 != s_78)))
                                    _fail(s_78);
                                  else
                                    n_78 = s_78;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_78));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, j_3);
                          {
                            t_78 = t;
                            if(((p_78 != NULL) && (p_78 != t_78)))
                              _fail(t_78);
                            else
                              p_78 = t_78;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_78))), not_null(n_78))));
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = p_16;
                  {
                    ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
                    ATerm z_78 = NULL;
                    ATerm d_79 = NULL;
                    t = new_0(t);
                    {
                      z_78 = t;
                      {
                        if(((x_78 != NULL) && (x_78 != z_78)))
                          _fail(z_78);
                        else
                          x_78 = z_78;
                        {
                          t = not_null(b_78);
                          {
                            ATerm k_3 (ATerm t)
                            {
                              ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
                              a_79 = t;
                              x_77 :
                              if(match_cons(a_79, sym_App_2))
                                {
                                  b_79 = ATgetArgument(a_79, 0);
                                  c_79 = ATgetArgument(a_79, 1);
                                  {
                                    if(((w_78 != NULL) && (w_78 != b_79)))
                                      _fail(b_79);
                                    else
                                      w_78 = b_79;
                                    {
                                      if(((v_78 != NULL) && (v_78 != c_79)))
                                        _fail(c_79);
                                      else
                                        v_78 = c_79;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_78));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, k_3);
                            {
                              d_79 = t;
                              if(((y_78 != NULL) && (y_78 != d_79)))
                                _fail(d_79);
                              else
                                y_78 = d_79;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_78)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_78))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_78)), not_null(w_78)))));
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
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL;
  w_79 = t;
  v_79 :
  if(match_cons(w_79, sym_Cong_2))
    {
      x_79 = ATgetArgument(w_79, 0);
      y_79 = ATgetArgument(w_79, 1);
      {
        ATerm b_80 = NULL;
        ATerm f_80 = NULL;
        t = not_null(y_79);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm c_80 = NULL,d_80 = NULL;
            d_80 = t;
            t_79 :
            if(match_cons(d_80, sym_Match_1))
              {
                c_80 = ATgetArgument(d_80, 0);
                t = not_null(c_80);
              }
            else
              {
                if(match_cons(d_80, sym_Id_0))
                  {
                    t = term_t_11;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, l_3);
          {
            f_80 = t;
            if(((b_80 != NULL) && (b_80 != f_80)))
              _fail(f_80);
            else
              b_80 = f_80;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(x_79), not_null(b_80)));
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
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL;
  n_80 = t;
  l_80 :
  if(match_cons(n_80, sym_Scope_2))
    {
      o_80 = ATgetArgument(n_80, 0);
      p_80 = ATgetArgument(n_80, 1);
      m_80 :
      if(((ATermList) o_80 == ATempty))
        {
          t = not_null(p_80);
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
  ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL;
  l_81 = t;
  y_80 :
  if(match_cons(l_81, sym_Where_1))
    {
      m_81 = ATgetArgument(l_81, 0);
      z_80 :
      if(match_cons(m_81, sym_Seq_2))
        {
          k_81 = ATgetArgument(m_81, 0);
          g_81 = ATgetArgument(m_81, 1);
          a_81 :
          if(match_cons(k_81, sym_Where_1))
            {
              f_81 = ATgetArgument(k_81, 0);
              b_81 :
              if(match_cons(g_81, sym_Seq_2))
                {
                  h_81 = ATgetArgument(g_81, 0);
                  j_81 = ATgetArgument(g_81, 1);
                  c_81 :
                  if(match_cons(h_81, sym_Build_1))
                    {
                      i_81 = ATgetArgument(h_81, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_81), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_81)), not_null(j_81))));
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
          if(match_cons(m_81, sym_Where_1))
            {
              k_81 = ATgetArgument(m_81, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(k_81));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(l_81, sym_Test_1))
        {
          m_81 = ATgetArgument(l_81, 0);
          d_81 :
          if(match_cons(m_81, sym_Test_1))
            {
              k_81 = ATgetArgument(m_81, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(k_81));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(l_81, sym_Not_1))
            {
              m_81 = ATgetArgument(l_81, 0);
              e_81 :
              if(match_cons(m_81, sym_Not_1))
                {
                  k_81 = ATgetArgument(m_81, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(k_81));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(l_81, sym_LChoice_2))
                {
                  m_81 = ATgetArgument(l_81, 0);
                  n_81 = ATgetArgument(l_81, 1);
                  {
                    if(((m_81 != NULL) && (m_81 != n_81)))
                      _fail(n_81);
                    else
                      m_81 = n_81;
                    t = not_null(m_81);
                  }
                }
              else
                {
                  if(match_cons(l_81, sym_Choice_2))
                    {
                      m_81 = ATgetArgument(l_81, 0);
                      n_81 = ATgetArgument(l_81, 1);
                      {
                        if(((m_81 != NULL) && (m_81 != n_81)))
                          _fail(n_81);
                        else
                          m_81 = n_81;
                        t = not_null(m_81);
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
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  j_82 = t;
  f_82 :
  if(match_cons(j_82, sym_LChoice_2))
    {
      k_82 = ATgetArgument(j_82, 0);
      n_82 = ATgetArgument(j_82, 1);
      g_82 :
      if(match_cons(k_82, sym_LChoice_2))
        {
          l_82 = ATgetArgument(k_82, 0);
          m_82 = ATgetArgument(k_82, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_82), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_82), not_null(n_82)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(j_82, sym_Seq_2))
        {
          k_82 = ATgetArgument(j_82, 0);
          n_82 = ATgetArgument(j_82, 1);
          h_82 :
          if(match_cons(k_82, sym_Seq_2))
            {
              l_82 = ATgetArgument(k_82, 0);
              m_82 = ATgetArgument(k_82, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_82), (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_82), not_null(n_82)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(j_82, sym_Choice_2))
            {
              k_82 = ATgetArgument(j_82, 0);
              n_82 = ATgetArgument(j_82, 1);
              i_82 :
              if(match_cons(k_82, sym_Choice_2))
                {
                  l_82 = ATgetArgument(k_82, 0);
                  m_82 = ATgetArgument(k_82, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_82), (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_82), not_null(n_82)));
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
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL;
  y_83 = t;
  q_83 :
  if(match_cons(y_83, sym_InfixApp_3))
    {
      z_83 = ATgetArgument(y_83, 0);
      v_83 = ATgetArgument(y_83, 1);
      u_83 = ATgetArgument(y_83, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(v_83), (ATerm) ATmakeAppl(sym_Op_2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_83)), not_null(z_83))));
    }
  else
    {
      if(match_cons(y_83, sym_BAM_3))
        {
          z_83 = ATgetArgument(y_83, 0);
          v_83 = ATgetArgument(y_83, 1);
          u_83 = ATgetArgument(y_83, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(u_83))), not_null(z_83)), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_83))));
        }
      else
        {
          if(match_cons(y_83, sym_AM_2))
            {
              z_83 = ATgetArgument(y_83, 0);
              v_83 = ATgetArgument(y_83, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_83), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_83)));
            }
          else
            {
              if(match_cons(y_83, sym_MA_2))
                {
                  z_83 = ATgetArgument(y_83, 0);
                  v_83 = ATgetArgument(y_83, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_83)), not_null(v_83));
                }
              else
                {
                  if(match_cons(y_83, sym_BA_2))
                    {
                      z_83 = ATgetArgument(y_83, 0);
                      v_83 = ATgetArgument(y_83, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_83)), not_null(z_83));
                    }
                  else
                    {
                      if(match_cons(y_83, sym_Lets_2))
                        {
                          z_83 = ATgetArgument(y_83, 0);
                          v_83 = ATgetArgument(y_83, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_83), not_null(v_83));
                        }
                      else
                        {
                          if(match_cons(y_83, sym_LChoices_1))
                            {
                              z_83 = ATgetArgument(y_83, 0);
                              r_83 :
                              if(((ATgetType(z_83) == AT_LIST) && ((ATermList) z_83 != ATempty)))
                                {
                                  w_83 = ATgetFirst((ATermList) z_83);
                                  x_83 = (ATerm) ATgetNext((ATermList) z_83);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_83), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(x_83)));
                                }
                              else
                                {
                                  if(((ATermList) z_83 == ATempty))
                                    {
                                      t = term_c_17;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(y_83, sym_Choices_1))
                                {
                                  z_83 = ATgetArgument(y_83, 0);
                                  s_83 :
                                  if(((ATgetType(z_83) == AT_LIST) && ((ATermList) z_83 != ATempty)))
                                    {
                                      w_83 = ATgetFirst((ATermList) z_83);
                                      x_83 = (ATerm) ATgetNext((ATermList) z_83);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_83), (ATerm) ATmakeAppl(sym_Choices_1, not_null(x_83)));
                                    }
                                  else
                                    {
                                      if(((ATermList) z_83 == ATempty))
                                        {
                                          t = term_c_17;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(y_83, sym_Seqs_1))
                                    {
                                      z_83 = ATgetArgument(y_83, 0);
                                      t_83 :
                                      if(((ATgetType(z_83) == AT_LIST) && ((ATermList) z_83 != ATempty)))
                                        {
                                          w_83 = ATgetFirst((ATermList) z_83);
                                          x_83 = (ATerm) ATgetNext((ATermList) z_83);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_83), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_83)));
                                        }
                                      else
                                        {
                                          if(((ATermList) z_83 == ATempty))
                                            {
                                              t = term_d_17;
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
  ATerm o_85 = NULL,p_85 = NULL;
  o_85 = t;
  m_85 :
  if(match_cons(o_85, sym_Where_1))
    {
      p_85 = ATgetArgument(o_85, 0);
      n_85 :
      if(match_cons(p_85, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL;
  w_85 = t;
  t_85 :
  if(match_cons(w_85, sym_LChoice_2))
    {
      x_85 = ATgetArgument(w_85, 0);
      y_85 = ATgetArgument(w_85, 1);
      v_85 :
      if(match_cons(y_85, sym_Fail_0))
        {
          t = not_null(x_85);
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
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
  f_86 = t;
  c_86 :
  if(match_cons(f_86, sym_LChoice_2))
    {
      g_86 = ATgetArgument(f_86, 0);
      h_86 = ATgetArgument(f_86, 1);
      d_86 :
      if(match_cons(g_86, sym_Fail_0))
        {
          t = not_null(h_86);
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
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  p_86 = t;
  n_86 :
  if(match_cons(p_86, sym_Choice_2))
    {
      q_86 = ATgetArgument(p_86, 0);
      r_86 = ATgetArgument(p_86, 1);
      o_86 :
      if(match_cons(r_86, sym_Fail_0))
        {
          t = not_null(q_86);
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
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL;
  x_86 = t;
  v_86 :
  if(match_cons(x_86, sym_Choice_2))
    {
      y_86 = ATgetArgument(x_86, 0);
      z_86 = ATgetArgument(x_86, 1);
      w_86 :
      if(match_cons(y_86, sym_Fail_0))
        {
          t = not_null(z_86);
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
  ATerm n_87 = NULL,o_87 = NULL,r_87 = NULL;
  n_87 = t;
  m_87 :
  if(match_cons(n_87, sym_Cong_2))
    {
      o_87 = ATgetArgument(n_87, 0);
      r_87 = ATgetArgument(n_87, 1);
      {
        t = not_null(r_87);
        {
          ATerm m_3 (ATerm t)
          {
            ATerm u_87 = NULL;
            u_87 = t;
            l_87 :
            if(!(match_cons(u_87, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, m_3);
        }
        t = term_c_17;
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
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  x_87 :
  if(match_cons(z_87, sym_Path_2))
    {
      a_88 = ATgetArgument(z_87, 0);
      b_88 = ATgetArgument(z_87, 1);
      y_87 :
      if(match_cons(b_88, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm o_88 = NULL,p_88 = NULL;
  o_88 = t;
  m_88 :
  if(match_cons(o_88, sym_One_1))
    {
      p_88 = ATgetArgument(o_88, 0);
      n_88 :
      if(match_cons(p_88, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm x_88 = NULL,y_88 = NULL;
  x_88 = t;
  v_88 :
  if(match_cons(x_88, sym_Some_1))
    {
      y_88 = ATgetArgument(x_88, 0);
      w_88 :
      if(match_cons(y_88, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  b_89 :
  if(match_cons(d_89, sym_Rec_2))
    {
      e_89 = ATgetArgument(d_89, 0);
      f_89 = ATgetArgument(d_89, 1);
      c_89 :
      if(match_cons(f_89, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  l_89 = t;
  j_89 :
  if(match_cons(l_89, sym_Scope_2))
    {
      m_89 = ATgetArgument(l_89, 0);
      n_89 = ATgetArgument(l_89, 1);
      k_89 :
      if(match_cons(n_89, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
  t_89 = t;
  r_89 :
  if(match_cons(t_89, sym_Seq_2))
    {
      u_89 = ATgetArgument(t_89, 0);
      v_89 = ATgetArgument(t_89, 1);
      s_89 :
      if(match_cons(u_89, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm b_90 = NULL,i_90 = NULL;
  b_90 = t;
  z_89 :
  if(match_cons(b_90, sym_Not_1))
    {
      i_90 = ATgetArgument(b_90, 0);
      a_90 :
      if(match_cons(i_90, sym_Fail_0))
        {
          t = term_d_17;
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
  ATerm n_90 = NULL,o_90 = NULL;
  n_90 = t;
  l_90 :
  if(match_cons(n_90, sym_Test_1))
    {
      o_90 = ATgetArgument(n_90, 0);
      m_90 :
      if(match_cons(o_90, sym_Fail_0))
        {
          t = term_c_17;
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
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
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
            t = F2_0(t);
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm p_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = p_17;
                  {
                    ATerm t_17 = t;
                    int v_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(v_17);
                      }
                    else
                      {
                        t = t_17;
                        {
                          ATerm z_17 = t;
                          int a_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(a_18);
                            }
                          else
                            {
                              t = z_17;
                              {
                                ATerm c_18 = t;
                                int d_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(d_18);
                                  }
                                else
                                  {
                                    t = c_18;
                                    {
                                      ATerm f_18 = t;
                                      int g_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(g_18);
                                        }
                                      else
                                        {
                                          t = f_18;
                                          {
                                            ATerm k_18 = t;
                                            int l_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(l_18);
                                              }
                                            else
                                              {
                                                t = k_18;
                                                {
                                                  ATerm m_18 = t;
                                                  int v_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(v_18);
                                                    }
                                                  else
                                                    {
                                                      t = m_18;
                                                      {
                                                        ATerm w_18 = t;
                                                        int x_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(x_18);
                                                          }
                                                        else
                                                          {
                                                            t = w_18;
                                                            {
                                                              ATerm y_18 = t;
                                                              int z_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(z_18);
                                                                }
                                                              else
                                                                {
                                                                  t = y_18;
                                                                  {
                                                                    ATerm a_19 = t;
                                                                    int b_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(b_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_19;
                                                                        {
                                                                          ATerm c_19 = t;
                                                                          int d_19 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(d_19);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_19;
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
  ATerm t_90 = NULL,u_90 = NULL;
  t_90 = t;
  r_90 :
  if(match_cons(t_90, sym_Match_1))
    {
      u_90 = ATgetArgument(t_90, 0);
      s_90 :
      if(match_cons(u_90, sym_Wld_0))
        {
          t = term_d_17;
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
  ATerm z_90 = NULL,a_91 = NULL;
  z_90 = t;
  x_90 :
  if(match_cons(z_90, sym_Where_1))
    {
      a_91 = ATgetArgument(z_90, 0);
      y_90 :
      if(match_cons(a_91, sym_Id_0))
        {
          t = term_d_17;
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
  ATerm j_91 = NULL,k_91 = NULL;
  j_91 = t;
  f_91 :
  if(match_cons(j_91, sym_All_1))
    {
      k_91 = ATgetArgument(j_91, 0);
      i_91 :
      if(match_cons(k_91, sym_Id_0))
        {
          t = term_d_17;
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
  ATerm s_91 = NULL,t_91 = NULL,u_91 = NULL;
  s_91 = t;
  q_91 :
  if(match_cons(s_91, sym_Rec_2))
    {
      t_91 = ATgetArgument(s_91, 0);
      u_91 = ATgetArgument(s_91, 1);
      r_91 :
      if(match_cons(u_91, sym_Id_0))
        {
          t = term_d_17;
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
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL;
  c_92 = t;
  a_92 :
  if(match_cons(c_92, sym_Scope_2))
    {
      d_92 = ATgetArgument(c_92, 0);
      e_92 = ATgetArgument(c_92, 1);
      b_92 :
      if(match_cons(e_92, sym_Id_0))
        {
          t = term_d_17;
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
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
  k_92 = t;
  i_92 :
  if(match_cons(k_92, sym_LChoice_2))
    {
      l_92 = ATgetArgument(k_92, 0);
      m_92 = ATgetArgument(k_92, 1);
      j_92 :
      if(match_cons(l_92, sym_Id_0))
        {
          t = term_d_17;
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
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL;
  s_92 = t;
  q_92 :
  if(match_cons(s_92, sym_Seq_2))
    {
      t_92 = ATgetArgument(s_92, 0);
      u_92 = ATgetArgument(s_92, 1);
      r_92 :
      if(match_cons(u_92, sym_Id_0))
        {
          t = not_null(t_92);
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
  ATerm a_93 = NULL,g_93 = NULL,h_93 = NULL;
  a_93 = t;
  y_92 :
  if(match_cons(a_93, sym_Seq_2))
    {
      g_93 = ATgetArgument(a_93, 0);
      h_93 = ATgetArgument(a_93, 1);
      z_92 :
      if(match_cons(g_93, sym_Id_0))
        {
          t = not_null(h_93);
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
  ATerm n_93 = NULL,o_93 = NULL;
  n_93 = t;
  l_93 :
  if(match_cons(n_93, sym_Not_1))
    {
      o_93 = ATgetArgument(n_93, 0);
      m_93 :
      if(match_cons(o_93, sym_Id_0))
        {
          t = term_c_17;
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
  ATerm t_93 = NULL,u_93 = NULL;
  t_93 = t;
  r_93 :
  if(match_cons(t_93, sym_Test_1))
    {
      u_93 = ATgetArgument(t_93, 0);
      s_93 :
      if(match_cons(u_93, sym_Id_0))
        {
          t = term_d_17;
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
  ATerm e_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = e_19;
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm o_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = o_19;
                  {
                    ATerm r_19 = t;
                    int s_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(s_19);
                      }
                    else
                      {
                        t = r_19;
                        {
                          ATerm t_19 = t;
                          int u_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(u_19);
                            }
                          else
                            {
                              t = t_19;
                              {
                                ATerm v_19 = t;
                                int w_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(w_19);
                                  }
                                else
                                  {
                                    t = v_19;
                                    {
                                      ATerm x_19 = t;
                                      int y_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(y_19);
                                        }
                                      else
                                        {
                                          t = x_19;
                                          {
                                            ATerm z_19 = t;
                                            int e_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(e_20);
                                              }
                                            else
                                              {
                                                t = z_19;
                                                {
                                                  ATerm f_20 = t;
                                                  int q_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(q_20);
                                                    }
                                                  else
                                                    {
                                                      t = f_20;
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
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm v_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = v_20;
                  {
                    ATerm e_21 = t;
                    int f_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(f_21);
                      }
                    else
                      {
                        t = e_21;
                        {
                          ATerm g_21 = t;
                          int h_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(h_21);
                            }
                          else
                            {
                              t = g_21;
                              {
                                ATerm s_21 = t;
                                int u_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(u_21);
                                  }
                                else
                                  {
                                    t = s_21;
                                    {
                                      ATerm v_21 = t;
                                      int w_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(w_21);
                                        }
                                      else
                                        {
                                          t = v_21;
                                          {
                                            ATerm b_22 = t;
                                            int c_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(c_22);
                                              }
                                            else
                                              {
                                                t = b_22;
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
ATerm conc_0 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  y_93 = t;
  x_93 :
  if(match_cons(y_93, sym__2))
    {
      z_93 = ATgetArgument(y_93, 0);
      a_94 = ATgetArgument(y_93, 1);
      {
        t = not_null(z_93);
        {
          ATerm n_3 (ATerm t)
          {
            t = not_null(a_94);
            return(t);
          }
          t = at_end_1(t, n_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
  d_96 = t;
  f_95 :
  if(match_cons(d_96, sym_LChoice_2))
    {
      f_96 = ATgetArgument(d_96, 0);
      m_96 = ATgetArgument(d_96, 1);
      g_95 :
      if(match_cons(f_96, sym_Matrix_2))
        {
          g_96 = ATgetArgument(f_96, 0);
          h_96 = ATgetArgument(f_96, 1);
          h_95 :
          if(match_cons(m_96, sym_Choice_2))
            {
              b_96 = ATgetArgument(m_96, 0);
              c_96 = ATgetArgument(m_96, 1);
              i_95 :
              if(match_cons(b_96, sym_Matrix_2))
                {
                  z_95 = ATgetArgument(b_96, 0);
                  a_96 = ATgetArgument(b_96, 1);
                  {
                    ATerm s_96 = NULL,u_96 = NULL;
                    ATerm d_22;
                    d_22 = t;
                    {
                      ATerm t_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(z_95));
                      {
                        t = union_0(t);
                        {
                          t_96 = t;
                          if(((s_96 != NULL) && (s_96 != t_96)))
                            _fail(t_96);
                          else
                            s_96 = t_96;
                        }
                      }
                    }
                    t = d_22;
                    {
                      ATerm z_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_96), not_null(a_96));
                      {
                        t = conc_0(t);
                        {
                          z_96 = t;
                          if(((u_96 != NULL) && (u_96 != z_96)))
                            _fail(z_96);
                          else
                            u_96 = z_96;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(s_96), not_null(u_96)), not_null(c_96));
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
              if(match_cons(m_96, sym_LChoice_2))
                {
                  b_96 = ATgetArgument(m_96, 0);
                  c_96 = ATgetArgument(m_96, 1);
                  j_95 :
                  if(match_cons(b_96, sym_Matrix_2))
                    {
                      z_95 = ATgetArgument(b_96, 0);
                      a_96 = ATgetArgument(b_96, 1);
                      {
                        ATerm f_97 = NULL,h_97 = NULL;
                        ATerm e_22;
                        e_22 = t;
                        {
                          ATerm g_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(z_95));
                          {
                            t = union_0(t);
                            {
                              g_97 = t;
                              if(((f_97 != NULL) && (f_97 != g_97)))
                                _fail(g_97);
                              else
                                f_97 = g_97;
                            }
                          }
                        }
                        t = e_22;
                        {
                          ATerm i_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_96), not_null(a_96));
                          {
                            t = conc_0(t);
                            {
                              i_97 = t;
                              if(((h_97 != NULL) && (h_97 != i_97)))
                                _fail(i_97);
                              else
                                h_97 = i_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(f_97), not_null(h_97)), not_null(c_96));
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
                  if(match_cons(m_96, sym_Matrix_2))
                    {
                      b_96 = ATgetArgument(m_96, 0);
                      c_96 = ATgetArgument(m_96, 1);
                      {
                        ATerm n_97 = NULL,p_97 = NULL;
                        ATerm f_22;
                        f_22 = t;
                        {
                          ATerm o_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(b_96));
                          {
                            t = union_0(t);
                            {
                              o_97 = t;
                              if(((n_97 != NULL) && (n_97 != o_97)))
                                _fail(o_97);
                              else
                                n_97 = o_97;
                            }
                          }
                        }
                        t = f_22;
                        {
                          ATerm r_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_96), not_null(c_96));
                          {
                            t = conc_0(t);
                            {
                              r_97 = t;
                              if(((p_97 != NULL) && (p_97 != r_97)))
                                _fail(r_97);
                              else
                                p_97 = r_97;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(n_97), not_null(p_97));
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
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(d_96, sym_Choice_2))
        {
          f_96 = ATgetArgument(d_96, 0);
          m_96 = ATgetArgument(d_96, 1);
          q_95 :
          if(match_cons(f_96, sym_Matrix_2))
            {
              g_96 = ATgetArgument(f_96, 0);
              h_96 = ATgetArgument(f_96, 1);
              r_95 :
              if(match_cons(m_96, sym_LChoice_2))
                {
                  b_96 = ATgetArgument(m_96, 0);
                  c_96 = ATgetArgument(m_96, 1);
                  s_95 :
                  if(match_cons(b_96, sym_Matrix_2))
                    {
                      z_95 = ATgetArgument(b_96, 0);
                      a_96 = ATgetArgument(b_96, 1);
                      {
                        ATerm z_97 = NULL,b_98 = NULL;
                        ATerm k_22;
                        k_22 = t;
                        {
                          ATerm a_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(z_95));
                          {
                            t = union_0(t);
                            {
                              a_98 = t;
                              if(((z_97 != NULL) && (z_97 != a_98)))
                                _fail(a_98);
                              else
                                z_97 = a_98;
                            }
                          }
                        }
                        t = k_22;
                        {
                          ATerm c_98 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_96), not_null(a_96));
                          {
                            t = conc_0(t);
                            {
                              c_98 = t;
                              if(((b_98 != NULL) && (b_98 != c_98)))
                                _fail(c_98);
                              else
                                b_98 = c_98;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(z_97), not_null(b_98)), not_null(c_96));
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
                  if(match_cons(m_96, sym_Choice_2))
                    {
                      b_96 = ATgetArgument(m_96, 0);
                      c_96 = ATgetArgument(m_96, 1);
                      t_95 :
                      if(match_cons(b_96, sym_Matrix_2))
                        {
                          z_95 = ATgetArgument(b_96, 0);
                          a_96 = ATgetArgument(b_96, 1);
                          {
                            ATerm j_98 = NULL,l_98 = NULL;
                            ATerm l_22;
                            l_22 = t;
                            {
                              ATerm k_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(z_95));
                              {
                                t = union_0(t);
                                {
                                  k_98 = t;
                                  if(((j_98 != NULL) && (j_98 != k_98)))
                                    _fail(k_98);
                                  else
                                    j_98 = k_98;
                                }
                              }
                            }
                            t = l_22;
                            {
                              ATerm m_98 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_96), not_null(a_96));
                              {
                                t = conc_0(t);
                                {
                                  m_98 = t;
                                  if(((l_98 != NULL) && (l_98 != m_98)))
                                    _fail(m_98);
                                  else
                                    l_98 = m_98;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(j_98), not_null(l_98)), not_null(c_96));
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
                      if(match_cons(m_96, sym_Matrix_2))
                        {
                          b_96 = ATgetArgument(m_96, 0);
                          c_96 = ATgetArgument(m_96, 1);
                          {
                            ATerm t_98 = NULL,d_99 = NULL;
                            ATerm n_22;
                            n_22 = t;
                            {
                              ATerm c_99 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(g_96), not_null(b_96));
                              {
                                t = union_0(t);
                                {
                                  c_99 = t;
                                  if(((t_98 != NULL) && (t_98 != c_99)))
                                    _fail(c_99);
                                  else
                                    t_98 = c_99;
                                }
                              }
                            }
                            t = n_22;
                            {
                              ATerm e_99 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_96), not_null(c_96));
                              {
                                t = conc_0(t);
                                {
                                  e_99 = t;
                                  if(((d_99 != NULL) && (d_99 != e_99)))
                                    _fail(e_99);
                                  else
                                    d_99 = e_99;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(t_98), not_null(d_99));
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
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(d_96, sym_Scope_2))
            {
              f_96 = ATgetArgument(d_96, 0);
              m_96 = ATgetArgument(d_96, 1);
              u_95 :
              if(match_cons(m_96, sym_Matrix_2))
                {
                  b_96 = ATgetArgument(m_96, 0);
                  c_96 = ATgetArgument(m_96, 1);
                  {
                    ATerm i_99 = NULL;
                    ATerm o_99 = NULL;
                    t = not_null(c_96);
                    {
                      ATerm o_3 (ATerm t)
                      {
                        ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL;
                        j_99 = t;
                        d_95 :
                        if(match_cons(j_99, sym_Row_2))
                          {
                            k_99 = ATgetArgument(j_99, 0);
                            l_99 = ATgetArgument(j_99, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(k_99), (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_96), not_null(l_99)));
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = map_1(t, o_3);
                      {
                        o_99 = t;
                        if(((i_99 != NULL) && (i_99 != o_99)))
                          _fail(o_99);
                        else
                          i_99 = o_99;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(b_96), not_null(i_99));
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(d_96, sym_Seq_2))
                {
                  f_96 = ATgetArgument(d_96, 0);
                  m_96 = ATgetArgument(d_96, 1);
                  v_95 :
                  if(match_cons(f_96, sym_Matrix_2))
                    {
                      g_96 = ATgetArgument(f_96, 0);
                      h_96 = ATgetArgument(f_96, 1);
                      w_95 :
                      if(((ATgetType(h_96) == AT_LIST) && ((ATermList) h_96 != ATempty)))
                        {
                          i_96 = ATgetFirst((ATermList) h_96);
                          l_96 = (ATerm) ATgetNext((ATermList) h_96);
                          x_95 :
                          if(match_cons(i_96, sym_Row_2))
                            {
                              j_96 = ATgetArgument(i_96, 0);
                              k_96 = ATgetArgument(i_96, 1);
                              y_95 :
                              if(((ATermList) l_96 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(g_96), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(j_96), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_96), not_null(m_96)))));
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
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm z_99 (ATerm))
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_99(t);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm z_100 = NULL,b_101 = NULL,c_101 = NULL;
        z_100 = t;
        y_100 :
        if(((ATgetType(z_100) == AT_LIST) && ((ATermList) z_100 != ATempty)))
          {
            b_101 = ATgetFirst((ATermList) z_100);
            c_101 = (ATerm) ATgetNext((ATermList) z_100);
            {
              ATerm h_101 = NULL,j_101 = NULL;
              ATerm r_22;
              r_22 = t;
              {
                ATerm i_101 = NULL;
                t = not_null(b_101);
                {
                  t = z_99(t);
                  {
                    i_101 = t;
                    if(((h_101 != NULL) && (h_101 != i_101)))
                      _fail(i_101);
                    else
                      h_101 = i_101;
                  }
                }
              }
              t = r_22;
              {
                ATerm k_101 = NULL;
                t = not_null(c_101);
                {
                  t = foldr_3(t, x_99, y_99, z_99);
                  {
                    k_101 = t;
                    if(((j_101 != NULL) && (j_101 != k_101)))
                      _fail(k_101);
                    else
                      j_101 = k_101;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_101), not_null(j_101));
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
  ATerm v_101 = NULL;
  ATerm x_101 = NULL;
  v_101 = t;
  {
    ATerm y_101 = NULL;
    ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
    t = not_null(v_101);
    {
      y_101 = t;
      {
        t = SSL_explode_term(not_null(y_101));
        {
          d_102 = t;
          u_101 :
          if(match_cons(d_102, sym__2))
            {
              e_102 = ATgetArgument(d_102, 0);
              f_102 = ATgetArgument(d_102, 1);
              if(((x_101 != NULL) && (x_101 != f_102)))
                _fail(f_102);
              else
                x_101 = f_102;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_101);
      t = foldr_3(t, l_101, m_101, n_101);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm z_101 (ATerm))
{
  ATerm m_102 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_102 = NULL;
        ATerm l_102 = NULL;
        t = z_101(t);
        {
          l_102 = t;
          if(((k_102 != NULL) && (k_102 != l_102)))
            _fail(l_102);
          else
            k_102 = l_102;
        }
        t = (ATerm) ATinsert(ATempty, not_null(k_102));
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          ATerm p_3 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, p_3, union_0, m_102);
        }
      }
    return(t);
  }
  t = m_102(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm b_102 (ATerm))
{
  t = collect_om_1(t, b_102);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm v_102 = NULL,w_102 = NULL;
    v_102 = t;
    p_102 :
    if(match_cons(v_102, sym_Off_1))
      {
        w_102 = ATgetArgument(v_102, 0);
        t = not_null(w_102);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_1(t, q_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,u_103 = NULL;
  o_103 = t;
  b_103 :
  if(match_cons(o_103, sym_As_2))
    {
      p_103 = ATgetArgument(o_103, 0);
      r_103 = ATgetArgument(o_103, 1);
      c_103 :
      if(match_cons(p_103, sym_Var_1))
        {
          q_103 = ATgetArgument(p_103, 0);
          d_103 :
          if(match_cons(r_103, sym_As_2))
            {
              u_103 = ATgetArgument(r_103, 0);
              l_103 = ATgetArgument(r_103, 1);
              i_103 :
              if(match_cons(u_103, sym_Off_1))
                {
                  k_103 = ATgetArgument(u_103, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_103)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_103))));
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
          if(match_cons(p_103, sym_Off_1))
            {
              q_103 = ATgetArgument(p_103, 0);
              j_103 :
              if(match_cons(r_103, sym_Var_1))
                {
                  u_103 = ATgetArgument(r_103, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_103)), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_103))));
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
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_104 = NULL,e_104 = NULL,f_104 = NULL;
  d_104 = t;
  c_104 :
  if(((ATermList) d_104 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_104) == AT_LIST) && ((ATermList) d_104 != ATempty)))
        {
          e_104 = ATgetFirst((ATermList) d_104);
          f_104 = (ATerm) ATgetNext((ATermList) d_104);
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
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,w_104 = NULL;
  r_104 = t;
  k_104 :
  if(match_cons(r_104, sym_As_2))
    {
      s_104 = ATgetArgument(r_104, 0);
      u_104 = ATgetArgument(r_104, 1);
      l_104 :
      if(match_cons(s_104, sym_Var_1))
        {
          t_104 = ATgetArgument(s_104, 0);
          m_104 :
          if(match_cons(u_104, sym_As_2))
            {
              w_104 = ATgetArgument(u_104, 0);
              q_104 = ATgetArgument(u_104, 1);
              n_104 :
              if(match_cons(w_104, sym_Off_1))
                {
                  p_104 = ATgetArgument(w_104, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_104)), not_null(q_104));
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
          if(match_cons(s_104, sym_Off_1))
            {
              t_104 = ATgetArgument(s_104, 0);
              o_104 :
              if(match_cons(u_104, sym_Var_1))
                {
                  w_104 = ATgetArgument(u_104, 0);
                  {
                    t = not_null(t_104);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(t_104)), term_t_11);
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
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm a_101 (ATerm))
{
  ATerm p_105 = NULL,r_105 = NULL,s_105 = NULL;
  p_105 = t;
  o_105 :
  if(((ATgetType(p_105) == AT_LIST) && ((ATermList) p_105 != ATempty)))
    {
      r_105 = ATgetFirst((ATermList) p_105);
      s_105 = (ATerm) ATgetNext((ATermList) p_105);
      {
        t = a_101(t);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm v_105 = NULL;
            v_105 = t;
            if(((r_105 != NULL) && (r_105 != v_105)))
              _fail(v_105);
            else
              r_105 = v_105;
            return(t);
          }
          t = fetch_1(t, r_3);
        }
        t = not_null(s_105);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm a_106 = NULL,b_106 = NULL,c_106 = NULL;
  a_106 = t;
  z_105 :
  if(match_cons(a_106, sym__2))
    {
      b_106 = ATgetArgument(a_106, 0);
      c_106 = ATgetArgument(a_106, 1);
      {
        t = not_null(b_106);
        {
          ATerm g_106 (ATerm t)
          {
            ATerm y_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_106);
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
                      ATerm s_3 (ATerm t)
                      {
                        t = not_null(c_106);
                        return(t);
                      }
                      t = HdMember_1(t, s_3);
                      t = g_106(t);
                      LocalPopChoice(b_23);
                    }
                  else
                    {
                      t = a_23;
                      t = Cons_2(t, _id, g_106);
                    }
                }
              }
            return(t);
          }
          t = g_106(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_99 (ATerm), ATerm w_99 (ATerm))
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_99(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      {
        ATerm k_106 = NULL,l_106 = NULL,m_106 = NULL;
        k_106 = t;
        j_106 :
        if(((ATgetType(k_106) == AT_LIST) && ((ATermList) k_106 != ATempty)))
          {
            l_106 = ATgetFirst((ATermList) k_106);
            m_106 = (ATerm) ATgetNext((ATermList) k_106);
            {
              ATerm r_106 = NULL;
              ATerm s_106 = NULL;
              t = not_null(m_106);
              {
                t = foldr_2(t, v_99, w_99);
                {
                  s_106 = t;
                  if(((r_106 != NULL) && (r_106 != s_106)))
                    _fail(s_106);
                  else
                    r_106 = s_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_106), not_null(r_106));
                t = w_99(t);
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
ATerm unions_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_2(t, t_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,f_107 = NULL;
  z_106 = t;
  w_106 :
  if(match_cons(z_106, sym__2))
    {
      a_107 = ATgetArgument(z_106, 0);
      d_107 = ATgetArgument(z_106, 1);
      x_106 :
      if(match_cons(a_107, sym__2))
        {
          b_107 = ATgetArgument(a_107, 0);
          c_107 = ATgetArgument(a_107, 1);
          y_106 :
          if(match_cons(d_107, sym__2))
            {
              e_107 = ATgetArgument(d_107, 0);
              f_107 = ATgetArgument(d_107, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_107)), not_null(b_107)), (ATerm) ATinsert(CheckATermList(not_null(f_107)), not_null(c_107)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL;
  o_107 = t;
  n_107 :
  if(((ATgetType(o_107) == AT_LIST) && ((ATermList) o_107 != ATempty)))
    {
      p_107 = ATgetFirst((ATermList) o_107);
      q_107 = (ATerm) ATgetNext((ATermList) o_107);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_107), not_null(q_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm c_108 = NULL;
  c_108 = t;
  z_107 :
  if(((ATermList) c_108 == ATempty))
    {
      t = term_k_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm m_105 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, m_105);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm t_102 (ATerm), ATerm u_102 (ATerm))
{
  ATerm p_108 = NULL;
  ATerm r_108 = NULL,s_108 = NULL,y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,k_109 = NULL;
  p_108 = t;
  {
    ATerm n_23;
    n_23 = t;
    {
      ATerm t_108 = NULL;
      ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL;
      t = not_null(p_108);
      {
        t_108 = t;
        {
          t = SSL_explode_term(not_null(t_108));
          {
            v_108 = t;
            h_108 :
            if(match_cons(v_108, sym__2))
              {
                w_108 = ATgetArgument(v_108, 0);
                x_108 = ATgetArgument(v_108, 1);
                {
                  if(((r_108 != NULL) && (r_108 != w_108)))
                    _fail(w_108);
                  else
                    r_108 = w_108;
                  if(((s_108 != NULL) && (s_108 != x_108)))
                    _fail(x_108);
                  else
                    s_108 = x_108;
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
    t = n_23;
    {
      ATerm o_23;
      o_23 = t;
      {
        ATerm c_109 = NULL,d_109 = NULL,e_109 = NULL;
        t = not_null(s_108);
        {
          t = unzip_1(t, t_102);
          {
            c_109 = t;
            m_108 :
            if(match_cons(c_109, sym__2))
              {
                d_109 = ATgetArgument(c_109, 0);
                e_109 = ATgetArgument(c_109, 1);
                {
                  ATerm f_109 = NULL;
                  if(((z_108 != NULL) && (z_108 != d_109)))
                    _fail(d_109);
                  else
                    z_108 = d_109;
                  {
                    if(((y_108 != NULL) && (y_108 != e_109)))
                      _fail(e_109);
                    else
                      y_108 = e_109;
                    {
                      ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
                      t = SSL_mkterm(not_null(r_108), not_null(z_108));
                      {
                        f_109 = t;
                        {
                          t = u_102(t);
                          {
                            h_109 = t;
                            l_108 :
                            if(match_cons(h_109, sym__2))
                              {
                                i_109 = ATgetArgument(h_109, 0);
                                j_109 = ATgetArgument(h_109, 1);
                                {
                                  if(((a_109 != NULL) && (a_109 != i_109)))
                                    _fail(i_109);
                                  else
                                    a_109 = i_109;
                                  if(((b_109 != NULL) && (b_109 != j_109)))
                                    _fail(j_109);
                                  else
                                    b_109 = j_109;
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
            else
              {
                _fail(t);
              }
          }
        }
      }
      t = o_23;
      {
        ATerm l_109 = NULL,n_109 = NULL;
        ATerm m_109 = NULL;
        t = not_null(y_108);
        {
          t = unions_0(t);
          {
            m_109 = t;
            if(((l_109 != NULL) && (l_109 != m_109)))
              _fail(m_109);
            else
              l_109 = m_109;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), not_null(l_109));
          {
            t = union_0(t);
            {
              n_109 = t;
              if(((k_109 != NULL) && (k_109 != n_109)))
                _fail(n_109);
              else
                k_109 = n_109;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_109), not_null(k_109));
      }
    }
  }
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm q_102 (ATerm), ATerm r_102 (ATerm))
{
  ATerm c_110 (ATerm t)
  {
    ATerm w_3 (ATerm t)
    {
      ATerm y_109 = NULL,a_110 = NULL;
      ATerm p_23;
      p_23 = t;
      {
        ATerm z_109 = NULL;
        t = try_1(t, q_102);
        {
          z_109 = t;
          if(((y_109 != NULL) && (y_109 != z_109)))
            _fail(z_109);
          else
            y_109 = z_109;
        }
      }
      t = p_23;
      {
        ATerm b_110 = NULL;
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_102(t);
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            t = (ATerm) ATempty;
          }
        {
          b_110 = t;
          if(((a_110 != NULL) && (a_110 != b_110)))
            _fail(b_110);
          else
            a_110 = b_110;
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_109), not_null(a_110));
      }
      return(t);
    }
    t = CollectSplit_2(t, c_110, w_3);
    return(t);
  }
  t = c_110(t);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm w_112 (ATerm))
{
  ATerm i_110 = NULL,j_110 = NULL,k_110 = NULL;
  i_110 = t;
  h_110 :
  if(match_cons(i_110, sym__2))
    {
      j_110 = ATgetArgument(i_110, 0);
      k_110 = ATgetArgument(i_110, 1);
      {
        ATerm n_110 = NULL;
        ATerm o_110 = NULL;
        t = w_112(t);
        {
          o_110 = t;
          if(((n_110 != NULL) && (n_110 != o_110)))
            _fail(o_110);
          else
            n_110 = o_110;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(n_110)), not_null(j_110))), not_null(k_110));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm t_110 = NULL,u_110 = NULL,v_110 = NULL;
  t_110 = t;
  s_110 :
  if(match_cons(t_110, sym__2))
    {
      u_110 = ATgetArgument(t_110, 0);
      v_110 = ATgetArgument(t_110, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_110)), not_null(u_110));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL,d_111 = NULL;
  b_111 = t;
  a_111 :
  if(match_cons(b_111, sym__2))
    {
      c_111 = ATgetArgument(b_111, 0);
      d_111 = ATgetArgument(b_111, 1);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_111), not_null(d_111));
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = SSL_addr(not_null(c_111), not_null(d_111));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL;
  l_111 = t;
  j_111 :
  if(match_cons(l_111, sym__2))
    {
      m_111 = ATgetArgument(l_111, 0);
      n_111 = ATgetArgument(l_111, 1);
      k_111 :
      if(((ATgetType(n_111) == AT_LIST) && ((ATermList) n_111 != ATempty)))
        {
          o_111 = ATgetFirst((ATermList) n_111);
          p_111 = (ATerm) ATgetNext((ATermList) n_111);
          {
            ATerm t_111 = NULL;
            ATerm c_112 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_111), term_h_12);
            {
              t = add_0(t);
              {
                c_112 = t;
                if(((t_111 != NULL) && (t_111 != c_112)))
                  _fail(c_112);
                else
                  t_111 = c_112;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_111), not_null(o_111)), (ATerm) ATmakeAppl(sym__2, not_null(t_111), not_null(p_111)));
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
ATerm NZip1_0 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL;
  i_112 = t;
  g_112 :
  if(match_cons(i_112, sym__2))
    {
      j_112 = ATgetArgument(i_112, 0);
      k_112 = ATgetArgument(i_112, 1);
      h_112 :
      if(((ATermList) k_112 == ATempty))
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
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm))
{
  ATerm n_112 (ATerm t)
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
          t = d_105(t);
          {
            t = _2(t, f_105, n_112);
            t = e_105(t);
          }
        }
      }
    return(t);
  }
  t = n_112(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm p_112 = NULL;
  p_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(p_112));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm n_105 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, n_105);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL;
  ATerm x_113 (ATerm t)
  {
    ATerm n_113 = NULL;
    ATerm o_113 = NULL;
    t = not_null(i_113);
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          t = not_null(h_113);
          return(t);
        }
        t = Annotate_1(t, y_3);
        return(t);
      }
      t = nzip0_1(t, x_3);
      {
        o_113 = t;
        if(((n_113 != NULL) && (n_113 != o_113)))
          _fail(o_113);
        else
          n_113 = o_113;
      }
    }
    t = not_null(n_113);
    return(t);
  }
  ATerm y_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_113)), term_t_11);
    return(t);
  }
  ATerm z_113 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_113)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_113)), not_null(k_113)));
    return(t);
  }
  ATerm a_114 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_113)), (ATerm) ATmakeAppl(sym_Op_2, not_null(j_113), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(h_113)), not_null(k_113))));
    return(t);
  }
  f_113 = t;
  a_113 :
  if(match_cons(f_113, sym_As_2))
    {
      g_113 = ATgetArgument(f_113, 0);
      i_113 = ATgetArgument(f_113, 1);
      b_113 :
      if(match_cons(g_113, sym_Off_1))
        {
          h_113 = ATgetArgument(g_113, 0);
          c_113 :
          if(match_cons(i_113, sym_BuildDefault_1))
            {
              j_113 = ATgetArgument(i_113, 0);
              {
                ATerm a_24 = t;
                int b_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_113(t);
                    LocalPopChoice(b_24);
                  }
                else
                  {
                    t = a_24;
                    t = y_113(t);
                  }
              }
            }
          else
            {
              if(match_cons(i_113, sym_As_2))
                {
                  j_113 = ATgetArgument(i_113, 0);
                  k_113 = ATgetArgument(i_113, 1);
                  d_113 :
                  if(match_cons(j_113, sym_Var_1))
                    {
                      e_113 = ATgetArgument(j_113, 0);
                      {
                        ATerm c_24 = t;
                        int g_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_113(t);
                            LocalPopChoice(g_24);
                          }
                        else
                          {
                            t = c_24;
                            t = z_113(t);
                          }
                      }
                    }
                  else
                    {
                      t = x_113(t);
                    }
                }
              else
                {
                  if(match_cons(i_113, sym_Op_2))
                    {
                      j_113 = ATgetArgument(i_113, 0);
                      k_113 = ATgetArgument(i_113, 1);
                      {
                        ATerm i_24 = t;
                        int l_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_113(t);
                            LocalPopChoice(l_24);
                          }
                        else
                          {
                            t = i_24;
                            t = a_114(t);
                          }
                      }
                    }
                  else
                    {
                      t = x_113(t);
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
ATerm topdown_1 (ATerm t, ATerm w_107 (ATerm))
{
  ATerm c_114 (ATerm t)
  {
    t = w_107(t);
    t = _all(t, c_114);
    return(t);
  }
  t = c_114(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm h_114 = NULL;
  ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL;
  h_114 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, term_m_24, (ATerm) ATinsert(ATempty, not_null(h_114)));
    {
      ATerm b_4 (ATerm t)
      {
        t = try_1(t, Propagate_0);
        return(t);
      }
      t = topdown_1(t, b_4);
      {
        t = collect_substitutions_0(t);
        {
          j_114 = t;
          g_114 :
          if(match_cons(j_114, sym__2))
            {
              k_114 = ATgetArgument(j_114, 0);
              l_114 = ATgetArgument(j_114, 1);
              {
                ATerm o_114 = NULL;
                ATerm p_114 = NULL;
                t = not_null(k_114);
                {
                  t = collect_offsets_0(t);
                  {
                    p_114 = t;
                    if(((o_114 != NULL) && (o_114 != p_114)))
                      _fail(p_114);
                    else
                      o_114 = p_114;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(o_114), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(k_114), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(l_114)))));
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
ATerm MatchToMatrix_0 (ATerm t)
{
  ATerm v_114 = NULL,w_114 = NULL;
  v_114 = t;
  u_114 :
  if(match_cons(v_114, sym_Match_1))
    {
      w_114 = ATgetArgument(v_114, 0);
      {
        t = not_null(w_114);
        t = term_to_matrix_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm z_114 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        t = z_114(t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = u_94(t);
      }
    return(t);
  }
  t = z_114(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_94 (ATerm))
{
  t = repeat_2(t, w_94, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm a_108 (ATerm))
{
  ATerm a_115 (ATerm t)
  {
    t = a_108(t);
    {
      t = _all(t, a_115);
      t = a_108(t);
    }
    return(t);
  }
  t = a_115(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm d_4 (ATerm t)
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          {
            ATerm r_24 = t;
            int s_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                LocalPopChoice(s_24);
              }
            else
              {
                t = r_24;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, d_4);
    return(t);
  }
  t = downup_1(t, c_4);
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
ATerm SDef_3 (ATerm t, ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm))
{
  ATerm i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL;
  i_115 = t;
  h_115 :
  if(match_cons(i_115, sym_SDef_3))
    {
      j_115 = ATgetArgument(i_115, 0);
      k_115 = ATgetArgument(i_115, 1);
      l_115 = ATgetArgument(i_115, 2);
      {
        ATerm q_115 = NULL,s_115 = NULL;
        ATerm r_115 = NULL;
        t = SSLgetAnnotations(not_null(i_115));
        {
          r_115 = t;
          if(((q_115 != NULL) && (q_115 != r_115)))
            _fail(r_115);
          else
            q_115 = r_115;
        }
        {
          t = not_null(j_115);
          {
            ATerm u_115 = NULL;
            t = f_87(t);
            {
              s_115 = t;
              {
                t = not_null(k_115);
                {
                  ATerm w_115 = NULL;
                  t = g_87(t);
                  {
                    u_115 = t;
                    {
                      t = not_null(l_115);
                      {
                        ATerm y_115 = NULL;
                        t = h_87(t);
                        {
                          w_115 = t;
                          {
                            ATerm z_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(s_115), not_null(u_115), not_null(w_115)), not_null(q_115));
                            {
                              z_115 = t;
                              if(((y_115 != NULL) && (y_115 != z_115)))
                                _fail(z_115);
                              else
                                y_115 = z_115;
                            }
                            t = not_null(y_115);
                          }
                        }
                      }
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
  ATerm l_116 = NULL,m_116 = NULL;
  l_116 = t;
  k_116 :
  if(match_cons(l_116, sym_Strategies_1))
    {
      m_116 = ATgetArgument(l_116, 0);
      {
        ATerm p_116 = NULL,r_116 = NULL;
        ATerm q_116 = NULL;
        t = SSLgetAnnotations(not_null(l_116));
        {
          q_116 = t;
          if(((p_116 != NULL) && (p_116 != q_116)))
            _fail(q_116);
          else
            p_116 = q_116;
        }
        {
          t = not_null(m_116);
          {
            ATerm t_116 = NULL;
            t = s_85(t);
            {
              r_116 = t;
              {
                ATerm u_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(r_116)), not_null(p_116));
                {
                  u_116 = t;
                  if(((t_116 != NULL) && (t_116 != u_116)))
                    _fail(u_116);
                  else
                    t_116 = u_116;
                }
                t = not_null(t_116);
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
  ATerm e_117 = NULL,f_117 = NULL;
  e_117 = t;
  d_117 :
  if(match_cons(e_117, sym_Specification_1))
    {
      f_117 = ATgetArgument(e_117, 0);
      {
        ATerm i_117 = NULL,k_117 = NULL;
        ATerm j_117 = NULL;
        t = SSLgetAnnotations(not_null(e_117));
        {
          j_117 = t;
          if(((i_117 != NULL) && (i_117 != j_117)))
            _fail(j_117);
          else
            i_117 = j_117;
        }
        {
          t = not_null(f_117);
          {
            ATerm m_117 = NULL;
            t = u_85(t);
            {
              k_117 = t;
              {
                ATerm n_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_117)), not_null(i_117));
                {
                  n_117 = t;
                  if(((m_117 != NULL) && (m_117 != n_117)))
                    _fail(n_117);
                  else
                    m_117 = n_117;
                }
                t = not_null(m_117);
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
  ATerm e_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        ATerm h_4 (ATerm t)
        {
          ATerm i_4 (ATerm t)
          {
            t = SDef_3(t, _id, _id, x_112);
            return(t);
          }
          t = map_1(t, i_4);
          return(t);
        }
        t = Strategies_1(t, h_4);
        return(t);
      }
      t = Cons_2(t, g_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, f_4);
    return(t);
  }
  t = Specification_1(t, e_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm))
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
  y_117 = t;
  x_117 :
  if(match_cons(y_117, sym__2))
    {
      z_117 = ATgetArgument(y_117, 0);
      a_118 = ATgetArgument(y_117, 1);
      {
        ATerm e_118 = NULL,g_118 = NULL;
        ATerm f_118 = NULL;
        t = SSLgetAnnotations(not_null(y_117));
        {
          f_118 = t;
          if(((e_118 != NULL) && (e_118 != f_118)))
            _fail(f_118);
          else
            e_118 = f_118;
        }
        {
          t = not_null(z_117);
          {
            ATerm i_118 = NULL;
            t = m_76(t);
            {
              g_118 = t;
              {
                t = not_null(a_118);
                {
                  ATerm k_118 = NULL;
                  t = n_76(t);
                  {
                    i_118 = t;
                    {
                      ATerm l_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_118), not_null(i_118)), not_null(e_118));
                      {
                        l_118 = t;
                        if(((k_118 != NULL) && (k_118 != l_118)))
                          _fail(l_118);
                        else
                          k_118 = l_118;
                      }
                      t = not_null(k_118);
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
  ATerm t_118 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm u_118 = NULL,v_118 = NULL;
      u_118 = t;
      s_118 :
      if(match_cons(u_118, sym_Program_1))
        {
          v_118 = ATgetArgument(u_118, 0);
          if(((t_118 != NULL) && (t_118 != v_118)))
            _fail(v_118);
          else
            t_118 = v_118;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_24), not_null(t_118)), term_v_24));
      {
        t = printnl_0(t);
        {
          t = term_h_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATempty, term_x_24));
  {
    t = printnl_0(t);
    {
      t = term_h_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL;
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm b_25 = t;
      if((PushChoice() == 0))
        {
          ATerm m_4 (ATerm t)
          {
            ATerm e_119 = NULL;
            e_119 = t;
            x_118 :
            if(!(match_cons(e_119, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, m_4);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_25;
        }
      return(t);
    }
    t = _2(t, l_4, _id);
    {
      ATerm n_4 (ATerm t)
      {
        ATerm o_4 (ATerm t)
        {
          ATerm f_119 = NULL,g_119 = NULL;
          f_119 = t;
          z_118 :
          if(match_cons(f_119, sym_Runtime_1))
            {
              g_119 = ATgetArgument(f_119, 0);
              if(((d_119 != NULL) && (d_119 != g_119)))
                _fail(g_119);
              else
                d_119 = g_119;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_4);
        return(t);
      }
      t = _2(t, n_4, _id);
      {
        ATerm p_4 (ATerm t)
        {
          ATerm q_4 (ATerm t)
          {
            ATerm h_119 = NULL,i_119 = NULL;
            h_119 = t;
            b_119 :
            if(match_cons(h_119, sym_Program_1))
              {
                i_119 = ATgetArgument(h_119, 0);
                if(((c_119 != NULL) && (c_119 != i_119)))
                  _fail(i_119);
                else
                  c_119 = i_119;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_4);
          return(t);
        }
        t = _2(t, p_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_25), not_null(d_119)), term_c_25), not_null(c_119)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, k_4);
  {
    t = term_l_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL;
  n_119 = t;
  m_119 :
  if(match_cons(n_119, sym__2))
    {
      o_119 = ATgetArgument(n_119, 0);
      p_119 = ATgetArgument(n_119, 1);
      t = SSL_WriteToTextFile(not_null(o_119), not_null(p_119));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL;
  v_119 = t;
  u_119 :
  if(match_cons(v_119, sym__2))
    {
      w_119 = ATgetArgument(v_119, 0);
      x_119 = ATgetArgument(v_119, 1);
      t = SSL_WriteToBinaryFile(not_null(w_119), not_null(x_119));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_120 = NULL;
  ATerm j_25;
  j_25 = t;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm k_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 (ATerm t)
          {
            ATerm g_120 = NULL,h_120 = NULL;
            g_120 = t;
            c_120 :
            if(match_cons(g_120, sym_Output_1))
              {
                h_120 = ATgetArgument(g_120, 0);
                if(((f_120 != NULL) && (f_120 != h_120)))
                  _fail(h_120);
                else
                  f_120 = h_120;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_4);
          LocalPopChoice(o_25);
        }
      else
        {
          t = k_25;
          {
            ATerm i_120 = NULL;
            t = term_r_25;
            {
              i_120 = t;
              if(((f_120 != NULL) && (f_120 != i_120)))
                _fail(i_120);
              else
                f_120 = i_120;
            }
          }
        }
      return(t);
    }
    t = _2(t, r_4, _id);
  }
  t = j_25;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = not_null(f_120);
        return(t);
      }
      t = split_2(t, u_4, _id);
      return(t);
    }
    t = _2(t, _id, t_4);
    {
      ATerm s_25 = t;
      int t_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_4 (ATerm t)
          {
            ATerm w_4 (ATerm t)
            {
              ATerm j_120 = NULL;
              j_120 = t;
              e_120 :
              if(!(match_cons(j_120, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, w_4);
            return(t);
          }
          t = _2(t, v_4, WriteToBinaryFile_0);
          LocalPopChoice(t_25);
        }
      else
        {
          t = s_25;
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
  ATerm p_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL;
  ATerm u_25;
  u_25 = t;
  t = dtime_0(t);
  t = u_25;
  {
    t = x_91(t);
    {
      ATerm v_25;
      v_25 = t;
      {
        ATerm q_120 = NULL;
        t = dtime_0(t);
        {
          q_120 = t;
          if(((p_120 != NULL) && (p_120 != q_120)))
            _fail(q_120);
          else
            p_120 = q_120;
        }
      }
      t = v_25;
      {
        r_120 = t;
        o_120 :
        if(match_cons(r_120, sym__2))
          {
            s_120 = ATgetArgument(r_120, 0);
            t_120 = ATgetArgument(r_120, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_120)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_120))), not_null(t_120));
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
  ATerm z_120 = NULL;
  z_120 = t;
  t = SSL_ReadFromFile(not_null(z_120));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_106 (ATerm), ATerm q_106 (ATerm))
{
  ATerm e_121 = NULL,g_121 = NULL;
  ATerm w_25;
  w_25 = t;
  {
    ATerm f_121 = NULL;
    t = p_106(t);
    {
      f_121 = t;
      if(((e_121 != NULL) && (e_121 != f_121)))
        _fail(f_121);
      else
        e_121 = f_121;
    }
  }
  t = w_25;
  {
    ATerm h_121 = NULL;
    t = q_106(t);
    {
      h_121 = t;
      if(((g_121 != NULL) && (g_121 != h_121)))
        _fail(h_121);
      else
        g_121 = h_121;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_121), not_null(g_121));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_121 = NULL;
  ATerm x_25;
  x_25 = t;
  {
    ATerm y_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 (ATerm t)
        {
          ATerm o_121 = NULL,p_121 = NULL;
          o_121 = t;
          l_121 :
          if(match_cons(o_121, sym_Input_1))
            {
              p_121 = ATgetArgument(o_121, 0);
              if(((n_121 != NULL) && (n_121 != p_121)))
                _fail(p_121);
              else
                n_121 = p_121;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, x_4);
        LocalPopChoice(z_25);
      }
    else
      {
        t = y_25;
        {
          ATerm q_121 = NULL;
          t = term_a_26;
          {
            q_121 = t;
            if(((n_121 != NULL) && (n_121 != q_121)))
              _fail(q_121);
            else
              n_121 = q_121;
          }
        }
      }
  }
  t = x_25;
  {
    ATerm y_4 (ATerm t)
    {
      t = not_null(n_121);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_4);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_121 = NULL;
  x_121 = t;
  w_121 :
  if(match_cons(x_121, sym_Version_0))
    {
      ATerm z_121 = NULL,b_122 = NULL;
      ATerm b_26;
      b_26 = t;
      {
        ATerm a_122 = NULL;
        t = SSLgetAnnotations(not_null(x_121));
        {
          a_122 = t;
          if(((z_121 != NULL) && (z_121 != a_122)))
            _fail(a_122);
          else
            z_121 = a_122;
        }
      }
      t = b_26;
      {
        ATerm c_122 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_121));
        {
          c_122 = t;
          if(((b_122 != NULL) && (b_122 != c_122)))
            _fail(c_122);
          else
            b_122 = c_122;
        }
        t = not_null(b_122);
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
  ATerm z_4 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_4);
  t = w_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_122 = NULL;
  h_122 = t;
  t = SSL_table_create(not_null(h_122));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_122 = NULL;
  l_122 = t;
  {
    ATerm g_26;
    g_26 = t;
    {
      t = term_k_26;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_26, term_l_26, not_null(l_122));
          t = table_put_0(t);
        }
      }
    }
    t = g_26;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL;
  t_122 = t;
  r_122 :
  if(match_string(t_122, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(t_122) == AT_LIST) && ((ATermList) t_122 != ATempty)))
        {
          u_122 = ATgetFirst((ATermList) t_122);
          v_122 = (ATerm) ATgetNext((ATermList) t_122);
          s_122 :
          if(((ATgetType(v_122) == AT_LIST) && ((ATermList) v_122 != ATempty)))
            {
              w_122 = ATgetFirst((ATermList) v_122);
              x_122 = (ATerm) ATgetNext((ATermList) v_122);
              {
                ATerm b_123 = NULL;
                ATerm p_26;
                p_26 = t;
                {
                  t = not_null(u_122);
                  t = k_0(t);
                }
                t = p_26;
                {
                  ATerm c_123 = NULL;
                  t = not_null(w_122);
                  {
                    t = l_0(t);
                    {
                      c_123 = t;
                      if(((b_123 != NULL) && (b_123 != c_123)))
                        _fail(c_123);
                      else
                        b_123 = c_123;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_122)), not_null(b_123));
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
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 (ATerm t)
      {
        ATerm r_123 = NULL;
        r_123 = t;
        g_123 :
        if(!(match_string(r_123, "-S")))
          {
            if(!(match_string(r_123, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = term_x_26;
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        t = term_a_27;
        return(t);
      }
      t = Option_3(t, a_5, b_5, c_5);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 (ATerm t)
            {
              ATerm s_123 = NULL;
              s_123 = t;
              h_123 :
              if(!(match_string(s_123, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_5 (ATerm t)
            {
              t = term_d_27;
              return(t);
            }
            ATerm f_5 (ATerm t)
            {
              t = term_e_27;
              return(t);
            }
            t = Option_3(t, d_5, e_5, f_5);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm f_27 = t;
              int g_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm t_123 = NULL;
                    t_123 = t;
                    i_123 :
                    if(!(match_string(t_123, "-v")))
                      {
                        if(!(match_string(t_123, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_5 (ATerm t)
                  {
                    t = term_h_27;
                    return(t);
                  }
                  ATerm i_5 (ATerm t)
                  {
                    t = term_i_27;
                    return(t);
                  }
                  t = Option_3(t, g_5, h_5, i_5);
                  LocalPopChoice(g_27);
                }
              else
                {
                  t = f_27;
                  {
                    ATerm j_27 = t;
                    int k_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_5 (ATerm t)
                        {
                          ATerm u_123 = NULL;
                          u_123 = t;
                          j_123 :
                          if(!(match_string(u_123, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_5 (ATerm t)
                        {
                          ATerm w_123 = NULL;
                          ATerm x_123 = NULL;
                          x_123 = t;
                          if(((w_123 != NULL) && (w_123 != x_123)))
                            _fail(x_123);
                          else
                            w_123 = x_123;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(w_123));
                          return(t);
                        }
                        ATerm l_5 (ATerm t)
                        {
                          t = term_l_27;
                          return(t);
                        }
                        t = ArgOption_3(t, j_5, k_5, l_5);
                        LocalPopChoice(k_27);
                      }
                    else
                      {
                        t = j_27;
                        {
                          ATerm m_27 = t;
                          int n_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_5 (ATerm t)
                              {
                                ATerm y_123 = NULL;
                                y_123 = t;
                                l_123 :
                                if(!(match_string(y_123, "-i")))
                                  {
                                    if(!(match_string(y_123, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_5 (ATerm t)
                              {
                                ATerm z_123 = NULL;
                                ATerm a_124 = NULL;
                                a_124 = t;
                                if(((z_123 != NULL) && (z_123 != a_124)))
                                  _fail(a_124);
                                else
                                  z_123 = a_124;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_123));
                                return(t);
                              }
                              ATerm o_5 (ATerm t)
                              {
                                t = term_o_27;
                                return(t);
                              }
                              t = ArgOption_3(t, m_5, n_5, o_5);
                              LocalPopChoice(n_27);
                            }
                          else
                            {
                              t = m_27;
                              {
                                ATerm p_27 = t;
                                int t_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_5 (ATerm t)
                                    {
                                      ATerm b_124 = NULL;
                                      b_124 = t;
                                      n_123 :
                                      if(!(match_string(b_124, "-o")))
                                        {
                                          if(!(match_string(b_124, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_5 (ATerm t)
                                    {
                                      ATerm c_124 = NULL;
                                      ATerm d_124 = NULL;
                                      d_124 = t;
                                      if(((c_124 != NULL) && (c_124 != d_124)))
                                        _fail(d_124);
                                      else
                                        c_124 = d_124;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_124));
                                      return(t);
                                    }
                                    ATerm r_5 (ATerm t)
                                    {
                                      t = term_u_27;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_5, q_5, r_5);
                                    LocalPopChoice(t_27);
                                  }
                                else
                                  {
                                    t = p_27;
                                    {
                                      ATerm y_27 = t;
                                      int b_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_5 (ATerm t)
                                          {
                                            ATerm e_124 = NULL;
                                            e_124 = t;
                                            p_123 :
                                            if(!(match_string(e_124, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_5 (ATerm t)
                                          {
                                            t = term_c_28;
                                            return(t);
                                          }
                                          ATerm u_5 (ATerm t)
                                          {
                                            t = term_g_28;
                                            return(t);
                                          }
                                          t = Option_3(t, s_5, t_5, u_5);
                                          LocalPopChoice(b_28);
                                        }
                                      else
                                        {
                                          t = y_27;
                                          {
                                            ATerm v_5 (ATerm t)
                                            {
                                              ATerm f_124 = NULL;
                                              f_124 = t;
                                              q_123 :
                                              if(!(match_string(f_124, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm w_5 (ATerm t)
                                            {
                                              t = term_j_28;
                                              return(t);
                                            }
                                            ATerm x_5 (ATerm t)
                                            {
                                              t = term_k_28;
                                              return(t);
                                            }
                                            t = Option_3(t, v_5, w_5, x_5);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_124 = NULL;
  l_124 = t;
  t = SSL_table_destroy(not_null(l_124));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_124 = NULL;
  p_124 = t;
  t = SSL_exit(not_null(p_124));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_124 = NULL;
  t_124 = t;
  t = SSL_implode_string(not_null(t_124));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm w_124 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_124);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          t = Nil_0(t);
          t = s_103(t);
        }
      }
    return(t);
  }
  t = w_124(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL;
        z_124 = t;
        y_124 :
        if(((ATgetType(z_124) == AT_LIST) && ((ATermList) z_124 != ATempty)))
          {
            a_125 = ATgetFirst((ATermList) z_124);
            b_125 = (ATerm) ATgetNext((ATermList) z_124);
            {
              t = not_null(a_125);
              {
                ATerm y_5 (ATerm t)
                {
                  t = not_null(b_125);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_5);
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
  ATerm h_125 = NULL;
  h_125 = t;
  t = SSL_explode_string(not_null(h_125));
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
  ATerm k_125 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = Cons_2(t, e_103, k_125);
      }
    return(t);
  }
  t = k_125(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm r_125 = NULL,s_125 = NULL,t_125 = NULL;
  t_125 = t;
  q_125 :
  if(((ATgetType(t_125) == AT_LIST) && ((ATermList) t_125 != ATempty)))
    {
      r_125 = ATgetFirst((ATermList) t_125);
      s_125 = (ATerm) ATgetNext((ATermList) t_125);
      {
        ATerm w_125 = NULL;
        t = not_null(s_125);
        {
          ATerm r_28;
          r_28 = t;
          {
            ATerm x_125 = NULL,z_125 = NULL,b_126 = NULL;
            ATerm s_28;
            s_28 = t;
            {
              ATerm y_125 = NULL;
              t = j_0(t);
              {
                y_125 = t;
                if(((x_125 != NULL) && (x_125 != y_125)))
                  _fail(y_125);
                else
                  x_125 = y_125;
              }
            }
            t = s_28;
            {
              ATerm a_126 = NULL;
              t = not_null(r_125);
              {
                t = i_0(t);
                {
                  a_126 = t;
                  if(((z_125 != NULL) && (z_125 != a_126)))
                    _fail(a_126);
                  else
                    z_125 = a_126;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_125)), not_null(z_125));
                {
                  b_126 = t;
                  if(((w_125 != NULL) && (w_125 != b_126)))
                    _fail(b_126);
                  else
                    w_125 = b_126;
                }
              }
            }
          }
          t = r_28;
          {
            ATerm z_5 (ATerm t)
            {
              t = not_null(w_125);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_125 == ATempty))
        {
          {
            t = term_t_28;
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
  ATerm a_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm m_126 = NULL,n_126 = NULL;
  m_126 = t;
  l_126 :
  if(match_cons(m_126, sym_Program_1))
    {
      n_126 = ATgetArgument(m_126, 0);
      {
        ATerm q_126 = NULL,s_126 = NULL;
        ATerm r_126 = NULL;
        t = SSLgetAnnotations(not_null(m_126));
        {
          r_126 = t;
          if(((q_126 != NULL) && (q_126 != r_126)))
            _fail(r_126);
          else
            q_126 = r_126;
        }
        {
          t = not_null(n_126);
          {
            ATerm u_126 = NULL;
            t = v_77(t);
            {
              s_126 = t;
              {
                ATerm v_126 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_126)), not_null(q_126));
                {
                  v_126 = t;
                  if(((u_126 != NULL) && (u_126 != v_126)))
                    _fail(v_126);
                  else
                    u_126 = v_126;
                }
                t = not_null(u_126);
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
  ATerm e_127 = NULL;
  ATerm b_6 (ATerm t)
  {
    ATerm c_6 (ATerm t)
    {
      ATerm f_127 = NULL;
      f_127 = t;
      if(((e_127 != NULL) && (e_127 != f_127)))
        _fail(f_127);
      else
        e_127 = f_127;
      return(t);
    }
    t = Program_1(t, c_6);
    return(t);
  }
  t = option_defined_1(t, b_6);
  {
    ATerm d_6 (ATerm t)
    {
      ATerm g_127 = NULL;
      ATerm h_127 = NULL;
      t = term_t_28;
      {
        ATerm e_6 (ATerm t)
        {
          t = not_null(e_127);
          return(t);
        }
        t = short_description_1(t, e_6);
        {
          t = concat_strings_0(t);
          {
            h_127 = t;
            if(((g_127 != NULL) && (g_127 != h_127)))
              _fail(h_127);
            else
              g_127 = h_127;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATempty, not_null(g_127)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATempty, term_u_28));
      {
        t = printnl_0(t);
        {
          t = term_d_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_6 (ATerm t)
                {
                  ATerm i_127 = NULL;
                  i_127 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_127)), term_g_29));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_6);
                {
                  ATerm g_6 (ATerm t)
                  {
                    ATerm k_127 = NULL;
                    ATerm l_127 = NULL;
                    t = term_t_28;
                    {
                      ATerm h_6 (ATerm t)
                      {
                        t = not_null(e_127);
                        return(t);
                      }
                      t = long_description_1(t, h_6);
                      {
                        t = concat_strings_0(t);
                        {
                          l_127 = t;
                          if(((k_127 != NULL) && (k_127 != l_127)))
                            _fail(l_127);
                          else
                            k_127 = l_127;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_127)), term_h_29));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_6);
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
  ATerm t_127 = NULL,u_127 = NULL,v_127 = NULL;
  t_127 = t;
  s_127 :
  if(match_cons(t_127, sym__2))
    {
      u_127 = ATgetArgument(t_127, 0);
      v_127 = ATgetArgument(t_127, 1);
      {
        ATerm i_29;
        i_29 = t;
        t = SSL_printnl(not_null(u_127), not_null(v_127));
        t = i_29;
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
  ATerm e_128 = NULL,f_128 = NULL;
  e_128 = t;
  d_128 :
  if(match_cons(e_128, sym_Undefined_1))
    {
      f_128 = ATgetArgument(e_128, 0);
      {
        ATerm i_128 = NULL,k_128 = NULL;
        ATerm j_128 = NULL;
        t = SSLgetAnnotations(not_null(e_128));
        {
          j_128 = t;
          if(((i_128 != NULL) && (i_128 != j_128)))
            _fail(j_128);
          else
            i_128 = j_128;
        }
        {
          t = not_null(f_128);
          {
            ATerm n_128 = NULL;
            t = w_77(t);
            {
              k_128 = t;
              {
                ATerm o_128 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_128)), not_null(i_128));
                {
                  o_128 = t;
                  if(((n_128 != NULL) && (n_128 != o_128)))
                    _fail(o_128);
                  else
                    n_128 = o_128;
                }
                t = not_null(n_128);
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
  ATerm t_128 (ATerm t)
  {
    ATerm j_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_103, _id);
        LocalPopChoice(l_29);
      }
    else
      {
        t = j_29;
        t = Cons_2(t, _id, t_128);
      }
    return(t);
  }
  t = t_128(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = fetch_1(t, b_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_128 = NULL;
  y_128 = t;
  x_128 :
  if(match_cons(y_128, sym_Help_0))
    {
      ATerm a_129 = NULL,c_129 = NULL;
      ATerm m_29;
      m_29 = t;
      {
        ATerm b_129 = NULL;
        t = SSLgetAnnotations(not_null(y_128));
        {
          b_129 = t;
          if(((a_129 != NULL) && (a_129 != b_129)))
            _fail(b_129);
          else
            a_129 = b_129;
        }
      }
      t = m_29;
      {
        ATerm d_129 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_129));
        {
          d_129 = t;
          if(((c_129 != NULL) && (c_129 != d_129)))
            _fail(d_129);
          else
            c_129 = d_129;
        }
        t = not_null(c_129);
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
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_107(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_129 = NULL,k_129 = NULL,l_129 = NULL;
  j_129 = t;
  i_129 :
  if(match_cons(j_129, sym__2))
    {
      k_129 = ATgetArgument(j_129, 0);
      l_129 = ATgetArgument(j_129, 1);
      t = SSL_table_get(not_null(k_129), not_null(l_129));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL,v_129 = NULL;
  s_129 = t;
  r_129 :
  if(match_cons(s_129, sym__3))
    {
      t_129 = ATgetArgument(s_129, 0);
      u_129 = ATgetArgument(s_129, 1);
      v_129 = ATgetArgument(s_129, 2);
      {
        ATerm s_29;
        s_29 = t;
        {
          ATerm z_129 = NULL;
          ATerm a_130 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_129), not_null(u_129));
          {
            ATerm t_29 = t;
            int x_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_29);
              }
            else
              {
                t = t_29;
                t = (ATerm) ATempty;
              }
            {
              a_130 = t;
              if(((z_129 != NULL) && (z_129 != a_130)))
                _fail(a_130);
              else
                z_129 = a_130;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_129), not_null(u_129), (ATerm) ATinsert(CheckATermList(not_null(z_129)), not_null(v_129)));
            t = table_put_0(t);
          }
        }
        t = s_29;
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
  ATerm e_130 = NULL;
  ATerm f_130 = NULL;
  t = term_t_28;
  {
    t = h_90(t);
    {
      f_130 = t;
      if(((e_130 != NULL) && (e_130 != f_130)))
        _fail(f_130);
      else
        e_130 = f_130;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_28, term_z_28, not_null(e_130));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm l_130 = NULL,m_130 = NULL,n_130 = NULL;
  l_130 = t;
  k_130 :
  if(match_string(l_130, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(l_130) == AT_LIST) && ((ATermList) l_130 != ATempty)))
        {
          m_130 = ATgetFirst((ATermList) l_130);
          n_130 = (ATerm) ATgetNext((ATermList) l_130);
          {
            ATerm q_130 = NULL;
            ATerm a_30;
            a_30 = t;
            {
              t = not_null(m_130);
              t = c_0(t);
            }
            t = a_30;
            {
              ATerm r_130 = NULL;
              t = term_t_28;
              {
                t = d_0(t);
                {
                  r_130 = t;
                  if(((q_130 != NULL) && (q_130 != r_130)))
                    _fail(r_130);
                  else
                    q_130 = r_130;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_130)), not_null(q_130));
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
  ATerm i_6 (ATerm t)
  {
    ATerm w_130 = NULL;
    w_130 = t;
    v_130 :
    if(!(match_string(w_130, "--help")))
      {
        if(!(match_string(w_130, "-h")))
          {
            if(!(match_string(w_130, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_6 (ATerm t)
  {
    t = term_b_30;
    return(t);
  }
  ATerm k_6 (ATerm t)
  {
    t = term_c_30;
    return(t);
  }
  t = Option_3(t, i_6, j_6, k_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL;
  z_130 = t;
  y_130 :
  if(((ATgetType(z_130) == AT_LIST) && ((ATermList) z_130 != ATempty)))
    {
      a_131 = ATgetFirst((ATermList) z_130);
      b_131 = (ATerm) ATgetNext((ATermList) z_130);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_131)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_131)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_88 (ATerm), ATerm l_88 (ATerm))
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL;
  l_131 = t;
  k_131 :
  if(((ATgetType(l_131) == AT_LIST) && ((ATermList) l_131 != ATempty)))
    {
      m_131 = ATgetFirst((ATermList) l_131);
      n_131 = (ATerm) ATgetNext((ATermList) l_131);
      {
        ATerm r_131 = NULL,t_131 = NULL;
        ATerm s_131 = NULL;
        t = SSLgetAnnotations(not_null(l_131));
        {
          s_131 = t;
          if(((r_131 != NULL) && (r_131 != s_131)))
            _fail(s_131);
          else
            r_131 = s_131;
        }
        {
          t = not_null(m_131);
          {
            ATerm v_131 = NULL;
            t = k_88(t);
            {
              t_131 = t;
              {
                t = not_null(n_131);
                {
                  ATerm x_131 = NULL;
                  t = l_88(t);
                  {
                    v_131 = t;
                    {
                      ATerm y_131 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_131)), not_null(t_131)), not_null(r_131));
                      {
                        y_131 = t;
                        if(((x_131 != NULL) && (x_131 != y_131)))
                          _fail(y_131);
                        else
                          x_131 = y_131;
                      }
                      t = not_null(x_131);
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
  ATerm i_132 = NULL;
  i_132 = t;
  h_132 :
  if(((ATermList) i_132 == ATempty))
    {
      {
        ATerm k_132 = NULL,m_132 = NULL;
        ATerm d_30;
        d_30 = t;
        {
          ATerm l_132 = NULL;
          t = SSLgetAnnotations(not_null(i_132));
          {
            l_132 = t;
            if(((k_132 != NULL) && (k_132 != l_132)))
              _fail(l_132);
            else
              k_132 = l_132;
          }
        }
        t = d_30;
        {
          ATerm n_132 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_132));
          {
            n_132 = t;
            if(((m_132 != NULL) && (m_132 != n_132)))
              _fail(n_132);
            else
              m_132 = n_132;
          }
          t = not_null(m_132);
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
  ATerm e_30;
  e_30 = t;
  {
    ATerm l_6 (ATerm t)
    {
      t = term_f_30;
      t = f_90(t);
      return(t);
    }
    t = try_1(t, l_6);
  }
  t = e_30;
  {
    ATerm m_6 (ATerm t)
    {
      ATerm s_132 = NULL;
      s_132 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_132));
      return(t);
    }
    ATerm n_6 (ATerm t)
    {
      ATerm g_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_30 = t;
          int p_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_30);
            }
          else
            {
              t = o_30;
              {
                t = f_90(t);
                t = Cons_2(t, _id, n_6);
              }
            }
          LocalPopChoice(j_30);
        }
      else
        {
          t = g_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_6, n_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_132 = NULL,z_132 = NULL,a_133 = NULL;
  ATerm q_30;
  q_30 = t;
  {
    ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL,e_133 = NULL;
    b_133 = t;
    x_132 :
    if(match_cons(b_133, sym__3))
      {
        c_133 = ATgetArgument(b_133, 0);
        d_133 = ATgetArgument(b_133, 1);
        e_133 = ATgetArgument(b_133, 2);
        {
          if(((y_132 != NULL) && (y_132 != c_133)))
            _fail(c_133);
          else
            y_132 = c_133;
          {
            if(((z_132 != NULL) && (z_132 != d_133)))
              _fail(d_133);
            else
              z_132 = d_133;
            {
              if(((a_133 != NULL) && (a_133 != e_133)))
                _fail(e_133);
              else
                a_133 = e_133;
              t = SSL_table_put(not_null(y_132), not_null(z_132), not_null(a_133));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm h_133 = NULL;
  ATerm r_30;
  r_30 = t;
  {
    t = term_s_30;
    t = table_put_0(t);
  }
  t = r_30;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm t_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_90(t);
          LocalPopChoice(v_30);
        }
      else
        {
          t = t_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_6);
    {
      ATerm p_6 (ATerm t)
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_l_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm q_6 (ATerm t)
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm i_133 = NULL;
                  i_133 = t;
                  if(((h_133 != NULL) && (h_133 != i_133)))
                    _fail(i_133);
                  else
                    h_133 = i_133;
                  return(t);
                }
                t = Undefined_1(t, r_6);
                return(t);
              }
              t = option_defined_1(t, q_6);
              {
                ATerm y_30;
                y_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_133)), term_z_30));
                  t = printnl_0(t);
                }
                t = y_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_12;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_6);
      {
        ATerm a_31;
        a_31 = t;
        {
          t = term_y_28;
          t = table_destroy_0(t);
        }
        t = a_31;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_6);
  {
    t = store_options_0(t);
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, n_91);
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm f_31 = t;
            int g_31 = stack_ptr;
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
                LocalPopChoice(g_31);
              }
            else
              {
                t = f_31;
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
  ATerm t_6 (ATerm t)
  {
    t = _2(t, _id, d_91);
    return(t);
  }
  t = iowrap_2(t, t_6, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, u_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}
