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
ATerm term_z_29;
ATerm term_p_29;
ATerm term_a_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_z_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_j_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_z_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_m_11;
ATerm term_q_7;
ATerm term_g_7;
void init_constant_terms (void)
{
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_DontInline_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__3, term_m_26, term_n_26, (ATerm) ATempty);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm simplify_0 (ATerm);
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
ATerm NarrowScope_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_107 (ATerm));
ATerm simplify_narrow_0 (ATerm);
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
            ATerm o_5 = t;
            int p_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(p_5);
              }
            else
              {
                t = o_5;
                {
                  ATerm t_5 = t;
                  int v_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_5;
                      y_5 = t;
                      {
                        ATerm b_0 (ATerm t)
                        {
                          t = not_null(g_4);
                          return(t);
                        }
                        t = HdMember_1(t, b_0);
                      }
                      t = y_5;
                      t = Cons_2(t, _id, k_4);
                      LocalPopChoice(v_5);
                    }
                  else
                    {
                      t = t_5;
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
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, x_111, v_111);
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
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
            ATerm b_6 = t;
            int c_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_7);
                LocalPopChoice(c_6);
              }
            else
              {
                t = b_6;
                {
                  ATerm d_6 = t;
                  int h_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_0 (ATerm t)
                      {
                        t = not_null(k_7);
                        return(t);
                      }
                      t = HdMember_1(t, e_0);
                      t = o_7(t);
                      LocalPopChoice(h_6);
                    }
                  else
                    {
                      t = d_6;
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
  ATerm i_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_99(t);
      LocalPopChoice(j_6);
    }
  else
    {
      t = i_6;
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
              ATerm k_6;
              k_6 = t;
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
              t = k_6;
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
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_96(t);
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
              ATerm v_8 = NULL;
              ATerm x_6;
              x_6 = t;
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
              t = x_6;
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm n_0 (ATerm t)
                  {
                    t = not_null(v_8);
                    return(t);
                  }
                  t = split_2(t, x_8, n_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm g_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = x_96(t, f_0, x_8, g_0);
                {
                  ATerm o_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, o_0, union_0, _id);
                }
              }
              LocalPopChoice(w_6);
            }
          else
            {
              t = v_6;
              {
                ATerm p_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, p_0, union_0, x_8);
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
  ATerm q_0 (ATerm t)
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_0, tboundin_3);
  return(t);
}
ATerm NarrowScope_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
  f_9 = t;
  d_9 :
  if(match_cons(f_9, sym_Scope_2))
    {
      g_9 = ATgetArgument(f_9, 0);
      h_9 = ATgetArgument(f_9, 1);
      e_9 :
      if(match_cons(h_9, sym_Seq_2))
        {
          i_9 = ATgetArgument(h_9, 0);
          j_9 = ATgetArgument(h_9, 1);
          {
            ATerm n_9 = NULL,o_9 = NULL;
            ATerm p_9 = NULL,r_9 = NULL;
            ATerm q_9 = NULL;
            t = not_null(i_9);
            {
              t = tvars_0(t);
              {
                q_9 = t;
                if(((p_9 != NULL) && (p_9 != q_9)))
                  _fail(q_9);
                else
                  p_9 = q_9;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(g_9));
              {
                ATerm s_9 = NULL;
                t = isect_0(t);
                {
                  r_9 = t;
                  {
                    if(((n_9 != NULL) && (n_9 != r_9)))
                      _fail(r_9);
                    else
                      n_9 = r_9;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_9), not_null(n_9));
                      {
                        t = diff_0(t);
                        {
                          s_9 = t;
                          {
                            if(((o_9 != NULL) && (o_9 != s_9)))
                              _fail(s_9);
                            else
                              o_9 = s_9;
                            {
                              ATerm a_7 = t;
                              if((PushChoice() == 0))
                                {
                                  t = Nil_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = a_7;
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_9), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_9), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_9), not_null(j_9))));
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
  ATerm x_9 (ATerm t)
  {
    t = w_107(t);
    t = _all(t, x_9);
    return(t);
  }
  t = x_9(t);
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
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  ATerm r_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_10), not_null(f_10)));
    return(t);
  }
  ATerm s_10 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_10), (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_10), not_null(k_10)));
    return(t);
  }
  g_10 = t;
  a_10 :
  if(match_cons(g_10, sym_Seq_2))
    {
      h_10 = ATgetArgument(g_10, 0);
      k_10 = ATgetArgument(g_10, 1);
      b_10 :
      if(match_cons(k_10, sym_Scope_2))
        {
          e_10 = ATgetArgument(k_10, 0);
          f_10 = ATgetArgument(k_10, 1);
          c_10 :
          if(match_cons(h_10, sym_Scope_2))
            {
              i_10 = ATgetArgument(h_10, 0);
              j_10 = ATgetArgument(h_10, 1);
              {
                ATerm e_7 = t;
                int f_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_10(t);
                    LocalPopChoice(f_7);
                  }
                else
                  {
                    t = e_7;
                    t = s_10(t);
                  }
              }
            }
          else
            {
              t = r_10(t);
            }
        }
      else
        {
          d_10 :
          if(match_cons(h_10, sym_Scope_2))
            {
              i_10 = ATgetArgument(h_10, 0);
              j_10 = ATgetArgument(h_10, 1);
              t = s_10(t);
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
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  z_10 = t;
  u_10 :
  if(match_cons(z_10, sym_Let_2))
    {
      a_11 = ATgetArgument(z_10, 0);
      g_11 = ATgetArgument(z_10, 1);
      v_10 :
      if(((ATgetType(a_11) == AT_LIST) && ((ATermList) a_11 != ATempty)))
        {
          b_11 = ATgetFirst((ATermList) a_11);
          f_11 = (ATerm) ATgetNext((ATermList) a_11);
          w_10 :
          if(match_cons(b_11, sym_SDef_3))
            {
              c_11 = ATgetArgument(b_11, 0);
              d_11 = ATgetArgument(b_11, 1);
              e_11 = ATgetArgument(b_11, 2);
              x_10 :
              if(((ATermList) d_11 == ATempty))
                {
                  y_10 :
                  if(((ATermList) f_11 == ATempty))
                    {
                      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_4, (ATerm)ATinsert(ATempty, term_g_7), not_null(c_11), (ATerm)ATempty, not_null(e_11))), not_null(g_11));
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
  ATerm l_11 (ATerm t)
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_103(t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = Cons_2(t, _id, l_11);
      }
    return(t);
  }
  t = l_11(t);
  return(t);
}
ATerm Inline_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Let_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm d_12 = NULL,e_12 = NULL;
        ATerm t_12 = NULL;
        t = not_null(z_11);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
            f_12 = t;
            t_11 :
            if(((ATgetType(f_12) == AT_LIST) && ((ATermList) f_12 != ATempty)))
              {
                g_12 = ATgetFirst((ATermList) f_12);
                k_12 = (ATerm) ATgetNext((ATermList) f_12);
                u_11 :
                if(match_cons(g_12, sym_SDef_3))
                  {
                    h_12 = ATgetArgument(g_12, 0);
                    i_12 = ATgetArgument(g_12, 1);
                    j_12 = ATgetArgument(g_12, 2);
                    v_11 :
                    if(((ATermList) i_12 == ATempty))
                      {
                        {
                          ATerm s_12 = NULL;
                          t = not_null(a_12);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
                              o_12 = t;
                              p_11 :
                              if(match_cons(o_12, sym_Call_2))
                                {
                                  p_12 = ATgetArgument(o_12, 0);
                                  r_12 = ATgetArgument(o_12, 1);
                                  q_11 :
                                  if(match_cons(p_12, sym_SVar_1))
                                    {
                                      q_12 = ATgetArgument(p_12, 0);
                                      r_11 :
                                      if(((ATermList) r_12 == ATempty))
                                        {
                                          {
                                            if(((h_12 != NULL) && (h_12 != q_12)))
                                              _fail(q_12);
                                            else
                                              h_12 = q_12;
                                            t = not_null(j_12);
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
                              s_12 = t;
                              {
                                if(((d_12 != NULL) && (d_12 != s_12)))
                                  _fail(s_12);
                                else
                                  d_12 = s_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_12)), (ATerm) ATempty), not_null(d_12));
                                  {
                                    ATerm n_7 = t;
                                    if((PushChoice() == 0))
                                      {
                                        t = in_0(t);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = n_7;
                                      }
                                  }
                                }
                              }
                            }
                          }
                          t = not_null(k_12);
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
            t_12 = t;
            if(((e_12 != NULL) && (e_12 != t_12)))
              _fail(t_12);
            else
              e_12 = t_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_12), not_null(d_12));
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
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
  h_13 = t;
  b_13 :
  if(match_cons(h_13, sym__2))
    {
      i_13 = ATgetArgument(h_13, 0);
      k_13 = ATgetArgument(h_13, 1);
      c_13 :
      if(match_cons(i_13, sym_Build_1))
        {
          j_13 = ATgetArgument(i_13, 0);
          d_13 :
          if(match_cons(k_13, sym_Where_1))
            {
              l_13 = ATgetArgument(k_13, 0);
              e_13 :
              if(match_cons(l_13, sym_Prim_2))
                {
                  f_13 = ATgetArgument(l_13, 0);
                  g_13 = ATgetArgument(l_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(f_13), not_null(g_13));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(k_13, sym_Prim_2))
                {
                  l_13 = ATgetArgument(k_13, 0);
                  m_13 = ATgetArgument(k_13, 1);
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(l_13), not_null(m_13));
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
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  c_14 = t;
  x_13 :
  if(match_cons(c_14, sym__2))
    {
      d_14 = ATgetArgument(c_14, 0);
      f_14 = ATgetArgument(c_14, 1);
      y_13 :
      if(match_cons(d_14, sym_Build_1))
        {
          e_14 = ATgetArgument(d_14, 0);
          z_13 :
          if(match_cons(f_14, sym_Where_1))
            {
              g_14 = ATgetArgument(f_14, 0);
              a_14 :
              if(match_cons(g_14, sym_Build_1))
                {
                  b_14 = ATgetArgument(g_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_14));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(f_14, sym_Build_1))
                {
                  g_14 = ATgetArgument(f_14, 0);
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(g_14));
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
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  w_14 = t;
  r_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      b_15 = ATgetArgument(w_14, 1);
      s_14 :
      if(match_cons(x_14, sym_Build_1))
        {
          y_14 = ATgetArgument(x_14, 0);
          t_14 :
          if(match_cons(y_14, sym_Op_2))
            {
              z_14 = ATgetArgument(y_14, 0);
              a_15 = ATgetArgument(y_14, 1);
              u_14 :
              if(match_cons(b_15, sym_Match_1))
                {
                  c_15 = ATgetArgument(b_15, 0);
                  v_14 :
                  if(match_cons(c_15, sym_Op_2))
                    {
                      d_15 = ATgetArgument(c_15, 0);
                      e_15 = ATgetArgument(c_15, 1);
                      {
                        ATerm h_15 = NULL,i_15 = NULL;
                        if(((z_14 != NULL) && (z_14 != d_15)))
                          _fail(d_15);
                        else
                          z_14 = d_15;
                        {
                          if(((h_15 != NULL) && (h_15 != e_15)))
                            _fail(e_15);
                          else
                            h_15 = e_15;
                          {
                            ATerm o_15 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(h_15));
                            {
                              ATerm u_0 (ATerm t)
                              {
                                ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
                                j_15 = t;
                                p_14 :
                                if(match_cons(j_15, sym__2))
                                  {
                                    k_15 = ATgetArgument(j_15, 0);
                                    l_15 = ATgetArgument(j_15, 1);
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_15)), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_15)));
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = zip_1(t, u_0);
                              {
                                o_15 = t;
                                if(((i_15 != NULL) && (i_15 != o_15)))
                                  _fail(o_15);
                                else
                                  i_15 = o_15;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(i_15)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(z_14), not_null(a_15))));
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
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      if(((v_15 != NULL) && (v_15 != w_15)))
        _fail(w_15);
      else
        v_15 = w_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MisMatch_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  f_16 = t;
  a_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      k_16 = ATgetArgument(f_16, 1);
      b_16 :
      if(match_cons(g_16, sym_Build_1))
        {
          h_16 = ATgetArgument(g_16, 0);
          c_16 :
          if(match_cons(h_16, sym_Op_2))
            {
              i_16 = ATgetArgument(h_16, 0);
              j_16 = ATgetArgument(h_16, 1);
              d_16 :
              if(match_cons(k_16, sym_Match_1))
                {
                  l_16 = ATgetArgument(k_16, 0);
                  e_16 :
                  if(match_cons(l_16, sym_Op_2))
                    {
                      m_16 = ATgetArgument(l_16, 0);
                      n_16 = ATgetArgument(l_16, 1);
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(m_16));
                        {
                          ATerm p_7 = t;
                          if((PushChoice() == 0))
                            {
                              t = eq_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = p_7;
                            }
                        }
                        t = term_q_7;
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
  ATerm r_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0(t);
      LocalPopChoice(w_7);
    }
  else
    {
      t = r_7;
      {
        ATerm x_7 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0(t);
            LocalPopChoice(c_8);
          }
        else
          {
            t = x_7;
            {
              ATerm d_8 = t;
              int e_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BuildBuild_0(t);
                  LocalPopChoice(e_8);
                }
              else
                {
                  t = d_8;
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  ATerm o_17 (ATerm t)
  {
    ATerm l_17 = NULL;
    ATerm m_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(d_17));
    {
      t = BMF_0(t);
      {
        m_17 = t;
        if(((l_17 != NULL) && (l_17 != m_17)))
          _fail(m_17);
        else
          l_17 = m_17;
      }
    }
    t = not_null(l_17);
    return(t);
  }
  b_17 = t;
  x_16 :
  if(match_cons(b_17, sym_Seq_2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      y_16 :
      if(match_cons(d_17, sym_Seq_2))
        {
          z_16 = ATgetArgument(d_17, 0);
          a_17 = ATgetArgument(d_17, 1);
          {
            ATerm f_8 = t;
            int g_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_17 = NULL;
                ATerm i_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(z_16));
                {
                  t = BMF_0(t);
                  {
                    i_17 = t;
                    if(((h_17 != NULL) && (h_17 != i_17)))
                      _fail(i_17);
                    else
                      h_17 = i_17;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_17), not_null(a_17));
                LocalPopChoice(g_8);
              }
            else
              {
                t = f_8;
                t = o_17(t);
              }
          }
        }
      else
        {
          t = o_17(t);
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
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  w_17 = t;
  s_17 :
  if(match_cons(w_17, sym_Seq_2))
    {
      x_17 = ATgetArgument(w_17, 0);
      z_17 = ATgetArgument(w_17, 1);
      t_17 :
      if(match_cons(x_17, sym_Build_1))
        {
          y_17 = ATgetArgument(x_17, 0);
          u_17 :
          if(match_cons(z_17, sym_Seq_2))
            {
              a_18 = ATgetArgument(z_17, 0);
              c_18 = ATgetArgument(z_17, 1);
              v_17 :
              if(match_cons(a_18, sym_Build_1))
                {
                  b_18 = ATgetArgument(a_18, 0);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_18)), not_null(c_18));
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
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  l_18 = t;
  j_18 :
  if(match_cons(l_18, sym_Scope_2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      k_18 :
      if(match_cons(n_18, sym_Scope_2))
        {
          o_18 = ATgetArgument(n_18, 0);
          p_18 = ATgetArgument(n_18, 1);
          {
            ATerm t_18 = NULL;
            ATerm u_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(o_18));
            {
              t = conc_0(t);
              {
                u_18 = t;
                if(((t_18 != NULL) && (t_18 != u_18)))
                  _fail(u_18);
                else
                  t_18 = u_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_18), not_null(p_18));
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
  ATerm z_18 = NULL,a_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym_Var_1))
    {
      a_19 = ATgetArgument(z_18, 0);
      t = not_null(a_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  g_19 = t;
  e_19 :
  if(match_cons(g_19, sym__2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      f_19 :
      if(((ATgetType(i_19) == AT_LIST) && ((ATermList) i_19 != ATempty)))
        {
          j_19 = ATgetFirst((ATermList) i_19);
          k_19 = (ATerm) ATgetNext((ATermList) i_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), not_null(k_19));
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
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  s_19 = t;
  p_19 :
  if(match_cons(s_19, sym__2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      q_19 :
      if(((ATgetType(u_19) == AT_LIST) && ((ATermList) u_19 != ATempty)))
        {
          v_19 = ATgetFirst((ATermList) u_19);
          y_19 = (ATerm) ATgetNext((ATermList) u_19);
          r_19 :
          if(match_cons(v_19, sym__2))
            {
              w_19 = ATgetArgument(v_19, 0);
              x_19 = ATgetArgument(v_19, 1);
              {
                ATerm a_20 = NULL;
                if(((t_19 != NULL) && (t_19 != w_19)))
                  _fail(w_19);
                else
                  t_19 = w_19;
                {
                  if(((a_20 != NULL) && (a_20 != x_19)))
                    _fail(x_19);
                  else
                    a_20 = x_19;
                  t = not_null(a_20);
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
  ATerm h_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = h_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm c_111 (ATerm), ATerm d_111 (ATerm))
{
  ATerm g_20 = NULL;
  ATerm i_20 = NULL,j_20 = NULL;
  g_20 = t;
  {
    ATerm k_20 = NULL;
    t = not_null(g_20);
    {
      ATerm l_20 = NULL;
      t = c_111(t);
      {
        k_20 = t;
        {
          if(((i_20 != NULL) && (i_20 != k_20)))
            _fail(k_20);
          else
            i_20 = k_20;
          {
            t = d_111(t);
            {
              l_20 = t;
              if(((j_20 != NULL) && (j_20 != l_20)))
                _fail(l_20);
              else
                j_20 = l_20;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(j_20));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm p_20 (ATerm t)
  {
    ATerm n_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_110(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = n_8;
        t = _all(t, p_20);
      }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      {
        ATerm z_20 = NULL;
        if(((z_20 != NULL) && (z_20 != w_20)))
          _fail(w_20);
        else
          z_20 = w_20;
      }
    }
  else
    {
      if(match_cons(u_20, sym__3))
        {
          v_20 = ATgetArgument(u_20, 0);
          w_20 = ATgetArgument(u_20, 1);
          x_20 = ATgetArgument(u_20, 2);
          {
            ATerm f_21 = NULL;
            ATerm g_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(w_20));
            {
              t = zip_1(t, _id);
              {
                g_21 = t;
                if(((f_21 != NULL) && (f_21 != g_21)))
                  _fail(g_21);
                else
                  f_21 = g_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(x_20));
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
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  t = subs_args_0(t);
  {
    m_21 = t;
    l_21 :
    if(match_cons(m_21, sym__2))
      {
        n_21 = ATgetArgument(m_21, 0);
        o_21 = ATgetArgument(m_21, 1);
        {
          t = not_null(o_21);
          {
            ATerm v_0 (ATerm t)
            {
              ATerm w_0 (ATerm t)
              {
                t = not_null(n_21);
                return(t);
              }
              t = SubsVar_2(t, e_111, w_0);
              t = f_111(t);
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
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  v_21 = t;
  t_21 :
  if(match_cons(v_21, sym__2))
    {
      w_21 = ATgetArgument(v_21, 0);
      x_21 = ATgetArgument(v_21, 1);
      u_21 :
      if(((ATgetType(x_21) == AT_LIST) && ((ATermList) x_21 != ATempty)))
        {
          y_21 = ATgetFirst((ATermList) x_21);
          z_21 = (ATerm) ATgetNext((ATermList) x_21);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_21)), not_null(y_21)), not_null(z_21));
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
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  o_22 = t;
  m_22 :
  if(((ATgetType(o_22) == AT_LIST) && ((ATermList) o_22 != ATempty)))
    {
      p_22 = ATgetFirst((ATermList) o_22);
      s_22 = (ATerm) ATgetNext((ATermList) o_22);
      n_22 :
      if(match_cons(p_22, sym__2))
        {
          q_22 = ATgetArgument(p_22, 0);
          r_22 = ATgetArgument(p_22, 1);
          {
            ATerm w_22 = NULL,x_22 = NULL,d_23 = NULL,j_23 = NULL;
            ATerm s_8;
            s_8 = t;
            {
              ATerm y_22 = NULL;
              ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
              t = not_null(r_22);
              {
                y_22 = t;
                {
                  t = SSL_explode_term(not_null(y_22));
                  {
                    a_23 = t;
                    h_22 :
                    if(match_cons(a_23, sym__2))
                      {
                        b_23 = ATgetArgument(a_23, 0);
                        c_23 = ATgetArgument(a_23, 1);
                        {
                          if(((w_22 != NULL) && (w_22 != b_23)))
                            _fail(b_23);
                          else
                            w_22 = b_23;
                          if(((x_22 != NULL) && (x_22 != c_23)))
                            _fail(c_23);
                          else
                            x_22 = c_23;
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
            t = s_8;
            {
              ATerm t_8;
              t_8 = t;
              {
                ATerm e_23 = NULL;
                ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
                t = not_null(q_22);
                {
                  e_23 = t;
                  {
                    t = SSL_explode_term(not_null(e_23));
                    {
                      g_23 = t;
                      k_22 :
                      if(match_cons(g_23, sym__2))
                        {
                          h_23 = ATgetArgument(g_23, 0);
                          i_23 = ATgetArgument(g_23, 1);
                          {
                            if(((w_22 != NULL) && (w_22 != h_23)))
                              _fail(h_23);
                            else
                              w_22 = h_23;
                            if(((d_23 != NULL) && (d_23 != i_23)))
                              _fail(i_23);
                            else
                              d_23 = i_23;
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
                ATerm k_23 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_23), not_null(x_22));
                {
                  t = zip_1(t, _id);
                  {
                    k_23 = t;
                    if(((j_23 != NULL) && (j_23 != k_23)))
                      _fail(k_23);
                    else
                      j_23 = k_23;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(s_22));
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
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  u_23 = t;
  s_23 :
  if(((ATgetType(u_23) == AT_LIST) && ((ATermList) u_23 != ATempty)))
    {
      v_23 = ATgetFirst((ATermList) u_23);
      y_23 = (ATerm) ATgetNext((ATermList) u_23);
      t_23 :
      if(match_cons(v_23, sym__2))
        {
          w_23 = ATgetArgument(v_23, 0);
          x_23 = ATgetArgument(v_23, 1);
          {
            ATerm a_24 = NULL;
            if(((w_23 != NULL) && (w_23 != x_23)))
              _fail(x_23);
            else
              w_23 = x_23;
            {
              if(((a_24 != NULL) && (a_24 != y_23)))
                _fail(y_23);
              else
                a_24 = y_23;
              t = not_null(a_24);
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
  ATerm c_24 (ATerm t)
  {
    ATerm u_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_95(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = u_8;
        {
          t = l_95(t);
          t = c_24(t);
        }
      }
    return(t);
  }
  t = c_24(t);
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
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  f_24 :
  if(((ATgetType(g_24) == AT_LIST) && ((ATermList) g_24 != ATempty)))
    {
      h_24 = ATgetFirst((ATermList) g_24);
      i_24 = (ATerm) ATgetNext((ATermList) g_24);
      {
        t = a_101(t);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm l_24 = NULL;
            l_24 = t;
            if(((h_24 != NULL) && (h_24 != l_24)))
              _fail(l_24);
            else
              h_24 = l_24;
            return(t);
          }
          t = fetch_1(t, x_0);
        }
        t = not_null(i_24);
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
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
      r_24 = t;
      p_24 :
      if(match_cons(r_24, sym__2))
        {
          s_24 = ATgetArgument(r_24, 0);
          t_24 = ATgetArgument(r_24, 1);
          {
            t = not_null(s_24);
            {
              ATerm z_24 (ATerm t)
              {
                ATerm b_9 = t;
                int c_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(c_9);
                  }
                else
                  {
                    t = b_9;
                    {
                      ATerm k_9 = t;
                      int l_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_0 (ATerm t)
                          {
                            t = not_null(t_24);
                            return(t);
                          }
                          t = HdMember_1(t, y_0);
                          t = z_24(t);
                          LocalPopChoice(l_9);
                        }
                      else
                        {
                          t = k_9;
                          t = Cons_2(t, _id, z_24);
                        }
                    }
                  }
                return(t);
              }
              t = z_24(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm z_0 (ATerm t)
        {
          ATerm w_24 = NULL;
          w_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_24));
          return(t);
        }
        ATerm a_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          ATerm m_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 (ATerm t)
              {
                ATerm u_9 = t;
                int v_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(v_9);
                  }
                else
                  {
                    t = u_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, c_1);
              LocalPopChoice(t_9);
            }
          else
            {
              t = m_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, z_0, a_1, b_1);
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_109 (ATerm))
{
  ATerm b_25 (ATerm t)
  {
    ATerm w_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_109(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = w_9;
        t = _one(t, b_25);
      }
    return(t);
  }
  t = b_25(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym__2))
    {
      g_25 = ATgetArgument(f_25, 0);
      h_25 = ATgetArgument(f_25, 1);
      {
        t = not_null(h_25);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm k_25 = NULL;
            k_25 = t;
            if(((g_25 != NULL) && (g_25 != k_25)))
              _fail(k_25);
            else
              g_25 = k_25;
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
ATerm Var_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym_Var_1))
    {
      t_25 = ATgetArgument(s_25, 0);
      {
        ATerm w_25 = NULL,y_25 = NULL;
        ATerm x_25 = NULL;
        t = SSLgetAnnotations(not_null(s_25));
        {
          x_25 = t;
          if(((w_25 != NULL) && (w_25 != x_25)))
            _fail(x_25);
          else
            w_25 = x_25;
        }
        {
          t = not_null(t_25);
          {
            ATerm a_26 = NULL;
            t = e_86(t);
            {
              y_25 = t;
              {
                ATerm b_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_25)), not_null(w_25));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CopyPropagation_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  x_27 = t;
  w_26 :
  if(match_cons(x_27, sym_Seq_2))
    {
      y_27 = ATgetArgument(x_27, 0);
      a_28 = ATgetArgument(x_27, 1);
      x_26 :
      if(match_cons(y_27, sym_Assign_1))
        {
          z_27 = ATgetArgument(y_27, 0);
          y_26 :
          if(match_cons(z_27, sym_Var_1))
            {
              q_27 = ATgetArgument(z_27, 0);
              z_26 :
              if(match_cons(a_28, sym_Seq_2))
                {
                  b_28 = ATgetArgument(a_28, 0);
                  c_28 = ATgetArgument(a_28, 1);
                  a_27 :
                  if(match_cons(b_28, sym_Build_1))
                    {
                      t_27 = ATgetArgument(b_28, 0);
                      b_27 :
                      if(match_cons(t_27, sym_Var_1))
                        {
                          u_27 = ATgetArgument(t_27, 0);
                          {
                            ATerm i_28 = NULL;
                            if(((q_27 != NULL) && (q_27 != u_27)))
                              _fail(u_27);
                            else
                              q_27 = u_27;
                            {
                              if(((i_28 != NULL) && (i_28 != c_28)))
                                _fail(c_28);
                              else
                                i_28 = c_28;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27))), not_null(i_28));
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
          if(match_cons(y_27, sym_Build_1))
            {
              z_27 = ATgetArgument(y_27, 0);
              c_27 :
              if(match_cons(a_28, sym_Scope_2))
                {
                  b_28 = ATgetArgument(a_28, 0);
                  c_28 = ATgetArgument(a_28, 1);
                  d_27 :
                  if(match_cons(c_28, sym_Seq_2))
                    {
                      d_28 = ATgetArgument(c_28, 0);
                      g_28 = ATgetArgument(c_28, 1);
                      e_27 :
                      if(match_cons(d_28, sym_Assign_1))
                        {
                          e_28 = ATgetArgument(d_28, 0);
                          f_27 :
                          if(match_cons(e_28, sym_Var_1))
                            {
                              f_28 = ATgetArgument(e_28, 0);
                              {
                                ATerm z_9 = t;
                                int l_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_29 = NULL,n_29 = NULL;
                                    ATerm m_10;
                                    m_10 = t;
                                    {
                                      ATerm m_29 = NULL;
                                      t = not_null(z_27);
                                      {
                                        t = Var_1(t, _id);
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(b_28));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), (ATerm) ATinsert(ATempty, not_null(f_28)));
                                              {
                                                t = diff_0(t);
                                                {
                                                  m_29 = t;
                                                  if(((l_29 != NULL) && (l_29 != m_29)))
                                                    _fail(m_29);
                                                  else
                                                    l_29 = m_29;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = m_10;
                                    {
                                      ATerm o_29 = NULL;
                                      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(f_28)), (ATerm)ATinsert(ATempty, not_null(z_27)), not_null(g_28));
                                      {
                                        t = tsubs_0(t);
                                        {
                                          o_29 = t;
                                          if(((n_29 != NULL) && (n_29 != o_29)))
                                            _fail(o_29);
                                          else
                                            n_29 = o_29;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_29), not_null(n_29)));
                                    }
                                    LocalPopChoice(l_10);
                                  }
                                else
                                  {
                                    t = z_9;
                                    {
                                      ATerm t_29 = NULL,v_29 = NULL;
                                      ATerm n_10;
                                      n_10 = t;
                                      {
                                        ATerm u_29 = NULL;
                                        t = not_null(z_27);
                                        {
                                          t = Var_1(t, _id);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(b_28));
                                            {
                                              t = in_0(t);
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), (ATerm) ATinsert(ATempty, not_null(f_28)));
                                                {
                                                  t = diff_0(t);
                                                  {
                                                    u_29 = t;
                                                    if(((t_29 != NULL) && (t_29 != u_29)))
                                                      _fail(u_29);
                                                    else
                                                      t_29 = u_29;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                      t = n_10;
                                      {
                                        ATerm w_29 = NULL;
                                        t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(f_28)), (ATerm)ATinsert(ATempty, not_null(z_27)), not_null(g_28));
                                        {
                                          t = tsubs_0(t);
                                          {
                                            w_29 = t;
                                            if(((v_29 != NULL) && (v_29 != w_29)))
                                              _fail(w_29);
                                            else
                                              v_29 = w_29;
                                          }
                                        }
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_27)), (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_29), not_null(v_29)));
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
      if(match_cons(x_27, sym_Scope_2))
        {
          y_27 = ATgetArgument(x_27, 0);
          a_28 = ATgetArgument(x_27, 1);
          g_27 :
          if(match_cons(a_28, sym_Seq_2))
            {
              b_28 = ATgetArgument(a_28, 0);
              c_28 = ATgetArgument(a_28, 1);
              h_27 :
              if(match_cons(b_28, sym_Assign_1))
                {
                  t_27 = ATgetArgument(b_28, 0);
                  i_27 :
                  if(match_cons(t_27, sym_Var_1))
                    {
                      u_27 = ATgetArgument(t_27, 0);
                      j_27 :
                      if(match_cons(c_28, sym_Seq_2))
                        {
                          d_28 = ATgetArgument(c_28, 0);
                          g_28 = ATgetArgument(c_28, 1);
                          k_27 :
                          if(match_cons(d_28, sym_Assign_2))
                            {
                              e_28 = ATgetArgument(d_28, 0);
                              r_27 = ATgetArgument(d_28, 1);
                              l_27 :
                              if(match_cons(e_28, sym_Var_1))
                                {
                                  f_28 = ATgetArgument(e_28, 0);
                                  m_27 :
                                  if(match_cons(r_27, sym_Var_1))
                                    {
                                      s_27 = ATgetArgument(r_27, 0);
                                      {
                                        ATerm m_28 = NULL,n_28 = NULL,p_28 = NULL;
                                        if(((u_27 != NULL) && (u_27 != s_27)))
                                          _fail(s_27);
                                        else
                                          u_27 = s_27;
                                        {
                                          if(((m_28 != NULL) && (m_28 != g_28)))
                                            _fail(g_28);
                                          else
                                            m_28 = g_28;
                                          {
                                            ATerm o_10;
                                            o_10 = t;
                                            {
                                              ATerm o_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_27), not_null(y_27));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(y_27));
                                                  {
                                                    t = in_0(t);
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_27), (ATerm) ATinsert(ATempty, not_null(f_28)));
                                                      {
                                                        t = diff_0(t);
                                                        {
                                                          o_28 = t;
                                                          if(((n_28 != NULL) && (n_28 != o_28)))
                                                            _fail(o_28);
                                                          else
                                                            n_28 = o_28;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = o_10;
                                            {
                                              ATerm q_28 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(f_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27))), not_null(m_28));
                                              {
                                                t = tsubs_0(t);
                                                {
                                                  q_28 = t;
                                                  if(((p_28 != NULL) && (p_28 != q_28)))
                                                    _fail(q_28);
                                                  else
                                                    p_28 = q_28;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27))), not_null(p_28)));
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
                              if(match_cons(d_28, sym_Assign_1))
                                {
                                  e_28 = ATgetArgument(d_28, 0);
                                  n_27 :
                                  if(match_cons(e_28, sym_Var_1))
                                    {
                                      f_28 = ATgetArgument(e_28, 0);
                                      {
                                        ATerm v_28 = NULL,x_28 = NULL;
                                        ATerm p_10;
                                        p_10 = t;
                                        {
                                          ATerm w_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_27), not_null(y_27));
                                          {
                                            t = in_0(t);
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(y_27));
                                              {
                                                t = in_0(t);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_27), (ATerm) ATinsert(ATempty, not_null(f_28)));
                                                  {
                                                    t = diff_0(t);
                                                    {
                                                      w_28 = t;
                                                      if(((v_28 != NULL) && (v_28 != w_28)))
                                                        _fail(w_28);
                                                      else
                                                        v_28 = w_28;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = p_10;
                                        {
                                          ATerm y_28 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(f_28)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27))), not_null(g_28));
                                          {
                                            t = tsubs_0(t);
                                            {
                                              y_28 = t;
                                              if(((x_28 != NULL) && (x_28 != y_28)))
                                                _fail(y_28);
                                              else
                                                x_28 = y_28;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27))), not_null(x_28)));
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
                  if(match_cons(b_28, sym_Assign_2))
                    {
                      t_27 = ATgetArgument(b_28, 0);
                      v_27 = ATgetArgument(b_28, 1);
                      o_27 :
                      if(match_cons(t_27, sym_Var_1))
                        {
                          u_27 = ATgetArgument(t_27, 0);
                          p_27 :
                          if(match_cons(v_27, sym_Var_1))
                            {
                              w_27 = ATgetArgument(v_27, 0);
                              {
                                ATerm d_29 = NULL,f_29 = NULL;
                                ATerm q_10;
                                q_10 = t;
                                {
                                  ATerm e_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_27), not_null(y_27));
                                  {
                                    t = in_0(t);
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_27), (ATerm) ATinsert(ATempty, not_null(u_27)));
                                      {
                                        t = diff_0(t);
                                        {
                                          e_29 = t;
                                          if(((d_29 != NULL) && (d_29 != e_29)))
                                            _fail(e_29);
                                          else
                                            d_29 = e_29;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = q_10;
                                {
                                  ATerm g_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, not_null(u_27)), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_27))), not_null(c_28));
                                  {
                                    t = tsubs_0(t);
                                    {
                                      g_29 = t;
                                      if(((f_29 != NULL) && (f_29 != g_29)))
                                        _fail(g_29);
                                      else
                                        f_29 = g_29;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_29), not_null(f_29));
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
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  q_30 = t;
  o_30 :
  if(match_cons(q_30, sym_Seq_2))
    {
      r_30 = ATgetArgument(q_30, 0);
      s_30 = ATgetArgument(q_30, 1);
      p_30 :
      if(match_cons(s_30, sym_Let_2))
        {
          t_30 = ATgetArgument(s_30, 0);
          u_30 = ATgetArgument(s_30, 1);
          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_30), not_null(u_30)));
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
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Cong_2))
    {
      r_31 = ATgetArgument(q_31, 0);
      s_31 = ATgetArgument(q_31, 1);
      {
        ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,v_32 = NULL,x_32 = NULL,z_32 = NULL;
        ATerm t_10;
        t_10 = t;
        {
          ATerm b_32 = NULL;
          t = not_null(s_31);
          {
            ATerm e_32 = NULL;
            t = map_1(t, new_0);
            {
              b_32 = t;
              {
                if(((y_31 != NULL) && (y_31 != b_32)))
                  _fail(b_32);
                else
                  y_31 = b_32;
                {
                  t = not_null(y_31);
                  {
                    ATerm f_32 = NULL;
                    ATerm e_1 (ATerm t)
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
                    t = map_1(t, e_1);
                    {
                      e_32 = t;
                      {
                        if(((v_31 != NULL) && (v_31 != e_32)))
                          _fail(e_32);
                        else
                          v_31 = e_32;
                        {
                          ATerm g_32 = NULL;
                          t = new_0(t);
                          {
                            f_32 = t;
                            {
                              if(((w_31 != NULL) && (w_31 != f_32)))
                                _fail(f_32);
                              else
                                w_31 = f_32;
                              {
                                t = not_null(s_31);
                                {
                                  ATerm j_32 = NULL;
                                  t = map_1(t, new_0);
                                  {
                                    g_32 = t;
                                    {
                                      if(((z_31 != NULL) && (z_31 != g_32)))
                                        _fail(g_32);
                                      else
                                        z_31 = g_32;
                                      {
                                        t = not_null(z_31);
                                        {
                                          ATerm k_32 = NULL,u_32 = NULL;
                                          ATerm f_1 (ATerm t)
                                          {
                                            ATerm h_32 = NULL;
                                            ATerm i_32 = NULL;
                                            i_32 = t;
                                            if(((h_32 != NULL) && (h_32 != i_32)))
                                              _fail(i_32);
                                            else
                                              h_32 = i_32;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_32));
                                            return(t);
                                          }
                                          t = map_1(t, f_1);
                                          {
                                            j_32 = t;
                                            {
                                              if(((x_31 != NULL) && (x_31 != j_32)))
                                                _fail(j_32);
                                              else
                                                x_31 = j_32;
                                              {
                                                ATerm l_32 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_31), not_null(z_31));
                                                {
                                                  t = zip_1(t, _id);
                                                  {
                                                    l_32 = t;
                                                    if(((k_32 != NULL) && (k_32 != l_32)))
                                                      _fail(l_32);
                                                    else
                                                      k_32 = l_32;
                                                  }
                                                }
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_32), not_null(s_31));
                                                  {
                                                    ATerm g_1 (ATerm t)
                                                    {
                                                      ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
                                                      m_32 = t;
                                                      j_31 :
                                                      if(match_cons(m_32, sym__2))
                                                        {
                                                          n_32 = ATgetArgument(m_32, 0);
                                                          q_32 = ATgetArgument(m_32, 1);
                                                          k_31 :
                                                          if(match_cons(n_32, sym__2))
                                                            {
                                                              o_32 = ATgetArgument(n_32, 0);
                                                              p_32 = ATgetArgument(n_32, 1);
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_32))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_32)))));
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
                                                    t = zip_1(t, g_1);
                                                    {
                                                      u_32 = t;
                                                      if(((a_32 != NULL) && (a_32 != u_32)))
                                                        _fail(u_32);
                                                      else
                                                        a_32 = u_32;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = t_10;
        {
          ATerm h_11;
          h_11 = t;
          {
            ATerm w_32 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_31), not_null(z_31));
            {
              t = conc_0(t);
              {
                w_32 = t;
                if(((v_32 != NULL) && (v_32 != w_32)))
                  _fail(w_32);
                else
                  v_32 = w_32;
              }
            }
          }
          t = h_11;
          {
            ATerm i_11;
            i_11 = t;
            {
              ATerm y_32 = NULL;
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_31), not_null(v_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_31))));
              {
                t = Mapp2_0(t);
                {
                  y_32 = t;
                  if(((x_32 != NULL) && (x_32 != y_32)))
                    _fail(y_32);
                  else
                    x_32 = y_32;
                }
              }
            }
            t = i_11;
            {
              ATerm h_35 = NULL;
              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(r_31), not_null(x_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_31))));
              {
                t = Bapp2_0(t);
                {
                  h_35 = t;
                  if(((z_32 != NULL) && (z_32 != h_35)))
                    _fail(h_35);
                  else
                    z_32 = h_35;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_32)), not_null(w_31)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_32)), not_null(z_32))));
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
  ATerm j_37 = NULL,k_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Build_1))
    {
      k_37 = ATgetArgument(j_37, 0);
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
            ATerm t_37 = NULL;
            ATerm x_37 = NULL;
            t = new_0(t);
            {
              t_37 = t;
              {
                if(((r_37 != NULL) && (r_37 != t_37)))
                  _fail(t_37);
                else
                  r_37 = t_37;
                {
                  t = not_null(k_37);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
                      u_37 = t;
                      o_36 :
                      if(match_cons(u_37, sym_Anno_2))
                        {
                          v_37 = ATgetArgument(u_37, 0);
                          w_37 = ATgetArgument(u_37, 1);
                          {
                            if(((p_37 != NULL) && (p_37 != v_37)))
                              _fail(v_37);
                            else
                              p_37 = v_37;
                            {
                              if(((q_37 != NULL) && (q_37 != w_37)))
                                _fail(w_37);
                              else
                                q_37 = w_37;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_37));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, h_1);
                    {
                      x_37 = t;
                      if(((s_37 != NULL) && (s_37 != x_37)))
                        _fail(x_37);
                      else
                        s_37 = x_37;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_37)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_m_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_37)), not_null(p_37))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_37))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_37))));
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm n_11 = t;
              int o_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
                  ATerm d_39 = NULL;
                  ATerm q_39 = NULL;
                  t = new_0(t);
                  {
                    d_39 = t;
                    {
                      if(((a_38 != NULL) && (a_38 != d_39)))
                        _fail(d_39);
                      else
                        a_38 = d_39;
                      {
                        t = not_null(k_37);
                        {
                          ATerm i_1 (ATerm t)
                          {
                            ATerm e_39 = NULL,f_39 = NULL;
                            e_39 = t;
                            s_36 :
                            if(match_cons(e_39, sym_RootApp_1))
                              {
                                f_39 = ATgetArgument(e_39, 0);
                                {
                                  if(((z_37 != NULL) && (z_37 != f_39)))
                                    _fail(f_39);
                                  else
                                    z_37 = f_39;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38));
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
                            q_39 = t;
                            if(((b_38 != NULL) && (b_38 != q_39)))
                              _fail(q_39);
                            else
                              b_38 = q_39;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_38)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_37), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_38))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38))));
                  LocalPopChoice(o_11);
                }
              else
                {
                  t = n_11;
                  {
                    ATerm s_39 = NULL,y_39 = NULL,z_39 = NULL,j_40 = NULL;
                    ATerm k_40 = NULL;
                    ATerm g_41 = NULL;
                    t = new_0(t);
                    {
                      k_40 = t;
                      {
                        if(((z_39 != NULL) && (z_39 != k_40)))
                          _fail(k_40);
                        else
                          z_39 = k_40;
                        {
                          t = not_null(k_37);
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm l_40 = NULL,e_41 = NULL,f_41 = NULL;
                              l_40 = t;
                              w_36 :
                              if(match_cons(l_40, sym_App_2))
                                {
                                  e_41 = ATgetArgument(l_40, 0);
                                  f_41 = ATgetArgument(l_40, 1);
                                  {
                                    if(((s_39 != NULL) && (s_39 != e_41)))
                                      _fail(e_41);
                                    else
                                      s_39 = e_41;
                                    {
                                      if(((y_39 != NULL) && (y_39 != f_41)))
                                        _fail(f_41);
                                      else
                                        y_39 = f_41;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_39));
                                    }
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
                              g_41 = t;
                              if(((j_40 != NULL) && (j_40 != g_41)))
                                _fail(g_41);
                              else
                                j_40 = g_41;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_39)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_39), not_null(y_39), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_39)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_40))));
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
  ATerm v_41 = NULL,w_41 = NULL,g_42 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym__2))
    {
      w_41 = ATgetArgument(v_41, 0);
      g_42 = ATgetArgument(v_41, 1);
      {
        t = not_null(w_41);
        {
          ATerm k_1 (ATerm t)
          {
            t = not_null(g_42);
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
ATerm Zip3_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_cons(m_42, sym__2))
    {
      n_42 = ATgetArgument(m_42, 0);
      o_42 = ATgetArgument(m_42, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_42)), not_null(n_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  z_42 = t;
  w_42 :
  if(match_cons(z_42, sym__2))
    {
      a_43 = ATgetArgument(z_42, 0);
      d_43 = ATgetArgument(z_42, 1);
      x_42 :
      if(((ATgetType(a_43) == AT_LIST) && ((ATermList) a_43 != ATempty)))
        {
          b_43 = ATgetFirst((ATermList) a_43);
          c_43 = (ATerm) ATgetNext((ATermList) a_43);
          y_42 :
          if(((ATgetType(d_43) == AT_LIST) && ((ATermList) d_43 != ATempty)))
            {
              e_43 = ATgetFirst((ATermList) d_43);
              f_43 = (ATerm) ATgetNext((ATermList) d_43);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_43), not_null(e_43)), (ATerm) ATmakeAppl(sym__2, not_null(c_43), not_null(f_43)));
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
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
  q_43 = t;
  m_43 :
  if(match_cons(q_43, sym__2))
    {
      r_43 = ATgetArgument(q_43, 0);
      s_43 = ATgetArgument(q_43, 1);
      n_43 :
      if(((ATermList) r_43 == ATempty))
        {
          p_43 :
          if(((ATermList) s_43 == ATempty))
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
  ATerm u_43 (ATerm t)
  {
    ATerm s_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_105(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = s_11;
        {
          t = d_105(t);
          {
            t = _2(t, f_105, u_43);
            t = e_105(t);
          }
        }
      }
    return(t);
  }
  t = u_43(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_105 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_105);
  return(t);
}
ATerm TransformingAnnoCongruence_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,y_45 = NULL;
  n_45 = t;
  y_44 :
  if(match_cons(n_45, sym_Call_2))
    {
      o_45 = ATgetArgument(n_45, 0);
      q_45 = ATgetArgument(n_45, 1);
      h_45 :
      if(match_cons(o_45, sym_SVar_1))
        {
          p_45 = ATgetArgument(o_45, 0);
          i_45 :
          if(match_string(p_45, "Anno_Cong__"))
            {
              j_45 :
              if(((ATgetType(q_45) == AT_LIST) && ((ATermList) q_45 != ATempty)))
                {
                  r_45 = ATgetFirst((ATermList) q_45);
                  u_45 = (ATerm) ATgetNext((ATermList) q_45);
                  k_45 :
                  if(match_cons(r_45, sym_Cong_2))
                    {
                      s_45 = ATgetArgument(r_45, 0);
                      t_45 = ATgetArgument(r_45, 1);
                      l_45 :
                      if(((ATgetType(u_45) == AT_LIST) && ((ATermList) u_45 != ATempty)))
                        {
                          v_45 = ATgetFirst((ATermList) u_45);
                          y_45 = (ATerm) ATgetNext((ATermList) u_45);
                          m_45 :
                          if(((ATermList) y_45 == ATempty))
                            {
                              {
                                ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,l_47 = NULL,n_47 = NULL,p_47 = NULL;
                                ATerm b_12;
                                b_12 = t;
                                {
                                  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
                                  t = (ATerm) ATinsert(CheckATermList(not_null(t_45)), not_null(v_45));
                                  {
                                    t = map_1(t, new_0);
                                    {
                                      o_46 = t;
                                      r_44 :
                                      if(((ATgetType(o_46) == AT_LIST) && ((ATermList) o_46 != ATempty)))
                                        {
                                          p_46 = ATgetFirst((ATermList) o_46);
                                          q_46 = (ATerm) ATgetNext((ATermList) o_46);
                                          {
                                            ATerm t_46 = NULL;
                                            if(((h_46 != NULL) && (h_46 != p_46)))
                                              _fail(p_46);
                                            else
                                              h_46 = p_46;
                                            {
                                              if(((l_46 != NULL) && (l_46 != q_46)))
                                                _fail(q_46);
                                              else
                                                l_46 = q_46;
                                              {
                                                ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
                                                ATerm l_1 (ATerm t)
                                                {
                                                  ATerm r_46 = NULL;
                                                  ATerm s_46 = NULL;
                                                  s_46 = t;
                                                  if(((r_46 != NULL) && (r_46 != s_46)))
                                                    _fail(s_46);
                                                  else
                                                    r_46 = s_46;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_46));
                                                  return(t);
                                                }
                                                t = map_1(t, l_1);
                                                {
                                                  t_46 = t;
                                                  {
                                                    if(((i_46 != NULL) && (i_46 != t_46)))
                                                      _fail(t_46);
                                                    else
                                                      i_46 = t_46;
                                                    {
                                                      t = (ATerm) ATinsert(CheckATermList(not_null(t_45)), not_null(v_45));
                                                      {
                                                        t = map_1(t, new_0);
                                                        {
                                                          u_46 = t;
                                                          q_44 :
                                                          if(((ATgetType(u_46) == AT_LIST) && ((ATermList) u_46 != ATempty)))
                                                            {
                                                              v_46 = ATgetFirst((ATermList) u_46);
                                                              w_46 = (ATerm) ATgetNext((ATermList) u_46);
                                                              {
                                                                ATerm z_46 = NULL;
                                                                if(((j_46 != NULL) && (j_46 != v_46)))
                                                                  _fail(v_46);
                                                                else
                                                                  j_46 = v_46;
                                                                {
                                                                  if(((m_46 != NULL) && (m_46 != w_46)))
                                                                    _fail(w_46);
                                                                  else
                                                                    m_46 = w_46;
                                                                  {
                                                                    ATerm a_47 = NULL,k_47 = NULL;
                                                                    ATerm m_1 (ATerm t)
                                                                    {
                                                                      ATerm x_46 = NULL;
                                                                      ATerm y_46 = NULL;
                                                                      y_46 = t;
                                                                      if(((x_46 != NULL) && (x_46 != y_46)))
                                                                        _fail(y_46);
                                                                      else
                                                                        x_46 = y_46;
                                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_46));
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, m_1);
                                                                    {
                                                                      z_46 = t;
                                                                      {
                                                                        if(((k_46 != NULL) && (k_46 != z_46)))
                                                                          _fail(z_46);
                                                                        else
                                                                          k_46 = z_46;
                                                                        {
                                                                          ATerm b_47 = NULL;
                                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_46), not_null(m_46));
                                                                          {
                                                                            t = zip_1(t, _id);
                                                                            {
                                                                              b_47 = t;
                                                                              if(((a_47 != NULL) && (a_47 != b_47)))
                                                                                _fail(b_47);
                                                                              else
                                                                                a_47 = b_47;
                                                                            }
                                                                          }
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_47), (ATerm) ATinsert(CheckATermList(not_null(t_45)), not_null(v_45)));
                                                                            {
                                                                              ATerm n_1 (ATerm t)
                                                                              {
                                                                                ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
                                                                                c_47 = t;
                                                                                e_44 :
                                                                                if(match_cons(c_47, sym__2))
                                                                                  {
                                                                                    d_47 = ATgetArgument(c_47, 0);
                                                                                    g_47 = ATgetArgument(c_47, 1);
                                                                                    f_44 :
                                                                                    if(match_cons(d_47, sym__2))
                                                                                      {
                                                                                        e_47 = ATgetArgument(d_47, 0);
                                                                                        f_47 = ATgetArgument(d_47, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_47))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_47), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_47)))));
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
                                                                              t = zip_1(t, n_1);
                                                                              {
                                                                                k_47 = t;
                                                                                if(((n_46 != NULL) && (n_46 != k_47)))
                                                                                  _fail(k_47);
                                                                                else
                                                                                  n_46 = k_47;
                                                                              }
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
                                t = b_12;
                                {
                                  ATerm c_12;
                                  c_12 = t;
                                  {
                                    ATerm m_47 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_46), not_null(m_46));
                                    {
                                      t = conc_0(t);
                                      {
                                        m_47 = t;
                                        if(((l_47 != NULL) && (l_47 != m_47)))
                                          _fail(m_47);
                                        else
                                          l_47 = m_47;
                                      }
                                    }
                                  }
                                  t = c_12;
                                  {
                                    ATerm l_12;
                                    l_12 = t;
                                    {
                                      ATerm o_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_45), not_null(i_46)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_46))));
                                      {
                                        t = Mapp2_0(t);
                                        {
                                          o_47 = t;
                                          if(((n_47 != NULL) && (n_47 != o_47)))
                                            _fail(o_47);
                                          else
                                            n_47 = o_47;
                                        }
                                      }
                                    }
                                    t = l_12;
                                    {
                                      ATerm q_47 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, not_null(s_45), not_null(k_46)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_46))));
                                      {
                                        t = Bapp2_0(t);
                                        {
                                          q_47 = t;
                                          if(((p_47 != NULL) && (p_47 != q_47)))
                                            _fail(q_47);
                                          else
                                            p_47 = q_47;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(l_47)), not_null(j_46)), not_null(h_46)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(n_46)), not_null(p_47))));
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
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym_Prim_2))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      {
        ATerm q_48 = NULL,s_48 = NULL;
        ATerm r_48 = NULL;
        t = SSLgetAnnotations(not_null(k_48));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
        {
          t = not_null(l_48);
          {
            ATerm u_48 = NULL;
            t = i_88(t);
            {
              s_48 = t;
              {
                t = not_null(m_48);
                {
                  ATerm w_48 = NULL;
                  t = j_88(t);
                  {
                    u_48 = t;
                    {
                      ATerm x_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(s_48), not_null(u_48)), not_null(q_48));
                      {
                        x_48 = t;
                        if(((w_48 != NULL) && (w_48 != x_48)))
                          _fail(x_48);
                        else
                          w_48 = x_48;
                      }
                      t = not_null(w_48);
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
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym_Explode_2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      {
        ATerm p_49 = NULL,r_49 = NULL;
        ATerm q_49 = NULL;
        t = SSLgetAnnotations(not_null(j_49));
        {
          q_49 = t;
          if(((p_49 != NULL) && (p_49 != q_49)))
            _fail(q_49);
          else
            p_49 = q_49;
        }
        {
          t = not_null(k_49);
          {
            ATerm t_49 = NULL;
            t = n_84(t);
            {
              r_49 = t;
              {
                t = not_null(l_49);
                {
                  ATerm v_49 = NULL;
                  t = o_84(t);
                  {
                    t_49 = t;
                    {
                      ATerm w_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(r_49), not_null(t_49)), not_null(p_49));
                      {
                        w_49 = t;
                        if(((v_49 != NULL) && (v_49 != w_49)))
                          _fail(w_49);
                        else
                          v_49 = w_49;
                      }
                      t = not_null(v_49);
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
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  i_50 = t;
  h_50 :
  if(match_cons(i_50, sym_Op_2))
    {
      j_50 = ATgetArgument(i_50, 0);
      k_50 = ATgetArgument(i_50, 1);
      {
        ATerm o_50 = NULL,q_50 = NULL;
        ATerm p_50 = NULL;
        t = SSLgetAnnotations(not_null(i_50));
        {
          p_50 = t;
          if(((o_50 != NULL) && (o_50 != p_50)))
            _fail(p_50);
          else
            o_50 = p_50;
        }
        {
          t = not_null(j_50);
          {
            ATerm s_50 = NULL;
            t = i_86(t);
            {
              q_50 = t;
              {
                t = not_null(k_50);
                {
                  ATerm u_50 = NULL;
                  t = j_86(t);
                  {
                    s_50 = t;
                    {
                      ATerm v_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(q_50), not_null(s_50)), not_null(o_50));
                      {
                        v_50 = t;
                        if(((u_50 != NULL) && (u_50 != v_50)))
                          _fail(v_50);
                        else
                          u_50 = v_50;
                      }
                      t = not_null(u_50);
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_112(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, u_112);
                return(t);
              }
              t = fetch_1(t, p_1);
              return(t);
            }
            t = Op_2(t, _id, o_1);
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, u_112);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  {
                    ATerm y_12 = t;
                    int z_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_1 (ATerm t)
                        {
                          t = pat_td_1(t, u_112);
                          return(t);
                        }
                        t = Explode_2(t, r_1, _id);
                        LocalPopChoice(z_12);
                      }
                    else
                      {
                        t = y_12;
                        {
                          ATerm s_1 (ATerm t)
                          {
                            ATerm t_1 (ATerm t)
                            {
                              t = pat_td_1(t, u_112);
                              return(t);
                            }
                            t = fetch_1(t, t_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, s_1);
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
  ATerm r_51 = NULL,s_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_cons(r_51, sym_Match_1))
    {
      s_51 = ATgetArgument(r_51, 0);
      {
        ATerm a_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL;
            ATerm y_51 = NULL;
            ATerm c_52 = NULL;
            t = new_0(t);
            {
              y_51 = t;
              {
                if(((w_51 != NULL) && (w_51 != y_51)))
                  _fail(y_51);
                else
                  w_51 = y_51;
                {
                  t = not_null(s_51);
                  {
                    ATerm u_1 (ATerm t)
                    {
                      ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
                      z_51 = t;
                      g_51 :
                      if(match_cons(z_51, sym_Anno_2))
                        {
                          a_52 = ATgetArgument(z_51, 0);
                          b_52 = ATgetArgument(z_51, 1);
                          {
                            if(((u_51 != NULL) && (u_51 != a_52)))
                              _fail(a_52);
                            else
                              u_51 = a_52;
                            {
                              if(((v_51 != NULL) && (v_51 != b_52)))
                                _fail(b_52);
                              else
                                v_51 = b_52;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(w_51)), not_null(u_51));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, u_1);
                    {
                      c_52 = t;
                      if(((x_51 != NULL) && (x_51 != c_52)))
                        _fail(c_52);
                      else
                        x_51 = c_52;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_51)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_51)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_51)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_51))))));
            LocalPopChoice(n_13);
          }
        else
          {
            t = a_13;
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
                  ATerm h_52 = NULL;
                  ATerm k_52 = NULL;
                  t = new_0(t);
                  {
                    h_52 = t;
                    {
                      if(((f_52 != NULL) && (f_52 != h_52)))
                        _fail(h_52);
                      else
                        f_52 = h_52;
                      {
                        t = not_null(s_51);
                        {
                          ATerm v_1 (ATerm t)
                          {
                            ATerm i_52 = NULL,j_52 = NULL;
                            i_52 = t;
                            k_51 :
                            if(match_cons(i_52, sym_RootApp_1))
                              {
                                j_52 = ATgetArgument(i_52, 0);
                                {
                                  if(((e_52 != NULL) && (e_52 != j_52)))
                                    _fail(j_52);
                                  else
                                    e_52 = j_52;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_52));
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
                            k_52 = t;
                            if(((g_52 != NULL) && (g_52 != k_52)))
                              _fail(k_52);
                            else
                              g_52 = k_52;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_52))), not_null(e_52))));
                  LocalPopChoice(q_13);
                }
              else
                {
                  t = p_13;
                  {
                    ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
                    ATerm q_52 = NULL;
                    ATerm u_52 = NULL;
                    t = new_0(t);
                    {
                      q_52 = t;
                      {
                        if(((o_52 != NULL) && (o_52 != q_52)))
                          _fail(q_52);
                        else
                          o_52 = q_52;
                        {
                          t = not_null(s_51);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
                              r_52 = t;
                              o_51 :
                              if(match_cons(r_52, sym_App_2))
                                {
                                  s_52 = ATgetArgument(r_52, 0);
                                  t_52 = ATgetArgument(r_52, 1);
                                  {
                                    if(((n_52 != NULL) && (n_52 != s_52)))
                                      _fail(s_52);
                                    else
                                      n_52 = s_52;
                                    {
                                      if(((m_52 != NULL) && (m_52 != t_52)))
                                        _fail(t_52);
                                      else
                                        m_52 = t_52;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_52));
                                    }
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
                              u_52 = t;
                              if(((p_52 != NULL) && (p_52 != u_52)))
                                _fail(u_52);
                              else
                                p_52 = u_52;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_52)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_52)), not_null(n_52)))));
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
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL;
  p_53 = t;
  o_53 :
  if(match_cons(p_53, sym_Cong_2))
    {
      q_53 = ATgetArgument(p_53, 0);
      r_53 = ATgetArgument(p_53, 1);
      {
        ATerm u_53 = NULL;
        ATerm y_53 = NULL;
        t = not_null(r_53);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm v_53 = NULL,w_53 = NULL;
            w_53 = t;
            m_53 :
            if(match_cons(w_53, sym_Match_1))
              {
                v_53 = ATgetArgument(w_53, 0);
                t = not_null(v_53);
              }
            else
              {
                if(match_cons(w_53, sym_Id_0))
                  {
                    t = term_r_13;
                  }
                else
                  {
                    _fail(t);
                  }
              }
            return(t);
          }
          t = map_1(t, x_1);
          {
            y_53 = t;
            if(((u_53 != NULL) && (u_53 != y_53)))
              _fail(y_53);
            else
              u_53 = y_53;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_53), not_null(u_53)));
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
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  g_54 = t;
  e_54 :
  if(match_cons(g_54, sym_Scope_2))
    {
      h_54 = ATgetArgument(g_54, 0);
      i_54 = ATgetArgument(g_54, 1);
      f_54 :
      if(((ATermList) h_54 == ATempty))
        {
          t = not_null(i_54);
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
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  r_54 :
  if(match_cons(e_55, sym_Where_1))
    {
      f_55 = ATgetArgument(e_55, 0);
      s_54 :
      if(match_cons(f_55, sym_Seq_2))
        {
          d_55 = ATgetArgument(f_55, 0);
          z_54 = ATgetArgument(f_55, 1);
          t_54 :
          if(match_cons(d_55, sym_Where_1))
            {
              y_54 = ATgetArgument(d_55, 0);
              u_54 :
              if(match_cons(z_54, sym_Seq_2))
                {
                  a_55 = ATgetArgument(z_54, 0);
                  c_55 = ATgetArgument(z_54, 1);
                  v_54 :
                  if(match_cons(a_55, sym_Build_1))
                    {
                      b_55 = ATgetArgument(a_55, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_55)), not_null(c_55))));
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
          if(match_cons(f_55, sym_Where_1))
            {
              d_55 = ATgetArgument(f_55, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(d_55));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(match_cons(e_55, sym_Test_1))
        {
          f_55 = ATgetArgument(e_55, 0);
          w_54 :
          if(match_cons(f_55, sym_Test_1))
            {
              d_55 = ATgetArgument(f_55, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_55));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(e_55, sym_Not_1))
            {
              f_55 = ATgetArgument(e_55, 0);
              x_54 :
              if(match_cons(f_55, sym_Not_1))
                {
                  d_55 = ATgetArgument(f_55, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(d_55));
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(e_55, sym_LChoice_2))
                {
                  f_55 = ATgetArgument(e_55, 0);
                  g_55 = ATgetArgument(e_55, 1);
                  {
                    if(((f_55 != NULL) && (f_55 != g_55)))
                      _fail(g_55);
                    else
                      f_55 = g_55;
                    t = not_null(f_55);
                  }
                }
              else
                {
                  if(match_cons(e_55, sym_Choice_2))
                    {
                      f_55 = ATgetArgument(e_55, 0);
                      g_55 = ATgetArgument(e_55, 1);
                      {
                        if(((f_55 != NULL) && (f_55 != g_55)))
                          _fail(g_55);
                        else
                          f_55 = g_55;
                        t = not_null(f_55);
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
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  c_56 = t;
  y_55 :
  if(match_cons(c_56, sym_LChoice_2))
    {
      d_56 = ATgetArgument(c_56, 0);
      g_56 = ATgetArgument(c_56, 1);
      z_55 :
      if(match_cons(d_56, sym_LChoice_2))
        {
          e_56 = ATgetArgument(d_56, 0);
          f_56 = ATgetArgument(d_56, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(e_56), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_56), not_null(g_56)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_56, sym_Seq_2))
        {
          d_56 = ATgetArgument(c_56, 0);
          g_56 = ATgetArgument(c_56, 1);
          a_56 :
          if(match_cons(d_56, sym_Seq_2))
            {
              e_56 = ATgetArgument(d_56, 0);
              f_56 = ATgetArgument(d_56, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_56), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_56), not_null(g_56)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(c_56, sym_Choice_2))
            {
              d_56 = ATgetArgument(c_56, 0);
              g_56 = ATgetArgument(c_56, 1);
              b_56 :
              if(match_cons(d_56, sym_Choice_2))
                {
                  e_56 = ATgetArgument(d_56, 0);
                  f_56 = ATgetArgument(d_56, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_56), (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_56), not_null(g_56)));
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
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL;
  o_57 = t;
  g_57 :
  if(match_cons(o_57, sym_InfixApp_3))
    {
      p_57 = ATgetArgument(o_57, 0);
      l_57 = ATgetArgument(o_57, 1);
      k_57 = ATgetArgument(o_57, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_57), (ATerm) ATmakeAppl(sym_Op_2, term_s_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_57)), not_null(p_57))));
    }
  else
    {
      if(match_cons(o_57, sym_BAM_3))
        {
          p_57 = ATgetArgument(o_57, 0);
          l_57 = ATgetArgument(o_57, 1);
          k_57 = ATgetArgument(o_57, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(k_57))), not_null(p_57)), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_57))));
        }
      else
        {
          if(match_cons(o_57, sym_AM_2))
            {
              p_57 = ATgetArgument(o_57, 0);
              l_57 = ATgetArgument(o_57, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_57), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_57)));
            }
          else
            {
              if(match_cons(o_57, sym_MA_2))
                {
                  p_57 = ATgetArgument(o_57, 0);
                  l_57 = ATgetArgument(o_57, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_57)), not_null(l_57));
                }
              else
                {
                  if(match_cons(o_57, sym_BA_2))
                    {
                      p_57 = ATgetArgument(o_57, 0);
                      l_57 = ATgetArgument(o_57, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_57)), not_null(p_57));
                    }
                  else
                    {
                      if(match_cons(o_57, sym_Lets_2))
                        {
                          p_57 = ATgetArgument(o_57, 0);
                          l_57 = ATgetArgument(o_57, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_57), not_null(l_57));
                        }
                      else
                        {
                          if(match_cons(o_57, sym_LChoices_1))
                            {
                              p_57 = ATgetArgument(o_57, 0);
                              h_57 :
                              if(((ATgetType(p_57) == AT_LIST) && ((ATermList) p_57 != ATempty)))
                                {
                                  m_57 = ATgetFirst((ATermList) p_57);
                                  n_57 = (ATerm) ATgetNext((ATermList) p_57);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_57), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(n_57)));
                                }
                              else
                                {
                                  if(((ATermList) p_57 == ATempty))
                                    {
                                      t = term_q_7;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(o_57, sym_Choices_1))
                                {
                                  p_57 = ATgetArgument(o_57, 0);
                                  i_57 :
                                  if(((ATgetType(p_57) == AT_LIST) && ((ATermList) p_57 != ATempty)))
                                    {
                                      m_57 = ATgetFirst((ATermList) p_57);
                                      n_57 = (ATerm) ATgetNext((ATermList) p_57);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_57), (ATerm) ATmakeAppl(sym_Choices_1, not_null(n_57)));
                                    }
                                  else
                                    {
                                      if(((ATermList) p_57 == ATempty))
                                        {
                                          t = term_q_7;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(o_57, sym_Seqs_1))
                                    {
                                      p_57 = ATgetArgument(o_57, 0);
                                      j_57 :
                                      if(((ATgetType(p_57) == AT_LIST) && ((ATermList) p_57 != ATempty)))
                                        {
                                          m_57 = ATgetFirst((ATermList) p_57);
                                          n_57 = (ATerm) ATgetNext((ATermList) p_57);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_57), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_57)));
                                        }
                                      else
                                        {
                                          if(((ATermList) p_57 == ATempty))
                                            {
                                              t = term_t_13;
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
  ATerm z_58 = NULL,a_59 = NULL;
  z_58 = t;
  x_58 :
  if(match_cons(z_58, sym_Where_1))
    {
      a_59 = ATgetArgument(z_58, 0);
      y_58 :
      if(match_cons(a_59, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  f_59 :
  if(match_cons(h_59, sym_LChoice_2))
    {
      i_59 = ATgetArgument(h_59, 0);
      j_59 = ATgetArgument(h_59, 1);
      g_59 :
      if(match_cons(j_59, sym_Fail_0))
        {
          t = not_null(i_59);
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
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
  p_59 = t;
  n_59 :
  if(match_cons(p_59, sym_LChoice_2))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      o_59 :
      if(match_cons(q_59, sym_Fail_0))
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
ATerm F12_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  v_59 :
  if(match_cons(b_60, sym_Choice_2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      w_59 :
      if(match_cons(d_60, sym_Fail_0))
        {
          t = not_null(c_60);
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
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
  j_60 = t;
  h_60 :
  if(match_cons(j_60, sym_Choice_2))
    {
      k_60 = ATgetArgument(j_60, 0);
      l_60 = ATgetArgument(j_60, 1);
      i_60 :
      if(match_cons(k_60, sym_Fail_0))
        {
          t = not_null(l_60);
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
  ATerm z_60 = NULL,b_61 = NULL,c_61 = NULL;
  z_60 = t;
  w_60 :
  if(match_cons(z_60, sym_Cong_2))
    {
      b_61 = ATgetArgument(z_60, 0);
      c_61 = ATgetArgument(z_60, 1);
      {
        t = not_null(c_61);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm f_61 = NULL;
            f_61 = t;
            v_60 :
            if(!(match_cons(f_61, sym_Fail_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, y_1);
        }
        t = term_q_7;
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
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  k_61 = t;
  i_61 :
  if(match_cons(k_61, sym_Path_2))
    {
      l_61 = ATgetArgument(k_61, 0);
      m_61 = ATgetArgument(k_61, 1);
      j_61 :
      if(match_cons(m_61, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm u_61 = NULL,v_61 = NULL;
  u_61 = t;
  s_61 :
  if(match_cons(u_61, sym_One_1))
    {
      v_61 = ATgetArgument(u_61, 0);
      t_61 :
      if(match_cons(v_61, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm d_62 = NULL,e_62 = NULL;
  d_62 = t;
  y_61 :
  if(match_cons(d_62, sym_Some_1))
    {
      e_62 = ATgetArgument(d_62, 0);
      z_61 :
      if(match_cons(e_62, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
  n_62 = t;
  h_62 :
  if(match_cons(n_62, sym_Rec_2))
    {
      o_62 = ATgetArgument(n_62, 0);
      p_62 = ATgetArgument(n_62, 1);
      m_62 :
      if(match_cons(p_62, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm z_62 = NULL,c_63 = NULL,d_63 = NULL;
  z_62 = t;
  x_62 :
  if(match_cons(z_62, sym_Scope_2))
    {
      c_63 = ATgetArgument(z_62, 0);
      d_63 = ATgetArgument(z_62, 1);
      y_62 :
      if(match_cons(d_63, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
  j_63 = t;
  h_63 :
  if(match_cons(j_63, sym_Seq_2))
    {
      k_63 = ATgetArgument(j_63, 0);
      l_63 = ATgetArgument(j_63, 1);
      i_63 :
      if(match_cons(k_63, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm r_63 = NULL,s_63 = NULL;
  r_63 = t;
  p_63 :
  if(match_cons(r_63, sym_Not_1))
    {
      s_63 = ATgetArgument(r_63, 0);
      q_63 :
      if(match_cons(s_63, sym_Fail_0))
        {
          t = term_t_13;
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
  ATerm x_63 = NULL,y_63 = NULL;
  x_63 = t;
  v_63 :
  if(match_cons(x_63, sym_Test_1))
    {
      y_63 = ATgetArgument(x_63, 0);
      w_63 :
      if(match_cons(y_63, sym_Fail_0))
        {
          t = term_q_7;
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
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm w_13 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(h_14);
          }
        else
          {
            t = w_13;
            {
              ATerm i_14 = t;
              int j_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(j_14);
                }
              else
                {
                  t = i_14;
                  {
                    ATerm k_14 = t;
                    int l_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
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
                              t = F6_0(t);
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
                                    t = F7_0(t);
                                    LocalPopChoice(q_14);
                                  }
                                else
                                  {
                                    t = o_14;
                                    {
                                      ATerm f_15 = t;
                                      int g_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(g_15);
                                        }
                                      else
                                        {
                                          t = f_15;
                                          {
                                            ATerm m_15 = t;
                                            int n_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(n_15);
                                              }
                                            else
                                              {
                                                t = m_15;
                                                {
                                                  ATerm p_15 = t;
                                                  int q_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
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
                                                            t = F11_0(t);
                                                            LocalPopChoice(s_15);
                                                          }
                                                        else
                                                          {
                                                            t = r_15;
                                                            {
                                                              ATerm x_15 = t;
                                                              int y_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(y_15);
                                                                }
                                                              else
                                                                {
                                                                  t = x_15;
                                                                  {
                                                                    ATerm z_15 = t;
                                                                    int o_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(o_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_15;
                                                                        {
                                                                          ATerm p_16 = t;
                                                                          int q_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(q_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_16;
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
  ATerm d_64 = NULL,e_64 = NULL;
  d_64 = t;
  b_64 :
  if(match_cons(d_64, sym_Match_1))
    {
      e_64 = ATgetArgument(d_64, 0);
      c_64 :
      if(match_cons(e_64, sym_Wld_0))
        {
          t = term_t_13;
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
  ATerm j_64 = NULL,k_64 = NULL;
  j_64 = t;
  h_64 :
  if(match_cons(j_64, sym_Where_1))
    {
      k_64 = ATgetArgument(j_64, 0);
      i_64 :
      if(match_cons(k_64, sym_Id_0))
        {
          t = term_t_13;
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
  ATerm p_64 = NULL,q_64 = NULL;
  p_64 = t;
  n_64 :
  if(match_cons(p_64, sym_All_1))
    {
      q_64 = ATgetArgument(p_64, 0);
      o_64 :
      if(match_cons(q_64, sym_Id_0))
        {
          t = term_t_13;
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
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  v_64 = t;
  t_64 :
  if(match_cons(v_64, sym_Rec_2))
    {
      w_64 = ATgetArgument(v_64, 0);
      x_64 = ATgetArgument(v_64, 1);
      u_64 :
      if(match_cons(x_64, sym_Id_0))
        {
          t = term_t_13;
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
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
  d_65 = t;
  b_65 :
  if(match_cons(d_65, sym_Scope_2))
    {
      e_65 = ATgetArgument(d_65, 0);
      f_65 = ATgetArgument(d_65, 1);
      c_65 :
      if(match_cons(f_65, sym_Id_0))
        {
          t = term_t_13;
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
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL;
  l_65 = t;
  j_65 :
  if(match_cons(l_65, sym_LChoice_2))
    {
      m_65 = ATgetArgument(l_65, 0);
      n_65 = ATgetArgument(l_65, 1);
      k_65 :
      if(match_cons(m_65, sym_Id_0))
        {
          t = term_t_13;
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
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  r_65 :
  if(match_cons(t_65, sym_Seq_2))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      s_65 :
      if(match_cons(v_65, sym_Id_0))
        {
          t = not_null(u_65);
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
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
  b_66 = t;
  z_65 :
  if(match_cons(b_66, sym_Seq_2))
    {
      c_66 = ATgetArgument(b_66, 0);
      d_66 = ATgetArgument(b_66, 1);
      a_66 :
      if(match_cons(c_66, sym_Id_0))
        {
          t = not_null(d_66);
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
  ATerm w_66 = NULL,x_66 = NULL;
  w_66 = t;
  t_66 :
  if(match_cons(w_66, sym_Not_1))
    {
      x_66 = ATgetArgument(w_66, 0);
      v_66 :
      if(match_cons(x_66, sym_Id_0))
        {
          t = term_q_7;
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
  ATerm h_67 = NULL,i_67 = NULL;
  h_67 = t;
  f_67 :
  if(match_cons(h_67, sym_Test_1))
    {
      i_67 = ATgetArgument(h_67, 0);
      g_67 :
      if(match_cons(i_67, sym_Id_0))
        {
          t = term_t_13;
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
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
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
            t = I2_0(t);
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
                  t = I3_0(t);
                  LocalPopChoice(w_16);
                }
              else
                {
                  t = v_16;
                  {
                    ATerm e_17 = t;
                    int f_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(f_17);
                      }
                    else
                      {
                        t = e_17;
                        {
                          ATerm g_17 = t;
                          int j_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(j_17);
                            }
                          else
                            {
                              t = g_17;
                              {
                                ATerm k_17 = t;
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = k_17;
                                    {
                                      ATerm p_17 = t;
                                      int q_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(q_17);
                                        }
                                      else
                                        {
                                          t = p_17;
                                          {
                                            ATerm r_17 = t;
                                            int d_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(d_18);
                                              }
                                            else
                                              {
                                                t = r_17;
                                                {
                                                  ATerm e_18 = t;
                                                  int f_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(f_18);
                                                    }
                                                  else
                                                    {
                                                      t = e_18;
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
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      {
        ATerm i_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(q_18);
          }
        else
          {
            t = i_18;
            {
              ATerm r_18 = t;
              int s_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(s_18);
                }
              else
                {
                  t = r_18;
                  {
                    ATerm v_18 = t;
                    int w_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(w_18);
                      }
                    else
                      {
                        t = v_18;
                        {
                          ATerm x_18 = t;
                          int b_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(b_19);
                            }
                          else
                            {
                              t = x_18;
                              {
                                ATerm c_19 = t;
                                int d_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(d_19);
                                  }
                                else
                                  {
                                    t = c_19;
                                    {
                                      ATerm l_19 = t;
                                      int m_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(m_19);
                                        }
                                      else
                                        {
                                          t = l_19;
                                          {
                                            ATerm n_19 = t;
                                            int o_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = TransformingAnnoCongruence_0(t);
                                                LocalPopChoice(o_19);
                                              }
                                            else
                                              {
                                                t = n_19;
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
  ATerm z_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0(t);
      LocalPopChoice(b_20);
    }
  else
    {
      t = z_19;
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HoistLet_0(t);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CopyPropagation_0(t);
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  {
                    ATerm h_20 = t;
                    int m_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = FuseScope_0(t);
                        LocalPopChoice(m_20);
                      }
                    else
                      {
                        t = h_20;
                        {
                          ATerm n_20 = t;
                          int o_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = NoEffect_0(t);
                              LocalPopChoice(o_20);
                            }
                          else
                            {
                              t = n_20;
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildMatch_0(t);
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
                                    {
                                      ATerm s_20 = t;
                                      int y_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Inline_0(t);
                                          LocalPopChoice(y_20);
                                        }
                                      else
                                        {
                                          t = s_20;
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
  ATerm k_67 (ATerm t)
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        t = k_67(t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        t = u_94(t);
      }
    return(t);
  }
  t = k_67(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_94 (ATerm))
{
  t = repeat_2(t, w_94, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm a_108 (ATerm))
{
  ATerm l_67 (ATerm t)
  {
    t = a_108(t);
    {
      t = _all(t, l_67);
      t = a_108(t);
    }
    return(t);
  }
  t = l_67(t);
  return(t);
}
ATerm simplify_widen_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm a_2 (ATerm t)
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Optimize_0(t);
          LocalPopChoice(d_21);
        }
      else
        {
          t = c_21;
          t = WidenScope_0(t);
        }
      return(t);
    }
    t = repeat_1(t, a_2);
    return(t);
  }
  t = downup_1(t, z_1);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm h_87 (ATerm))
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL;
  u_67 = t;
  t_67 :
  if(match_cons(u_67, sym_SDef_3))
    {
      v_67 = ATgetArgument(u_67, 0);
      w_67 = ATgetArgument(u_67, 1);
      x_67 = ATgetArgument(u_67, 2);
      {
        ATerm w_68 = NULL,y_68 = NULL;
        ATerm x_68 = NULL;
        t = SSLgetAnnotations(not_null(u_67));
        {
          x_68 = t;
          if(((w_68 != NULL) && (w_68 != x_68)))
            _fail(x_68);
          else
            w_68 = x_68;
        }
        {
          t = not_null(v_67);
          {
            ATerm a_69 = NULL;
            t = f_87(t);
            {
              y_68 = t;
              {
                t = not_null(w_67);
                {
                  ATerm c_69 = NULL;
                  t = g_87(t);
                  {
                    a_69 = t;
                    {
                      t = not_null(x_67);
                      {
                        ATerm e_69 = NULL;
                        t = h_87(t);
                        {
                          c_69 = t;
                          {
                            ATerm f_69 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_68), not_null(a_69), not_null(c_69)), not_null(w_68));
                            {
                              f_69 = t;
                              if(((e_69 != NULL) && (e_69 != f_69)))
                                _fail(f_69);
                              else
                                e_69 = f_69;
                            }
                            t = not_null(e_69);
                          }
                        }
                      }
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
  ATerm k_70 = NULL,l_70 = NULL;
  k_70 = t;
  j_70 :
  if(match_cons(k_70, sym_Strategies_1))
    {
      l_70 = ATgetArgument(k_70, 0);
      {
        ATerm x_70 = NULL,z_70 = NULL;
        ATerm y_70 = NULL;
        t = SSLgetAnnotations(not_null(k_70));
        {
          y_70 = t;
          if(((x_70 != NULL) && (x_70 != y_70)))
            _fail(y_70);
          else
            x_70 = y_70;
        }
        {
          t = not_null(l_70);
          {
            ATerm b_71 = NULL;
            t = s_85(t);
            {
              z_70 = t;
              {
                ATerm c_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_70)), not_null(x_70));
                {
                  c_71 = t;
                  if(((b_71 != NULL) && (b_71 != c_71)))
                    _fail(c_71);
                  else
                    b_71 = c_71;
                }
                t = not_null(b_71);
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
  ATerm m_71 = NULL,n_71 = NULL;
  m_71 = t;
  l_71 :
  if(match_cons(m_71, sym_Specification_1))
    {
      n_71 = ATgetArgument(m_71, 0);
      {
        ATerm q_71 = NULL,s_71 = NULL;
        ATerm r_71 = NULL;
        t = SSLgetAnnotations(not_null(m_71));
        {
          r_71 = t;
          if(((q_71 != NULL) && (q_71 != r_71)))
            _fail(r_71);
          else
            q_71 = r_71;
        }
        {
          t = not_null(n_71);
          {
            ATerm u_71 = NULL;
            t = u_85(t);
            {
              s_71 = t;
              {
                ATerm v_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(s_71)), not_null(q_71));
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
  ATerm b_2 (ATerm t)
  {
    ATerm c_2 (ATerm t)
    {
      ATerm d_2 (ATerm t)
      {
        ATerm e_2 (ATerm t)
        {
          ATerm f_2 (ATerm t)
          {
            t = SDef_3(t, _id, _id, x_112);
            return(t);
          }
          t = map_1(t, f_2);
          return(t);
        }
        t = Strategies_1(t, e_2);
        return(t);
      }
      t = Cons_2(t, d_2, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, c_2);
    return(t);
  }
  t = Specification_1(t, b_2);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_76 (ATerm), ATerm n_76 (ATerm))
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(match_cons(g_72, sym__2))
    {
      h_72 = ATgetArgument(g_72, 0);
      i_72 = ATgetArgument(g_72, 1);
      {
        ATerm m_72 = NULL,o_72 = NULL;
        ATerm n_72 = NULL;
        t = SSLgetAnnotations(not_null(g_72));
        {
          n_72 = t;
          if(((m_72 != NULL) && (m_72 != n_72)))
            _fail(n_72);
          else
            m_72 = n_72;
        }
        {
          t = not_null(h_72);
          {
            ATerm q_72 = NULL;
            t = m_76(t);
            {
              o_72 = t;
              {
                t = not_null(i_72);
                {
                  ATerm s_72 = NULL;
                  t = n_76(t);
                  {
                    q_72 = t;
                    {
                      ATerm t_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_72), not_null(q_72)), not_null(m_72));
                      {
                        t_72 = t;
                        if(((s_72 != NULL) && (s_72 != t_72)))
                          _fail(t_72);
                        else
                          s_72 = t_72;
                      }
                      t = not_null(s_72);
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
  ATerm b_73 = NULL;
  ATerm e_21;
  e_21 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm c_73 = NULL,d_73 = NULL;
      c_73 = t;
      a_73 :
      if(match_cons(c_73, sym_Program_1))
        {
          d_73 = ATgetArgument(c_73, 0);
          if(((b_73 != NULL) && (b_73 != d_73)))
            _fail(d_73);
          else
            b_73 = d_73;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_21), not_null(b_73)), term_i_21));
      {
        t = printnl_0(t);
        {
          t = term_k_21;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATempty, term_p_21));
  {
    t = printnl_0(t);
    {
      t = term_k_21;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL;
  ATerm h_2 (ATerm t)
  {
    ATerm i_2 (ATerm t)
    {
      ATerm q_21 = t;
      if((PushChoice() == 0))
        {
          ATerm j_2 (ATerm t)
          {
            ATerm m_73 = NULL;
            m_73 = t;
            f_73 :
            if(!(match_cons(m_73, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, j_2);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_21;
        }
      return(t);
    }
    t = _2(t, i_2, _id);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          ATerm n_73 = NULL,o_73 = NULL;
          n_73 = t;
          h_73 :
          if(match_cons(n_73, sym_Runtime_1))
            {
              o_73 = ATgetArgument(n_73, 0);
              if(((l_73 != NULL) && (l_73 != o_73)))
                _fail(o_73);
              else
                l_73 = o_73;
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
        ATerm m_2 (ATerm t)
        {
          ATerm n_2 (ATerm t)
          {
            ATerm p_73 = NULL,q_73 = NULL;
            p_73 = t;
            j_73 :
            if(match_cons(p_73, sym_Program_1))
              {
                q_73 = ATgetArgument(p_73, 0);
                if(((k_73 != NULL) && (k_73 != q_73)))
                  _fail(q_73);
                else
                  k_73 = q_73;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_2);
          return(t);
        }
        t = _2(t, m_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_21), not_null(l_73)), term_r_21), not_null(k_73)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, h_2);
  {
    t = term_a_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL;
  v_73 = t;
  u_73 :
  if(match_cons(v_73, sym__2))
    {
      w_73 = ATgetArgument(v_73, 0);
      x_73 = ATgetArgument(v_73, 1);
      t = SSL_WriteToTextFile(not_null(w_73), not_null(x_73));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  c_74 :
  if(match_cons(d_74, sym__2))
    {
      e_74 = ATgetArgument(d_74, 0);
      f_74 = ATgetArgument(d_74, 1);
      t = SSL_WriteToBinaryFile(not_null(e_74), not_null(f_74));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_74 = NULL;
  ATerm b_22;
  b_22 = t;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_2 (ATerm t)
          {
            ATerm o_74 = NULL,p_74 = NULL;
            o_74 = t;
            k_74 :
            if(match_cons(o_74, sym_Output_1))
              {
                p_74 = ATgetArgument(o_74, 0);
                if(((n_74 != NULL) && (n_74 != p_74)))
                  _fail(p_74);
                else
                  n_74 = p_74;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_2);
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          {
            ATerm q_74 = NULL;
            t = term_e_22;
            {
              q_74 = t;
              if(((n_74 != NULL) && (n_74 != q_74)))
                _fail(q_74);
              else
                n_74 = q_74;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_2, _id);
  }
  t = b_22;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm r_2 (ATerm t)
      {
        t = not_null(n_74);
        return(t);
      }
      t = split_2(t, r_2, _id);
      return(t);
    }
    t = _2(t, _id, q_2);
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_2 (ATerm t)
          {
            ATerm t_2 (ATerm t)
            {
              ATerm r_74 = NULL;
              r_74 = t;
              m_74 :
              if(!(match_cons(r_74, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_2);
            return(t);
          }
          t = _2(t, s_2, WriteToBinaryFile_0);
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
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
  ATerm x_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  ATerm i_22;
  i_22 = t;
  t = dtime_0(t);
  t = i_22;
  {
    t = x_91(t);
    {
      ATerm j_22;
      j_22 = t;
      {
        ATerm y_74 = NULL;
        t = dtime_0(t);
        {
          y_74 = t;
          if(((x_74 != NULL) && (x_74 != y_74)))
            _fail(y_74);
          else
            x_74 = y_74;
        }
      }
      t = j_22;
      {
        z_74 = t;
        w_74 :
        if(match_cons(z_74, sym__2))
          {
            a_75 = ATgetArgument(z_74, 0);
            b_75 = ATgetArgument(z_74, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_75)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_74))), not_null(b_75));
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
  ATerm h_75 = NULL;
  h_75 = t;
  t = SSL_ReadFromFile(not_null(h_75));
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_106 (ATerm), ATerm q_106 (ATerm))
{
  ATerm m_75 = NULL,o_75 = NULL;
  ATerm l_22;
  l_22 = t;
  {
    ATerm n_75 = NULL;
    t = p_106(t);
    {
      n_75 = t;
      if(((m_75 != NULL) && (m_75 != n_75)))
        _fail(n_75);
      else
        m_75 = n_75;
    }
  }
  t = l_22;
  {
    ATerm p_75 = NULL;
    t = q_106(t);
    {
      p_75 = t;
      if(((o_75 != NULL) && (o_75 != p_75)))
        _fail(p_75);
      else
        o_75 = p_75;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_75), not_null(o_75));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_75 = NULL;
  ATerm t_22;
  t_22 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_2 (ATerm t)
        {
          ATerm w_75 = NULL,x_75 = NULL;
          w_75 = t;
          t_75 :
          if(match_cons(w_75, sym_Input_1))
            {
              x_75 = ATgetArgument(w_75, 0);
              if(((v_75 != NULL) && (v_75 != x_75)))
                _fail(x_75);
              else
                v_75 = x_75;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_2);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm y_75 = NULL;
          t = term_z_22;
          {
            y_75 = t;
            if(((v_75 != NULL) && (v_75 != y_75)))
              _fail(y_75);
            else
              v_75 = y_75;
          }
        }
      }
  }
  t = t_22;
  {
    ATerm x_2 (ATerm t)
    {
      t = not_null(v_75);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_76 = NULL;
  f_76 = t;
  e_76 :
  if(match_cons(f_76, sym_Version_0))
    {
      ATerm h_76 = NULL,j_76 = NULL;
      ATerm f_23;
      f_23 = t;
      {
        ATerm i_76 = NULL;
        t = SSLgetAnnotations(not_null(f_76));
        {
          i_76 = t;
          if(((h_76 != NULL) && (h_76 != i_76)))
            _fail(i_76);
          else
            h_76 = i_76;
        }
      }
      t = f_23;
      {
        ATerm k_76 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_76));
        {
          k_76 = t;
          if(((j_76 != NULL) && (j_76 != k_76)))
            _fail(k_76);
          else
            j_76 = k_76;
        }
        t = not_null(j_76);
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
  ATerm y_2 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_2);
  t = w_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_76 = NULL;
  r_76 = t;
  t = SSL_table_create(not_null(r_76));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  {
    ATerm p_23;
    p_23 = t;
    {
      t = term_q_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_23, term_r_23, not_null(v_76));
          t = table_put_0(t);
        }
      }
    }
    t = p_23;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
  d_77 = t;
  b_77 :
  if(match_string(d_77, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(d_77) == AT_LIST) && ((ATermList) d_77 != ATempty)))
        {
          e_77 = ATgetFirst((ATermList) d_77);
          f_77 = (ATerm) ATgetNext((ATermList) d_77);
          c_77 :
          if(((ATgetType(f_77) == AT_LIST) && ((ATermList) f_77 != ATempty)))
            {
              g_77 = ATgetFirst((ATermList) f_77);
              h_77 = (ATerm) ATgetNext((ATermList) f_77);
              {
                ATerm l_77 = NULL;
                ATerm z_23;
                z_23 = t;
                {
                  t = not_null(e_77);
                  t = k_0(t);
                }
                t = z_23;
                {
                  ATerm m_77 = NULL;
                  t = not_null(g_77);
                  {
                    t = l_0(t);
                    {
                      m_77 = t;
                      if(((l_77 != NULL) && (l_77 != m_77)))
                        _fail(m_77);
                      else
                        l_77 = m_77;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_77)), not_null(l_77));
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
  ATerm b_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_2 (ATerm t)
      {
        ATerm d_78 = NULL;
        d_78 = t;
        q_77 :
        if(!(match_string(d_78, "-S")))
          {
            if(!(match_string(d_78, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_e_24;
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = term_j_24;
        return(t);
      }
      t = Option_3(t, z_2, a_3, b_3);
      LocalPopChoice(d_24);
    }
  else
    {
      t = b_24;
      {
        ATerm k_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm e_78 = NULL;
              e_78 = t;
              r_77 :
              if(!(match_string(e_78, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              t = term_n_24;
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_o_24;
              return(t);
            }
            t = Option_3(t, c_3, d_3, e_3);
            LocalPopChoice(m_24);
          }
        else
          {
            t = k_24;
            {
              ATerm q_24 = t;
              int u_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm f_78 = NULL;
                    f_78 = t;
                    s_77 :
                    if(!(match_string(f_78, "-v")))
                      {
                        if(!(match_string(f_78, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm g_3 (ATerm t)
                  {
                    t = term_v_24;
                    return(t);
                  }
                  ATerm h_3 (ATerm t)
                  {
                    t = term_x_24;
                    return(t);
                  }
                  t = Option_3(t, f_3, g_3, h_3);
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = q_24;
                  {
                    ATerm y_24 = t;
                    int a_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_3 (ATerm t)
                        {
                          ATerm g_78 = NULL;
                          g_78 = t;
                          t_77 :
                          if(!(match_string(g_78, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm j_3 (ATerm t)
                        {
                          ATerm h_78 = NULL;
                          ATerm i_78 = NULL;
                          i_78 = t;
                          if(((h_78 != NULL) && (h_78 != i_78)))
                            _fail(i_78);
                          else
                            h_78 = i_78;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(h_78));
                          return(t);
                        }
                        ATerm m_3 (ATerm t)
                        {
                          t = term_c_25;
                          return(t);
                        }
                        t = ArgOption_3(t, i_3, j_3, m_3);
                        LocalPopChoice(a_25);
                      }
                    else
                      {
                        t = y_24;
                        {
                          ATerm d_25 = t;
                          int i_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_3 (ATerm t)
                              {
                                ATerm j_78 = NULL;
                                j_78 = t;
                                x_77 :
                                if(!(match_string(j_78, "-i")))
                                  {
                                    if(!(match_string(j_78, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_3 (ATerm t)
                              {
                                ATerm k_78 = NULL;
                                ATerm l_78 = NULL;
                                l_78 = t;
                                if(((k_78 != NULL) && (k_78 != l_78)))
                                  _fail(l_78);
                                else
                                  k_78 = l_78;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_78));
                                return(t);
                              }
                              ATerm p_3 (ATerm t)
                              {
                                t = term_j_25;
                                return(t);
                              }
                              t = ArgOption_3(t, n_3, o_3, p_3);
                              LocalPopChoice(i_25);
                            }
                          else
                            {
                              t = d_25;
                              {
                                ATerm l_25 = t;
                                int m_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_3 (ATerm t)
                                    {
                                      ATerm m_78 = NULL;
                                      m_78 = t;
                                      z_77 :
                                      if(!(match_string(m_78, "-o")))
                                        {
                                          if(!(match_string(m_78, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_3 (ATerm t)
                                    {
                                      ATerm n_78 = NULL;
                                      ATerm o_78 = NULL;
                                      o_78 = t;
                                      if(((n_78 != NULL) && (n_78 != o_78)))
                                        _fail(o_78);
                                      else
                                        n_78 = o_78;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_78));
                                      return(t);
                                    }
                                    ATerm s_3 (ATerm t)
                                    {
                                      t = term_n_25;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, q_3, r_3, s_3);
                                    LocalPopChoice(m_25);
                                  }
                                else
                                  {
                                    t = l_25;
                                    {
                                      ATerm o_25 = t;
                                      int p_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_3 (ATerm t)
                                          {
                                            ATerm p_78 = NULL;
                                            p_78 = t;
                                            b_78 :
                                            if(!(match_string(p_78, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_3 (ATerm t)
                                          {
                                            t = term_q_25;
                                            return(t);
                                          }
                                          ATerm v_3 (ATerm t)
                                          {
                                            t = term_u_25;
                                            return(t);
                                          }
                                          t = Option_3(t, t_3, u_3, v_3);
                                          LocalPopChoice(p_25);
                                        }
                                      else
                                        {
                                          t = o_25;
                                          {
                                            ATerm w_3 (ATerm t)
                                            {
                                              ATerm q_78 = NULL;
                                              q_78 = t;
                                              c_78 :
                                              if(!(match_string(q_78, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm x_3 (ATerm t)
                                            {
                                              t = term_v_25;
                                              return(t);
                                            }
                                            ATerm y_3 (ATerm t)
                                            {
                                              t = term_z_25;
                                              return(t);
                                            }
                                            t = Option_3(t, w_3, x_3, y_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm v_78 = NULL;
  v_78 = t;
  t = SSL_table_destroy(not_null(v_78));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_78 = NULL;
  z_78 = t;
  t = SSL_exit(not_null(z_78));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_79 = NULL;
  d_79 = t;
  t = SSL_implode_string(not_null(d_79));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm g_79 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_79);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          t = Nil_0(t);
          t = s_103(t);
        }
      }
    return(t);
  }
  t = g_79(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
        j_79 = t;
        i_79 :
        if(((ATgetType(j_79) == AT_LIST) && ((ATermList) j_79 != ATempty)))
          {
            k_79 = ATgetFirst((ATermList) j_79);
            l_79 = (ATerm) ATgetNext((ATermList) j_79);
            {
              t = not_null(k_79);
              {
                ATerm z_3 (ATerm t)
                {
                  t = not_null(l_79);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_3);
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
  ATerm r_79 = NULL;
  r_79 = t;
  t = SSL_explode_string(not_null(r_79));
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
  ATerm u_79 (ATerm t)
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = Cons_2(t, e_103, u_79);
      }
    return(t);
  }
  t = u_79(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
  d_80 = t;
  a_80 :
  if(((ATgetType(d_80) == AT_LIST) && ((ATermList) d_80 != ATempty)))
    {
      b_80 = ATgetFirst((ATermList) d_80);
      c_80 = (ATerm) ATgetNext((ATermList) d_80);
      {
        ATerm g_80 = NULL;
        t = not_null(c_80);
        {
          ATerm i_26;
          i_26 = t;
          {
            ATerm h_80 = NULL,j_80 = NULL,l_80 = NULL;
            ATerm j_26;
            j_26 = t;
            {
              ATerm i_80 = NULL;
              t = j_0(t);
              {
                i_80 = t;
                if(((h_80 != NULL) && (h_80 != i_80)))
                  _fail(i_80);
                else
                  h_80 = i_80;
              }
            }
            t = j_26;
            {
              ATerm k_80 = NULL;
              t = not_null(b_80);
              {
                t = i_0(t);
                {
                  k_80 = t;
                  if(((j_80 != NULL) && (j_80 != k_80)))
                    _fail(k_80);
                  else
                    j_80 = k_80;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(h_80)), not_null(j_80));
                {
                  l_80 = t;
                  if(((g_80 != NULL) && (g_80 != l_80)))
                    _fail(l_80);
                  else
                    g_80 = l_80;
                }
              }
            }
          }
          t = i_26;
          {
            ATerm a_4 (ATerm t)
            {
              t = not_null(g_80);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) d_80 == ATempty))
        {
          {
            t = term_k_26;
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
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm w_80 = NULL,x_80 = NULL;
  w_80 = t;
  v_80 :
  if(match_cons(w_80, sym_Program_1))
    {
      x_80 = ATgetArgument(w_80, 0);
      {
        ATerm a_81 = NULL,c_81 = NULL;
        ATerm b_81 = NULL;
        t = SSLgetAnnotations(not_null(w_80));
        {
          b_81 = t;
          if(((a_81 != NULL) && (a_81 != b_81)))
            _fail(b_81);
          else
            a_81 = b_81;
        }
        {
          t = not_null(x_80);
          {
            ATerm e_81 = NULL;
            t = v_77(t);
            {
              c_81 = t;
              {
                ATerm f_81 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_81)), not_null(a_81));
                {
                  f_81 = t;
                  if(((e_81 != NULL) && (e_81 != f_81)))
                    _fail(f_81);
                  else
                    e_81 = f_81;
                }
                t = not_null(e_81);
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
  ATerm o_81 = NULL;
  ATerm c_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm p_81 = NULL;
      p_81 = t;
      if(((o_81 != NULL) && (o_81 != p_81)))
        _fail(p_81);
      else
        o_81 = p_81;
      return(t);
    }
    t = Program_1(t, h_4);
    return(t);
  }
  t = option_defined_1(t, c_4);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm q_81 = NULL;
      ATerm r_81 = NULL;
      t = term_k_26;
      {
        ATerm j_4 (ATerm t)
        {
          t = not_null(o_81);
          return(t);
        }
        t = short_description_1(t, j_4);
        {
          t = concat_strings_0(t);
          {
            r_81 = t;
            if(((q_81 != NULL) && (q_81 != r_81)))
              _fail(r_81);
            else
              q_81 = r_81;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATempty, not_null(q_81)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, i_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATempty, term_l_26));
      {
        t = printnl_0(t);
        {
          t = term_o_26;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_4 (ATerm t)
                {
                  ATerm s_81 = NULL;
                  s_81 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_81)), term_p_26));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_4);
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm u_81 = NULL;
                    ATerm v_81 = NULL;
                    t = term_k_26;
                    {
                      ATerm n_4 (ATerm t)
                      {
                        t = not_null(o_81);
                        return(t);
                      }
                      t = long_description_1(t, n_4);
                      {
                        t = concat_strings_0(t);
                        {
                          v_81 = t;
                          if(((u_81 != NULL) && (u_81 != v_81)))
                            _fail(v_81);
                          else
                            u_81 = v_81;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_81)), term_q_26));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_4);
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
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  b_82 :
  if(match_cons(c_82, sym__2))
    {
      d_82 = ATgetArgument(c_82, 0);
      e_82 = ATgetArgument(c_82, 1);
      {
        ATerm r_26;
        r_26 = t;
        t = SSL_printnl(not_null(d_82), not_null(e_82));
        t = r_26;
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
  ATerm n_82 = NULL,o_82 = NULL;
  n_82 = t;
  m_82 :
  if(match_cons(n_82, sym_Undefined_1))
    {
      o_82 = ATgetArgument(n_82, 0);
      {
        ATerm r_82 = NULL,t_82 = NULL;
        ATerm s_82 = NULL;
        t = SSLgetAnnotations(not_null(n_82));
        {
          s_82 = t;
          if(((r_82 != NULL) && (r_82 != s_82)))
            _fail(s_82);
          else
            r_82 = s_82;
        }
        {
          t = not_null(o_82);
          {
            ATerm v_82 = NULL;
            t = w_77(t);
            {
              t_82 = t;
              {
                ATerm w_82 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_82)), not_null(r_82));
                {
                  w_82 = t;
                  if(((v_82 != NULL) && (v_82 != w_82)))
                    _fail(w_82);
                  else
                    v_82 = w_82;
                }
                t = not_null(v_82);
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
  ATerm b_83 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_103, _id);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = Cons_2(t, _id, b_83);
      }
    return(t);
  }
  t = b_83(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_91 (ATerm))
{
  t = fetch_1(t, b_91);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_83 = NULL;
  g_83 = t;
  f_83 :
  if(match_cons(g_83, sym_Help_0))
    {
      ATerm i_83 = NULL,k_83 = NULL;
      ATerm u_26;
      u_26 = t;
      {
        ATerm j_83 = NULL;
        t = SSLgetAnnotations(not_null(g_83));
        {
          j_83 = t;
          if(((i_83 != NULL) && (i_83 != j_83)))
            _fail(j_83);
          else
            i_83 = j_83;
        }
      }
      t = u_26;
      {
        ATerm l_83 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_83));
        {
          l_83 = t;
          if(((k_83 != NULL) && (k_83 != l_83)))
            _fail(l_83);
          else
            k_83 = l_83;
        }
        t = not_null(k_83);
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
  ATerm v_26 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_107(t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = v_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL;
  r_83 = t;
  q_83 :
  if(match_cons(r_83, sym__2))
    {
      s_83 = ATgetArgument(r_83, 0);
      t_83 = ATgetArgument(r_83, 1);
      t = SSL_table_get(not_null(s_83), not_null(t_83));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL;
  a_84 = t;
  z_83 :
  if(match_cons(a_84, sym__3))
    {
      b_84 = ATgetArgument(a_84, 0);
      c_84 = ATgetArgument(a_84, 1);
      d_84 = ATgetArgument(a_84, 2);
      {
        ATerm j_28;
        j_28 = t;
        {
          ATerm h_84 = NULL;
          ATerm i_84 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_84), not_null(c_84));
          {
            ATerm k_28 = t;
            int l_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_28);
              }
            else
              {
                t = k_28;
                t = (ATerm) ATempty;
              }
            {
              i_84 = t;
              if(((h_84 != NULL) && (h_84 != i_84)))
                _fail(i_84);
              else
                h_84 = i_84;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_84), not_null(c_84), (ATerm) ATinsert(CheckATermList(not_null(h_84)), not_null(d_84)));
            t = table_put_0(t);
          }
        }
        t = j_28;
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
  ATerm m_84 = NULL;
  ATerm p_84 = NULL;
  t = term_k_26;
  {
    t = h_90(t);
    {
      p_84 = t;
      if(((m_84 != NULL) && (m_84 != p_84)))
        _fail(p_84);
      else
        m_84 = p_84;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_26, term_n_26, not_null(m_84));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
  v_84 = t;
  u_84 :
  if(match_string(v_84, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(v_84) == AT_LIST) && ((ATermList) v_84 != ATempty)))
        {
          w_84 = ATgetFirst((ATermList) v_84);
          x_84 = (ATerm) ATgetNext((ATermList) v_84);
          {
            ATerm a_85 = NULL;
            ATerm r_28;
            r_28 = t;
            {
              t = not_null(w_84);
              t = c_0(t);
            }
            t = r_28;
            {
              ATerm b_85 = NULL;
              t = term_k_26;
              {
                t = d_0(t);
                {
                  b_85 = t;
                  if(((a_85 != NULL) && (a_85 != b_85)))
                    _fail(b_85);
                  else
                    a_85 = b_85;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_84)), not_null(a_85));
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
  ATerm o_4 (ATerm t)
  {
    ATerm g_85 = NULL;
    g_85 = t;
    f_85 :
    if(!(match_string(g_85, "--help")))
      {
        if(!(match_string(g_85, "-h")))
          {
            if(!(match_string(g_85, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_s_28;
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_t_28;
    return(t);
  }
  t = Option_3(t, o_4, s_4, t_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL;
  k_85 = t;
  j_85 :
  if(((ATgetType(k_85) == AT_LIST) && ((ATermList) k_85 != ATempty)))
    {
      l_85 = ATgetFirst((ATermList) k_85);
      m_85 = (ATerm) ATgetNext((ATermList) k_85);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_85)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_85)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_88 (ATerm), ATerm l_88 (ATerm))
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL;
  y_85 = t;
  x_85 :
  if(((ATgetType(y_85) == AT_LIST) && ((ATermList) y_85 != ATempty)))
    {
      z_85 = ATgetFirst((ATermList) y_85);
      a_86 = (ATerm) ATgetNext((ATermList) y_85);
      {
        ATerm f_86 = NULL,h_86 = NULL;
        ATerm g_86 = NULL;
        t = SSLgetAnnotations(not_null(y_85));
        {
          g_86 = t;
          if(((f_86 != NULL) && (f_86 != g_86)))
            _fail(g_86);
          else
            f_86 = g_86;
        }
        {
          t = not_null(z_85);
          {
            ATerm l_86 = NULL;
            t = k_88(t);
            {
              h_86 = t;
              {
                t = not_null(a_86);
                {
                  ATerm n_86 = NULL;
                  t = l_88(t);
                  {
                    l_86 = t;
                    {
                      ATerm o_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_86)), not_null(h_86)), not_null(f_86));
                      {
                        o_86 = t;
                        if(((n_86 != NULL) && (n_86 != o_86)))
                          _fail(o_86);
                        else
                          n_86 = o_86;
                      }
                      t = not_null(n_86);
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
  ATerm y_86 = NULL;
  y_86 = t;
  x_86 :
  if(((ATermList) y_86 == ATempty))
    {
      {
        ATerm a_87 = NULL,c_87 = NULL;
        ATerm u_28;
        u_28 = t;
        {
          ATerm b_87 = NULL;
          t = SSLgetAnnotations(not_null(y_86));
          {
            b_87 = t;
            if(((a_87 != NULL) && (a_87 != b_87)))
              _fail(b_87);
            else
              a_87 = b_87;
          }
        }
        t = u_28;
        {
          ATerm d_87 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_87));
          {
            d_87 = t;
            if(((c_87 != NULL) && (c_87 != d_87)))
              _fail(d_87);
            else
              c_87 = d_87;
          }
          t = not_null(c_87);
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
  ATerm z_28;
  z_28 = t;
  {
    ATerm x_4 (ATerm t)
    {
      t = term_a_29;
      t = f_90(t);
      return(t);
    }
    t = try_1(t, x_4);
  }
  t = z_28;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm l_87 = NULL;
      l_87 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_87));
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      ATerm b_29 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              {
                t = f_90(t);
                t = Cons_2(t, _id, b_5);
              }
            }
          LocalPopChoice(c_29);
        }
      else
        {
          t = b_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_5, b_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
  ATerm j_29;
  j_29 = t;
  {
    ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL;
    u_87 = t;
    q_87 :
    if(match_cons(u_87, sym__3))
      {
        v_87 = ATgetArgument(u_87, 0);
        w_87 = ATgetArgument(u_87, 1);
        x_87 = ATgetArgument(u_87, 2);
        {
          if(((r_87 != NULL) && (r_87 != v_87)))
            _fail(v_87);
          else
            r_87 = v_87;
          {
            if(((s_87 != NULL) && (s_87 != w_87)))
              _fail(w_87);
            else
              s_87 = w_87;
            {
              if(((t_87 != NULL) && (t_87 != x_87)))
                _fail(x_87);
              else
                t_87 = x_87;
              t = SSL_table_put(not_null(r_87), not_null(s_87), not_null(t_87));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm a_88 = NULL;
  ATerm k_29;
  k_29 = t;
  {
    t = term_p_29;
    t = table_put_0(t);
  }
  t = k_29;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_90(t);
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_5);
    {
      ATerm d_5 (ATerm t)
      {
        ATerm s_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_a_22;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_29);
          }
        else
          {
            t = s_29;
            {
              ATerm e_5 (ATerm t)
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm b_88 = NULL;
                  b_88 = t;
                  if(((a_88 != NULL) && (a_88 != b_88)))
                    _fail(b_88);
                  else
                    a_88 = b_88;
                  return(t);
                }
                t = Undefined_1(t, f_5);
                return(t);
              }
              t = option_defined_1(t, e_5);
              {
                ATerm y_29;
                y_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_88)), term_z_29));
                  t = printnl_0(t);
                }
                t = y_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, d_5);
      {
        ATerm a_30;
        a_30 = t;
        {
          t = term_m_26;
          t = table_destroy_0(t);
        }
        t = a_30;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_91(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, g_5);
  {
    t = store_options_0(t);
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, n_91);
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          {
            ATerm f_30 = t;
            int g_30 = stack_ptr;
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
                LocalPopChoice(g_30);
              }
            else
              {
                t = f_30;
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
  ATerm h_5 (ATerm t)
  {
    t = _2(t, _id, d_91);
    return(t);
  }
  t = iowrap_2(t, h_5, _fail);
  return(t);
}
ATerm optimize1_comp_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
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
    t = apply_to_bodies_1(t, n_5);
    return(t);
  }
  t = iowrap_1(t, i_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = optimize1_comp_0(t);
  return(t);
}
