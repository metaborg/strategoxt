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
ATerm term_z_13;
ATerm term_p_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_l_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_o_9;
ATerm term_g_9;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_o_7;
ATerm term_d_7;
ATerm term_i_4;
ATerm term_r_3;
void init_constant_terms (void)
{
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__3, term_e_12, term_f_12, (ATerm) ATempty);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm u_50 (ATerm));
ATerm Let_2 (ATerm, ATerm k_43 (ATerm), ATerm l_43 (ATerm));
ATerm Op_2 (ATerm, ATerm p_42 (ATerm), ATerm q_42 (ATerm));
ATerm Var_1 (ATerm, ATerm l_42 (ATerm));
ATerm As_2 (ATerm, ATerm z_40 (ATerm), ATerm a_41 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm b_41 (ATerm));
ATerm Str_1 (ATerm, ATerm o_42 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm n_42 (ATerm));
ATerm Int_1 (ATerm, ATerm m_42 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm Where_1 (ATerm, ATerm o_44 (ATerm));
ATerm Scope_2 (ATerm, ATerm m_44 (ATerm), ATerm n_44 (ATerm));
ATerm Build_1 (ATerm, ATerm j_44 (ATerm));
ATerm Match_1 (ATerm, ATerm i_44 (ATerm));
ATerm Thread_1 (ATerm, ATerm f_44 (ATerm));
ATerm All_1 (ATerm, ATerm e_44 (ATerm));
ATerm Some_1 (ATerm, ATerm l_0 (ATerm));
ATerm One_1 (ATerm, ATerm c_44 (ATerm));
ATerm Cong_2 (ATerm, ATerm a_44 (ATerm), ATerm b_44 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm y_43 (ATerm), ATerm z_43 (ATerm));
ATerm Rec_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm SVar_1 (ATerm, ATerm h_43 (ATerm));
ATerm Call_2 (ATerm, ATerm w_43 (ATerm), ATerm x_43 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm e_43 (ATerm), ATerm f_43 (ATerm));
ATerm GChoice_2 (ATerm, ATerm c_43 (ATerm), ATerm d_43 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm z_42 (ATerm), ATerm a_43 (ATerm), ATerm b_43 (ATerm));
ATerm LChoice_2 (ATerm, ATerm x_42 (ATerm), ATerm y_42 (ATerm));
ATerm Choice_2 (ATerm, ATerm v_42 (ATerm), ATerm w_42 (ATerm));
ATerm Seq_2 (ATerm, ATerm t_42 (ATerm), ATerm u_42 (ATerm));
ATerm Test_1 (ATerm, ATerm r_42 (ATerm));
ATerm Not_1 (ATerm, ATerm s_42 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm p_43 (ATerm), ATerm q_43 (ATerm));
ATerm Mod_2 (ATerm, ATerm r_41 (ATerm), ATerm s_41 (ATerm));
ATerm SDef_3 (ATerm, ATerm m_43 (ATerm), ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm l_59 (ATerm));
ATerm Strategies_1 (ATerm, ATerm z_41 (ATerm));
ATerm Specification_1 (ATerm, ATerm b_42 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm x_33 (ATerm), ATerm y_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_59 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_48 (ATerm));
ATerm map_1 (ATerm, ATerm j_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_48 (ATerm));
ATerm Program_1 (ATerm, ATerm g_35 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_35 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_48 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_49 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm u_50 (ATerm))
{
  ATerm p_3;
  p_3 = t;
  {
    ATerm f_5 = NULL,h_5 = NULL;
    ATerm q_3;
    q_3 = t;
    {
      ATerm g_5 = NULL;
      t = u_50(t);
      {
        g_5 = t;
        if(((f_5 != NULL) && (f_5 != g_5)))
          _fail(g_5);
        else
          f_5 = g_5;
      }
    }
    t = q_3;
    {
      ATerm i_5 = NULL;
      i_5 = t;
      if(((h_5 != NULL) && (h_5 != i_5)))
        _fail(i_5);
      else
        h_5 = i_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_5)), not_null(f_5)));
        t = printnl_0(t);
      }
    }
  }
  t = p_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm k_43 (ATerm), ATerm l_43 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_Let_2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm u_5 = NULL;
        t = not_null(q_5);
        {
          ATerm w_5 = NULL;
          t = k_43(t);
          {
            u_5 = t;
            {
              t = not_null(r_5);
              {
                t = l_43(t);
                {
                  w_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_5), not_null(w_5));
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
ATerm Op_2 (ATerm t, ATerm p_42 (ATerm), ATerm q_42 (ATerm))
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_Op_2))
    {
      g_6 = ATgetArgument(f_6, 0);
      h_6 = ATgetArgument(f_6, 1);
      {
        ATerm k_6 = NULL;
        t = not_null(g_6);
        {
          ATerm m_6 = NULL;
          t = p_42(t);
          {
            k_6 = t;
            {
              t = not_null(h_6);
              {
                t = q_42(t);
                {
                  m_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(k_6), not_null(m_6));
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
ATerm Var_1 (ATerm t, ATerm l_42 (ATerm))
{
  ATerm u_6 = NULL,v_6 = NULL;
  u_6 = t;
  t_6 :
  if(match_cons(u_6, sym_Var_1))
    {
      v_6 = ATgetArgument(u_6, 0);
      {
        ATerm x_6 = NULL;
        t = not_null(v_6);
        {
          t = l_42(t);
          {
            x_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_6));
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
ATerm As_2 (ATerm t, ATerm z_40 (ATerm), ATerm a_41 (ATerm))
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_As_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        ATerm k_7 = NULL;
        t = not_null(g_7);
        {
          ATerm m_7 = NULL;
          t = z_40(t);
          {
            k_7 = t;
            {
              t = not_null(h_7);
              {
                t = a_41(t);
                {
                  m_7 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(k_7), not_null(m_7));
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
ATerm BuildDefault_1 (ATerm t, ATerm b_41 (ATerm))
{
  ATerm u_7 = NULL,v_7 = NULL;
  u_7 = t;
  t_7 :
  if(match_cons(u_7, sym_BuildDefault_1))
    {
      v_7 = ATgetArgument(u_7, 0);
      {
        ATerm x_7 = NULL;
        t = not_null(v_7);
        {
          t = b_41(t);
          {
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(x_7));
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
ATerm Str_1 (ATerm t, ATerm o_42 (ATerm))
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym_Str_1))
    {
      f_8 = ATgetArgument(e_8, 0);
      {
        ATerm h_8 = NULL;
        t = not_null(f_8);
        {
          t = o_42(t);
          {
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(h_8));
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
  ATerm m_8 = NULL;
  m_8 = t;
  t = SSL_is_real(not_null(m_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm n_42 (ATerm))
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym_Real_1))
    {
      t_8 = ATgetArgument(s_8, 0);
      {
        ATerm v_8 = NULL;
        t = not_null(t_8);
        {
          t = n_42(t);
          {
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(v_8));
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
ATerm Int_1 (ATerm t, ATerm m_42 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym_Int_1))
    {
      d_9 = ATgetArgument(c_9, 0);
      {
        ATerm f_9 = NULL;
        t = not_null(d_9);
        {
          t = m_42(t);
          {
            f_9 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(f_9));
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
  ATerm k_9 = NULL;
  k_9 = t;
  j_9 :
  if(!(match_cons(k_9, sym_Wld_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm s_3 = t;
  int t_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(t_3);
    }
  else
    {
      t = s_3;
      {
        ATerm u_3 = t;
        int v_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(v_3);
          }
        else
          {
            t = u_3;
            {
              ATerm w_3 = t;
              int x_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(x_3);
                }
              else
                {
                  t = w_3;
                  {
                    ATerm y_3 = t;
                    int z_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(z_3);
                      }
                    else
                      {
                        t = y_3;
                        {
                          ATerm a_4 = t;
                          int b_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                          ATerm a_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, a_0, term_expression_0);
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
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(h_4);
                                              }
                                            else
                                              {
                                                t = g_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_i_4;
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
ATerm Prim_2 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  p_9 :
  if(match_cons(q_9, sym_Prim_2))
    {
      r_9 = ATgetArgument(q_9, 0);
      s_9 = ATgetArgument(q_9, 1);
      {
        ATerm v_9 = NULL;
        t = not_null(r_9);
        {
          ATerm x_9 = NULL;
          t = p_44(t);
          {
            v_9 = t;
            {
              t = not_null(s_9);
              {
                t = q_44(t);
                {
                  x_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(v_9), not_null(x_9));
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
ATerm Where_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm f_10 = NULL,g_10 = NULL;
  f_10 = t;
  e_10 :
  if(match_cons(f_10, sym_Where_1))
    {
      g_10 = ATgetArgument(f_10, 0);
      {
        ATerm i_10 = NULL;
        t = not_null(g_10);
        {
          t = o_44(t);
          {
            i_10 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(i_10));
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
ATerm Scope_2 (ATerm t, ATerm m_44 (ATerm), ATerm n_44 (ATerm))
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym_Scope_2))
    {
      r_10 = ATgetArgument(q_10, 0);
      s_10 = ATgetArgument(q_10, 1);
      {
        ATerm v_10 = NULL;
        t = not_null(r_10);
        {
          ATerm x_10 = NULL;
          t = m_44(t);
          {
            v_10 = t;
            {
              t = not_null(s_10);
              {
                t = n_44(t);
                {
                  x_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_10), not_null(x_10));
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
ATerm Build_1 (ATerm t, ATerm j_44 (ATerm))
{
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_Build_1))
    {
      g_11 = ATgetArgument(f_11, 0);
      {
        ATerm i_11 = NULL;
        t = not_null(g_11);
        {
          t = j_44(t);
          {
            i_11 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_11));
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
ATerm Match_1 (ATerm t, ATerm i_44 (ATerm))
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_Match_1))
    {
      q_11 = ATgetArgument(p_11, 0);
      {
        ATerm s_11 = NULL;
        t = not_null(q_11);
        {
          t = i_44(t);
          {
            s_11 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_11));
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
ATerm Thread_1 (ATerm t, ATerm f_44 (ATerm))
{
  ATerm z_11 = NULL,a_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym_Thread_1))
    {
      a_12 = ATgetArgument(z_11, 0);
      {
        ATerm c_12 = NULL;
        t = not_null(a_12);
        {
          t = f_44(t);
          {
            c_12 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(c_12));
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
ATerm All_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_All_1))
    {
      k_12 = ATgetArgument(j_12, 0);
      {
        ATerm m_12 = NULL;
        t = not_null(k_12);
        {
          t = e_44(t);
          {
            m_12 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(m_12));
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
ATerm Some_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_Some_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      {
        ATerm j_4 = t;
        int k_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_12 = NULL;
            t = not_null(w_12);
            {
              t = l_0(t);
              {
                y_12 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(y_12));
              }
            }
            LocalPopChoice(k_4);
          }
        else
          {
            t = j_4;
            {
              ATerm b_13 = NULL;
              t = not_null(w_12);
              {
                t = l_0(t);
                {
                  b_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(b_13));
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
ATerm One_1 (ATerm t, ATerm c_44 (ATerm))
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_One_1))
    {
      l_13 = ATgetArgument(k_13, 0);
      {
        ATerm n_13 = NULL;
        t = not_null(l_13);
        {
          t = c_44(t);
          {
            n_13 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(n_13));
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
ATerm Cong_2 (ATerm t, ATerm a_44 (ATerm), ATerm b_44 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym_Cong_2))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      {
        ATerm h_14 = NULL;
        t = not_null(w_13);
        {
          ATerm j_14 = NULL;
          t = a_44(t);
          {
            h_14 = t;
            {
              t = not_null(x_13);
              {
                t = b_44(t);
                {
                  j_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(h_14), not_null(j_14));
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
ATerm is_int_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  t = SSL_is_int(not_null(p_14));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm y_43 (ATerm), ATerm z_43 (ATerm))
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  y_14 :
  if(match_cons(z_14, sym_Path_2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      {
        ATerm e_15 = NULL;
        t = not_null(a_15);
        {
          ATerm g_15 = NULL;
          t = y_43(t);
          {
            e_15 = t;
            {
              t = not_null(b_15);
              {
                t = z_43(t);
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
    {
      _fail(t);
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_Rec_2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      {
        ATerm v_15 = NULL;
        t = not_null(r_15);
        {
          ATerm x_15 = NULL;
          t = i_43(t);
          {
            v_15 = t;
            {
              t = not_null(s_15);
              {
                t = j_43(t);
                {
                  x_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(v_15), not_null(x_15));
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
ATerm SVar_1 (ATerm t, ATerm h_43 (ATerm))
{
  ATerm f_16 = NULL,p_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym_SVar_1))
    {
      p_16 = ATgetArgument(f_16, 0);
      {
        ATerm r_16 = NULL;
        t = not_null(p_16);
        {
          t = h_43(t);
          {
            r_16 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(r_16));
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
ATerm Call_2 (ATerm t, ATerm w_43 (ATerm), ATerm x_43 (ATerm))
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym_Call_2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      {
        ATerm p_17 = NULL;
        t = not_null(l_17);
        {
          ATerm r_17 = NULL;
          t = w_43(t);
          {
            p_17 = t;
            {
              t = not_null(m_17);
              {
                t = x_43(t);
                {
                  r_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(p_17), not_null(r_17));
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
ATerm LGChoice_2 (ATerm t, ATerm e_43 (ATerm), ATerm f_43 (ATerm))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_LGChoice_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      {
        ATerm f_18 = NULL;
        t = not_null(b_18);
        {
          ATerm h_18 = NULL;
          t = e_43(t);
          {
            f_18 = t;
            {
              t = not_null(c_18);
              {
                t = f_43(t);
                {
                  h_18 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(f_18), not_null(h_18));
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
ATerm GChoice_2 (ATerm t, ATerm c_43 (ATerm), ATerm d_43 (ATerm))
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
          ATerm g_19 = NULL;
          t = c_43(t);
          {
            d_19 = t;
            {
              t = not_null(a_19);
              {
                t = d_43(t);
                {
                  g_19 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(d_19), not_null(g_19));
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
ATerm GuardedLChoice_3 (ATerm t, ATerm z_42 (ATerm), ATerm a_43 (ATerm), ATerm b_43 (ATerm))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym_GuardedLChoice_3))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      t_19 = ATgetArgument(q_19, 2);
      {
        ATerm x_19 = NULL;
        t = not_null(r_19);
        {
          ATerm z_19 = NULL;
          t = z_42(t);
          {
            x_19 = t;
            {
              t = not_null(s_19);
              {
                ATerm b_20 = NULL;
                t = a_43(t);
                {
                  z_19 = t;
                  {
                    t = not_null(t_19);
                    {
                      t = b_43(t);
                      {
                        b_20 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(x_19), not_null(z_19), not_null(b_20));
                      }
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
ATerm LChoice_2 (ATerm t, ATerm x_42 (ATerm), ATerm y_42 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_LChoice_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm q_20 = NULL;
        t = not_null(m_20);
        {
          ATerm s_20 = NULL;
          t = x_42(t);
          {
            q_20 = t;
            {
              t = not_null(n_20);
              {
                t = y_42(t);
                {
                  s_20 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_20), not_null(s_20));
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
ATerm Choice_2 (ATerm t, ATerm v_42 (ATerm), ATerm w_42 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_Choice_2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        ATerm g_21 = NULL;
        t = not_null(c_21);
        {
          ATerm i_21 = NULL;
          t = v_42(t);
          {
            g_21 = t;
            {
              t = not_null(d_21);
              {
                t = w_42(t);
                {
                  i_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_21), not_null(i_21));
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
ATerm Seq_2 (ATerm t, ATerm t_42 (ATerm), ATerm u_42 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym_Seq_2))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      {
        ATerm z_21 = NULL;
        t = not_null(v_21);
        {
          ATerm b_22 = NULL;
          t = t_42(t);
          {
            z_21 = t;
            {
              t = not_null(w_21);
              {
                t = u_42(t);
                {
                  b_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_21), not_null(b_22));
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
ATerm Test_1 (ATerm t, ATerm r_42 (ATerm))
{
  ATerm j_22 = NULL,k_22 = NULL;
  j_22 = t;
  i_22 :
  if(match_cons(j_22, sym_Test_1))
    {
      k_22 = ATgetArgument(j_22, 0);
      {
        ATerm m_22 = NULL;
        t = not_null(k_22);
        {
          t = r_42(t);
          {
            m_22 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(m_22));
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
ATerm Not_1 (ATerm t, ATerm s_42 (ATerm))
{
  ATerm t_22 = NULL,u_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_Not_1))
    {
      u_22 = ATgetArgument(t_22, 0);
      {
        ATerm w_22 = NULL;
        t = not_null(u_22);
        {
          t = s_42(t);
          {
            w_22 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(w_22));
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
  ATerm b_23 = NULL;
  b_23 = t;
  a_23 :
  if(!(match_cons(b_23, sym_Fail_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  c_23 :
  if(!(match_cons(d_23, sym_Id_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm l_4 = t;
  int m_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(m_4);
    }
  else
    {
      t = l_4;
      {
        ATerm n_4 = t;
        int o_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(o_4);
          }
        else
          {
            t = n_4;
            {
              ATerm p_4 = t;
              int q_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(q_4);
                }
              else
                {
                  t = p_4;
                  {
                    ATerm r_4 = t;
                    int s_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(s_4);
                      }
                    else
                      {
                        t = r_4;
                        {
                          ATerm t_4 = t;
                          int u_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(e_5);
                                                          }
                                                        else
                                                          {
                                                            t = d_5;
                                                            {
                                                              ATerm j_5 = t;
                                                              int k_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_0 (ATerm t)
                                                                  {
                                                                    ATerm o_0 (ATerm t)
                                                                    {
                                                                      ATerm l_5 = t;
                                                                      int m_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          LocalPopChoice(m_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = l_5;
                                                                          t = Mod_2(t, is_string_0, is_string_0);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1(t, o_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm n_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, m_0, n_0);
                                                                  LocalPopChoice(k_5);
                                                                }
                                                              else
                                                                {
                                                                  t = j_5;
                                                                  {
                                                                    ATerm n_5 = t;
                                                                    int s_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(s_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_5;
                                                                        {
                                                                          ATerm t_5 = t;
                                                                          int v_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(v_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_5;
                                                                              {
                                                                                ATerm x_5 = t;
                                                                                int y_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm p_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, p_0);
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
                                                                                                  int i_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(i_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_6;
                                                                                                      {
                                                                                                        ATerm j_6 = t;
                                                                                                        int l_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
                                                                                                            LocalPopChoice(l_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_6;
                                                                                                            {
                                                                                                              ATerm n_6 = t;
                                                                                                              int o_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1(t, term_expression_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
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
                                                                                                                              ATerm q_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, q_0, strategy_expression_0);
                                                                                                                              LocalPopChoice(s_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_6;
                                                                                                                              {
                                                                                                                                ATerm w_6 = t;
                                                                                                                                int y_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(y_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = w_6;
                                                                                                                                    {
                                                                                                                                      ATerm z_6 = t;
                                                                                                                                      int a_7 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm r_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, r_0);
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
                                                                                                                                                ATerm s_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm t_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, t_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, s_0, strategy_expression_0);
                                                                                                                                                LocalPopChoice(c_7);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = b_7;
                                                                                                                                                {
                                                                                                                                                  ATerm u_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_d_7;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, u_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_23 = NULL;
  g_23 = t;
  t = SSL_is_string(not_null(g_23));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm p_43 (ATerm), ATerm q_43 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_VarDec_2))
    {
      o_23 = ATgetArgument(n_23, 0);
      p_23 = ATgetArgument(n_23, 1);
      {
        ATerm s_23 = NULL;
        t = not_null(o_23);
        {
          ATerm u_23 = NULL;
          t = p_43(t);
          {
            s_23 = t;
            {
              t = not_null(p_23);
              {
                t = q_43(t);
                {
                  u_23 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_23), not_null(u_23));
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
ATerm Mod_2 (ATerm t, ATerm r_41 (ATerm), ATerm s_41 (ATerm))
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym_Mod_2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        ATerm i_24 = NULL;
        t = not_null(e_24);
        {
          ATerm k_24 = NULL;
          t = r_41(t);
          {
            i_24 = t;
            {
              t = not_null(f_24);
              {
                t = s_41(t);
                {
                  k_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Mod_2, not_null(i_24), not_null(k_24));
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
ATerm SDef_3 (ATerm t, ATerm m_43 (ATerm), ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym_SDef_3))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      x_24 = ATgetArgument(u_24, 2);
      {
        ATerm b_25 = NULL;
        t = not_null(v_24);
        {
          ATerm d_25 = NULL;
          t = m_43(t);
          {
            b_25 = t;
            {
              t = not_null(w_24);
              {
                ATerm f_25 = NULL;
                t = n_43(t);
                {
                  d_25 = t;
                  {
                    t = not_null(x_24);
                    {
                      t = o_43(t);
                      {
                        f_25 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_25), not_null(d_25), not_null(f_25));
                      }
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
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm l_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(n_7);
          }
        else
          {
            t = l_7;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, x_0);
        return(t);
      }
      t = SDef_3(t, v_0, w_0, strategy_expression_0);
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm y_0 (ATerm t)
        {
          t = term_o_7;
          return(t);
        }
        t = debug_1(t, y_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm l_25 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = Cons_2(t, l_59, l_25);
      }
    return(t);
  }
  t = l_25(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm z_41 (ATerm))
{
  ATerm p_25 = NULL,q_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_Strategies_1))
    {
      q_25 = ATgetArgument(p_25, 0);
      {
        ATerm s_25 = NULL;
        t = not_null(q_25);
        {
          t = z_41(t);
          {
            s_25 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_25));
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
ATerm Specification_1 (ATerm t, ATerm b_42 (ATerm))
{
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_Specification_1))
    {
      a_26 = ATgetArgument(z_25, 0);
      {
        ATerm c_26 = NULL;
        t = not_null(a_26);
        {
          t = b_42(t);
          {
            c_26 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(c_26));
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
ATerm stratego_specification_0 (ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, c_1);
            return(t);
          }
          t = Cons_2(t, b_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, a_1);
        return(t);
      }
      t = Specification_1(t, z_0);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm d_1 (ATerm t)
        {
          t = term_w_7;
          return(t);
        }
        t = debug_1(t, d_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_33 (ATerm), ATerm y_33 (ATerm))
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  j_26 :
  if(match_cons(k_26, sym__2))
    {
      l_26 = ATgetArgument(k_26, 0);
      m_26 = ATgetArgument(k_26, 1);
      {
        ATerm p_26 = NULL;
        t = not_null(l_26);
        {
          ATerm r_26 = NULL;
          t = x_33(t);
          {
            p_26 = t;
            {
              t = not_null(m_26);
              {
                t = y_33(t);
                {
                  r_26 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), not_null(r_26));
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
  ATerm y_26 = NULL;
  ATerm y_7;
  y_7 = t;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm z_26 = NULL,a_27 = NULL;
      z_26 = t;
      x_26 :
      if(match_cons(z_26, sym_Program_1))
        {
          a_27 = ATgetArgument(z_26, 0);
          if(((y_26 != NULL) && (y_26 != a_27)))
            _fail(a_27);
          else
            y_26 = a_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_8), not_null(y_26)), term_z_7));
      {
        t = printnl_0(t);
        {
          t = term_b_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATempty, term_c_8));
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
  ATerm h_27 = NULL,i_27 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      ATerm g_8 = t;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm j_27 = NULL;
            j_27 = t;
            c_27 :
            if(!(match_cons(j_27, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, h_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_8;
        }
      return(t);
    }
    t = _2(t, g_1, _id);
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_27 = NULL,l_27 = NULL;
          k_27 = t;
          e_27 :
          if(match_cons(k_27, sym_Runtime_1))
            {
              l_27 = ATgetArgument(k_27, 0);
              if(((i_27 != NULL) && (i_27 != l_27)))
                _fail(l_27);
              else
                i_27 = l_27;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_1);
        return(t);
      }
      t = _2(t, i_1, _id);
      {
        ATerm k_1 (ATerm t)
        {
          ATerm l_1 (ATerm t)
          {
            ATerm m_27 = NULL,n_27 = NULL;
            m_27 = t;
            g_27 :
            if(match_cons(m_27, sym_Program_1))
              {
                n_27 = ATgetArgument(m_27, 0);
                if(((h_27 != NULL) && (h_27 != n_27)))
                  _fail(n_27);
                else
                  h_27 = n_27;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, l_1);
          return(t);
        }
        t = _2(t, k_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), not_null(i_27)), term_i_8), not_null(h_27)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, f_1);
  {
    t = term_k_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      t = SSL_WriteToTextFile(not_null(t_27), not_null(u_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym__2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      t = SSL_WriteToBinaryFile(not_null(b_28), not_null(c_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_28 = NULL;
  ATerm l_8;
  l_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm l_28 = NULL,m_28 = NULL;
            l_28 = t;
            h_28 :
            if(match_cons(l_28, sym_Output_1))
              {
                m_28 = ATgetArgument(l_28, 0);
                if(((k_28 != NULL) && (k_28 != m_28)))
                  _fail(m_28);
                else
                  k_28 = m_28;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_1);
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm n_28 = NULL;
            t = term_p_8;
            {
              n_28 = t;
              if(((k_28 != NULL) && (k_28 != n_28)))
                _fail(n_28);
              else
                k_28 = n_28;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_1, _id);
  }
  t = l_8;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        t = not_null(k_28);
        return(t);
      }
      t = split_2(t, p_1, _id);
      return(t);
    }
    t = _2(t, _id, o_1);
    {
      ATerm q_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm o_28 = NULL;
              o_28 = t;
              j_28 :
              if(!(match_cons(o_28, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_1);
            return(t);
          }
          t = _2(t, q_1, WriteToBinaryFile_0);
          LocalPopChoice(u_8);
        }
      else
        {
          t = q_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_49 (ATerm))
{
  ATerm u_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  ATerm w_8;
  w_8 = t;
  t = dtime_0(t);
  t = w_8;
  {
    t = z_49(t);
    {
      ATerm x_8;
      x_8 = t;
      {
        ATerm v_28 = NULL;
        t = dtime_0(t);
        {
          v_28 = t;
          if(((u_28 != NULL) && (u_28 != v_28)))
            _fail(v_28);
          else
            u_28 = v_28;
        }
      }
      t = x_8;
      {
        w_28 = t;
        t_28 :
        if(match_cons(w_28, sym__2))
          {
            x_28 = ATgetArgument(w_28, 0);
            y_28 = ATgetArgument(w_28, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_28)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_28))), not_null(y_28));
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
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_ReadFromFile(not_null(e_29));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm j_29 = NULL,l_29 = NULL;
  ATerm y_8;
  y_8 = t;
  {
    ATerm k_29 = NULL;
    t = r_52(t);
    {
      k_29 = t;
      if(((j_29 != NULL) && (j_29 != k_29)))
        _fail(k_29);
      else
        j_29 = k_29;
    }
  }
  t = y_8;
  {
    ATerm m_29 = NULL;
    t = s_52(t);
    {
      m_29 = t;
      if(((l_29 != NULL) && (l_29 != m_29)))
        _fail(m_29);
      else
        l_29 = m_29;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(l_29));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm s_29 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm a_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 (ATerm t)
        {
          ATerm t_29 = NULL,u_29 = NULL;
          t_29 = t;
          q_29 :
          if(match_cons(t_29, sym_Input_1))
            {
              u_29 = ATgetArgument(t_29, 0);
              if(((s_29 != NULL) && (s_29 != u_29)))
                _fail(u_29);
              else
                s_29 = u_29;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, s_1);
        LocalPopChoice(e_9);
      }
    else
      {
        t = a_9;
        {
          ATerm v_29 = NULL;
          t = term_g_9;
          {
            v_29 = t;
            if(((s_29 != NULL) && (s_29 != v_29)))
              _fail(v_29);
            else
              s_29 = v_29;
          }
        }
      }
  }
  t = z_8;
  {
    ATerm t_1 (ATerm t)
    {
      t = not_null(s_29);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  y_29 :
  if(!(match_cons(z_29, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_49 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          ATerm l_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(m_9);
            }
          else
            {
              t = l_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, u_1);
  t = y_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  t = SSL_table_create(not_null(b_30));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  {
    ATerm n_9;
    n_9 = t;
    {
      t = term_o_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_9, term_t_9, not_null(f_30));
          t = table_put_0(t);
        }
      }
    }
    t = n_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  n_30 = t;
  l_30 :
  if(match_string(n_30, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(n_30) == AT_LIST) && ((ATermList) n_30 != ATempty)))
        {
          o_30 = ATgetFirst((ATermList) n_30);
          p_30 = (ATerm) ATgetNext((ATermList) n_30);
          m_30 :
          if(((ATgetType(p_30) == AT_LIST) && ((ATermList) p_30 != ATempty)))
            {
              q_30 = ATgetFirst((ATermList) p_30);
              r_30 = (ATerm) ATgetNext((ATermList) p_30);
              {
                ATerm v_30 = NULL;
                ATerm u_9;
                u_9 = t;
                {
                  t = not_null(o_30);
                  t = i_0(t);
                }
                t = u_9;
                {
                  ATerm w_30 = NULL;
                  t = not_null(q_30);
                  {
                    t = j_0(t);
                    {
                      w_30 = t;
                      if(((v_30 != NULL) && (v_30 != w_30)))
                        _fail(w_30);
                      else
                        v_30 = w_30;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_30)), not_null(v_30));
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
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        ATerm l_31 = NULL;
        l_31 = t;
        a_31 :
        if(!(match_string(l_31, "-S")))
          {
            if(!(match_string(l_31, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      ATerm x_1 (ATerm t)
      {
        t = term_a_10;
        return(t);
      }
      t = Option_3(t, v_1, w_1, x_1);
      LocalPopChoice(y_9);
    }
  else
    {
      t = w_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 (ATerm t)
            {
              ATerm m_31 = NULL;
              m_31 = t;
              b_31 :
              if(!(match_string(m_31, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_d_10;
              return(t);
            }
            ATerm a_2 (ATerm t)
            {
              t = term_h_10;
              return(t);
            }
            t = Option_3(t, y_1, z_1, a_2);
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_2 (ATerm t)
                  {
                    ATerm n_31 = NULL;
                    n_31 = t;
                    c_31 :
                    if(!(match_string(n_31, "-v")))
                      {
                        if(!(match_string(n_31, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_2 (ATerm t)
                  {
                    t = term_l_10;
                    return(t);
                  }
                  ATerm d_2 (ATerm t)
                  {
                    t = term_m_10;
                    return(t);
                  }
                  t = Option_3(t, b_2, c_2, d_2);
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
                  {
                    ATerm n_10 = t;
                    int o_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_2 (ATerm t)
                        {
                          ATerm o_31 = NULL;
                          o_31 = t;
                          d_31 :
                          if(!(match_string(o_31, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_2 (ATerm t)
                        {
                          ATerm p_31 = NULL;
                          ATerm q_31 = NULL;
                          q_31 = t;
                          if(((p_31 != NULL) && (p_31 != q_31)))
                            _fail(q_31);
                          else
                            p_31 = q_31;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(p_31));
                          return(t);
                        }
                        ATerm g_2 (ATerm t)
                        {
                          t = term_t_10;
                          return(t);
                        }
                        t = ArgOption_3(t, e_2, f_2, g_2);
                        LocalPopChoice(o_10);
                      }
                    else
                      {
                        t = n_10;
                        {
                          ATerm u_10 = t;
                          int w_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_2 (ATerm t)
                              {
                                ATerm r_31 = NULL;
                                r_31 = t;
                                f_31 :
                                if(!(match_string(r_31, "-i")))
                                  {
                                    if(!(match_string(r_31, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_2 (ATerm t)
                              {
                                ATerm s_31 = NULL;
                                ATerm t_31 = NULL;
                                t_31 = t;
                                if(((s_31 != NULL) && (s_31 != t_31)))
                                  _fail(t_31);
                                else
                                  s_31 = t_31;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_31));
                                return(t);
                              }
                              ATerm j_2 (ATerm t)
                              {
                                t = term_y_10;
                                return(t);
                              }
                              t = ArgOption_3(t, h_2, i_2, j_2);
                              LocalPopChoice(w_10);
                            }
                          else
                            {
                              t = u_10;
                              {
                                ATerm z_10 = t;
                                int a_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_2 (ATerm t)
                                    {
                                      ATerm u_31 = NULL;
                                      u_31 = t;
                                      h_31 :
                                      if(!(match_string(u_31, "-o")))
                                        {
                                          if(!(match_string(u_31, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm l_2 (ATerm t)
                                    {
                                      ATerm v_31 = NULL;
                                      ATerm w_31 = NULL;
                                      w_31 = t;
                                      if(((v_31 != NULL) && (v_31 != w_31)))
                                        _fail(w_31);
                                      else
                                        v_31 = w_31;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_31));
                                      return(t);
                                    }
                                    ATerm m_2 (ATerm t)
                                    {
                                      t = term_b_11;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, k_2, l_2, m_2);
                                    LocalPopChoice(a_11);
                                  }
                                else
                                  {
                                    t = z_10;
                                    {
                                      ATerm c_11 = t;
                                      int d_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm n_2 (ATerm t)
                                          {
                                            ATerm x_31 = NULL;
                                            x_31 = t;
                                            j_31 :
                                            if(!(match_string(x_31, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm o_2 (ATerm t)
                                          {
                                            t = term_h_11;
                                            return(t);
                                          }
                                          ATerm p_2 (ATerm t)
                                          {
                                            t = term_j_11;
                                            return(t);
                                          }
                                          t = Option_3(t, n_2, o_2, p_2);
                                          LocalPopChoice(d_11);
                                        }
                                      else
                                        {
                                          t = c_11;
                                          {
                                            ATerm q_2 (ATerm t)
                                            {
                                              ATerm y_31 = NULL;
                                              y_31 = t;
                                              k_31 :
                                              if(!(match_string(y_31, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm r_2 (ATerm t)
                                            {
                                              t = term_k_11;
                                              return(t);
                                            }
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = term_l_11;
                                              return(t);
                                            }
                                            t = Option_3(t, q_2, r_2, s_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm d_32 = NULL;
  d_32 = t;
  t = SSL_table_destroy(not_null(d_32));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  t = SSL_exit(not_null(h_32));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  t = SSL_implode_string(not_null(l_32));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_59 (ATerm))
{
  ATerm o_32 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_32);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          t = Nil_0(t);
          t = x_59(t);
        }
      }
    return(t);
  }
  t = o_32(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = r_11;
      {
        ATerm r_32 = NULL,v_32 = NULL,w_32 = NULL;
        r_32 = t;
        q_32 :
        if(((ATgetType(r_32) == AT_LIST) && ((ATermList) r_32 != ATempty)))
          {
            v_32 = ATgetFirst((ATermList) r_32);
            w_32 = (ATerm) ATgetNext((ATermList) r_32);
            {
              t = not_null(v_32);
              {
                ATerm t_2 (ATerm t)
                {
                  t = not_null(w_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_2);
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
  ATerm e_33 = NULL;
  e_33 = t;
  t = SSL_explode_string(not_null(e_33));
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
ATerm long_description_1 (ATerm t, ATerm f_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm h_33 (ATerm t)
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = Cons_2(t, j_59, h_33);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  q_33 = t;
  n_33 :
  if(((ATgetType(q_33) == AT_LIST) && ((ATermList) q_33 != ATempty)))
    {
      o_33 = ATgetFirst((ATermList) q_33);
      p_33 = (ATerm) ATgetNext((ATermList) q_33);
      {
        ATerm t_33 = NULL;
        t = not_null(p_33);
        {
          ATerm w_11;
          w_11 = t;
          {
            ATerm u_33 = NULL,w_33 = NULL,a_34 = NULL;
            ATerm x_11;
            x_11 = t;
            {
              ATerm v_33 = NULL;
              t = h_0(t);
              {
                v_33 = t;
                if(((u_33 != NULL) && (u_33 != v_33)))
                  _fail(v_33);
                else
                  u_33 = v_33;
              }
            }
            t = x_11;
            {
              ATerm z_33 = NULL;
              t = not_null(o_33);
              {
                t = g_0(t);
                {
                  z_33 = t;
                  if(((w_33 != NULL) && (w_33 != z_33)))
                    _fail(z_33);
                  else
                    w_33 = z_33;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_33)), not_null(w_33));
                {
                  a_34 = t;
                  if(((t_33 != NULL) && (t_33 != a_34)))
                    _fail(a_34);
                  else
                    t_33 = a_34;
                }
              }
            }
          }
          t = w_11;
          {
            ATerm u_2 (ATerm t)
            {
              t = not_null(t_33);
              return(t);
            }
            t = reverse_acc_2(t, g_0, u_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_33 == ATempty))
        {
          {
            t = term_b_12;
            t = h_0(t);
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
  ATerm v_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_35 (ATerm))
{
  ATerm j_34 = NULL,k_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_Program_1))
    {
      k_34 = ATgetArgument(j_34, 0);
      {
        ATerm m_34 = NULL;
        t = not_null(k_34);
        {
          t = g_35(t);
          {
            m_34 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_34));
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
  ATerm u_34 = NULL;
  ATerm w_2 (ATerm t)
  {
    ATerm x_2 (ATerm t)
    {
      ATerm v_34 = NULL;
      v_34 = t;
      if(((u_34 != NULL) && (u_34 != v_34)))
        _fail(v_34);
      else
        u_34 = v_34;
      return(t);
    }
    t = Program_1(t, x_2);
    return(t);
  }
  t = option_defined_1(t, w_2);
  {
    ATerm y_2 (ATerm t)
    {
      ATerm w_34 = NULL;
      ATerm x_34 = NULL;
      t = term_b_12;
      {
        ATerm z_2 (ATerm t)
        {
          t = not_null(u_34);
          return(t);
        }
        t = short_description_1(t, z_2);
        {
          t = concat_strings_0(t);
          {
            x_34 = t;
            if(((w_34 != NULL) && (w_34 != x_34)))
              _fail(x_34);
            else
              w_34 = x_34;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATempty, not_null(w_34)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATempty, term_d_12));
      {
        t = printnl_0(t);
        {
          t = term_g_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_3 (ATerm t)
                {
                  ATerm y_34 = NULL;
                  y_34 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_34)), term_h_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_3);
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm a_35 = NULL;
                    ATerm b_35 = NULL;
                    t = term_b_12;
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = not_null(u_34);
                        return(t);
                      }
                      t = long_description_1(t, c_3);
                      {
                        t = concat_strings_0(t);
                        {
                          b_35 = t;
                          if(((a_35 != NULL) && (a_35 != b_35)))
                            _fail(b_35);
                          else
                            a_35 = b_35;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_35)), term_l_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_3);
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
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
  k_35 = t;
  j_35 :
  if(match_cons(k_35, sym__2))
    {
      l_35 = ATgetArgument(k_35, 0);
      m_35 = ATgetArgument(k_35, 1);
      {
        ATerm n_12;
        n_12 = t;
        t = SSL_printnl(not_null(l_35), not_null(m_35));
        t = n_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm h_35 (ATerm))
{
  ATerm t_35 = NULL,u_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym_Undefined_1))
    {
      u_35 = ATgetArgument(t_35, 0);
      {
        ATerm w_35 = NULL;
        t = not_null(u_35);
        {
          t = h_35(t);
          {
            w_35 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_35));
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
ATerm fetch_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm a_36 (ATerm t)
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_59, _id);
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = Cons_2(t, _id, a_36);
      }
    return(t);
  }
  t = a_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_49 (ATerm))
{
  t = fetch_1(t, d_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  b_36 :
  if(!(match_cons(c_36, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_66(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym__2))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      t = SSL_table_get(not_null(g_36), not_null(h_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym__3))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      r_36 = ATgetArgument(o_36, 2);
      {
        ATerm s_12;
        s_12 = t;
        {
          ATerm v_36 = NULL;
          ATerm w_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(q_36));
          {
            ATerm t_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_12);
              }
            else
              {
                t = t_12;
                t = (ATerm) ATempty;
              }
            {
              w_36 = t;
              if(((v_36 != NULL) && (v_36 != w_36)))
                _fail(w_36);
              else
                v_36 = w_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_36), not_null(q_36), (ATerm) ATinsert(CheckATermList(not_null(v_36)), not_null(r_36)));
            t = table_put_0(t);
          }
        }
        t = s_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_48 (ATerm))
{
  ATerm a_37 = NULL;
  ATerm b_37 = NULL;
  t = term_b_12;
  {
    t = j_48(t);
    {
      b_37 = t;
      if(((a_37 != NULL) && (a_37 != b_37)))
        _fail(b_37);
      else
        a_37 = b_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_12, term_f_12, not_null(a_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_string(h_37, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(h_37) == AT_LIST) && ((ATermList) h_37 != ATempty)))
        {
          i_37 = ATgetFirst((ATermList) h_37);
          j_37 = (ATerm) ATgetNext((ATermList) h_37);
          {
            ATerm m_37 = NULL;
            ATerm z_12;
            z_12 = t;
            {
              t = not_null(i_37);
              t = b_0(t);
            }
            t = z_12;
            {
              ATerm n_37 = NULL;
              t = term_b_12;
              {
                t = c_0(t);
                {
                  n_37 = t;
                  if(((m_37 != NULL) && (m_37 != n_37)))
                    _fail(n_37);
                  else
                    m_37 = n_37;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_37)), not_null(m_37));
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
  ATerm d_3 (ATerm t)
  {
    ATerm s_37 = NULL;
    s_37 = t;
    r_37 :
    if(!(match_string(s_37, "--help")))
      {
        if(!(match_string(s_37, "-h")))
          {
            if(!(match_string(s_37, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_a_13;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_c_13;
    return(t);
  }
  t = Option_3(t, d_3, e_3, f_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  u_37 :
  if(((ATgetType(v_37) == AT_LIST) && ((ATermList) v_37 != ATempty)))
    {
      w_37 = ATgetFirst((ATermList) v_37);
      x_37 = (ATerm) ATgetNext((ATermList) v_37);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_37)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_37)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  e_38 :
  if(((ATgetType(f_38) == AT_LIST) && ((ATermList) f_38 != ATempty)))
    {
      g_38 = ATgetFirst((ATermList) f_38);
      h_38 = (ATerm) ATgetNext((ATermList) f_38);
      {
        ATerm k_38 = NULL;
        t = not_null(g_38);
        {
          ATerm m_38 = NULL;
          t = r_44(t);
          {
            k_38 = t;
            {
              t = not_null(h_38);
              {
                t = s_44(t);
                {
                  m_38 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_38)), not_null(k_38));
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
  ATerm s_38 = NULL;
  s_38 = t;
  r_38 :
  if(((ATermList) s_38 == ATempty))
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
ATerm parse_options_p__1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm d_13;
  d_13 = t;
  {
    ATerm g_3 (ATerm t)
    {
      t = term_e_13;
      t = h_48(t);
      return(t);
    }
    t = try_1(t, g_3);
  }
  t = d_13;
  {
    ATerm h_3 (ATerm t)
    {
      ATerm u_38 = NULL;
      u_38 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_38));
      return(t);
    }
    ATerm i_3 (ATerm t)
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              {
                t = h_48(t);
                t = Cons_2(t, _id, i_3);
              }
            }
          LocalPopChoice(g_13);
        }
      else
        {
          t = f_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_3, i_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  ATerm m_13;
  m_13 = t;
  {
    ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
    d_39 = t;
    z_38 :
    if(match_cons(d_39, sym__3))
      {
        e_39 = ATgetArgument(d_39, 0);
        f_39 = ATgetArgument(d_39, 1);
        g_39 = ATgetArgument(d_39, 2);
        {
          if(((a_39 != NULL) && (a_39 != e_39)))
            _fail(e_39);
          else
            a_39 = e_39;
          {
            if(((b_39 != NULL) && (b_39 != f_39)))
              _fail(f_39);
            else
              b_39 = f_39;
            {
              if(((c_39 != NULL) && (c_39 != g_39)))
                _fail(g_39);
              else
                c_39 = g_39;
              t = SSL_table_put(not_null(a_39), not_null(b_39), not_null(c_39));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_48 (ATerm))
{
  ATerm j_39 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    t = term_p_13;
    t = table_put_0(t);
  }
  t = o_13;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_48(t);
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_3);
    {
      ATerm k_3 (ATerm t)
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_k_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm l_3 (ATerm t)
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm k_39 = NULL;
                  k_39 = t;
                  if(((j_39 != NULL) && (j_39 != k_39)))
                    _fail(k_39);
                  else
                    j_39 = k_39;
                  return(t);
                }
                t = Undefined_1(t, m_3);
                return(t);
              }
              t = option_defined_1(t, l_3);
              {
                ATerm y_13;
                y_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_39)), term_z_13));
                  t = printnl_0(t);
                }
                t = y_13;
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
      t = try_1(t, k_3);
      {
        ATerm a_14;
        a_14 = t;
        {
          t = term_e_12;
          t = table_destroy_0(t);
        }
        t = a_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_49 (ATerm), ATerm o_49 (ATerm), ATerm p_49 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_49(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_3);
  {
    t = store_options_0(t);
    {
      ATerm d_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, p_49);
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
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, n_49);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  t = iowrap_3(t, i_49, j_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_49 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    t = _2(t, _id, f_49);
    return(t);
  }
  t = iowrap_2(t, o_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
