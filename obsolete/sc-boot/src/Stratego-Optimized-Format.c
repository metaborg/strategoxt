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
ATerm term_d_14;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_o_9;
ATerm term_e_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_y_7;
ATerm term_r_7;
ATerm term_o_4;
ATerm term_t_3;
void init_constant_terms (void)
{
  ATprotect(&(term_t_3));
  term_t_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATinsert(ATempty, term_l_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATinsert(ATempty, term_o_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_t_3, term_p_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATinsert(ATempty, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATinsert(ATempty, term_e_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_t_3, term_g_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__3, term_j_12, term_k_12, (ATerm) ATempty);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm c_51 (ATerm));
ATerm Var_1 (ATerm, ATerm y_42 (ATerm));
ATerm Assign_1 (ATerm, ATerm e_40 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm q_41 (ATerm));
ATerm Op_2 (ATerm, ATerm c_43 (ATerm), ATerm d_43 (ATerm));
ATerm Str_1 (ATerm, ATerm p_0 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm o_0 (ATerm));
ATerm Int_1 (ATerm, ATerm n_0 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Assign_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm Continue_1 (ATerm, ATerm b_40 (ATerm));
ATerm Alt_3 (ATerm, ATerm y_39 (ATerm), ATerm z_39 (ATerm), ATerm a_40 (ATerm));
ATerm Case_4 (ATerm, ATerm r_39 (ATerm), ATerm s_39 (ATerm), ATerm t_39 (ATerm), ATerm u_39 (ATerm));
ATerm Let_2 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm));
ATerm Prim_2 (ATerm, ATerm z_44 (ATerm), ATerm a_45 (ATerm));
ATerm Where_1 (ATerm, ATerm y_44 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm w_44 (ATerm), ATerm x_44 (ATerm));
ATerm Build_1 (ATerm, ATerm t_44 (ATerm));
ATerm Thread_1 (ATerm, ATerm p_44 (ATerm));
ATerm All_1 (ATerm, ATerm o_44 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm m_44 (ATerm));
ATerm Cong_2 (ATerm, ATerm k_44 (ATerm), ATerm l_44 (ATerm));
ATerm Path_2 (ATerm, ATerm i_44 (ATerm), ATerm j_44 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_43 (ATerm), ATerm t_43 (ATerm));
ATerm SVar_1 (ATerm, ATerm r_43 (ATerm));
ATerm Call_2 (ATerm, ATerm g_44 (ATerm), ATerm h_44 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm o_43 (ATerm), ATerm p_43 (ATerm));
ATerm GChoice_2 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm));
ATerm LChoice_2 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm Choice_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm Seq_2 (ATerm, ATerm g_43 (ATerm), ATerm h_43 (ATerm));
ATerm Test_1 (ATerm, ATerm e_43 (ATerm));
ATerm Not_1 (ATerm, ATerm f_43 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm DontInline_0 (ATerm);
ATerm SDef_4 (ATerm, ATerm c_44 (ATerm), ATerm d_44 (ATerm), ATerm e_44 (ATerm), ATerm f_44 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm), ATerm y_43 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm m_59 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm u_33 (ATerm), ATerm v_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_50 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_48 (ATerm));
ATerm map_1 (ATerm, ATerm k_59 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_48 (ATerm));
ATerm Program_1 (ATerm, ATerm d_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_35 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_48 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_45 (ATerm), ATerm c_45 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_49 (ATerm), ATerm w_49 (ATerm), ATerm x_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_49 (ATerm), ATerm r_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_49 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm c_51 (ATerm))
{
  ATerm r_3;
  r_3 = t;
  {
    ATerm z_5 = NULL,b_6 = NULL;
    ATerm s_3;
    s_3 = t;
    {
      ATerm a_6 = NULL;
      t = c_51(t);
      {
        a_6 = t;
        if(((z_5 != NULL) && (z_5 != a_6)))
          _fail(a_6);
        else
          z_5 = a_6;
      }
    }
    t = s_3;
    {
      ATerm c_6 = NULL;
      c_6 = t;
      if(((b_6 != NULL) && (b_6 != c_6)))
        _fail(c_6);
      else
        b_6 = c_6;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_6)), not_null(z_5)));
        t = printnl_0(t);
      }
    }
  }
  t = r_3;
  return(t);
}
ATerm Var_1 (ATerm t, ATerm y_42 (ATerm))
{
  ATerm i_6 = NULL,j_6 = NULL;
  i_6 = t;
  h_6 :
  if(match_cons(i_6, sym_Var_1))
    {
      j_6 = ATgetArgument(i_6, 0);
      {
        ATerm l_6 = NULL;
        t = not_null(j_6);
        {
          t = y_42(t);
          {
            l_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Assign_1 (ATerm t, ATerm e_40 (ATerm))
{
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  r_6 :
  if(match_cons(s_6, sym_Assign_1))
    {
      t_6 = ATgetArgument(s_6, 0);
      {
        ATerm v_6 = NULL;
        t = not_null(t_6);
        {
          t = e_40(t);
          {
            v_6 = t;
            t = (ATerm) ATmakeAppl(sym_Assign_1, not_null(v_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm q_41 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_BuildDefault_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm f_7 = NULL;
        t = not_null(d_7);
        {
          t = q_41(t);
          {
            f_7 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(f_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm c_43 (ATerm), ATerm d_43 (ATerm))
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym_Op_2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        ATerm s_7 = NULL;
        t = not_null(o_7);
        {
          ATerm u_7 = NULL;
          t = c_43(t);
          {
            s_7 = t;
            {
              t = not_null(p_7);
              {
                t = d_43(t);
                {
                  u_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(s_7), not_null(u_7));
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
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym_Str_1))
    {
      f_8 = ATgetArgument(e_8, 0);
      {
        ATerm u_3 = t;
        int v_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 = NULL;
            t = not_null(f_8);
            {
              t = p_0(t);
              {
                h_8 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(h_8));
              }
            }
            LocalPopChoice(v_3);
          }
        else
          {
            t = u_3;
            {
              ATerm k_8 = NULL;
              t = not_null(f_8);
              {
                t = p_0(t);
                {
                  k_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(k_8));
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
ATerm is_real_0 (ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  t = SSL_is_real(not_null(r_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_Real_1))
    {
      a_9 = ATgetArgument(z_8, 0);
      {
        ATerm w_3 = t;
        int x_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL;
            t = not_null(a_9);
            {
              t = o_0(t);
              {
                c_9 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(c_9));
              }
            }
            LocalPopChoice(x_3);
          }
        else
          {
            t = w_3;
            {
              ATerm f_9 = NULL;
              t = not_null(a_9);
              {
                t = o_0(t);
                {
                  f_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(f_9));
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
  ATerm q_9 = NULL,r_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Int_1))
    {
      r_9 = ATgetArgument(q_9, 0);
      {
        ATerm y_3 = t;
        int z_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL;
            t = not_null(r_9);
            {
              t = n_0(t);
              {
                t_9 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(t_9));
              }
            }
            LocalPopChoice(z_3);
          }
        else
          {
            t = y_3;
            {
              ATerm w_9 = NULL;
              t = not_null(r_9);
              {
                t = n_0(t);
                {
                  w_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(w_9));
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
ATerm Wld_0 (ATerm t)
{
  ATerm d_10 = NULL;
  d_10 = t;
  c_10 :
  if(!(match_cons(d_10, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm a_4 = t;
  int b_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(b_4);
    }
  else
    {
      t = a_4;
      {
        ATerm c_4 = t;
        int d_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    ATerm b_0 (ATerm t)
                                    {
                                      t = list_1(t, term_expression_0);
                                      return(t);
                                    }
                                    t = Op_2(t, is_string_0, b_0);
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
                                          t = BuildDefault_1(t, term_expression_0);
                                          LocalPopChoice(n_4);
                                        }
                                      else
                                        {
                                          t = m_4;
                                          {
                                            ATerm c_0 (ATerm t)
                                            {
                                              t = term_o_4;
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
ATerm Assign_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_Assign_2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_10 = NULL;
            t = not_null(n_10);
            {
              ATerm t_10 = NULL;
              t = l_0(t);
              {
                r_10 = t;
                {
                  t = not_null(o_10);
                  {
                    t = m_0(t);
                    {
                      t_10 = t;
                      t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(r_10), not_null(t_10));
                    }
                  }
                }
              }
            }
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm x_10 = NULL;
              t = not_null(n_10);
              {
                ATerm z_10 = NULL;
                t = l_0(t);
                {
                  x_10 = t;
                  {
                    t = not_null(o_10);
                    {
                      t = m_0(t);
                      {
                        z_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Assign_2, not_null(x_10), not_null(z_10));
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
ATerm Continue_1 (ATerm t, ATerm b_40 (ATerm))
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_Continue_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      {
        ATerm n_11 = NULL;
        t = not_null(l_11);
        {
          t = b_40(t);
          {
            n_11 = t;
            t = (ATerm) ATmakeAppl(sym_Continue_1, not_null(n_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Alt_3 (ATerm t, ATerm y_39 (ATerm), ATerm z_39 (ATerm), ATerm a_40 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_Alt_3))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      z_11 = ATgetArgument(w_11, 2);
      {
        ATerm d_12 = NULL;
        t = not_null(x_11);
        {
          ATerm f_12 = NULL;
          t = y_39(t);
          {
            d_12 = t;
            {
              t = not_null(y_11);
              {
                ATerm h_12 = NULL;
                t = z_39(t);
                {
                  f_12 = t;
                  {
                    t = not_null(z_11);
                    {
                      t = a_40(t);
                      {
                        h_12 = t;
                        t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(d_12), not_null(f_12), not_null(h_12));
                      }
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
ATerm Case_4 (ATerm t, ATerm r_39 (ATerm), ATerm s_39 (ATerm), ATerm t_39 (ATerm), ATerm u_39 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_Case_4))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      x_12 = ATgetArgument(t_12, 3);
      {
        ATerm c_13 = NULL;
        t = not_null(u_12);
        {
          ATerm e_13 = NULL;
          t = r_39(t);
          {
            c_13 = t;
            {
              t = not_null(v_12);
              {
                ATerm g_13 = NULL;
                t = s_39(t);
                {
                  e_13 = t;
                  {
                    t = not_null(w_12);
                    {
                      ATerm i_13 = NULL;
                      t = t_39(t);
                      {
                        g_13 = t;
                        {
                          t = not_null(x_12);
                          {
                            t = u_39(t);
                            {
                              i_13 = t;
                              t = (ATerm) ATmakeAppl(sym_Case_4, not_null(c_13), not_null(e_13), not_null(g_13), not_null(i_13));
                            }
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_Let_2))
    {
      u_13 = ATgetArgument(t_13, 0);
      v_13 = ATgetArgument(t_13, 1);
      {
        ATerm y_13 = NULL;
        t = not_null(u_13);
        {
          ATerm a_14 = NULL;
          t = u_43(t);
          {
            y_13 = t;
            {
              t = not_null(v_13);
              {
                t = v_43(t);
                {
                  a_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(y_13), not_null(a_14));
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
ATerm Prim_2 (ATerm t, ATerm z_44 (ATerm), ATerm a_45 (ATerm))
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Prim_2))
    {
      r_14 = ATgetArgument(q_14, 0);
      s_14 = ATgetArgument(q_14, 1);
      {
        ATerm v_14 = NULL;
        t = not_null(r_14);
        {
          ATerm a_15 = NULL;
          t = z_44(t);
          {
            v_14 = t;
            {
              t = not_null(s_14);
              {
                t = a_45(t);
                {
                  a_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_14), not_null(a_15));
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
ATerm Where_1 (ATerm t, ATerm y_44 (ATerm))
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_Where_1))
    {
      j_15 = ATgetArgument(i_15, 0);
      {
        ATerm l_15 = NULL;
        t = not_null(j_15);
        {
          t = y_44(t);
          {
            l_15 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(l_15));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  t = SSL_is_int(not_null(q_15));
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm w_44 (ATerm), ATerm x_44 (ATerm))
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL;
  y_15 = t;
  x_15 :
  if(match_cons(y_15, sym_Scope_2))
    {
      z_15 = ATgetArgument(y_15, 0);
      a_16 = ATgetArgument(y_15, 1);
      {
        ATerm d_16 = NULL;
        t = not_null(z_15);
        {
          ATerm f_16 = NULL;
          t = w_44(t);
          {
            d_16 = t;
            {
              t = not_null(a_16);
              {
                t = x_44(t);
                {
                  f_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_16), not_null(f_16));
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
ATerm Build_1 (ATerm t, ATerm t_44 (ATerm))
{
  ATerm w_16 = NULL,x_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym_Build_1))
    {
      x_16 = ATgetArgument(w_16, 0);
      {
        ATerm c_17 = NULL;
        t = not_null(x_16);
        {
          t = t_44(t);
          {
            c_17 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(c_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm p_44 (ATerm))
{
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_Thread_1))
    {
      s_17 = ATgetArgument(r_17, 0);
      {
        ATerm u_17 = NULL;
        t = not_null(s_17);
        {
          t = p_44(t);
          {
            u_17 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(u_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_All_1))
    {
      c_18 = ATgetArgument(b_18, 0);
      {
        ATerm e_18 = NULL;
        t = not_null(c_18);
        {
          t = o_44(t);
          {
            e_18 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(e_18));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm n_18 = NULL,q_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym_Some_1))
    {
      q_18 = ATgetArgument(n_18, 0);
      {
        ATerm r_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_18 = NULL;
            t = not_null(q_18);
            {
              t = k_0(t);
              {
                s_18 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(s_18));
              }
            }
            LocalPopChoice(s_4);
          }
        else
          {
            t = r_4;
            {
              ATerm b_19 = NULL;
              t = not_null(q_18);
              {
                t = k_0(t);
                {
                  b_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(b_19));
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
ATerm One_1 (ATerm t, ATerm m_44 (ATerm))
{
  ATerm l_19 = NULL,m_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym_One_1))
    {
      m_19 = ATgetArgument(l_19, 0);
      {
        ATerm o_19 = NULL;
        t = not_null(m_19);
        {
          t = m_44(t);
          {
            o_19 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(o_19));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm k_44 (ATerm), ATerm l_44 (ATerm))
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym_Cong_2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm b_20 = NULL;
        t = not_null(x_19);
        {
          ATerm d_20 = NULL;
          t = k_44(t);
          {
            b_20 = t;
            {
              t = not_null(y_19);
              {
                t = l_44(t);
                {
                  d_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(b_20), not_null(d_20));
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
ATerm Path_2 (ATerm t, ATerm i_44 (ATerm), ATerm j_44 (ATerm))
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  l_20 :
  if(match_cons(m_20, sym_Path_2))
    {
      n_20 = ATgetArgument(m_20, 0);
      o_20 = ATgetArgument(m_20, 1);
      {
        ATerm r_20 = NULL;
        t = not_null(n_20);
        {
          ATerm t_20 = NULL;
          t = i_44(t);
          {
            r_20 = t;
            {
              t = not_null(o_20);
              {
                t = j_44(t);
                {
                  t_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(r_20), not_null(t_20));
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
ATerm Rec_2 (ATerm t, ATerm s_43 (ATerm), ATerm t_43 (ATerm))
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym_Rec_2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      {
        ATerm h_21 = NULL;
        t = not_null(d_21);
        {
          ATerm j_21 = NULL;
          t = s_43(t);
          {
            h_21 = t;
            {
              t = not_null(e_21);
              {
                t = t_43(t);
                {
                  j_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(h_21), not_null(j_21));
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
ATerm SVar_1 (ATerm t, ATerm r_43 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  q_21 :
  if(match_cons(u_21, sym_SVar_1))
    {
      v_21 = ATgetArgument(u_21, 0);
      {
        ATerm x_21 = NULL;
        t = not_null(v_21);
        {
          t = r_43(t);
          {
            x_21 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(x_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm g_44 (ATerm), ATerm h_44 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_Call_2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm k_22 = NULL;
        t = not_null(g_22);
        {
          ATerm m_22 = NULL;
          t = g_44(t);
          {
            k_22 = t;
            {
              t = not_null(h_22);
              {
                t = h_44(t);
                {
                  m_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(k_22), not_null(m_22));
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
ATerm LGChoice_2 (ATerm t, ATerm o_43 (ATerm), ATerm p_43 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym_LGChoice_2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm a_23 = NULL;
        t = not_null(w_22);
        {
          ATerm c_23 = NULL;
          t = o_43(t);
          {
            a_23 = t;
            {
              t = not_null(x_22);
              {
                t = p_43(t);
                {
                  c_23 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(a_23), not_null(c_23));
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
ATerm GChoice_2 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm))
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  k_23 :
  if(match_cons(l_23, sym_GChoice_2))
    {
      m_23 = ATgetArgument(l_23, 0);
      n_23 = ATgetArgument(l_23, 1);
      {
        ATerm q_23 = NULL;
        t = not_null(m_23);
        {
          ATerm s_23 = NULL;
          t = m_43(t);
          {
            q_23 = t;
            {
              t = not_null(n_23);
              {
                t = n_43(t);
                {
                  s_23 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(q_23), not_null(s_23));
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
ATerm LChoice_2 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  a_24 :
  if(match_cons(b_24, sym_LChoice_2))
    {
      c_24 = ATgetArgument(b_24, 0);
      d_24 = ATgetArgument(b_24, 1);
      {
        ATerm g_24 = NULL;
        t = not_null(c_24);
        {
          ATerm i_24 = NULL;
          t = k_43(t);
          {
            g_24 = t;
            {
              t = not_null(d_24);
              {
                t = l_43(t);
                {
                  i_24 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_24), not_null(i_24));
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
ATerm Choice_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Choice_2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm w_24 = NULL;
        t = not_null(s_24);
        {
          ATerm y_24 = NULL;
          t = i_43(t);
          {
            w_24 = t;
            {
              t = not_null(t_24);
              {
                t = j_43(t);
                {
                  y_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_24), not_null(y_24));
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
ATerm Seq_2 (ATerm t, ATerm g_43 (ATerm), ATerm h_43 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym_Seq_2))
    {
      i_25 = ATgetArgument(h_25, 0);
      j_25 = ATgetArgument(h_25, 1);
      {
        ATerm m_25 = NULL;
        t = not_null(i_25);
        {
          ATerm o_25 = NULL;
          t = g_43(t);
          {
            m_25 = t;
            {
              t = not_null(j_25);
              {
                t = h_43(t);
                {
                  o_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_25), not_null(o_25));
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
ATerm Test_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm w_25 = NULL,x_25 = NULL;
  w_25 = t;
  v_25 :
  if(match_cons(w_25, sym_Test_1))
    {
      x_25 = ATgetArgument(w_25, 0);
      {
        ATerm z_25 = NULL;
        t = not_null(x_25);
        {
          t = e_43(t);
          {
            z_25 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(z_25));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm f_43 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym_Not_1))
    {
      h_26 = ATgetArgument(g_26, 0);
      {
        ATerm j_26 = NULL;
        t = not_null(h_26);
        {
          t = f_43(t);
          {
            j_26 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(j_26));
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
  ATerm o_26 = NULL;
  o_26 = t;
  n_26 :
  if(!(match_cons(o_26, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  p_26 :
  if(!(match_cons(q_26, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(u_4);
    }
  else
    {
      t = t_4;
      {
        ATerm v_4 = t;
        int w_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(w_4);
          }
        else
          {
            t = v_4;
            {
              ATerm x_4 = t;
              int y_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                      t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            ATerm e_0 (ATerm t)
                                                            {
                                                              t = SVar_1(t, is_string_0);
                                                              return(t);
                                                            }
                                                            t = Call_2(t, e_0, Nil_0);
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
                                                                  t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                        t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                              ATerm q_0 (ATerm t)
                                                                              {
                                                                                t = list_1(t, strategy_expression_0);
                                                                                return(t);
                                                                              }
                                                                              t = Cong_2(t, is_string_0, q_0);
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
                                                                                    t = One_1(t, strategy_expression_0);
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
                                                                                          t = Some_1(t, strategy_expression_0);
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
                                                                                                t = All_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(y_5);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_5;
                                                                                                {
                                                                                                  ATerm d_6 = t;
                                                                                                  int e_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Thread_1(t, strategy_expression_0);
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
                                                                                                            t = Build_1(t, term_expression_0);
                                                                                                            LocalPopChoice(g_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_6;
                                                                                                            {
                                                                                                              ATerm k_6 = t;
                                                                                                              int m_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm r_0 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm s_0 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm n_6 = t;
                                                                                                                      int o_6 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = is_string_0(t);
                                                                                                                          LocalPopChoice(o_6);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = n_6;
                                                                                                                          t = list_1(t, is_int_0);
                                                                                                                        }
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    t = list_1(t, s_0);
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                  LocalPopChoice(m_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_6;
                                                                                                                  {
                                                                                                                    ATerm p_6 = t;
                                                                                                                    int q_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Where_1(t, strategy_expression_0);
                                                                                                                        LocalPopChoice(q_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_6;
                                                                                                                        {
                                                                                                                          ATerm u_6 = t;
                                                                                                                          int w_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm t_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, term_expression_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Prim_2(t, is_string_0, t_0);
                                                                                                                              LocalPopChoice(w_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_6;
                                                                                                                              {
                                                                                                                                ATerm x_6 = t;
                                                                                                                                int y_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm u_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      ATerm v_0 (ATerm t)
                                                                                                                                      {
                                                                                                                                        ATerm z_6 = t;
                                                                                                                                        int a_7 = stack_ptr;
                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                          {
                                                                                                                                            t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                            LocalPopChoice(a_7);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            t = z_6;
                                                                                                                                            {
                                                                                                                                              ATerm w_0 (ATerm t)
                                                                                                                                              {
                                                                                                                                                t = list_1(t, _id);
                                                                                                                                                return(t);
                                                                                                                                              }
                                                                                                                                              t = SDef_4(t, w_0, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        return(t);
                                                                                                                                      }
                                                                                                                                      t = list_1(t, v_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Let_2(t, u_0, strategy_expression_0);
                                                                                                                                    LocalPopChoice(y_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = x_6;
                                                                                                                                    {
                                                                                                                                      ATerm e_7 = t;
                                                                                                                                      int g_7 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm x_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = Var_1(t, _id);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          ATerm y_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm z_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = Alt_3(t, _id, _id, strategy_expression_0);
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1(t, z_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Case_4(t, is_string_0, x_0, y_0, strategy_expression_0);
                                                                                                                                          LocalPopChoice(g_7);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = e_7;
                                                                                                                                          {
                                                                                                                                            ATerm h_7 = t;
                                                                                                                                            int i_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Continue_1(t, is_string_0);
                                                                                                                                                LocalPopChoice(i_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = h_7;
                                                                                                                                                {
                                                                                                                                                  ATerm j_7 = t;
                                                                                                                                                  int k_7 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      ATerm a_1 (ATerm t)
                                                                                                                                                      {
                                                                                                                                                        t = Var_1(t, _id);
                                                                                                                                                        return(t);
                                                                                                                                                      }
                                                                                                                                                      t = Assign_2(t, a_1, term_expression_0);
                                                                                                                                                      LocalPopChoice(k_7);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_7;
                                                                                                                                                      {
                                                                                                                                                        ATerm l_7 = t;
                                                                                                                                                        int q_7 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            ATerm b_1 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = Var_1(t, _id);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = Assign_1(t, b_1);
                                                                                                                                                            LocalPopChoice(q_7);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = l_7;
                                                                                                                                                            {
                                                                                                                                                              ATerm c_1 (ATerm t)
                                                                                                                                                              {
                                                                                                                                                                t = term_r_7;
                                                                                                                                                                return(t);
                                                                                                                                                              }
                                                                                                                                                              t = debug_1(t, c_1);
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm is_string_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  t = SSL_is_string(not_null(t_26));
  return(t);
}
ATerm DontInline_0 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  w_26 :
  if(!(match_cons(x_26, sym_DontInline_0)))
    _fail(t);
  return(t);
}
ATerm SDef_4 (ATerm t, ATerm c_44 (ATerm), ATerm d_44 (ATerm), ATerm e_44 (ATerm), ATerm f_44 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_SDef_4))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      h_27 = ATgetArgument(e_27, 2);
      i_27 = ATgetArgument(e_27, 3);
      {
        ATerm n_27 = NULL;
        t = not_null(f_27);
        {
          ATerm p_27 = NULL;
          t = c_44(t);
          {
            n_27 = t;
            {
              t = not_null(g_27);
              {
                ATerm r_27 = NULL;
                t = d_44(t);
                {
                  p_27 = t;
                  {
                    t = not_null(h_27);
                    {
                      ATerm t_27 = NULL;
                      t = e_44(t);
                      {
                        r_27 = t;
                        {
                          t = not_null(i_27);
                          {
                            t = f_44(t);
                            {
                              t_27 = t;
                              t = (ATerm) ATmakeAppl(sym_SDef_4, not_null(n_27), not_null(p_27), not_null(r_27), not_null(t_27));
                            }
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm), ATerm y_43 (ATerm))
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  f_28 = t;
  e_28 :
  if(match_cons(f_28, sym_SDef_3))
    {
      g_28 = ATgetArgument(f_28, 0);
      h_28 = ATgetArgument(f_28, 1);
      i_28 = ATgetArgument(f_28, 2);
      {
        ATerm m_28 = NULL;
        t = not_null(g_28);
        {
          ATerm o_28 = NULL;
          t = w_43(t);
          {
            m_28 = t;
            {
              t = not_null(h_28);
              {
                ATerm q_28 = NULL;
                t = x_43(t);
                {
                  o_28 = t;
                  {
                    t = not_null(i_28);
                    {
                      t = y_43(t);
                      {
                        q_28 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_28), not_null(o_28), not_null(q_28));
                      }
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm t_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
      LocalPopChoice(v_7);
    }
  else
    {
      t = t_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              t = list_1(t, DontInline_0);
              return(t);
            }
            t = SDef_4(t, d_1, is_string_0, Nil_0, strategy_expression_0);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            {
              ATerm e_1 (ATerm t)
              {
                t = term_y_7;
                return(t);
              }
              t = debug_1(t, e_1);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm w_28 (ATerm t)
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        t = Cons_2(t, m_59, w_28);
      }
    return(t);
  }
  t = w_28(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = list_1(t, strategy_definition_0);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm f_1 (ATerm t)
        {
          t = term_g_8;
          return(t);
        }
        t = debug_1(t, f_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm u_33 (ATerm), ATerm v_33 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_cons(b_29, sym__2))
    {
      c_29 = ATgetArgument(b_29, 0);
      d_29 = ATgetArgument(b_29, 1);
      {
        ATerm g_29 = NULL;
        t = not_null(c_29);
        {
          ATerm i_29 = NULL;
          t = u_33(t);
          {
            g_29 = t;
            {
              t = not_null(d_29);
              {
                t = v_33(t);
                {
                  i_29 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(i_29));
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
  ATerm p_29 = NULL;
  ATerm i_8;
  i_8 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm q_29 = NULL,r_29 = NULL;
      q_29 = t;
      o_29 :
      if(match_cons(q_29, sym_Program_1))
        {
          r_29 = ATgetArgument(q_29, 0);
          if(((p_29 != NULL) && (p_29 != r_29)))
            _fail(r_29);
          else
            p_29 = r_29;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(CheckATermList(term_m_8), not_null(p_29)), term_j_8));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_8;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_q_8;
  {
    t = printnl_0(t);
    {
      t = term_n_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      ATerm s_8 = t;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm a_30 = NULL;
            a_30 = t;
            t_29 :
            if(!(match_cons(a_30, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_1);
          PopChoice();
          _fail(t);
        }
      else
        t = s_8;
      return(t);
    }
    t = _2(t, i_1, _id);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm b_30 = NULL,c_30 = NULL;
          b_30 = t;
          v_29 :
          if(match_cons(b_30, sym_Runtime_1))
            {
              c_30 = ATgetArgument(b_30, 0);
              if(((z_29 != NULL) && (z_29 != c_30)))
                _fail(c_30);
              else
                z_29 = c_30;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_1);
        return(t);
      }
      t = _2(t, k_1, _id);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm d_30 = NULL,e_30 = NULL;
            d_30 = t;
            x_29 :
            if(match_cons(d_30, sym_Program_1))
              {
                e_30 = ATgetArgument(d_30, 0);
                if(((y_29 != NULL) && (y_29 != e_30)))
                  _fail(e_30);
                else
                  y_29 = e_30;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_1);
          return(t);
        }
        t = _2(t, m_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_v_8), not_null(z_29)), term_t_8), not_null(y_29)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, h_1);
  {
    t = term_w_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(match_cons(j_30, sym__2))
    {
      k_30 = ATgetArgument(j_30, 0);
      l_30 = ATgetArgument(j_30, 1);
      t = SSL_WriteToTextFile(not_null(k_30), not_null(l_30));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym__2))
    {
      s_30 = ATgetArgument(r_30, 0);
      t_30 = ATgetArgument(r_30, 1);
      t = SSL_WriteToBinaryFile(not_null(s_30), not_null(t_30));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_31 = NULL;
  ATerm x_8;
  x_8 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm b_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm c_31 = NULL,d_31 = NULL;
            c_31 = t;
            y_30 :
            if(match_cons(c_31, sym_Output_1))
              {
                d_31 = ATgetArgument(c_31, 0);
                if(((b_31 != NULL) && (b_31 != d_31)))
                  _fail(d_31);
                else
                  b_31 = d_31;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_1);
          LocalPopChoice(d_9);
        }
      else
        {
          t = b_9;
          {
            ATerm e_31 = NULL;
            t = term_e_9;
            {
              e_31 = t;
              if(((b_31 != NULL) && (b_31 != e_31)))
                _fail(e_31);
              else
                b_31 = e_31;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_1, _id);
  }
  t = x_8;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        t = not_null(b_31);
        return(t);
      }
      t = split_2(t, r_1, _id);
      return(t);
    }
    t = _2(t, _id, q_1);
    {
      ATerm g_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm f_31 = NULL;
              f_31 = t;
              a_31 :
              if(!(match_cons(f_31, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_1);
            return(t);
          }
          t = _2(t, s_1, WriteToBinaryFile_0);
          LocalPopChoice(h_9);
        }
      else
        {
          t = g_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_50 (ATerm))
{
  ATerm l_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  ATerm i_9;
  i_9 = t;
  t = dtime_0(t);
  t = i_9;
  {
    t = h_50(t);
    {
      ATerm j_9;
      j_9 = t;
      {
        ATerm m_31 = NULL;
        t = dtime_0(t);
        {
          m_31 = t;
          if(((l_31 != NULL) && (l_31 != m_31)))
            _fail(m_31);
          else
            l_31 = m_31;
        }
      }
      t = j_9;
      {
        n_31 = t;
        k_31 :
        if(match_cons(n_31, sym__2))
          {
            o_31 = ATgetArgument(n_31, 0);
            p_31 = ATgetArgument(n_31, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_31)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_31))), not_null(p_31));
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
  ATerm v_31 = NULL;
  v_31 = t;
  t = SSL_ReadFromFile(not_null(v_31));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm a_32 = NULL,c_32 = NULL;
  ATerm k_9;
  k_9 = t;
  {
    ATerm b_32 = NULL;
    t = y_52(t);
    {
      b_32 = t;
      if(((a_32 != NULL) && (a_32 != b_32)))
        _fail(b_32);
      else
        a_32 = b_32;
    }
  }
  t = k_9;
  {
    ATerm d_32 = NULL;
    t = z_52(t);
    {
      d_32 = t;
      if(((c_32 != NULL) && (c_32 != d_32)))
        _fail(d_32);
      else
        c_32 = d_32;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), not_null(c_32));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_32 = NULL;
  ATerm l_9;
  l_9 = t;
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm k_32 = NULL,l_32 = NULL;
          k_32 = t;
          h_32 :
          if(match_cons(k_32, sym_Input_1))
            {
              l_32 = ATgetArgument(k_32, 0);
              if(((j_32 != NULL) && (j_32 != l_32)))
                _fail(l_32);
              else
                j_32 = l_32;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_1);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm m_32 = NULL;
          t = term_o_9;
          {
            m_32 = t;
            if(((j_32 != NULL) && (j_32 != m_32)))
              _fail(m_32);
            else
              j_32 = m_32;
          }
        }
      }
  }
  t = l_9;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(j_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  p_32 :
  if(!(match_cons(s_32, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_50 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm s_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = s_9;
        {
          ATerm v_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_9);
            }
          else
            {
              t = v_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_1);
  t = g_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_table_create(not_null(u_32));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  {
    ATerm y_9;
    y_9 = t;
    {
      t = term_z_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_9, term_a_10, not_null(y_32));
          t = table_put_0(t);
        }
      }
    }
    t = y_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  i_33 = t;
  g_33 :
  if(match_string(i_33, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(i_33) == AT_LIST) && ((ATermList) i_33 != ATempty)))
        {
          j_33 = ATgetFirst((ATermList) i_33);
          k_33 = (ATerm) ATgetNext((ATermList) i_33);
          h_33 :
          if(((ATgetType(k_33) == AT_LIST) && ((ATermList) k_33 != ATempty)))
            {
              l_33 = ATgetFirst((ATermList) k_33);
              m_33 = (ATerm) ATgetNext((ATermList) k_33);
              {
                ATerm q_33 = NULL;
                ATerm b_10;
                b_10 = t;
                {
                  t = not_null(j_33);
                  t = h_0(t);
                }
                t = b_10;
                {
                  ATerm r_33 = NULL;
                  t = not_null(l_33);
                  {
                    t = i_0(t);
                    {
                      r_33 = t;
                      if(((q_33 != NULL) && (q_33 != r_33)))
                        _fail(r_33);
                      else
                        q_33 = r_33;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_33)), not_null(q_33));
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm i_34 = NULL;
        i_34 = t;
        x_33 :
        if(!(match_string(i_34, "-S")))
          {
            if(!(match_string(i_34, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_g_10;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_h_10;
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm j_34 = NULL;
              j_34 = t;
              y_33 :
              if(!(match_string(j_34, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = term_k_10;
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_p_10;
              return(t);
            }
            t = Option_3(t, a_2, b_2, c_2);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm q_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm k_34 = NULL;
                    k_34 = t;
                    z_33 :
                    if(!(match_string(k_34, "-v")))
                      {
                        if(!(match_string(k_34, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = term_u_10;
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_v_10;
                    return(t);
                  }
                  t = Option_3(t, d_2, e_2, f_2);
                  LocalPopChoice(s_10);
                }
              else
                {
                  t = q_10;
                  {
                    ATerm w_10 = t;
                    int y_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm l_34 = NULL;
                          l_34 = t;
                          a_34 :
                          if(!(match_string(l_34, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm m_34 = NULL;
                          ATerm n_34 = NULL;
                          n_34 = t;
                          if(((m_34 != NULL) && (m_34 != n_34)))
                            _fail(n_34);
                          else
                            m_34 = n_34;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_34));
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          t = term_a_11;
                          return(t);
                        }
                        t = ArgOption_3(t, g_2, h_2, i_2);
                        LocalPopChoice(y_10);
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm b_11 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm o_34 = NULL;
                                o_34 = t;
                                c_34 :
                                if(!(match_string(o_34, "-i")))
                                  {
                                    if(!(match_string(o_34, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm p_34 = NULL;
                                ATerm q_34 = NULL;
                                q_34 = t;
                                if(((p_34 != NULL) && (p_34 != q_34)))
                                  _fail(q_34);
                                else
                                  p_34 = q_34;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_34));
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = term_d_11;
                                return(t);
                              }
                              t = ArgOption_3(t, j_2, k_2, l_2);
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = b_11;
                              {
                                ATerm e_11 = t;
                                int f_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm r_34 = NULL;
                                      r_34 = t;
                                      e_34 :
                                      if(!(match_string(r_34, "-o")))
                                        {
                                          if(!(match_string(r_34, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      ATerm s_34 = NULL;
                                      ATerm t_34 = NULL;
                                      t_34 = t;
                                      if(((s_34 != NULL) && (s_34 != t_34)))
                                        _fail(t_34);
                                      else
                                        s_34 = t_34;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_34));
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = term_g_11;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, m_2, n_2, o_2);
                                    LocalPopChoice(f_11);
                                  }
                                else
                                  {
                                    t = e_11;
                                    {
                                      ATerm h_11 = t;
                                      int i_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_2 (ATerm t)
                                          {
                                            ATerm u_34 = NULL;
                                            u_34 = t;
                                            g_34 :
                                            if(!(match_string(u_34, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm q_2 (ATerm t)
                                          {
                                            t = term_m_11;
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = term_o_11;
                                            return(t);
                                          }
                                          t = Option_3(t, p_2, q_2, r_2);
                                          LocalPopChoice(i_11);
                                        }
                                      else
                                        {
                                          t = h_11;
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              ATerm v_34 = NULL;
                                              v_34 = t;
                                              h_34 :
                                              if(!(match_string(v_34, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_2 (ATerm t)
                                            {
                                              t = term_p_11;
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = term_q_11;
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_35 = NULL;
  a_35 = t;
  t = SSL_table_destroy(not_null(a_35));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_35 = NULL;
  g_35 = t;
  t = SSL_exit(not_null(g_35));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = SSL_implode_string(not_null(k_35));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_59 (ATerm))
{
  ATerm n_35 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_35);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          t = Nil_0(t);
          t = y_59(t);
        }
      }
    return(t);
  }
  t = n_35(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
        q_35 = t;
        p_35 :
        if(((ATgetType(q_35) == AT_LIST) && ((ATermList) q_35 != ATempty)))
          {
            r_35 = ATgetFirst((ATermList) q_35);
            s_35 = (ATerm) ATgetNext((ATermList) q_35);
            {
              t = not_null(r_35);
              {
                ATerm v_2 (ATerm t)
                {
                  t = not_null(s_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, v_2);
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
  ATerm y_35 = NULL;
  y_35 = t;
  t = SSL_explode_string(not_null(y_35));
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
ATerm long_description_1 (ATerm t, ATerm n_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm b_36 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = Cons_2(t, k_59, b_36);
      }
    return(t);
  }
  t = b_36(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  i_36 = t;
  f_36 :
  if(((ATgetType(i_36) == AT_LIST) && ((ATermList) i_36 != ATempty)))
    {
      g_36 = ATgetFirst((ATermList) i_36);
      h_36 = (ATerm) ATgetNext((ATermList) i_36);
      {
        t = not_null(h_36);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm l_36 = NULL;
            ATerm m_36 = NULL;
            t = g_0(t);
            {
              m_36 = t;
              if(((l_36 != NULL) && (l_36 != m_36)))
                _fail(m_36);
              else
                l_36 = m_36;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(l_36)), not_null(g_36));
            return(t);
          }
          t = reverse_1(t, w_2);
        }
      }
    }
  else
    {
      if(((ATermList) i_36 == ATempty))
        {
          {
            t = term_c_12;
            t = g_0(t);
          }
        }
      else
        _fail(t);
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
  t = reverse_1(t, x_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_35 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL;
  t_36 = t;
  s_36 :
  if(match_cons(t_36, sym_Program_1))
    {
      u_36 = ATgetArgument(t_36, 0);
      {
        ATerm w_36 = NULL;
        t = not_null(u_36);
        {
          t = d_35(t);
          {
            w_36 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_36));
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
  ATerm e_37 = NULL;
  ATerm y_2 (ATerm t)
  {
    ATerm z_2 (ATerm t)
    {
      ATerm f_37 = NULL;
      f_37 = t;
      if(((e_37 != NULL) && (e_37 != f_37)))
        _fail(f_37);
      else
        e_37 = f_37;
      return(t);
    }
    t = Program_1(t, z_2);
    return(t);
  }
  t = option_defined_1(t, y_2);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm g_37 = NULL;
      ATerm h_37 = NULL;
      t = term_c_12;
      {
        ATerm b_3 (ATerm t)
        {
          t = not_null(e_37);
          return(t);
        }
        t = short_description_1(t, b_3);
        {
          t = concat_strings_0(t);
          {
            h_37 = t;
            if(((g_37 != NULL) && (g_37 != h_37)))
              _fail(h_37);
            else
              g_37 = h_37;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATempty, not_null(g_37)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, a_3);
    {
      t = term_i_12;
      {
        t = printnl_0(t);
        {
          t = term_l_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_3 (ATerm t)
                {
                  ATerm i_37 = NULL;
                  i_37 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_37)), term_m_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_3);
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm k_37 = NULL;
                    ATerm l_37 = NULL;
                    t = term_c_12;
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(e_37);
                        return(t);
                      }
                      t = long_description_1(t, e_3);
                      {
                        t = concat_strings_0(t);
                        {
                          l_37 = t;
                          if(((k_37 != NULL) && (k_37 != l_37)))
                            _fail(l_37);
                          else
                            k_37 = l_37;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_37)), term_n_12));
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
ATerm printnl_0 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
  s_37 = t;
  r_37 :
  if(match_cons(s_37, sym__2))
    {
      t_37 = ATgetArgument(s_37, 0);
      u_37 = ATgetArgument(s_37, 1);
      {
        ATerm o_12;
        o_12 = t;
        t = SSL_printnl(not_null(t_37), not_null(u_37));
        t = o_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_35 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL;
  b_38 = t;
  a_38 :
  if(match_cons(b_38, sym_Undefined_1))
    {
      c_38 = ATgetArgument(b_38, 0);
      {
        ATerm e_38 = NULL;
        t = not_null(c_38);
        {
          t = e_35(t);
          {
            e_38 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm i_38 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_59, _id);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = Cons_2(t, _id, i_38);
      }
    return(t);
  }
  t = i_38(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_49 (ATerm))
{
  t = fetch_1(t, l_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  j_38 :
  if(!(match_cons(k_38, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_66 (ATerm))
{
  ATerm r_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_66(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = r_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym__2))
    {
      o_38 = ATgetArgument(n_38, 0);
      p_38 = ATgetArgument(n_38, 1);
      t = SSL_table_get(not_null(o_38), not_null(p_38));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym__3))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      z_38 = ATgetArgument(w_38, 2);
      {
        ATerm z_12;
        z_12 = t;
        {
          ATerm d_39 = NULL;
          ATerm e_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), not_null(y_38));
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
              e_39 = t;
              if(((d_39 != NULL) && (d_39 != e_39)))
                _fail(e_39);
              else
                d_39 = e_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_38), not_null(y_38), (ATerm) ATinsert(CheckATermList(not_null(d_39)), not_null(z_38)));
            t = table_put_0(t);
          }
        }
        t = z_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_48 (ATerm))
{
  ATerm i_39 = NULL;
  ATerm j_39 = NULL;
  t = term_c_12;
  {
    t = r_48(t);
    {
      j_39 = t;
      if(((i_39 != NULL) && (i_39 != j_39)))
        _fail(j_39);
      else
        i_39 = j_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_12, term_k_12, not_null(i_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm p_39 = NULL,q_39 = NULL,v_39 = NULL;
  p_39 = t;
  o_39 :
  if(match_string(p_39, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(p_39) == AT_LIST) && ((ATermList) p_39 != ATempty)))
        {
          q_39 = ATgetFirst((ATermList) p_39);
          v_39 = (ATerm) ATgetNext((ATermList) p_39);
          {
            ATerm c_40 = NULL;
            ATerm d_13;
            d_13 = t;
            {
              t = not_null(q_39);
              t = a_0(t);
            }
            t = d_13;
            {
              ATerm d_40 = NULL;
              t = term_c_12;
              {
                t = d_0(t);
                {
                  d_40 = t;
                  if(((c_40 != NULL) && (c_40 != d_40)))
                    _fail(d_40);
                  else
                    c_40 = d_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_39)), not_null(c_40));
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
  ATerm f_3 (ATerm t)
  {
    ATerm j_40 = NULL;
    j_40 = t;
    i_40 :
    if(!(match_string(j_40, "--help")))
      {
        if(!(match_string(j_40, "-h")))
          {
            if(!(match_string(j_40, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_f_13;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  t = Option_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(((ATgetType(m_40) == AT_LIST) && ((ATermList) m_40 != ATempty)))
    {
      n_40 = ATgetFirst((ATermList) m_40);
      o_40 = (ATerm) ATgetNext((ATermList) m_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_40)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_45 (ATerm), ATerm c_45 (ATerm))
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(((ATgetType(w_40) == AT_LIST) && ((ATermList) w_40 != ATempty)))
    {
      x_40 = ATgetFirst((ATermList) w_40);
      y_40 = (ATerm) ATgetNext((ATermList) w_40);
      {
        ATerm b_41 = NULL;
        t = not_null(x_40);
        {
          ATerm d_41 = NULL;
          t = b_45(t);
          {
            b_41 = t;
            {
              t = not_null(y_40);
              {
                t = c_45(t);
                {
                  d_41 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_41)), not_null(b_41));
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
  ATerm j_41 = NULL;
  j_41 = t;
  i_41 :
  if(((ATermList) j_41 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_48 (ATerm))
{
  ATerm j_13;
  j_13 = t;
  {
    ATerm i_3 (ATerm t)
    {
      t = term_k_13;
      t = p_48(t);
      return(t);
    }
    t = try_1(t, i_3);
  }
  t = j_13;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm l_41 = NULL;
      l_41 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_41));
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm l_13 = t;
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              {
                t = p_48(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          LocalPopChoice(m_13);
        }
      else
        {
          t = l_13;
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
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  ATerm p_13;
  p_13 = t;
  {
    ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
    v_41 = t;
    r_41 :
    if(match_cons(v_41, sym__3))
      {
        w_41 = ATgetArgument(v_41, 0);
        x_41 = ATgetArgument(v_41, 1);
        y_41 = ATgetArgument(v_41, 2);
        {
          if(((s_41 != NULL) && (s_41 != w_41)))
            _fail(w_41);
          else
            s_41 = w_41;
          {
            if(((t_41 != NULL) && (t_41 != x_41)))
              _fail(x_41);
            else
              t_41 = x_41;
            {
              if(((u_41 != NULL) && (u_41 != y_41)))
                _fail(y_41);
              else
                u_41 = y_41;
              t = SSL_table_put(not_null(s_41), not_null(t_41), not_null(u_41));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = p_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_48 (ATerm))
{
  ATerm b_42 = NULL;
  ATerm q_13;
  q_13 = t;
  {
    t = term_r_13;
    t = table_put_0(t);
  }
  t = q_13;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_48(t);
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_3);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm z_13 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_w_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_14);
          }
        else
          {
            t = z_13;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm c_42 = NULL;
                  c_42 = t;
                  if(((b_42 != NULL) && (b_42 != c_42)))
                    _fail(c_42);
                  else
                    b_42 = c_42;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, n_3);
              {
                ATerm c_14;
                c_14 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_42)), term_d_14));
                  t = printnl_0(t);
                }
                t = c_14;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_8;
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
        ATerm e_14;
        e_14 = t;
        {
          t = term_j_12;
          t = table_destroy_0(t);
        }
        t = e_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_49 (ATerm), ATerm w_49 (ATerm), ATerm x_49 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_49(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_3);
  {
    t = store_options_0(t);
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, x_49);
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, v_49);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_49 (ATerm), ATerm r_49 (ATerm))
{
  t = iowrap_3(t, q_49, r_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_49 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    t = _2(t, _id, n_49);
    return(t);
  }
  t = iowrap_2(t, q_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
