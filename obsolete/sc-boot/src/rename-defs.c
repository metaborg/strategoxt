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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
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
ATerm term_c_15;
ATerm term_p_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_a_12;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_v_9;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_w_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_i_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_a_6;
void init_constant_terms (void)
{
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, (ATerm) ATempty);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_65 (ATerm));
ATerm assert_1 (ATerm, ATerm z_46 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm b_47 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm m_0 (ATerm));
ATerm escape_1 (ATerm, ATerm r_52 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm w_56 (ATerm), ATerm x_56 (ATerm), ATerm y_56 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm e_44 (ATerm));
ATerm Cons_2 (ATerm, ATerm n_46 (ATerm), ATerm o_46 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_44 (ATerm));
ATerm _2 (ATerm, ATerm t_35 (ATerm), ATerm u_35 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_63 (ATerm), ATerm u_63 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_60 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_48 (ATerm));
ATerm map_1 (ATerm, ATerm l_60 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_48 (ATerm));
ATerm Program_1 (ATerm, ATerm i_41 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_41 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_60 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_49 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_64 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_48 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_48 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_49 (ATerm), ATerm l_49 (ATerm), ATerm m_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_49 (ATerm), ATerm g_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_49 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  b_1 :
  if(((ATermList) c_1 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
  i_1 = t;
  h_1 :
  if(match_cons(i_1, sym__2))
    {
      j_1 = ATgetArgument(i_1, 0);
      k_1 = ATgetArgument(i_1, 1);
      {
        ATerm n_1 = NULL;
        ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(k_1), not_null(j_1));
        {
          ATerm a_0 (ATerm t)
          {
            t = term_a_6;
            return(t);
          }
          t = rewrite_1(t, a_0);
          {
            o_1 = t;
            f_1 :
            if(match_cons(o_1, sym_Defined_2))
              {
                p_1 = ATgetArgument(o_1, 0);
                q_1 = ATgetArgument(o_1, 1);
                g_1 :
                if(match_string(p_1, "b_0"))
                  {
                    if(((n_1 != NULL) && (n_1 != q_1)))
                      _fail(q_1);
                    else
                      n_1 = q_1;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = not_null(n_1);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
  z_1 = t;
  x_1 :
  if(match_cons(z_1, sym_Call_2))
    {
      a_2 = ATgetArgument(z_1, 0);
      c_2 = ATgetArgument(z_1, 1);
      y_1 :
      if(match_cons(a_2, sym_SVar_1))
        {
          b_2 = ATgetArgument(a_2, 0);
          {
            ATerm f_2 = NULL,g_2 = NULL;
            ATerm h_2 = NULL;
            t = not_null(c_2);
            {
              t = length_0(t);
              {
                h_2 = t;
                {
                  if(((f_2 != NULL) && (f_2 != h_2)))
                    _fail(h_2);
                  else
                    f_2 = h_2;
                  {
                    ATerm b_6 = t;
                    int c_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_2 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_2), not_null(f_2));
                        {
                          t = RenameVar_0(t);
                          {
                            i_2 = t;
                            if(((g_2 != NULL) && (g_2 != i_2)))
                              _fail(i_2);
                            else
                              g_2 = i_2;
                          }
                        }
                        LocalPopChoice(c_6);
                      }
                    else
                      {
                        t = b_6;
                        {
                          ATerm j_2 = NULL;
                          t = not_null(b_2);
                          {
                            t = HoArg_0(t);
                            {
                              j_2 = t;
                              if(((g_2 != NULL) && (g_2 != j_2)))
                                _fail(j_2);
                              else
                                g_2 = j_2;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(g_2)), not_null(c_2));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_65 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    t = a_65(t);
    t = _all(t, o_2);
    return(t);
  }
  t = o_2(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_46 (ATerm))
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      v_2 = ATgetArgument(u_2, 0);
      w_2 = ATgetArgument(u_2, 1);
      {
        ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
        ATerm d_6;
        d_6 = t;
        {
          ATerm c_3 = NULL;
          ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL;
          t = z_46(t);
          {
            c_3 = t;
            {
              if(((z_2 != NULL) && (z_2 != c_3)))
                _fail(c_3);
              else
                z_2 = c_3;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_2), not_null(v_2), not_null(w_2));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_6 = t;
                    int k_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), term_l_6);
                        t = table_get_0(t);
                        LocalPopChoice(k_6);
                      }
                    else
                      {
                        t = f_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_3 = t;
                      s_2 :
                      if(((ATgetType(d_3) == AT_LIST) && ((ATermList) d_3 != ATempty)))
                        {
                          e_3 = ATgetFirst((ATermList) d_3);
                          f_3 = (ATerm) ATgetNext((ATermList) d_3);
                          {
                            if(((a_3 != NULL) && (a_3 != e_3)))
                              _fail(e_3);
                            else
                              a_3 = e_3;
                            {
                              if(((b_3 != NULL) && (b_3 != f_3)))
                                _fail(f_3);
                              else
                                b_3 = f_3;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_2), term_l_6, (ATerm) ATinsert(CheckATermList(not_null(b_3)), (ATerm) ATinsert(CheckATermList(not_null(a_3)), not_null(v_2))));
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
        t = d_6;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  k_3 :
  if(((ATgetType(l_3) == AT_LIST) && ((ATermList) l_3 != ATempty)))
    {
      m_3 = ATgetFirst((ATermList) l_3);
      n_3 = (ATerm) ATgetNext((ATermList) l_3);
      t = not_null(m_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t_3 = t;
  s_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_3), not_null(v_3));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm b_47 (ATerm))
{
  ATerm b_4 = NULL;
  ATerm d_4 = NULL;
  b_4 = t;
  {
    ATerm e_4 = NULL;
    t = term_m_6;
    {
      t = b_47(t);
      {
        e_4 = t;
        if(((d_4 != NULL) && (d_4 != e_4)))
          _fail(e_4);
        else
          d_4 = e_4;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(b_4));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm o_4 = NULL;
  o_4 = t;
  {
    ATerm n_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_4));
        {
          ATerm d_0 (ATerm t)
          {
            t = term_t_6;
            return(t);
          }
          t = rewrite_1(t, d_0);
          {
            q_4 = t;
            k_4 :
            if(match_cons(q_4, sym_Undefined_0))
              _fail(t);
            else
              _fail(t);
          }
        }
        t = term_m_6;
        LocalPopChoice(s_6);
      }
    else
      {
        t = n_6;
        {
          ATerm s_4 = NULL;
          ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_4));
          {
            ATerm n_0 (ATerm t)
            {
              t = term_t_6;
              return(t);
            }
            t = rewrite_1(t, n_0);
            {
              t_4 = t;
              m_4 :
              if(match_cons(t_4, sym_Defined_2))
                {
                  u_4 = ATgetArgument(t_4, 0);
                  v_4 = ATgetArgument(t_4, 1);
                  n_4 :
                  if(match_string(u_4, "e_0"))
                    {
                      if(((s_4 != NULL) && (s_4 != v_4)))
                        _fail(v_4);
                      else
                        s_4 = v_4;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
          t = not_null(s_4);
        }
      }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm b_5 = NULL;
  b_5 = t;
  t = SSL_int_to_string(not_null(b_5));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  k_5 :
  if(((ATgetType(m_5) == AT_LIST) && ((ATermList) m_5 != ATempty)))
    {
      n_5 = ATgetFirst((ATermList) m_5);
      o_5 = (ATerm) ATgetNext((ATermList) m_5);
      l_5 :
      if(match_int(n_5, 95))
        {
          ATerm q_5 = NULL;
          ATerm r_5 = NULL;
          t = not_null(o_5);
          {
            t = m_0(t);
            {
              r_5 = t;
              if(((q_5 != NULL) && (q_5 != r_5)))
                _fail(r_5);
              else
                q_5 = r_5;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_5)), term_u_6), term_u_6);
        }
      else
        {
          if(match_int(n_5, 45))
            {
              ATerm t_5 = NULL;
              ATerm u_5 = NULL;
              t = not_null(o_5);
              {
                t = m_0(t);
                {
                  u_5 = t;
                  if(((t_5 != NULL) && (t_5 != u_5)))
                    _fail(u_5);
                  else
                    t_5 = u_5;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_5)), term_u_6);
            }
          else
            {
              if(match_int(n_5, 39))
                {
                  ATerm w_5 = NULL;
                  ATerm x_5 = NULL;
                  t = not_null(o_5);
                  {
                    t = m_0(t);
                    {
                      x_5 = t;
                      if(((w_5 != NULL) && (w_5 != x_5)))
                        _fail(x_5);
                      else
                        w_5 = x_5;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_5)), term_u_6), term_v_6), term_u_6);
                }
              else
                _fail(t);
            }
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm escape_1 (ATerm t, ATerm r_52 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm e_6 (ATerm t)
    {
      ATerm w_6 = t;
      int x_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_52(t, e_6);
          LocalPopChoice(x_6);
        }
      else
        {
          t = w_6;
          {
            ATerm c_7 = t;
            int d_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, e_6);
                LocalPopChoice(d_7);
              }
            else
              {
                t = c_7;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = e_6(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm cify_0 (ATerm t)
{
  t = escape_1(t, Cify_1);
  return(t);
}
ATerm NameMod_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym_Mod_2))
    {
      i_6 = ATgetArgument(h_6, 0);
      j_6 = ATgetArgument(h_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_6)), term_i_7), not_null(i_6));
        t = concat_strings_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
  p_6 = t;
  o_6 :
  if(match_cons(p_6, sym__2))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_6), not_null(r_6));
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            t = SSL_addr(not_null(q_6), not_null(r_6));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm w_56 (ATerm), ATerm x_56 (ATerm), ATerm y_56 (ATerm))
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_56(t);
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
        ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
        z_6 = t;
        y_6 :
        if(((ATgetType(z_6) == AT_LIST) && ((ATermList) z_6 != ATempty)))
          {
            a_7 = ATgetFirst((ATermList) z_6);
            b_7 = (ATerm) ATgetNext((ATermList) z_6);
            {
              ATerm e_7 = NULL,g_7 = NULL;
              ATerm n_7;
              n_7 = t;
              {
                ATerm f_7 = NULL;
                t = not_null(a_7);
                {
                  t = y_56(t);
                  {
                    f_7 = t;
                    if(((e_7 != NULL) && (e_7 != f_7)))
                      _fail(f_7);
                    else
                      e_7 = f_7;
                  }
                }
              }
              t = n_7;
              {
                ATerm h_7 = NULL;
                t = not_null(b_7);
                {
                  t = foldr_3(t, w_56, x_56, y_56);
                  {
                    h_7 = t;
                    if(((g_7 != NULL) && (g_7 != h_7)))
                      _fail(h_7);
                    else
                      g_7 = h_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), not_null(g_7));
                  t = x_56(t);
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
ATerm length_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = term_o_7;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = term_p_7;
    return(t);
  }
  t = foldr_3(t, o_0, add_0, p_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym_SDef_3))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      u_7 = ATgetArgument(r_7, 2);
      {
        ATerm y_7 = NULL,z_7 = NULL;
        ATerm a_8 = NULL;
        t = not_null(t_7);
        {
          ATerm b_8 = NULL,d_8 = NULL,f_8 = NULL;
          t = length_0(t);
          {
            a_8 = t;
            {
              if(((y_7 != NULL) && (y_7 != a_8)))
                _fail(a_8);
              else
                y_7 = a_8;
              {
                ATerm v_7;
                v_7 = t;
                {
                  ATerm c_8 = NULL;
                  t = not_null(s_7);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        c_8 = t;
                        if(((b_8 != NULL) && (b_8 != c_8)))
                          _fail(c_8);
                        else
                          b_8 = c_8;
                      }
                    }
                  }
                }
                t = v_7;
                {
                  ATerm e_8 = NULL;
                  t = not_null(y_7);
                  {
                    t = int_to_string_0(t);
                    {
                      e_8 = t;
                      if(((d_8 != NULL) && (d_8 != e_8)))
                        _fail(e_8);
                      else
                        d_8 = e_8;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_8)), term_w_7), not_null(b_8));
                    {
                      t = concat_strings_0(t);
                      {
                        f_8 = t;
                        {
                          if(((z_7 != NULL) && (z_7 != f_8)))
                            _fail(f_8);
                          else
                            z_7 = f_8;
                          {
                            ATerm x_7;
                            x_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(y_7), not_null(s_7)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_8, not_null(z_7)));
                              {
                                ATerm q_0 (ATerm t)
                                {
                                  t = term_a_6;
                                  return(t);
                                }
                                t = assert_1(t, q_0);
                              }
                            }
                            t = x_7;
                            {
                              ATerm h_8 = t;
                              int i_8 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(s_7);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm j_8;
                                      j_8 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(s_7)), term_k_8);
                                        {
                                          ATerm r_0 (ATerm t)
                                          {
                                            t = term_t_6;
                                            return(t);
                                          }
                                          t = assert_1(t, r_0);
                                        }
                                      }
                                      t = j_8;
                                    }
                                  }
                                  LocalPopChoice(i_8);
                                }
                              else
                                {
                                  t = h_8;
                                  {
                                    ATerm l_8;
                                    l_8 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(s_7)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_8, not_null(z_7)));
                                      {
                                        ATerm s_0 (ATerm t)
                                        {
                                          t = term_t_6;
                                          return(t);
                                        }
                                        t = assert_1(t, s_0);
                                      }
                                    }
                                    t = l_8;
                                  }
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_7), not_null(t_7), not_null(u_7));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, u_0);
      return(t);
    }
    t = map_1(t, t_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_44 (ATerm))
{
  ATerm o_8 = NULL,p_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_Strategies_1))
    {
      p_8 = ATgetArgument(o_8, 0);
      {
        ATerm r_8 = NULL;
        t = not_null(p_8);
        {
          t = e_44(t);
          {
            r_8 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_46 (ATerm), ATerm o_46 (ATerm))
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  y_8 :
  if(((ATgetType(z_8) == AT_LIST) && ((ATermList) z_8 != ATempty)))
    {
      a_9 = ATgetFirst((ATermList) z_8);
      b_9 = (ATerm) ATgetNext((ATermList) z_8);
      {
        ATerm e_9 = NULL;
        t = not_null(a_9);
        {
          ATerm g_9 = NULL;
          t = n_46(t);
          {
            e_9 = t;
            {
              t = not_null(b_9);
              {
                t = o_46(t);
                {
                  g_9 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_9)), not_null(e_9));
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
ATerm Specification_1 (ATerm t, ATerm g_44 (ATerm))
{
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Specification_1))
    {
      p_9 = ATgetArgument(o_9, 0);
      {
        ATerm r_9 = NULL;
        t = not_null(p_9);
        {
          t = g_44(t);
          {
            r_9 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(r_9));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm t_35 (ATerm), ATerm u_35 (ATerm))
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym__2))
    {
      a_10 = ATgetArgument(z_9, 0);
      b_10 = ATgetArgument(z_9, 1);
      {
        ATerm e_10 = NULL;
        t = not_null(a_10);
        {
          ATerm g_10 = NULL;
          t = t_35(t);
          {
            e_10 = t;
            {
              t = not_null(b_10);
              {
                t = u_35(t);
                {
                  g_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), not_null(g_10));
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
  ATerm n_10 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm o_10 = NULL,p_10 = NULL;
      o_10 = t;
      m_10 :
      if(match_cons(o_10, sym_Program_1))
        {
          p_10 = ATgetArgument(o_10, 0);
          if(((n_10 != NULL) && (n_10 != p_10)))
            _fail(p_10);
          else
            n_10 = p_10;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, v_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_8), not_null(n_10)), term_t_8));
      {
        t = printnl_0(t);
        {
          t = term_p_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_8;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATempty, term_v_8));
  {
    t = printnl_0(t);
    {
      t = term_p_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm x_0 (ATerm t)
    {
      ATerm w_8 = t;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            ATerm y_10 = NULL;
            y_10 = t;
            r_10 :
            if(!(match_cons(y_10, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_0);
          PopChoice();
          _fail(t);
        }
      else
        t = w_8;
      return(t);
    }
    t = _2(t, x_0, _id);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm a_1 (ATerm t)
        {
          ATerm z_10 = NULL,a_11 = NULL;
          z_10 = t;
          t_10 :
          if(match_cons(z_10, sym_Runtime_1))
            {
              a_11 = ATgetArgument(z_10, 0);
              if(((x_10 != NULL) && (x_10 != a_11)))
                _fail(a_11);
              else
                x_10 = a_11;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_1);
        return(t);
      }
      t = _2(t, z_0, _id);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            ATerm b_11 = NULL,c_11 = NULL;
            b_11 = t;
            v_10 :
            if(match_cons(b_11, sym_Program_1))
              {
                c_11 = ATgetArgument(b_11, 0);
                if(((w_10 != NULL) && (w_10 != c_11)))
                  _fail(c_11);
                else
                  w_10 = c_11;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_1);
          return(t);
        }
        t = _2(t, d_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_9), not_null(x_10)), term_x_8), not_null(w_10)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, w_0);
  {
    t = term_o_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      t = SSL_WriteToTextFile(not_null(i_11), not_null(j_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
  v_11 = t;
  t_11 :
  if(match_cons(v_11, sym__2))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      t = SSL_WriteToBinaryFile(not_null(w_11), not_null(x_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_12 = NULL;
  ATerm d_9;
  d_9 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm f_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm g_12 = NULL,h_12 = NULL;
            g_12 = t;
            c_12 :
            if(match_cons(g_12, sym_Output_1))
              {
                h_12 = ATgetArgument(g_12, 0);
                if(((f_12 != NULL) && (f_12 != h_12)))
                  _fail(h_12);
                else
                  f_12 = h_12;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_1);
          LocalPopChoice(h_9);
        }
      else
        {
          t = f_9;
          {
            ATerm i_12 = NULL;
            t = term_i_9;
            {
              i_12 = t;
              if(((f_12 != NULL) && (f_12 != i_12)))
                _fail(i_12);
              else
                f_12 = i_12;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_1, _id);
  }
  t = d_9;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        t = not_null(f_12);
        return(t);
      }
      t = split_2(t, s_1, _id);
      return(t);
    }
    t = _2(t, _id, r_1);
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              ATerm j_12 = NULL;
              j_12 = t;
              e_12 :
              if(!(match_cons(j_12, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, u_1);
            return(t);
          }
          t = _2(t, t_1, WriteToBinaryFile_0);
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_49 (ATerm))
{
  ATerm p_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  ATerm l_9;
  l_9 = t;
  t = dtime_0(t);
  t = l_9;
  {
    t = w_49(t);
    {
      ATerm m_9;
      m_9 = t;
      {
        ATerm q_12 = NULL;
        t = dtime_0(t);
        {
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
        }
      }
      t = m_9;
      {
        r_12 = t;
        o_12 :
        if(match_cons(r_12, sym__2))
          {
            s_12 = ATgetArgument(r_12, 0);
            t_12 = ATgetArgument(r_12, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_12)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_12))), not_null(t_12));
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
  ATerm z_12 = NULL;
  z_12 = t;
  t = SSL_ReadFromFile(not_null(z_12));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_63 (ATerm), ATerm u_63 (ATerm))
{
  ATerm l_13 = NULL,n_13 = NULL;
  ATerm q_9;
  q_9 = t;
  {
    ATerm m_13 = NULL;
    t = t_63(t);
    {
      m_13 = t;
      if(((l_13 != NULL) && (l_13 != m_13)))
        _fail(m_13);
      else
        l_13 = m_13;
    }
  }
  t = q_9;
  {
    ATerm o_13 = NULL;
    t = u_63(t);
    {
      o_13 = t;
      if(((n_13 != NULL) && (n_13 != o_13)))
        _fail(o_13);
      else
        n_13 = o_13;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_13), not_null(n_13));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm x_13 = NULL;
  ATerm s_9;
  s_9 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 (ATerm t)
        {
          ATerm y_13 = NULL,b_14 = NULL;
          y_13 = t;
          v_13 :
          if(match_cons(y_13, sym_Input_1))
            {
              b_14 = ATgetArgument(y_13, 0);
              if(((x_13 != NULL) && (x_13 != b_14)))
                _fail(b_14);
              else
                x_13 = b_14;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, v_1);
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        {
          ATerm c_14 = NULL;
          t = term_v_9;
          {
            c_14 = t;
            if(((x_13 != NULL) && (x_13 != c_14)))
              _fail(c_14);
            else
              x_13 = c_14;
          }
        }
      }
  }
  t = s_9;
  {
    ATerm w_1 (ATerm t)
    {
      t = not_null(x_13);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  f_14 :
  if(!(match_cons(g_14, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_49 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, d_2);
  t = v_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  t = SSL_table_create(not_null(i_14));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  {
    ATerm f_10;
    f_10 = t;
    {
      t = term_h_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_10, term_i_10, not_null(n_14));
          t = table_put_0(t);
        }
      }
    }
    t = f_10;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  v_14 = t;
  t_14 :
  if(match_string(v_14, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(v_14) == AT_LIST) && ((ATermList) v_14 != ATempty)))
        {
          w_14 = ATgetFirst((ATermList) v_14);
          x_14 = (ATerm) ATgetNext((ATermList) v_14);
          u_14 :
          if(((ATgetType(x_14) == AT_LIST) && ((ATermList) x_14 != ATempty)))
            {
              y_14 = ATgetFirst((ATermList) x_14);
              z_14 = (ATerm) ATgetNext((ATermList) x_14);
              {
                ATerm d_15 = NULL;
                ATerm j_10;
                j_10 = t;
                {
                  t = not_null(w_14);
                  t = j_0(t);
                }
                t = j_10;
                {
                  ATerm n_15 = NULL;
                  t = not_null(y_14);
                  {
                    t = k_0(t);
                    {
                      n_15 = t;
                      if(((d_15 != NULL) && (d_15 != n_15)))
                        _fail(n_15);
                      else
                        d_15 = n_15;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_14)), not_null(d_15));
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
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm n_16 = NULL;
        n_16 = t;
        u_15 :
        if(!(match_string(n_16, "-S")))
          {
            if(!(match_string(n_16, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_q_10;
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_s_10;
        return(t);
      }
      t = Option_3(t, e_2, k_2, l_2);
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm u_10 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_2 (ATerm t)
            {
              ATerm o_16 = NULL;
              o_16 = t;
              v_15 :
              if(!(match_string(o_16, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              t = term_e_11;
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              t = term_f_11;
              return(t);
            }
            t = Option_3(t, m_2, n_2, p_2);
            LocalPopChoice(d_11);
          }
        else
          {
            t = u_10;
            {
              ATerm k_11 = t;
              int l_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_2 (ATerm t)
                  {
                    ATerm p_16 = NULL;
                    p_16 = t;
                    e_16 :
                    if(!(match_string(p_16, "-v")))
                      {
                        if(!(match_string(p_16, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm r_2 (ATerm t)
                  {
                    t = term_m_11;
                    return(t);
                  }
                  ATerm x_2 (ATerm t)
                  {
                    t = term_n_11;
                    return(t);
                  }
                  t = Option_3(t, q_2, r_2, x_2);
                  LocalPopChoice(l_11);
                }
              else
                {
                  t = k_11;
                  {
                    ATerm o_11 = t;
                    int p_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_2 (ATerm t)
                        {
                          ATerm q_16 = NULL;
                          q_16 = t;
                          f_16 :
                          if(!(match_string(q_16, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm g_3 (ATerm t)
                        {
                          ATerm r_16 = NULL;
                          ATerm s_16 = NULL;
                          s_16 = t;
                          if(((r_16 != NULL) && (r_16 != s_16)))
                            _fail(s_16);
                          else
                            r_16 = s_16;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(r_16));
                          return(t);
                        }
                        ATerm h_3 (ATerm t)
                        {
                          t = term_q_11;
                          return(t);
                        }
                        t = ArgOption_3(t, y_2, g_3, h_3);
                        LocalPopChoice(p_11);
                      }
                    else
                      {
                        t = o_11;
                        {
                          ATerm r_11 = t;
                          int s_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_3 (ATerm t)
                              {
                                ATerm v_16 = NULL;
                                v_16 = t;
                                h_16 :
                                if(!(match_string(v_16, "-i")))
                                  {
                                    if(!(match_string(v_16, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm j_3 (ATerm t)
                              {
                                ATerm w_16 = NULL;
                                ATerm x_16 = NULL;
                                x_16 = t;
                                if(((w_16 != NULL) && (w_16 != x_16)))
                                  _fail(x_16);
                                else
                                  w_16 = x_16;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_16));
                                return(t);
                              }
                              ATerm o_3 (ATerm t)
                              {
                                t = term_u_11;
                                return(t);
                              }
                              t = ArgOption_3(t, i_3, j_3, o_3);
                              LocalPopChoice(s_11);
                            }
                          else
                            {
                              t = r_11;
                              {
                                ATerm y_11 = t;
                                int z_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_3 (ATerm t)
                                    {
                                      ATerm y_16 = NULL;
                                      y_16 = t;
                                      j_16 :
                                      if(!(match_string(y_16, "-o")))
                                        {
                                          if(!(match_string(y_16, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_3 (ATerm t)
                                    {
                                      ATerm e_17 = NULL;
                                      ATerm f_17 = NULL;
                                      f_17 = t;
                                      if(((e_17 != NULL) && (e_17 != f_17)))
                                        _fail(f_17);
                                      else
                                        e_17 = f_17;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_17));
                                      return(t);
                                    }
                                    ATerm r_3 (ATerm t)
                                    {
                                      t = term_a_12;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_3, q_3, r_3);
                                    LocalPopChoice(z_11);
                                  }
                                else
                                  {
                                    t = y_11;
                                    {
                                      ATerm b_12 = t;
                                      int d_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_3 (ATerm t)
                                          {
                                            ATerm g_17 = NULL;
                                            g_17 = t;
                                            l_16 :
                                            if(!(match_string(g_17, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm x_3 (ATerm t)
                                          {
                                            t = term_k_12;
                                            return(t);
                                          }
                                          ATerm y_3 (ATerm t)
                                          {
                                            t = term_l_12;
                                            return(t);
                                          }
                                          t = Option_3(t, w_3, x_3, y_3);
                                          LocalPopChoice(d_12);
                                        }
                                      else
                                        {
                                          t = b_12;
                                          {
                                            ATerm z_3 (ATerm t)
                                            {
                                              ATerm h_17 = NULL;
                                              h_17 = t;
                                              m_16 :
                                              if(!(match_string(h_17, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm a_4 (ATerm t)
                                            {
                                              t = term_m_12;
                                              return(t);
                                            }
                                            ATerm c_4 (ATerm t)
                                            {
                                              t = term_n_12;
                                              return(t);
                                            }
                                            t = Option_3(t, z_3, a_4, c_4);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_17 = NULL;
  m_17 = t;
  t = SSL_table_destroy(not_null(m_17));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  t = SSL_exit(not_null(s_17));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  t = SSL_implode_string(not_null(w_17));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_60 (ATerm))
{
  ATerm z_17 (ATerm t)
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_17);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        {
          t = Nil_0(t);
          t = z_60(t);
        }
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
        c_18 = t;
        b_18 :
        if(((ATgetType(c_18) == AT_LIST) && ((ATermList) c_18 != ATempty)))
          {
            d_18 = ATgetFirst((ATermList) c_18);
            e_18 = (ATerm) ATgetNext((ATermList) c_18);
            {
              t = not_null(d_18);
              {
                ATerm f_4 (ATerm t)
                {
                  t = not_null(e_18);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_4);
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
  ATerm k_18 = NULL;
  k_18 = t;
  t = SSL_explode_string(not_null(k_18));
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
ATerm long_description_1 (ATerm t, ATerm c_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm n_18 (ATerm t)
  {
    ATerm y_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = y_12;
        t = Cons_2(t, l_60, n_18);
      }
    return(t);
  }
  t = n_18(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
  w_18 = t;
  t_18 :
  if(((ATgetType(w_18) == AT_LIST) && ((ATermList) w_18 != ATempty)))
    {
      u_18 = ATgetFirst((ATermList) w_18);
      v_18 = (ATerm) ATgetNext((ATermList) w_18);
      {
        ATerm a_19 = NULL;
        t = not_null(v_18);
        {
          ATerm b_13;
          b_13 = t;
          {
            ATerm b_19 = NULL,d_19 = NULL,f_19 = NULL;
            ATerm c_13;
            c_13 = t;
            {
              ATerm c_19 = NULL;
              t = i_0(t);
              {
                c_19 = t;
                if(((b_19 != NULL) && (b_19 != c_19)))
                  _fail(c_19);
                else
                  b_19 = c_19;
              }
            }
            t = c_13;
            {
              ATerm e_19 = NULL;
              t = not_null(u_18);
              {
                t = h_0(t);
                {
                  e_19 = t;
                  if(((d_19 != NULL) && (d_19 != e_19)))
                    _fail(e_19);
                  else
                    d_19 = e_19;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_19)), not_null(d_19));
                {
                  f_19 = t;
                  if(((a_19 != NULL) && (a_19 != f_19)))
                    _fail(f_19);
                  else
                    a_19 = f_19;
                }
              }
            }
          }
          t = b_13;
          {
            ATerm g_4 (ATerm t)
            {
              t = not_null(a_19);
              return(t);
            }
            t = reverse_acc_2(t, h_0, g_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_18 == ATempty))
        {
          {
            t = term_m_6;
            t = i_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_48 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_41 (ATerm))
{
  ATerm o_19 = NULL,p_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym_Program_1))
    {
      p_19 = ATgetArgument(o_19, 0);
      {
        ATerm r_19 = NULL;
        t = not_null(p_19);
        {
          t = i_41(t);
          {
            r_19 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_19));
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
  ATerm e_20 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm j_4 (ATerm t)
    {
      ATerm f_20 = NULL;
      f_20 = t;
      if(((e_20 != NULL) && (e_20 != f_20)))
        _fail(f_20);
      else
        e_20 = f_20;
      return(t);
    }
    t = Program_1(t, j_4);
    return(t);
  }
  t = option_defined_1(t, i_4);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm g_20 = NULL;
      ATerm h_20 = NULL;
      t = term_m_6;
      {
        ATerm p_4 (ATerm t)
        {
          t = not_null(e_20);
          return(t);
        }
        t = short_description_1(t, p_4);
        {
          t = concat_strings_0(t);
          {
            h_20 = t;
            if(((g_20 != NULL) && (g_20 != h_20)))
              _fail(h_20);
            else
              g_20 = h_20;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATempty, not_null(g_20)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATempty, term_d_13));
      {
        t = printnl_0(t);
        {
          t = term_g_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm r_4 (ATerm t)
                {
                  ATerm i_20 = NULL;
                  i_20 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_20)), term_h_13));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, r_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    ATerm k_20 = NULL;
                    ATerm l_20 = NULL;
                    t = term_m_6;
                    {
                      ATerm x_4 (ATerm t)
                      {
                        t = not_null(e_20);
                        return(t);
                      }
                      t = long_description_1(t, x_4);
                      {
                        t = concat_strings_0(t);
                        {
                          l_20 = t;
                          if(((k_20 != NULL) && (k_20 != l_20)))
                            _fail(l_20);
                          else
                            k_20 = l_20;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_20)), term_i_13));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, w_4);
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
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm j_13;
        j_13 = t;
        t = SSL_printnl(not_null(t_20), not_null(u_20));
        t = j_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_41 (ATerm))
{
  ATerm b_21 = NULL,c_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym_Undefined_1))
    {
      c_21 = ATgetArgument(b_21, 0);
      {
        ATerm e_21 = NULL;
        t = not_null(c_21);
        {
          t = j_41(t);
          {
            e_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_60 (ATerm))
{
  ATerm i_21 (ATerm t)
  {
    ATerm k_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_60, _id);
        LocalPopChoice(p_13);
      }
    else
      {
        t = k_13;
        t = Cons_2(t, _id, i_21);
      }
    return(t);
  }
  t = i_21(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_49 (ATerm))
{
  t = fetch_1(t, a_49);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  j_21 :
  if(!(match_cons(k_21, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_64(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym__2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      t = SSL_table_get(not_null(o_21), not_null(p_21));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  w_21 = t;
  v_21 :
  if(match_cons(w_21, sym__3))
    {
      x_21 = ATgetArgument(w_21, 0);
      y_21 = ATgetArgument(w_21, 1);
      z_21 = ATgetArgument(w_21, 2);
      {
        ATerm s_13;
        s_13 = t;
        {
          ATerm d_22 = NULL;
          ATerm e_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_21), not_null(y_21));
          {
            ATerm t_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_13);
              }
            else
              {
                t = t_13;
                t = (ATerm) ATempty;
              }
            {
              e_22 = t;
              if(((d_22 != NULL) && (d_22 != e_22)))
                _fail(e_22);
              else
                d_22 = e_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_21), not_null(y_21), (ATerm) ATinsert(CheckATermList(not_null(d_22)), not_null(z_21)));
            t = table_put_0(t);
          }
        }
        t = s_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_48 (ATerm))
{
  ATerm i_22 = NULL;
  ATerm j_22 = NULL;
  t = term_m_6;
  {
    t = g_48(t);
    {
      j_22 = t;
      if(((i_22 != NULL) && (i_22 != j_22)))
        _fail(j_22);
      else
        i_22 = j_22;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, not_null(i_22));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  o_22 :
  if(match_string(p_22, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(p_22) == AT_LIST) && ((ATermList) p_22 != ATempty)))
        {
          q_22 = ATgetFirst((ATermList) p_22);
          r_22 = (ATerm) ATgetNext((ATermList) p_22);
          {
            ATerm u_22 = NULL;
            ATerm w_13;
            w_13 = t;
            {
              t = not_null(q_22);
              t = c_0(t);
            }
            t = w_13;
            {
              ATerm v_22 = NULL;
              t = term_m_6;
              {
                t = f_0(t);
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_22)), not_null(u_22));
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
  ATerm y_4 (ATerm t)
  {
    ATerm a_23 = NULL;
    a_23 = t;
    z_22 :
    if(!(match_string(a_23, "--help")))
      {
        if(!(match_string(a_23, "-h")))
          {
            if(!(match_string(a_23, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_z_13;
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_a_14;
    return(t);
  }
  t = Option_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  c_23 :
  if(((ATgetType(d_23) == AT_LIST) && ((ATermList) d_23 != ATempty)))
    {
      e_23 = ATgetFirst((ATermList) d_23);
      f_23 = (ATerm) ATgetNext((ATermList) d_23);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_23)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_23)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_48 (ATerm))
{
  ATerm d_14;
  d_14 = t;
  {
    ATerm c_5 (ATerm t)
    {
      t = term_e_14;
      t = e_48(t);
      return(t);
    }
    t = try_1(t, c_5);
  }
  t = d_14;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm k_23 = NULL;
      k_23 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_23));
      return(t);
    }
    ATerm e_5 (ATerm t)
    {
      ATerm h_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              {
                t = e_48(t);
                t = Cons_2(t, _id, e_5);
              }
            }
          LocalPopChoice(j_14);
        }
      else
        {
          t = h_14;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_5, e_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  ATerm m_14;
  m_14 = t;
  {
    ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
    t_23 = t;
    p_23 :
    if(match_cons(t_23, sym__3))
      {
        u_23 = ATgetArgument(t_23, 0);
        v_23 = ATgetArgument(t_23, 1);
        w_23 = ATgetArgument(t_23, 2);
        {
          if(((q_23 != NULL) && (q_23 != u_23)))
            _fail(u_23);
          else
            q_23 = u_23;
          {
            if(((r_23 != NULL) && (r_23 != v_23)))
              _fail(v_23);
            else
              r_23 = v_23;
            {
              if(((s_23 != NULL) && (s_23 != w_23)))
                _fail(w_23);
              else
                s_23 = w_23;
              t = SSL_table_put(not_null(q_23), not_null(r_23), not_null(s_23));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = m_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_48 (ATerm))
{
  ATerm z_23 = NULL;
  ATerm o_14;
  o_14 = t;
  {
    t = term_p_14;
    t = table_put_0(t);
  }
  t = o_14;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_48(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_5);
    {
      ATerm g_5 (ATerm t)
      {
        ATerm s_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_o_7;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_15);
          }
        else
          {
            t = s_14;
            {
              ATerm h_5 (ATerm t)
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm a_24 = NULL;
                  a_24 = t;
                  if(((z_23 != NULL) && (z_23 != a_24)))
                    _fail(a_24);
                  else
                    z_23 = a_24;
                  return(t);
                }
                t = Undefined_1(t, i_5);
                return(t);
              }
              t = option_defined_1(t, h_5);
              {
                ATerm b_15;
                b_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_23)), term_c_15));
                  t = printnl_0(t);
                }
                t = b_15;
                {
                  t = system_usage_0(t);
                  {
                    t = term_p_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, g_5);
      {
        ATerm e_15;
        e_15 = t;
        {
          t = term_e_13;
          t = table_destroy_0(t);
        }
        t = e_15;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_49 (ATerm), ATerm l_49 (ATerm), ATerm m_49 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_49(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_5);
  {
    t = store_options_0(t);
    {
      ATerm h_15 = t;
      int i_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, m_49);
          LocalPopChoice(i_15);
        }
      else
        {
          t = h_15;
          {
            ATerm j_15 = t;
            int k_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, k_49);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(k_15);
              }
            else
              {
                t = j_15;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_49 (ATerm), ATerm g_49 (ATerm))
{
  t = iowrap_3(t, f_49, g_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_49 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    t = _2(t, _id, c_49);
    return(t);
  }
  t = iowrap_2(t, p_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm y_5 (ATerm t)
      {
        ATerm z_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, z_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, y_5);
      return(t);
    }
    t = Specification_1(t, v_5);
    return(t);
  }
  t = iowrap_1(t, s_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
