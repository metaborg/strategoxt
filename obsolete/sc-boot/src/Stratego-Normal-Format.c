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
Symbol sym_Verbose_1;
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
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
ATerm term_a_13;
ATerm term_r_12;
ATerm term_h_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_y_8;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_r_6;
ATerm term_m_6;
ATerm term_j_4;
void init_constant_terms (void)
{
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_q_7, term_x_7);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_7);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_e_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_o_10, term_e_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_g_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__3, term_f_11, term_g_11, (ATerm) ATempty);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2 (ATerm, ATerm m_55 (ATerm), ATerm n_55 (ATerm));
ATerm Op_2 (ATerm, ATerm r_54 (ATerm), ATerm s_54 (ATerm));
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm As_2 (ATerm, ATerm a_53 (ATerm), ATerm b_53 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm c_53 (ATerm));
ATerm Str_1 (ATerm, ATerm q_54 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm p_54 (ATerm));
ATerm Int_1 (ATerm, ATerm o_54 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm r_56 (ATerm), ATerm s_56 (ATerm));
ATerm Where_1 (ATerm, ATerm q_56 (ATerm));
ATerm Scope_2 (ATerm, ATerm o_56 (ATerm), ATerm p_56 (ATerm));
ATerm Build_1 (ATerm, ATerm l_56 (ATerm));
ATerm Match_1 (ATerm, ATerm k_56 (ATerm));
ATerm Thread_1 (ATerm, ATerm h_56 (ATerm));
ATerm All_1 (ATerm, ATerm g_56 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm e_56 (ATerm));
ATerm Cong_2 (ATerm, ATerm c_56 (ATerm), ATerm d_56 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm));
ATerm SVar_1 (ATerm, ATerm j_55 (ATerm));
ATerm Call_2 (ATerm, ATerm y_55 (ATerm), ATerm z_55 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm g_55 (ATerm), ATerm h_55 (ATerm));
ATerm GChoice_2 (ATerm, ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm));
ATerm LChoice_2 (ATerm, ATerm z_54 (ATerm), ATerm a_55 (ATerm));
ATerm Choice_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm Seq_2 (ATerm, ATerm v_54 (ATerm), ATerm w_54 (ATerm));
ATerm Test_1 (ATerm, ATerm t_54 (ATerm));
ATerm Not_1 (ATerm, ATerm u_54 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm r_55 (ATerm), ATerm s_55 (ATerm));
ATerm Mod_2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm SDef_3 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm), ATerm q_55 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm m_73 (ATerm));
ATerm Strategies_1 (ATerm, ATerm b_54 (ATerm));
ATerm Specification_1 (ATerm, ATerm d_54 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm t_45 (ATerm), ATerm u_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_61 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_68 (ATerm), ATerm d_68 (ATerm));
ATerm crush_2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_61 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_66 (ATerm), ATerm r_66 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_73 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_60 (ATerm));
ATerm map_1 (ATerm, ATerm k_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_60 (ATerm));
ATerm Program_1 (ATerm, ATerm c_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm d_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_61 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_80 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_60 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_56 (ATerm), ATerm u_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_60 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_60 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_62 (ATerm), ATerm u_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_62 (ATerm));
ATerm main_0 (ATerm);
ATerm Let_2 (ATerm t, ATerm m_55 (ATerm), ATerm n_55 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  c_8 :
  if(match_cons(g_8, sym_Let_2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      {
        ATerm q_10 = NULL,s_10 = NULL;
        ATerm r_10 = NULL;
        t = SSLgetAnnotations(not_null(g_8));
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
        {
          t = not_null(h_8);
          {
            ATerm e_11 = NULL;
            t = m_55(t);
            {
              s_10 = t;
              {
                t = not_null(i_8);
                {
                  ATerm j_11 = NULL;
                  t = n_55(t);
                  {
                    e_11 = t;
                    {
                      ATerm k_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_10), not_null(e_11)), not_null(q_10));
                      {
                        k_11 = t;
                        if(((j_11 != NULL) && (j_11 != k_11)))
                          _fail(k_11);
                        else
                          j_11 = k_11;
                      }
                      t = not_null(j_11);
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
ATerm Op_2 (ATerm t, ATerm r_54 (ATerm), ATerm s_54 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_Op_2))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      {
        ATerm c_12 = NULL,e_12 = NULL;
        ATerm d_12 = NULL;
        t = SSLgetAnnotations(not_null(w_11));
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
        {
          t = not_null(x_11);
          {
            ATerm g_12 = NULL;
            t = r_54(t);
            {
              e_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm i_12 = NULL;
                  t = s_54(t);
                  {
                    g_12 = t;
                    {
                      ATerm j_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_12), not_null(g_12)), not_null(c_12));
                      {
                        j_12 = t;
                        if(((i_12 != NULL) && (i_12 != j_12)))
                          _fail(j_12);
                        else
                          i_12 = j_12;
                      }
                      t = not_null(i_12);
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
  ATerm y_12 = NULL,z_12 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_Var_1))
    {
      z_12 = ATgetArgument(y_12, 0);
      {
        ATerm q_3 = t;
        int r_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL,e_13 = NULL;
            ATerm d_13 = NULL;
            t = SSLgetAnnotations(not_null(y_12));
            {
              d_13 = t;
              if(((c_13 != NULL) && (c_13 != d_13)))
                _fail(d_13);
              else
                c_13 = d_13;
            }
            {
              t = not_null(z_12);
              {
                ATerm g_13 = NULL;
                t = n_0(t);
                {
                  e_13 = t;
                  {
                    ATerm h_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_13)), not_null(c_13));
                    {
                      h_13 = t;
                      if(((g_13 != NULL) && (g_13 != h_13)))
                        _fail(h_13);
                      else
                        g_13 = h_13;
                    }
                    t = not_null(g_13);
                  }
                }
              }
            }
            LocalPopChoice(r_3);
          }
        else
          {
            t = q_3;
            {
              ATerm k_13 = NULL,m_13 = NULL;
              ATerm l_13 = NULL;
              t = SSLgetAnnotations(not_null(y_12));
              {
                l_13 = t;
                if(((k_13 != NULL) && (k_13 != l_13)))
                  _fail(l_13);
                else
                  k_13 = l_13;
              }
              {
                t = not_null(z_12);
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
ATerm As_2 (ATerm t, ATerm a_53 (ATerm), ATerm b_53 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_As_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm k_14 = NULL,m_14 = NULL;
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(e_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        {
          t = not_null(f_14);
          {
            ATerm o_14 = NULL;
            t = a_53(t);
            {
              m_14 = t;
              {
                t = not_null(g_14);
                {
                  ATerm q_14 = NULL;
                  t = b_53(t);
                  {
                    o_14 = t;
                    {
                      ATerm r_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(m_14), not_null(o_14)), not_null(k_14));
                      {
                        r_14 = t;
                        if(((q_14 != NULL) && (q_14 != r_14)))
                          _fail(r_14);
                        else
                          q_14 = r_14;
                      }
                      t = not_null(q_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm c_53 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_BuildDefault_1))
    {
      d_15 = ATgetArgument(c_15, 0);
      {
        ATerm g_15 = NULL,i_15 = NULL;
        ATerm h_15 = NULL;
        t = SSLgetAnnotations(not_null(c_15));
        {
          h_15 = t;
          if(((g_15 != NULL) && (g_15 != h_15)))
            _fail(h_15);
          else
            g_15 = h_15;
        }
        {
          t = not_null(d_15);
          {
            ATerm k_15 = NULL;
            t = c_53(t);
            {
              i_15 = t;
              {
                ATerm l_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(i_15)), not_null(g_15));
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
                t = not_null(k_15);
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
ATerm Str_1 (ATerm t, ATerm q_54 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_Str_1))
    {
      w_15 = ATgetArgument(v_15, 0);
      {
        ATerm z_15 = NULL,b_16 = NULL;
        ATerm a_16 = NULL;
        t = SSLgetAnnotations(not_null(v_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
        {
          t = not_null(w_15);
          {
            ATerm d_16 = NULL;
            t = q_54(t);
            {
              b_16 = t;
              {
                ATerm e_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(b_16)), not_null(z_15));
                {
                  e_16 = t;
                  if(((d_16 != NULL) && (d_16 != e_16)))
                    _fail(e_16);
                  else
                    d_16 = e_16;
                }
                t = not_null(d_16);
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
  ATerm k_16 = NULL;
  k_16 = t;
  t = SSL_is_real(not_null(k_16));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm p_54 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Real_1))
    {
      t_16 = ATgetArgument(s_16, 0);
      {
        ATerm w_16 = NULL,y_16 = NULL;
        ATerm x_16 = NULL;
        t = SSLgetAnnotations(not_null(s_16));
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
        {
          t = not_null(t_16);
          {
            ATerm a_17 = NULL;
            t = p_54(t);
            {
              y_16 = t;
              {
                ATerm b_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_16)), not_null(w_16));
                {
                  b_17 = t;
                  if(((a_17 != NULL) && (a_17 != b_17)))
                    _fail(b_17);
                  else
                    a_17 = b_17;
                }
                t = not_null(a_17);
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
ATerm Int_1 (ATerm t, ATerm o_54 (ATerm))
{
  ATerm l_17 = NULL,m_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym_Int_1))
    {
      m_17 = ATgetArgument(l_17, 0);
      {
        ATerm p_17 = NULL,r_17 = NULL;
        ATerm q_17 = NULL;
        t = SSLgetAnnotations(not_null(l_17));
        {
          q_17 = t;
          if(((p_17 != NULL) && (p_17 != q_17)))
            _fail(q_17);
          else
            p_17 = q_17;
        }
        {
          t = not_null(m_17);
          {
            ATerm t_17 = NULL;
            t = o_54(t);
            {
              r_17 = t;
              {
                ATerm u_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(r_17)), not_null(p_17));
                {
                  u_17 = t;
                  if(((t_17 != NULL) && (t_17 != u_17)))
                    _fail(u_17);
                  else
                    t_17 = u_17;
                }
                t = not_null(t_17);
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
  ATerm d_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_Wld_0))
    {
      ATerm f_18 = NULL,h_18 = NULL;
      ATerm s_3;
      s_3 = t;
      {
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(d_18));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
      }
      t = s_3;
      {
        ATerm i_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
        t = not_null(h_18);
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
  ATerm t_3 = t;
  int u_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
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
                              t = Str_1(t, is_string_0);
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
                                    t = BuildDefault_1(t, term_expression_0);
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
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          LocalPopChoice(g_4);
                                        }
                                      else
                                        {
                                          t = f_4;
                                          {
                                            ATerm h_4 = t;
                                            int i_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(i_4);
                                              }
                                            else
                                              {
                                                t = h_4;
                                                {
                                                  ATerm g_0 (ATerm t)
                                                  {
                                                    t = term_j_4;
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
ATerm Prim_2 (ATerm t, ATerm r_56 (ATerm), ATerm s_56 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Prim_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      {
        ATerm z_18 = NULL,b_19 = NULL;
        ATerm a_19 = NULL;
        t = SSLgetAnnotations(not_null(t_18));
        {
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
        }
        {
          t = not_null(u_18);
          {
            ATerm d_19 = NULL;
            t = r_56(t);
            {
              b_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm f_19 = NULL;
                  t = s_56(t);
                  {
                    d_19 = t;
                    {
                      ATerm g_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_19), not_null(d_19)), not_null(z_18));
                      {
                        g_19 = t;
                        if(((f_19 != NULL) && (f_19 != g_19)))
                          _fail(g_19);
                        else
                          f_19 = g_19;
                      }
                      t = not_null(f_19);
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
ATerm Where_1 (ATerm t, ATerm q_56 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Where_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm v_19 = NULL,x_19 = NULL;
        ATerm w_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
        {
          t = not_null(s_19);
          {
            ATerm z_19 = NULL;
            t = q_56(t);
            {
              x_19 = t;
              {
                ATerm a_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(x_19)), not_null(v_19));
                {
                  a_20 = t;
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                }
                t = not_null(z_19);
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
ATerm Scope_2 (ATerm t, ATerm o_56 (ATerm), ATerm p_56 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_Scope_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm r_20 = NULL,t_20 = NULL;
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(l_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        {
          t = not_null(m_20);
          {
            ATerm v_20 = NULL;
            t = o_56(t);
            {
              t_20 = t;
              {
                t = not_null(n_20);
                {
                  ATerm x_20 = NULL;
                  t = p_56(t);
                  {
                    v_20 = t;
                    {
                      ATerm y_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(t_20), not_null(v_20)), not_null(r_20));
                      {
                        y_20 = t;
                        if(((x_20 != NULL) && (x_20 != y_20)))
                          _fail(y_20);
                        else
                          x_20 = y_20;
                      }
                      t = not_null(x_20);
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
ATerm Build_1 (ATerm t, ATerm l_56 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_Build_1))
    {
      k_21 = ATgetArgument(j_21, 0);
      {
        ATerm n_21 = NULL,p_21 = NULL;
        ATerm o_21 = NULL;
        t = SSLgetAnnotations(not_null(j_21));
        {
          o_21 = t;
          if(((n_21 != NULL) && (n_21 != o_21)))
            _fail(o_21);
          else
            n_21 = o_21;
        }
        {
          t = not_null(k_21);
          {
            ATerm r_21 = NULL;
            t = l_56(t);
            {
              p_21 = t;
              {
                ATerm s_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_21)), not_null(n_21));
                {
                  s_21 = t;
                  if(((r_21 != NULL) && (r_21 != s_21)))
                    _fail(s_21);
                  else
                    r_21 = s_21;
                }
                t = not_null(r_21);
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
ATerm Match_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Match_1))
    {
      d_22 = ATgetArgument(c_22, 0);
      {
        ATerm g_22 = NULL,i_22 = NULL;
        ATerm h_22 = NULL;
        t = SSLgetAnnotations(not_null(c_22));
        {
          h_22 = t;
          if(((g_22 != NULL) && (g_22 != h_22)))
            _fail(h_22);
          else
            g_22 = h_22;
        }
        {
          t = not_null(d_22);
          {
            ATerm k_22 = NULL;
            t = k_56(t);
            {
              i_22 = t;
              {
                ATerm l_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(i_22)), not_null(g_22));
                {
                  l_22 = t;
                  if(((k_22 != NULL) && (k_22 != l_22)))
                    _fail(l_22);
                  else
                    k_22 = l_22;
                }
                t = not_null(k_22);
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
ATerm Thread_1 (ATerm t, ATerm h_56 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_Thread_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm g_23 = NULL,l_23 = NULL;
        ATerm h_23 = NULL;
        t = SSLgetAnnotations(not_null(c_23));
        {
          h_23 = t;
          if(((g_23 != NULL) && (g_23 != h_23)))
            _fail(h_23);
          else
            g_23 = h_23;
        }
        {
          t = not_null(d_23);
          {
            ATerm n_23 = NULL;
            t = h_56(t);
            {
              l_23 = t;
              {
                ATerm o_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(l_23)), not_null(g_23));
                {
                  o_23 = t;
                  if(((n_23 != NULL) && (n_23 != o_23)))
                    _fail(o_23);
                  else
                    n_23 = o_23;
                }
                t = not_null(n_23);
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
ATerm All_1 (ATerm t, ATerm g_56 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_All_1))
    {
      z_23 = ATgetArgument(y_23, 0);
      {
        ATerm c_24 = NULL,f_24 = NULL;
        ATerm e_24 = NULL;
        t = SSLgetAnnotations(not_null(y_23));
        {
          e_24 = t;
          if(((c_24 != NULL) && (c_24 != e_24)))
            _fail(e_24);
          else
            c_24 = e_24;
        }
        {
          t = not_null(z_23);
          {
            ATerm h_24 = NULL;
            t = g_56(t);
            {
              f_24 = t;
              {
                ATerm i_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(f_24)), not_null(c_24));
                {
                  i_24 = t;
                  if(((h_24 != NULL) && (h_24 != i_24)))
                    _fail(i_24);
                  else
                    h_24 = i_24;
                }
                t = not_null(h_24);
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
  ATerm w_24 = NULL,x_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym_Some_1))
    {
      x_24 = ATgetArgument(w_24, 0);
      {
        ATerm k_4 = t;
        int l_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_25 = NULL,k_25 = NULL;
            ATerm j_25 = NULL;
            t = SSLgetAnnotations(not_null(w_24));
            {
              j_25 = t;
              if(((i_25 != NULL) && (i_25 != j_25)))
                _fail(j_25);
              else
                i_25 = j_25;
            }
            {
              t = not_null(x_24);
              {
                ATerm o_25 = NULL;
                t = m_0(t);
                {
                  k_25 = t;
                  {
                    ATerm p_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(k_25)), not_null(i_25));
                    {
                      p_25 = t;
                      if(((o_25 != NULL) && (o_25 != p_25)))
                        _fail(p_25);
                      else
                        o_25 = p_25;
                    }
                    t = not_null(o_25);
                  }
                }
              }
            }
            LocalPopChoice(l_4);
          }
        else
          {
            t = k_4;
            {
              ATerm u_25 = NULL,w_25 = NULL;
              ATerm v_25 = NULL;
              t = SSLgetAnnotations(not_null(w_24));
              {
                v_25 = t;
                if(((u_25 != NULL) && (u_25 != v_25)))
                  _fail(v_25);
                else
                  u_25 = v_25;
              }
              {
                t = not_null(x_24);
                {
                  ATerm y_25 = NULL;
                  t = m_0(t);
                  {
                    w_25 = t;
                    {
                      ATerm f_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(w_25)), not_null(u_25));
                      {
                        f_26 = t;
                        if(((y_25 != NULL) && (y_25 != f_26)))
                          _fail(f_26);
                        else
                          y_25 = f_26;
                      }
                      t = not_null(y_25);
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
ATerm One_1 (ATerm t, ATerm e_56 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_One_1))
    {
      b_27 = ATgetArgument(a_27, 0);
      {
        ATerm e_27 = NULL,g_27 = NULL;
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(a_27));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
        {
          t = not_null(b_27);
          {
            ATerm i_27 = NULL;
            t = e_56(t);
            {
              g_27 = t;
              {
                ATerm j_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(g_27)), not_null(e_27));
                {
                  j_27 = t;
                  if(((i_27 != NULL) && (i_27 != j_27)))
                    _fail(j_27);
                  else
                    i_27 = j_27;
                }
                t = not_null(i_27);
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
ATerm Cong_2 (ATerm t, ATerm c_56 (ATerm), ATerm d_56 (ATerm))
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym_Cong_2))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      {
        ATerm a_28 = NULL,c_28 = NULL;
        ATerm b_28 = NULL;
        t = SSLgetAnnotations(not_null(u_27));
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
        {
          t = not_null(v_27);
          {
            ATerm e_28 = NULL;
            t = c_56(t);
            {
              c_28 = t;
              {
                t = not_null(w_27);
                {
                  ATerm g_28 = NULL;
                  t = d_56(t);
                  {
                    e_28 = t;
                    {
                      ATerm h_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(c_28), not_null(e_28)), not_null(a_28));
                      {
                        h_28 = t;
                        if(((g_28 != NULL) && (g_28 != h_28)))
                          _fail(h_28);
                        else
                          g_28 = h_28;
                      }
                      t = not_null(g_28);
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
  ATerm o_28 = NULL;
  o_28 = t;
  t = SSL_is_int(not_null(o_28));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm))
{
  ATerm x_28 = NULL,a_29 = NULL,b_29 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym_Path_2))
    {
      a_29 = ATgetArgument(x_28, 0);
      b_29 = ATgetArgument(x_28, 1);
      {
        ATerm l_29 = NULL,n_29 = NULL;
        ATerm m_29 = NULL;
        t = SSLgetAnnotations(not_null(x_28));
        {
          m_29 = t;
          if(((l_29 != NULL) && (l_29 != m_29)))
            _fail(m_29);
          else
            l_29 = m_29;
        }
        {
          t = not_null(a_29);
          {
            ATerm p_29 = NULL;
            t = a_56(t);
            {
              n_29 = t;
              {
                t = not_null(b_29);
                {
                  ATerm r_29 = NULL;
                  t = b_56(t);
                  {
                    p_29 = t;
                    {
                      ATerm s_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(n_29), not_null(p_29)), not_null(l_29));
                      {
                        s_29 = t;
                        if(((r_29 != NULL) && (r_29 != s_29)))
                          _fail(s_29);
                        else
                          r_29 = s_29;
                      }
                      t = not_null(r_29);
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
ATerm Rec_2 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm))
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_Rec_2))
    {
      f_30 = ATgetArgument(e_30, 0);
      g_30 = ATgetArgument(e_30, 1);
      {
        ATerm n_30 = NULL,p_30 = NULL;
        ATerm o_30 = NULL;
        t = SSLgetAnnotations(not_null(e_30));
        {
          o_30 = t;
          if(((n_30 != NULL) && (n_30 != o_30)))
            _fail(o_30);
          else
            n_30 = o_30;
        }
        {
          t = not_null(f_30);
          {
            ATerm r_30 = NULL;
            t = k_55(t);
            {
              p_30 = t;
              {
                t = not_null(g_30);
                {
                  ATerm t_30 = NULL;
                  t = l_55(t);
                  {
                    r_30 = t;
                    {
                      ATerm u_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(p_30), not_null(r_30)), not_null(n_30));
                      {
                        u_30 = t;
                        if(((t_30 != NULL) && (t_30 != u_30)))
                          _fail(u_30);
                        else
                          t_30 = u_30;
                      }
                      t = not_null(t_30);
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
ATerm SVar_1 (ATerm t, ATerm j_55 (ATerm))
{
  ATerm f_31 = NULL,g_31 = NULL;
  f_31 = t;
  e_31 :
  if(match_cons(f_31, sym_SVar_1))
    {
      g_31 = ATgetArgument(f_31, 0);
      {
        ATerm l_31 = NULL,n_31 = NULL;
        ATerm m_31 = NULL;
        t = SSLgetAnnotations(not_null(f_31));
        {
          m_31 = t;
          if(((l_31 != NULL) && (l_31 != m_31)))
            _fail(m_31);
          else
            l_31 = m_31;
        }
        {
          t = not_null(g_31);
          {
            ATerm q_31 = NULL;
            t = j_55(t);
            {
              n_31 = t;
              {
                ATerm s_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(n_31)), not_null(l_31));
                {
                  s_31 = t;
                  if(((q_31 != NULL) && (q_31 != s_31)))
                    _fail(s_31);
                  else
                    q_31 = s_31;
                }
                t = not_null(q_31);
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
ATerm Call_2 (ATerm t, ATerm y_55 (ATerm), ATerm z_55 (ATerm))
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Call_2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      {
        ATerm j_32 = NULL,l_32 = NULL;
        ATerm k_32 = NULL;
        t = SSLgetAnnotations(not_null(d_32));
        {
          k_32 = t;
          if(((j_32 != NULL) && (j_32 != k_32)))
            _fail(k_32);
          else
            j_32 = k_32;
        }
        {
          t = not_null(e_32);
          {
            ATerm n_32 = NULL;
            t = y_55(t);
            {
              l_32 = t;
              {
                t = not_null(f_32);
                {
                  ATerm p_32 = NULL;
                  t = z_55(t);
                  {
                    n_32 = t;
                    {
                      ATerm q_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(l_32), not_null(n_32)), not_null(j_32));
                      {
                        q_32 = t;
                        if(((p_32 != NULL) && (p_32 != q_32)))
                          _fail(q_32);
                        else
                          p_32 = q_32;
                      }
                      t = not_null(p_32);
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
ATerm LGChoice_2 (ATerm t, ATerm g_55 (ATerm), ATerm h_55 (ATerm))
{
  ATerm c_33 = NULL,d_33 = NULL,h_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym_LGChoice_2))
    {
      d_33 = ATgetArgument(c_33, 0);
      h_33 = ATgetArgument(c_33, 1);
      {
        ATerm l_33 = NULL,n_33 = NULL;
        ATerm m_33 = NULL;
        t = SSLgetAnnotations(not_null(c_33));
        {
          m_33 = t;
          if(((l_33 != NULL) && (l_33 != m_33)))
            _fail(m_33);
          else
            l_33 = m_33;
        }
        {
          t = not_null(d_33);
          {
            ATerm p_33 = NULL;
            t = g_55(t);
            {
              n_33 = t;
              {
                t = not_null(h_33);
                {
                  ATerm r_33 = NULL;
                  t = h_55(t);
                  {
                    p_33 = t;
                    {
                      ATerm s_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(n_33), not_null(p_33)), not_null(l_33));
                      {
                        s_33 = t;
                        if(((r_33 != NULL) && (r_33 != s_33)))
                          _fail(s_33);
                        else
                          r_33 = s_33;
                      }
                      t = not_null(r_33);
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
ATerm GChoice_2 (ATerm t, ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym_GChoice_2))
    {
      f_34 = ATgetArgument(e_34, 0);
      g_34 = ATgetArgument(e_34, 1);
      {
        ATerm k_34 = NULL,m_34 = NULL;
        ATerm l_34 = NULL;
        t = SSLgetAnnotations(not_null(e_34));
        {
          l_34 = t;
          if(((k_34 != NULL) && (k_34 != l_34)))
            _fail(l_34);
          else
            k_34 = l_34;
        }
        {
          t = not_null(f_34);
          {
            ATerm o_34 = NULL;
            t = e_55(t);
            {
              m_34 = t;
              {
                t = not_null(g_34);
                {
                  ATerm q_34 = NULL;
                  t = f_55(t);
                  {
                    o_34 = t;
                    {
                      ATerm r_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(m_34), not_null(o_34)), not_null(k_34));
                      {
                        r_34 = t;
                        if(((q_34 != NULL) && (q_34 != r_34)))
                          _fail(r_34);
                        else
                          q_34 = r_34;
                      }
                      t = not_null(q_34);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm))
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym_GuardedLChoice_3))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      h_35 = ATgetArgument(e_35, 2);
      {
        ATerm m_35 = NULL,o_35 = NULL;
        ATerm n_35 = NULL;
        t = SSLgetAnnotations(not_null(e_35));
        {
          n_35 = t;
          if(((m_35 != NULL) && (m_35 != n_35)))
            _fail(n_35);
          else
            m_35 = n_35;
        }
        {
          t = not_null(f_35);
          {
            ATerm q_35 = NULL;
            t = b_55(t);
            {
              o_35 = t;
              {
                t = not_null(g_35);
                {
                  ATerm s_35 = NULL;
                  t = c_55(t);
                  {
                    q_35 = t;
                    {
                      t = not_null(h_35);
                      {
                        ATerm u_35 = NULL;
                        t = d_55(t);
                        {
                          s_35 = t;
                          {
                            ATerm v_35 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(o_35), not_null(q_35), not_null(s_35)), not_null(m_35));
                            {
                              v_35 = t;
                              if(((u_35 != NULL) && (u_35 != v_35)))
                                _fail(v_35);
                              else
                                u_35 = v_35;
                            }
                            t = not_null(u_35);
                          }
                        }
                      }
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
ATerm LChoice_2 (ATerm t, ATerm z_54 (ATerm), ATerm a_55 (ATerm))
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
  i_36 = t;
  h_36 :
  if(match_cons(i_36, sym_LChoice_2))
    {
      j_36 = ATgetArgument(i_36, 0);
      k_36 = ATgetArgument(i_36, 1);
      {
        ATerm o_36 = NULL,q_36 = NULL;
        ATerm p_36 = NULL;
        t = SSLgetAnnotations(not_null(i_36));
        {
          p_36 = t;
          if(((o_36 != NULL) && (o_36 != p_36)))
            _fail(p_36);
          else
            o_36 = p_36;
        }
        {
          t = not_null(j_36);
          {
            ATerm s_36 = NULL;
            t = z_54(t);
            {
              q_36 = t;
              {
                t = not_null(k_36);
                {
                  ATerm u_36 = NULL;
                  t = a_55(t);
                  {
                    s_36 = t;
                    {
                      ATerm v_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_36), not_null(s_36)), not_null(o_36));
                      {
                        v_36 = t;
                        if(((u_36 != NULL) && (u_36 != v_36)))
                          _fail(v_36);
                        else
                          u_36 = v_36;
                      }
                      t = not_null(u_36);
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
ATerm Choice_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym_Choice_2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      {
        ATerm n_37 = NULL,p_37 = NULL;
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(h_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
        {
          t = not_null(i_37);
          {
            ATerm r_37 = NULL;
            t = x_54(t);
            {
              p_37 = t;
              {
                t = not_null(j_37);
                {
                  ATerm t_37 = NULL;
                  t = y_54(t);
                  {
                    r_37 = t;
                    {
                      ATerm u_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_37), not_null(r_37)), not_null(n_37));
                      {
                        u_37 = t;
                        if(((t_37 != NULL) && (t_37 != u_37)))
                          _fail(u_37);
                        else
                          t_37 = u_37;
                      }
                      t = not_null(t_37);
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
ATerm Seq_2 (ATerm t, ATerm v_54 (ATerm), ATerm w_54 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Seq_2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      {
        ATerm o_38 = NULL,q_38 = NULL;
        ATerm p_38 = NULL;
        t = SSLgetAnnotations(not_null(i_38));
        {
          p_38 = t;
          if(((o_38 != NULL) && (o_38 != p_38)))
            _fail(p_38);
          else
            o_38 = p_38;
        }
        {
          t = not_null(j_38);
          {
            ATerm s_38 = NULL;
            t = v_54(t);
            {
              q_38 = t;
              {
                t = not_null(k_38);
                {
                  ATerm u_38 = NULL;
                  t = w_54(t);
                  {
                    s_38 = t;
                    {
                      ATerm v_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(q_38), not_null(s_38)), not_null(o_38));
                      {
                        v_38 = t;
                        if(((u_38 != NULL) && (u_38 != v_38)))
                          _fail(v_38);
                        else
                          u_38 = v_38;
                      }
                      t = not_null(u_38);
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
ATerm Test_1 (ATerm t, ATerm t_54 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Test_1))
    {
      h_39 = ATgetArgument(g_39, 0);
      {
        ATerm k_39 = NULL,m_39 = NULL;
        ATerm l_39 = NULL;
        t = SSLgetAnnotations(not_null(g_39));
        {
          l_39 = t;
          if(((k_39 != NULL) && (k_39 != l_39)))
            _fail(l_39);
          else
            k_39 = l_39;
        }
        {
          t = not_null(h_39);
          {
            ATerm o_39 = NULL;
            t = t_54(t);
            {
              m_39 = t;
              {
                ATerm p_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(m_39)), not_null(k_39));
                {
                  p_39 = t;
                  if(((o_39 != NULL) && (o_39 != p_39)))
                    _fail(p_39);
                  else
                    o_39 = p_39;
                }
                t = not_null(o_39);
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
ATerm Not_1 (ATerm t, ATerm u_54 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Not_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      {
        ATerm e_40 = NULL,g_40 = NULL;
        ATerm f_40 = NULL;
        t = SSLgetAnnotations(not_null(a_40));
        {
          f_40 = t;
          if(((e_40 != NULL) && (e_40 != f_40)))
            _fail(f_40);
          else
            e_40 = f_40;
        }
        {
          t = not_null(b_40);
          {
            ATerm i_40 = NULL;
            t = u_54(t);
            {
              g_40 = t;
              {
                ATerm j_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(g_40)), not_null(e_40));
                {
                  j_40 = t;
                  if(((i_40 != NULL) && (i_40 != j_40)))
                    _fail(j_40);
                  else
                    i_40 = j_40;
                }
                t = not_null(i_40);
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
  ATerm s_40 = NULL;
  s_40 = t;
  r_40 :
  if(match_cons(s_40, sym_Fail_0))
    {
      ATerm u_40 = NULL,w_40 = NULL;
      ATerm m_4;
      m_4 = t;
      {
        ATerm v_40 = NULL;
        t = SSLgetAnnotations(not_null(s_40));
        {
          v_40 = t;
          if(((u_40 != NULL) && (u_40 != v_40)))
            _fail(v_40);
          else
            u_40 = v_40;
        }
      }
      t = m_4;
      {
        ATerm x_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(u_40));
        {
          x_40 = t;
          if(((w_40 != NULL) && (w_40 != x_40)))
            _fail(x_40);
          else
            w_40 = x_40;
        }
        t = not_null(w_40);
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
  ATerm f_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym_Id_0))
    {
      ATerm h_41 = NULL,j_41 = NULL;
      ATerm n_4;
      n_4 = t;
      {
        ATerm i_41 = NULL;
        t = SSLgetAnnotations(not_null(f_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
      }
      t = n_4;
      {
        ATerm k_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(h_41));
        {
          k_41 = t;
          if(((j_41 != NULL) && (j_41 != k_41)))
            _fail(k_41);
          else
            j_41 = k_41;
        }
        t = not_null(j_41);
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
  ATerm o_4 = t;
  int p_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(d_5);
                                              }
                                            else
                                              {
                                                t = c_5;
                                                {
                                                  ATerm e_5 = t;
                                                  int f_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(f_5);
                                                    }
                                                  else
                                                    {
                                                      t = e_5;
                                                      {
                                                        ATerm g_5 = t;
                                                        int h_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(h_5);
                                                          }
                                                        else
                                                          {
                                                            t = g_5;
                                                            {
                                                              ATerm i_5 = t;
                                                              int j_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm h_0 (ATerm t)
                                                                  {
                                                                    ATerm p_0 (ATerm t)
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
                                                                    t = SVar_1(t, p_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, h_0, o_0);
                                                                  LocalPopChoice(j_5);
                                                                }
                                                              else
                                                                {
                                                                  t = i_5;
                                                                  {
                                                                    ATerm m_5 = t;
                                                                    int n_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(n_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_5;
                                                                        {
                                                                          ATerm o_5 = t;
                                                                          int p_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(p_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_5;
                                                                              {
                                                                                ATerm q_5 = t;
                                                                                int r_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
                                                                                    LocalPopChoice(r_5);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_5;
                                                                                    {
                                                                                      ATerm s_5 = t;
                                                                                      int t_5 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(t_5);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_5;
                                                                                          {
                                                                                            ATerm u_5 = t;
                                                                                            int v_5 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(v_5);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_5;
                                                                                                {
                                                                                                  ATerm w_5 = t;
                                                                                                  int x_5 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, term_expression_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(d_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = c_6;
                                                                                                                        {
                                                                                                                          ATerm e_6 = t;
                                                                                                                          int f_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                              LocalPopChoice(f_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = e_6;
                                                                                                                              {
                                                                                                                                ATerm g_6 = t;
                                                                                                                                int h_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(h_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = g_6;
                                                                                                                                    {
                                                                                                                                      ATerm i_6 = t;
                                                                                                                                      int j_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, s_0);
                                                                                                                                          LocalPopChoice(j_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = i_6;
                                                                                                                                          {
                                                                                                                                            ATerm k_6 = t;
                                                                                                                                            int l_6 = stack_ptr;
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
                                                                                                                                                LocalPopChoice(l_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = k_6;
                                                                                                                                                {
                                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_m_6;
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
ATerm VarDec_2 (ATerm t, ATerm r_55 (ATerm), ATerm s_55 (ATerm))
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_VarDec_2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        ATerm b_42 = NULL,d_42 = NULL;
        ATerm c_42 = NULL;
        t = SSLgetAnnotations(not_null(v_41));
        {
          c_42 = t;
          if(((b_42 != NULL) && (b_42 != c_42)))
            _fail(c_42);
          else
            b_42 = c_42;
        }
        {
          t = not_null(w_41);
          {
            ATerm f_42 = NULL;
            t = r_55(t);
            {
              d_42 = t;
              {
                t = not_null(x_41);
                {
                  ATerm h_42 = NULL;
                  t = s_55(t);
                  {
                    f_42 = t;
                    {
                      ATerm i_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_42), not_null(f_42)), not_null(b_42));
                      {
                        i_42 = t;
                        if(((h_42 != NULL) && (h_42 != i_42)))
                          _fail(i_42);
                        else
                          h_42 = i_42;
                      }
                      t = not_null(h_42);
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
ATerm Mod_2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_cons(u_42, sym_Mod_2))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      {
        ATerm a_43 = NULL,c_43 = NULL;
        ATerm b_43 = NULL;
        t = SSLgetAnnotations(not_null(u_42));
        {
          b_43 = t;
          if(((a_43 != NULL) && (a_43 != b_43)))
            _fail(b_43);
          else
            a_43 = b_43;
        }
        {
          t = not_null(v_42);
          {
            ATerm e_43 = NULL;
            t = t_53(t);
            {
              c_43 = t;
              {
                t = not_null(w_42);
                {
                  ATerm g_43 = NULL;
                  t = u_53(t);
                  {
                    e_43 = t;
                    {
                      ATerm h_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(c_43), not_null(e_43)), not_null(a_43));
                      {
                        h_43 = t;
                        if(((g_43 != NULL) && (g_43 != h_43)))
                          _fail(h_43);
                        else
                          g_43 = h_43;
                      }
                      t = not_null(g_43);
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
ATerm SDef_3 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm), ATerm q_55 (ATerm))
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  u_43 = t;
  t_43 :
  if(match_cons(u_43, sym_SDef_3))
    {
      v_43 = ATgetArgument(u_43, 0);
      w_43 = ATgetArgument(u_43, 1);
      x_43 = ATgetArgument(u_43, 2);
      {
        ATerm c_44 = NULL,e_44 = NULL;
        ATerm d_44 = NULL;
        t = SSLgetAnnotations(not_null(u_43));
        {
          d_44 = t;
          if(((c_44 != NULL) && (c_44 != d_44)))
            _fail(d_44);
          else
            c_44 = d_44;
        }
        {
          t = not_null(v_43);
          {
            ATerm g_44 = NULL;
            t = o_55(t);
            {
              e_44 = t;
              {
                t = not_null(w_43);
                {
                  ATerm i_44 = NULL;
                  t = p_55(t);
                  {
                    g_44 = t;
                    {
                      t = not_null(x_43);
                      {
                        ATerm k_44 = NULL;
                        t = q_55(t);
                        {
                          i_44 = t;
                          {
                            ATerm l_44 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(e_44), not_null(g_44), not_null(i_44)), not_null(c_44));
                            {
                              l_44 = t;
                              if(((k_44 != NULL) && (k_44 != l_44)))
                                _fail(l_44);
                              else
                                k_44 = l_44;
                            }
                            t = not_null(k_44);
                          }
                        }
                      }
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
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
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
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_r_6;
          return(t);
        }
        t = debug_1(t, z_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm z_44 (ATerm t)
  {
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        t = Cons_2(t, m_73, z_44);
      }
    return(t);
  }
  t = z_44(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm b_54 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym_Strategies_1))
    {
      g_45 = ATgetArgument(f_45, 0);
      {
        ATerm j_45 = NULL,l_45 = NULL;
        ATerm k_45 = NULL;
        t = SSLgetAnnotations(not_null(f_45));
        {
          k_45 = t;
          if(((j_45 != NULL) && (j_45 != k_45)))
            _fail(k_45);
          else
            j_45 = k_45;
        }
        {
          t = not_null(g_45);
          {
            ATerm n_45 = NULL;
            t = b_54(t);
            {
              l_45 = t;
              {
                ATerm o_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(l_45)), not_null(j_45));
                {
                  o_45 = t;
                  if(((n_45 != NULL) && (n_45 != o_45)))
                    _fail(o_45);
                  else
                    n_45 = o_45;
                }
                t = not_null(n_45);
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
ATerm Specification_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm a_46 = NULL,b_46 = NULL;
  a_46 = t;
  z_45 :
  if(match_cons(a_46, sym_Specification_1))
    {
      b_46 = ATgetArgument(a_46, 0);
      {
        ATerm e_46 = NULL,g_46 = NULL;
        ATerm f_46 = NULL;
        t = SSLgetAnnotations(not_null(a_46));
        {
          f_46 = t;
          if(((e_46 != NULL) && (e_46 != f_46)))
            _fail(f_46);
          else
            e_46 = f_46;
        }
        {
          t = not_null(b_46);
          {
            ATerm i_46 = NULL;
            t = d_54(t);
            {
              g_46 = t;
              {
                ATerm j_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(g_46)), not_null(e_46));
                {
                  j_46 = t;
                  if(((i_46 != NULL) && (i_46 != j_46)))
                    _fail(j_46);
                  else
                    i_46 = j_46;
                }
                t = not_null(i_46);
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
  ATerm u_6 = t;
  int v_6 = stack_ptr;
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
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_w_6;
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm t_45 (ATerm), ATerm u_45 (ATerm))
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
  u_46 = t;
  t_46 :
  if(match_cons(u_46, sym__2))
    {
      v_46 = ATgetArgument(u_46, 0);
      w_46 = ATgetArgument(u_46, 1);
      {
        ATerm a_47 = NULL,e_47 = NULL;
        ATerm b_47 = NULL;
        t = SSLgetAnnotations(not_null(u_46));
        {
          b_47 = t;
          if(((a_47 != NULL) && (a_47 != b_47)))
            _fail(b_47);
          else
            a_47 = b_47;
        }
        {
          t = not_null(v_46);
          {
            ATerm g_47 = NULL;
            t = t_45(t);
            {
              e_47 = t;
              {
                t = not_null(w_46);
                {
                  ATerm i_47 = NULL;
                  t = u_45(t);
                  {
                    g_47 = t;
                    {
                      ATerm j_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_47), not_null(g_47)), not_null(a_47));
                      {
                        j_47 = t;
                        if(((i_47 != NULL) && (i_47 != j_47)))
                          _fail(j_47);
                        else
                          i_47 = j_47;
                      }
                      t = not_null(i_47);
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
  ATerm r_47 = NULL;
  ATerm x_6;
  x_6 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm s_47 = NULL,t_47 = NULL;
      s_47 = t;
      q_47 :
      if(match_cons(s_47, sym_Program_1))
        {
          t_47 = ATgetArgument(s_47, 0);
          if(((r_47 != NULL) && (r_47 != t_47)))
            _fail(t_47);
          else
            r_47 = t_47;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_7), not_null(r_47)), term_z_6));
      {
        t = printnl_0(t);
        {
          t = term_b_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym__2))
    {
      y_47 = ATgetArgument(x_47, 0);
      z_47 = ATgetArgument(x_47, 1);
      {
        ATerm c_7;
        c_7 = t;
        t = SSL_printnl(not_null(y_47), not_null(z_47));
        t = c_7;
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
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym__2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      {
        t = not_null(g_48);
        {
          ATerm g_1 (ATerm t)
          {
            t = not_null(h_48);
            return(t);
          }
          t = at_end_1(t, g_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm d_7;
  d_7 = t;
  {
    ATerm n_48 = NULL,p_48 = NULL;
    ATerm e_7;
    e_7 = t;
    {
      ATerm o_48 = NULL;
      t = f_64(t);
      {
        o_48 = t;
        if(((n_48 != NULL) && (n_48 != o_48)))
          _fail(o_48);
        else
          n_48 = o_48;
      }
    }
    t = e_7;
    {
      ATerm q_48 = NULL;
      q_48 = t;
      if(((p_48 != NULL) && (p_48 != q_48)))
        _fail(q_48);
      else
        p_48 = q_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_48)), not_null(n_48)));
        t = printnl_0(t);
      }
    }
  }
  t = d_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  t = SSL_is_string(not_null(u_48));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm h_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_1);
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            {
              ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
              d_49 = t;
              c_49 :
              if(match_cons(d_49, sym_Path_1))
                {
                  e_49 = ATgetArgument(d_49, 0);
                  t = not_null(e_49);
                }
              else
                {
                  if(match_cons(d_49, sym_Var_1))
                    {
                      e_49 = ATgetArgument(d_49, 0);
                      {
                        t = not_null(e_49);
                        {
                          ATerm j_7 = t;
                          int k_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(k_7);
                            }
                          else
                            {
                              t = j_7;
                              {
                                ATerm i_1 (ATerm t)
                                {
                                  t = term_l_7;
                                  return(t);
                                }
                                t = debug_1(t, i_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(d_49, sym_Prefix_2))
                        {
                          e_49 = ATgetArgument(d_49, 0);
                          f_49 = ATgetArgument(d_49, 1);
                          {
                            ATerm k_49 = NULL,m_49 = NULL;
                            ATerm m_7;
                            m_7 = t;
                            {
                              ATerm l_49 = NULL;
                              t = not_null(e_49);
                              {
                                t = eval_config_0(t);
                                {
                                  l_49 = t;
                                  if(((k_49 != NULL) && (k_49 != l_49)))
                                    _fail(l_49);
                                  else
                                    k_49 = l_49;
                                }
                              }
                            }
                            t = m_7;
                            {
                              ATerm n_49 = NULL;
                              t = not_null(f_49);
                              {
                                t = eval_config_0(t);
                                {
                                  n_49 = t;
                                  if(((m_49 != NULL) && (m_49 != n_49)))
                                    _fail(n_49);
                                  else
                                    m_49 = n_49;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), not_null(m_49));
                                t = conc_strings_0(t);
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
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_7, not_null(v_49));
    {
      t = table_get_0(t);
      {
        ATerm j_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_7;
            o_7 = t;
            {
              ATerm x_49 = NULL;
              ATerm y_49 = NULL;
              y_49 = t;
              if(((x_49 != NULL) && (x_49 != y_49)))
                _fail(y_49);
              else
                x_49 = y_49;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_7, not_null(v_49), not_null(x_49));
                t = table_put_0(t);
              }
            }
            t = o_7;
          }
          return(t);
        }
        t = try_1(t, j_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm p_7;
    p_7 = t;
    {
      ATerm c_50 = NULL;
      ATerm d_50 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          d_50 = t;
          if(((c_50 != NULL) && (c_50 != d_50)))
            _fail(d_50);
          else
            c_50 = d_50;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_50), term_r_7);
        t = geq_0(t);
      }
    }
    t = p_7;
    t = p_61(t);
    return(t);
  }
  t = try_1(t, k_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, term_s_7));
  {
    t = printnl_0(t);
    {
      t = term_b_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_50 = NULL;
  g_50 = t;
  t = SSL_TicksToSeconds(not_null(g_50));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym__2))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(m_50), not_null(n_50));
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = SSL_addr(not_null(m_50), not_null(n_50));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_68 (ATerm), ATerm d_68 (ATerm))
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_68(t);
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
        u_50 = t;
        t_50 :
        if(((ATgetType(u_50) == AT_LIST) && ((ATermList) u_50 != ATempty)))
          {
            v_50 = ATgetFirst((ATermList) u_50);
            w_50 = (ATerm) ATgetNext((ATermList) u_50);
            {
              ATerm z_50 = NULL;
              ATerm a_51 = NULL;
              t = not_null(w_50);
              {
                t = foldr_2(t, c_68, d_68);
                {
                  a_51 = t;
                  if(((z_50 != NULL) && (z_50 != a_51)))
                    _fail(a_51);
                  else
                    z_50 = a_51;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_50), not_null(z_50));
                t = d_68(t);
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
ATerm crush_2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm h_51 = NULL;
  ATerm j_51 = NULL;
  h_51 = t;
  {
    ATerm k_51 = NULL;
    ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
    t = not_null(h_51);
    {
      k_51 = t;
      {
        t = SSL_explode_term(not_null(k_51));
        {
          m_51 = t;
          g_51 :
          if(match_cons(m_51, sym__2))
            {
              n_51 = ATgetArgument(m_51, 0);
              o_51 = ATgetArgument(m_51, 1);
              if(((j_51 != NULL) && (j_51 != o_51)))
                _fail(o_51);
              else
                j_51 = o_51;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_51);
      t = foldr_2(t, q_69, r_69);
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
    ATerm l_1 (ATerm t)
    {
      t = term_x_7;
      return(t);
    }
    t = crush_2(t, l_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  t_51 :
  if(match_cons(u_51, sym__2))
    {
      v_51 = ATgetArgument(u_51, 0);
      w_51 = ATgetArgument(u_51, 1);
      {
        ATerm y_7;
        y_7 = t;
        {
          ATerm z_7 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_51), not_null(w_51));
              LocalPopChoice(a_8);
            }
          else
            {
              t = z_7;
              t = SSL_gtr(not_null(v_51), not_null(w_51));
            }
        }
        t = y_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm c_52 = NULL;
  ATerm b_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
      d_52 = t;
      b_52 :
      if(match_cons(d_52, sym__2))
        {
          e_52 = ATgetArgument(d_52, 0);
          f_52 = ATgetArgument(d_52, 1);
          {
            if(((c_52 != NULL) && (c_52 != e_52)))
              _fail(e_52);
            else
              c_52 = e_52;
            if(((c_52 != NULL) && (c_52 != f_52)))
              _fail(f_52);
            else
              c_52 = f_52;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_8);
    }
  else
    {
      t = b_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm m_1 (ATerm t)
  {
    ATerm e_8;
    e_8 = t;
    {
      ATerm i_52 = NULL;
      ATerm j_52 = NULL;
      t = term_q_7;
      {
        t = get_config_0(t);
        {
          j_52 = t;
          if(((i_52 != NULL) && (i_52 != j_52)))
            _fail(j_52);
          else
            i_52 = j_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_52), term_b_7);
        t = geq_0(t);
      }
    }
    t = e_8;
    t = o_61(t);
    return(t);
  }
  t = try_1(t, m_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm n_52 = NULL,p_52 = NULL;
    ATerm f_8;
    f_8 = t;
    {
      ATerm o_52 = NULL;
      t = run_time_0(t);
      {
        o_52 = t;
        if(((n_52 != NULL) && (n_52 != o_52)))
          _fail(o_52);
        else
          n_52 = o_52;
      }
    }
    t = f_8;
    {
      ATerm q_52 = NULL;
      t = term_j_8;
      {
        t = get_config_0(t);
        {
          q_52 = t;
          if(((p_52 != NULL) && (p_52 != q_52)))
            _fail(q_52);
          else
            p_52 = q_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_8), not_null(n_52)), term_k_8), not_null(p_52)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_1);
  {
    t = term_x_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym__2))
    {
      w_52 = ATgetArgument(v_52, 0);
      x_52 = ATgetArgument(v_52, 1);
      t = SSL_WriteToTextFile(not_null(w_52), not_null(x_52));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  f_53 :
  if(match_cons(g_53, sym__2))
    {
      h_53 = ATgetArgument(g_53, 0);
      i_53 = ATgetArgument(g_53, 1);
      t = SSL_WriteToBinaryFile(not_null(h_53), not_null(i_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_53 = NULL;
  ATerm m_8;
  m_8 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm r_53 = NULL,s_53 = NULL;
            r_53 = t;
            n_53 :
            if(match_cons(r_53, sym_Output_1))
              {
                s_53 = ATgetArgument(r_53, 0);
                if(((q_53 != NULL) && (q_53 != s_53)))
                  _fail(s_53);
                else
                  q_53 = s_53;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_1);
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm v_53 = NULL;
            t = term_p_8;
            {
              v_53 = t;
              if(((q_53 != NULL) && (q_53 != v_53)))
                _fail(v_53);
              else
                q_53 = v_53;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_1, _id);
  }
  t = m_8;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        t = not_null(q_53);
        return(t);
      }
      t = split_2(t, r_1, _id);
      return(t);
    }
    t = _2(t, _id, q_1);
    {
      ATerm q_8 = t;
      int r_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_1 (ATerm t)
          {
            ATerm t_1 (ATerm t)
            {
              ATerm w_53 = NULL;
              w_53 = t;
              p_53 :
              if(!(match_cons(w_53, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, t_1);
            return(t);
          }
          t = _2(t, s_1, WriteToBinaryFile_0);
          LocalPopChoice(r_8);
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
ATerm apply_strategy_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm e_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  ATerm s_8;
  s_8 = t;
  t = dtime_0(t);
  t = s_8;
  {
    t = p_63(t);
    {
      ATerm t_8;
      t_8 = t;
      {
        ATerm f_54 = NULL;
        t = dtime_0(t);
        {
          f_54 = t;
          if(((e_54 != NULL) && (e_54 != f_54)))
            _fail(f_54);
          else
            e_54 = f_54;
        }
      }
      t = t_8;
      {
        g_54 = t;
        c_54 :
        if(match_cons(g_54, sym__2))
          {
            h_54 = ATgetArgument(g_54, 0);
            i_54 = ATgetArgument(g_54, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_54)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_54))), not_null(i_54));
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
  ATerm i_55 = NULL;
  i_55 = t;
  t = SSL_ReadFromFile(not_null(i_55));
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_66 (ATerm), ATerm r_66 (ATerm))
{
  ATerm x_55 = NULL,i_56 = NULL;
  ATerm u_8;
  u_8 = t;
  {
    ATerm f_56 = NULL;
    t = q_66(t);
    {
      f_56 = t;
      if(((x_55 != NULL) && (x_55 != f_56)))
        _fail(f_56);
      else
        x_55 = f_56;
    }
  }
  t = u_8;
  {
    ATerm j_56 = NULL;
    t = r_66(t);
    {
      j_56 = t;
      if(((i_56 != NULL) && (i_56 != j_56)))
        _fail(j_56);
      else
        i_56 = j_56;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(i_56));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm y_56 = NULL;
  ATerm v_8;
  v_8 = t;
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          ATerm z_56 = NULL,a_57 = NULL;
          z_56 = t;
          w_56 :
          if(match_cons(z_56, sym_Input_1))
            {
              a_57 = ATgetArgument(z_56, 0);
              if(((y_56 != NULL) && (y_56 != a_57)))
                _fail(a_57);
              else
                y_56 = a_57;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, u_1);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        {
          ATerm b_57 = NULL;
          t = term_y_8;
          {
            b_57 = t;
            if(((y_56 != NULL) && (y_56 != b_57)))
              _fail(b_57);
            else
              y_56 = b_57;
          }
        }
      }
  }
  t = v_8;
  {
    ATerm v_1 (ATerm t)
    {
      t = not_null(y_56);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm i_57 = NULL;
  i_57 = t;
  h_57 :
  if(match_cons(i_57, sym_Version_0))
    {
      ATerm k_57 = NULL,m_57 = NULL;
      ATerm z_8;
      z_8 = t;
      {
        ATerm l_57 = NULL;
        t = SSLgetAnnotations(not_null(i_57));
        {
          l_57 = t;
          if(((k_57 != NULL) && (k_57 != l_57)))
            _fail(l_57);
          else
            k_57 = l_57;
        }
      }
      t = z_8;
      {
        ATerm n_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(k_57));
        {
          n_57 = t;
          if(((m_57 != NULL) && (m_57 != n_57)))
            _fail(n_57);
          else
            m_57 = n_57;
        }
        t = not_null(m_57);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(d_9);
            }
          else
            {
              t = c_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_1);
  t = n_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  t = SSL_table_create(not_null(s_57));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  {
    ATerm e_9;
    e_9 = t;
    {
      t = term_f_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_9, term_g_9, not_null(w_57));
          t = table_put_0(t);
        }
      }
    }
    t = e_9;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_58 = NULL;
  a_58 = t;
  t = SSL_string_to_int(not_null(a_58));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL;
  i_58 = t;
  g_58 :
  if(match_string(i_58, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(i_58) == AT_LIST) && ((ATermList) i_58 != ATempty)))
        {
          j_58 = ATgetFirst((ATermList) i_58);
          k_58 = (ATerm) ATgetNext((ATermList) i_58);
          h_58 :
          if(((ATgetType(k_58) == AT_LIST) && ((ATermList) k_58 != ATempty)))
            {
              l_58 = ATgetFirst((ATermList) k_58);
              m_58 = (ATerm) ATgetNext((ATermList) k_58);
              {
                ATerm q_58 = NULL;
                ATerm h_9;
                h_9 = t;
                {
                  t = not_null(j_58);
                  t = j_0(t);
                }
                t = h_9;
                {
                  ATerm r_58 = NULL;
                  t = not_null(l_58);
                  {
                    t = k_0(t);
                    {
                      r_58 = t;
                      if(((q_58 != NULL) && (q_58 != r_58)))
                        _fail(r_58);
                      else
                        q_58 = r_58;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_58)), not_null(q_58));
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm i_59 = NULL;
        i_59 = t;
        v_58 :
        if(!(match_string(i_59, "-i")))
          {
            if(!(match_string(i_59, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_1 (ATerm t)
      {
        ATerm l_59 = NULL;
        ATerm k_9;
        k_9 = t;
        {
          ATerm j_59 = NULL;
          ATerm k_59 = NULL;
          k_59 = t;
          if(((j_59 != NULL) && (j_59 != k_59)))
            _fail(k_59);
          else
            j_59 = k_59;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(j_59));
            t = set_config_0(t);
          }
        }
        t = k_9;
        {
          ATerm m_59 = NULL;
          m_59 = t;
          if(((l_59 != NULL) && (l_59 != m_59)))
            _fail(m_59);
          else
            l_59 = m_59;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_59));
        }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_m_9;
        return(t);
      }
      t = ArgOption_3(t, x_1, y_1, z_1);
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
            ATerm a_2 (ATerm t)
            {
              ATerm n_59 = NULL;
              n_59 = t;
              y_58 :
              if(!(match_string(n_59, "-o")))
                {
                  if(!(match_string(n_59, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_2 (ATerm t)
            {
              ATerm q_59 = NULL;
              ATerm p_9;
              p_9 = t;
              {
                ATerm o_59 = NULL;
                ATerm p_59 = NULL;
                p_59 = t;
                if(((o_59 != NULL) && (o_59 != p_59)))
                  _fail(p_59);
                else
                  o_59 = p_59;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_9, not_null(o_59));
                  t = set_config_0(t);
                }
              }
              t = p_9;
              {
                ATerm r_59 = NULL;
                r_59 = t;
                if(((q_59 != NULL) && (q_59 != r_59)))
                  _fail(r_59);
                else
                  q_59 = r_59;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_59));
              }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              t = term_r_9;
              return(t);
            }
            t = ArgOption_3(t, a_2, b_2, c_2);
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
                  ATerm d_2 (ATerm t)
                  {
                    ATerm s_59 = NULL;
                    s_59 = t;
                    b_59 :
                    if(!(match_string(s_59, "-S")))
                      {
                        if(!(match_string(s_59, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm e_2 (ATerm t)
                  {
                    t = term_u_9;
                    t = set_config_0(t);
                    t = term_v_9;
                    return(t);
                  }
                  ATerm f_2 (ATerm t)
                  {
                    t = term_w_9;
                    return(t);
                  }
                  t = Option_3(t, d_2, e_2, f_2);
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
                        ATerm g_2 (ATerm t)
                        {
                          ATerm t_59 = NULL;
                          t_59 = t;
                          c_59 :
                          if(!(match_string(t_59, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm w_59 = NULL;
                          ATerm z_9;
                          z_9 = t;
                          {
                            ATerm u_59 = NULL;
                            ATerm v_59 = NULL;
                            t = string_to_int_0(t);
                            {
                              v_59 = t;
                              if(((u_59 != NULL) && (u_59 != v_59)))
                                _fail(v_59);
                              else
                                u_59 = v_59;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_7, not_null(u_59));
                              t = set_config_0(t);
                            }
                          }
                          t = z_9;
                          {
                            ATerm x_59 = NULL;
                            x_59 = t;
                            if(((w_59 != NULL) && (w_59 != x_59)))
                              _fail(x_59);
                            else
                              w_59 = x_59;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_59));
                          }
                          return(t);
                        }
                        ATerm i_2 (ATerm t)
                        {
                          t = term_a_10;
                          return(t);
                        }
                        t = ArgOption_3(t, g_2, h_2, i_2);
                        LocalPopChoice(y_9);
                      }
                    else
                      {
                        t = x_9;
                        {
                          ATerm b_10 = t;
                          int c_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_2 (ATerm t)
                              {
                                ATerm y_59 = NULL;
                                y_59 = t;
                                f_59 :
                                if(!(match_string(y_59, "-v")))
                                  {
                                    if(!(match_string(y_59, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                t = term_f_10;
                                t = set_config_0(t);
                                t = term_g_10;
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = term_h_10;
                                return(t);
                              }
                              t = Option_3(t, j_2, k_2, l_2);
                              LocalPopChoice(c_10);
                            }
                          else
                            {
                              t = b_10;
                              {
                                ATerm i_10 = t;
                                int j_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm z_59 = NULL;
                                      z_59 = t;
                                      g_59 :
                                      if(!(match_string(z_59, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      t = term_l_10;
                                      t = set_config_0(t);
                                      t = term_m_10;
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = term_n_10;
                                      return(t);
                                    }
                                    t = Option_3(t, m_2, n_2, o_2);
                                    LocalPopChoice(j_10);
                                  }
                                else
                                  {
                                    t = i_10;
                                    {
                                      ATerm p_2 (ATerm t)
                                      {
                                        ATerm a_60 = NULL;
                                        a_60 = t;
                                        h_59 :
                                        if(!(match_string(a_60, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm q_2 (ATerm t)
                                      {
                                        t = term_p_10;
                                        t = set_config_0(t);
                                        t = term_t_10;
                                        return(t);
                                      }
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = term_u_10;
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
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm i_60 = NULL;
  i_60 = t;
  t = SSL_table_destroy(not_null(i_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_60 = NULL;
  m_60 = t;
  t = SSL_exit(not_null(m_60));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  t = SSL_implode_string(not_null(w_60));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm z_60 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_60);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        {
          t = Nil_0(t);
          t = y_73(t);
        }
      }
    return(t);
  }
  t = z_60(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      {
        ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
        c_61 = t;
        b_61 :
        if(((ATgetType(c_61) == AT_LIST) && ((ATermList) c_61 != ATempty)))
          {
            d_61 = ATgetFirst((ATermList) c_61);
            e_61 = (ATerm) ATgetNext((ATermList) c_61);
            {
              t = not_null(d_61);
              {
                ATerm s_2 (ATerm t)
                {
                  t = not_null(e_61);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_2);
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
  ATerm k_61 = NULL;
  k_61 = t;
  t = SSL_explode_string(not_null(k_61));
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
ATerm long_description_1 (ATerm t, ATerm o_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_73 (ATerm))
{
  ATerm q_61 (ATerm t)
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = Cons_2(t, k_73, q_61);
      }
    return(t);
  }
  t = q_61(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  z_61 = t;
  w_61 :
  if(((ATgetType(z_61) == AT_LIST) && ((ATermList) z_61 != ATempty)))
    {
      x_61 = ATgetFirst((ATermList) z_61);
      y_61 = (ATerm) ATgetNext((ATermList) z_61);
      {
        ATerm c_62 = NULL;
        t = not_null(y_61);
        {
          ATerm b_11;
          b_11 = t;
          {
            ATerm d_62 = NULL,f_62 = NULL,h_62 = NULL;
            ATerm c_11;
            c_11 = t;
            {
              ATerm e_62 = NULL;
              t = i_0(t);
              {
                e_62 = t;
                if(((d_62 != NULL) && (d_62 != e_62)))
                  _fail(e_62);
                else
                  d_62 = e_62;
              }
            }
            t = c_11;
            {
              ATerm g_62 = NULL;
              t = not_null(x_61);
              {
                t = f_0(t);
                {
                  g_62 = t;
                  if(((f_62 != NULL) && (f_62 != g_62)))
                    _fail(g_62);
                  else
                    f_62 = g_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_62)), not_null(f_62));
                {
                  h_62 = t;
                  if(((c_62 != NULL) && (c_62 != h_62)))
                    _fail(h_62);
                  else
                    c_62 = h_62;
                }
              }
            }
          }
          t = b_11;
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(c_62);
              return(t);
            }
            t = reverse_acc_2(t, f_0, t_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) z_61 == ATempty))
        {
          {
            t = term_e_10;
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
  ATerm u_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_60 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_47 (ATerm))
{
  ATerm y_62 = NULL,z_62 = NULL;
  y_62 = t;
  s_62 :
  if(match_cons(y_62, sym_Program_1))
    {
      z_62 = ATgetArgument(y_62, 0);
      {
        ATerm g_63 = NULL,i_63 = NULL;
        ATerm h_63 = NULL;
        t = SSLgetAnnotations(not_null(y_62));
        {
          h_63 = t;
          if(((g_63 != NULL) && (g_63 != h_63)))
            _fail(h_63);
          else
            g_63 = h_63;
        }
        {
          t = not_null(z_62);
          {
            ATerm k_63 = NULL;
            t = c_47(t);
            {
              i_63 = t;
              {
                ATerm l_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_63)), not_null(g_63));
                {
                  l_63 = t;
                  if(((k_63 != NULL) && (k_63 != l_63)))
                    _fail(l_63);
                  else
                    k_63 = l_63;
                }
                t = not_null(k_63);
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
  ATerm w_63 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      ATerm x_63 = NULL;
      x_63 = t;
      if(((w_63 != NULL) && (w_63 != x_63)))
        _fail(x_63);
      else
        w_63 = x_63;
      return(t);
    }
    t = Program_1(t, w_2);
    return(t);
  }
  t = option_defined_1(t, v_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm y_63 = NULL;
      ATerm z_63 = NULL;
      t = term_e_10;
      {
        ATerm y_2 (ATerm t)
        {
          t = not_null(w_63);
          return(t);
        }
        t = short_description_1(t, y_2);
        {
          t = concat_strings_0(t);
          {
            z_63 = t;
            if(((y_63 != NULL) && (y_63 != z_63)))
              _fail(z_63);
            else
              y_63 = z_63;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, not_null(y_63)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, term_d_11));
      {
        t = printnl_0(t);
        {
          t = term_h_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm a_64 = NULL;
                  a_64 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_64)), term_i_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_2);
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm c_64 = NULL;
                    ATerm d_64 = NULL;
                    t = term_e_10;
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = not_null(w_63);
                        return(t);
                      }
                      t = long_description_1(t, b_3);
                      {
                        t = concat_strings_0(t);
                        {
                          d_64 = t;
                          if(((c_64 != NULL) && (c_64 != d_64)))
                            _fail(d_64);
                          else
                            c_64 = d_64;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_64)), term_l_11));
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
ATerm Undefined_1 (ATerm t, ATerm d_47 (ATerm))
{
  ATerm o_64 = NULL,p_64 = NULL;
  o_64 = t;
  n_64 :
  if(match_cons(o_64, sym_Undefined_1))
    {
      p_64 = ATgetArgument(o_64, 0);
      {
        ATerm s_64 = NULL,u_64 = NULL;
        ATerm t_64 = NULL;
        t = SSLgetAnnotations(not_null(o_64));
        {
          t_64 = t;
          if(((s_64 != NULL) && (s_64 != t_64)))
            _fail(t_64);
          else
            s_64 = t_64;
        }
        {
          t = not_null(p_64);
          {
            ATerm w_64 = NULL;
            t = d_47(t);
            {
              u_64 = t;
              {
                ATerm x_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_64)), not_null(s_64));
                {
                  x_64 = t;
                  if(((w_64 != NULL) && (w_64 != x_64)))
                    _fail(x_64);
                  else
                    w_64 = x_64;
                }
                t = not_null(w_64);
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
ATerm fetch_1 (ATerm t, ATerm s_73 (ATerm))
{
  ATerm c_65 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_73, _id);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = Cons_2(t, _id, c_65);
      }
    return(t);
  }
  t = c_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_61 (ATerm))
{
  t = fetch_1(t, m_61);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_65 = NULL;
  h_65 = t;
  g_65 :
  if(match_cons(h_65, sym_Help_0))
    {
      ATerm j_65 = NULL,l_65 = NULL;
      ATerm o_11;
      o_11 = t;
      {
        ATerm k_65 = NULL;
        t = SSLgetAnnotations(not_null(h_65));
        {
          k_65 = t;
          if(((j_65 != NULL) && (j_65 != k_65)))
            _fail(k_65);
          else
            j_65 = k_65;
        }
      }
      t = o_11;
      {
        ATerm m_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_65));
        {
          m_65 = t;
          if(((l_65 != NULL) && (l_65 != m_65)))
            _fail(m_65);
          else
            l_65 = m_65;
        }
        t = not_null(l_65);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_80(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  r_65 :
  if(match_cons(s_65, sym__2))
    {
      t_65 = ATgetArgument(s_65, 0);
      u_65 = ATgetArgument(s_65, 1);
      t = SSL_table_get(not_null(t_65), not_null(u_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  b_66 = t;
  a_66 :
  if(match_cons(b_66, sym__3))
    {
      c_66 = ATgetArgument(b_66, 0);
      d_66 = ATgetArgument(b_66, 1);
      e_66 = ATgetArgument(b_66, 2);
      {
        ATerm r_11;
        r_11 = t;
        {
          ATerm i_66 = NULL;
          ATerm j_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_66), not_null(d_66));
          {
            ATerm s_11 = t;
            int t_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_11);
              }
            else
              {
                t = s_11;
                t = (ATerm) ATempty;
              }
            {
              j_66 = t;
              if(((i_66 != NULL) && (i_66 != j_66)))
                _fail(j_66);
              else
                i_66 = j_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_66), not_null(d_66), (ATerm) ATinsert(CheckATermList(not_null(i_66)), not_null(e_66)));
            t = table_put_0(t);
          }
        }
        t = r_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_60 (ATerm))
{
  ATerm n_66 = NULL;
  ATerm o_66 = NULL;
  t = term_e_10;
  {
    t = s_60(t);
    {
      o_66 = t;
      if(((n_66 != NULL) && (n_66 != o_66)))
        _fail(o_66);
      else
        n_66 = o_66;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_11, term_g_11, not_null(n_66));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  w_66 = t;
  v_66 :
  if(match_string(w_66, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(w_66) == AT_LIST) && ((ATermList) w_66 != ATempty)))
        {
          x_66 = ATgetFirst((ATermList) w_66);
          y_66 = (ATerm) ATgetNext((ATermList) w_66);
          {
            ATerm b_67 = NULL;
            ATerm u_11;
            u_11 = t;
            {
              t = not_null(x_66);
              t = a_0(t);
            }
            t = u_11;
            {
              ATerm c_67 = NULL;
              t = term_e_10;
              {
                t = b_0(t);
                {
                  c_67 = t;
                  if(((b_67 != NULL) && (b_67 != c_67)))
                    _fail(c_67);
                  else
                    b_67 = c_67;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_66)), not_null(b_67));
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
  ATerm c_3 (ATerm t)
  {
    ATerm h_67 = NULL;
    h_67 = t;
    g_67 :
    if(!(match_string(h_67, "--help")))
      {
        if(!(match_string(h_67, "-h")))
          {
            if(!(match_string(h_67, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_z_11;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_a_12;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL;
  k_67 = t;
  j_67 :
  if(((ATgetType(k_67) == AT_LIST) && ((ATermList) k_67 != ATempty)))
    {
      l_67 = ATgetFirst((ATermList) k_67);
      m_67 = (ATerm) ATgetNext((ATermList) k_67);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_67)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_67)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_56 (ATerm), ATerm u_56 (ATerm))
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  w_67 = t;
  v_67 :
  if(((ATgetType(w_67) == AT_LIST) && ((ATermList) w_67 != ATempty)))
    {
      x_67 = ATgetFirst((ATermList) w_67);
      y_67 = (ATerm) ATgetNext((ATermList) w_67);
      {
        ATerm e_68 = NULL,g_68 = NULL;
        ATerm f_68 = NULL;
        t = SSLgetAnnotations(not_null(w_67));
        {
          f_68 = t;
          if(((e_68 != NULL) && (e_68 != f_68)))
            _fail(f_68);
          else
            e_68 = f_68;
        }
        {
          t = not_null(x_67);
          {
            ATerm i_68 = NULL;
            t = t_56(t);
            {
              g_68 = t;
              {
                t = not_null(y_67);
                {
                  ATerm k_68 = NULL;
                  t = u_56(t);
                  {
                    i_68 = t;
                    {
                      ATerm l_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_68)), not_null(g_68)), not_null(e_68));
                      {
                        l_68 = t;
                        if(((k_68 != NULL) && (k_68 != l_68)))
                          _fail(l_68);
                        else
                          k_68 = l_68;
                      }
                      t = not_null(k_68);
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
  ATerm v_68 = NULL;
  v_68 = t;
  u_68 :
  if(((ATermList) v_68 == ATempty))
    {
      {
        ATerm x_68 = NULL,z_68 = NULL;
        ATerm b_12;
        b_12 = t;
        {
          ATerm y_68 = NULL;
          t = SSLgetAnnotations(not_null(v_68));
          {
            y_68 = t;
            if(((x_68 != NULL) && (x_68 != y_68)))
              _fail(y_68);
            else
              x_68 = y_68;
          }
        }
        t = b_12;
        {
          ATerm a_69 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_68));
          {
            a_69 = t;
            if(((z_68 != NULL) && (z_68 != a_69)))
              _fail(a_69);
            else
              z_68 = a_69;
          }
          t = not_null(z_68);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
  g_69 = t;
  f_69 :
  if(match_cons(g_69, sym__2))
    {
      h_69 = ATgetArgument(g_69, 0);
      i_69 = ATgetArgument(g_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_7, not_null(h_69), not_null(i_69));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm f_12;
  f_12 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = term_h_12;
      t = q_60(t);
      return(t);
    }
    t = try_1(t, f_3);
  }
  t = f_12;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm s_69 = NULL;
      ATerm k_12;
      k_12 = t;
      {
        ATerm o_69 = NULL;
        ATerm p_69 = NULL;
        p_69 = t;
        if(((o_69 != NULL) && (o_69 != p_69)))
          _fail(p_69);
        else
          o_69 = p_69;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_8, not_null(o_69));
          t = set_config_0(t);
        }
      }
      t = k_12;
      {
        ATerm t_69 = NULL;
        t_69 = t;
        if(((s_69 != NULL) && (s_69 != t_69)))
          _fail(t_69);
        else
          s_69 = t_69;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_69));
      }
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      ATerm l_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              {
                t = q_60(t);
                t = Cons_2(t, _id, h_3);
              }
            }
          LocalPopChoice(m_12);
        }
      else
        {
          t = l_12;
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
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  ATerm p_12;
  p_12 = t;
  {
    ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
    c_70 = t;
    y_69 :
    if(match_cons(c_70, sym__3))
      {
        d_70 = ATgetArgument(c_70, 0);
        e_70 = ATgetArgument(c_70, 1);
        f_70 = ATgetArgument(c_70, 2);
        {
          if(((z_69 != NULL) && (z_69 != d_70)))
            _fail(d_70);
          else
            z_69 = d_70;
          {
            if(((a_70 != NULL) && (a_70 != e_70)))
              _fail(e_70);
            else
              a_70 = e_70;
            {
              if(((b_70 != NULL) && (b_70 != f_70)))
                _fail(f_70);
              else
                b_70 = f_70;
              t = SSL_table_put(not_null(z_69), not_null(a_70), not_null(b_70));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm i_70 = NULL;
  ATerm q_12;
  q_12 = t;
  {
    t = term_r_12;
    t = table_put_0(t);
  }
  t = q_12;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_60(t);
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_x_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm j_70 = NULL;
                  j_70 = t;
                  if(((i_70 != NULL) && (i_70 != j_70)))
                    _fail(j_70);
                  else
                    i_70 = j_70;
                  return(t);
                }
                t = Undefined_1(t, l_3);
                return(t);
              }
              t = option_defined_1(t, k_3);
              {
                ATerm w_12;
                w_12 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_70)), term_a_13));
                  t = printnl_0(t);
                }
                t = w_12;
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_7;
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
        ATerm b_13;
        b_13 = t;
        {
          t = term_f_11;
          t = table_destroy_0(t);
        }
        t = b_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm f_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_63(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = f_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_3);
  {
    t = store_options_0(t);
    {
      t = e_63(t);
      {
        ATerm j_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_63);
            LocalPopChoice(n_13);
          }
        else
          {
            t = j_13;
            {
              ATerm q_13 = t;
              int r_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, b_63);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(r_13);
                }
              else
                {
                  t = q_13;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm s_13;
      s_13 = t;
      {
        ATerm m_70 = NULL;
        ATerm n_70 = NULL;
        t = term_j_8;
        {
          t = get_config_0(t);
          {
            n_70 = t;
            if(((m_70 != NULL) && (m_70 != n_70)))
              _fail(n_70);
            else
              m_70 = n_70;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATempty, not_null(m_70)));
          t = printnl_0(t);
        }
      }
      t = s_13;
      return(t);
    }
    t = if_verbose2_1(t, o_3);
    return(t);
  }
  t = iowrap_4(t, v_62, w_62, x_62, n_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_62 (ATerm), ATerm u_62 (ATerm))
{
  t = iowrap_3(t, t_62, u_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    t = _2(t, _id, q_62);
    return(t);
  }
  t = iowrap_2(t, p_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
