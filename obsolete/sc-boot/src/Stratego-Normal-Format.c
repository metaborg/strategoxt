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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_n_12;
ATerm term_a_12;
ATerm term_t_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_e_8;
ATerm term_s_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_w_6;
ATerm term_r_6;
ATerm term_o_4;
ATerm term_u_3;
void init_constant_terms (void)
{
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__2, term_r_8, term_s_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_s_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_s_8);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_s_8);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_s_8);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__3, term_q_10, term_t_10, (ATerm) ATempty);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm m_63 (ATerm));
ATerm Let_2 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm));
ATerm Op_2 (ATerm, ATerm s_54 (ATerm), ATerm t_54 (ATerm));
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm As_2 (ATerm, ATerm b_53 (ATerm), ATerm c_53 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm d_53 (ATerm));
ATerm Str_1 (ATerm, ATerm r_54 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm q_54 (ATerm));
ATerm Int_1 (ATerm, ATerm p_54 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm Where_1 (ATerm, ATerm r_56 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_56 (ATerm), ATerm q_56 (ATerm));
ATerm Build_1 (ATerm, ATerm m_56 (ATerm));
ATerm Match_1 (ATerm, ATerm l_56 (ATerm));
ATerm Thread_1 (ATerm, ATerm i_56 (ATerm));
ATerm All_1 (ATerm, ATerm h_56 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm f_56 (ATerm));
ATerm Cong_2 (ATerm, ATerm d_56 (ATerm), ATerm e_56 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm b_56 (ATerm), ATerm c_56 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm SVar_1 (ATerm, ATerm k_55 (ATerm));
ATerm Call_2 (ATerm, ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm GChoice_2 (ATerm, ATerm f_55 (ATerm), ATerm g_55 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm c_55 (ATerm), ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm LChoice_2 (ATerm, ATerm a_55 (ATerm), ATerm b_55 (ATerm));
ATerm Choice_2 (ATerm, ATerm y_54 (ATerm), ATerm z_54 (ATerm));
ATerm Seq_2 (ATerm, ATerm w_54 (ATerm), ATerm x_54 (ATerm));
ATerm Test_1 (ATerm, ATerm u_54 (ATerm));
ATerm Not_1 (ATerm, ATerm v_54 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm s_55 (ATerm), ATerm t_55 (ATerm));
ATerm Mod_2 (ATerm, ATerm u_53 (ATerm), ATerm v_53 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm t_72 (ATerm));
ATerm Strategies_1 (ATerm, ATerm c_54 (ATerm));
ATerm Specification_1 (ATerm, ATerm e_54 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm v_45 (ATerm), ATerm w_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_67 (ATerm), ATerm k_67 (ATerm));
ATerm crush_2 (ATerm, ATerm x_68 (ATerm), ATerm y_68 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_62 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_62 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_73 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_60 (ATerm));
ATerm map_1 (ATerm, ATerm r_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_60 (ATerm));
ATerm Program_1 (ATerm, ATerm e_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_61 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_60 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_60 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_60 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm n_62 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_62 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm s_3;
  s_3 = t;
  {
    ATerm l_2 = NULL,b_8 = NULL;
    ATerm t_3;
    t_3 = t;
    {
      ATerm a_8 = NULL;
      t = m_63(t);
      {
        a_8 = t;
        if(((l_2 != NULL) && (l_2 != a_8)))
          _fail(a_8);
        else
          l_2 = a_8;
      }
    }
    t = t_3;
    {
      ATerm c_8 = NULL;
      c_8 = t;
      if(((b_8 != NULL) && (b_8 != c_8)))
        _fail(c_8);
      else
        b_8 = c_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_8)), not_null(l_2)));
        t = printnl_0(t);
      }
    }
  }
  t = s_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm))
{
  ATerm s_10 = NULL,d_11 = NULL,e_11 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_Let_2))
    {
      d_11 = ATgetArgument(s_10, 0);
      e_11 = ATgetArgument(s_10, 1);
      {
        ATerm l_11 = NULL,n_11 = NULL;
        ATerm m_11 = NULL;
        t = SSLgetAnnotations(not_null(s_10));
        {
          m_11 = t;
          if(((l_11 != NULL) && (l_11 != m_11)))
            _fail(m_11);
          else
            l_11 = m_11;
        }
        {
          t = not_null(d_11);
          {
            ATerm p_11 = NULL;
            t = n_55(t);
            {
              n_11 = t;
              {
                t = not_null(e_11);
                {
                  ATerm r_11 = NULL;
                  t = o_55(t);
                  {
                    p_11 = t;
                    {
                      ATerm s_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_11), not_null(p_11)), not_null(l_11));
                      {
                        s_11 = t;
                        if(((r_11 != NULL) && (r_11 != s_11)))
                          _fail(s_11);
                        else
                          r_11 = s_11;
                      }
                      t = not_null(r_11);
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
ATerm Op_2 (ATerm t, ATerm s_54 (ATerm), ATerm t_54 (ATerm))
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_Op_2))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      {
        ATerm k_12 = NULL,m_12 = NULL;
        ATerm l_12 = NULL;
        t = SSLgetAnnotations(not_null(e_12));
        {
          l_12 = t;
          if(((k_12 != NULL) && (k_12 != l_12)))
            _fail(l_12);
          else
            k_12 = l_12;
        }
        {
          t = not_null(f_12);
          {
            ATerm o_12 = NULL;
            t = s_54(t);
            {
              m_12 = t;
              {
                t = not_null(g_12);
                {
                  ATerm q_12 = NULL;
                  t = t_54(t);
                  {
                    o_12 = t;
                    {
                      ATerm r_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(m_12), not_null(o_12)), not_null(k_12));
                      {
                        r_12 = t;
                        if(((q_12 != NULL) && (q_12 != r_12)))
                          _fail(r_12);
                        else
                          q_12 = r_12;
                      }
                      t = not_null(q_12);
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
ATerm Var_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym_Var_1))
    {
      h_13 = ATgetArgument(g_13, 0);
      {
        ATerm v_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 = NULL,m_13 = NULL;
            ATerm l_13 = NULL;
            t = SSLgetAnnotations(not_null(g_13));
            {
              l_13 = t;
              if(((k_13 != NULL) && (k_13 != l_13)))
                _fail(l_13);
              else
                k_13 = l_13;
            }
            {
              t = not_null(h_13);
              {
                ATerm o_13 = NULL;
                t = n_0(t);
                {
                  m_13 = t;
                  {
                    ATerm p_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_13)), not_null(k_13));
                    {
                      p_13 = t;
                      if(((o_13 != NULL) && (o_13 != p_13)))
                        _fail(p_13);
                      else
                        o_13 = p_13;
                    }
                    t = not_null(o_13);
                  }
                }
              }
            }
            LocalPopChoice(w_3);
          }
        else
          {
            t = v_3;
            {
              ATerm s_13 = NULL,u_13 = NULL;
              ATerm t_13 = NULL;
              t = SSLgetAnnotations(not_null(g_13));
              {
                t_13 = t;
                if(((s_13 != NULL) && (s_13 != t_13)))
                  _fail(t_13);
                else
                  s_13 = t_13;
              }
              {
                t = not_null(h_13);
                {
                  ATerm w_13 = NULL;
                  t = n_0(t);
                  {
                    u_13 = t;
                    {
                      ATerm x_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(u_13)), not_null(s_13));
                      {
                        x_13 = t;
                        if(((w_13 != NULL) && (w_13 != x_13)))
                          _fail(x_13);
                        else
                          w_13 = x_13;
                      }
                      t = not_null(w_13);
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
ATerm As_2 (ATerm t, ATerm b_53 (ATerm), ATerm c_53 (ATerm))
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_As_2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      {
        ATerm s_14 = NULL,u_14 = NULL;
        ATerm t_14 = NULL;
        t = SSLgetAnnotations(not_null(m_14));
        {
          t_14 = t;
          if(((s_14 != NULL) && (s_14 != t_14)))
            _fail(t_14);
          else
            s_14 = t_14;
        }
        {
          t = not_null(n_14);
          {
            ATerm w_14 = NULL;
            t = b_53(t);
            {
              u_14 = t;
              {
                t = not_null(o_14);
                {
                  ATerm y_14 = NULL;
                  t = c_53(t);
                  {
                    w_14 = t;
                    {
                      ATerm z_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(u_14), not_null(w_14)), not_null(s_14));
                      {
                        z_14 = t;
                        if(((y_14 != NULL) && (y_14 != z_14)))
                          _fail(z_14);
                        else
                          y_14 = z_14;
                      }
                      t = not_null(y_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm d_53 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_BuildDefault_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(l_15);
          {
            ATerm s_15 = NULL;
            t = d_53(t);
            {
              q_15 = t;
              {
                ATerm t_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(q_15)), not_null(o_15));
                {
                  t_15 = t;
                  if(((s_15 != NULL) && (s_15 != t_15)))
                    _fail(t_15);
                  else
                    s_15 = t_15;
                }
                t = not_null(s_15);
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
ATerm Str_1 (ATerm t, ATerm r_54 (ATerm))
{
  ATerm d_16 = NULL,e_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_Str_1))
    {
      e_16 = ATgetArgument(d_16, 0);
      {
        ATerm h_16 = NULL,j_16 = NULL;
        ATerm i_16 = NULL;
        t = SSLgetAnnotations(not_null(d_16));
        {
          i_16 = t;
          if(((h_16 != NULL) && (h_16 != i_16)))
            _fail(i_16);
          else
            h_16 = i_16;
        }
        {
          t = not_null(e_16);
          {
            ATerm l_16 = NULL;
            t = r_54(t);
            {
              j_16 = t;
              {
                ATerm m_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(j_16)), not_null(h_16));
                {
                  m_16 = t;
                  if(((l_16 != NULL) && (l_16 != m_16)))
                    _fail(m_16);
                  else
                    l_16 = m_16;
                }
                t = not_null(l_16);
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
ATerm is_real_0 (ATerm t)
{
  ATerm s_16 = NULL;
  s_16 = t;
  t = SSL_is_real(not_null(s_16));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm a_17 = NULL,b_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym_Real_1))
    {
      b_17 = ATgetArgument(a_17, 0);
      {
        ATerm e_17 = NULL,g_17 = NULL;
        ATerm f_17 = NULL;
        t = SSLgetAnnotations(not_null(a_17));
        {
          f_17 = t;
          if(((e_17 != NULL) && (e_17 != f_17)))
            _fail(f_17);
          else
            e_17 = f_17;
        }
        {
          t = not_null(b_17);
          {
            ATerm i_17 = NULL;
            t = q_54(t);
            {
              g_17 = t;
              {
                ATerm j_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(g_17)), not_null(e_17));
                {
                  j_17 = t;
                  if(((i_17 != NULL) && (i_17 != j_17)))
                    _fail(j_17);
                  else
                    i_17 = j_17;
                }
                t = not_null(i_17);
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
ATerm Int_1 (ATerm t, ATerm p_54 (ATerm))
{
  ATerm t_17 = NULL,u_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_Int_1))
    {
      u_17 = ATgetArgument(t_17, 0);
      {
        ATerm x_17 = NULL,z_17 = NULL;
        ATerm y_17 = NULL;
        t = SSLgetAnnotations(not_null(t_17));
        {
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
        }
        {
          t = not_null(u_17);
          {
            ATerm b_18 = NULL;
            t = p_54(t);
            {
              z_17 = t;
              {
                ATerm c_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(z_17)), not_null(x_17));
                {
                  c_18 = t;
                  if(((b_18 != NULL) && (b_18 != c_18)))
                    _fail(c_18);
                  else
                    b_18 = c_18;
                }
                t = not_null(b_18);
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
ATerm Wld_0 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym_Wld_0))
    {
      ATerm n_18 = NULL,p_18 = NULL;
      ATerm x_3;
      x_3 = t;
      {
        ATerm o_18 = NULL;
        t = SSLgetAnnotations(not_null(l_18));
        {
          o_18 = t;
          if(((n_18 != NULL) && (n_18 != o_18)))
            _fail(o_18);
          else
            n_18 = o_18;
        }
      }
      t = x_3;
      {
        ATerm q_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(n_18));
        {
          q_18 = t;
          if(((p_18 != NULL) && (p_18 != q_18)))
            _fail(q_18);
          else
            p_18 = q_18;
        }
        t = not_null(p_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm y_3 = t;
  int z_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
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
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(n_4);
                                              }
                                            else
                                              {
                                                t = m_4;
                                                {
                                                  ATerm g_0 (ATerm t)
                                                  {
                                                    t = term_o_4;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, g_0);
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Prim_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym_Prim_2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm h_19 = NULL,j_19 = NULL;
        ATerm i_19 = NULL;
        t = SSLgetAnnotations(not_null(b_19));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        {
          t = not_null(c_19);
          {
            ATerm l_19 = NULL;
            t = s_56(t);
            {
              j_19 = t;
              {
                t = not_null(d_19);
                {
                  ATerm n_19 = NULL;
                  t = t_56(t);
                  {
                    l_19 = t;
                    {
                      ATerm o_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(j_19), not_null(l_19)), not_null(h_19));
                      {
                        o_19 = t;
                        if(((n_19 != NULL) && (n_19 != o_19)))
                          _fail(o_19);
                        else
                          n_19 = o_19;
                      }
                      t = not_null(n_19);
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
ATerm Where_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_Where_1))
    {
      a_20 = ATgetArgument(z_19, 0);
      {
        ATerm d_20 = NULL,f_20 = NULL;
        ATerm e_20 = NULL;
        t = SSLgetAnnotations(not_null(z_19));
        {
          e_20 = t;
          if(((d_20 != NULL) && (d_20 != e_20)))
            _fail(e_20);
          else
            d_20 = e_20;
        }
        {
          t = not_null(a_20);
          {
            ATerm h_20 = NULL;
            t = r_56(t);
            {
              f_20 = t;
              {
                ATerm i_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(f_20)), not_null(d_20));
                {
                  i_20 = t;
                  if(((h_20 != NULL) && (h_20 != i_20)))
                    _fail(i_20);
                  else
                    h_20 = i_20;
                }
                t = not_null(h_20);
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
ATerm Scope_2 (ATerm t, ATerm p_56 (ATerm), ATerm q_56 (ATerm))
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym_Scope_2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        ATerm z_20 = NULL,b_21 = NULL;
        ATerm a_21 = NULL;
        t = SSLgetAnnotations(not_null(t_20));
        {
          a_21 = t;
          if(((z_20 != NULL) && (z_20 != a_21)))
            _fail(a_21);
          else
            z_20 = a_21;
        }
        {
          t = not_null(u_20);
          {
            ATerm d_21 = NULL;
            t = p_56(t);
            {
              b_21 = t;
              {
                t = not_null(v_20);
                {
                  ATerm f_21 = NULL;
                  t = q_56(t);
                  {
                    d_21 = t;
                    {
                      ATerm g_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(b_21), not_null(d_21)), not_null(z_20));
                      {
                        g_21 = t;
                        if(((f_21 != NULL) && (f_21 != g_21)))
                          _fail(g_21);
                        else
                          f_21 = g_21;
                      }
                      t = not_null(f_21);
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
ATerm Build_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm r_21 = NULL,s_21 = NULL;
  r_21 = t;
  q_21 :
  if(match_cons(r_21, sym_Build_1))
    {
      s_21 = ATgetArgument(r_21, 0);
      {
        ATerm v_21 = NULL,x_21 = NULL;
        ATerm w_21 = NULL;
        t = SSLgetAnnotations(not_null(r_21));
        {
          w_21 = t;
          if(((v_21 != NULL) && (v_21 != w_21)))
            _fail(w_21);
          else
            v_21 = w_21;
        }
        {
          t = not_null(s_21);
          {
            ATerm z_21 = NULL;
            t = m_56(t);
            {
              x_21 = t;
              {
                ATerm a_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_21)), not_null(v_21));
                {
                  a_22 = t;
                  if(((z_21 != NULL) && (z_21 != a_22)))
                    _fail(a_22);
                  else
                    z_21 = a_22;
                }
                t = not_null(z_21);
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
ATerm Match_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym_Match_1))
    {
      l_22 = ATgetArgument(k_22, 0);
      {
        ATerm v_22 = NULL,x_22 = NULL;
        ATerm w_22 = NULL;
        t = SSLgetAnnotations(not_null(k_22));
        {
          w_22 = t;
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
        }
        {
          t = not_null(l_22);
          {
            ATerm z_22 = NULL;
            t = l_56(t);
            {
              x_22 = t;
              {
                ATerm a_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(x_22)), not_null(v_22));
                {
                  a_23 = t;
                  if(((z_22 != NULL) && (z_22 != a_23)))
                    _fail(a_23);
                  else
                    z_22 = a_23;
                }
                t = not_null(z_22);
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
ATerm Thread_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_Thread_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(o_23);
          {
            ATerm v_23 = NULL;
            t = i_56(t);
            {
              t_23 = t;
              {
                ATerm w_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(t_23)), not_null(r_23));
                {
                  w_23 = t;
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                }
                t = not_null(v_23);
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
ATerm All_1 (ATerm t, ATerm h_56 (ATerm))
{
  ATerm h_24 = NULL,i_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym_All_1))
    {
      i_24 = ATgetArgument(h_24, 0);
      {
        ATerm l_24 = NULL,n_24 = NULL;
        ATerm m_24 = NULL;
        t = SSLgetAnnotations(not_null(h_24));
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
        {
          t = not_null(i_24);
          {
            ATerm p_24 = NULL;
            t = h_56(t);
            {
              n_24 = t;
              {
                ATerm q_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(n_24)), not_null(l_24));
                {
                  q_24 = t;
                  if(((p_24 != NULL) && (p_24 != q_24)))
                    _fail(q_24);
                  else
                    p_24 = q_24;
                }
                t = not_null(p_24);
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm p_25 = NULL,q_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_Some_1))
    {
      q_25 = ATgetArgument(p_25, 0);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_25 = NULL,x_25 = NULL;
            ATerm w_25 = NULL;
            t = SSLgetAnnotations(not_null(p_25));
            {
              w_25 = t;
              if(((v_25 != NULL) && (v_25 != w_25)))
                _fail(w_25);
              else
                v_25 = w_25;
            }
            {
              t = not_null(q_25);
              {
                ATerm z_25 = NULL;
                t = m_0(t);
                {
                  x_25 = t;
                  {
                    ATerm a_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(x_25)), not_null(v_25));
                    {
                      a_26 = t;
                      if(((z_25 != NULL) && (z_25 != a_26)))
                        _fail(a_26);
                      else
                        z_25 = a_26;
                    }
                    t = not_null(z_25);
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
              ATerm d_26 = NULL,g_26 = NULL;
              ATerm e_26 = NULL;
              t = SSLgetAnnotations(not_null(p_25));
              {
                e_26 = t;
                if(((d_26 != NULL) && (d_26 != e_26)))
                  _fail(e_26);
                else
                  d_26 = e_26;
              }
              {
                t = not_null(q_25);
                {
                  ATerm q_26 = NULL;
                  t = m_0(t);
                  {
                    g_26 = t;
                    {
                      ATerm r_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(g_26)), not_null(d_26));
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
ATerm One_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_One_1))
    {
      h_27 = ATgetArgument(g_27, 0);
      {
        ATerm k_27 = NULL,m_27 = NULL;
        ATerm l_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
        {
          t = not_null(h_27);
          {
            ATerm o_27 = NULL;
            t = f_56(t);
            {
              m_27 = t;
              {
                ATerm p_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(m_27)), not_null(k_27));
                {
                  p_27 = t;
                  if(((o_27 != NULL) && (o_27 != p_27)))
                    _fail(p_27);
                  else
                    o_27 = p_27;
                }
                t = not_null(o_27);
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
ATerm Cong_2 (ATerm t, ATerm d_56 (ATerm), ATerm e_56 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_Cong_2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        ATerm g_28 = NULL,i_28 = NULL;
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(a_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
        {
          t = not_null(b_28);
          {
            ATerm k_28 = NULL;
            t = d_56(t);
            {
              i_28 = t;
              {
                t = not_null(c_28);
                {
                  ATerm m_28 = NULL;
                  t = e_56(t);
                  {
                    k_28 = t;
                    {
                      ATerm n_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(i_28), not_null(k_28)), not_null(g_28));
                      {
                        n_28 = t;
                        if(((m_28 != NULL) && (m_28 != n_28)))
                          _fail(n_28);
                        else
                          m_28 = n_28;
                      }
                      t = not_null(m_28);
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
ATerm is_int_0 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = SSL_is_int(not_null(u_28));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm b_56 (ATerm), ATerm c_56 (ATerm))
{
  ATerm f_29 = NULL,l_29 = NULL,n_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym_Path_2))
    {
      l_29 = ATgetArgument(f_29, 0);
      n_29 = ATgetArgument(f_29, 1);
      {
        ATerm r_29 = NULL,t_29 = NULL;
        ATerm s_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          s_29 = t;
          if(((r_29 != NULL) && (r_29 != s_29)))
            _fail(s_29);
          else
            r_29 = s_29;
        }
        {
          t = not_null(l_29);
          {
            ATerm v_29 = NULL;
            t = b_56(t);
            {
              t_29 = t;
              {
                t = not_null(n_29);
                {
                  ATerm x_29 = NULL;
                  t = c_56(t);
                  {
                    v_29 = t;
                    {
                      ATerm y_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(t_29), not_null(v_29)), not_null(r_29));
                      {
                        y_29 = t;
                        if(((x_29 != NULL) && (x_29 != y_29)))
                          _fail(y_29);
                        else
                          x_29 = y_29;
                      }
                      t = not_null(x_29);
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
ATerm Rec_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym_Rec_2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      {
        ATerm t_30 = NULL,v_30 = NULL;
        ATerm u_30 = NULL;
        t = SSLgetAnnotations(not_null(n_30));
        {
          u_30 = t;
          if(((t_30 != NULL) && (t_30 != u_30)))
            _fail(u_30);
          else
            t_30 = u_30;
        }
        {
          t = not_null(o_30);
          {
            ATerm x_30 = NULL;
            t = l_55(t);
            {
              v_30 = t;
              {
                t = not_null(p_30);
                {
                  ATerm z_30 = NULL;
                  t = m_55(t);
                  {
                    x_30 = t;
                    {
                      ATerm a_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(v_30), not_null(x_30)), not_null(t_30));
                      {
                        a_31 = t;
                        if(((z_30 != NULL) && (z_30 != a_31)))
                          _fail(a_31);
                        else
                          z_30 = a_31;
                      }
                      t = not_null(z_30);
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
ATerm SVar_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym_SVar_1))
    {
      m_31 = ATgetArgument(l_31, 0);
      {
        ATerm p_31 = NULL,r_31 = NULL;
        ATerm q_31 = NULL;
        t = SSLgetAnnotations(not_null(l_31));
        {
          q_31 = t;
          if(((p_31 != NULL) && (p_31 != q_31)))
            _fail(q_31);
          else
            p_31 = q_31;
        }
        {
          t = not_null(m_31);
          {
            ATerm t_31 = NULL;
            t = k_55(t);
            {
              r_31 = t;
              {
                ATerm u_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(r_31)), not_null(p_31));
                {
                  u_31 = t;
                  if(((t_31 != NULL) && (t_31 != u_31)))
                    _fail(u_31);
                  else
                    t_31 = u_31;
                }
                t = not_null(t_31);
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
ATerm Call_2 (ATerm t, ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Call_2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm l_32 = NULL,n_32 = NULL;
        ATerm m_32 = NULL;
        t = SSLgetAnnotations(not_null(f_32));
        {
          m_32 = t;
          if(((l_32 != NULL) && (l_32 != m_32)))
            _fail(m_32);
          else
            l_32 = m_32;
        }
        {
          t = not_null(g_32);
          {
            ATerm p_32 = NULL;
            t = z_55(t);
            {
              n_32 = t;
              {
                t = not_null(h_32);
                {
                  ATerm r_32 = NULL;
                  t = a_56(t);
                  {
                    p_32 = t;
                    {
                      ATerm s_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(n_32), not_null(p_32)), not_null(l_32));
                      {
                        s_32 = t;
                        if(((r_32 != NULL) && (r_32 != s_32)))
                          _fail(s_32);
                        else
                          r_32 = s_32;
                      }
                      t = not_null(r_32);
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
ATerm LGChoice_2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm e_33 = NULL,f_33 = NULL,j_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym_LGChoice_2))
    {
      f_33 = ATgetArgument(e_33, 0);
      j_33 = ATgetArgument(e_33, 1);
      {
        ATerm n_33 = NULL,p_33 = NULL;
        ATerm o_33 = NULL;
        t = SSLgetAnnotations(not_null(e_33));
        {
          o_33 = t;
          if(((n_33 != NULL) && (n_33 != o_33)))
            _fail(o_33);
          else
            n_33 = o_33;
        }
        {
          t = not_null(f_33);
          {
            ATerm r_33 = NULL;
            t = h_55(t);
            {
              p_33 = t;
              {
                t = not_null(j_33);
                {
                  ATerm t_33 = NULL;
                  t = i_55(t);
                  {
                    r_33 = t;
                    {
                      ATerm u_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(p_33), not_null(r_33)), not_null(n_33));
                      {
                        u_33 = t;
                        if(((t_33 != NULL) && (t_33 != u_33)))
                          _fail(u_33);
                        else
                          t_33 = u_33;
                      }
                      t = not_null(t_33);
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
ATerm GChoice_2 (ATerm t, ATerm f_55 (ATerm), ATerm g_55 (ATerm))
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym_GChoice_2))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      {
        ATerm m_34 = NULL,o_34 = NULL;
        ATerm n_34 = NULL;
        t = SSLgetAnnotations(not_null(g_34));
        {
          n_34 = t;
          if(((m_34 != NULL) && (m_34 != n_34)))
            _fail(n_34);
          else
            m_34 = n_34;
        }
        {
          t = not_null(h_34);
          {
            ATerm q_34 = NULL;
            t = f_55(t);
            {
              o_34 = t;
              {
                t = not_null(i_34);
                {
                  ATerm s_34 = NULL;
                  t = g_55(t);
                  {
                    q_34 = t;
                    {
                      ATerm t_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(o_34), not_null(q_34)), not_null(m_34));
                      {
                        t_34 = t;
                        if(((s_34 != NULL) && (s_34 != t_34)))
                          _fail(t_34);
                        else
                          s_34 = t_34;
                      }
                      t = not_null(s_34);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm c_55 (ATerm), ATerm d_55 (ATerm), ATerm e_55 (ATerm))
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  g_35 = t;
  f_35 :
  if(match_cons(g_35, sym_GuardedLChoice_3))
    {
      h_35 = ATgetArgument(g_35, 0);
      i_35 = ATgetArgument(g_35, 1);
      j_35 = ATgetArgument(g_35, 2);
      {
        ATerm o_35 = NULL,q_35 = NULL;
        ATerm p_35 = NULL;
        t = SSLgetAnnotations(not_null(g_35));
        {
          p_35 = t;
          if(((o_35 != NULL) && (o_35 != p_35)))
            _fail(p_35);
          else
            o_35 = p_35;
        }
        {
          t = not_null(h_35);
          {
            ATerm s_35 = NULL;
            t = c_55(t);
            {
              q_35 = t;
              {
                t = not_null(i_35);
                {
                  ATerm u_35 = NULL;
                  t = d_55(t);
                  {
                    s_35 = t;
                    {
                      t = not_null(j_35);
                      {
                        ATerm w_35 = NULL;
                        t = e_55(t);
                        {
                          u_35 = t;
                          {
                            ATerm x_35 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(q_35), not_null(s_35), not_null(u_35)), not_null(o_35));
                            {
                              x_35 = t;
                              if(((w_35 != NULL) && (w_35 != x_35)))
                                _fail(x_35);
                              else
                                w_35 = x_35;
                            }
                            t = not_null(w_35);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm a_55 (ATerm), ATerm b_55 (ATerm))
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_LChoice_2))
    {
      l_36 = ATgetArgument(k_36, 0);
      m_36 = ATgetArgument(k_36, 1);
      {
        ATerm q_36 = NULL,s_36 = NULL;
        ATerm r_36 = NULL;
        t = SSLgetAnnotations(not_null(k_36));
        {
          r_36 = t;
          if(((q_36 != NULL) && (q_36 != r_36)))
            _fail(r_36);
          else
            q_36 = r_36;
        }
        {
          t = not_null(l_36);
          {
            ATerm u_36 = NULL;
            t = a_55(t);
            {
              s_36 = t;
              {
                t = not_null(m_36);
                {
                  ATerm w_36 = NULL;
                  t = b_55(t);
                  {
                    u_36 = t;
                    {
                      ATerm x_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(s_36), not_null(u_36)), not_null(q_36));
                      {
                        x_36 = t;
                        if(((w_36 != NULL) && (w_36 != x_36)))
                          _fail(x_36);
                        else
                          w_36 = x_36;
                      }
                      t = not_null(w_36);
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
ATerm Choice_2 (ATerm t, ATerm y_54 (ATerm), ATerm z_54 (ATerm))
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Choice_2))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      {
        ATerm p_37 = NULL,r_37 = NULL;
        ATerm q_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        {
          t = not_null(k_37);
          {
            ATerm t_37 = NULL;
            t = y_54(t);
            {
              r_37 = t;
              {
                t = not_null(l_37);
                {
                  ATerm v_37 = NULL;
                  t = z_54(t);
                  {
                    t_37 = t;
                    {
                      ATerm w_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(r_37), not_null(t_37)), not_null(p_37));
                      {
                        w_37 = t;
                        if(((v_37 != NULL) && (v_37 != w_37)))
                          _fail(w_37);
                        else
                          v_37 = w_37;
                      }
                      t = not_null(v_37);
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
ATerm Seq_2 (ATerm t, ATerm w_54 (ATerm), ATerm x_54 (ATerm))
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym_Seq_2))
    {
      l_38 = ATgetArgument(k_38, 0);
      m_38 = ATgetArgument(k_38, 1);
      {
        ATerm q_38 = NULL,s_38 = NULL;
        ATerm r_38 = NULL;
        t = SSLgetAnnotations(not_null(k_38));
        {
          r_38 = t;
          if(((q_38 != NULL) && (q_38 != r_38)))
            _fail(r_38);
          else
            q_38 = r_38;
        }
        {
          t = not_null(l_38);
          {
            ATerm u_38 = NULL;
            t = w_54(t);
            {
              s_38 = t;
              {
                t = not_null(m_38);
                {
                  ATerm w_38 = NULL;
                  t = x_54(t);
                  {
                    u_38 = t;
                    {
                      ATerm x_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(s_38), not_null(u_38)), not_null(q_38));
                      {
                        x_38 = t;
                        if(((w_38 != NULL) && (w_38 != x_38)))
                          _fail(x_38);
                        else
                          w_38 = x_38;
                      }
                      t = not_null(w_38);
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
ATerm Test_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm i_39 = NULL,j_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym_Test_1))
    {
      j_39 = ATgetArgument(i_39, 0);
      {
        ATerm m_39 = NULL,o_39 = NULL;
        ATerm n_39 = NULL;
        t = SSLgetAnnotations(not_null(i_39));
        {
          n_39 = t;
          if(((m_39 != NULL) && (m_39 != n_39)))
            _fail(n_39);
          else
            m_39 = n_39;
        }
        {
          t = not_null(j_39);
          {
            ATerm q_39 = NULL;
            t = u_54(t);
            {
              o_39 = t;
              {
                ATerm r_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(o_39)), not_null(m_39));
                {
                  r_39 = t;
                  if(((q_39 != NULL) && (q_39 != r_39)))
                    _fail(r_39);
                  else
                    q_39 = r_39;
                }
                t = not_null(q_39);
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
ATerm Not_1 (ATerm t, ATerm v_54 (ATerm))
{
  ATerm c_40 = NULL,d_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym_Not_1))
    {
      d_40 = ATgetArgument(c_40, 0);
      {
        ATerm g_40 = NULL,i_40 = NULL;
        ATerm h_40 = NULL;
        t = SSLgetAnnotations(not_null(c_40));
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
        {
          t = not_null(d_40);
          {
            ATerm k_40 = NULL;
            t = v_54(t);
            {
              i_40 = t;
              {
                ATerm l_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(i_40)), not_null(g_40));
                {
                  l_40 = t;
                  if(((k_40 != NULL) && (k_40 != l_40)))
                    _fail(l_40);
                  else
                    k_40 = l_40;
                }
                t = not_null(k_40);
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
  ATerm u_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym_Fail_0))
    {
      ATerm w_40 = NULL,y_40 = NULL;
      ATerm r_4;
      r_4 = t;
      {
        ATerm x_40 = NULL;
        t = SSLgetAnnotations(not_null(u_40));
        {
          x_40 = t;
          if(((w_40 != NULL) && (w_40 != x_40)))
            _fail(x_40);
          else
            w_40 = x_40;
        }
      }
      t = r_4;
      {
        ATerm z_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(w_40));
        {
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
        }
        t = not_null(y_40);
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
  ATerm h_41 = NULL;
  h_41 = t;
  g_41 :
  if(match_cons(h_41, sym_Id_0))
    {
      ATerm j_41 = NULL,l_41 = NULL;
      ATerm s_4;
      s_4 = t;
      {
        ATerm k_41 = NULL;
        t = SSLgetAnnotations(not_null(h_41));
        {
          k_41 = t;
          if(((j_41 != NULL) && (j_41 != k_41)))
            _fail(k_41);
          else
            j_41 = k_41;
        }
      }
      t = s_4;
      {
        ATerm m_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(j_41));
        {
          m_41 = t;
          if(((l_41 != NULL) && (l_41 != m_41)))
            _fail(m_41);
          else
            l_41 = m_41;
        }
        t = not_null(l_41);
      }
    }
  else
    {
      _fail(t);
    }
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
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
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                  ATerm h_0 (ATerm t)
                                                                  {
                                                                    ATerm p_0 (ATerm t)
                                                                    {
                                                                      ATerm p_5 = t;
                                                                      int q_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          LocalPopChoice(q_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_5;
                                                                          t = Mod_2(t, is_string_0, is_string_0);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1(t, p_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, h_0, o_0);
                                                                  LocalPopChoice(o_5);
                                                                }
                                                              else
                                                                {
                                                                  t = n_5;
                                                                  {
                                                                    ATerm r_5 = t;
                                                                    int s_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(c_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_6;
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
                                                                                                                  t = Match_1(t, term_expression_0);
                                                                                                                  LocalPopChoice(g_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_6;
                                                                                                                  {
                                                                                                                    ATerm h_6 = t;
                                                                                                                    int i_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(i_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = h_6;
                                                                                                                        {
                                                                                                                          ATerm j_6 = t;
                                                                                                                          int k_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                              LocalPopChoice(k_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_6;
                                                                                                                              {
                                                                                                                                ATerm l_6 = t;
                                                                                                                                int m_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(m_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = l_6;
                                                                                                                                    {
                                                                                                                                      ATerm n_6 = t;
                                                                                                                                      int o_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, s_0);
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
                                                                                                                                                ATerm t_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm u_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, u_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, t_0, strategy_expression_0);
                                                                                                                                                LocalPopChoice(q_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = p_6;
                                                                                                                                                {
                                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_r_6;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, v_0);
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm s_41 = NULL;
  s_41 = t;
  t = SSL_is_string(not_null(s_41));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm s_55 (ATerm), ATerm t_55 (ATerm))
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym_VarDec_2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      {
        ATerm h_42 = NULL,j_42 = NULL;
        ATerm i_42 = NULL;
        t = SSLgetAnnotations(not_null(b_42));
        {
          i_42 = t;
          if(((h_42 != NULL) && (h_42 != i_42)))
            _fail(i_42);
          else
            h_42 = i_42;
        }
        {
          t = not_null(c_42);
          {
            ATerm l_42 = NULL;
            t = s_55(t);
            {
              j_42 = t;
              {
                t = not_null(d_42);
                {
                  ATerm n_42 = NULL;
                  t = t_55(t);
                  {
                    l_42 = t;
                    {
                      ATerm o_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_42), not_null(l_42)), not_null(h_42));
                      {
                        o_42 = t;
                        if(((n_42 != NULL) && (n_42 != o_42)))
                          _fail(o_42);
                        else
                          n_42 = o_42;
                      }
                      t = not_null(n_42);
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
ATerm Mod_2 (ATerm t, ATerm u_53 (ATerm), ATerm v_53 (ATerm))
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  a_43 = t;
  z_42 :
  if(match_cons(a_43, sym_Mod_2))
    {
      b_43 = ATgetArgument(a_43, 0);
      c_43 = ATgetArgument(a_43, 1);
      {
        ATerm g_43 = NULL,i_43 = NULL;
        ATerm h_43 = NULL;
        t = SSLgetAnnotations(not_null(a_43));
        {
          h_43 = t;
          if(((g_43 != NULL) && (g_43 != h_43)))
            _fail(h_43);
          else
            g_43 = h_43;
        }
        {
          t = not_null(b_43);
          {
            ATerm k_43 = NULL;
            t = u_53(t);
            {
              i_43 = t;
              {
                t = not_null(c_43);
                {
                  ATerm m_43 = NULL;
                  t = v_53(t);
                  {
                    k_43 = t;
                    {
                      ATerm n_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(i_43), not_null(k_43)), not_null(g_43));
                      {
                        n_43 = t;
                        if(((m_43 != NULL) && (m_43 != n_43)))
                          _fail(n_43);
                        else
                          m_43 = n_43;
                      }
                      t = not_null(m_43);
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
ATerm SDef_3 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym_SDef_3))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      d_44 = ATgetArgument(a_44, 2);
      {
        ATerm i_44 = NULL,k_44 = NULL;
        ATerm j_44 = NULL;
        t = SSLgetAnnotations(not_null(a_44));
        {
          j_44 = t;
          if(((i_44 != NULL) && (i_44 != j_44)))
            _fail(j_44);
          else
            i_44 = j_44;
        }
        {
          t = not_null(b_44);
          {
            ATerm m_44 = NULL;
            t = p_55(t);
            {
              k_44 = t;
              {
                t = not_null(c_44);
                {
                  ATerm o_44 = NULL;
                  t = q_55(t);
                  {
                    m_44 = t;
                    {
                      t = not_null(d_44);
                      {
                        ATerm t_44 = NULL;
                        t = r_55(t);
                        {
                          o_44 = t;
                          {
                            ATerm u_44 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(k_44), not_null(m_44), not_null(o_44)), not_null(i_44));
                            {
                              u_44 = t;
                              if(((t_44 != NULL) && (t_44 != u_44)))
                                _fail(u_44);
                              else
                                t_44 = u_44;
                            }
                            t = not_null(t_44);
                          }
                        }
                      }
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
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm u_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(v_6);
          }
        else
          {
            t = u_6;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, y_0);
        return(t);
      }
      t = SDef_3(t, w_0, x_0, strategy_expression_0);
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_w_6;
          return(t);
        }
        t = debug_1(t, z_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm d_45 (ATerm t)
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = Cons_2(t, t_72, d_45);
      }
    return(t);
  }
  t = d_45(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm c_54 (ATerm))
{
  ATerm j_45 = NULL,k_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym_Strategies_1))
    {
      k_45 = ATgetArgument(j_45, 0);
      {
        ATerm n_45 = NULL,p_45 = NULL;
        ATerm o_45 = NULL;
        t = SSLgetAnnotations(not_null(j_45));
        {
          o_45 = t;
          if(((n_45 != NULL) && (n_45 != o_45)))
            _fail(o_45);
          else
            n_45 = o_45;
        }
        {
          t = not_null(k_45);
          {
            ATerm r_45 = NULL;
            t = c_54(t);
            {
              p_45 = t;
              {
                ATerm s_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_45)), not_null(n_45));
                {
                  s_45 = t;
                  if(((r_45 != NULL) && (r_45 != s_45)))
                    _fail(s_45);
                  else
                    r_45 = s_45;
                }
                t = not_null(r_45);
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
ATerm Specification_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm e_46 = NULL,f_46 = NULL;
  e_46 = t;
  d_46 :
  if(match_cons(e_46, sym_Specification_1))
    {
      f_46 = ATgetArgument(e_46, 0);
      {
        ATerm i_46 = NULL,k_46 = NULL;
        ATerm j_46 = NULL;
        t = SSLgetAnnotations(not_null(e_46));
        {
          j_46 = t;
          if(((i_46 != NULL) && (i_46 != j_46)))
            _fail(j_46);
          else
            i_46 = j_46;
        }
        {
          t = not_null(f_46);
          {
            ATerm m_46 = NULL;
            t = e_54(t);
            {
              k_46 = t;
              {
                ATerm n_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(k_46)), not_null(i_46));
                {
                  n_46 = t;
                  if(((m_46 != NULL) && (m_46 != n_46)))
                    _fail(n_46);
                  else
                    m_46 = n_46;
                }
                t = not_null(m_46);
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
ATerm stratego_specification_0 (ATerm t)
{
  ATerm z_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, d_1);
            return(t);
          }
          t = Cons_2(t, c_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, b_1);
        return(t);
      }
      t = Specification_1(t, a_1);
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_b_7;
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm v_45 (ATerm), ATerm w_45 (ATerm))
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym__2))
    {
      z_46 = ATgetArgument(y_46, 0);
      a_47 = ATgetArgument(y_46, 1);
      {
        ATerm g_47 = NULL,i_47 = NULL;
        ATerm h_47 = NULL;
        t = SSLgetAnnotations(not_null(y_46));
        {
          h_47 = t;
          if(((g_47 != NULL) && (g_47 != h_47)))
            _fail(h_47);
          else
            g_47 = h_47;
        }
        {
          t = not_null(z_46);
          {
            ATerm k_47 = NULL;
            t = v_45(t);
            {
              i_47 = t;
              {
                t = not_null(a_47);
                {
                  ATerm m_47 = NULL;
                  t = w_45(t);
                  {
                    k_47 = t;
                    {
                      ATerm n_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_47), not_null(k_47)), not_null(g_47));
                      {
                        n_47 = t;
                        if(((m_47 != NULL) && (m_47 != n_47)))
                          _fail(n_47);
                        else
                          m_47 = n_47;
                      }
                      t = not_null(m_47);
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
  ATerm v_47 = NULL;
  ATerm c_7;
  c_7 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm w_47 = NULL,x_47 = NULL;
      w_47 = t;
      u_47 :
      if(match_cons(w_47, sym_Program_1))
        {
          x_47 = ATgetArgument(w_47, 0);
          if(((v_47 != NULL) && (v_47 != x_47)))
            _fail(x_47);
          else
            v_47 = x_47;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(v_47)), term_d_7));
      {
        t = printnl_0(t);
        {
          t = term_f_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, term_g_7));
  {
    t = printnl_0(t);
    {
      t = term_f_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  t = SSL_TicksToSeconds(not_null(a_48));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym__2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_48), not_null(h_48));
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = SSL_addr(not_null(g_48), not_null(h_48));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_67 (ATerm), ATerm k_67 (ATerm))
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_67(t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
        o_48 = t;
        n_48 :
        if(((ATgetType(o_48) == AT_LIST) && ((ATermList) o_48 != ATempty)))
          {
            p_48 = ATgetFirst((ATermList) o_48);
            q_48 = (ATerm) ATgetNext((ATermList) o_48);
            {
              ATerm t_48 = NULL;
              ATerm u_48 = NULL;
              t = not_null(q_48);
              {
                t = foldr_2(t, j_67, k_67);
                {
                  u_48 = t;
                  if(((t_48 != NULL) && (t_48 != u_48)))
                    _fail(u_48);
                  else
                    t_48 = u_48;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_48), not_null(t_48));
                t = k_67(t);
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
ATerm crush_2 (ATerm t, ATerm x_68 (ATerm), ATerm y_68 (ATerm))
{
  ATerm b_49 = NULL;
  ATerm d_49 = NULL;
  b_49 = t;
  {
    ATerm e_49 = NULL;
    ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
    t = not_null(b_49);
    {
      e_49 = t;
      {
        t = SSL_explode_term(not_null(e_49));
        {
          g_49 = t;
          a_49 :
          if(match_cons(g_49, sym__2))
            {
              h_49 = ATgetArgument(g_49, 0);
              i_49 = ATgetArgument(g_49, 1);
              if(((d_49 != NULL) && (d_49 != i_49)))
                _fail(i_49);
              else
                d_49 = i_49;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_49);
      t = foldr_2(t, x_68, y_68);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm g_1 (ATerm t)
    {
      t = term_l_7;
      return(t);
    }
    t = crush_2(t, g_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm z_49 = NULL;
    ATerm i_1 (ATerm t)
    {
      ATerm m_7 = t;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm u_49 = NULL;
            u_49 = t;
            m_49 :
            if(!(match_cons(u_49, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, j_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_7;
        }
      return(t);
    }
    t = _2(t, i_1, _id);
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm v_49 = NULL,w_49 = NULL;
          v_49 = t;
          o_49 :
          if(match_cons(v_49, sym_Runtime_1))
            {
              w_49 = ATgetArgument(v_49, 0);
              if(((s_49 != NULL) && (s_49 != w_49)))
                _fail(w_49);
              else
                s_49 = w_49;
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
        ATerm m_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm x_49 = NULL,y_49 = NULL;
            x_49 = t;
            q_49 :
            if(match_cons(x_49, sym_Program_1))
              {
                y_49 = ATgetArgument(x_49, 0);
                if(((t_49 != NULL) && (t_49 != y_49)))
                  _fail(y_49);
                else
                  t_49 = y_49;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_1);
          return(t);
        }
        t = _2(t, m_1, _id);
        {
          ATerm a_50 = NULL;
          t = run_time_0(t);
          {
            a_50 = t;
            if(((z_49 != NULL) && (z_49 != a_50)))
              _fail(a_50);
            else
              z_49 = a_50;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_7), not_null(z_49)), term_n_7), not_null(t_49)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, h_1);
  {
    t = term_l_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  g_50 = t;
  f_50 :
  if(match_cons(g_50, sym__2))
    {
      h_50 = ATgetArgument(g_50, 0);
      i_50 = ATgetArgument(g_50, 1);
      t = SSL_WriteToTextFile(not_null(h_50), not_null(i_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  n_50 :
  if(match_cons(o_50, sym__2))
    {
      p_50 = ATgetArgument(o_50, 0);
      q_50 = ATgetArgument(o_50, 1);
      t = SSL_WriteToBinaryFile(not_null(p_50), not_null(q_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_50 = NULL;
  ATerm p_7;
  p_7 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm q_7 = t;
      int r_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm z_50 = NULL,a_51 = NULL;
            z_50 = t;
            v_50 :
            if(match_cons(z_50, sym_Output_1))
              {
                a_51 = ATgetArgument(z_50, 0);
                if(((y_50 != NULL) && (y_50 != a_51)))
                  _fail(a_51);
                else
                  y_50 = a_51;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_1);
          LocalPopChoice(r_7);
        }
      else
        {
          t = q_7;
          {
            ATerm b_51 = NULL;
            t = term_s_7;
            {
              b_51 = t;
              if(((y_50 != NULL) && (y_50 != b_51)))
                _fail(b_51);
              else
                y_50 = b_51;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_1, _id);
  }
  t = p_7;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        t = not_null(y_50);
        return(t);
      }
      t = split_2(t, r_1, _id);
      return(t);
    }
    t = _2(t, _id, q_1);
    {
      ATerm t_7 = t;
      int u_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm c_51 = NULL;
              c_51 = t;
              x_50 :
              if(!(match_cons(c_51, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_1);
            return(t);
          }
          t = _2(t, s_1, WriteToBinaryFile_0);
          LocalPopChoice(u_7);
        }
      else
        {
          t = t_7;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm i_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  ATerm v_7;
  v_7 = t;
  t = dtime_0(t);
  t = v_7;
  {
    t = y_62(t);
    {
      ATerm w_7;
      w_7 = t;
      {
        ATerm j_51 = NULL;
        t = dtime_0(t);
        {
          j_51 = t;
          if(((i_51 != NULL) && (i_51 != j_51)))
            _fail(j_51);
          else
            i_51 = j_51;
        }
      }
      t = w_7;
      {
        k_51 = t;
        h_51 :
        if(match_cons(k_51, sym__2))
          {
            l_51 = ATgetArgument(k_51, 0);
            m_51 = ATgetArgument(k_51, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_51)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_51))), not_null(m_51));
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
  ATerm s_51 = NULL;
  s_51 = t;
  t = SSL_ReadFromFile(not_null(s_51));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm x_51 = NULL,z_51 = NULL;
  ATerm x_7;
  x_7 = t;
  {
    ATerm y_51 = NULL;
    t = x_65(t);
    {
      y_51 = t;
      if(((x_51 != NULL) && (x_51 != y_51)))
        _fail(y_51);
      else
        x_51 = y_51;
    }
  }
  t = x_7;
  {
    ATerm a_52 = NULL;
    t = y_65(t);
    {
      a_52 = t;
      if(((z_51 != NULL) && (z_51 != a_52)))
        _fail(a_52);
      else
        z_51 = a_52;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_51), not_null(z_51));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_52 = NULL;
  ATerm y_7;
  y_7 = t;
  {
    ATerm z_7 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm h_52 = NULL,i_52 = NULL;
          h_52 = t;
          e_52 :
          if(match_cons(h_52, sym_Input_1))
            {
              i_52 = ATgetArgument(h_52, 0);
              if(((g_52 != NULL) && (g_52 != i_52)))
                _fail(i_52);
              else
                g_52 = i_52;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_1);
        LocalPopChoice(d_8);
      }
    else
      {
        t = z_7;
        {
          ATerm j_52 = NULL;
          t = term_e_8;
          {
            j_52 = t;
            if(((g_52 != NULL) && (g_52 != j_52)))
              _fail(j_52);
            else
              g_52 = j_52;
          }
        }
      }
  }
  t = y_7;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(g_52);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_52 = NULL;
  q_52 = t;
  p_52 :
  if(match_cons(q_52, sym_Version_0))
    {
      ATerm s_52 = NULL,u_52 = NULL;
      ATerm f_8;
      f_8 = t;
      {
        ATerm t_52 = NULL;
        t = SSLgetAnnotations(not_null(q_52));
        {
          t_52 = t;
          if(((s_52 != NULL) && (s_52 != t_52)))
            _fail(t_52);
          else
            s_52 = t_52;
        }
      }
      t = f_8;
      {
        ATerm v_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_52));
        {
          v_52 = t;
          if(((u_52 != NULL) && (u_52 != v_52)))
            _fail(v_52);
          else
            u_52 = v_52;
        }
        t = not_null(u_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        {
          ATerm i_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_8);
            }
          else
            {
              t = i_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_1);
  t = w_62(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  t = SSL_table_create(not_null(a_53));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_53 = NULL;
  h_53 = t;
  {
    ATerm k_8;
    k_8 = t;
    {
      t = term_l_8;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_8, term_m_8, not_null(h_53));
          t = table_put_0(t);
        }
      }
    }
    t = k_8;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym__2))
    {
      n_53 = ATgetArgument(m_53, 0);
      o_53 = ATgetArgument(m_53, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_8, not_null(n_53), not_null(o_53));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,d_54 = NULL,f_54 = NULL;
  z_53 = t;
  x_53 :
  if(match_string(z_53, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(z_53) == AT_LIST) && ((ATermList) z_53 != ATempty)))
        {
          a_54 = ATgetFirst((ATermList) z_53);
          b_54 = (ATerm) ATgetNext((ATermList) z_53);
          y_53 :
          if(((ATgetType(b_54) == AT_LIST) && ((ATermList) b_54 != ATempty)))
            {
              d_54 = ATgetFirst((ATermList) b_54);
              f_54 = (ATerm) ATgetNext((ATermList) b_54);
              {
                ATerm j_54 = NULL;
                ATerm o_8;
                o_8 = t;
                {
                  t = not_null(a_54);
                  t = j_0(t);
                }
                t = o_8;
                {
                  ATerm k_54 = NULL;
                  t = not_null(d_54);
                  {
                    t = k_0(t);
                    {
                      k_54 = t;
                      if(((j_54 != NULL) && (j_54 != k_54)))
                        _fail(k_54);
                      else
                        j_54 = k_54;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_54)), not_null(j_54));
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
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_56 = NULL;
        y_56 = t;
        o_54 :
        if(!(match_string(y_56, "-S")))
          {
            if(!(match_string(y_56, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        t = term_t_8;
        t = set_config_0(t);
        t = term_u_8;
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_v_8;
        return(t);
      }
      t = Option_3(t, x_1, y_1, z_1);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 (ATerm t)
            {
              ATerm z_56 = NULL;
              z_56 = t;
              j_55 :
              if(!(match_string(z_56, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              t = term_z_8;
              t = set_config_0(t);
              t = term_a_9;
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_b_9;
              return(t);
            }
            t = Option_3(t, a_2, b_2, c_2);
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_2 (ATerm t)
                  {
                    ATerm a_57 = NULL;
                    a_57 = t;
                    u_55 :
                    if(!(match_string(a_57, "-v")))
                      {
                        if(!(match_string(a_57, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = term_f_9;
                    t = set_config_0(t);
                    t = term_g_9;
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_h_9;
                    return(t);
                  }
                  t = Option_3(t, d_2, e_2, f_2);
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  {
                    ATerm i_9 = t;
                    int j_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm b_57 = NULL;
                          b_57 = t;
                          v_55 :
                          if(!(match_string(b_57, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm e_57 = NULL;
                          ATerm k_9;
                          k_9 = t;
                          {
                            ATerm c_57 = NULL;
                            ATerm d_57 = NULL;
                            d_57 = t;
                            if(((c_57 != NULL) && (c_57 != d_57)))
                              _fail(d_57);
                            else
                              c_57 = d_57;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(c_57));
                              t = set_config_0(t);
                            }
                          }
                          t = k_9;
                          {
                            ATerm f_57 = NULL;
                            f_57 = t;
                            if(((e_57 != NULL) && (e_57 != f_57)))
                              _fail(f_57);
                            else
                              e_57 = f_57;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(e_57));
                          }
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          t = term_m_9;
                          return(t);
                        }
                        t = ArgOption_3(t, g_2, h_2, i_2);
                        LocalPopChoice(j_9);
                      }
                    else
                      {
                        t = i_9;
                        {
                          ATerm n_9 = t;
                          int o_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm g_57 = NULL;
                                g_57 = t;
                                y_55 :
                                if(!(match_string(g_57, "-i")))
                                  {
                                    if(!(match_string(g_57, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                ATerm j_57 = NULL;
                                ATerm p_9;
                                p_9 = t;
                                {
                                  ATerm h_57 = NULL;
                                  ATerm i_57 = NULL;
                                  i_57 = t;
                                  if(((h_57 != NULL) && (h_57 != i_57)))
                                    _fail(i_57);
                                  else
                                    h_57 = i_57;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_q_9, not_null(h_57));
                                    t = set_config_0(t);
                                  }
                                }
                                t = p_9;
                                {
                                  ATerm k_57 = NULL;
                                  k_57 = t;
                                  if(((j_57 != NULL) && (j_57 != k_57)))
                                    _fail(k_57);
                                  else
                                    j_57 = k_57;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_57));
                                }
                                return(t);
                              }
                              ATerm m_2 (ATerm t)
                              {
                                t = term_r_9;
                                return(t);
                              }
                              t = ArgOption_3(t, j_2, k_2, m_2);
                              LocalPopChoice(o_9);
                            }
                          else
                            {
                              t = n_9;
                              {
                                ATerm s_9 = t;
                                int t_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_2 (ATerm t)
                                    {
                                      ATerm l_57 = NULL;
                                      l_57 = t;
                                      k_56 :
                                      if(!(match_string(l_57, "-o")))
                                        {
                                          if(!(match_string(l_57, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      ATerm o_57 = NULL;
                                      ATerm u_9;
                                      u_9 = t;
                                      {
                                        ATerm m_57 = NULL;
                                        ATerm n_57 = NULL;
                                        n_57 = t;
                                        if(((m_57 != NULL) && (m_57 != n_57)))
                                          _fail(n_57);
                                        else
                                          m_57 = n_57;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(m_57));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = u_9;
                                      {
                                        ATerm p_57 = NULL;
                                        p_57 = t;
                                        if(((o_57 != NULL) && (o_57 != p_57)))
                                          _fail(p_57);
                                        else
                                          o_57 = p_57;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_57));
                                      }
                                      return(t);
                                    }
                                    ATerm p_2 (ATerm t)
                                    {
                                      t = term_w_9;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, n_2, o_2, p_2);
                                    LocalPopChoice(t_9);
                                  }
                                else
                                  {
                                    t = s_9;
                                    {
                                      ATerm x_9 = t;
                                      int y_9 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_2 (ATerm t)
                                          {
                                            ATerm q_57 = NULL;
                                            q_57 = t;
                                            w_56 :
                                            if(!(match_string(q_57, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_2 (ATerm t)
                                          {
                                            t = term_a_10;
                                            t = set_config_0(t);
                                            t = term_b_10;
                                            return(t);
                                          }
                                          ATerm s_2 (ATerm t)
                                          {
                                            t = term_c_10;
                                            return(t);
                                          }
                                          t = Option_3(t, q_2, r_2, s_2);
                                          LocalPopChoice(y_9);
                                        }
                                      else
                                        {
                                          t = x_9;
                                          {
                                            ATerm t_2 (ATerm t)
                                            {
                                              ATerm r_57 = NULL;
                                              r_57 = t;
                                              x_56 :
                                              if(!(match_string(r_57, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_2 (ATerm t)
                                            {
                                              t = term_e_10;
                                              t = set_config_0(t);
                                              t = term_f_10;
                                              return(t);
                                            }
                                            ATerm v_2 (ATerm t)
                                            {
                                              t = term_g_10;
                                              return(t);
                                            }
                                            t = Option_3(t, t_2, u_2, v_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm z_57 = NULL;
  z_57 = t;
  t = SSL_table_destroy(not_null(z_57));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_58 = NULL;
  d_58 = t;
  t = SSL_exit(not_null(d_58));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  t = SSL_implode_string(not_null(h_58));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm k_58 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_58);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          t = Nil_0(t);
          t = f_73(t);
        }
      }
    return(t);
  }
  t = k_58(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL;
        n_58 = t;
        m_58 :
        if(((ATgetType(n_58) == AT_LIST) && ((ATermList) n_58 != ATempty)))
          {
            o_58 = ATgetFirst((ATermList) n_58);
            p_58 = (ATerm) ATgetNext((ATermList) n_58);
            {
              t = not_null(o_58);
              {
                ATerm w_2 (ATerm t)
                {
                  t = not_null(p_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_2);
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
  ATerm v_58 = NULL;
  v_58 = t;
  t = SSL_explode_string(not_null(v_58));
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
ATerm long_description_1 (ATerm t, ATerm p_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm y_58 (ATerm t)
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = Cons_2(t, r_72, y_58);
      }
    return(t);
  }
  t = y_58(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
  h_59 = t;
  e_59 :
  if(((ATgetType(h_59) == AT_LIST) && ((ATermList) h_59 != ATempty)))
    {
      f_59 = ATgetFirst((ATermList) h_59);
      g_59 = (ATerm) ATgetNext((ATermList) h_59);
      {
        ATerm k_59 = NULL;
        t = not_null(g_59);
        {
          ATerm n_10;
          n_10 = t;
          {
            ATerm l_59 = NULL,n_59 = NULL,p_59 = NULL;
            ATerm o_10;
            o_10 = t;
            {
              ATerm m_59 = NULL;
              t = i_0(t);
              {
                m_59 = t;
                if(((l_59 != NULL) && (l_59 != m_59)))
                  _fail(m_59);
                else
                  l_59 = m_59;
              }
            }
            t = o_10;
            {
              ATerm o_59 = NULL;
              t = not_null(f_59);
              {
                t = f_0(t);
                {
                  o_59 = t;
                  if(((n_59 != NULL) && (n_59 != o_59)))
                    _fail(o_59);
                  else
                    n_59 = o_59;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_59)), not_null(n_59));
                {
                  p_59 = t;
                  if(((k_59 != NULL) && (k_59 != p_59)))
                    _fail(p_59);
                  else
                    k_59 = p_59;
                }
              }
            }
          }
          t = n_10;
          {
            ATerm x_2 (ATerm t)
            {
              t = not_null(k_59);
              return(t);
            }
            t = reverse_acc_2(t, f_0, x_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) h_59 == ATempty))
        {
          {
            t = term_s_8;
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
  ATerm y_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_47 (ATerm))
{
  ATerm a_60 = NULL,b_60 = NULL;
  a_60 = t;
  z_59 :
  if(match_cons(a_60, sym_Program_1))
    {
      b_60 = ATgetArgument(a_60, 0);
      {
        ATerm e_60 = NULL,g_60 = NULL;
        ATerm f_60 = NULL;
        t = SSLgetAnnotations(not_null(a_60));
        {
          f_60 = t;
          if(((e_60 != NULL) && (e_60 != f_60)))
            _fail(f_60);
          else
            e_60 = f_60;
        }
        {
          t = not_null(b_60);
          {
            ATerm i_60 = NULL;
            t = e_47(t);
            {
              g_60 = t;
              {
                ATerm j_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_60)), not_null(e_60));
                {
                  j_60 = t;
                  if(((i_60 != NULL) && (i_60 != j_60)))
                    _fail(j_60);
                  else
                    i_60 = j_60;
                }
                t = not_null(i_60);
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
  ATerm y_60 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      ATerm z_60 = NULL;
      z_60 = t;
      if(((y_60 != NULL) && (y_60 != z_60)))
        _fail(z_60);
      else
        y_60 = z_60;
      return(t);
    }
    t = Program_1(t, a_3);
    return(t);
  }
  t = option_defined_1(t, z_2);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm a_61 = NULL;
      ATerm b_61 = NULL;
      t = term_s_8;
      {
        ATerm c_3 (ATerm t)
        {
          t = not_null(y_60);
          return(t);
        }
        t = short_description_1(t, c_3);
        {
          t = concat_strings_0(t);
          {
            b_61 = t;
            if(((a_61 != NULL) && (a_61 != b_61)))
              _fail(b_61);
            else
              a_61 = b_61;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, not_null(a_61)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATempty, term_p_10));
      {
        t = printnl_0(t);
        {
          t = term_u_10;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_3 (ATerm t)
                {
                  ATerm c_61 = NULL;
                  c_61 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_61)), term_v_10));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_3);
                {
                  ATerm e_3 (ATerm t)
                  {
                    ATerm e_61 = NULL;
                    ATerm f_61 = NULL;
                    t = term_s_8;
                    {
                      ATerm f_3 (ATerm t)
                      {
                        t = not_null(y_60);
                        return(t);
                      }
                      t = long_description_1(t, f_3);
                      {
                        t = concat_strings_0(t);
                        {
                          f_61 = t;
                          if(((e_61 != NULL) && (e_61 != f_61)))
                            _fail(f_61);
                          else
                            e_61 = f_61;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_61)), term_w_10));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_3);
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
  ATerm m_61 = NULL,o_61 = NULL,p_61 = NULL;
  m_61 = t;
  l_61 :
  if(match_cons(m_61, sym__2))
    {
      o_61 = ATgetArgument(m_61, 0);
      p_61 = ATgetArgument(m_61, 1);
      {
        ATerm x_10;
        x_10 = t;
        t = SSL_printnl(not_null(o_61), not_null(p_61));
        t = x_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_47 (ATerm))
{
  ATerm y_61 = NULL,z_61 = NULL;
  y_61 = t;
  x_61 :
  if(match_cons(y_61, sym_Undefined_1))
    {
      z_61 = ATgetArgument(y_61, 0);
      {
        ATerm c_62 = NULL,f_62 = NULL;
        ATerm e_62 = NULL;
        t = SSLgetAnnotations(not_null(y_61));
        {
          e_62 = t;
          if(((c_62 != NULL) && (c_62 != e_62)))
            _fail(e_62);
          else
            c_62 = e_62;
        }
        {
          t = not_null(z_61);
          {
            ATerm j_62 = NULL;
            t = f_47(t);
            {
              f_62 = t;
              {
                ATerm k_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_62)), not_null(c_62));
                {
                  k_62 = t;
                  if(((j_62 != NULL) && (j_62 != k_62)))
                    _fail(k_62);
                  else
                    j_62 = k_62;
                }
                t = not_null(j_62);
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
ATerm fetch_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm s_62 (ATerm t)
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_72, _id);
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = Cons_2(t, _id, s_62);
      }
    return(t);
  }
  t = s_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_61 (ATerm))
{
  t = fetch_1(t, n_61);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_62 = NULL;
  z_62 = t;
  x_62 :
  if(match_cons(z_62, sym_Help_0))
    {
      ATerm b_63 = NULL,d_63 = NULL;
      ATerm a_11;
      a_11 = t;
      {
        ATerm c_63 = NULL;
        t = SSLgetAnnotations(not_null(z_62));
        {
          c_63 = t;
          if(((b_63 != NULL) && (b_63 != c_63)))
            _fail(c_63);
          else
            b_63 = c_63;
        }
      }
      t = a_11;
      {
        ATerm e_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_63));
        {
          e_63 = t;
          if(((d_63 != NULL) && (d_63 != e_63)))
            _fail(e_63);
          else
            d_63 = e_63;
        }
        t = not_null(d_63);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_79(t);
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,n_63 = NULL;
  k_63 = t;
  j_63 :
  if(match_cons(k_63, sym__2))
    {
      l_63 = ATgetArgument(k_63, 0);
      n_63 = ATgetArgument(k_63, 1);
      t = SSL_table_get(not_null(l_63), not_null(n_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL;
  u_63 = t;
  t_63 :
  if(match_cons(u_63, sym__3))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      x_63 = ATgetArgument(u_63, 2);
      {
        ATerm f_11;
        f_11 = t;
        {
          ATerm b_64 = NULL;
          ATerm c_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_63), not_null(w_63));
          {
            ATerm g_11 = t;
            int h_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_11);
              }
            else
              {
                t = g_11;
                t = (ATerm) ATempty;
              }
            {
              c_64 = t;
              if(((b_64 != NULL) && (b_64 != c_64)))
                _fail(c_64);
              else
                b_64 = c_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_63), not_null(w_63), (ATerm) ATinsert(CheckATermList(not_null(b_64)), not_null(x_63)));
            t = table_put_0(t);
          }
        }
        t = f_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm g_64 = NULL;
  ATerm h_64 = NULL;
  t = term_s_8;
  {
    t = t_60(t);
    {
      h_64 = t;
      if(((g_64 != NULL) && (g_64 != h_64)))
        _fail(h_64);
      else
        g_64 = h_64;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_q_10, term_t_10, not_null(g_64));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
  n_64 = t;
  m_64 :
  if(match_string(n_64, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(n_64) == AT_LIST) && ((ATermList) n_64 != ATempty)))
        {
          o_64 = ATgetFirst((ATermList) n_64);
          p_64 = (ATerm) ATgetNext((ATermList) n_64);
          {
            ATerm s_64 = NULL;
            ATerm i_11;
            i_11 = t;
            {
              t = not_null(o_64);
              t = a_0(t);
            }
            t = i_11;
            {
              ATerm t_64 = NULL;
              t = term_s_8;
              {
                t = b_0(t);
                {
                  t_64 = t;
                  if(((s_64 != NULL) && (s_64 != t_64)))
                    _fail(t_64);
                  else
                    s_64 = t_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_64)), not_null(s_64));
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
  ATerm g_3 (ATerm t)
  {
    ATerm y_64 = NULL;
    y_64 = t;
    x_64 :
    if(!(match_string(y_64, "--help")))
      {
        if(!(match_string(y_64, "-h")))
          {
            if(!(match_string(y_64, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_j_11;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_k_11;
    return(t);
  }
  t = Option_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL;
  b_65 = t;
  a_65 :
  if(((ATgetType(b_65) == AT_LIST) && ((ATermList) b_65 != ATempty)))
    {
      c_65 = ATgetFirst((ATermList) b_65);
      d_65 = (ATerm) ATgetNext((ATermList) b_65);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_65)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_65)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
  n_65 = t;
  m_65 :
  if(((ATgetType(n_65) == AT_LIST) && ((ATermList) n_65 != ATempty)))
    {
      o_65 = ATgetFirst((ATermList) n_65);
      p_65 = (ATerm) ATgetNext((ATermList) n_65);
      {
        ATerm t_65 = NULL,v_65 = NULL;
        ATerm u_65 = NULL;
        t = SSLgetAnnotations(not_null(n_65));
        {
          u_65 = t;
          if(((t_65 != NULL) && (t_65 != u_65)))
            _fail(u_65);
          else
            t_65 = u_65;
        }
        {
          t = not_null(o_65);
          {
            ATerm z_65 = NULL;
            t = u_56(t);
            {
              v_65 = t;
              {
                t = not_null(p_65);
                {
                  ATerm b_66 = NULL;
                  t = v_56(t);
                  {
                    z_65 = t;
                    {
                      ATerm c_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_65)), not_null(v_65)), not_null(t_65));
                      {
                        c_66 = t;
                        if(((b_66 != NULL) && (b_66 != c_66)))
                          _fail(c_66);
                        else
                          b_66 = c_66;
                      }
                      t = not_null(b_66);
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
  ATerm m_66 = NULL;
  m_66 = t;
  l_66 :
  if(((ATermList) m_66 == ATempty))
    {
      {
        ATerm o_66 = NULL,q_66 = NULL;
        ATerm o_11;
        o_11 = t;
        {
          ATerm p_66 = NULL;
          t = SSLgetAnnotations(not_null(m_66));
          {
            p_66 = t;
            if(((o_66 != NULL) && (o_66 != p_66)))
              _fail(p_66);
            else
              o_66 = p_66;
          }
        }
        t = o_11;
        {
          ATerm r_66 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_66));
          {
            r_66 = t;
            if(((q_66 != NULL) && (q_66 != r_66)))
              _fail(r_66);
            else
              q_66 = r_66;
          }
          t = not_null(q_66);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm q_11;
  q_11 = t;
  {
    ATerm j_3 (ATerm t)
    {
      t = term_t_11;
      t = r_60(t);
      return(t);
    }
    t = try_1(t, j_3);
  }
  t = q_11;
  {
    ATerm k_3 (ATerm t)
    {
      ATerm w_66 = NULL;
      w_66 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_66));
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              {
                t = r_60(t);
                t = Cons_2(t, _id, l_3);
              }
            }
          LocalPopChoice(v_11);
        }
      else
        {
          t = u_11;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_3, l_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  ATerm y_11;
  y_11 = t;
  {
    ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL;
    f_67 = t;
    b_67 :
    if(match_cons(f_67, sym__3))
      {
        g_67 = ATgetArgument(f_67, 0);
        h_67 = ATgetArgument(f_67, 1);
        i_67 = ATgetArgument(f_67, 2);
        {
          if(((c_67 != NULL) && (c_67 != g_67)))
            _fail(g_67);
          else
            c_67 = g_67;
          {
            if(((d_67 != NULL) && (d_67 != h_67)))
              _fail(h_67);
            else
              d_67 = h_67;
            {
              if(((e_67 != NULL) && (e_67 != i_67)))
                _fail(i_67);
              else
                e_67 = i_67;
              t = SSL_table_put(not_null(c_67), not_null(d_67), not_null(e_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_11;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm n_67 = NULL;
  ATerm z_11;
  z_11 = t;
  {
    t = term_a_12;
    t = table_put_0(t);
  }
  t = z_11;
  {
    ATerm m_3 (ATerm t)
    {
      ATerm b_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_60(t);
          LocalPopChoice(c_12);
        }
      else
        {
          t = b_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_3);
    {
      ATerm n_3 (ATerm t)
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_l_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm o_67 = NULL;
                  o_67 = t;
                  if(((n_67 != NULL) && (n_67 != o_67)))
                    _fail(o_67);
                  else
                    n_67 = o_67;
                  return(t);
                }
                t = Undefined_1(t, p_3);
                return(t);
              }
              t = option_defined_1(t, o_3);
              {
                ATerm j_12;
                j_12 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_67)), term_n_12));
                  t = printnl_0(t);
                }
                t = j_12;
                {
                  t = system_usage_0(t);
                  {
                    t = term_f_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_3);
      {
        ATerm p_12;
        p_12 = t;
        {
          t = term_q_10;
          t = table_destroy_0(t);
        }
        t = p_12;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm n_62 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_62(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_3);
  {
    t = store_options_0(t);
    {
      ATerm u_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, n_62);
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
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, l_62);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(x_12);
              }
            else
              {
                t = w_12;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  t = iowrap_3(t, g_62, h_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    t = _2(t, _id, d_62);
    return(t);
  }
  t = iowrap_2(t, r_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
