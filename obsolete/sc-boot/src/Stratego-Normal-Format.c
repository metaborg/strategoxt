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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_y_13;
ATerm term_s_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_l_9;
ATerm term_w_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_v_7;
ATerm term_n_7;
ATerm term_c_7;
ATerm term_h_4;
ATerm term_q_3;
void init_constant_terms (void)
{
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATinsert(ATempty, term_z_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATinsert(ATempty, term_f_8);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_q_3, term_h_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATinsert(ATempty, term_m_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATinsert(ATempty, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_q_3, term_f_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__3, term_k_12, term_m_12, (ATerm) ATempty);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm x_49 (ATerm));
ATerm Let_2 (ATerm, ATerm p_42 (ATerm), ATerm q_42 (ATerm));
ATerm Op_2 (ATerm, ATerm u_41 (ATerm), ATerm v_41 (ATerm));
ATerm Var_1 (ATerm, ATerm q_41 (ATerm));
ATerm As_2 (ATerm, ATerm g_40 (ATerm), ATerm h_40 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm i_40 (ATerm));
ATerm Str_1 (ATerm, ATerm t_41 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm s_41 (ATerm));
ATerm Int_1 (ATerm, ATerm r_41 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm u_43 (ATerm), ATerm v_43 (ATerm));
ATerm Where_1 (ATerm, ATerm t_43 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_43 (ATerm), ATerm s_43 (ATerm));
ATerm Build_1 (ATerm, ATerm o_43 (ATerm));
ATerm Match_1 (ATerm, ATerm n_43 (ATerm));
ATerm Thread_1 (ATerm, ATerm k_43 (ATerm));
ATerm All_1 (ATerm, ATerm j_43 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm h_43 (ATerm));
ATerm Cong_2 (ATerm, ATerm f_43 (ATerm), ATerm g_43 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm d_43 (ATerm), ATerm e_43 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_42 (ATerm), ATerm o_42 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_42 (ATerm));
ATerm Call_2 (ATerm, ATerm b_43 (ATerm), ATerm c_43 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm j_42 (ATerm), ATerm k_42 (ATerm));
ATerm GChoice_2 (ATerm, ATerm h_42 (ATerm), ATerm i_42 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm e_42 (ATerm), ATerm f_42 (ATerm), ATerm g_42 (ATerm));
ATerm LChoice_2 (ATerm, ATerm c_42 (ATerm), ATerm d_42 (ATerm));
ATerm Choice_2 (ATerm, ATerm a_42 (ATerm), ATerm b_42 (ATerm));
ATerm Seq_2 (ATerm, ATerm y_41 (ATerm), ATerm z_41 (ATerm));
ATerm Test_1 (ATerm, ATerm w_41 (ATerm));
ATerm Not_1 (ATerm, ATerm x_41 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm u_42 (ATerm), ATerm v_42 (ATerm));
ATerm Mod_2 (ATerm, ATerm w_40 (ATerm), ATerm x_40 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_42 (ATerm), ATerm s_42 (ATerm), ATerm t_42 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm k_58 (ATerm));
ATerm Strategies_1 (ATerm, ATerm e_41 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_41 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm g_33 (ATerm), ATerm h_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_47 (ATerm));
ATerm map_1 (ATerm, ATerm i_58 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_47 (ATerm));
ATerm Program_1 (ATerm, ATerm p_34 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm q_34 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_48 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm h_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_47 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_48 (ATerm), ATerm r_48 (ATerm), ATerm s_48 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_48 (ATerm), ATerm m_48 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_48 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm x_49 (ATerm))
{
  ATerm o_3;
  o_3 = t;
  {
    ATerm e_5 = NULL,g_5 = NULL;
    ATerm p_3;
    p_3 = t;
    {
      ATerm f_5 = NULL;
      t = x_49(t);
      {
        f_5 = t;
        if(((e_5 != NULL) && (e_5 != f_5)))
          _fail(f_5);
        else
          e_5 = f_5;
      }
    }
    t = p_3;
    {
      ATerm h_5 = NULL;
      h_5 = t;
      if(((g_5 != NULL) && (g_5 != h_5)))
        _fail(h_5);
      else
        g_5 = h_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_5)), not_null(e_5)));
        t = printnl_0(t);
      }
    }
  }
  t = o_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm p_42 (ATerm), ATerm q_42 (ATerm))
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym_Let_2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      {
        ATerm t_5 = NULL;
        t = not_null(p_5);
        {
          ATerm v_5 = NULL;
          t = p_42(t);
          {
            t_5 = t;
            {
              t = not_null(q_5);
              {
                t = q_42(t);
                {
                  v_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_5), not_null(v_5));
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
ATerm Op_2 (ATerm t, ATerm u_41 (ATerm), ATerm v_41 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_Op_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm j_6 = NULL;
        t = not_null(f_6);
        {
          ATerm l_6 = NULL;
          t = u_41(t);
          {
            j_6 = t;
            {
              t = not_null(g_6);
              {
                t = v_41(t);
                {
                  l_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_6), not_null(l_6));
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
ATerm Var_1 (ATerm t, ATerm q_41 (ATerm))
{
  ATerm t_6 = NULL,u_6 = NULL;
  t_6 = t;
  s_6 :
  if(match_cons(t_6, sym_Var_1))
    {
      u_6 = ATgetArgument(t_6, 0);
      {
        ATerm w_6 = NULL;
        t = not_null(u_6);
        {
          t = q_41(t);
          {
            w_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm g_40 (ATerm), ATerm h_40 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_As_2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      {
        ATerm j_7 = NULL;
        t = not_null(f_7);
        {
          ATerm l_7 = NULL;
          t = g_40(t);
          {
            j_7 = t;
            {
              t = not_null(g_7);
              {
                t = h_40(t);
                {
                  l_7 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(j_7), not_null(l_7));
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
ATerm BuildDefault_1 (ATerm t, ATerm i_40 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym_BuildDefault_1))
    {
      u_7 = ATgetArgument(t_7, 0);
      {
        ATerm w_7 = NULL;
        t = not_null(u_7);
        {
          t = i_40(t);
          {
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(w_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm t_41 (ATerm))
{
  ATerm d_8 = NULL,e_8 = NULL;
  d_8 = t;
  c_8 :
  if(match_cons(d_8, sym_Str_1))
    {
      e_8 = ATgetArgument(d_8, 0);
      {
        ATerm g_8 = NULL;
        t = not_null(e_8);
        {
          t = t_41(t);
          {
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(g_8));
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
  ATerm l_8 = NULL;
  l_8 = t;
  t = SSL_is_real(not_null(l_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm s_41 (ATerm))
{
  ATerm r_8 = NULL,s_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_Real_1))
    {
      s_8 = ATgetArgument(r_8, 0);
      {
        ATerm u_8 = NULL;
        t = not_null(s_8);
        {
          t = s_41(t);
          {
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(u_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm r_41 (ATerm))
{
  ATerm b_9 = NULL,c_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_Int_1))
    {
      c_9 = ATgetArgument(b_9, 0);
      {
        ATerm e_9 = NULL;
        t = not_null(c_9);
        {
          t = r_41(t);
          {
            e_9 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(e_9));
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
  ATerm j_9 = NULL;
  j_9 = t;
  i_9 :
  if(!(match_cons(j_9, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm r_3 = t;
  int s_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(s_3);
    }
  else
    {
      t = r_3;
      {
        ATerm t_3 = t;
        int u_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(u_3);
          }
        else
          {
            t = t_3;
            {
              ATerm v_3 = t;
              int w_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(w_3);
                }
              else
                {
                  t = v_3;
                  {
                    ATerm x_3 = t;
                    int y_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(y_3);
                      }
                    else
                      {
                        t = x_3;
                        {
                          ATerm z_3 = t;
                          int a_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(a_4);
                            }
                          else
                            {
                              t = z_3;
                              {
                                ATerm b_4 = t;
                                int c_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(c_4);
                                  }
                                else
                                  {
                                    t = b_4;
                                    {
                                      ATerm d_4 = t;
                                      int e_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
                                          LocalPopChoice(e_4);
                                        }
                                      else
                                        {
                                          t = d_4;
                                          {
                                            ATerm f_4 = t;
                                            int g_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, c_0);
                                                LocalPopChoice(g_4);
                                              }
                                            else
                                              {
                                                t = f_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_h_4;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, e_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Prim_2 (ATerm t, ATerm u_43 (ATerm), ATerm v_43 (ATerm))
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym_Prim_2))
    {
      q_9 = ATgetArgument(p_9, 0);
      r_9 = ATgetArgument(p_9, 1);
      {
        ATerm u_9 = NULL;
        t = not_null(q_9);
        {
          ATerm w_9 = NULL;
          t = u_43(t);
          {
            u_9 = t;
            {
              t = not_null(r_9);
              {
                t = v_43(t);
                {
                  w_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_9), not_null(w_9));
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
ATerm Where_1 (ATerm t, ATerm t_43 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_Where_1))
    {
      f_10 = ATgetArgument(e_10, 0);
      {
        ATerm h_10 = NULL;
        t = not_null(f_10);
        {
          t = t_43(t);
          {
            h_10 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(h_10));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm r_43 (ATerm), ATerm s_43 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_Scope_2))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      {
        ATerm u_10 = NULL;
        t = not_null(q_10);
        {
          ATerm w_10 = NULL;
          t = r_43(t);
          {
            u_10 = t;
            {
              t = not_null(r_10);
              {
                t = s_43(t);
                {
                  w_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(u_10), not_null(w_10));
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
ATerm Build_1 (ATerm t, ATerm o_43 (ATerm))
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_Build_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      {
        ATerm h_11 = NULL;
        t = not_null(f_11);
        {
          t = o_43(t);
          {
            h_11 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm n_43 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Match_1))
    {
      p_11 = ATgetArgument(o_11, 0);
      {
        ATerm r_11 = NULL;
        t = not_null(p_11);
        {
          t = n_43(t);
          {
            r_11 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(r_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm k_43 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Thread_1))
    {
      z_11 = ATgetArgument(y_11, 0);
      {
        ATerm b_12 = NULL;
        t = not_null(z_11);
        {
          t = k_43(t);
          {
            b_12 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(b_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm j_43 (ATerm))
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_All_1))
    {
      j_12 = ATgetArgument(i_12, 0);
      {
        ATerm l_12 = NULL;
        t = not_null(j_12);
        {
          t = j_43(t);
          {
            l_12 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(l_12));
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
  ATerm u_12 = NULL,v_12 = NULL;
  u_12 = t;
  t_12 :
  if(match_cons(u_12, sym_Some_1))
    {
      v_12 = ATgetArgument(u_12, 0);
      {
        ATerm i_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 = NULL;
            t = not_null(v_12);
            {
              t = k_0(t);
              {
                x_12 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(x_12));
              }
            }
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
            {
              ATerm a_13 = NULL;
              t = not_null(v_12);
              {
                t = k_0(t);
                {
                  a_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(a_13));
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
ATerm One_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_One_1))
    {
      k_13 = ATgetArgument(j_13, 0);
      {
        ATerm m_13 = NULL;
        t = not_null(k_13);
        {
          t = h_43(t);
          {
            m_13 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(m_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm f_43 (ATerm), ATerm g_43 (ATerm))
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_Cong_2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      {
        ATerm j_14 = NULL;
        t = not_null(c_14);
        {
          ATerm l_14 = NULL;
          t = f_43(t);
          {
            j_14 = t;
            {
              t = not_null(d_14);
              {
                t = g_43(t);
                {
                  l_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(j_14), not_null(l_14));
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
ATerm is_int_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_is_int(not_null(r_14));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm d_43 (ATerm), ATerm e_43 (ATerm))
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_Path_2))
    {
      z_14 = ATgetArgument(y_14, 0);
      a_15 = ATgetArgument(y_14, 1);
      {
        ATerm e_15 = NULL;
        t = not_null(z_14);
        {
          ATerm g_15 = NULL;
          t = d_43(t);
          {
            e_15 = t;
            {
              t = not_null(a_15);
              {
                t = e_43(t);
                {
                  g_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(e_15), not_null(g_15));
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
ATerm Rec_2 (ATerm t, ATerm n_42 (ATerm), ATerm o_42 (ATerm))
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym_Rec_2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm d_16 = NULL;
        t = not_null(q_15);
        {
          ATerm f_16 = NULL;
          t = n_42(t);
          {
            d_16 = t;
            {
              t = not_null(r_15);
              {
                t = o_42(t);
                {
                  f_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(d_16), not_null(f_16));
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
ATerm SVar_1 (ATerm t, ATerm m_42 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_SVar_1))
    {
      z_16 = ATgetArgument(y_16, 0);
      {
        ATerm b_17 = NULL;
        t = not_null(z_16);
        {
          t = m_42(t);
          {
            b_17 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(b_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm b_43 (ATerm), ATerm c_43 (ATerm))
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_Call_2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      {
        ATerm o_17 = NULL;
        t = not_null(k_17);
        {
          ATerm q_17 = NULL;
          t = b_43(t);
          {
            o_17 = t;
            {
              t = not_null(l_17);
              {
                t = c_43(t);
                {
                  q_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(o_17), not_null(q_17));
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
ATerm LGChoice_2 (ATerm t, ATerm j_42 (ATerm), ATerm k_42 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,i_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_LGChoice_2))
    {
      c_18 = ATgetArgument(b_18, 0);
      i_18 = ATgetArgument(b_18, 1);
      {
        ATerm m_18 = NULL;
        t = not_null(c_18);
        {
          ATerm o_18 = NULL;
          t = j_42(t);
          {
            m_18 = t;
            {
              t = not_null(i_18);
              {
                t = k_42(t);
                {
                  o_18 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(m_18), not_null(o_18));
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
ATerm GChoice_2 (ATerm t, ATerm h_42 (ATerm), ATerm i_42 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_GChoice_2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      {
        ATerm d_19 = NULL;
        t = not_null(z_18);
        {
          ATerm f_19 = NULL;
          t = h_42(t);
          {
            d_19 = t;
            {
              t = not_null(a_19);
              {
                t = i_42(t);
                {
                  f_19 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(d_19), not_null(f_19));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm e_42 (ATerm), ATerm f_42 (ATerm), ATerm g_42 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_GuardedLChoice_3))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      s_19 = ATgetArgument(p_19, 2);
      {
        ATerm w_19 = NULL;
        t = not_null(q_19);
        {
          ATerm y_19 = NULL;
          t = e_42(t);
          {
            w_19 = t;
            {
              t = not_null(r_19);
              {
                ATerm a_20 = NULL;
                t = f_42(t);
                {
                  y_19 = t;
                  {
                    t = not_null(s_19);
                    {
                      t = g_42(t);
                      {
                        a_20 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(w_19), not_null(y_19), not_null(a_20));
                      }
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
ATerm LChoice_2 (ATerm t, ATerm c_42 (ATerm), ATerm d_42 (ATerm))
{
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym_LChoice_2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        ATerm p_20 = NULL;
        t = not_null(l_20);
        {
          ATerm r_20 = NULL;
          t = c_42(t);
          {
            p_20 = t;
            {
              t = not_null(m_20);
              {
                t = d_42(t);
                {
                  r_20 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(p_20), not_null(r_20));
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
ATerm Choice_2 (ATerm t, ATerm a_42 (ATerm), ATerm b_42 (ATerm))
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  z_20 :
  if(match_cons(d_21, sym_Choice_2))
    {
      e_21 = ATgetArgument(d_21, 0);
      f_21 = ATgetArgument(d_21, 1);
      {
        ATerm i_21 = NULL;
        t = not_null(e_21);
        {
          ATerm k_21 = NULL;
          t = a_42(t);
          {
            i_21 = t;
            {
              t = not_null(f_21);
              {
                t = b_42(t);
                {
                  k_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_21), not_null(k_21));
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
ATerm Seq_2 (ATerm t, ATerm y_41 (ATerm), ATerm z_41 (ATerm))
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym_Seq_2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      {
        ATerm y_21 = NULL;
        t = not_null(u_21);
        {
          ATerm a_22 = NULL;
          t = y_41(t);
          {
            y_21 = t;
            {
              t = not_null(v_21);
              {
                t = z_41(t);
                {
                  a_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_21), not_null(a_22));
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
ATerm Test_1 (ATerm t, ATerm w_41 (ATerm))
{
  ATerm i_22 = NULL,j_22 = NULL;
  i_22 = t;
  h_22 :
  if(match_cons(i_22, sym_Test_1))
    {
      j_22 = ATgetArgument(i_22, 0);
      {
        ATerm l_22 = NULL;
        t = not_null(j_22);
        {
          t = w_41(t);
          {
            l_22 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(l_22));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm x_41 (ATerm))
{
  ATerm s_22 = NULL,t_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym_Not_1))
    {
      t_22 = ATgetArgument(s_22, 0);
      {
        ATerm v_22 = NULL;
        t = not_null(t_22);
        {
          t = x_41(t);
          {
            v_22 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(v_22));
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
  ATerm a_23 = NULL;
  a_23 = t;
  z_22 :
  if(!(match_cons(a_23, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm c_23 = NULL;
  c_23 = t;
  b_23 :
  if(!(match_cons(c_23, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm k_4 = t;
  int l_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(p_4);
                }
              else
                {
                  t = o_4;
                  {
                    ATerm q_4 = t;
                    int r_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(r_4);
                      }
                    else
                      {
                        t = q_4;
                        {
                          ATerm s_4 = t;
                          int t_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(t_4);
                            }
                          else
                            {
                              t = s_4;
                              {
                                ATerm u_4 = t;
                                int v_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(v_4);
                                  }
                                else
                                  {
                                    t = u_4;
                                    {
                                      ATerm w_4 = t;
                                      int x_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(x_4);
                                        }
                                      else
                                        {
                                          t = w_4;
                                          {
                                            ATerm y_4 = t;
                                            int z_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(z_4);
                                              }
                                            else
                                              {
                                                t = y_4;
                                                {
                                                  ATerm a_5 = t;
                                                  int b_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(b_5);
                                                    }
                                                  else
                                                    {
                                                      t = a_5;
                                                      {
                                                        ATerm c_5 = t;
                                                        int d_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(d_5);
                                                          }
                                                        else
                                                          {
                                                            t = c_5;
                                                            {
                                                              ATerm i_5 = t;
                                                              int j_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_0 (ATerm t)
                                                                  {
                                                                    ATerm n_0 (ATerm t)
                                                                    {
                                                                      ATerm k_5 = t;
                                                                      int l_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          LocalPopChoice(l_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = k_5;
                                                                          t = Mod_2(t, is_string_0, is_string_0);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1(t, n_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm m_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, l_0, m_0);
                                                                  LocalPopChoice(j_5);
                                                                }
                                                              else
                                                                {
                                                                  t = i_5;
                                                                  {
                                                                    ATerm m_5 = t;
                                                                    int r_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(r_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_5;
                                                                        {
                                                                          ATerm s_5 = t;
                                                                          int u_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(u_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_5;
                                                                              {
                                                                                ATerm w_5 = t;
                                                                                int x_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm o_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, o_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(b_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_6;
                                                                                                {
                                                                                                  ATerm c_6 = t;
                                                                                                  int h_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(h_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_6;
                                                                                                      {
                                                                                                        ATerm i_6 = t;
                                                                                                        int k_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            LocalPopChoice(k_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = i_6;
                                                                                                            {
                                                                                                              ATerm m_6 = t;
                                                                                                              int n_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, term_expression_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(p_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = o_6;
                                                                                                                        {
                                                                                                                          ATerm q_6 = t;
                                                                                                                          int r_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm p_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, p_0, strategy_expression_0);
                                                                                                                              LocalPopChoice(r_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = q_6;
                                                                                                                              {
                                                                                                                                ATerm v_6 = t;
                                                                                                                                int x_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(x_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = v_6;
                                                                                                                                    {
                                                                                                                                      ATerm y_6 = t;
                                                                                                                                      int z_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm q_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, q_0);
                                                                                                                                          LocalPopChoice(z_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = y_6;
                                                                                                                                          {
                                                                                                                                            ATerm a_7 = t;
                                                                                                                                            int b_7 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm r_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm s_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, s_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, r_0, strategy_expression_0);
                                                                                                                                                LocalPopChoice(b_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = a_7;
                                                                                                                                                {
                                                                                                                                                  ATerm t_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_c_7;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, t_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm f_23 = NULL;
  f_23 = t;
  t = SSL_is_string(not_null(f_23));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm u_42 (ATerm), ATerm v_42 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(match_cons(m_23, sym_VarDec_2))
    {
      n_23 = ATgetArgument(m_23, 0);
      o_23 = ATgetArgument(m_23, 1);
      {
        ATerm r_23 = NULL;
        t = not_null(n_23);
        {
          ATerm t_23 = NULL;
          t = u_42(t);
          {
            r_23 = t;
            {
              t = not_null(o_23);
              {
                t = v_42(t);
                {
                  t_23 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_23), not_null(t_23));
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
ATerm Mod_2 (ATerm t, ATerm w_40 (ATerm), ATerm x_40 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym_Mod_2))
    {
      d_24 = ATgetArgument(c_24, 0);
      e_24 = ATgetArgument(c_24, 1);
      {
        ATerm h_24 = NULL;
        t = not_null(d_24);
        {
          ATerm j_24 = NULL;
          t = w_40(t);
          {
            h_24 = t;
            {
              t = not_null(e_24);
              {
                t = x_40(t);
                {
                  j_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Mod_2, not_null(h_24), not_null(j_24));
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
ATerm SDef_3 (ATerm t, ATerm r_42 (ATerm), ATerm s_42 (ATerm), ATerm t_42 (ATerm))
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym_SDef_3))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      w_24 = ATgetArgument(t_24, 2);
      {
        ATerm a_25 = NULL;
        t = not_null(u_24);
        {
          ATerm c_25 = NULL;
          t = r_42(t);
          {
            a_25 = t;
            {
              t = not_null(v_24);
              {
                ATerm e_25 = NULL;
                t = s_42(t);
                {
                  c_25 = t;
                  {
                    t = not_null(w_24);
                    {
                      t = t_42(t);
                      {
                        e_25 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_25), not_null(c_25), not_null(e_25));
                      }
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
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm k_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(m_7);
          }
        else
          {
            t = k_7;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, w_0);
        return(t);
      }
      t = SDef_3(t, u_0, v_0, strategy_expression_0);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm x_0 (ATerm t)
        {
          t = term_n_7;
          return(t);
        }
        t = debug_1(t, x_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm k_25 (ATerm t)
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = Cons_2(t, k_58, k_25);
      }
    return(t);
  }
  t = k_25(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_41 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_Strategies_1))
    {
      p_25 = ATgetArgument(o_25, 0);
      {
        ATerm r_25 = NULL;
        t = not_null(p_25);
        {
          t = e_41(t);
          {
            r_25 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_25));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm g_41 (ATerm))
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  x_25 :
  if(match_cons(y_25, sym_Specification_1))
    {
      z_25 = ATgetArgument(y_25, 0);
      {
        ATerm b_26 = NULL;
        t = not_null(z_25);
        {
          t = g_41(t);
          {
            b_26 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(b_26));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, b_1);
            return(t);
          }
          t = Cons_2(t, a_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, z_0);
        return(t);
      }
      t = Specification_1(t, y_0);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_v_7;
          return(t);
        }
        t = debug_1(t, c_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm g_33 (ATerm), ATerm h_33 (ATerm))
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        ATerm o_26 = NULL;
        t = not_null(k_26);
        {
          ATerm q_26 = NULL;
          t = g_33(t);
          {
            o_26 = t;
            {
              t = not_null(l_26);
              {
                t = h_33(t);
                {
                  q_26 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(q_26));
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
  ATerm x_26 = NULL;
  ATerm x_7;
  x_7 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm y_26 = NULL,z_26 = NULL;
      y_26 = t;
      w_26 :
      if(match_cons(y_26, sym_Program_1))
        {
          z_26 = ATgetArgument(y_26, 0);
          if(((x_26 != NULL) && (x_26 != z_26)))
            _fail(z_26);
          else
            x_26 = z_26;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, d_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(CheckATermList(term_a_8), not_null(x_26)), term_y_7));
      {
        t = printnl_0(t);
        {
          t = term_b_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_i_8;
  {
    t = printnl_0(t);
    {
      t = term_b_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm j_8 = t;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm i_27 = NULL;
            i_27 = t;
            b_27 :
            if(!(match_cons(i_27, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_1);
          PopChoice();
          _fail(t);
        }
      else
        t = j_8;
      return(t);
    }
    t = _2(t, f_1, _id);
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          ATerm j_27 = NULL,k_27 = NULL;
          j_27 = t;
          d_27 :
          if(match_cons(j_27, sym_Runtime_1))
            {
              k_27 = ATgetArgument(j_27, 0);
              if(((h_27 != NULL) && (h_27 != k_27)))
                _fail(k_27);
              else
                h_27 = k_27;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_1);
        return(t);
      }
      t = _2(t, h_1, _id);
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            ATerm l_27 = NULL,m_27 = NULL;
            l_27 = t;
            f_27 :
            if(match_cons(l_27, sym_Program_1))
              {
                m_27 = ATgetArgument(l_27, 0);
                if(((g_27 != NULL) && (g_27 != m_27)))
                  _fail(m_27);
                else
                  g_27 = m_27;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_1);
          return(t);
        }
        t = _2(t, j_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_n_8), not_null(h_27)), term_k_8), not_null(g_27)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, e_1);
  {
    t = term_o_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym__2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      t = SSL_WriteToTextFile(not_null(s_27), not_null(t_27));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym__2))
    {
      a_28 = ATgetArgument(z_27, 0);
      b_28 = ATgetArgument(z_27, 1);
      t = SSL_WriteToBinaryFile(not_null(a_28), not_null(b_28));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm t_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm k_28 = NULL,l_28 = NULL;
            k_28 = t;
            g_28 :
            if(match_cons(k_28, sym_Output_1))
              {
                l_28 = ATgetArgument(k_28, 0);
                if(((j_28 != NULL) && (j_28 != l_28)))
                  _fail(l_28);
                else
                  j_28 = l_28;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_1);
          LocalPopChoice(v_8);
        }
      else
        {
          t = t_8;
          {
            ATerm m_28 = NULL;
            t = term_w_8;
            {
              m_28 = t;
              if(((j_28 != NULL) && (j_28 != m_28)))
                _fail(m_28);
              else
                j_28 = m_28;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_1, _id);
  }
  t = p_8;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = not_null(j_28);
        return(t);
      }
      t = split_2(t, o_1, _id);
      return(t);
    }
    t = _2(t, _id, n_1);
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm n_28 = NULL;
              n_28 = t;
              i_28 :
              if(!(match_cons(n_28, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, q_1);
            return(t);
          }
          t = _2(t, p_1, WriteToBinaryFile_0);
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm t_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  ATerm z_8;
  z_8 = t;
  t = dtime_0(t);
  t = z_8;
  {
    t = c_49(t);
    {
      ATerm d_9;
      d_9 = t;
      {
        ATerm u_28 = NULL;
        t = dtime_0(t);
        {
          u_28 = t;
          if(((t_28 != NULL) && (t_28 != u_28)))
            _fail(u_28);
          else
            t_28 = u_28;
        }
      }
      t = d_9;
      {
        v_28 = t;
        s_28 :
        if(match_cons(v_28, sym__2))
          {
            w_28 = ATgetArgument(v_28, 0);
            x_28 = ATgetArgument(v_28, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_28)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_28))), not_null(x_28));
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
  ATerm d_29 = NULL;
  d_29 = t;
  t = SSL_ReadFromFile(not_null(d_29));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
{
  ATerm i_29 = NULL,k_29 = NULL;
  ATerm f_9;
  f_9 = t;
  {
    ATerm j_29 = NULL;
    t = t_51(t);
    {
      j_29 = t;
      if(((i_29 != NULL) && (i_29 != j_29)))
        _fail(j_29);
      else
        i_29 = j_29;
    }
  }
  t = f_9;
  {
    ATerm l_29 = NULL;
    t = u_51(t);
    {
      l_29 = t;
      if(((k_29 != NULL) && (k_29 != l_29)))
        _fail(l_29);
      else
        k_29 = l_29;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(k_29));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_29 = NULL;
  ATerm g_9;
  g_9 = t;
  {
    ATerm h_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          ATerm s_29 = NULL,t_29 = NULL;
          s_29 = t;
          p_29 :
          if(match_cons(s_29, sym_Input_1))
            {
              t_29 = ATgetArgument(s_29, 0);
              if(((r_29 != NULL) && (r_29 != t_29)))
                _fail(t_29);
              else
                r_29 = t_29;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, r_1);
        LocalPopChoice(k_9);
      }
    else
      {
        t = h_9;
        {
          ATerm u_29 = NULL;
          t = term_l_9;
          {
            u_29 = t;
            if(((r_29 != NULL) && (r_29 != u_29)))
              _fail(u_29);
            else
              r_29 = u_29;
          }
        }
      }
  }
  t = g_9;
  {
    ATerm s_1 (ATerm t)
    {
      t = not_null(r_29);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  x_29 :
  if(!(match_cons(y_29, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_49 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_1);
  t = b_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  t = SSL_table_create(not_null(a_30));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  {
    ATerm v_9;
    v_9 = t;
    {
      t = term_x_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_y_9, not_null(e_30));
          t = table_put_0(t);
        }
      }
    }
    t = v_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  m_30 = t;
  k_30 :
  if(match_string(m_30, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
        {
          n_30 = ATgetFirst((ATermList) m_30);
          o_30 = (ATerm) ATgetNext((ATermList) m_30);
          l_30 :
          if(((ATgetType(o_30) == AT_LIST) && ((ATermList) o_30 != ATempty)))
            {
              p_30 = ATgetFirst((ATermList) o_30);
              q_30 = (ATerm) ATgetNext((ATermList) o_30);
              {
                ATerm u_30 = NULL;
                ATerm z_9;
                z_9 = t;
                {
                  t = not_null(n_30);
                  t = h_0(t);
                }
                t = z_9;
                {
                  ATerm v_30 = NULL;
                  t = not_null(p_30);
                  {
                    t = i_0(t);
                    {
                      v_30 = t;
                      if(((u_30 != NULL) && (u_30 != v_30)))
                        _fail(v_30);
                      else
                        u_30 = v_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_30)), not_null(u_30));
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
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm k_31 = NULL;
        k_31 = t;
        z_30 :
        if(!(match_string(k_31, "-S")))
          {
            if(!(match_string(k_31, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_c_10;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_g_10;
        return(t);
      }
      t = Option_3(t, u_1, v_1, w_1);
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm l_31 = NULL;
              l_31 = t;
              a_31 :
              if(!(match_string(l_31, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              t = term_k_10;
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_l_10;
              return(t);
            }
            t = Option_3(t, x_1, y_1, z_1);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm m_31 = NULL;
                    m_31 = t;
                    b_31 :
                    if(!(match_string(m_31, "-v")))
                      {
                        if(!(match_string(m_31, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm b_2 (ATerm t)
                  {
                    t = term_s_10;
                    return(t);
                  }
                  ATerm c_2 (ATerm t)
                  {
                    t = term_t_10;
                    return(t);
                  }
                  t = Option_3(t, a_2, b_2, c_2);
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm v_10 = t;
                    int x_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_2 (ATerm t)
                        {
                          ATerm n_31 = NULL;
                          n_31 = t;
                          c_31 :
                          if(!(match_string(n_31, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          ATerm o_31 = NULL;
                          ATerm p_31 = NULL;
                          p_31 = t;
                          if(((o_31 != NULL) && (o_31 != p_31)))
                            _fail(p_31);
                          else
                            o_31 = p_31;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(o_31));
                          return(t);
                        }
                        ATerm f_2 (ATerm t)
                        {
                          t = term_y_10;
                          return(t);
                        }
                        t = ArgOption_3(t, d_2, e_2, f_2);
                        LocalPopChoice(x_10);
                      }
                    else
                      {
                        t = v_10;
                        {
                          ATerm z_10 = t;
                          int a_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm q_31 = NULL;
                                q_31 = t;
                                e_31 :
                                if(!(match_string(q_31, "-i")))
                                  {
                                    if(!(match_string(q_31, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm h_2 (ATerm t)
                              {
                                ATerm r_31 = NULL;
                                ATerm s_31 = NULL;
                                s_31 = t;
                                if(((r_31 != NULL) && (r_31 != s_31)))
                                  _fail(s_31);
                                else
                                  r_31 = s_31;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_31));
                                return(t);
                              }
                              ATerm i_2 (ATerm t)
                              {
                                t = term_b_11;
                                return(t);
                              }
                              t = ArgOption_3(t, g_2, h_2, i_2);
                              LocalPopChoice(a_11);
                            }
                          else
                            {
                              t = z_10;
                              {
                                ATerm c_11 = t;
                                int g_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm t_31 = NULL;
                                      t_31 = t;
                                      g_31 :
                                      if(!(match_string(t_31, "-o")))
                                        {
                                          if(!(match_string(t_31, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      ATerm u_31 = NULL;
                                      ATerm v_31 = NULL;
                                      v_31 = t;
                                      if(((u_31 != NULL) && (u_31 != v_31)))
                                        _fail(v_31);
                                      else
                                        u_31 = v_31;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_31));
                                      return(t);
                                    }
                                    ATerm l_2 (ATerm t)
                                    {
                                      t = term_i_11;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, j_2, k_2, l_2);
                                    LocalPopChoice(g_11);
                                  }
                                else
                                  {
                                    t = c_11;
                                    {
                                      ATerm j_11 = t;
                                      int k_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            ATerm w_31 = NULL;
                                            w_31 = t;
                                            i_31 :
                                            if(!(match_string(w_31, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_2 (ATerm t)
                                          {
                                            t = term_l_11;
                                            return(t);
                                          }
                                          ATerm o_2 (ATerm t)
                                          {
                                            t = term_m_11;
                                            return(t);
                                          }
                                          t = Option_3(t, m_2, n_2, o_2);
                                          LocalPopChoice(k_11);
                                        }
                                      else
                                        {
                                          t = j_11;
                                          {
                                            ATerm p_2 (ATerm t)
                                            {
                                              ATerm x_31 = NULL;
                                              x_31 = t;
                                              j_31 :
                                              if(!(match_string(x_31, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_2 (ATerm t)
                                            {
                                              t = term_q_11;
                                              return(t);
                                            }
                                            ATerm r_2 (ATerm t)
                                            {
                                              t = term_s_11;
                                              return(t);
                                            }
                                            t = Option_3(t, p_2, q_2, r_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm e_32 = NULL;
  e_32 = t;
  t = SSL_table_destroy(not_null(e_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  t = SSL_exit(not_null(i_32));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_implode_string(not_null(o_32));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm r_32 (ATerm t)
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_32);
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        {
          t = Nil_0(t);
          t = w_58(t);
        }
      }
    return(t);
  }
  t = r_32(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
        u_32 = t;
        t_32 :
        if(((ATgetType(u_32) == AT_LIST) && ((ATermList) u_32 != ATempty)))
          {
            v_32 = ATgetFirst((ATermList) u_32);
            w_32 = (ATerm) ATgetNext((ATermList) u_32);
            {
              t = not_null(v_32);
              {
                ATerm s_2 (ATerm t)
                {
                  t = not_null(w_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_2);
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
  ATerm c_33 = NULL;
  c_33 = t;
  t = SSL_explode_string(not_null(c_33));
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
ATerm long_description_1 (ATerm t, ATerm i_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm f_33 (ATerm t)
  {
    ATerm a_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = a_12;
        t = Cons_2(t, i_58, f_33);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  o_33 = t;
  l_33 :
  if(((ATgetType(o_33) == AT_LIST) && ((ATermList) o_33 != ATempty)))
    {
      m_33 = ATgetFirst((ATermList) o_33);
      n_33 = (ATerm) ATgetNext((ATermList) o_33);
      {
        t = not_null(n_33);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm r_33 = NULL;
            ATerm s_33 = NULL;
            t = g_0(t);
            {
              s_33 = t;
              if(((r_33 != NULL) && (r_33 != s_33)))
                _fail(s_33);
              else
                r_33 = s_33;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(r_33)), not_null(m_33));
            return(t);
          }
          t = reverse_1(t, t_2);
        }
      }
    }
  else
    {
      if(((ATermList) o_33 == ATempty))
        {
          {
            t = term_d_12;
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
  ATerm u_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, u_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm p_34 (ATerm))
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  y_33 :
  if(match_cons(z_33, sym_Program_1))
    {
      a_34 = ATgetArgument(z_33, 0);
      {
        ATerm c_34 = NULL;
        t = not_null(a_34);
        {
          t = p_34(t);
          {
            c_34 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_34));
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
  ATerm k_34 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      ATerm l_34 = NULL;
      l_34 = t;
      if(((k_34 != NULL) && (k_34 != l_34)))
        _fail(l_34);
      else
        k_34 = l_34;
      return(t);
    }
    t = Program_1(t, w_2);
    return(t);
  }
  t = option_defined_1(t, v_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm m_34 = NULL;
      ATerm n_34 = NULL;
      t = term_d_12;
      {
        ATerm y_2 (ATerm t)
        {
          t = not_null(k_34);
          return(t);
        }
        t = short_description_1(t, y_2);
        {
          t = concat_strings_0(t);
          {
            n_34 = t;
            if(((m_34 != NULL) && (m_34 != n_34)))
              _fail(n_34);
            else
              m_34 = n_34;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATempty, not_null(m_34)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_2);
    {
      t = term_g_12;
      {
        t = printnl_0(t);
        {
          t = term_n_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm o_34 = NULL;
                  o_34 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_34)), term_o_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_2);
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm s_34 = NULL;
                    ATerm t_34 = NULL;
                    t = term_d_12;
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = not_null(k_34);
                        return(t);
                      }
                      t = long_description_1(t, b_3);
                      {
                        t = concat_strings_0(t);
                        {
                          t_34 = t;
                          if(((s_34 != NULL) && (s_34 != t_34)))
                            _fail(t_34);
                          else
                            s_34 = t_34;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_34)), term_p_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_3);
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
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        ATerm q_12;
        q_12 = t;
        t = SSL_printnl(not_null(b_35), not_null(c_35));
        t = q_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm q_34 (ATerm))
{
  ATerm j_35 = NULL,k_35 = NULL;
  j_35 = t;
  i_35 :
  if(match_cons(j_35, sym_Undefined_1))
    {
      k_35 = ATgetArgument(j_35, 0);
      {
        ATerm m_35 = NULL;
        t = not_null(k_35);
        {
          t = q_34(t);
          {
            m_35 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_35));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm q_35 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_58, _id);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = Cons_2(t, _id, q_35);
      }
    return(t);
  }
  t = q_35(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_48 (ATerm))
{
  t = fetch_1(t, g_48);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  r_35 :
  if(!(match_cons(s_35, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_65(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = w_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym__2))
    {
      w_35 = ATgetArgument(v_35, 0);
      x_35 = ATgetArgument(v_35, 1);
      t = SSL_table_get(not_null(w_35), not_null(x_35));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym__3))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      h_36 = ATgetArgument(e_36, 2);
      {
        ATerm z_12;
        z_12 = t;
        {
          ATerm l_36 = NULL;
          ATerm m_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(g_36));
          {
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_13);
              }
            else
              {
                t = b_13;
                t = (ATerm) ATempty;
              }
            {
              m_36 = t;
              if(((l_36 != NULL) && (l_36 != m_36)))
                _fail(m_36);
              else
                l_36 = m_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_36), not_null(g_36), (ATerm) ATinsert(CheckATermList(not_null(l_36)), not_null(h_36)));
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
ATerm register_usage_1 (ATerm t, ATerm m_47 (ATerm))
{
  ATerm q_36 = NULL;
  ATerm r_36 = NULL;
  t = term_d_12;
  {
    t = m_47(t);
    {
      r_36 = t;
      if(((q_36 != NULL) && (q_36 != r_36)))
        _fail(r_36);
      else
        q_36 = r_36;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_m_12, not_null(q_36));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  w_36 :
  if(match_string(x_36, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(x_36) == AT_LIST) && ((ATermList) x_36 != ATempty)))
        {
          y_36 = ATgetFirst((ATermList) x_36);
          z_36 = (ATerm) ATgetNext((ATermList) x_36);
          {
            ATerm c_37 = NULL;
            ATerm d_13;
            d_13 = t;
            {
              t = not_null(y_36);
              t = a_0(t);
            }
            t = d_13;
            {
              ATerm d_37 = NULL;
              t = term_d_12;
              {
                t = d_0(t);
                {
                  d_37 = t;
                  if(((c_37 != NULL) && (c_37 != d_37)))
                    _fail(d_37);
                  else
                    c_37 = d_37;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_36)), not_null(c_37));
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
  ATerm c_3 (ATerm t)
  {
    ATerm i_37 = NULL;
    i_37 = t;
    h_37 :
    if(!(match_string(i_37, "--help")))
      {
        if(!(match_string(i_37, "-h")))
          {
            if(!(match_string(i_37, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_e_13;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_f_13;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  k_37 :
  if(((ATgetType(l_37) == AT_LIST) && ((ATermList) l_37 != ATempty)))
    {
      m_37 = ATgetFirst((ATermList) l_37);
      n_37 = (ATerm) ATgetNext((ATermList) l_37);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_37)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_37)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  u_37 :
  if(((ATgetType(v_37) == AT_LIST) && ((ATermList) v_37 != ATempty)))
    {
      w_37 = ATgetFirst((ATermList) v_37);
      x_37 = (ATerm) ATgetNext((ATermList) v_37);
      {
        ATerm a_38 = NULL;
        t = not_null(w_37);
        {
          ATerm c_38 = NULL;
          t = w_43(t);
          {
            a_38 = t;
            {
              t = not_null(x_37);
              {
                t = x_43(t);
                {
                  c_38 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_38)), not_null(a_38));
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
  ATerm i_38 = NULL;
  i_38 = t;
  h_38 :
  if(((ATermList) i_38 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_47 (ATerm))
{
  ATerm g_13;
  g_13 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = term_h_13;
      t = k_47(t);
      return(t);
    }
    t = try_1(t, f_3);
  }
  t = g_13;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm k_38 = NULL;
      k_38 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_38));
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      ATerm l_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              {
                t = k_47(t);
                t = Cons_2(t, _id, h_3);
              }
            }
          LocalPopChoice(n_13);
        }
      else
        {
          t = l_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_3, h_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  ATerm q_13;
  q_13 = t;
  {
    ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
    t_38 = t;
    p_38 :
    if(match_cons(t_38, sym__3))
      {
        u_38 = ATgetArgument(t_38, 0);
        v_38 = ATgetArgument(t_38, 1);
        w_38 = ATgetArgument(t_38, 2);
        {
          if(((q_38 != NULL) && (q_38 != u_38)))
            _fail(u_38);
          else
            q_38 = u_38;
          {
            if(((r_38 != NULL) && (r_38 != v_38)))
              _fail(v_38);
            else
              r_38 = v_38;
            {
              if(((s_38 != NULL) && (s_38 != w_38)))
                _fail(w_38);
              else
                s_38 = w_38;
              t = SSL_table_put(not_null(q_38), not_null(r_38), not_null(s_38));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = q_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_47 (ATerm))
{
  ATerm z_38 = NULL;
  ATerm r_13;
  r_13 = t;
  {
    t = term_s_13;
    t = table_put_0(t);
  }
  t = r_13;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_47(t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_o_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm a_39 = NULL;
                  a_39 = t;
                  if(((z_38 != NULL) && (z_38 != a_39)))
                    _fail(a_39);
                  else
                    z_38 = a_39;
                  return(t);
                }
                t = Undefined_1(t, l_3);
                return(t);
              }
              t = option_defined_1(t, k_3);
              {
                ATerm x_13;
                x_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_38)), term_y_13));
                  t = printnl_0(t);
                }
                t = x_13;
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_3);
      {
        ATerm z_13;
        z_13 = t;
        {
          t = term_k_12;
          t = table_destroy_0(t);
        }
        t = z_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_48 (ATerm), ATerm r_48 (ATerm), ATerm s_48 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_48(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_3);
  {
    t = store_options_0(t);
    {
      ATerm g_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, s_48);
          LocalPopChoice(h_14);
        }
      else
        {
          t = g_14;
          {
            ATerm i_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, q_48);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(k_14);
              }
            else
              {
                t = i_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_48 (ATerm), ATerm m_48 (ATerm))
{
  t = iowrap_3(t, l_48, m_48, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_48 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    t = _2(t, _id, i_48);
    return(t);
  }
  t = iowrap_2(t, n_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
