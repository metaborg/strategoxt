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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_i_17;
ATerm term_x_16;
ATerm term_j_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_u_9;
ATerm term_h_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_a_8;
ATerm term_z_7;
void init_constant_terms (void)
{
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_w_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_w_10);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_w_10);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_w_10);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_w_10);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__3, term_n_14, term_o_14, (ATerm) ATempty);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm q_82 (ATerm));
ATerm Rec_2 (ATerm, ATerm k_57 (ATerm), ATerm l_57 (ATerm));
ATerm SDef_3 (ATerm, ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm Let_2 (ATerm, ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm sboundin_3 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm j_57 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm m_82 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm a_56 (ATerm));
ATerm Scope_2 (ATerm, ATerm o_58 (ATerm), ATerm p_58 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm p_82 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm));
ATerm crush_3 (ATerm, ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm y_71 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm for_3 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm z_65 (ATerm));
ATerm HdMember_1 (ATerm, ATerm l_71 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm i_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm zip_1 (ATerm, ATerm b_76 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm f_69 (ATerm), ATerm g_69 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm t_68 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm b_68 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm g_68 (ATerm));
ATerm rename_4 (ATerm, ATerm h_69 (ATerm, ATerm (ATerm)), ATerm i_69 (ATerm), ATerm j_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_69 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm u_47 (ATerm), ATerm v_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_70 (ATerm), ATerm h_70 (ATerm));
ATerm crush_2 (ATerm, ATerm u_71 (ATerm), ATerm v_71 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_64 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_61 (ATerm));
ATerm map_1 (ATerm, ATerm y_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_61 (ATerm));
ATerm Program_1 (ATerm, ATerm k_49 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_49 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_78 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_61 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_58 (ATerm), ATerm u_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_64 (ATerm), ATerm k_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_64 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,r_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && ((ATermList) f_3 != ATempty)))
    {
      g_3 = ATgetFirst((ATermList) f_3);
      r_3 = (ATerm) ATgetNext((ATermList) f_3);
      t = not_null(g_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm m_4 = t;
  int s_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        t = split_2(t, _id, q_82);
        {
          ATerm d_0 (ATerm t)
          {
            ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
            e_4 = t;
            z_3 :
            if(match_cons(e_4, sym__2))
              {
                f_4 = ATgetArgument(e_4, 0);
                j_4 = ATgetArgument(e_4, 1);
                a_4 :
                if(match_cons(f_4, sym_SDef_3))
                  {
                    g_4 = ATgetArgument(f_4, 0);
                    h_4 = ATgetArgument(f_4, 1);
                    i_4 = ATgetArgument(f_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_4), not_null(h_4), not_null(i_4));
                  }
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
      t = Let_2(t, c_0, _id);
      LocalPopChoice(s_4);
    }
  else
    {
      t = m_4;
      {
        ATerm t_4 = t;
        int u_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_0 (ATerm t)
            {
              t = split_2(t, _id, q_82);
              {
                ATerm h_0 (ATerm t)
                {
                  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
                  n_4 = t;
                  c_4 :
                  if(match_cons(n_4, sym__2))
                    {
                      o_4 = ATgetArgument(n_4, 0);
                      r_4 = ATgetArgument(n_4, 1);
                      d_4 :
                      if(match_cons(o_4, sym_VarDec_2))
                        {
                          p_4 = ATgetArgument(o_4, 0);
                          q_4 = ATgetArgument(o_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_4), not_null(q_4));
                        }
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
                t = zip_1(t, h_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, g_0, _id);
            LocalPopChoice(u_4);
          }
        else
          {
            t = t_4;
            {
              ATerm n_0 (ATerm t)
              {
                t = q_82(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, n_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm k_57 (ATerm), ATerm l_57 (ATerm))
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym_Rec_2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        ATerm j_5 = NULL,l_5 = NULL;
        ATerm k_5 = NULL;
        t = SSLgetAnnotations(not_null(d_5));
        {
          k_5 = t;
          if(((j_5 != NULL) && (j_5 != k_5)))
            _fail(k_5);
          else
            j_5 = k_5;
        }
        {
          t = not_null(e_5);
          {
            ATerm n_5 = NULL;
            t = k_57(t);
            {
              l_5 = t;
              {
                t = not_null(f_5);
                {
                  ATerm p_5 = NULL;
                  t = l_57(t);
                  {
                    n_5 = t;
                    {
                      ATerm q_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_5), not_null(n_5)), not_null(j_5));
                      {
                        q_5 = t;
                        if(((p_5 != NULL) && (p_5 != q_5)))
                          _fail(q_5);
                        else
                          p_5 = q_5;
                      }
                      t = not_null(p_5);
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
ATerm SDef_3 (ATerm t, ATerm o_57 (ATerm), ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym_SDef_3))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      g_6 = ATgetArgument(d_6, 2);
      {
        ATerm l_6 = NULL,n_6 = NULL;
        ATerm m_6 = NULL;
        t = SSLgetAnnotations(not_null(d_6));
        {
          m_6 = t;
          if(((l_6 != NULL) && (l_6 != m_6)))
            _fail(m_6);
          else
            l_6 = m_6;
        }
        {
          t = not_null(e_6);
          {
            ATerm p_6 = NULL;
            t = o_57(t);
            {
              n_6 = t;
              {
                t = not_null(f_6);
                {
                  ATerm r_6 = NULL;
                  t = p_57(t);
                  {
                    p_6 = t;
                    {
                      t = not_null(g_6);
                      {
                        ATerm t_6 = NULL;
                        t = q_57(t);
                        {
                          r_6 = t;
                          {
                            ATerm u_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_6), not_null(p_6), not_null(r_6)), not_null(l_6));
                            {
                              u_6 = t;
                              if(((t_6 != NULL) && (t_6 != u_6)))
                                _fail(u_6);
                              else
                                t_6 = u_6;
                            }
                            t = not_null(t_6);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym_Let_2))
    {
      i_7 = ATgetArgument(h_7, 0);
      j_7 = ATgetArgument(h_7, 1);
      {
        ATerm n_7 = NULL,p_7 = NULL;
        ATerm o_7 = NULL;
        t = SSLgetAnnotations(not_null(h_7));
        {
          o_7 = t;
          if(((n_7 != NULL) && (n_7 != o_7)))
            _fail(o_7);
          else
            n_7 = o_7;
        }
        {
          t = not_null(i_7);
          {
            ATerm r_7 = NULL;
            t = m_57(t);
            {
              p_7 = t;
              {
                t = not_null(j_7);
                {
                  ATerm t_7 = NULL;
                  t = n_57(t);
                  {
                    r_7 = t;
                    {
                      ATerm u_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_7), not_null(r_7)), not_null(n_7));
                      {
                        u_7 = t;
                        if(((t_7 != NULL) && (t_7 != u_7)))
                          _fail(u_7);
                        else
                          t_7 = u_7;
                      }
                      t = not_null(t_7);
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
ATerm sboundin_3 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm), ATerm t_82 (ATerm))
{
  ATerm v_4 = t;
  int w_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, r_82, r_82);
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
            t = SDef_3(t, t_82, t_82, r_82);
            LocalPopChoice(y_4);
          }
        else
          {
            t = x_4;
            t = Rec_2(t, t_82, r_82);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_Rec_2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym_SDef_3))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      p_8 = ATgetArgument(m_8, 2);
      {
        t = not_null(o_8);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
            t_8 = t;
            k_8 :
            if(match_cons(t_8, sym_VarDec_2))
              {
                u_8 = ATgetArgument(t_8, 0);
                v_8 = ATgetArgument(t_8, 1);
                t = not_null(u_8);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Let_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        t = not_null(e_9);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
            i_9 = t;
            b_9 :
            if(match_cons(i_9, sym_SDef_3))
              {
                j_9 = ATgetArgument(i_9, 0);
                k_9 = ATgetArgument(i_9, 1);
                l_9 = ATgetArgument(i_9, 2);
                t = not_null(j_9);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_SVar_1))
    {
      x_9 = ATgetArgument(w_9, 0);
      {
        ATerm a_10 = NULL,c_10 = NULL;
        ATerm b_10 = NULL;
        t = SSLgetAnnotations(not_null(w_9));
        {
          b_10 = t;
          if(((a_10 != NULL) && (a_10 != b_10)))
            _fail(b_10);
          else
            a_10 = b_10;
        }
        {
          t = not_null(x_9);
          {
            ATerm e_10 = NULL;
            t = j_57(t);
            {
              c_10 = t;
              {
                ATerm f_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(c_10)), not_null(a_10));
                {
                  f_10 = t;
                  if(((e_10 != NULL) && (e_10 != f_10)))
                    _fail(f_10);
                  else
                    e_10 = f_10;
                }
                t = not_null(e_10);
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
  ATerm q_0 (ATerm t)
  {
    ATerm z_4 = t;
    int a_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(a_5);
      }
    else
      {
        t = z_4;
        {
          ATerm b_5 = t;
          int g_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(g_5);
            }
          else
            {
              t = b_5;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm m_82 (ATerm))
{
  t = Scope_2(t, m_82, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm a_56 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_DynamicRules_1))
    {
      q_10 = ATgetArgument(p_10, 0);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm x_10 = NULL;
            t = a_56(t);
            {
              v_10 = t;
              {
                ATerm y_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(v_10)), not_null(t_10));
                {
                  y_10 = t;
                  if(((x_10 != NULL) && (x_10 != y_10)))
                    _fail(y_10);
                  else
                    x_10 = y_10;
                }
                t = not_null(x_10);
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
ATerm Scope_2 (ATerm t, ATerm o_58 (ATerm), ATerm p_58 (ATerm))
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_Scope_2))
    {
      k_11 = ATgetArgument(j_11, 0);
      l_11 = ATgetArgument(j_11, 1);
      {
        ATerm p_11 = NULL,r_11 = NULL;
        ATerm q_11 = NULL;
        t = SSLgetAnnotations(not_null(j_11));
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
        {
          t = not_null(k_11);
          {
            ATerm t_11 = NULL;
            t = o_58(t);
            {
              r_11 = t;
              {
                t = not_null(l_11);
                {
                  ATerm v_11 = NULL;
                  t = p_58(t);
                  {
                    t_11 = t;
                    {
                      ATerm w_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_11), not_null(t_11)), not_null(p_11));
                      {
                        w_11 = t;
                        if(((v_11 != NULL) && (v_11 != w_11)))
                          _fail(w_11);
                        else
                          v_11 = w_11;
                      }
                      t = not_null(v_11);
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
ATerm tboundin_3 (ATerm t, ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm p_82 (ATerm))
{
  ATerm h_5 = t;
  int i_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, p_82, n_82);
      LocalPopChoice(i_5);
    }
  else
    {
      t = h_5;
      t = DynamicRules_1(t, n_82);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_DynamicRules_1))
    {
      f_12 = ATgetArgument(e_12, 0);
      {
        t = not_null(f_12);
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
  ATerm k_12 = NULL,l_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym_Var_1))
    {
      l_12 = ATgetArgument(k_12, 0);
      t = (ATerm) ATinsert(ATempty, not_null(l_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        t = not_null(r_12);
        {
          ATerm w_12 (ATerm t)
          {
            ATerm m_5 = t;
            int o_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_12);
                LocalPopChoice(o_5);
              }
            else
              {
                t = m_5;
                {
                  ATerm r_5 = t;
                  int s_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(s_12);
                        return(t);
                      }
                      t = HdMember_1(t, r_0);
                      t = w_12(t);
                      LocalPopChoice(s_5);
                    }
                  else
                    {
                      t = r_5;
                      t = Cons_2(t, _id, w_12);
                    }
                }
              }
            return(t);
          }
          t = w_12(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm k_70 (ATerm))
{
  ATerm t_5 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_70(t);
      LocalPopChoice(u_5);
    }
  else
    {
      t = t_5;
      {
        ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
        b_13 = t;
        a_13 :
        if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
          {
            c_13 = ATgetFirst((ATermList) b_13);
            d_13 = (ATerm) ATgetNext((ATermList) b_13);
            {
              ATerm g_13 = NULL,i_13 = NULL;
              ATerm v_5;
              v_5 = t;
              {
                ATerm h_13 = NULL;
                t = not_null(c_13);
                {
                  t = k_70(t);
                  {
                    h_13 = t;
                    if(((g_13 != NULL) && (g_13 != h_13)))
                      _fail(h_13);
                    else
                      g_13 = h_13;
                  }
                }
              }
              t = v_5;
              {
                ATerm j_13 = NULL;
                t = not_null(d_13);
                {
                  t = foldr_3(t, i_70, j_70, k_70);
                  {
                    j_13 = t;
                    if(((i_13 != NULL) && (i_13 != j_13)))
                      _fail(j_13);
                    else
                      i_13 = j_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(i_13));
                  t = j_70(t);
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
ATerm crush_3 (ATerm t, ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm y_71 (ATerm))
{
  ATerm r_13 = NULL;
  ATerm t_13 = NULL;
  r_13 = t;
  {
    ATerm u_13 = NULL;
    ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
    t = not_null(r_13);
    {
      u_13 = t;
      {
        t = SSL_explode_term(not_null(u_13));
        {
          w_13 = t;
          q_13 :
          if(match_cons(w_13, sym__2))
            {
              x_13 = ATgetArgument(w_13, 0);
              y_13 = ATgetArgument(w_13, 1);
              if(((t_13 != NULL) && (t_13 != y_13)))
                _fail(y_13);
              else
                t_13 = y_13;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_13);
      t = foldr_3(t, w_71, x_71, y_71);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  f_14 = t;
  d_14 :
  if(match_cons(f_14, sym__2))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      e_14 :
      if(((ATgetType(h_14) == AT_LIST) && ((ATermList) h_14 != ATempty)))
        {
          i_14 = ATgetFirst((ATermList) h_14);
          j_14 = (ATerm) ATgetNext((ATermList) h_14);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_14)), not_null(i_14)), not_null(j_14));
        }
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
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  y_14 = t;
  w_14 :
  if(((ATgetType(y_14) == AT_LIST) && ((ATermList) y_14 != ATempty)))
    {
      z_14 = ATgetFirst((ATermList) y_14);
      c_15 = (ATerm) ATgetNext((ATermList) y_14);
      x_14 :
      if(match_cons(z_14, sym__2))
        {
          a_15 = ATgetArgument(z_14, 0);
          b_15 = ATgetArgument(z_14, 1);
          {
            ATerm g_15 = NULL,h_15 = NULL,n_15 = NULL,t_15 = NULL;
            ATerm w_5;
            w_5 = t;
            {
              ATerm i_15 = NULL;
              ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
              t = not_null(b_15);
              {
                i_15 = t;
                {
                  t = SSL_explode_term(not_null(i_15));
                  {
                    k_15 = t;
                    r_14 :
                    if(match_cons(k_15, sym__2))
                      {
                        l_15 = ATgetArgument(k_15, 0);
                        m_15 = ATgetArgument(k_15, 1);
                        {
                          if(((g_15 != NULL) && (g_15 != l_15)))
                            _fail(l_15);
                          else
                            g_15 = l_15;
                          if(((h_15 != NULL) && (h_15 != m_15)))
                            _fail(m_15);
                          else
                            h_15 = m_15;
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
            t = w_5;
            {
              ATerm x_5;
              x_5 = t;
              {
                ATerm o_15 = NULL;
                ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
                t = not_null(a_15);
                {
                  o_15 = t;
                  {
                    t = SSL_explode_term(not_null(o_15));
                    {
                      q_15 = t;
                      u_14 :
                      if(match_cons(q_15, sym__2))
                        {
                          r_15 = ATgetArgument(q_15, 0);
                          s_15 = ATgetArgument(q_15, 1);
                          {
                            if(((g_15 != NULL) && (g_15 != r_15)))
                              _fail(r_15);
                            else
                              g_15 = r_15;
                            if(((n_15 != NULL) && (n_15 != s_15)))
                              _fail(s_15);
                            else
                              n_15 = s_15;
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
              t = x_5;
              {
                ATerm u_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), not_null(h_15));
                {
                  t = zip_1(t, _id);
                  {
                    u_15 = t;
                    if(((t_15 != NULL) && (t_15 != u_15)))
                      _fail(u_15);
                    else
                      t_15 = u_15;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(c_15));
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
            ATerm k_16 = NULL;
            if(((g_16 != NULL) && (g_16 != h_16)))
              _fail(h_16);
            else
              g_16 = h_16;
            {
              if(((k_16 != NULL) && (k_16 != i_16)))
                _fail(i_16);
              else
                k_16 = i_16;
              t = not_null(k_16);
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
ATerm while_not_2 (ATerm t, ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm m_16 (ATerm t)
  {
    ATerm y_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_65(t);
        LocalPopChoice(z_5);
      }
    else
      {
        t = y_5;
        {
          t = v_65(t);
          t = m_16(t);
        }
      }
    return(t);
  }
  t = m_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm z_65 (ATerm))
{
  t = x_65(t);
  t = while_not_2(t, y_65, z_65);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm l_71 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(((ATgetType(q_16) == AT_LIST) && ((ATermList) q_16 != ATempty)))
    {
      r_16 = ATgetFirst((ATermList) q_16);
      s_16 = (ATerm) ATgetNext((ATermList) q_16);
      {
        t = l_71(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_16 = NULL;
            v_16 = t;
            if(((r_16 != NULL) && (r_16 != v_16)))
              _fail(v_16);
            else
              r_16 = v_16;
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(s_16);
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
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
      b_17 = t;
      z_16 :
      if(match_cons(b_17, sym__2))
        {
          c_17 = ATgetArgument(b_17, 0);
          d_17 = ATgetArgument(b_17, 1);
          {
            t = not_null(c_17);
            {
              ATerm j_17 (ATerm t)
              {
                ATerm h_6 = t;
                int i_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
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
                          ATerm t_0 (ATerm t)
                          {
                            t = not_null(d_17);
                            return(t);
                          }
                          t = HdMember_1(t, t_0);
                          t = j_17(t);
                          LocalPopChoice(k_6);
                        }
                      else
                        {
                          t = j_6;
                          t = Cons_2(t, _id, j_17);
                        }
                    }
                  }
                return(t);
              }
              t = j_17(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm g_17 = NULL;
          g_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_17));
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          ATerm o_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 (ATerm t)
              {
                ATerm s_6 = t;
                int v_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(v_6);
                  }
                else
                  {
                    t = s_6;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, x_0);
              LocalPopChoice(q_6);
            }
          else
            {
              t = o_6;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, u_0, v_0, w_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm i_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_17 (ATerm t)
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_67(t);
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        {
          ATerm y_6 = t;
          int z_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_17 = NULL;
              ATerm a_7;
              a_7 = t;
              {
                ATerm n_17 = NULL;
                t = h_67(t);
                {
                  n_17 = t;
                  if(((m_17 != NULL) && (m_17 != n_17)))
                    _fail(n_17);
                  else
                    m_17 = n_17;
                }
              }
              t = a_7;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(m_17);
                    return(t);
                  }
                  t = split_2(t, o_17, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_67(t, y_0, o_17, z_0);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_1, union_0, _id);
                }
              }
              LocalPopChoice(z_6);
            }
          else
            {
              t = y_6;
              {
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_1, union_0, o_17);
              }
            }
        }
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  s_17 :
  if(match_cons(x_17, sym_LRule_1))
    {
      y_17 = ATgetArgument(x_17, 0);
      t_17 :
      if(match_cons(y_17, sym_Rule_3))
        {
          u_17 = ATgetArgument(y_17, 0);
          v_17 = ATgetArgument(y_17, 1);
          w_17 = ATgetArgument(y_17, 2);
          {
            t = not_null(u_17);
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
      if(match_cons(x_17, sym_Scope_2))
        {
          y_17 = ATgetArgument(x_17, 0);
          z_17 = ATgetArgument(x_17, 1);
          t = not_null(y_17);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Var_1))
    {
      r_18 = ATgetArgument(q_18, 0);
      {
        ATerm d_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL,w_18 = NULL;
            ATerm v_18 = NULL;
            t = SSLgetAnnotations(not_null(q_18));
            {
              v_18 = t;
              if(((u_18 != NULL) && (u_18 != v_18)))
                _fail(v_18);
              else
                u_18 = v_18;
            }
            {
              t = not_null(r_18);
              {
                ATerm y_18 = NULL;
                t = m_0(t);
                {
                  w_18 = t;
                  {
                    ATerm z_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_18)), not_null(u_18));
                    {
                      z_18 = t;
                      if(((y_18 != NULL) && (y_18 != z_18)))
                        _fail(z_18);
                      else
                        y_18 = z_18;
                    }
                    t = not_null(y_18);
                  }
                }
              }
            }
            LocalPopChoice(e_7);
          }
        else
          {
            t = d_7;
            {
              ATerm c_19 = NULL,e_19 = NULL;
              ATerm d_19 = NULL;
              t = SSLgetAnnotations(not_null(q_18));
              {
                d_19 = t;
                if(((c_19 != NULL) && (c_19 != d_19)))
                  _fail(d_19);
                else
                  c_19 = d_19;
              }
              {
                t = not_null(r_18);
                {
                  ATerm g_19 = NULL;
                  t = m_0(t);
                  {
                    e_19 = t;
                    {
                      ATerm h_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_19)), not_null(c_19));
                      {
                        h_19 = t;
                        if(((g_19 != NULL) && (g_19 != h_19)))
                          _fail(h_19);
                        else
                          g_19 = h_19;
                      }
                      t = not_null(g_19);
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
ATerm DistBinding_2 (ATerm t, ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym__3))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      x_19 = ATgetArgument(u_19, 2);
      {
        t = not_null(v_19);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm b_20 = NULL;
            b_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(x_19));
              t = z_68(t);
            }
            return(t);
          }
          ATerm f_1 (ATerm t)
          {
            ATerm d_20 = NULL;
            d_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(w_19));
              t = z_68(t);
            }
            return(t);
          }
          t = a_69(t, e_1, f_1, _id);
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
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      {
        t = not_null(l_20);
        {
          ATerm g_1 (ATerm t)
          {
            t = not_null(m_20);
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
ATerm Zip3_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_20)), not_null(u_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  d_21 = t;
  a_21 :
  if(match_cons(d_21, sym__2))
    {
      e_21 = ATgetArgument(d_21, 0);
      h_21 = ATgetArgument(d_21, 1);
      b_21 :
      if(((ATgetType(e_21) == AT_LIST) && ((ATermList) e_21 != ATempty)))
        {
          f_21 = ATgetFirst((ATermList) e_21);
          g_21 = (ATerm) ATgetNext((ATermList) e_21);
          c_21 :
          if(((ATgetType(h_21) == AT_LIST) && ((ATermList) h_21 != ATempty)))
            {
              i_21 = ATgetFirst((ATermList) h_21);
              j_21 = (ATerm) ATgetNext((ATermList) h_21);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_21), not_null(i_21)), (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(j_21)));
            }
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
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  q_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      r_21 :
      if(((ATermList) u_21 == ATempty))
        {
          s_21 :
          if(((ATermList) v_21 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm x_21 (ATerm t)
  {
    ATerm f_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_75(t);
        LocalPopChoice(k_7);
      }
    else
      {
        t = f_7;
        {
          t = x_75(t);
          {
            t = _2(t, z_75, x_21);
            t = y_75(t);
          }
        }
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_76);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm f_69 (ATerm), ATerm g_69 (ATerm, ATerm (ATerm)))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym__2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm k_22 = NULL,n_22 = NULL,o_22 = NULL,u_22 = NULL;
        ATerm l_7;
        l_7 = t;
        {
          ATerm p_22 = NULL;
          t = not_null(g_22);
          {
            ATerm q_22 = NULL;
            t = f_69(t);
            {
              p_22 = t;
              {
                if(((k_22 != NULL) && (k_22 != p_22)))
                  _fail(p_22);
                else
                  k_22 = p_22;
                {
                  ATerm r_22 = NULL,t_22 = NULL;
                  t = map_1(t, new_0);
                  {
                    q_22 = t;
                    {
                      if(((n_22 != NULL) && (n_22 != q_22)))
                        _fail(q_22);
                      else
                        n_22 = q_22;
                      {
                        ATerm s_22 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(n_22));
                        {
                          t = zip_1(t, _id);
                          {
                            s_22 = t;
                            if(((r_22 != NULL) && (r_22 != s_22)))
                              _fail(s_22);
                            else
                              r_22 = s_22;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_22), not_null(h_22));
                          {
                            t = conc_0(t);
                            {
                              t_22 = t;
                              if(((o_22 != NULL) && (o_22 != t_22)))
                                _fail(t_22);
                              else
                                o_22 = t_22;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = l_7;
        {
          ATerm v_22 = NULL;
          t = not_null(g_22);
          {
            ATerm h_1 (ATerm t)
            {
              t = not_null(n_22);
              return(t);
            }
            t = g_69(t, h_1);
            {
              v_22 = t;
              if(((u_22 != NULL) && (u_22 != v_22)))
                _fail(v_22);
              else
                u_22 = v_22;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_22), not_null(h_22), not_null(o_22));
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  p_23 = t;
  n_23 :
  if(match_cons(p_23, sym__2))
    {
      q_23 = ATgetArgument(p_23, 0);
      r_23 = ATgetArgument(p_23, 1);
      o_23 :
      if(((ATgetType(r_23) == AT_LIST) && ((ATermList) r_23 != ATempty)))
        {
          s_23 = ATgetFirst((ATermList) r_23);
          t_23 = (ATerm) ATgetNext((ATermList) r_23);
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), not_null(t_23));
        }
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
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  b_24 = t;
  y_23 :
  if(match_cons(b_24, sym__2))
    {
      c_24 = ATgetArgument(b_24, 0);
      d_24 = ATgetArgument(b_24, 1);
      z_23 :
      if(((ATgetType(d_24) == AT_LIST) && ((ATermList) d_24 != ATempty)))
        {
          e_24 = ATgetFirst((ATermList) d_24);
          h_24 = (ATerm) ATgetNext((ATermList) d_24);
          a_24 :
          if(match_cons(e_24, sym__2))
            {
              f_24 = ATgetArgument(e_24, 0);
              g_24 = ATgetArgument(e_24, 1);
              {
                ATerm j_24 = NULL;
                if(((c_24 != NULL) && (c_24 != f_24)))
                  _fail(f_24);
                else
                  c_24 = f_24;
                {
                  if(((j_24 != NULL) && (j_24 != g_24)))
                    _fail(g_24);
                  else
                    j_24 = g_24;
                  t = not_null(j_24);
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
  ATerm m_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = m_7;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm t_68 (ATerm, ATerm (ATerm)))
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  n_24 :
  if(match_cons(o_24, sym__2))
    {
      p_24 = ATgetArgument(o_24, 0);
      q_24 = ATgetArgument(o_24, 1);
      {
        t = not_null(p_24);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm j_1 (ATerm t)
            {
              t = not_null(q_24);
              return(t);
            }
            t = split_2(t, _id, j_1);
            t = lookup_0(t);
            return(t);
          }
          t = t_68(t, i_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      {
        t = not_null(y_24);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm c_25 = NULL;
            c_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(z_24));
              t = b_68(t);
            }
            return(t);
          }
          t = _all(t, k_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm g_68 (ATerm))
{
  ATerm g_25 (ATerm t)
  {
    ATerm s_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_68(t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = s_7;
        t = all_dist_1(t, g_25);
      }
    return(t);
  }
  t = g_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_69 (ATerm, ATerm (ATerm)), ATerm i_69 (ATerm), ATerm j_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_69 (ATerm, ATerm (ATerm)))
{
  ATerm i_25 = NULL;
  i_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), (ATerm) ATempty);
    {
      ATerm l_25 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, h_69);
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
              {
                t = RnBinding_2(t, i_69, k_69);
                t = DistBinding_2(t, l_25, j_69);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, l_1);
        return(t);
      }
      t = l_25(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm m_25 (ATerm t, ATerm n_25 (ATerm))
  {
    t = Scope_2(t, n_25, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, m_25);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm u_47 (ATerm), ATerm v_47 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  f_26 :
  if(match_cons(g_26, sym__2))
    {
      h_26 = ATgetArgument(g_26, 0);
      i_26 = ATgetArgument(g_26, 1);
      {
        ATerm m_26 = NULL,o_26 = NULL;
        ATerm n_26 = NULL;
        t = SSLgetAnnotations(not_null(g_26));
        {
          n_26 = t;
          if(((m_26 != NULL) && (m_26 != n_26)))
            _fail(n_26);
          else
            m_26 = n_26;
        }
        {
          t = not_null(h_26);
          {
            ATerm q_26 = NULL;
            t = u_47(t);
            {
              o_26 = t;
              {
                t = not_null(i_26);
                {
                  ATerm s_26 = NULL;
                  t = v_47(t);
                  {
                    q_26 = t;
                    {
                      ATerm t_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_26), not_null(q_26)), not_null(m_26));
                      {
                        t_26 = t;
                        if(((s_26 != NULL) && (s_26 != t_26)))
                          _fail(t_26);
                        else
                          s_26 = t_26;
                      }
                      t = not_null(s_26);
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
  ATerm i_27 = NULL;
  ATerm y_7;
  y_7 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm j_27 = NULL,k_27 = NULL;
      j_27 = t;
      h_27 :
      if(match_cons(j_27, sym_Program_1))
        {
          k_27 = ATgetArgument(j_27, 0);
          if(((i_27 != NULL) && (i_27 != k_27)))
            _fail(k_27);
          else
            i_27 = k_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_8), not_null(i_27)), term_a_8));
      {
        t = printnl_0(t);
        {
          t = term_g_8;
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
  t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATempty, term_h_8));
  {
    t = printnl_0(t);
    {
      t = term_g_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  t = SSL_TicksToSeconds(not_null(n_27));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_27 = NULL,w_27 = NULL,x_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__2))
    {
      w_27 = ATgetArgument(s_27, 0);
      x_27 = ATgetArgument(s_27, 1);
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(w_27), not_null(x_27));
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            t = SSL_addr(not_null(w_27), not_null(x_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_70 (ATerm), ATerm h_70 (ATerm))
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_70(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
        e_28 = t;
        d_28 :
        if(((ATgetType(e_28) == AT_LIST) && ((ATermList) e_28 != ATempty)))
          {
            f_28 = ATgetFirst((ATermList) e_28);
            g_28 = (ATerm) ATgetNext((ATermList) e_28);
            {
              ATerm j_28 = NULL;
              ATerm k_28 = NULL;
              t = not_null(g_28);
              {
                t = foldr_2(t, g_70, h_70);
                {
                  k_28 = t;
                  if(((j_28 != NULL) && (j_28 != k_28)))
                    _fail(k_28);
                  else
                    j_28 = k_28;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_28), not_null(j_28));
                t = h_70(t);
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
ATerm crush_2 (ATerm t, ATerm u_71 (ATerm), ATerm v_71 (ATerm))
{
  ATerm r_28 = NULL;
  ATerm t_28 = NULL;
  r_28 = t;
  {
    ATerm u_28 = NULL;
    ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
    t = not_null(r_28);
    {
      u_28 = t;
      {
        t = SSL_explode_term(not_null(u_28));
        {
          w_28 = t;
          q_28 :
          if(match_cons(w_28, sym__2))
            {
              x_28 = ATgetArgument(w_28, 0);
              y_28 = ATgetArgument(w_28, 1);
              if(((t_28 != NULL) && (t_28 != y_28)))
                _fail(y_28);
              else
                t_28 = y_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_28);
      t = foldr_2(t, u_71, v_71);
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
    ATerm n_1 (ATerm t)
    {
      t = term_s_8;
      return(t);
    }
    t = crush_2(t, n_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  ATerm o_1 (ATerm t)
  {
    ATerm r_29 = NULL;
    ATerm p_1 (ATerm t)
    {
      ATerm w_8 = t;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm m_29 = NULL;
            m_29 = t;
            c_29 :
            if(!(match_cons(m_29, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_8;
        }
      return(t);
    }
    t = _2(t, p_1, _id);
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          ATerm n_29 = NULL,o_29 = NULL;
          n_29 = t;
          g_29 :
          if(match_cons(n_29, sym_Runtime_1))
            {
              o_29 = ATgetArgument(n_29, 0);
              if(((k_29 != NULL) && (k_29 != o_29)))
                _fail(o_29);
              else
                k_29 = o_29;
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
        ATerm t_1 (ATerm t)
        {
          ATerm u_1 (ATerm t)
          {
            ATerm p_29 = NULL,q_29 = NULL;
            p_29 = t;
            i_29 :
            if(match_cons(p_29, sym_Program_1))
              {
                q_29 = ATgetArgument(p_29, 0);
                if(((l_29 != NULL) && (l_29 != q_29)))
                  _fail(q_29);
                else
                  l_29 = q_29;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_1);
          return(t);
        }
        t = _2(t, t_1, _id);
        {
          ATerm s_29 = NULL;
          t = run_time_0(t);
          {
            s_29 = t;
            if(((r_29 != NULL) && (r_29 != s_29)))
              _fail(s_29);
            else
              r_29 = s_29;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_8), not_null(r_29)), term_x_8), not_null(l_29)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, o_1);
  {
    t = term_s_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym__2))
    {
      z_29 = ATgetArgument(y_29, 0);
      a_30 = ATgetArgument(y_29, 1);
      t = SSL_WriteToTextFile(not_null(z_29), not_null(a_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym__2))
    {
      h_30 = ATgetArgument(g_30, 0);
      i_30 = ATgetArgument(g_30, 1);
      t = SSL_WriteToBinaryFile(not_null(h_30), not_null(i_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_30 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm a_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm r_30 = NULL,s_30 = NULL;
            r_30 = t;
            n_30 :
            if(match_cons(r_30, sym_Output_1))
              {
                s_30 = ATgetArgument(r_30, 0);
                if(((q_30 != NULL) && (q_30 != s_30)))
                  _fail(s_30);
                else
                  q_30 = s_30;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, w_1);
          LocalPopChoice(g_9);
        }
      else
        {
          t = a_9;
          {
            ATerm t_30 = NULL;
            t = term_h_9;
            {
              t_30 = t;
              if(((q_30 != NULL) && (q_30 != t_30)))
                _fail(t_30);
              else
                q_30 = t_30;
            }
          }
        }
      return(t);
    }
    t = _2(t, v_1, _id);
  }
  t = z_8;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm y_1 (ATerm t)
      {
        t = not_null(q_30);
        return(t);
      }
      t = split_2(t, y_1, _id);
      return(t);
    }
    t = _2(t, _id, x_1);
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_1 (ATerm t)
          {
            ATerm a_2 (ATerm t)
            {
              ATerm u_30 = NULL;
              u_30 = t;
              p_30 :
              if(!(match_cons(u_30, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_2);
            return(t);
          }
          t = _2(t, z_1, WriteToBinaryFile_0);
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm a_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  ATerm o_9;
  o_9 = t;
  t = dtime_0(t);
  t = o_9;
  {
    t = b_65(t);
    {
      ATerm p_9;
      p_9 = t;
      {
        ATerm b_31 = NULL;
        t = dtime_0(t);
        {
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
        }
      }
      t = p_9;
      {
        e_31 = t;
        z_30 :
        if(match_cons(e_31, sym__2))
          {
            f_31 = ATgetArgument(e_31, 0);
            g_31 = ATgetArgument(e_31, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_31)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_31))), not_null(g_31));
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
  ATerm a_32 = NULL;
  a_32 = t;
  t = SSL_ReadFromFile(not_null(a_32));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm f_32 = NULL,j_32 = NULL;
  ATerm q_9;
  q_9 = t;
  {
    ATerm g_32 = NULL;
    t = j_77(t);
    {
      g_32 = t;
      if(((f_32 != NULL) && (f_32 != g_32)))
        _fail(g_32);
      else
        f_32 = g_32;
    }
  }
  t = q_9;
  {
    ATerm k_32 = NULL;
    t = k_77(t);
    {
      k_32 = t;
      if(((j_32 != NULL) && (j_32 != k_32)))
        _fail(k_32);
      else
        j_32 = k_32;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_32), not_null(j_32));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_32 = NULL;
  ATerm r_9;
  r_9 = t;
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 (ATerm t)
        {
          ATerm r_32 = NULL,s_32 = NULL;
          r_32 = t;
          o_32 :
          if(match_cons(r_32, sym_Input_1))
            {
              s_32 = ATgetArgument(r_32, 0);
              if(((q_32 != NULL) && (q_32 != s_32)))
                _fail(s_32);
              else
                q_32 = s_32;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, b_2);
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        {
          ATerm t_32 = NULL;
          t = term_u_9;
          {
            t_32 = t;
            if(((q_32 != NULL) && (q_32 != t_32)))
              _fail(t_32);
            else
              q_32 = t_32;
          }
        }
      }
  }
  t = r_9;
  {
    ATerm c_2 (ATerm t)
    {
      t = not_null(q_32);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, c_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym_Version_0))
    {
      ATerm c_33 = NULL,e_33 = NULL;
      ATerm y_9;
      y_9 = t;
      {
        ATerm d_33 = NULL;
        t = SSLgetAnnotations(not_null(a_33));
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
      }
      t = y_9;
      {
        ATerm f_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_33));
        {
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
        }
        t = not_null(e_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm z_9 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = z_9;
        {
          ATerm g_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_10);
            }
          else
            {
              t = g_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_2);
  t = z_64(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  t = SSL_table_create(not_null(k_33));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  {
    ATerm i_10;
    i_10 = t;
    {
      t = term_j_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_10, term_k_10, not_null(o_33));
          t = table_put_0(t);
        }
      }
    }
    t = i_10;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_10, not_null(u_33), not_null(v_33));
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
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  e_34 = t;
  c_34 :
  if(match_string(e_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(e_34) == AT_LIST) && ((ATermList) e_34 != ATempty)))
        {
          f_34 = ATgetFirst((ATermList) e_34);
          g_34 = (ATerm) ATgetNext((ATermList) e_34);
          d_34 :
          if(((ATgetType(g_34) == AT_LIST) && ((ATermList) g_34 != ATempty)))
            {
              h_34 = ATgetFirst((ATermList) g_34);
              i_34 = (ATerm) ATgetNext((ATermList) g_34);
              {
                ATerm m_34 = NULL;
                ATerm m_10;
                m_10 = t;
                {
                  t = not_null(f_34);
                  t = j_0(t);
                }
                t = m_10;
                {
                  ATerm n_34 = NULL;
                  t = not_null(h_34);
                  {
                    t = k_0(t);
                    {
                      n_34 = t;
                      if(((m_34 != NULL) && (m_34 != n_34)))
                        _fail(n_34);
                      else
                        m_34 = n_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_34)), not_null(m_34));
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
  ATerm n_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_35 = NULL;
        f_35 = t;
        r_34 :
        if(!(match_string(f_35, "-S")))
          {
            if(!(match_string(f_35, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_z_10;
        t = set_config_0(t);
        t = term_a_11;
        return(t);
      }
      ATerm g_2 (ATerm t)
      {
        t = term_b_11;
        return(t);
      }
      t = Option_3(t, e_2, f_2, g_2);
      LocalPopChoice(r_10);
    }
  else
    {
      t = n_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 (ATerm t)
            {
              ATerm g_35 = NULL;
              g_35 = t;
              s_34 :
              if(!(match_string(g_35, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = term_f_11;
              t = set_config_0(t);
              t = term_g_11;
              return(t);
            }
            ATerm j_2 (ATerm t)
            {
              t = term_h_11;
              return(t);
            }
            t = Option_3(t, h_2, i_2, j_2);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm m_11 = t;
              int n_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_2 (ATerm t)
                  {
                    ATerm h_35 = NULL;
                    h_35 = t;
                    t_34 :
                    if(!(match_string(h_35, "-v")))
                      {
                        if(!(match_string(h_35, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_2 (ATerm t)
                  {
                    t = term_s_11;
                    t = set_config_0(t);
                    t = term_u_11;
                    return(t);
                  }
                  ATerm m_2 (ATerm t)
                  {
                    t = term_x_11;
                    return(t);
                  }
                  t = Option_3(t, k_2, l_2, m_2);
                  LocalPopChoice(n_11);
                }
              else
                {
                  t = m_11;
                  {
                    ATerm y_11 = t;
                    int z_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_2 (ATerm t)
                        {
                          ATerm i_35 = NULL;
                          i_35 = t;
                          u_34 :
                          if(!(match_string(i_35, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_2 (ATerm t)
                        {
                          ATerm l_35 = NULL;
                          ATerm a_12;
                          a_12 = t;
                          {
                            ATerm j_35 = NULL;
                            ATerm k_35 = NULL;
                            k_35 = t;
                            if(((j_35 != NULL) && (j_35 != k_35)))
                              _fail(k_35);
                            else
                              j_35 = k_35;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(j_35));
                              t = set_config_0(t);
                            }
                          }
                          t = a_12;
                          {
                            ATerm m_35 = NULL;
                            m_35 = t;
                            if(((l_35 != NULL) && (l_35 != m_35)))
                              _fail(m_35);
                            else
                              l_35 = m_35;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(l_35));
                          }
                          return(t);
                        }
                        ATerm p_2 (ATerm t)
                        {
                          t = term_c_12;
                          return(t);
                        }
                        t = ArgOption_3(t, n_2, o_2, p_2);
                        LocalPopChoice(z_11);
                      }
                    else
                      {
                        t = y_11;
                        {
                          ATerm g_12 = t;
                          int h_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_2 (ATerm t)
                              {
                                ATerm n_35 = NULL;
                                n_35 = t;
                                x_34 :
                                if(!(match_string(n_35, "-i")))
                                  {
                                    if(!(match_string(n_35, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_2 (ATerm t)
                              {
                                ATerm q_35 = NULL;
                                ATerm i_12;
                                i_12 = t;
                                {
                                  ATerm o_35 = NULL;
                                  ATerm p_35 = NULL;
                                  p_35 = t;
                                  if(((o_35 != NULL) && (o_35 != p_35)))
                                    _fail(p_35);
                                  else
                                    o_35 = p_35;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_12, not_null(o_35));
                                    t = set_config_0(t);
                                  }
                                }
                                t = i_12;
                                {
                                  ATerm r_35 = NULL;
                                  r_35 = t;
                                  if(((q_35 != NULL) && (q_35 != r_35)))
                                    _fail(r_35);
                                  else
                                    q_35 = r_35;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_35));
                                }
                                return(t);
                              }
                              ATerm s_2 (ATerm t)
                              {
                                t = term_n_12;
                                return(t);
                              }
                              t = ArgOption_3(t, q_2, r_2, s_2);
                              LocalPopChoice(h_12);
                            }
                          else
                            {
                              t = g_12;
                              {
                                ATerm o_12 = t;
                                int t_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_2 (ATerm t)
                                    {
                                      ATerm s_35 = NULL;
                                      s_35 = t;
                                      a_35 :
                                      if(!(match_string(s_35, "-o")))
                                        {
                                          if(!(match_string(s_35, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm u_2 (ATerm t)
                                    {
                                      ATerm v_35 = NULL;
                                      ATerm u_12;
                                      u_12 = t;
                                      {
                                        ATerm t_35 = NULL;
                                        ATerm u_35 = NULL;
                                        u_35 = t;
                                        if(((t_35 != NULL) && (t_35 != u_35)))
                                          _fail(u_35);
                                        else
                                          t_35 = u_35;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_v_12, not_null(t_35));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = u_12;
                                      {
                                        ATerm w_35 = NULL;
                                        w_35 = t;
                                        if(((v_35 != NULL) && (v_35 != w_35)))
                                          _fail(w_35);
                                        else
                                          v_35 = w_35;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_35));
                                      }
                                      return(t);
                                    }
                                    ATerm v_2 (ATerm t)
                                    {
                                      t = term_x_12;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, t_2, u_2, v_2);
                                    LocalPopChoice(t_12);
                                  }
                                else
                                  {
                                    t = o_12;
                                    {
                                      ATerm y_12 = t;
                                      int z_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_2 (ATerm t)
                                          {
                                            ATerm y_35 = NULL;
                                            y_35 = t;
                                            d_35 :
                                            if(!(match_string(y_35, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = term_f_13;
                                            t = set_config_0(t);
                                            t = term_k_13;
                                            return(t);
                                          }
                                          ATerm y_2 (ATerm t)
                                          {
                                            t = term_l_13;
                                            return(t);
                                          }
                                          t = Option_3(t, w_2, x_2, y_2);
                                          LocalPopChoice(z_12);
                                        }
                                      else
                                        {
                                          t = y_12;
                                          {
                                            ATerm z_2 (ATerm t)
                                            {
                                              ATerm z_35 = NULL;
                                              z_35 = t;
                                              e_35 :
                                              if(!(match_string(z_35, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm a_3 (ATerm t)
                                            {
                                              t = term_n_13;
                                              t = set_config_0(t);
                                              t = term_o_13;
                                              return(t);
                                            }
                                            ATerm b_3 (ATerm t)
                                            {
                                              t = term_p_13;
                                              return(t);
                                            }
                                            t = Option_3(t, z_2, a_3, b_3);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm k_36 = NULL;
  k_36 = t;
  t = SSL_table_destroy(not_null(k_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  t = SSL_exit(not_null(o_36));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_implode_string(not_null(u_36));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm x_36 (ATerm t)
  {
    ATerm s_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_36);
        LocalPopChoice(v_13);
      }
    else
      {
        t = s_13;
        {
          t = Nil_0(t);
          t = m_74(t);
        }
      }
    return(t);
  }
  t = x_36(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm a_37 = NULL,g_37 = NULL,n_37 = NULL;
        a_37 = t;
        z_36 :
        if(((ATgetType(a_37) == AT_LIST) && ((ATermList) a_37 != ATempty)))
          {
            g_37 = ATgetFirst((ATermList) a_37);
            n_37 = (ATerm) ATgetNext((ATermList) a_37);
            {
              t = not_null(g_37);
              {
                ATerm c_3 (ATerm t)
                {
                  t = not_null(n_37);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_3);
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
  ATerm t_37 = NULL;
  t_37 = t;
  t = SSL_explode_string(not_null(t_37));
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
ATerm long_description_1 (ATerm t, ATerm g_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm w_37 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = Cons_2(t, y_73, w_37);
      }
    return(t);
  }
  t = w_37(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  j_38 = t;
  g_38 :
  if(((ATgetType(j_38) == AT_LIST) && ((ATermList) j_38 != ATempty)))
    {
      h_38 = ATgetFirst((ATermList) j_38);
      i_38 = (ATerm) ATgetNext((ATermList) j_38);
      {
        ATerm m_38 = NULL;
        t = not_null(i_38);
        {
          ATerm k_14;
          k_14 = t;
          {
            ATerm n_38 = NULL,p_38 = NULL,r_38 = NULL;
            ATerm l_14;
            l_14 = t;
            {
              ATerm o_38 = NULL;
              t = i_0(t);
              {
                o_38 = t;
                if(((n_38 != NULL) && (n_38 != o_38)))
                  _fail(o_38);
                else
                  n_38 = o_38;
              }
            }
            t = l_14;
            {
              ATerm q_38 = NULL;
              t = not_null(h_38);
              {
                t = f_0(t);
                {
                  q_38 = t;
                  if(((p_38 != NULL) && (p_38 != q_38)))
                    _fail(q_38);
                  else
                    p_38 = q_38;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_38)), not_null(p_38));
                {
                  r_38 = t;
                  if(((m_38 != NULL) && (m_38 != r_38)))
                    _fail(r_38);
                  else
                    m_38 = r_38;
                }
              }
            }
          }
          t = k_14;
          {
            ATerm d_3 (ATerm t)
            {
              t = not_null(m_38);
              return(t);
            }
            t = reverse_acc_2(t, f_0, d_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_38 == ATempty))
        {
          {
            t = term_w_10;
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
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_49 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Program_1))
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
            t = k_49(t);
            {
              m_39 = t;
              {
                ATerm r_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_39)), not_null(k_39));
                {
                  r_39 = t;
                  if(((o_39 != NULL) && (o_39 != r_39)))
                    _fail(r_39);
                  else
                    o_39 = r_39;
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
ATerm system_usage_0 (ATerm t)
{
  ATerm g_40 = NULL;
  ATerm i_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      ATerm h_40 = NULL;
      h_40 = t;
      if(((g_40 != NULL) && (g_40 != h_40)))
        _fail(h_40);
      else
        g_40 = h_40;
      return(t);
    }
    t = Program_1(t, j_3);
    return(t);
  }
  t = option_defined_1(t, i_3);
  {
    ATerm k_3 (ATerm t)
    {
      ATerm i_40 = NULL;
      ATerm j_40 = NULL;
      t = term_w_10;
      {
        ATerm l_3 (ATerm t)
        {
          t = not_null(g_40);
          return(t);
        }
        t = short_description_1(t, l_3);
        {
          t = concat_strings_0(t);
          {
            j_40 = t;
            if(((i_40 != NULL) && (i_40 != j_40)))
              _fail(j_40);
            else
              i_40 = j_40;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATempty, not_null(i_40)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATempty, term_m_14));
      {
        t = printnl_0(t);
        {
          t = term_p_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_3 (ATerm t)
                {
                  ATerm k_40 = NULL;
                  k_40 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_40)), term_q_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_3);
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm m_40 = NULL;
                    ATerm n_40 = NULL;
                    t = term_w_10;
                    {
                      ATerm o_3 (ATerm t)
                      {
                        t = not_null(g_40);
                        return(t);
                      }
                      t = long_description_1(t, o_3);
                      {
                        t = concat_strings_0(t);
                        {
                          n_40 = t;
                          if(((m_40 != NULL) && (m_40 != n_40)))
                            _fail(n_40);
                          else
                            m_40 = n_40;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_40)), term_s_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_3);
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
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym__2))
    {
      v_40 = ATgetArgument(u_40, 0);
      w_40 = ATgetArgument(u_40, 1);
      {
        ATerm t_14;
        t_14 = t;
        t = SSL_printnl(not_null(v_40), not_null(w_40));
        t = t_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_49 (ATerm))
{
  ATerm h_41 = NULL,i_41 = NULL;
  h_41 = t;
  e_41 :
  if(match_cons(h_41, sym_Undefined_1))
    {
      i_41 = ATgetArgument(h_41, 0);
      {
        ATerm l_41 = NULL,n_41 = NULL;
        ATerm m_41 = NULL;
        t = SSLgetAnnotations(not_null(h_41));
        {
          m_41 = t;
          if(((l_41 != NULL) && (l_41 != m_41)))
            _fail(m_41);
          else
            l_41 = m_41;
        }
        {
          t = not_null(i_41);
          {
            ATerm p_41 = NULL;
            t = l_49(t);
            {
              n_41 = t;
              {
                ATerm q_41 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(n_41)), not_null(l_41));
                {
                  q_41 = t;
                  if(((p_41 != NULL) && (p_41 != q_41)))
                    _fail(q_41);
                  else
                    p_41 = q_41;
                }
                t = not_null(p_41);
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
ATerm fetch_1 (ATerm t, ATerm g_74 (ATerm))
{
  ATerm y_41 (ATerm t)
  {
    ATerm v_14 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_74, _id);
        LocalPopChoice(d_15);
      }
    else
      {
        t = v_14;
        t = Cons_2(t, _id, y_41);
      }
    return(t);
  }
  t = y_41(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_62 (ATerm))
{
  t = fetch_1(t, e_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym_Help_0))
    {
      ATerm j_42 = NULL,p_42 = NULL;
      ATerm e_15;
      e_15 = t;
      {
        ATerm o_42 = NULL;
        t = SSLgetAnnotations(not_null(h_42));
        {
          o_42 = t;
          if(((j_42 != NULL) && (j_42 != o_42)))
            _fail(o_42);
          else
            j_42 = o_42;
        }
      }
      t = e_15;
      {
        ATerm q_42 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_42));
        {
          q_42 = t;
          if(((p_42 != NULL) && (p_42 != q_42)))
            _fail(q_42);
          else
            p_42 = q_42;
        }
        t = not_null(p_42);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm f_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_78(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = f_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  x_42 :
  if(match_cons(y_42, sym__2))
    {
      z_42 = ATgetArgument(y_42, 0);
      a_43 = ATgetArgument(y_42, 1);
      t = SSL_table_get(not_null(z_42), not_null(a_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  h_43 = t;
  g_43 :
  if(match_cons(h_43, sym__3))
    {
      i_43 = ATgetArgument(h_43, 0);
      j_43 = ATgetArgument(h_43, 1);
      k_43 = ATgetArgument(h_43, 2);
      {
        ATerm p_15;
        p_15 = t;
        {
          ATerm o_43 = NULL;
          ATerm p_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_43), not_null(j_43));
          {
            ATerm v_15 = t;
            int w_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_15);
              }
            else
              {
                t = v_15;
                t = (ATerm) ATempty;
              }
            {
              p_43 = t;
              if(((o_43 != NULL) && (o_43 != p_43)))
                _fail(p_43);
              else
                o_43 = p_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_43), not_null(j_43), (ATerm) ATinsert(CheckATermList(not_null(o_43)), not_null(k_43)));
            t = table_put_0(t);
          }
        }
        t = p_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm t_43 = NULL;
  ATerm u_43 = NULL;
  t = term_w_10;
  {
    t = k_61(t);
    {
      u_43 = t;
      if(((t_43 != NULL) && (t_43 != u_43)))
        _fail(u_43);
      else
        t_43 = u_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_14, term_o_14, not_null(t_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_string(a_44, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(a_44) == AT_LIST) && ((ATermList) a_44 != ATempty)))
        {
          b_44 = ATgetFirst((ATermList) a_44);
          c_44 = (ATerm) ATgetNext((ATermList) a_44);
          {
            ATerm f_44 = NULL;
            ATerm x_15;
            x_15 = t;
            {
              t = not_null(b_44);
              t = a_0(t);
            }
            t = x_15;
            {
              ATerm g_44 = NULL;
              t = term_w_10;
              {
                t = b_0(t);
                {
                  g_44 = t;
                  if(((f_44 != NULL) && (f_44 != g_44)))
                    _fail(g_44);
                  else
                    f_44 = g_44;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_44)), not_null(f_44));
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
  ATerm p_3 (ATerm t)
  {
    ATerm l_44 = NULL;
    l_44 = t;
    k_44 :
    if(!(match_string(l_44, "--help")))
      {
        if(!(match_string(l_44, "-h")))
          {
            if(!(match_string(l_44, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_y_15;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_z_15;
    return(t);
  }
  t = Option_3(t, p_3, q_3, s_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  n_44 :
  if(((ATgetType(o_44) == AT_LIST) && ((ATermList) o_44 != ATempty)))
    {
      p_44 = ATgetFirst((ATermList) o_44);
      q_44 = (ATerm) ATgetNext((ATermList) o_44);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_44)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_44)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_58 (ATerm), ATerm u_58 (ATerm))
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  a_45 = t;
  z_44 :
  if(((ATgetType(a_45) == AT_LIST) && ((ATermList) a_45 != ATempty)))
    {
      b_45 = ATgetFirst((ATermList) a_45);
      c_45 = (ATerm) ATgetNext((ATermList) a_45);
      {
        ATerm g_45 = NULL,i_45 = NULL;
        ATerm h_45 = NULL;
        t = SSLgetAnnotations(not_null(a_45));
        {
          h_45 = t;
          if(((g_45 != NULL) && (g_45 != h_45)))
            _fail(h_45);
          else
            g_45 = h_45;
        }
        {
          t = not_null(b_45);
          {
            ATerm k_45 = NULL;
            t = t_58(t);
            {
              i_45 = t;
              {
                t = not_null(c_45);
                {
                  ATerm m_45 = NULL;
                  t = u_58(t);
                  {
                    k_45 = t;
                    {
                      ATerm n_45 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_45)), not_null(i_45)), not_null(g_45));
                      {
                        n_45 = t;
                        if(((m_45 != NULL) && (m_45 != n_45)))
                          _fail(n_45);
                        else
                          m_45 = n_45;
                      }
                      t = not_null(m_45);
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
  ATerm x_45 = NULL;
  x_45 = t;
  w_45 :
  if(((ATermList) x_45 == ATempty))
    {
      {
        ATerm z_45 = NULL,b_46 = NULL;
        ATerm a_16;
        a_16 = t;
        {
          ATerm a_46 = NULL;
          t = SSLgetAnnotations(not_null(x_45));
          {
            a_46 = t;
            if(((z_45 != NULL) && (z_45 != a_46)))
              _fail(a_46);
            else
              z_45 = a_46;
          }
        }
        t = a_16;
        {
          ATerm c_46 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_45));
          {
            c_46 = t;
            if(((b_46 != NULL) && (b_46 != c_46)))
              _fail(c_46);
            else
              b_46 = c_46;
          }
          t = not_null(b_46);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm b_16;
  b_16 = t;
  {
    ATerm t_3 (ATerm t)
    {
      t = term_j_16;
      t = i_61(t);
      return(t);
    }
    t = try_1(t, t_3);
  }
  t = b_16;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm h_46 = NULL;
      h_46 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_46));
      return(t);
    }
    ATerm v_3 (ATerm t)
    {
      ATerm l_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(t_16);
            }
          else
            {
              t = o_16;
              {
                t = i_61(t);
                t = Cons_2(t, _id, v_3);
              }
            }
          LocalPopChoice(n_16);
        }
      else
        {
          t = l_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_3, v_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm r_46 = NULL,s_46 = NULL,q_47 = NULL,r_47 = NULL;
    r_46 = t;
    n_46 :
    if(match_cons(r_46, sym__3))
      {
        s_46 = ATgetArgument(r_46, 0);
        q_47 = ATgetArgument(r_46, 1);
        r_47 = ATgetArgument(r_46, 2);
        {
          if(((o_46 != NULL) && (o_46 != s_46)))
            _fail(s_46);
          else
            o_46 = s_46;
          {
            if(((p_46 != NULL) && (p_46 != q_47)))
              _fail(q_47);
            else
              p_46 = q_47;
            {
              if(((q_46 != NULL) && (q_46 != r_47)))
                _fail(r_47);
              else
                q_46 = r_47;
              t = SSL_table_put(not_null(o_46), not_null(p_46), not_null(q_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm w_47 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    t = term_x_16;
    t = table_put_0(t);
  }
  t = w_16;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm y_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_61(t);
          LocalPopChoice(a_17);
        }
      else
        {
          t = y_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_3);
    {
      ATerm x_3 (ATerm t)
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm y_3 (ATerm t)
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm x_47 = NULL;
                  x_47 = t;
                  if(((w_47 != NULL) && (w_47 != x_47)))
                    _fail(x_47);
                  else
                    w_47 = x_47;
                  return(t);
                }
                t = Undefined_1(t, b_4);
                return(t);
              }
              t = option_defined_1(t, y_3);
              {
                ATerm h_17;
                h_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_47)), term_i_17));
                  t = printnl_0(t);
                }
                t = h_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_3);
      {
        ATerm k_17;
        k_17 = t;
        {
          t = term_n_14;
          t = table_destroy_0(t);
        }
        t = k_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm l_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_64(t);
        LocalPopChoice(p_17);
      }
    else
      {
        t = l_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_4);
  {
    t = store_options_0(t);
    {
      ATerm q_17 = t;
      int r_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, q_64);
          LocalPopChoice(r_17);
        }
      else
        {
          t = q_17;
          {
            ATerm a_18 = t;
            int b_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, o_64);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(b_18);
              }
            else
              {
                t = a_18;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_64 (ATerm), ATerm k_64 (ATerm))
{
  t = iowrap_3(t, j_64, k_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_64 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    t = _2(t, _id, g_64);
    return(t);
  }
  t = iowrap_2(t, l_4, _fail);
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
