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
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_CUT_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_z_15;
ATerm term_t_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_x_10;
ATerm term_m_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
void init_constant_terms (void)
{
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__3, term_e_14, term_g_14, (ATerm) ATempty);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm m_68 (ATerm));
ATerm Rec_2 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm SDef_3 (ATerm, ATerm t_44 (ATerm), ATerm u_44 (ATerm), ATerm v_44 (ATerm));
ATerm Let_2 (ATerm, ATerm r_44 (ATerm), ATerm s_44 (ATerm));
ATerm sboundin_3 (ATerm, ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm o_44 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm i_68 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm f_43 (ATerm));
ATerm Scope_2 (ATerm, ATerm t_45 (ATerm), ATerm u_45 (ATerm));
ATerm tboundin_3 (ATerm, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm));
ATerm crush_3 (ATerm, ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm for_3 (ATerm, ATerm w_51 (ATerm), ATerm x_51 (ATerm), ATerm y_51 (ATerm));
ATerm HdMember_1 (ATerm, ATerm i_57 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm e_53 (ATerm), ATerm f_53 (ATerm), ATerm g_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm s_43 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm s_61 (ATerm), ATerm t_61 (ATerm));
ATerm zip_1 (ATerm, ATerm v_61 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm r_54 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm z_53 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm e_54 (ATerm));
ATerm rename_4 (ATerm, ATerm f_55 (ATerm, ATerm (ATerm)), ATerm g_55 (ATerm), ATerm h_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_55 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm e_35 (ATerm), ATerm f_35 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_51 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_50 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_47 (ATerm));
ATerm map_1 (ATerm, ATerm v_59 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_47 (ATerm));
ATerm Program_1 (ATerm, ATerm w_40 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_40 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_48 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_63 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_48 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_45 (ATerm), ATerm z_45 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_50 (ATerm), ATerm p_50 (ATerm), ATerm q_50 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_50 (ATerm), ATerm k_50 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_50 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL;
  w_1 = t;
  v_1 :
  if(((ATgetType(w_1) == AT_LIST) && ((ATermList) w_1 != ATempty)))
    {
      x_1 = ATgetFirst((ATermList) w_1);
      y_1 = (ATerm) ATgetNext((ATermList) w_1);
      t = not_null(x_1);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, m_68);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
            i_2 = t;
            d_2 :
            if(match_cons(i_2, sym__2))
              {
                j_2 = ATgetArgument(i_2, 0);
                n_2 = ATgetArgument(i_2, 1);
                e_2 :
                if(match_cons(j_2, sym_SDef_3))
                  {
                    k_2 = ATgetArgument(j_2, 0);
                    l_2 = ATgetArgument(j_2, 1);
                    m_2 = ATgetArgument(j_2, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_2), not_null(l_2), not_null(m_2));
                  }
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
          t = zip_1(t, d_0);
        }
        return(t);
      }
      t = Let_2(t, a_0, _id);
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      {
        ATerm v_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, m_68);
              {
                ATerm l_0 (ATerm t)
                {
                  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
                  r_2 = t;
                  g_2 :
                  if(match_cons(r_2, sym__2))
                    {
                      s_2 = ATgetArgument(r_2, 0);
                      v_2 = ATgetArgument(r_2, 1);
                      h_2 :
                      if(match_cons(s_2, sym_VarDec_2))
                        {
                          t_2 = ATgetArgument(s_2, 0);
                          u_2 = ATgetArgument(s_2, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_2), not_null(u_2));
                        }
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
                t = zip_1(t, l_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(z_5);
          }
        else
          {
            t = v_5;
            {
              ATerm m_0 (ATerm t)
              {
                t = m_68(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, m_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  e_3 :
  if(match_cons(f_3, sym_Rec_2))
    {
      g_3 = ATgetArgument(f_3, 0);
      h_3 = ATgetArgument(f_3, 1);
      {
        ATerm k_3 = NULL;
        t = not_null(g_3);
        {
          ATerm m_3 = NULL;
          t = p_44(t);
          {
            k_3 = t;
            {
              t = not_null(h_3);
              {
                t = q_44(t);
                {
                  m_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(k_3), not_null(m_3));
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
ATerm SDef_3 (ATerm t, ATerm t_44 (ATerm), ATerm u_44 (ATerm), ATerm v_44 (ATerm))
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  w_3 = t;
  v_3 :
  if(match_cons(w_3, sym_SDef_3))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      z_3 = ATgetArgument(w_3, 2);
      {
        ATerm d_4 = NULL;
        t = not_null(x_3);
        {
          ATerm f_4 = NULL;
          t = t_44(t);
          {
            d_4 = t;
            {
              t = not_null(y_3);
              {
                ATerm h_4 = NULL;
                t = u_44(t);
                {
                  f_4 = t;
                  {
                    t = not_null(z_3);
                    {
                      t = v_44(t);
                      {
                        h_4 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_4), not_null(f_4), not_null(h_4));
                      }
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
ATerm Let_2 (ATerm t, ATerm r_44 (ATerm), ATerm s_44 (ATerm))
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym_Let_2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        ATerm w_4 = NULL;
        t = not_null(s_4);
        {
          ATerm y_4 = NULL;
          t = r_44(t);
          {
            w_4 = t;
            {
              t = not_null(t_4);
              {
                t = s_44(t);
                {
                  y_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(w_4), not_null(y_4));
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
ATerm sboundin_3 (ATerm t, ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm p_68 (ATerm))
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, n_68, n_68);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm c_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, p_68, p_68, n_68);
            LocalPopChoice(d_6);
          }
        else
          {
            t = c_6;
            t = Rec_2(t, p_68, n_68);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Rec_2))
    {
      g_5 = ATgetArgument(f_5, 0);
      h_5 = ATgetArgument(f_5, 1);
      t = (ATerm) ATinsert(ATempty, not_null(g_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_SDef_3))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      s_5 = ATgetArgument(p_5, 2);
      {
        t = not_null(r_5);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
            w_5 = t;
            n_5 :
            if(match_cons(w_5, sym_VarDec_2))
              {
                x_5 = ATgetArgument(w_5, 0);
                y_5 = ATgetArgument(w_5, 1);
                t = not_null(x_5);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_0);
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
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_Let_2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      {
        t = not_null(h_6);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
            l_6 = t;
            e_6 :
            if(match_cons(l_6, sym_SDef_3))
              {
                m_6 = ATgetArgument(l_6, 0);
                n_6 = ATgetArgument(l_6, 1);
                o_6 = ATgetArgument(l_6, 2);
                t = not_null(m_6);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm o_44 (ATerm))
{
  ATerm x_6 = NULL,y_6 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym_SVar_1))
    {
      y_6 = ATgetArgument(x_6, 0);
      {
        ATerm a_7 = NULL;
        t = not_null(y_6);
        {
          t = o_44(t);
          {
            a_7 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(a_7));
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
  ATerm p_0 (ATerm t)
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        {
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, p_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm i_68 (ATerm))
{
  t = Scope_2(t, i_68, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm f_43 (ATerm))
{
  ATerm h_7 = NULL,i_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym_DynamicRules_1))
    {
      i_7 = ATgetArgument(h_7, 0);
      {
        ATerm k_7 = NULL;
        t = not_null(i_7);
        {
          t = f_43(t);
          {
            k_7 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(k_7));
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
ATerm Scope_2 (ATerm t, ATerm t_45 (ATerm), ATerm u_45 (ATerm))
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Scope_2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      {
        ATerm x_7 = NULL;
        t = not_null(t_7);
        {
          ATerm z_7 = NULL;
          t = t_45(t);
          {
            x_7 = t;
            {
              t = not_null(u_7);
              {
                t = u_45(t);
                {
                  z_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_7), not_null(z_7));
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
ATerm tboundin_3 (ATerm t, ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm l_68 (ATerm))
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, l_68, j_68);
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
      t = DynamicRules_1(t, j_68);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_DynamicRules_1))
    {
      h_8 = ATgetArgument(g_8, 0);
      {
        t = not_null(h_8);
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
  ATerm m_8 = NULL,n_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym_Var_1))
    {
      n_8 = ATgetArgument(m_8, 0);
      t = (ATerm) ATinsert(ATempty, not_null(n_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  r_8 :
  if(match_cons(s_8, sym__2))
    {
      t_8 = ATgetArgument(s_8, 0);
      u_8 = ATgetArgument(s_8, 1);
      {
        t = not_null(t_8);
        {
          ATerm y_8 (ATerm t)
          {
            ATerm t_6 = t;
            int u_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(u_8);
                LocalPopChoice(u_6);
              }
            else
              {
                t = t_6;
                {
                  ATerm v_6 = t;
                  int z_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(u_8);
                        return(t);
                      }
                      t = HdMember_1(t, q_0);
                      t = y_8(t);
                      LocalPopChoice(z_6);
                    }
                  else
                    {
                      t = v_6;
                      t = Cons_2(t, _id, y_8);
                    }
                }
              }
            return(t);
          }
          t = y_8(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm), ATerm i_56 (ATerm))
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_56(t);
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      {
        ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
        d_9 = t;
        c_9 :
        if(((ATgetType(d_9) == AT_LIST) && ((ATermList) d_9 != ATempty)))
          {
            e_9 = ATgetFirst((ATermList) d_9);
            f_9 = (ATerm) ATgetNext((ATermList) d_9);
            {
              ATerm i_9 = NULL,k_9 = NULL;
              ATerm d_7;
              d_7 = t;
              {
                ATerm j_9 = NULL;
                t = not_null(e_9);
                {
                  t = i_56(t);
                  {
                    j_9 = t;
                    if(((i_9 != NULL) && (i_9 != j_9)))
                      _fail(j_9);
                    else
                      i_9 = j_9;
                  }
                }
              }
              t = d_7;
              {
                ATerm l_9 = NULL;
                t = not_null(f_9);
                {
                  t = foldr_3(t, g_56, h_56, i_56);
                  {
                    l_9 = t;
                    if(((k_9 != NULL) && (k_9 != l_9)))
                      _fail(l_9);
                    else
                      k_9 = l_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(k_9));
                  t = h_56(t);
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
ATerm crush_3 (ATerm t, ATerm t_57 (ATerm), ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm t_9 = NULL;
  ATerm v_9 = NULL;
  t_9 = t;
  {
    ATerm w_9 = NULL;
    ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
    t = not_null(t_9);
    {
      w_9 = t;
      {
        t = SSL_explode_term(not_null(w_9));
        {
          y_9 = t;
          s_9 :
          if(match_cons(y_9, sym__2))
            {
              z_9 = ATgetArgument(y_9, 0);
              a_10 = ATgetArgument(y_9, 1);
              if(((v_9 != NULL) && (v_9 != a_10)))
                _fail(a_10);
              else
                v_9 = a_10;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_9);
      t = foldr_3(t, t_57, u_57, v_57);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  h_10 = t;
  f_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      g_10 :
      if(((ATgetType(j_10) == AT_LIST) && ((ATermList) j_10 != ATempty)))
        {
          k_10 = ATgetFirst((ATermList) j_10);
          l_10 = (ATerm) ATgetNext((ATermList) j_10);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_10)), not_null(k_10)), not_null(l_10));
        }
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
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
  a_11 = t;
  y_10 :
  if(((ATgetType(a_11) == AT_LIST) && ((ATermList) a_11 != ATempty)))
    {
      b_11 = ATgetFirst((ATermList) a_11);
      e_11 = (ATerm) ATgetNext((ATermList) a_11);
      z_10 :
      if(match_cons(b_11, sym__2))
        {
          c_11 = ATgetArgument(b_11, 0);
          d_11 = ATgetArgument(b_11, 1);
          {
            ATerm s_11 = NULL,t_11 = NULL,z_11 = NULL,f_12 = NULL;
            ATerm e_7;
            e_7 = t;
            {
              ATerm u_11 = NULL;
              ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
              t = not_null(d_11);
              {
                u_11 = t;
                {
                  t = SSL_explode_term(not_null(u_11));
                  {
                    w_11 = t;
                    t_10 :
                    if(match_cons(w_11, sym__2))
                      {
                        x_11 = ATgetArgument(w_11, 0);
                        y_11 = ATgetArgument(w_11, 1);
                        {
                          if(((s_11 != NULL) && (s_11 != x_11)))
                            _fail(x_11);
                          else
                            s_11 = x_11;
                          if(((t_11 != NULL) && (t_11 != y_11)))
                            _fail(y_11);
                          else
                            t_11 = y_11;
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
            t = e_7;
            {
              ATerm f_7;
              f_7 = t;
              {
                ATerm a_12 = NULL;
                ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
                t = not_null(c_11);
                {
                  a_12 = t;
                  {
                    t = SSL_explode_term(not_null(a_12));
                    {
                      c_12 = t;
                      w_10 :
                      if(match_cons(c_12, sym__2))
                        {
                          d_12 = ATgetArgument(c_12, 0);
                          e_12 = ATgetArgument(c_12, 1);
                          {
                            if(((s_11 != NULL) && (s_11 != d_12)))
                              _fail(d_12);
                            else
                              s_11 = d_12;
                            if(((z_11 != NULL) && (z_11 != e_12)))
                              _fail(e_12);
                            else
                              z_11 = e_12;
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
              t = f_7;
              {
                ATerm g_12 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), not_null(t_11));
                {
                  t = zip_1(t, _id);
                  {
                    g_12 = t;
                    if(((f_12 != NULL) && (f_12 != g_12)))
                      _fail(g_12);
                    else
                      f_12 = g_12;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), not_null(e_11));
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
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  x_12 = t;
  v_12 :
  if(((ATgetType(x_12) == AT_LIST) && ((ATermList) x_12 != ATempty)))
    {
      y_12 = ATgetFirst((ATermList) x_12);
      b_13 = (ATerm) ATgetNext((ATermList) x_12);
      w_12 :
      if(match_cons(y_12, sym__2))
        {
          z_12 = ATgetArgument(y_12, 0);
          a_13 = ATgetArgument(y_12, 1);
          {
            ATerm d_13 = NULL;
            if(((z_12 != NULL) && (z_12 != a_13)))
              _fail(a_13);
            else
              z_12 = a_13;
            {
              if(((d_13 != NULL) && (d_13 != b_13)))
                _fail(b_13);
              else
                d_13 = b_13;
              t = not_null(d_13);
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
ATerm while_not_2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
{
  ATerm i_13 (ATerm t)
  {
    ATerm j_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_51(t);
        LocalPopChoice(l_7);
      }
    else
      {
        t = j_7;
        {
          t = u_51(t);
          t = i_13(t);
        }
      }
    return(t);
  }
  t = i_13(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm w_51 (ATerm), ATerm x_51 (ATerm), ATerm y_51 (ATerm))
{
  t = w_51(t);
  t = while_not_2(t, x_51, y_51);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm i_57 (ATerm))
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(((ATgetType(m_13) == AT_LIST) && ((ATermList) m_13 != ATempty)))
    {
      n_13 = ATgetFirst((ATermList) m_13);
      o_13 = (ATerm) ATgetNext((ATermList) m_13);
      {
        t = i_57(t);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm r_13 = NULL;
            r_13 = t;
            if(((n_13 != NULL) && (n_13 != r_13)))
              _fail(r_13);
            else
              n_13 = r_13;
            return(t);
          }
          t = fetch_1(t, r_0);
        }
        t = not_null(o_13);
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
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
      x_13 = t;
      v_13 :
      if(match_cons(x_13, sym__2))
        {
          y_13 = ATgetArgument(x_13, 0);
          z_13 = ATgetArgument(x_13, 1);
          {
            t = not_null(y_13);
            {
              ATerm f_14 (ATerm t)
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
                    {
                      ATerm q_7 = t;
                      int v_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_0 (ATerm t)
                          {
                            t = not_null(z_13);
                            return(t);
                          }
                          t = HdMember_1(t, s_0);
                          t = f_14(t);
                          LocalPopChoice(v_7);
                        }
                      else
                        {
                          t = q_7;
                          t = Cons_2(t, _id, f_14);
                        }
                    }
                  }
                return(t);
              }
              t = f_14(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm t_0 (ATerm t)
        {
          ATerm c_14 = NULL;
          c_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_14));
          return(t);
        }
        ATerm u_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          ATerm w_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 (ATerm t)
              {
                ATerm a_8 = t;
                int b_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(b_8);
                  }
                else
                  {
                    t = a_8;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, w_0);
              LocalPopChoice(y_7);
            }
          else
            {
              t = w_7;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, t_0, u_0, v_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm e_53 (ATerm), ATerm f_53 (ATerm), ATerm g_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_14 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_53(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        {
          ATerm e_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_14 = NULL;
              ATerm j_8;
              j_8 = t;
              {
                ATerm j_14 = NULL;
                t = f_53(t);
                {
                  j_14 = t;
                  if(((i_14 != NULL) && (i_14 != j_14)))
                    _fail(j_14);
                  else
                    i_14 = j_14;
                }
              }
              t = j_8;
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = not_null(i_14);
                    return(t);
                  }
                  t = split_2(t, k_14, z_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = g_53(t, x_0, k_14, y_0);
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, a_1, union_0, _id);
                }
              }
              LocalPopChoice(i_8);
            }
          else
            {
              t = e_8;
              {
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, b_1, union_0, k_14);
              }
            }
        }
      }
    return(t);
  }
  t = k_14(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm k_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(o_8);
      }
    else
      {
        t = k_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, c_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  t_14 = t;
  o_14 :
  if(match_cons(t_14, sym_LRule_1))
    {
      u_14 = ATgetArgument(t_14, 0);
      p_14 :
      if(match_cons(u_14, sym_Rule_3))
        {
          q_14 = ATgetArgument(u_14, 0);
          r_14 = ATgetArgument(u_14, 1);
          s_14 = ATgetArgument(u_14, 2);
          {
            t = not_null(q_14);
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
      if(match_cons(t_14, sym_Scope_2))
        {
          u_14 = ATgetArgument(t_14, 0);
          v_14 = ATgetArgument(t_14, 1);
          t = not_null(u_14);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_43 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_Var_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm j_15 = NULL;
        t = not_null(h_15);
        {
          t = s_43(t);
          {
            j_15 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_15));
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
ATerm DistBinding_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  a_16 = t;
  q_15 :
  if(match_cons(a_16, sym__3))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      d_16 = ATgetArgument(a_16, 2);
      {
        t = not_null(b_16);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm k_16 = NULL;
            k_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), not_null(d_16));
              t = x_54(t);
            }
            return(t);
          }
          ATerm e_1 (ATerm t)
          {
            ATerm m_16 = NULL;
            m_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(c_16));
              t = x_54(t);
            }
            return(t);
          }
          t = y_54(t, d_1, e_1, _id);
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
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym__2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      {
        t = not_null(u_16);
        {
          ATerm f_1 (ATerm t)
          {
            t = not_null(v_16);
            return(t);
          }
          t = at_end_1(t, f_1);
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
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  a_17 :
  if(match_cons(b_17, sym__2))
    {
      c_17 = ATgetArgument(b_17, 0);
      d_17 = ATgetArgument(b_17, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_17)), not_null(c_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  l_17 = t;
  i_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      p_17 = ATgetArgument(l_17, 1);
      j_17 :
      if(((ATgetType(m_17) == AT_LIST) && ((ATermList) m_17 != ATempty)))
        {
          n_17 = ATgetFirst((ATermList) m_17);
          o_17 = (ATerm) ATgetNext((ATermList) m_17);
          k_17 :
          if(((ATgetType(p_17) == AT_LIST) && ((ATermList) p_17 != ATempty)))
            {
              q_17 = ATgetFirst((ATermList) p_17);
              r_17 = (ATerm) ATgetNext((ATermList) p_17);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_17), not_null(q_17)), (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(r_17)));
            }
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
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  y_17 :
  if(match_cons(b_18, sym__2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      z_17 :
      if(((ATermList) c_18 == ATempty))
        {
          a_18 :
          if(((ATermList) d_18 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm q_61 (ATerm), ATerm r_61 (ATerm), ATerm s_61 (ATerm), ATerm t_61 (ATerm))
{
  ATerm f_18 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_61(t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          t = r_61(t);
          {
            t = _2(t, t_61, f_18);
            t = s_61(t);
          }
        }
      }
    return(t);
  }
  t = f_18(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_61 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_61);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm, ATerm (ATerm)))
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm s_18 = NULL,v_18 = NULL,w_18 = NULL,q_19 = NULL;
        ATerm v_8;
        v_8 = t;
        {
          ATerm x_18 = NULL;
          t = not_null(o_18);
          {
            ATerm y_18 = NULL;
            t = d_55(t);
            {
              x_18 = t;
              {
                if(((s_18 != NULL) && (s_18 != x_18)))
                  _fail(x_18);
                else
                  s_18 = x_18;
                {
                  ATerm e_19 = NULL,h_19 = NULL;
                  t = map_1(t, new_0);
                  {
                    y_18 = t;
                    {
                      if(((v_18 != NULL) && (v_18 != y_18)))
                        _fail(y_18);
                      else
                        v_18 = y_18;
                      {
                        ATerm g_19 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), not_null(v_18));
                        {
                          t = zip_1(t, _id);
                          {
                            g_19 = t;
                            if(((e_19 != NULL) && (e_19 != g_19)))
                              _fail(g_19);
                            else
                              e_19 = g_19;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), not_null(p_18));
                          {
                            t = conc_0(t);
                            {
                              h_19 = t;
                              if(((w_18 != NULL) && (w_18 != h_19)))
                                _fail(h_19);
                              else
                                w_18 = h_19;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = v_8;
        {
          ATerm r_19 = NULL;
          t = not_null(o_18);
          {
            ATerm g_1 (ATerm t)
            {
              t = not_null(v_18);
              return(t);
            }
            t = e_55(t, g_1);
            {
              r_19 = t;
              if(((q_19 != NULL) && (q_19 != r_19)))
                _fail(r_19);
              else
                q_19 = r_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(q_19), not_null(p_18), not_null(w_18));
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
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  d_20 = t;
  b_20 :
  if(match_cons(d_20, sym__2))
    {
      e_20 = ATgetArgument(d_20, 0);
      f_20 = ATgetArgument(d_20, 1);
      c_20 :
      if(((ATgetType(f_20) == AT_LIST) && ((ATermList) f_20 != ATempty)))
        {
          g_20 = ATgetFirst((ATermList) f_20);
          h_20 = (ATerm) ATgetNext((ATermList) f_20);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(h_20));
        }
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
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  p_20 = t;
  m_20 :
  if(match_cons(p_20, sym__2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      n_20 :
      if(((ATgetType(r_20) == AT_LIST) && ((ATermList) r_20 != ATempty)))
        {
          s_20 = ATgetFirst((ATermList) r_20);
          v_20 = (ATerm) ATgetNext((ATermList) r_20);
          o_20 :
          if(match_cons(s_20, sym__2))
            {
              t_20 = ATgetArgument(s_20, 0);
              u_20 = ATgetArgument(s_20, 1);
              {
                ATerm x_20 = NULL;
                if(((q_20 != NULL) && (q_20 != t_20)))
                  _fail(t_20);
                else
                  q_20 = t_20;
                {
                  if(((x_20 != NULL) && (x_20 != u_20)))
                    _fail(u_20);
                  else
                    x_20 = u_20;
                  t = not_null(x_20);
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
  ATerm w_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(x_8);
    }
  else
    {
      t = w_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm r_54 (ATerm, ATerm (ATerm)))
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  c_21 = t;
  b_21 :
  if(match_cons(c_21, sym__2))
    {
      d_21 = ATgetArgument(c_21, 0);
      e_21 = ATgetArgument(c_21, 1);
      {
        t = not_null(d_21);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(e_21);
              return(t);
            }
            t = split_2(t, _id, i_1);
            t = lookup_0(t);
            return(t);
          }
          t = r_54(t, h_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm z_53 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym__2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      {
        t = not_null(m_21);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm q_21 = NULL;
            q_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_21), not_null(n_21));
              t = z_53(t);
            }
            return(t);
          }
          t = _all(t, j_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm u_21 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_54(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = all_dist_1(t, u_21);
      }
    return(t);
  }
  t = u_21(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm f_55 (ATerm, ATerm (ATerm)), ATerm g_55 (ATerm), ATerm h_55 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm i_55 (ATerm, ATerm (ATerm)))
{
  ATerm w_21 = NULL;
  w_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), (ATerm) ATempty);
    {
      ATerm z_21 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm b_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, f_55);
              LocalPopChoice(g_9);
            }
          else
            {
              t = b_9;
              {
                t = RnBinding_2(t, g_55, i_55);
                t = DistBinding_2(t, z_21, h_55);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, k_1);
        return(t);
      }
      t = z_21(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm a_22 (ATerm t, ATerm b_22 (ATerm))
  {
    t = Scope_2(t, b_22, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, a_22);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm e_35 (ATerm), ATerm f_35 (ATerm))
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
  g_22 = t;
  f_22 :
  if(match_cons(g_22, sym__2))
    {
      h_22 = ATgetArgument(g_22, 0);
      i_22 = ATgetArgument(g_22, 1);
      {
        ATerm l_22 = NULL;
        t = not_null(h_22);
        {
          ATerm n_22 = NULL;
          t = e_35(t);
          {
            l_22 = t;
            {
              t = not_null(i_22);
              {
                t = f_35(t);
                {
                  n_22 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_22), not_null(n_22));
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
  ATerm u_22 = NULL;
  ATerm h_9;
  h_9 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm v_22 = NULL,w_22 = NULL;
      v_22 = t;
      t_22 :
      if(match_cons(v_22, sym_Program_1))
        {
          w_22 = ATgetArgument(v_22, 0);
          if(((u_22 != NULL) && (u_22 != w_22)))
            _fail(w_22);
          else
            u_22 = w_22;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, l_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_9), not_null(u_22)), term_n_9));
      {
        t = printnl_0(t);
        {
          t = term_p_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_9;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATempty, term_q_9));
  {
    t = printnl_0(t);
    {
      t = term_p_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  ATerm m_1 (ATerm t)
  {
    ATerm n_1 (ATerm t)
    {
      ATerm r_9 = t;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            ATerm f_23 = NULL;
            f_23 = t;
            y_22 :
            if(!(match_cons(f_23, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_9;
        }
      return(t);
    }
    t = _2(t, n_1, _id);
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm g_23 = NULL,h_23 = NULL;
          g_23 = t;
          a_23 :
          if(match_cons(g_23, sym_Runtime_1))
            {
              h_23 = ATgetArgument(g_23, 0);
              if(((e_23 != NULL) && (e_23 != h_23)))
                _fail(h_23);
              else
                e_23 = h_23;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, q_1);
        return(t);
      }
      t = _2(t, p_1, _id);
      {
        ATerm r_1 (ATerm t)
        {
          ATerm s_1 (ATerm t)
          {
            ATerm i_23 = NULL,j_23 = NULL;
            i_23 = t;
            c_23 :
            if(match_cons(i_23, sym_Program_1))
              {
                j_23 = ATgetArgument(i_23, 0);
                if(((d_23 != NULL) && (d_23 != j_23)))
                  _fail(j_23);
                else
                  d_23 = j_23;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, s_1);
          return(t);
        }
        t = _2(t, r_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_9), not_null(e_23)), term_u_9), not_null(d_23)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, m_1);
  {
    t = term_b_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,u_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym__2))
    {
      q_23 = ATgetArgument(p_23, 0);
      u_23 = ATgetArgument(p_23, 1);
      t = SSL_WriteToTextFile(not_null(q_23), not_null(u_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      t = SSL_WriteToBinaryFile(not_null(b_24), not_null(c_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_24 = NULL;
  ATerm c_10;
  c_10 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm d_10 = t;
      int e_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            ATerm n_24 = NULL,o_24 = NULL;
            n_24 = t;
            j_24 :
            if(match_cons(n_24, sym_Output_1))
              {
                o_24 = ATgetArgument(n_24, 0);
                if(((m_24 != NULL) && (m_24 != o_24)))
                  _fail(o_24);
                else
                  m_24 = o_24;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_1);
          LocalPopChoice(e_10);
        }
      else
        {
          t = d_10;
          {
            ATerm p_24 = NULL;
            t = term_m_10;
            {
              p_24 = t;
              if(((m_24 != NULL) && (m_24 != p_24)))
                _fail(p_24);
              else
                m_24 = p_24;
            }
          }
        }
      return(t);
    }
    t = _2(t, t_1, _id);
  }
  t = c_10;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm a_2 (ATerm t)
      {
        t = not_null(m_24);
        return(t);
      }
      t = split_2(t, a_2, _id);
      return(t);
    }
    t = _2(t, _id, z_1);
    {
      ATerm n_10 = t;
      int o_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm q_24 = NULL;
              q_24 = t;
              l_24 :
              if(!(match_cons(q_24, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, c_2);
            return(t);
          }
          t = _2(t, b_2, WriteToBinaryFile_0);
          LocalPopChoice(o_10);
        }
      else
        {
          t = n_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_51 (ATerm))
{
  ATerm h_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
  ATerm p_10;
  p_10 = t;
  t = dtime_0(t);
  t = p_10;
  {
    t = a_51(t);
    {
      ATerm q_10;
      q_10 = t;
      {
        ATerm i_25 = NULL;
        t = dtime_0(t);
        {
          i_25 = t;
          if(((h_25 != NULL) && (h_25 != i_25)))
            _fail(i_25);
          else
            h_25 = i_25;
        }
      }
      t = q_10;
      {
        j_25 = t;
        g_25 :
        if(match_cons(j_25, sym__2))
          {
            k_25 = ATgetArgument(j_25, 0);
            l_25 = ATgetArgument(j_25, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_25)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_25))), not_null(l_25));
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
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_ReadFromFile(not_null(r_25));
  return(t);
}
ATerm split_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  ATerm y_25 = NULL,a_26 = NULL;
  ATerm r_10;
  r_10 = t;
  {
    ATerm z_25 = NULL;
    t = d_63(t);
    {
      z_25 = t;
      if(((y_25 != NULL) && (y_25 != z_25)))
        _fail(z_25);
      else
        y_25 = z_25;
    }
  }
  t = r_10;
  {
    ATerm b_26 = NULL;
    t = e_63(t);
    {
      b_26 = t;
      if(((a_26 != NULL) && (a_26 != b_26)))
        _fail(b_26);
      else
        a_26 = b_26;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), not_null(a_26));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_26 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 (ATerm t)
        {
          ATerm i_26 = NULL,j_26 = NULL;
          i_26 = t;
          f_26 :
          if(match_cons(i_26, sym_Input_1))
            {
              j_26 = ATgetArgument(i_26, 0);
              if(((h_26 != NULL) && (h_26 != j_26)))
                _fail(j_26);
              else
                h_26 = j_26;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_2);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm k_26 = NULL;
          t = term_x_10;
          {
            k_26 = t;
            if(((h_26 != NULL) && (h_26 != k_26)))
              _fail(k_26);
            else
              h_26 = k_26;
          }
        }
      }
  }
  t = s_10;
  {
    ATerm o_2 (ATerm t)
    {
      t = not_null(h_26);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  n_26 :
  if(!(match_cons(o_26, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_50 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_2);
  t = z_50(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t = SSL_table_create(not_null(u_26));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  {
    ATerm j_11;
    j_11 = t;
    {
      t = term_k_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_11, term_l_11, not_null(y_26));
          t = table_put_0(t);
        }
      }
    }
    t = j_11;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm i_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  i_27 = t;
  g_27 :
  if(match_string(i_27, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(i_27) == AT_LIST) && ((ATermList) i_27 != ATempty)))
        {
          n_27 = ATgetFirst((ATermList) i_27);
          o_27 = (ATerm) ATgetNext((ATermList) i_27);
          h_27 :
          if(((ATgetType(o_27) == AT_LIST) && ((ATermList) o_27 != ATempty)))
            {
              p_27 = ATgetFirst((ATermList) o_27);
              q_27 = (ATerm) ATgetNext((ATermList) o_27);
              {
                ATerm v_27 = NULL;
                ATerm m_11;
                m_11 = t;
                {
                  t = not_null(n_27);
                  t = i_0(t);
                }
                t = m_11;
                {
                  ATerm w_27 = NULL;
                  t = not_null(p_27);
                  {
                    t = j_0(t);
                    {
                      w_27 = t;
                      if(((v_27 != NULL) && (v_27 != w_27)))
                        _fail(w_27);
                      else
                        v_27 = w_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_27)), not_null(v_27));
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
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm l_28 = NULL;
        l_28 = t;
        a_28 :
        if(!(match_string(l_28, "-S")))
          {
            if(!(match_string(l_28, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_p_11;
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_q_11;
        return(t);
      }
      t = Option_3(t, q_2, w_2, x_2);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm r_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 (ATerm t)
            {
              ATerm m_28 = NULL;
              m_28 = t;
              b_28 :
              if(!(match_string(m_28, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = term_b_12;
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              t = term_h_12;
              return(t);
            }
            t = Option_3(t, y_2, z_2, a_3);
            LocalPopChoice(v_11);
          }
        else
          {
            t = r_11;
            {
              ATerm i_12 = t;
              int j_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_3 (ATerm t)
                  {
                    ATerm n_28 = NULL;
                    n_28 = t;
                    c_28 :
                    if(!(match_string(n_28, "-v")))
                      {
                        if(!(match_string(n_28, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_3 (ATerm t)
                  {
                    t = term_k_12;
                    return(t);
                  }
                  ATerm d_3 (ATerm t)
                  {
                    t = term_l_12;
                    return(t);
                  }
                  t = Option_3(t, b_3, c_3, d_3);
                  LocalPopChoice(j_12);
                }
              else
                {
                  t = i_12;
                  {
                    ATerm m_12 = t;
                    int n_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_3 (ATerm t)
                        {
                          ATerm o_28 = NULL;
                          o_28 = t;
                          d_28 :
                          if(!(match_string(o_28, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm j_3 (ATerm t)
                        {
                          ATerm p_28 = NULL;
                          ATerm q_28 = NULL;
                          q_28 = t;
                          if(((p_28 != NULL) && (p_28 != q_28)))
                            _fail(q_28);
                          else
                            p_28 = q_28;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(p_28));
                          return(t);
                        }
                        ATerm l_3 (ATerm t)
                        {
                          t = term_o_12;
                          return(t);
                        }
                        t = ArgOption_3(t, i_3, j_3, l_3);
                        LocalPopChoice(n_12);
                      }
                    else
                      {
                        t = m_12;
                        {
                          ATerm p_12 = t;
                          int q_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_3 (ATerm t)
                              {
                                ATerm r_28 = NULL;
                                r_28 = t;
                                f_28 :
                                if(!(match_string(r_28, "-i")))
                                  {
                                    if(!(match_string(r_28, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_3 (ATerm t)
                              {
                                ATerm s_28 = NULL;
                                ATerm t_28 = NULL;
                                t_28 = t;
                                if(((s_28 != NULL) && (s_28 != t_28)))
                                  _fail(t_28);
                                else
                                  s_28 = t_28;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_28));
                                return(t);
                              }
                              ATerm p_3 (ATerm t)
                              {
                                t = term_r_12;
                                return(t);
                              }
                              t = ArgOption_3(t, n_3, o_3, p_3);
                              LocalPopChoice(q_12);
                            }
                          else
                            {
                              t = p_12;
                              {
                                ATerm s_12 = t;
                                int t_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_3 (ATerm t)
                                    {
                                      ATerm w_28 = NULL;
                                      w_28 = t;
                                      h_28 :
                                      if(!(match_string(w_28, "-o")))
                                        {
                                          if(!(match_string(w_28, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_3 (ATerm t)
                                    {
                                      ATerm x_28 = NULL;
                                      ATerm y_28 = NULL;
                                      y_28 = t;
                                      if(((x_28 != NULL) && (x_28 != y_28)))
                                        _fail(y_28);
                                      else
                                        x_28 = y_28;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(x_28));
                                      return(t);
                                    }
                                    ATerm s_3 (ATerm t)
                                    {
                                      t = term_u_12;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, q_3, r_3, s_3);
                                    LocalPopChoice(t_12);
                                  }
                                else
                                  {
                                    t = s_12;
                                    {
                                      ATerm c_13 = t;
                                      int e_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_3 (ATerm t)
                                          {
                                            ATerm z_28 = NULL;
                                            z_28 = t;
                                            j_28 :
                                            if(!(match_string(z_28, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_3 (ATerm t)
                                          {
                                            t = term_f_13;
                                            return(t);
                                          }
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = term_g_13;
                                            return(t);
                                          }
                                          t = Option_3(t, t_3, u_3, a_4);
                                          LocalPopChoice(e_13);
                                        }
                                      else
                                        {
                                          t = c_13;
                                          {
                                            ATerm b_4 (ATerm t)
                                            {
                                              ATerm a_29 = NULL;
                                              a_29 = t;
                                              k_28 :
                                              if(!(match_string(a_29, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm c_4 (ATerm t)
                                            {
                                              t = term_h_13;
                                              return(t);
                                            }
                                            ATerm e_4 (ATerm t)
                                            {
                                              t = term_j_13;
                                              return(t);
                                            }
                                            t = Option_3(t, b_4, c_4, e_4);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm f_29 = NULL;
  f_29 = t;
  t = SSL_table_destroy(not_null(f_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_exit(not_null(m_29));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  t = SSL_implode_string(not_null(u_29));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm x_29 (ATerm t)
  {
    ATerm k_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_29);
        LocalPopChoice(p_13);
      }
    else
      {
        t = k_13;
        {
          t = Nil_0(t);
          t = j_60(t);
        }
      }
    return(t);
  }
  t = x_29(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = q_13;
      {
        ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
        e_30 = t;
        d_30 :
        if(((ATgetType(e_30) == AT_LIST) && ((ATermList) e_30 != ATempty)))
          {
            f_30 = ATgetFirst((ATermList) e_30);
            g_30 = (ATerm) ATgetNext((ATermList) e_30);
            {
              t = not_null(f_30);
              {
                ATerm g_4 (ATerm t)
                {
                  t = not_null(g_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_4);
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
  ATerm o_30 = NULL;
  o_30 = t;
  t = SSL_explode_string(not_null(o_30));
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
ATerm long_description_1 (ATerm t, ATerm w_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm r_30 (ATerm t)
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
        t = Cons_2(t, v_59, r_30);
      }
    return(t);
  }
  t = r_30(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  a_31 = t;
  x_30 :
  if(((ATgetType(a_31) == AT_LIST) && ((ATermList) a_31 != ATempty)))
    {
      y_30 = ATgetFirst((ATermList) a_31);
      z_30 = (ATerm) ATgetNext((ATermList) a_31);
      {
        ATerm d_31 = NULL;
        t = not_null(z_30);
        {
          ATerm w_13;
          w_13 = t;
          {
            ATerm e_31 = NULL,g_31 = NULL,i_31 = NULL;
            ATerm a_14;
            a_14 = t;
            {
              ATerm f_31 = NULL;
              t = h_0(t);
              {
                f_31 = t;
                if(((e_31 != NULL) && (e_31 != f_31)))
                  _fail(f_31);
                else
                  e_31 = f_31;
              }
            }
            t = a_14;
            {
              ATerm h_31 = NULL;
              t = not_null(y_30);
              {
                t = g_0(t);
                {
                  h_31 = t;
                  if(((g_31 != NULL) && (g_31 != h_31)))
                    _fail(h_31);
                  else
                    g_31 = h_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_31)), not_null(g_31));
                {
                  i_31 = t;
                  if(((d_31 != NULL) && (d_31 != i_31)))
                    _fail(i_31);
                  else
                    d_31 = i_31;
                }
              }
            }
          }
          t = w_13;
          {
            ATerm i_4 (ATerm t)
            {
              t = not_null(d_31);
              return(t);
            }
            t = reverse_acc_2(t, g_0, i_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) a_31 == ATempty))
        {
          {
            t = term_b_14;
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
  ATerm j_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, j_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_47 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_40 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym_Program_1))
    {
      s_31 = ATgetArgument(r_31, 0);
      {
        ATerm u_31 = NULL;
        t = not_null(s_31);
        {
          t = w_40(t);
          {
            u_31 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_31));
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
  ATerm c_32 = NULL;
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm d_32 = NULL;
      d_32 = t;
      if(((c_32 != NULL) && (c_32 != d_32)))
        _fail(d_32);
      else
        c_32 = d_32;
      return(t);
    }
    t = Program_1(t, l_4);
    return(t);
  }
  t = option_defined_1(t, k_4);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm e_32 = NULL;
      ATerm f_32 = NULL;
      t = term_b_14;
      {
        ATerm n_4 (ATerm t)
        {
          t = not_null(c_32);
          return(t);
        }
        t = short_description_1(t, n_4);
        {
          t = concat_strings_0(t);
          {
            f_32 = t;
            if(((e_32 != NULL) && (e_32 != f_32)))
              _fail(f_32);
            else
              e_32 = f_32;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATempty, not_null(e_32)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, m_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATempty, term_d_14));
      {
        t = printnl_0(t);
        {
          t = term_h_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm g_32 = NULL;
                  g_32 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_32)), term_l_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_4);
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm i_32 = NULL;
                    ATerm j_32 = NULL;
                    t = term_b_14;
                    {
                      ATerm u_4 (ATerm t)
                      {
                        t = not_null(c_32);
                        return(t);
                      }
                      t = long_description_1(t, u_4);
                      {
                        t = concat_strings_0(t);
                        {
                          j_32 = t;
                          if(((i_32 != NULL) && (i_32 != j_32)))
                            _fail(j_32);
                          else
                            i_32 = j_32;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_32)), term_m_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_4);
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
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  p_32 :
  if(match_cons(q_32, sym__2))
    {
      r_32 = ATgetArgument(q_32, 0);
      s_32 = ATgetArgument(q_32, 1);
      {
        ATerm n_14;
        n_14 = t;
        t = SSL_printnl(not_null(r_32), not_null(s_32));
        t = n_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_40 (ATerm))
{
  ATerm z_32 = NULL,a_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym_Undefined_1))
    {
      a_33 = ATgetArgument(z_32, 0);
      {
        ATerm c_33 = NULL;
        t = not_null(a_33);
        {
          t = x_40(t);
          {
            c_33 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_33));
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
ATerm fetch_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm g_33 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_60, _id);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = Cons_2(t, _id, g_33);
      }
    return(t);
  }
  t = g_33(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_48 (ATerm))
{
  t = fetch_1(t, u_48);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  h_33 :
  if(!(match_cons(i_33, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_63(t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym__2))
    {
      m_33 = ATgetArgument(l_33, 0);
      n_33 = ATgetArgument(l_33, 1);
      t = SSL_table_get(not_null(m_33), not_null(n_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,x_33 = NULL,y_33 = NULL;
  u_33 = t;
  t_33 :
  if(match_cons(u_33, sym__3))
    {
      v_33 = ATgetArgument(u_33, 0);
      x_33 = ATgetArgument(u_33, 1);
      y_33 = ATgetArgument(u_33, 2);
      {
        ATerm a_15;
        a_15 = t;
        {
          ATerm c_34 = NULL;
          ATerm a_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), not_null(x_33));
          {
            ATerm b_15 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_15);
              }
            else
              {
                t = b_15;
                t = (ATerm) ATempty;
              }
            {
              a_35 = t;
              if(((c_34 != NULL) && (c_34 != a_35)))
                _fail(a_35);
              else
                c_34 = a_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_33), not_null(x_33), (ATerm) ATinsert(CheckATermList(not_null(c_34)), not_null(y_33)));
            t = table_put_0(t);
          }
        }
        t = a_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_48 (ATerm))
{
  ATerm g_35 = NULL;
  ATerm h_35 = NULL;
  t = term_b_14;
  {
    t = a_48(t);
    {
      h_35 = t;
      if(((g_35 != NULL) && (g_35 != h_35)))
        _fail(h_35);
      else
        g_35 = h_35;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_14, term_g_14, not_null(g_35));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_string(n_35, "register-usage-info"))
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(n_35) == AT_LIST) && ((ATermList) n_35 != ATempty)))
        {
          o_35 = ATgetFirst((ATermList) n_35);
          p_35 = (ATerm) ATgetNext((ATermList) n_35);
          {
            ATerm s_35 = NULL;
            ATerm d_15;
            d_15 = t;
            {
              t = not_null(o_35);
              t = b_0(t);
            }
            t = d_15;
            {
              ATerm t_35 = NULL;
              t = term_b_14;
              {
                t = c_0(t);
                {
                  t_35 = t;
                  if(((s_35 != NULL) && (s_35 != t_35)))
                    _fail(t_35);
                  else
                    s_35 = t_35;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_35)), not_null(s_35));
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
  ATerm v_4 (ATerm t)
  {
    ATerm y_35 = NULL;
    y_35 = t;
    x_35 :
    if(!(match_string(y_35, "--help")))
      {
        if(!(match_string(y_35, "-h")))
          {
            if(!(match_string(y_35, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_i_15;
    return(t);
  }
  t = Option_3(t, v_4, x_4, z_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  b_36 = t;
  a_36 :
  if(((ATgetType(b_36) == AT_LIST) && ((ATermList) b_36 != ATempty)))
    {
      c_36 = ATgetFirst((ATermList) b_36);
      d_36 = (ATerm) ATgetNext((ATermList) b_36);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_36)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_36)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_45 (ATerm), ATerm z_45 (ATerm))
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  k_36 :
  if(((ATgetType(l_36) == AT_LIST) && ((ATermList) l_36 != ATempty)))
    {
      m_36 = ATgetFirst((ATermList) l_36);
      n_36 = (ATerm) ATgetNext((ATermList) l_36);
      {
        ATerm q_36 = NULL;
        t = not_null(m_36);
        {
          ATerm s_36 = NULL;
          t = y_45(t);
          {
            q_36 = t;
            {
              t = not_null(n_36);
              {
                t = z_45(t);
                {
                  s_36 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_36)), not_null(q_36));
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
  ATerm y_36 = NULL;
  y_36 = t;
  x_36 :
  if(((ATermList) y_36 == ATempty))
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
ATerm parse_options_p__1 (ATerm t, ATerm y_47 (ATerm))
{
  ATerm k_15;
  k_15 = t;
  {
    ATerm a_5 (ATerm t)
    {
      t = term_l_15;
      t = y_47(t);
      return(t);
    }
    t = try_1(t, a_5);
  }
  t = k_15;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm a_37 = NULL;
      a_37 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_37));
      return(t);
    }
    ATerm c_5 (ATerm t)
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_15);
            }
          else
            {
              t = o_15;
              {
                t = y_47(t);
                t = Cons_2(t, _id, c_5);
              }
            }
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
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
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  ATerm r_15;
  r_15 = t;
  {
    ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
    j_37 = t;
    f_37 :
    if(match_cons(j_37, sym__3))
      {
        k_37 = ATgetArgument(j_37, 0);
        l_37 = ATgetArgument(j_37, 1);
        m_37 = ATgetArgument(j_37, 2);
        {
          if(((g_37 != NULL) && (g_37 != k_37)))
            _fail(k_37);
          else
            g_37 = k_37;
          {
            if(((h_37 != NULL) && (h_37 != l_37)))
              _fail(l_37);
            else
              h_37 = l_37;
            {
              if(((i_37 != NULL) && (i_37 != m_37)))
                _fail(m_37);
              else
                i_37 = m_37;
              t = SSL_table_put(not_null(g_37), not_null(h_37), not_null(i_37));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_47 (ATerm))
{
  ATerm p_37 = NULL;
  ATerm s_15;
  s_15 = t;
  {
    t = term_t_15;
    t = table_put_0(t);
  }
  t = s_15;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm u_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_47(t);
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_5);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_b_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            {
              ATerm j_5 (ATerm t)
              {
                ATerm k_5 (ATerm t)
                {
                  ATerm q_37 = NULL;
                  q_37 = t;
                  if(((p_37 != NULL) && (p_37 != q_37)))
                    _fail(q_37);
                  else
                    p_37 = q_37;
                  return(t);
                }
                t = Undefined_1(t, k_5);
                return(t);
              }
              t = option_defined_1(t, j_5);
              {
                ATerm y_15;
                y_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_37)), term_z_15));
                  t = printnl_0(t);
                }
                t = y_15;
                {
                  t = system_usage_0(t);
                  {
                    t = term_p_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_5);
      {
        ATerm e_16;
        e_16 = t;
        {
          t = term_e_14;
          t = table_destroy_0(t);
        }
        t = e_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_50 (ATerm), ATerm p_50 (ATerm), ATerm q_50 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_50(t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, l_5);
  {
    t = store_options_0(t);
    {
      ATerm h_16 = t;
      int i_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, q_50);
          LocalPopChoice(i_16);
        }
      else
        {
          t = h_16;
          {
            ATerm j_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, o_50);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(l_16);
              }
            else
              {
                t = j_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_50 (ATerm), ATerm k_50 (ATerm))
{
  t = iowrap_3(t, j_50, k_50, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_50 (ATerm))
{
  ATerm m_5 (ATerm t)
  {
    t = _2(t, _id, g_50);
    return(t);
  }
  t = iowrap_2(t, m_5, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_vars_0(t);
  return(t);
}
