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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm term_y_30;
ATerm term_s_30;
ATerm term_l_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_v_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_o_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_19;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_g_17;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_h_10;
void init_constant_terms (void)
{
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("in: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("out: ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATinsert(ATempty, term_s_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATinsert(ATempty, term_u_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_v_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATinsert(ATempty, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATinsert(ATempty, term_g_29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_h_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_k_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__3, term_j_29, term_k_29, (ATerm) ATempty);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm v_65 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_79 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm x_83 (ATerm));
ATerm Rec_2 (ATerm, ATerm h_60 (ATerm), ATerm i_60 (ATerm));
ATerm Let_2 (ATerm, ATerm j_60 (ATerm), ATerm k_60 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm t_83 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm a_59 (ATerm));
ATerm tboundin_3 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm n_67 (ATerm), ATerm o_67 (ATerm));
ATerm for_3 (ATerm, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm));
ATerm HdMember_1 (ATerm, ATerm c_73 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm n_59 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm x_70 (ATerm), ATerm y_70 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm l_70 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm t_69 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm y_69 (ATerm));
ATerm rename_4 (ATerm, ATerm z_70 (ATerm, ATerm (ATerm)), ATerm a_71 (ATerm), ATerm b_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_71 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_65 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_65 (ATerm));
ATerm scope_2 (ATerm, ATerm r_65 (ATerm), ATerm s_65 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_65 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_61 (ATerm));
ATerm debug_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm crush_3 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
ATerm Choice_2 (ATerm, ATerm x_59 (ATerm), ATerm y_59 (ATerm));
ATerm Cong_2 (ATerm, ATerm z_60 (ATerm), ATerm a_61 (ATerm));
ATerm Match_1 (ATerm, ATerm h_61 (ATerm));
ATerm Seq_2 (ATerm, ATerm v_59 (ATerm), ATerm w_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm l_61 (ATerm), ATerm m_61 (ATerm));
ATerm Build_1 (ATerm, ATerm i_61 (ATerm));
ATerm SVar_1 (ATerm, ATerm g_60 (ATerm));
ATerm Call_2 (ATerm, ATerm v_60 (ATerm), ATerm w_60 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm n_81 (ATerm));
ATerm SDef_3 (ATerm, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm zip_1 (ATerm, ATerm g_77 (ATerm));
ATerm new_0 (ATerm);
ATerm TransformingCongruence_0 (ATerm);
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
ATerm repeat_2 (ATerm, ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_66 (ATerm));
ATerm downup_1 (ATerm, ATerm z_79 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm k_59 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_59 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm j_50 (ATerm), ATerm k_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm l_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_63 (ATerm));
ATerm map_1 (ATerm, ATerm j_75 (ATerm));
ATerm reverse_1 (ATerm, ATerm l_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_63 (ATerm));
ATerm Program_1 (ATerm, ATerm m_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_63 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_61 (ATerm), ATerm r_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm c_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_64 (ATerm), ATerm w_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_64 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
  b_3 = t;
  a_3 :
  if(match_cons(b_3, sym__2))
    {
      c_3 = ATgetArgument(b_3, 0);
      d_3 = ATgetArgument(b_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), not_null(d_3));
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
ATerm rewrite_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm j_3 = NULL;
  ATerm l_3 = NULL;
  j_3 = t;
  {
    ATerm m_3 = NULL;
    t = term_h_10;
    {
      t = v_65(t);
      {
        m_3 = t;
        if(((l_3 != NULL) && (l_3 != m_3)))
          _fail(m_3);
        else
          l_3 = m_3;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_3), not_null(j_3));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  v_3 = t;
  t_3 :
  if(match_cons(v_3, sym_Call_2))
    {
      w_3 = ATgetArgument(v_3, 0);
      y_3 = ATgetArgument(v_3, 1);
      u_3 :
      if(match_cons(w_3, sym_SVar_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          {
            ATerm b_4 = NULL;
            ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_3));
            {
              ATerm b_0 (ATerm t)
              {
                t = term_i_10;
                return(t);
              }
              t = rewrite_1(t, b_0);
              {
                c_4 = t;
                r_3 :
                if(match_cons(c_4, sym_Defined_2))
                  {
                    d_4 = ATgetArgument(c_4, 0);
                    e_4 = ATgetArgument(c_4, 1);
                    s_3 :
                    if(match_string(d_4, "j_0"))
                      {
                        if(((b_4 != NULL) && (b_4 != e_4)))
                          _fail(e_4);
                        else
                          b_4 = e_4;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_4)), not_null(y_3));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm SubsArgCall1_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  o_4 = t;
  l_4 :
  if(match_cons(o_4, sym_Call_2))
    {
      p_4 = ATgetArgument(o_4, 0);
      r_4 = ATgetArgument(o_4, 1);
      m_4 :
      if(match_cons(p_4, sym_SVar_1))
        {
          q_4 = ATgetArgument(p_4, 0);
          n_4 :
          if(((ATermList) r_4 == ATempty))
            {
              {
                ATerm t_4 = NULL;
                ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_4));
                {
                  ATerm c_0 (ATerm t)
                  {
                    t = term_n_10;
                    return(t);
                  }
                  t = rewrite_1(t, c_0);
                  {
                    u_4 = t;
                    j_4 :
                    if(match_cons(u_4, sym_Defined_2))
                      {
                        v_4 = ATgetArgument(u_4, 0);
                        w_4 = ATgetArgument(u_4, 1);
                        k_4 :
                        if(match_string(v_4, "i_0"))
                          {
                            if(((t_4 != NULL) && (t_4 != w_4)))
                              _fail(w_4);
                            else
                              t_4 = w_4;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
                {
                  t = not_null(t_4);
                  t = strename_0(t);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm v_79 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    t = v_79(t);
    t = _all(t, z_4);
    return(t);
  }
  t = z_4(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  p_5 = t;
  c_5 :
  if(match_cons(p_5, sym__2))
    {
      q_5 = ATgetArgument(p_5, 0);
      x_5 = ATgetArgument(p_5, 1);
      d_5 :
      if(match_cons(q_5, sym_VarDec_2))
        {
          r_5 = ATgetArgument(q_5, 0);
          s_5 = ATgetArgument(q_5, 1);
          e_5 :
          if(match_cons(s_5, sym_FunType_2))
            {
              t_5 = ATgetArgument(s_5, 0);
              w_5 = ATgetArgument(s_5, 1);
              f_5 :
              if(((ATgetType(t_5) == AT_LIST) && ((ATermList) t_5 != ATempty)))
                {
                  u_5 = ATgetFirst((ATermList) t_5);
                  v_5 = (ATerm) ATgetNext((ATermList) t_5);
                  g_5 :
                  if(((ATgetType(v_5) == AT_LIST) && ((ATermList) v_5 != ATempty)))
                    {
                      k_5 = ATgetFirst((ATermList) v_5);
                      l_5 = (ATerm) ATgetNext((ATermList) v_5);
                      h_5 :
                      if(match_cons(x_5, sym_Call_2))
                        {
                          m_5 = ATgetArgument(x_5, 0);
                          o_5 = ATgetArgument(x_5, 1);
                          i_5 :
                          if(match_cons(m_5, sym_SVar_1))
                            {
                              n_5 = ATgetArgument(m_5, 0);
                              j_5 :
                              if(((ATermList) o_5 == ATempty))
                                {
                                  {
                                    ATerm o_10;
                                    o_10 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_5)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_10, not_null(n_5)));
                                      {
                                        ATerm d_0 (ATerm t)
                                        {
                                          t = term_i_10;
                                          return(t);
                                        }
                                        t = assert_1(t, d_0);
                                      }
                                    }
                                    t = o_10;
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(((ATermList) v_5 == ATempty))
                        {
                          {
                            ATerm q_10;
                            q_10 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_5)), (ATerm) ATmakeAppl(sym_Defined_2, term_r_10, not_null(x_5)));
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  t = term_n_10;
                                  return(t);
                                }
                                t = assert_1(t, e_0);
                              }
                            }
                            t = q_10;
                          }
                        }
                      else
                        _fail(t);
                    }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm substitute_args_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = term_n_10;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      t = term_i_10;
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
      j_6 = t;
      f_6 :
      if(match_cons(j_6, sym__3))
        {
          k_6 = ATgetArgument(j_6, 0);
          l_6 = ATgetArgument(j_6, 1);
          m_6 = ATgetArgument(j_6, 2);
          {
            if(((g_6 != NULL) && (g_6 != k_6)))
              _fail(k_6);
            else
              g_6 = k_6;
            {
              if(((h_6 != NULL) && (h_6 != l_6)))
                _fail(l_6);
              else
                h_6 = l_6;
              {
                if(((i_6 != NULL) && (i_6 != m_6)))
                  _fail(m_6);
                else
                  i_6 = m_6;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), not_null(h_6));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(i_6);
                      {
                        ATerm t_0 (ATerm t)
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm s_10 = t;
                            int t_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(t_10);
                              }
                            else
                              {
                                t = s_10;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, u_0);
                          return(t);
                        }
                        t = topdown_1(t, t_0);
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
    t = scope_2(t, r_0, s_0);
    return(t);
  }
  t = scope_2(t, p_0, q_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
  q_6 = t;
  p_6 :
  if(((ATgetType(q_6) == AT_LIST) && ((ATermList) q_6 != ATempty)))
    {
      r_6 = ATgetFirst((ATermList) q_6);
      s_6 = (ATerm) ATgetNext((ATermList) q_6);
      t = not_null(r_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        t = split_2(t, _id, x_83);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
            c_7 = t;
            x_6 :
            if(match_cons(c_7, sym__2))
              {
                d_7 = ATgetArgument(c_7, 0);
                h_7 = ATgetArgument(c_7, 1);
                y_6 :
                if(match_cons(d_7, sym_SDef_3))
                  {
                    e_7 = ATgetArgument(d_7, 0);
                    f_7 = ATgetArgument(d_7, 1);
                    g_7 = ATgetArgument(d_7, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(h_7), not_null(f_7), not_null(g_7));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, w_0);
        }
        return(t);
      }
      t = Let_2(t, v_0, _id);
      LocalPopChoice(z_10);
    }
  else
    {
      t = x_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              t = split_2(t, _id, x_83);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
                  l_7 = t;
                  a_7 :
                  if(match_cons(l_7, sym__2))
                    {
                      m_7 = ATgetArgument(l_7, 0);
                      p_7 = ATgetArgument(l_7, 1);
                      b_7 :
                      if(match_cons(m_7, sym_VarDec_2))
                        {
                          n_7 = ATgetArgument(m_7, 0);
                          o_7 = ATgetArgument(m_7, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_7), not_null(o_7));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, y_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, x_0, _id);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm z_0 (ATerm t)
              {
                t = x_83(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, z_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm h_60 (ATerm), ATerm i_60 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_Rec_2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      {
        ATerm e_8 = NULL;
        t = not_null(a_8);
        {
          ATerm g_8 = NULL;
          t = h_60(t);
          {
            e_8 = t;
            {
              t = not_null(b_8);
              {
                t = i_60(t);
                {
                  g_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(e_8), not_null(g_8));
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
ATerm Let_2 (ATerm t, ATerm j_60 (ATerm), ATerm k_60 (ATerm))
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  o_8 :
  if(match_cons(p_8, sym_Let_2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      {
        ATerm u_8 = NULL;
        t = not_null(q_8);
        {
          ATerm w_8 = NULL;
          t = j_60(t);
          {
            u_8 = t;
            {
              t = not_null(r_8);
              {
                t = k_60(t);
                {
                  w_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_8), not_null(w_8));
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
ATerm sboundin_3 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm c_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, y_83, y_83);
      LocalPopChoice(g_11);
    }
  else
    {
      t = c_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, a_84, a_84, y_83);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = Rec_2(t, a_84, y_83);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Rec_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      t = (ATerm) ATinsert(ATempty, not_null(e_9));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym_SDef_3))
    {
      o_9 = ATgetArgument(n_9, 0);
      p_9 = ATgetArgument(n_9, 1);
      q_9 = ATgetArgument(n_9, 2);
      {
        t = not_null(p_9);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
            u_9 = t;
            l_9 :
            if(match_cons(u_9, sym_VarDec_2))
              {
                v_9 = ATgetArgument(u_9, 0);
                w_9 = ATgetArgument(u_9, 1);
                t = not_null(v_9);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, a_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_Let_2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        t = not_null(f_10);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
            j_10 = t;
            c_10 :
            if(match_cons(j_10, sym_SDef_3))
              {
                k_10 = ATgetArgument(j_10, 0);
                l_10 = ATgetArgument(j_10, 1);
                m_10 = ATgetArgument(j_10, 2);
                t = not_null(k_10);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, b_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm o_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(t_11);
            }
          else
            {
              t = o_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, c_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm t_83 (ATerm))
{
  t = Scope_2(t, t_83, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym_DynamicRules_1))
    {
      w_10 = ATgetArgument(v_10, 0);
      {
        ATerm y_10 = NULL;
        t = not_null(w_10);
        {
          t = a_59(t);
          {
            y_10 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(y_10));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm))
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, w_83, u_83);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = DynamicRules_1(t, u_83);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym_DynamicRules_1))
    {
      f_11 = ATgetArgument(e_11, 0);
      {
        t = not_null(f_11);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_Var_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      t = (ATerm) ATinsert(ATempty, not_null(l_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL;
  q_11 = t;
  p_11 :
  if(match_cons(q_11, sym__2))
    {
      r_11 = ATgetArgument(q_11, 0);
      s_11 = ATgetArgument(q_11, 1);
      {
        t = not_null(r_11);
        {
          ATerm w_11 (ATerm t)
          {
            ATerm x_11 = t;
            int b_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_11);
                LocalPopChoice(b_12);
              }
            else
              {
                t = x_11;
                {
                  ATerm c_12 = t;
                  int h_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_1 (ATerm t)
                      {
                        t = not_null(s_11);
                        return(t);
                      }
                      t = HdMember_1(t, d_1);
                      t = w_11(t);
                      LocalPopChoice(h_12);
                    }
                  else
                    {
                      t = c_12;
                      t = Cons_2(t, _id, w_11);
                    }
                }
              }
            return(t);
          }
          t = w_11(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm a_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  a_12 = t;
  y_11 :
  if(match_cons(a_12, sym__2))
    {
      d_12 = ATgetArgument(a_12, 0);
      e_12 = ATgetArgument(a_12, 1);
      z_11 :
      if(((ATgetType(e_12) == AT_LIST) && ((ATermList) e_12 != ATempty)))
        {
          f_12 = ATgetFirst((ATermList) e_12);
          g_12 = (ATerm) ATgetNext((ATermList) e_12);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_12)), not_null(f_12)), not_null(g_12));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  a_13 = t;
  y_12 :
  if(((ATgetType(a_13) == AT_LIST) && ((ATermList) a_13 != ATempty)))
    {
      b_13 = ATgetFirst((ATermList) a_13);
      e_13 = (ATerm) ATgetNext((ATermList) a_13);
      z_12 :
      if(match_cons(b_13, sym__2))
        {
          c_13 = ATgetArgument(b_13, 0);
          d_13 = ATgetArgument(b_13, 1);
          {
            ATerm i_13 = NULL,j_13 = NULL,p_13 = NULL,v_13 = NULL;
            ATerm i_12;
            i_12 = t;
            {
              ATerm k_13 = NULL;
              ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
              t = not_null(d_13);
              {
                k_13 = t;
                {
                  t = SSL_explode_term(not_null(k_13));
                  {
                    m_13 = t;
                    t_12 :
                    if(match_cons(m_13, sym__2))
                      {
                        n_13 = ATgetArgument(m_13, 0);
                        o_13 = ATgetArgument(m_13, 1);
                        {
                          if(((i_13 != NULL) && (i_13 != n_13)))
                            _fail(n_13);
                          else
                            i_13 = n_13;
                          if(((j_13 != NULL) && (j_13 != o_13)))
                            _fail(o_13);
                          else
                            j_13 = o_13;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = i_12;
            {
              ATerm j_12;
              j_12 = t;
              {
                ATerm q_13 = NULL;
                ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
                t = not_null(c_13);
                {
                  q_13 = t;
                  {
                    t = SSL_explode_term(not_null(q_13));
                    {
                      s_13 = t;
                      w_12 :
                      if(match_cons(s_13, sym__2))
                        {
                          t_13 = ATgetArgument(s_13, 0);
                          u_13 = ATgetArgument(s_13, 1);
                          {
                            if(((i_13 != NULL) && (i_13 != t_13)))
                              _fail(t_13);
                            else
                              i_13 = t_13;
                            if(((p_13 != NULL) && (p_13 != u_13)))
                              _fail(u_13);
                            else
                              p_13 = u_13;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = j_12;
              {
                ATerm w_13 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(j_13));
                {
                  t = zip_1(t, _id);
                  {
                    w_13 = t;
                    if(((v_13 != NULL) && (v_13 != w_13)))
                      _fail(w_13);
                    else
                      v_13 = w_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), not_null(e_13));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm g_14 = NULL,x_14 = NULL,y_14 = NULL,d_15 = NULL,n_15 = NULL;
  g_14 = t;
  e_14 :
  if(((ATgetType(g_14) == AT_LIST) && ((ATermList) g_14 != ATempty)))
    {
      x_14 = ATgetFirst((ATermList) g_14);
      n_15 = (ATerm) ATgetNext((ATermList) g_14);
      f_14 :
      if(match_cons(x_14, sym__2))
        {
          y_14 = ATgetArgument(x_14, 0);
          d_15 = ATgetArgument(x_14, 1);
          {
            ATerm p_15 = NULL;
            if(((y_14 != NULL) && (y_14 != d_15)))
              _fail(d_15);
            else
              y_14 = d_15;
            {
              if(((p_15 != NULL) && (p_15 != n_15)))
                _fail(n_15);
              else
                p_15 = n_15;
              t = not_null(p_15);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm n_67 (ATerm), ATerm o_67 (ATerm))
{
  ATerm r_15 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_67(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          t = o_67(t);
          t = r_15(t);
        }
      }
    return(t);
  }
  t = r_15(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm q_67 (ATerm), ATerm r_67 (ATerm), ATerm s_67 (ATerm))
{
  t = q_67(t);
  t = while_not_2(t, r_67, s_67);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(((ATgetType(v_15) == AT_LIST) && ((ATermList) v_15 != ATempty)))
    {
      w_15 = ATgetFirst((ATermList) v_15);
      x_15 = (ATerm) ATgetNext((ATermList) v_15);
      {
        t = c_73(t);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm a_16 = NULL;
            a_16 = t;
            if(((w_15 != NULL) && (w_15 != a_16)))
              _fail(a_16);
            else
              w_15 = a_16;
            return(t);
          }
          t = fetch_1(t, e_1);
        }
        t = not_null(x_15);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
      g_16 = t;
      e_16 :
      if(match_cons(g_16, sym__2))
        {
          h_16 = ATgetArgument(g_16, 0);
          i_16 = ATgetArgument(g_16, 1);
          {
            t = not_null(h_16);
            {
              ATerm o_16 (ATerm t)
              {
                ATerm o_12 = t;
                int p_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(p_12);
                  }
                else
                  {
                    t = o_12;
                    {
                      ATerm q_12 = t;
                      int r_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_1 (ATerm t)
                          {
                            t = not_null(i_16);
                            return(t);
                          }
                          t = HdMember_1(t, f_1);
                          t = o_16(t);
                          LocalPopChoice(r_12);
                        }
                      else
                        {
                          t = q_12;
                          t = Cons_2(t, _id, o_16);
                        }
                    }
                  }
                return(t);
              }
              t = o_16(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm g_1 (ATerm t)
        {
          ATerm l_16 = NULL;
          l_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_16));
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_1 (ATerm t)
        {
          ATerm s_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_1 (ATerm t)
              {
                ATerm v_12 = t;
                int x_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(x_12);
                  }
                else
                  {
                    t = v_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_1);
              LocalPopChoice(u_12);
            }
          else
            {
              t = s_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_1, h_1, i_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_16 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_68(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        {
          ATerm h_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_16 = NULL;
              ATerm r_13;
              r_13 = t;
              {
                ATerm s_16 = NULL;
                t = z_68(t);
                {
                  s_16 = t;
                  if(((r_16 != NULL) && (r_16 != s_16)))
                    _fail(s_16);
                  else
                    r_16 = s_16;
                }
              }
              t = r_13;
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = not_null(r_16);
                    return(t);
                  }
                  t = split_2(t, t_16, m_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm l_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = a_69(t, k_1, t_16, l_1);
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, n_1, union_0, _id);
                }
              }
              LocalPopChoice(l_13);
            }
          else
            {
              t = h_13;
              {
                ATerm o_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, o_1, union_0, t_16);
              }
            }
        }
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, p_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  x_16 :
  if(match_cons(c_17, sym_LRule_1))
    {
      d_17 = ATgetArgument(c_17, 0);
      y_16 :
      if(match_cons(d_17, sym_Rule_3))
        {
          z_16 = ATgetArgument(d_17, 0);
          a_17 = ATgetArgument(d_17, 1);
          b_17 = ATgetArgument(d_17, 2);
          {
            t = not_null(z_16);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(c_17, sym_Scope_2))
        {
          d_17 = ATgetArgument(c_17, 0);
          e_17 = ATgetArgument(c_17, 1);
          t = not_null(d_17);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_Var_1))
    {
      q_17 = ATgetArgument(p_17, 0);
      {
        ATerm s_17 = NULL;
        t = not_null(q_17);
        {
          t = n_59(t);
          {
            s_17 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym__3))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      d_18 = ATgetArgument(a_18, 2);
      {
        t = not_null(b_18);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm h_18 = NULL;
            h_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(d_18));
              t = r_70(t);
            }
            return(t);
          }
          ATerm r_1 (ATerm t)
          {
            ATerm j_18 = NULL;
            j_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(c_18));
              t = r_70(t);
            }
            return(t);
          }
          t = s_70(t, q_1, r_1, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm x_70 (ATerm), ATerm y_70 (ATerm, ATerm (ATerm)))
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,j_19 = NULL;
        ATerm z_13;
        z_13 = t;
        {
          ATerm e_19 = NULL;
          t = not_null(x_18);
          {
            ATerm f_19 = NULL;
            t = x_70(t);
            {
              e_19 = t;
              {
                if(((b_19 != NULL) && (b_19 != e_19)))
                  _fail(e_19);
                else
                  b_19 = e_19;
                {
                  ATerm g_19 = NULL,i_19 = NULL;
                  t = map_1(t, new_0);
                  {
                    f_19 = t;
                    {
                      if(((c_19 != NULL) && (c_19 != f_19)))
                        _fail(f_19);
                      else
                        c_19 = f_19;
                      {
                        ATerm h_19 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(c_19));
                        {
                          t = zip_1(t, _id);
                          {
                            h_19 = t;
                            if(((g_19 != NULL) && (g_19 != h_19)))
                              _fail(h_19);
                            else
                              g_19 = h_19;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_19), not_null(y_18));
                          {
                            t = conc_0(t);
                            {
                              i_19 = t;
                              if(((d_19 != NULL) && (d_19 != i_19)))
                                _fail(i_19);
                              else
                                d_19 = i_19;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = z_13;
        {
          ATerm k_19 = NULL;
          t = not_null(x_18);
          {
            ATerm s_1 (ATerm t)
            {
              t = not_null(c_19);
              return(t);
            }
            t = y_70(t, s_1);
            {
              k_19 = t;
              if(((j_19 != NULL) && (j_19 != k_19)))
                _fail(k_19);
              else
                j_19 = k_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(j_19), not_null(y_18), not_null(d_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  u_19 = t;
  s_19 :
  if(match_cons(u_19, sym__2))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      t_19 :
      if(((ATgetType(w_19) == AT_LIST) && ((ATermList) w_19 != ATempty)))
        {
          x_19 = ATgetFirst((ATermList) w_19);
          y_19 = (ATerm) ATgetNext((ATermList) w_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), not_null(y_19));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  g_20 = t;
  d_20 :
  if(match_cons(g_20, sym__2))
    {
      h_20 = ATgetArgument(g_20, 0);
      i_20 = ATgetArgument(g_20, 1);
      e_20 :
      if(((ATgetType(i_20) == AT_LIST) && ((ATermList) i_20 != ATempty)))
        {
          j_20 = ATgetFirst((ATermList) i_20);
          m_20 = (ATerm) ATgetNext((ATermList) i_20);
          f_20 :
          if(match_cons(j_20, sym__2))
            {
              k_20 = ATgetArgument(j_20, 0);
              l_20 = ATgetArgument(j_20, 1);
              {
                ATerm o_20 = NULL;
                if(((h_20 != NULL) && (h_20 != k_20)))
                  _fail(k_20);
                else
                  h_20 = k_20;
                {
                  if(((o_20 != NULL) && (o_20 != l_20)))
                    _fail(l_20);
                  else
                    o_20 = l_20;
                  t = not_null(o_20);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm a_14 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(b_14);
    }
  else
    {
      t = a_14;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm l_70 (ATerm, ATerm (ATerm)))
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym__2))
    {
      u_20 = ATgetArgument(t_20, 0);
      v_20 = ATgetArgument(t_20, 1);
      {
        t = not_null(u_20);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm u_1 (ATerm t)
            {
              t = not_null(v_20);
              return(t);
            }
            t = split_2(t, _id, u_1);
            t = lookup_0(t);
            return(t);
          }
          t = l_70(t, t_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm t_69 (ATerm))
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
          ATerm v_1 (ATerm t)
          {
            ATerm h_21 = NULL;
            h_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), not_null(e_21));
              t = t_69(t);
            }
            return(t);
          }
          t = _all(t, v_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm l_21 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_69(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = all_dist_1(t, l_21);
      }
    return(t);
  }
  t = l_21(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm z_70 (ATerm, ATerm (ATerm)), ATerm a_71 (ATerm), ATerm b_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_71 (ATerm, ATerm (ATerm)))
{
  ATerm n_21 = NULL;
  n_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), (ATerm) ATempty);
    {
      ATerm q_21 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, z_70);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
              {
                t = RnBinding_2(t, a_71, c_71);
                t = DistBinding_2(t, q_21, b_71);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, w_1);
        return(t);
      }
      t = q_21(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm r_21 (ATerm t, ATerm s_21 (ATerm))
  {
    t = Scope_2(t, s_21, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, r_21);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm InlineCall_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  ATerm e_25 (ATerm t)
  {
    ATerm t_23 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm x_1 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, x_1);
      {
        t_23 = t;
        z_21 :
        if(match_cons(t_23, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = term_h_10;
    return(t);
  }
  ATerm f_25 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
    ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm y_1 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, y_1);
      {
        z_23 = t;
        z_22 :
        if(match_cons(z_23, sym_Defined_3))
          {
            a_24 = ATgetArgument(z_23, 0);
            b_24 = ATgetArgument(z_23, 1);
            c_24 = ATgetArgument(z_23, 2);
            a_23 :
            if(match_string(a_24, "h_0"))
              {
                ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
                if(((v_23 != NULL) && (v_23 != b_24)))
                  _fail(b_24);
                else
                  v_23 = b_24;
                {
                  if(((q_23 != NULL) && (q_23 != c_24)))
                    _fail(c_24);
                  else
                    q_23 = c_24;
                  {
                    t = not_null(v_23);
                    {
                      t = strename_0(t);
                      {
                        d_24 = t;
                        x_22 :
                        if(match_cons(d_24, sym_SDef_3))
                          {
                            e_24 = ATgetArgument(d_24, 0);
                            f_24 = ATgetArgument(d_24, 1);
                            i_24 = ATgetArgument(d_24, 2);
                            y_22 :
                            if(((ATgetType(f_24) == AT_LIST) && ((ATermList) f_24 != ATempty)))
                              {
                                g_24 = ATgetFirst((ATermList) f_24);
                                h_24 = (ATerm) ATgetNext((ATermList) f_24);
                                {
                                  ATerm j_24 = NULL;
                                  if(((q_23 != NULL) && (q_23 != e_24)))
                                    _fail(e_24);
                                  else
                                    q_23 = e_24;
                                  {
                                    if(((w_23 != NULL) && (w_23 != f_24)))
                                      _fail(f_24);
                                    else
                                      w_23 = f_24;
                                    {
                                      if(((x_23 != NULL) && (x_23 != i_24)))
                                        _fail(i_24);
                                      else
                                        x_23 = i_24;
                                      {
                                        t = new_0(t);
                                        {
                                          j_24 = t;
                                          {
                                            if(((y_23 != NULL) && (y_23 != j_24)))
                                              _fail(j_24);
                                            else
                                              y_23 = j_24;
                                            {
                                              ATerm k_14;
                                              k_14 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_23)), term_l_14);
                                                {
                                                  ATerm z_1 (ATerm t)
                                                  {
                                                    t = term_j_14;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, z_1);
                                                }
                                              }
                                              t = k_14;
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
                          }
                        else
                          _fail(t);
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_23), not_null(w_23), not_null(x_23))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_23)), (ATerm) ATempty));
    return(t);
  }
  ATerm g_25 (ATerm t)
  {
    ATerm l_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm a_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, a_2);
      {
        l_24 = t;
        c_23 :
        if(match_cons(l_24, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = term_h_10;
    return(t);
  }
  ATerm h_25 (ATerm t)
  {
    ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
    ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        s_24 = t;
        h_23 :
        if(match_cons(s_24, sym_Defined_3))
          {
            t_24 = ATgetArgument(s_24, 0);
            u_24 = ATgetArgument(s_24, 1);
            v_24 = ATgetArgument(s_24, 2);
            i_23 :
            if(match_string(t_24, "f_0"))
              {
                ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
                if(((o_24 != NULL) && (o_24 != u_24)))
                  _fail(u_24);
                else
                  o_24 = u_24;
                {
                  if(((q_23 != NULL) && (q_23 != v_24)))
                    _fail(v_24);
                  else
                    q_23 = v_24;
                  {
                    t = not_null(o_24);
                    {
                      t = strename_0(t);
                      {
                        w_24 = t;
                        g_23 :
                        if(match_cons(w_24, sym_SDef_3))
                          {
                            x_24 = ATgetArgument(w_24, 0);
                            y_24 = ATgetArgument(w_24, 1);
                            z_24 = ATgetArgument(w_24, 2);
                            {
                              ATerm a_25 = NULL;
                              if(((q_23 != NULL) && (q_23 != x_24)))
                                _fail(x_24);
                              else
                                q_23 = x_24;
                              {
                                if(((p_24 != NULL) && (p_24 != y_24)))
                                  _fail(y_24);
                                else
                                  p_24 = y_24;
                                {
                                  if(((q_24 != NULL) && (q_24 != z_24)))
                                    _fail(z_24);
                                  else
                                    q_24 = z_24;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(p_24), not_null(r_23), not_null(q_24));
                                    {
                                      t = substitute_args_0(t);
                                      {
                                        a_25 = t;
                                        {
                                          if(((r_24 != NULL) && (r_24 != a_25)))
                                            _fail(a_25);
                                          else
                                            r_24 = a_25;
                                          {
                                            ATerm m_14;
                                            m_14 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(q_23)), term_l_14);
                                              {
                                                ATerm c_2 (ATerm t)
                                                {
                                                  t = term_j_14;
                                                  return(t);
                                                }
                                                t = assert_1(t, c_2);
                                              }
                                            }
                                            t = m_14;
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
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(r_24);
    return(t);
  }
  ATerm i_25 (ATerm t)
  {
    ATerm d_25 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(q_23));
    {
      ATerm d_2 (ATerm t)
      {
        t = term_j_14;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        d_25 = t;
        k_23 :
        if(match_cons(d_25, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = term_h_10;
    return(t);
  }
  o_23 = t;
  l_23 :
  if(match_cons(o_23, sym_Call_2))
    {
      p_23 = ATgetArgument(o_23, 0);
      r_23 = ATgetArgument(o_23, 1);
      m_23 :
      if(match_cons(p_23, sym_SVar_1))
        {
          q_23 = ATgetArgument(p_23, 0);
          n_23 :
          if(((ATermList) r_23 == ATempty))
            {
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_25(t);
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = n_14;
                    {
                      ATerm p_14 = t;
                      int q_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_25(t);
                          LocalPopChoice(q_14);
                        }
                      else
                        {
                          t = p_14;
                          {
                            ATerm r_14 = t;
                            int s_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = g_25(t);
                                LocalPopChoice(s_14);
                              }
                            else
                              {
                                t = r_14;
                                {
                                  ATerm t_14 = t;
                                  int u_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_25(t);
                                      LocalPopChoice(u_14);
                                    }
                                  else
                                    {
                                      t = t_14;
                                      t = i_25(t);
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
              ATerm v_14 = t;
              int w_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_25(t);
                  LocalPopChoice(w_14);
                }
              else
                {
                  t = v_14;
                  {
                    ATerm z_14 = t;
                    int a_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_25(t);
                        LocalPopChoice(a_15);
                      }
                    else
                      {
                        t = z_14;
                        {
                          ATerm b_15 = t;
                          int c_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = h_25(t);
                              LocalPopChoice(c_15);
                            }
                          else
                            {
                              t = b_15;
                              t = i_25(t);
                            }
                        }
                      }
                  }
                }
            }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UndefineSDef_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym_SDef_3))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      y_26 = ATgetArgument(v_26, 2);
      {
        ATerm e_15;
        e_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_26)), term_l_14);
          {
            ATerm e_2 (ATerm t)
            {
              t = term_j_14;
              return(t);
            }
            t = assert_1(t, e_2);
          }
        }
        t = e_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  c_27 :
  if(((ATgetType(d_27) == AT_LIST) && ((ATermList) d_27 != ATempty)))
    {
      e_27 = ATgetFirst((ATermList) d_27);
      f_27 = (ATerm) ATgetNext((ATermList) d_27);
      t = not_null(f_27);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym__2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm f_15;
        f_15 = t;
        {
          ATerm y_27 = NULL;
          ATerm z_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(o_27));
          {
            ATerm g_15 = t;
            int h_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(h_15);
              }
            else
              {
                t = g_15;
                t = (ATerm) ATempty;
              }
            {
              z_27 = t;
              if(((y_27 != NULL) && (y_27 != z_27)))
                _fail(z_27);
              else
                y_27 = z_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_27), not_null(o_27), not_null(y_27));
            t = table_put_0(t);
          }
        }
        t = f_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  ATerm i_15;
  i_15 = t;
  {
    ATerm q_28 = NULL;
    ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
    t = q_65(t);
    {
      q_28 = t;
      {
        if(((m_28 != NULL) && (m_28 != q_28)))
          _fail(q_28);
        else
          m_28 = q_28;
        {
          ATerm j_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), term_l_15);
              t = table_get_0(t);
              LocalPopChoice(k_15);
            }
          else
            {
              t = j_15;
              t = term_m_15;
            }
          {
            r_28 = t;
            k_28 :
            if(((ATgetType(r_28) == AT_LIST) && ((ATermList) r_28 != ATempty)))
              {
                s_28 = ATgetFirst((ATermList) r_28);
                t_28 = (ATerm) ATgetNext((ATermList) r_28);
                {
                  if(((n_28 != NULL) && (n_28 != s_28)))
                    _fail(s_28);
                  else
                    n_28 = s_28;
                  {
                    if(((l_28 != NULL) && (l_28 != t_28)))
                      _fail(t_28);
                    else
                      l_28 = t_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_28), term_l_15, not_null(l_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_28);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm u_28 = NULL;
                              u_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), not_null(u_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, f_2);
                          }
                        }
                      }
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
  t = i_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  ATerm o_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_79(t);
      t = u_79(t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = o_15;
      {
        t = u_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm c_29 = NULL;
  ATerm s_15;
  s_15 = t;
  {
    ATerm d_29 = NULL;
    ATerm e_29 = NULL;
    t = p_65(t);
    {
      d_29 = t;
      {
        if(((c_29 != NULL) && (c_29 != d_29)))
          _fail(d_29);
        else
          c_29 = d_29;
        {
          ATerm f_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), term_l_15);
          {
            ATerm t_15 = t;
            int y_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_15);
              }
            else
              {
                t = t_15;
                t = (ATerm) ATempty;
              }
            {
              f_29 = t;
              if(((e_29 != NULL) && (e_29 != f_29)))
                _fail(f_29);
              else
                e_29 = f_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_29), term_l_15, (ATerm) ATinsert(CheckATermList(not_null(e_29)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_65 (ATerm), ATerm s_65 (ATerm))
{
  t = begin_scope_1(t, r_65);
  {
    ATerm g_2 (ATerm t)
    {
      t = end_scope_1(t, r_65);
      return(t);
    }
    t = restore_always_2(t, s_65, g_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_j_14;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm z_15 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = z_15;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, h_2, i_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  n_29 :
  if(match_cons(o_29, sym__2))
    {
      p_29 = ATgetArgument(o_29, 0);
      q_29 = ATgetArgument(o_29, 1);
      {
        ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
        ATerm c_16;
        c_16 = t;
        {
          ATerm f_30 = NULL;
          ATerm j_30 = NULL,k_30 = NULL,d_31 = NULL;
          t = t_65(t);
          {
            f_30 = t;
            {
              if(((c_30 != NULL) && (c_30 != f_30)))
                _fail(f_30);
              else
                c_30 = f_30;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_30), not_null(p_29), not_null(q_29));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_16 = t;
                    int f_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_30), term_l_15);
                        t = table_get_0(t);
                        LocalPopChoice(f_16);
                      }
                    else
                      {
                        t = d_16;
                        t = term_m_15;
                      }
                    {
                      j_30 = t;
                      m_29 :
                      if(((ATgetType(j_30) == AT_LIST) && ((ATermList) j_30 != ATempty)))
                        {
                          k_30 = ATgetFirst((ATermList) j_30);
                          d_31 = (ATerm) ATgetNext((ATermList) j_30);
                          {
                            if(((d_30 != NULL) && (d_30 != k_30)))
                              _fail(k_30);
                            else
                              d_30 = k_30;
                            {
                              if(((e_30 != NULL) && (e_30 != d_31)))
                                _fail(d_31);
                              else
                                e_30 = d_31;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_30), term_l_15, (ATerm) ATinsert(CheckATermList(not_null(e_30)), (ATerm) ATinsert(CheckATermList(not_null(d_30)), not_null(p_29))));
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
        t = c_16;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym_SDef_3))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      n_31 = ATgetArgument(k_31, 2);
      {
        ATerm j_16;
        j_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_31)), (ATerm) ATmakeAppl(sym_Defined_3, term_k_16, not_null(k_31), not_null(l_31)));
          {
            ATerm j_2 (ATerm t)
            {
              t = term_j_14;
              return(t);
            }
            t = assert_1(t, j_2);
          }
        }
        t = j_16;
        {
          ATerm m_16;
          m_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_31)), (ATerm) ATmakeAppl(sym_Defined_3, term_n_16, not_null(k_31), not_null(l_31)));
            {
              ATerm k_2 (ATerm t)
              {
                t = term_j_14;
                return(t);
              }
              t = assert_1(t, k_2);
            }
          }
          t = m_16;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym__2))
    {
      u_31 = ATgetArgument(t_31, 0);
      v_31 = ATgetArgument(t_31, 1);
      {
        ATerm p_16;
        p_16 = t;
        {
          ATerm q_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_31), not_null(v_31));
              LocalPopChoice(u_16);
            }
          else
            {
              t = q_16;
              t = SSL_gtr(not_null(u_31), not_null(v_31));
            }
        }
        t = p_16;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm v_16 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = v_16;
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm w_16;
  w_16 = t;
  {
    ATerm d_32 = NULL,f_32 = NULL;
    ATerm f_17;
    f_17 = t;
    {
      ATerm e_32 = NULL;
      t = x_61(t);
      {
        e_32 = t;
        if(((d_32 != NULL) && (d_32 != e_32)))
          _fail(e_32);
        else
          d_32 = e_32;
      }
    }
    t = f_17;
    {
      ATerm g_32 = NULL;
      g_32 = t;
      if(((f_32 != NULL) && (f_32 != g_32)))
        _fail(g_32);
      else
        f_32 = g_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_32)), not_null(d_32)));
        t = printnl_0(t);
      }
    }
  }
  t = w_16;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm h_17;
  h_17 = t;
  {
    ATerm k_32 = NULL;
    ATerm l_32 = NULL;
    l_32 = t;
    if(((k_32 != NULL) && (k_32 != l_32)))
      _fail(l_32);
    else
      k_32 = l_32;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATempty, not_null(k_32)));
      t = printnl_0(t);
    }
  }
  t = h_17;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym__2))
    {
      q_32 = ATgetArgument(p_32, 0);
      r_32 = ATgetArgument(p_32, 1);
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_32), not_null(r_32));
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            t = SSL_addr(not_null(q_32), not_null(r_32));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_72(t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
        b_33 = t;
        y_32 :
        if(((ATgetType(b_33) == AT_LIST) && ((ATermList) b_33 != ATempty)))
          {
            c_33 = ATgetFirst((ATermList) b_33);
            d_33 = (ATerm) ATgetNext((ATermList) b_33);
            {
              ATerm g_33 = NULL,i_33 = NULL;
              ATerm m_17;
              m_17 = t;
              {
                ATerm h_33 = NULL;
                t = not_null(c_33);
                {
                  t = c_72(t);
                  {
                    h_33 = t;
                    if(((g_33 != NULL) && (g_33 != h_33)))
                      _fail(h_33);
                    else
                      g_33 = h_33;
                  }
                }
              }
              t = m_17;
              {
                ATerm j_33 = NULL;
                t = not_null(d_33);
                {
                  t = foldr_3(t, a_72, b_72, c_72);
                  {
                    j_33 = t;
                    if(((i_33 != NULL) && (i_33 != j_33)))
                      _fail(j_33);
                    else
                      i_33 = j_33;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), not_null(i_33));
                  t = b_72(t);
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
ATerm crush_3 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm))
{
  ATerm r_33 = NULL;
  ATerm t_33 = NULL;
  r_33 = t;
  {
    ATerm u_33 = NULL;
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
    t = not_null(r_33);
    {
      u_33 = t;
      {
        t = SSL_explode_term(not_null(u_33));
        {
          w_33 = t;
          q_33 :
          if(match_cons(w_33, sym__2))
            {
              x_33 = ATgetArgument(w_33, 0);
              y_33 = ATgetArgument(w_33, 1);
              if(((t_33 != NULL) && (t_33 != y_33)))
                _fail(y_33);
              else
                t_33 = y_33;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(t_33);
      t = foldr_3(t, n_73, o_73, p_73);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm n_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 (ATerm t)
      {
        ATerm l_2 (ATerm t)
        {
          t = term_t_17;
          return(t);
        }
        t = crush_3(t, l_2, add_0, e_34);
        return(t);
      }
      t = e_34(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = n_17;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_u_17;
          return(t);
        }
        t = debug_1(t, m_2);
        {
          ATerm n_2 (ATerm t)
          {
            t = term_t_17;
            return(t);
          }
          ATerm o_2 (ATerm t)
          {
            t = debug_0(t);
            {
              t = add_0(t);
              t = debug_0(t);
            }
            return(t);
          }
          t = crush_3(t, n_2, o_2, term_size_0);
          {
            ATerm p_2 (ATerm t)
            {
              t = term_v_17;
              return(t);
            }
            t = debug_1(t, p_2);
          }
        }
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  i_34 :
  if(match_cons(j_34, sym_LChoice_2))
    {
      k_34 = ATgetArgument(j_34, 0);
      l_34 = ATgetArgument(j_34, 1);
      {
        ATerm o_34 = NULL;
        t = not_null(k_34);
        {
          ATerm q_34 = NULL;
          t = z_59(t);
          {
            o_34 = t;
            {
              t = not_null(l_34);
              {
                t = a_60(t);
                {
                  q_34 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_34), not_null(q_34));
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
ATerm Choice_2 (ATerm t, ATerm x_59 (ATerm), ATerm y_59 (ATerm))
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  y_34 :
  if(match_cons(z_34, sym_Choice_2))
    {
      a_35 = ATgetArgument(z_34, 0);
      b_35 = ATgetArgument(z_34, 1);
      {
        ATerm e_35 = NULL;
        t = not_null(a_35);
        {
          ATerm g_35 = NULL;
          t = x_59(t);
          {
            e_35 = t;
            {
              t = not_null(b_35);
              {
                t = y_59(t);
                {
                  g_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_35), not_null(g_35));
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
ATerm Cong_2 (ATerm t, ATerm z_60 (ATerm), ATerm a_61 (ATerm))
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Cong_2))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      {
        ATerm u_35 = NULL;
        t = not_null(q_35);
        {
          ATerm w_35 = NULL;
          t = z_60(t);
          {
            u_35 = t;
            {
              t = not_null(r_35);
              {
                t = a_61(t);
                {
                  w_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(u_35), not_null(w_35));
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
ATerm Match_1 (ATerm t, ATerm h_61 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Match_1))
    {
      f_36 = ATgetArgument(e_36, 0);
      {
        ATerm h_36 = NULL;
        t = not_null(f_36);
        {
          t = h_61(t);
          {
            h_36 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(h_36));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm v_59 (ATerm), ATerm w_59 (ATerm))
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(match_cons(p_36, sym_Seq_2))
    {
      q_36 = ATgetArgument(p_36, 0);
      r_36 = ATgetArgument(p_36, 1);
      {
        ATerm u_36 = NULL;
        t = not_null(q_36);
        {
          ATerm w_36 = NULL;
          t = v_59(t);
          {
            u_36 = t;
            {
              t = not_null(r_36);
              {
                t = w_59(t);
                {
                  w_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_36), not_null(w_36));
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
ATerm Scope_2 (ATerm t, ATerm l_61 (ATerm), ATerm m_61 (ATerm))
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym_Scope_2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      {
        ATerm k_37 = NULL;
        t = not_null(g_37);
        {
          ATerm m_37 = NULL;
          t = l_61(t);
          {
            k_37 = t;
            {
              t = not_null(h_37);
              {
                t = m_61(t);
                {
                  m_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_37), not_null(m_37));
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
ATerm Build_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL;
  y_37 = t;
  u_37 :
  if(match_cons(y_37, sym_Build_1))
    {
      z_37 = ATgetArgument(y_37, 0);
      {
        ATerm b_38 = NULL;
        t = not_null(z_37);
        {
          t = i_61(t);
          {
            b_38 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm i_38 = NULL,l_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_SVar_1))
    {
      l_38 = ATgetArgument(i_38, 0);
      {
        ATerm n_38 = NULL;
        t = not_null(l_38);
        {
          t = g_60(t);
          {
            n_38 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(n_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm v_60 (ATerm), ATerm w_60 (ATerm))
{
  ATerm a_39 = NULL,h_39 = NULL,i_39 = NULL;
  a_39 = t;
  u_38 :
  if(match_cons(a_39, sym_Call_2))
    {
      h_39 = ATgetArgument(a_39, 0);
      i_39 = ATgetArgument(a_39, 1);
      {
        ATerm l_39 = NULL;
        t = not_null(h_39);
        {
          ATerm n_39 = NULL;
          t = v_60(t);
          {
            l_39 = t;
            {
              t = not_null(i_39);
              {
                t = w_60(t);
                {
                  n_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(l_39), not_null(n_39));
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
ATerm Fail_0 (ATerm t)
{
  ATerm t_39 = NULL;
  t_39 = t;
  s_39 :
  if(!(match_cons(t_39, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  u_39 :
  if(!(match_cons(v_39, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm w_39 (ATerm t)
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        {
          ATerm y_17 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(e_18);
            }
          else
            {
              t = y_17;
              {
                ATerm f_18 = t;
                int g_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, q_2, _id);
                    LocalPopChoice(g_18);
                  }
                else
                  {
                    t = f_18;
                    {
                      ATerm i_18 = t;
                      int k_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(k_18);
                        }
                      else
                        {
                          t = i_18;
                          {
                            ATerm l_18 = t;
                            int m_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(m_18);
                              }
                            else
                              {
                                t = l_18;
                                {
                                  ATerm n_18 = t;
                                  int o_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm r_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, r_2, _id);
                                      LocalPopChoice(o_18);
                                    }
                                  else
                                    {
                                      t = n_18;
                                      {
                                        ATerm p_18 = t;
                                        int q_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm s_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, s_2);
                                            LocalPopChoice(q_18);
                                          }
                                        else
                                          {
                                            t = p_18;
                                            {
                                              ATerm r_18 = t;
                                              int s_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_2 (ATerm t)
                                                  {
                                                    ATerm u_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, u_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, t_2);
                                                  LocalPopChoice(s_18);
                                                }
                                              else
                                                {
                                                  t = r_18;
                                                  {
                                                    ATerm t_18 = t;
                                                    int u_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm v_2 (ATerm t)
                                                        {
                                                          ATerm w_2 (ATerm t)
                                                          {
                                                            ATerm x_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, x_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, w_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, v_2, _id);
                                                        LocalPopChoice(u_18);
                                                      }
                                                    else
                                                      {
                                                        t = t_18;
                                                        {
                                                          ATerm z_18 = t;
                                                          int a_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(a_19);
                                                            }
                                                          else
                                                            {
                                                              t = z_18;
                                                              {
                                                                ATerm l_19 = t;
                                                                int m_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, w_39, w_39);
                                                                    LocalPopChoice(m_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_19;
                                                                    t = LChoice_2(t, w_39, w_39);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = w_39(t);
  {
    ATerm n_19;
    n_19 = t;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_o_19;
        return(t);
      }
      t = split_2(t, term_size_0, y_2);
      t = leq_0(t);
    }
    t = n_19;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm x_39 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_81(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = _one(t, x_39);
      }
    return(t);
  }
  t = x_39(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_SDef_3))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      i_40 = ATgetArgument(f_40, 2);
      {
        ATerm m_40 = NULL;
        t = not_null(g_40);
        {
          ATerm o_40 = NULL;
          t = l_60(t);
          {
            m_40 = t;
            {
              t = not_null(h_40);
              {
                ATerm q_40 = NULL;
                t = m_60(t);
                {
                  o_40 = t;
                  {
                    t = not_null(i_40);
                    {
                      t = n_60(t);
                      {
                        q_40 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_40), not_null(o_40), not_null(q_40));
                      }
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
ATerm inlineable_0 (ATerm t)
{
  ATerm g_41 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm k_41 = NULL;
    ATerm r_19 = t;
    if((PushChoice() == 0))
      {
        ATerm h_41 = NULL;
        h_41 = t;
        a_41 :
        if(!(match_string(h_41, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = r_19;
    {
      k_41 = t;
      if(((g_41 != NULL) && (g_41 != k_41)))
        _fail(k_41);
      else
        g_41 = k_41;
    }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm z_19;
    z_19 = t;
    {
      ATerm a_20 = t;
      if((PushChoice() == 0))
        {
          ATerm f_3 (ATerm t)
          {
            ATerm l_41 = NULL,m_41 = NULL,r_41 = NULL,s_41 = NULL;
            l_41 = t;
            d_41 :
            if(match_cons(l_41, sym_Call_2))
              {
                m_41 = ATgetArgument(l_41, 0);
                s_41 = ATgetArgument(l_41, 1);
                e_41 :
                if(match_cons(m_41, sym_SVar_1))
                  {
                    r_41 = ATgetArgument(m_41, 0);
                    f_41 :
                    if(((ATermList) s_41 == ATempty))
                      {
                        if(((g_41 != NULL) && (g_41 != r_41)))
                          _fail(r_41);
                        else
                          g_41 = r_41;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, f_3);
          PopChoice();
          _fail(t);
        }
      else
        t = a_20;
    }
    t = z_19;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, z_2, _id, e_3);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  x_41 :
  if(match_cons(y_41, sym__2))
    {
      z_41 = ATgetArgument(y_41, 0);
      a_42 = ATgetArgument(y_41, 1);
      {
        t = not_null(z_41);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(a_42);
            return(t);
          }
          t = at_end_1(t, g_3);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym__2))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_42)), not_null(h_42));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,z_42 = NULL,a_43 = NULL;
  q_42 = t;
  n_42 :
  if(match_cons(q_42, sym__2))
    {
      r_42 = ATgetArgument(q_42, 0);
      u_42 = ATgetArgument(q_42, 1);
      o_42 :
      if(((ATgetType(r_42) == AT_LIST) && ((ATermList) r_42 != ATempty)))
        {
          s_42 = ATgetFirst((ATermList) r_42);
          t_42 = (ATerm) ATgetNext((ATermList) r_42);
          p_42 :
          if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
            {
              z_42 = ATgetFirst((ATermList) u_42);
              a_43 = (ATerm) ATgetNext((ATermList) u_42);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(s_42), not_null(z_42)), (ATerm) ATmakeAppl(sym__2, not_null(t_42), not_null(a_43)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  h_43 :
  if(match_cons(m_43, sym__2))
    {
      n_43 = ATgetArgument(m_43, 0);
      o_43 = ATgetArgument(m_43, 1);
      i_43 :
      if(((ATermList) n_43 == ATempty))
        {
          l_43 :
          if(((ATermList) o_43 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  ATerm u_43 (ATerm t)
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_77(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        {
          t = c_77(t);
          {
            t = _2(t, e_77, u_43);
            t = d_77(t);
          }
        }
      }
    return(t);
  }
  t = u_43(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_77);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym_Cong_2))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      {
        ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,s_45 = NULL;
        ATerm n_20;
        n_20 = t;
        {
          ATerm z_44 = NULL;
          t = not_null(r_44);
          {
            ATerm c_45 = NULL;
            t = map_1(t, new_0);
            {
              z_44 = t;
              {
                if(((w_44 != NULL) && (w_44 != z_44)))
                  _fail(z_44);
                else
                  w_44 = z_44;
                {
                  t = not_null(w_44);
                  {
                    ATerm d_45 = NULL;
                    ATerm h_3 (ATerm t)
                    {
                      ATerm a_45 = NULL;
                      ATerm b_45 = NULL;
                      b_45 = t;
                      if(((a_45 != NULL) && (a_45 != b_45)))
                        _fail(b_45);
                      else
                        a_45 = b_45;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_45));
                      return(t);
                    }
                    t = map_1(t, h_3);
                    {
                      c_45 = t;
                      {
                        if(((u_44 != NULL) && (u_44 != c_45)))
                          _fail(c_45);
                        else
                          u_44 = c_45;
                        {
                          t = not_null(r_44);
                          {
                            ATerm g_45 = NULL;
                            t = map_1(t, new_0);
                            {
                              d_45 = t;
                              {
                                if(((x_44 != NULL) && (x_44 != d_45)))
                                  _fail(d_45);
                                else
                                  x_44 = d_45;
                                {
                                  t = not_null(x_44);
                                  {
                                    ATerm h_45 = NULL,r_45 = NULL;
                                    ATerm i_3 (ATerm t)
                                    {
                                      ATerm e_45 = NULL;
                                      ATerm f_45 = NULL;
                                      f_45 = t;
                                      if(((e_45 != NULL) && (e_45 != f_45)))
                                        _fail(f_45);
                                      else
                                        e_45 = f_45;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_45));
                                      return(t);
                                    }
                                    t = map_1(t, i_3);
                                    {
                                      g_45 = t;
                                      {
                                        if(((v_44 != NULL) && (v_44 != g_45)))
                                          _fail(g_45);
                                        else
                                          v_44 = g_45;
                                        {
                                          ATerm i_45 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(x_44));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              i_45 = t;
                                              if(((h_45 != NULL) && (h_45 != i_45)))
                                                _fail(i_45);
                                              else
                                                h_45 = i_45;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_45), not_null(r_44));
                                            {
                                              ATerm k_3 (ATerm t)
                                              {
                                                ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
                                                j_45 = t;
                                                k_44 :
                                                if(match_cons(j_45, sym__2))
                                                  {
                                                    k_45 = ATgetArgument(j_45, 0);
                                                    n_45 = ATgetArgument(j_45, 1);
                                                    l_44 :
                                                    if(match_cons(k_45, sym__2))
                                                      {
                                                        l_45 = ATgetArgument(k_45, 0);
                                                        m_45 = ATgetArgument(k_45, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_45))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_45), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_45)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, k_3);
                                              {
                                                r_45 = t;
                                                if(((y_44 != NULL) && (y_44 != r_45)))
                                                  _fail(r_45);
                                                else
                                                  y_44 = r_45;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = n_20;
        {
          ATerm t_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(x_44));
          {
            t = conc_0(t);
            {
              t_45 = t;
              if(((s_45 != NULL) && (s_45 != t_45)))
                _fail(t_45);
              else
                s_45 = t_45;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_44), not_null(u_44))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_44)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(q_44), not_null(v_44))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym_Cong_2))
    {
      m_46 = ATgetArgument(l_46, 0);
      n_46 = ATgetArgument(l_46, 1);
      {
        ATerm q_46 = NULL;
        ATerm u_46 = NULL;
        t = not_null(n_46);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm r_46 = NULL,s_46 = NULL;
            s_46 = t;
            i_46 :
            if(match_cons(s_46, sym_Match_1))
              {
                r_46 = ATgetArgument(s_46, 0);
                t = not_null(r_46);
              }
            else
              {
                if(match_cons(s_46, sym_Id_0))
                  t = term_p_20;
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_3);
          {
            u_46 = t;
            if(((q_46 != NULL) && (q_46 != u_46)))
              _fail(u_46);
            else
              q_46 = u_46;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(m_46), not_null(q_46)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  a_47 :
  if(match_cons(c_47, sym_Scope_2))
    {
      d_47 = ATgetArgument(c_47, 0);
      e_47 = ATgetArgument(c_47, 1);
      b_47 :
      if(((ATermList) d_47 == ATempty))
        {
          t = not_null(e_47);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Idempotency_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,a_49 = NULL;
  b_48 = t;
  n_47 :
  if(match_cons(b_48, sym_Where_1))
    {
      c_48 = ATgetArgument(b_48, 0);
      o_47 :
      if(match_cons(c_48, sym_Seq_2))
        {
          a_48 = ATgetArgument(c_48, 0);
          v_47 = ATgetArgument(c_48, 1);
          p_47 :
          if(match_cons(a_48, sym_Where_1))
            {
              u_47 = ATgetArgument(a_48, 0);
              q_47 :
              if(match_cons(v_47, sym_Seq_2))
                {
                  x_47 = ATgetArgument(v_47, 0);
                  z_47 = ATgetArgument(v_47, 1);
                  r_47 :
                  if(match_cons(x_47, sym_Build_1))
                    {
                      y_47 = ATgetArgument(x_47, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_47)), not_null(z_47))));
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(c_48, sym_Where_1))
            {
              a_48 = ATgetArgument(c_48, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(a_48));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(b_48, sym_Test_1))
        {
          c_48 = ATgetArgument(b_48, 0);
          s_47 :
          if(match_cons(c_48, sym_Test_1))
            {
              a_48 = ATgetArgument(c_48, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_48));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(b_48, sym_Not_1))
            {
              c_48 = ATgetArgument(b_48, 0);
              t_47 :
              if(match_cons(c_48, sym_Not_1))
                {
                  a_48 = ATgetArgument(c_48, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(a_48));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(b_48, sym_LChoice_2))
                {
                  c_48 = ATgetArgument(b_48, 0);
                  a_49 = ATgetArgument(b_48, 1);
                  {
                    if(((c_48 != NULL) && (c_48 != a_49)))
                      _fail(a_49);
                    else
                      c_48 = a_49;
                    t = not_null(c_48);
                  }
                }
              else
                {
                  if(match_cons(b_48, sym_Choice_2))
                    {
                      c_48 = ATgetArgument(b_48, 0);
                      a_49 = ATgetArgument(b_48, 1);
                      {
                        if(((c_48 != NULL) && (c_48 != a_49)))
                          _fail(a_49);
                        else
                          c_48 = a_49;
                        t = not_null(c_48);
                      }
                    }
                  else
                    _fail(t);
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
  d_51 = t;
  z_50 :
  if(match_cons(d_51, sym_LChoice_2))
    {
      e_51 = ATgetArgument(d_51, 0);
      h_51 = ATgetArgument(d_51, 1);
      a_51 :
      if(match_cons(e_51, sym_LChoice_2))
        {
          f_51 = ATgetArgument(e_51, 0);
          g_51 = ATgetArgument(e_51, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_51), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(g_51), not_null(h_51)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(d_51, sym_Seq_2))
        {
          e_51 = ATgetArgument(d_51, 0);
          h_51 = ATgetArgument(d_51, 1);
          b_51 :
          if(match_cons(e_51, sym_Seq_2))
            {
              f_51 = ATgetArgument(e_51, 0);
              g_51 = ATgetArgument(e_51, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_51), not_null(h_51)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(d_51, sym_Choice_2))
            {
              e_51 = ATgetArgument(d_51, 0);
              h_51 = ATgetArgument(d_51, 1);
              c_51 :
              if(match_cons(e_51, sym_Choice_2))
                {
                  f_51 = ATgetArgument(e_51, 0);
                  g_51 = ATgetArgument(e_51, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_51), (ATerm) ATmakeAppl(sym_Choice_2, not_null(g_51), not_null(h_51)));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  q_52 = t;
  g_52 :
  if(match_cons(q_52, sym_InfixApp_3))
    {
      r_52 = ATgetArgument(q_52, 0);
      l_52 = ATgetArgument(q_52, 1);
      k_52 = ATgetArgument(q_52, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(l_52), (ATerm) ATmakeAppl(sym_Op_2, term_q_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_52)), not_null(r_52))));
    }
  else
    {
      if(match_cons(q_52, sym_BAM_3))
        {
          r_52 = ATgetArgument(q_52, 0);
          l_52 = ATgetArgument(q_52, 1);
          k_52 = ATgetArgument(q_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(k_52))), not_null(r_52)), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_52))));
        }
      else
        {
          if(match_cons(q_52, sym_AM_2))
            {
              r_52 = ATgetArgument(q_52, 0);
              l_52 = ATgetArgument(q_52, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_52), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_52)));
            }
          else
            {
              if(match_cons(q_52, sym_MA_2))
                {
                  r_52 = ATgetArgument(q_52, 0);
                  l_52 = ATgetArgument(q_52, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_52)), not_null(l_52));
                }
              else
                {
                  if(match_cons(q_52, sym_BA_2))
                    {
                      r_52 = ATgetArgument(q_52, 0);
                      l_52 = ATgetArgument(q_52, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_52)), not_null(r_52));
                    }
                  else
                    {
                      if(match_cons(q_52, sym_Lets_2))
                        {
                          r_52 = ATgetArgument(q_52, 0);
                          l_52 = ATgetArgument(q_52, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(r_52), not_null(l_52));
                        }
                      else
                        {
                          if(match_cons(q_52, sym_LChoices_1))
                            {
                              r_52 = ATgetArgument(q_52, 0);
                              h_52 :
                              if(((ATgetType(r_52) == AT_LIST) && ((ATermList) r_52 != ATempty)))
                                {
                                  o_52 = ATgetFirst((ATermList) r_52);
                                  p_52 = (ATerm) ATgetNext((ATermList) r_52);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(o_52), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(p_52)));
                                }
                              else
                                {
                                  if(((ATermList) r_52 == ATempty))
                                    {
                                      t = term_r_20;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(q_52, sym_Choices_1))
                                {
                                  r_52 = ATgetArgument(q_52, 0);
                                  i_52 :
                                  if(((ATgetType(r_52) == AT_LIST) && ((ATermList) r_52 != ATempty)))
                                    {
                                      o_52 = ATgetFirst((ATermList) r_52);
                                      p_52 = (ATerm) ATgetNext((ATermList) r_52);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(o_52), (ATerm) ATmakeAppl(sym_Choices_1, not_null(p_52)));
                                    }
                                  else
                                    {
                                      if(((ATermList) r_52 == ATempty))
                                        {
                                          t = term_r_20;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(q_52, sym_Seqs_1))
                                    {
                                      r_52 = ATgetArgument(q_52, 0);
                                      j_52 :
                                      if(((ATgetType(r_52) == AT_LIST) && ((ATermList) r_52 != ATempty)))
                                        {
                                          o_52 = ATgetFirst((ATermList) r_52);
                                          p_52 = (ATerm) ATgetNext((ATermList) r_52);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_52), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_52)));
                                        }
                                      else
                                        {
                                          if(((ATermList) r_52 == ATempty))
                                            {
                                              t = term_w_20;
                                            }
                                          else
                                            _fail(t);
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
    }
  return(t);
}
ATerm F15_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  b_54 = t;
  z_53 :
  if(match_cons(b_54, sym_Where_1))
    {
      c_54 = ATgetArgument(b_54, 0);
      a_54 :
      if(match_cons(c_54, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
  h_54 = t;
  f_54 :
  if(match_cons(h_54, sym_LChoice_2))
    {
      i_54 = ATgetArgument(h_54, 0);
      j_54 = ATgetArgument(h_54, 1);
      g_54 :
      if(match_cons(j_54, sym_Fail_0))
        t = not_null(i_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  n_54 :
  if(match_cons(p_54, sym_LChoice_2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      o_54 :
      if(match_cons(q_54, sym_Fail_0))
        t = not_null(r_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  v_54 :
  if(match_cons(x_54, sym_Choice_2))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      w_54 :
      if(match_cons(z_54, sym_Fail_0))
        t = not_null(y_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  d_55 :
  if(match_cons(f_55, sym_Choice_2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      e_55 :
      if(match_cons(g_55, sym_Fail_0))
        t = not_null(h_55);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  m_55 :
  if(match_cons(n_55, sym_Cong_2))
    {
      o_55 = ATgetArgument(n_55, 0);
      p_55 = ATgetArgument(n_55, 1);
      {
        t = not_null(p_55);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm s_55 = NULL;
            s_55 = t;
            l_55 :
            if(!(match_cons(s_55, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, o_3);
        }
        t = term_r_20;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  v_55 :
  if(match_cons(x_55, sym_Path_2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      w_55 :
      if(match_cons(z_55, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_cons(f_56, sym_One_1))
    {
      g_56 = ATgetArgument(f_56, 0);
      e_56 :
      if(match_cons(g_56, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL;
  l_56 = t;
  j_56 :
  if(match_cons(l_56, sym_Some_1))
    {
      m_56 = ATgetArgument(l_56, 0);
      k_56 :
      if(match_cons(m_56, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  r_56 = t;
  p_56 :
  if(match_cons(r_56, sym_Rec_2))
    {
      s_56 = ATgetArgument(r_56, 0);
      t_56 = ATgetArgument(r_56, 1);
      q_56 :
      if(match_cons(t_56, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  x_56 :
  if(match_cons(z_56, sym_Scope_2))
    {
      a_57 = ATgetArgument(z_56, 0);
      b_57 = ATgetArgument(z_56, 1);
      y_56 :
      if(match_cons(b_57, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  f_57 :
  if(match_cons(h_57, sym_Seq_2))
    {
      i_57 = ATgetArgument(h_57, 0);
      j_57 = ATgetArgument(h_57, 1);
      g_57 :
      if(match_cons(i_57, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  p_57 = t;
  n_57 :
  if(match_cons(p_57, sym_Not_1))
    {
      q_57 = ATgetArgument(p_57, 0);
      o_57 :
      if(match_cons(q_57, sym_Fail_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  v_57 = t;
  t_57 :
  if(match_cons(v_57, sym_Test_1))
    {
      w_57 = ATgetArgument(v_57, 0);
      u_57 :
      if(match_cons(w_57, sym_Fail_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm f_21 = t;
              int g_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(g_21);
                }
              else
                {
                  t = f_21;
                  {
                    ATerm i_21 = t;
                    int j_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(j_21);
                      }
                    else
                      {
                        t = i_21;
                        {
                          ATerm k_21 = t;
                          int m_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(m_21);
                            }
                          else
                            {
                              t = k_21;
                              {
                                ATerm o_21 = t;
                                int p_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(p_21);
                                  }
                                else
                                  {
                                    t = o_21;
                                    {
                                      ATerm t_21 = t;
                                      int u_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(u_21);
                                        }
                                      else
                                        {
                                          t = t_21;
                                          {
                                            ATerm v_21 = t;
                                            int w_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(w_21);
                                              }
                                            else
                                              {
                                                t = v_21;
                                                {
                                                  ATerm x_21 = t;
                                                  int y_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(y_21);
                                                    }
                                                  else
                                                    {
                                                      t = x_21;
                                                      {
                                                        ATerm a_22 = t;
                                                        int b_22 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(b_22);
                                                          }
                                                        else
                                                          {
                                                            t = a_22;
                                                            {
                                                              ATerm c_22 = t;
                                                              int d_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(d_22);
                                                                }
                                                              else
                                                                {
                                                                  t = c_22;
                                                                  {
                                                                    ATerm e_22 = t;
                                                                    int f_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(f_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_22;
                                                                        {
                                                                          ATerm g_22 = t;
                                                                          int h_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(h_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_22;
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
  ATerm b_58 = NULL,c_58 = NULL;
  b_58 = t;
  z_57 :
  if(match_cons(b_58, sym_Match_1))
    {
      c_58 = ATgetArgument(b_58, 0);
      a_58 :
      if(match_cons(c_58, sym_Wld_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  h_58 = t;
  f_58 :
  if(match_cons(h_58, sym_Where_1))
    {
      i_58 = ATgetArgument(h_58, 0);
      g_58 :
      if(match_cons(i_58, sym_Id_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL;
  n_58 = t;
  l_58 :
  if(match_cons(n_58, sym_All_1))
    {
      o_58 = ATgetArgument(n_58, 0);
      m_58 :
      if(match_cons(o_58, sym_Id_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
  t_58 = t;
  r_58 :
  if(match_cons(t_58, sym_Rec_2))
    {
      u_58 = ATgetArgument(t_58, 0);
      v_58 = ATgetArgument(t_58, 1);
      s_58 :
      if(match_cons(v_58, sym_Id_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  c_59 = t;
  z_58 :
  if(match_cons(c_59, sym_Scope_2))
    {
      d_59 = ATgetArgument(c_59, 0);
      e_59 = ATgetArgument(c_59, 1);
      b_59 :
      if(match_cons(e_59, sym_Id_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm l_59 = NULL,o_59 = NULL,p_59 = NULL;
  l_59 = t;
  i_59 :
  if(match_cons(l_59, sym_LChoice_2))
    {
      o_59 = ATgetArgument(l_59, 0);
      p_59 = ATgetArgument(l_59, 1);
      j_59 :
      if(match_cons(o_59, sym_Id_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  t_59 :
  if(match_cons(b_60, sym_Seq_2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      u_59 :
      if(match_cons(d_60, sym_Id_0))
        t = not_null(c_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
  r_60 = t;
  p_60 :
  if(match_cons(r_60, sym_Seq_2))
    {
      s_60 = ATgetArgument(r_60, 0);
      t_60 = ATgetArgument(r_60, 1);
      q_60 :
      if(match_cons(s_60, sym_Id_0))
        t = not_null(t_60);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  d_61 = t;
  b_61 :
  if(match_cons(d_61, sym_Not_1))
    {
      e_61 = ATgetArgument(d_61, 0);
      c_61 :
      if(match_cons(e_61, sym_Id_0))
        t = term_r_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL;
  n_61 = t;
  j_61 :
  if(match_cons(n_61, sym_Test_1))
    {
      o_61 = ATgetArgument(n_61, 0);
      k_61 :
      if(match_cons(o_61, sym_Id_0))
        t = term_w_20;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm m_22 = t;
              int n_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(n_22);
                }
              else
                {
                  t = m_22;
                  {
                    ATerm o_22 = t;
                    int p_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        LocalPopChoice(p_22);
                      }
                    else
                      {
                        t = o_22;
                        {
                          ATerm q_22 = t;
                          int r_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              LocalPopChoice(r_22);
                            }
                          else
                            {
                              t = q_22;
                              {
                                ATerm s_22 = t;
                                int t_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    LocalPopChoice(t_22);
                                  }
                                else
                                  {
                                    t = s_22;
                                    {
                                      ATerm u_22 = t;
                                      int v_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          LocalPopChoice(v_22);
                                        }
                                      else
                                        {
                                          t = u_22;
                                          {
                                            ATerm w_22 = t;
                                            int b_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                LocalPopChoice(b_23);
                                              }
                                            else
                                              {
                                                t = w_22;
                                                {
                                                  ATerm d_23 = t;
                                                  int e_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      LocalPopChoice(e_23);
                                                    }
                                                  else
                                                    {
                                                      t = d_23;
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
  ATerm f_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = f_23;
      {
        ATerm s_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(u_23);
          }
        else
          {
            t = s_23;
            {
              ATerm k_24 = t;
              int m_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(m_24);
                }
              else
                {
                  t = k_24;
                  {
                    ATerm n_24 = t;
                    int b_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(b_25);
                      }
                    else
                      {
                        t = n_24;
                        {
                          ATerm c_25 = t;
                          int j_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(j_25);
                            }
                          else
                            {
                              t = c_25;
                              {
                                ATerm k_25 = t;
                                int l_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(l_25);
                                  }
                                else
                                  {
                                    t = k_25;
                                    {
                                      ATerm m_25 = t;
                                      int n_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(n_25);
                                        }
                                      else
                                        {
                                          t = m_25;
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
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  ATerm s_61 (ATerm t)
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_66(t);
        t = s_61(t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = x_66(t);
      }
    return(t);
  }
  t = s_61(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_66 (ATerm))
{
  t = repeat_2(t, z_66, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm t_61 (ATerm t)
  {
    t = z_79(t);
    {
      t = _all(t, t_61);
      t = z_79(t);
    }
    return(t);
  }
  t = t_61(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, p_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm z_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, z_3);
    }
    return(t);
  }
  t = map_1(t, q_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm y_61 = NULL,z_61 = NULL;
  y_61 = t;
  w_61 :
  if(match_cons(y_61, sym_Strategies_1))
    {
      z_61 = ATgetArgument(y_61, 0);
      {
        ATerm b_62 = NULL;
        t = not_null(z_61);
        {
          t = k_59(t);
          {
            b_62 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(b_62));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm i_62 = NULL,j_62 = NULL;
  i_62 = t;
  h_62 :
  if(match_cons(i_62, sym_Specification_1))
    {
      j_62 = ATgetArgument(i_62, 0);
      {
        ATerm l_62 = NULL;
        t = not_null(j_62);
        {
          t = m_59(t);
          {
            l_62 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(l_62));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm inline_strategies_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, g_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, f_4);
    return(t);
  }
  t = Specification_1(t, a_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm j_50 (ATerm), ATerm k_50 (ATerm))
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL;
  t_62 = t;
  s_62 :
  if(match_cons(t_62, sym__2))
    {
      u_62 = ATgetArgument(t_62, 0);
      v_62 = ATgetArgument(t_62, 1);
      {
        ATerm y_62 = NULL;
        t = not_null(u_62);
        {
          ATerm a_63 = NULL;
          t = j_50(t);
          {
            y_62 = t;
            {
              t = not_null(v_62);
              {
                t = k_50(t);
                {
                  a_63 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_62), not_null(a_63));
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
  ATerm h_63 = NULL;
  ATerm q_25;
  q_25 = t;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_63 = NULL,j_63 = NULL;
      i_63 = t;
      g_63 :
      if(match_cons(i_63, sym_Program_1))
        {
          j_63 = ATgetArgument(i_63, 0);
          if(((h_63 != NULL) && (h_63 != j_63)))
            _fail(j_63);
          else
            h_63 = j_63;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, h_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(CheckATermList(term_t_25), not_null(h_63)), term_r_25));
      {
        t = printnl_0(t);
        {
          t = term_t_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_25;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_w_25;
  {
    t = printnl_0(t);
    {
      t = term_t_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_63 = NULL,x_63 = NULL;
  ATerm i_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm x_25 = t;
      if((PushChoice() == 0))
        {
          ATerm x_4 (ATerm t)
          {
            ATerm y_63 = NULL;
            y_63 = t;
            l_63 :
            if(!(match_cons(y_63, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, x_4);
          PopChoice();
          _fail(t);
        }
      else
        t = x_25;
      return(t);
    }
    t = _2(t, s_4, _id);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm a_5 (ATerm t)
        {
          ATerm z_63 = NULL,a_64 = NULL;
          z_63 = t;
          n_63 :
          if(match_cons(z_63, sym_Runtime_1))
            {
              a_64 = ATgetArgument(z_63, 0);
              if(((x_63 != NULL) && (x_63 != a_64)))
                _fail(a_64);
              else
                x_63 = a_64;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, a_5);
        return(t);
      }
      t = _2(t, y_4, _id);
      {
        ATerm b_5 (ATerm t)
        {
          ATerm y_5 (ATerm t)
          {
            ATerm b_64 = NULL,c_64 = NULL;
            b_64 = t;
            p_63 :
            if(match_cons(b_64, sym_Program_1))
              {
                c_64 = ATgetArgument(b_64, 0);
                if(((q_63 != NULL) && (q_63 != c_64)))
                  _fail(c_64);
                else
                  q_63 = c_64;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, y_5);
          return(t);
        }
        t = _2(t, b_5, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_a_26), not_null(x_63)), term_y_25), not_null(q_63)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, i_4);
  {
    t = term_b_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
  h_64 = t;
  g_64 :
  if(match_cons(h_64, sym__2))
    {
      i_64 = ATgetArgument(h_64, 0);
      j_64 = ATgetArgument(h_64, 1);
      t = SSL_WriteToTextFile(not_null(i_64), not_null(j_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_64 = NULL,r_64 = NULL,t_64 = NULL;
  p_64 = t;
  o_64 :
  if(match_cons(p_64, sym__2))
    {
      r_64 = ATgetArgument(p_64, 0);
      t_64 = ATgetArgument(p_64, 1);
      t = SSL_WriteToBinaryFile(not_null(r_64), not_null(t_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_65 = NULL;
  ATerm c_26;
  c_26 = t;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm d_26 = t;
      int e_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_6 (ATerm t)
          {
            ATerm h_65 = NULL,i_65 = NULL;
            h_65 = t;
            d_65 :
            if(match_cons(h_65, sym_Output_1))
              {
                i_65 = ATgetArgument(h_65, 0);
                if(((g_65 != NULL) && (g_65 != i_65)))
                  _fail(i_65);
                else
                  g_65 = i_65;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_6);
          LocalPopChoice(e_26);
        }
      else
        {
          t = d_26;
          {
            ATerm j_65 = NULL;
            t = term_f_26;
            {
              j_65 = t;
              if(((g_65 != NULL) && (g_65 != j_65)))
                _fail(j_65);
              else
                g_65 = j_65;
            }
          }
        }
      return(t);
    }
    t = _2(t, z_5, _id);
  }
  t = c_26;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        t = not_null(g_65);
        return(t);
      }
      t = split_2(t, c_6, _id);
      return(t);
    }
    t = _2(t, _id, b_6);
    {
      ATerm g_26 = t;
      int h_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_6 (ATerm t)
          {
            ATerm e_6 (ATerm t)
            {
              ATerm k_65 = NULL;
              k_65 = t;
              f_65 :
              if(!(match_cons(k_65, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, e_6);
            return(t);
          }
          t = _2(t, d_6, WriteToBinaryFile_0);
          LocalPopChoice(h_26);
        }
      else
        {
          t = g_26;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm y_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  ATerm i_26;
  i_26 = t;
  t = dtime_0(t);
  t = i_26;
  {
    t = m_65(t);
    {
      ATerm j_26;
      j_26 = t;
      {
        ATerm z_65 = NULL;
        t = dtime_0(t);
        {
          z_65 = t;
          if(((y_65 != NULL) && (y_65 != z_65)))
            _fail(z_65);
          else
            y_65 = z_65;
        }
      }
      t = j_26;
      {
        a_66 = t;
        x_65 :
        if(match_cons(a_66, sym__2))
          {
            b_66 = ATgetArgument(a_66, 0);
            c_66 = ATgetArgument(a_66, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_66)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_65))), not_null(c_66));
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
  ATerm i_66 = NULL;
  i_66 = t;
  t = SSL_ReadFromFile(not_null(i_66));
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm n_66 = NULL,p_66 = NULL;
  ATerm k_26;
  k_26 = t;
  {
    ATerm o_66 = NULL;
    t = o_78(t);
    {
      o_66 = t;
      if(((n_66 != NULL) && (n_66 != o_66)))
        _fail(o_66);
      else
        n_66 = o_66;
    }
  }
  t = k_26;
  {
    ATerm q_66 = NULL;
    t = p_78(t);
    {
      q_66 = t;
      if(((p_66 != NULL) && (p_66 != q_66)))
        _fail(q_66);
      else
        p_66 = q_66;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_66), not_null(p_66));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_67 = NULL;
  ATerm l_26;
  l_26 = t;
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 (ATerm t)
        {
          ATerm b_67 = NULL,c_67 = NULL;
          b_67 = t;
          u_66 :
          if(match_cons(b_67, sym_Input_1))
            {
              c_67 = ATgetArgument(b_67, 0);
              if(((a_67 != NULL) && (a_67 != c_67)))
                _fail(c_67);
              else
                a_67 = c_67;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_6);
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm d_67 = NULL;
          t = term_o_26;
          {
            d_67 = t;
            if(((a_67 != NULL) && (a_67 != d_67)))
              _fail(d_67);
            else
              a_67 = d_67;
          }
        }
      }
  }
  t = l_26;
  {
    ATerm o_6 (ATerm t)
    {
      t = not_null(a_67);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_67 = NULL;
  h_67 = t;
  g_67 :
  if(!(match_cons(h_67, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_6);
  t = l_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_67 = NULL;
  j_67 = t;
  t = SSL_table_create(not_null(j_67));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm t_67 = NULL;
  t_67 = t;
  {
    ATerm t_26;
    t_26 = t;
    {
      t = term_z_26;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_z_26, term_a_27, not_null(t_67));
          t = table_put_0(t);
        }
      }
    }
    t = t_26;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
  b_68 = t;
  z_67 :
  if(match_string(b_68, "register-usage-info"))
    t = register_usage_1(t, o_0);
  else
    {
      if(((ATgetType(b_68) == AT_LIST) && ((ATermList) b_68 != ATempty)))
        {
          c_68 = ATgetFirst((ATermList) b_68);
          d_68 = (ATerm) ATgetNext((ATermList) b_68);
          a_68 :
          if(((ATgetType(d_68) == AT_LIST) && ((ATermList) d_68 != ATempty)))
            {
              e_68 = ATgetFirst((ATermList) d_68);
              f_68 = (ATerm) ATgetNext((ATermList) d_68);
              {
                ATerm j_68 = NULL;
                ATerm b_27;
                b_27 = t;
                {
                  t = not_null(c_68);
                  t = m_0(t);
                }
                t = b_27;
                {
                  ATerm k_68 = NULL;
                  t = not_null(e_68);
                  {
                    t = n_0(t);
                    {
                      k_68 = t;
                      if(((j_68 != NULL) && (j_68 != k_68)))
                        _fail(k_68);
                      else
                        j_68 = k_68;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_68)), not_null(j_68));
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
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_6 (ATerm t)
      {
        ATerm d_69 = NULL;
        d_69 = t;
        o_68 :
        if(!(match_string(d_69, "-S")))
          {
            if(!(match_string(d_69, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        t = term_i_27;
        return(t);
      }
      ATerm w_6 (ATerm t)
      {
        t = term_j_27;
        return(t);
      }
      t = Option_3(t, u_6, v_6, w_6);
      LocalPopChoice(h_27);
    }
  else
    {
      t = g_27;
      {
        ATerm k_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 (ATerm t)
            {
              ATerm e_69 = NULL;
              e_69 = t;
              p_68 :
              if(!(match_string(e_69, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm i_7 (ATerm t)
            {
              t = term_q_27;
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              t = term_r_27;
              return(t);
            }
            t = Option_3(t, z_6, i_7, j_7);
            LocalPopChoice(p_27);
          }
        else
          {
            t = k_27;
            {
              ATerm s_27 = t;
              int t_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm f_69 = NULL;
                    f_69 = t;
                    q_68 :
                    if(!(match_string(f_69, "-v")))
                      {
                        if(!(match_string(f_69, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_7 (ATerm t)
                  {
                    t = term_u_27;
                    return(t);
                  }
                  ATerm r_7 (ATerm t)
                  {
                    t = term_v_27;
                    return(t);
                  }
                  t = Option_3(t, k_7, q_7, r_7);
                  LocalPopChoice(t_27);
                }
              else
                {
                  t = s_27;
                  {
                    ATerm w_27 = t;
                    int x_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_7 (ATerm t)
                        {
                          ATerm g_69 = NULL;
                          g_69 = t;
                          r_68 :
                          if(!(match_string(g_69, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_7 (ATerm t)
                        {
                          ATerm h_69 = NULL;
                          ATerm i_69 = NULL;
                          i_69 = t;
                          if(((h_69 != NULL) && (h_69 != i_69)))
                            _fail(i_69);
                          else
                            h_69 = i_69;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(h_69));
                          return(t);
                        }
                        ATerm u_7 (ATerm t)
                        {
                          t = term_a_28;
                          return(t);
                        }
                        t = ArgOption_3(t, s_7, t_7, u_7);
                        LocalPopChoice(x_27);
                      }
                    else
                      {
                        t = w_27;
                        {
                          ATerm b_28 = t;
                          int c_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_7 (ATerm t)
                              {
                                ATerm j_69 = NULL;
                                j_69 = t;
                                t_68 :
                                if(!(match_string(j_69, "-i")))
                                  {
                                    if(!(match_string(j_69, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_7 (ATerm t)
                              {
                                ATerm k_69 = NULL;
                                ATerm l_69 = NULL;
                                l_69 = t;
                                if(((k_69 != NULL) && (k_69 != l_69)))
                                  _fail(l_69);
                                else
                                  k_69 = l_69;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_69));
                                return(t);
                              }
                              ATerm x_7 (ATerm t)
                              {
                                t = term_d_28;
                                return(t);
                              }
                              t = ArgOption_3(t, v_7, w_7, x_7);
                              LocalPopChoice(c_28);
                            }
                          else
                            {
                              t = b_28;
                              {
                                ATerm e_28 = t;
                                int f_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_8 (ATerm t)
                                    {
                                      ATerm m_69 = NULL;
                                      m_69 = t;
                                      v_68 :
                                      if(!(match_string(m_69, "-o")))
                                        {
                                          if(!(match_string(m_69, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm d_8 (ATerm t)
                                    {
                                      ATerm n_69 = NULL;
                                      ATerm o_69 = NULL;
                                      o_69 = t;
                                      if(((n_69 != NULL) && (n_69 != o_69)))
                                        _fail(o_69);
                                      else
                                        n_69 = o_69;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_69));
                                      return(t);
                                    }
                                    ATerm f_8 (ATerm t)
                                    {
                                      t = term_g_28;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_8, d_8, f_8);
                                    LocalPopChoice(f_28);
                                  }
                                else
                                  {
                                    t = e_28;
                                    {
                                      ATerm h_28 = t;
                                      int i_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_8 (ATerm t)
                                          {
                                            ATerm p_69 = NULL;
                                            p_69 = t;
                                            x_68 :
                                            if(!(match_string(p_69, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm i_8 (ATerm t)
                                          {
                                            t = term_j_28;
                                            return(t);
                                          }
                                          ATerm j_8 (ATerm t)
                                          {
                                            t = term_o_28;
                                            return(t);
                                          }
                                          t = Option_3(t, h_8, i_8, j_8);
                                          LocalPopChoice(i_28);
                                        }
                                      else
                                        {
                                          t = h_28;
                                          {
                                            ATerm k_8 (ATerm t)
                                            {
                                              ATerm q_69 = NULL;
                                              q_69 = t;
                                              c_69 :
                                              if(!(match_string(q_69, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm l_8 (ATerm t)
                                            {
                                              t = term_p_28;
                                              return(t);
                                            }
                                            ATerm m_8 (ATerm t)
                                            {
                                              t = term_v_28;
                                              return(t);
                                            }
                                            t = Option_3(t, k_8, l_8, m_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm w_69 = NULL;
  w_69 = t;
  t = SSL_table_destroy(not_null(w_69));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_70 = NULL;
  c_70 = t;
  t = SSL_exit(not_null(c_70));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_70 = NULL;
  g_70 = t;
  t = SSL_implode_string(not_null(g_70));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm j_70 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_70);
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          t = Nil_0(t);
          t = x_75(t);
        }
      }
    return(t);
  }
  t = j_70(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
        n_70 = t;
        m_70 :
        if(((ATgetType(n_70) == AT_LIST) && ((ATermList) n_70 != ATempty)))
          {
            o_70 = ATgetFirst((ATermList) n_70);
            p_70 = (ATerm) ATgetNext((ATermList) n_70);
            {
              t = not_null(o_70);
              {
                ATerm n_8 (ATerm t)
                {
                  t = not_null(p_70);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_8);
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
  ATerm e_71 = NULL;
  e_71 = t;
  t = SSL_explode_string(not_null(e_71));
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
ATerm long_description_1 (ATerm t, ATerm s_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm h_71 (ATerm t)
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = Cons_2(t, j_75, h_71);
      }
    return(t);
  }
  t = h_71(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  o_71 = t;
  l_71 :
  if(((ATgetType(o_71) == AT_LIST) && ((ATermList) o_71 != ATempty)))
    {
      m_71 = ATgetFirst((ATermList) o_71);
      n_71 = (ATerm) ATgetNext((ATermList) o_71);
      {
        t = not_null(n_71);
        {
          ATerm s_8 (ATerm t)
          {
            ATerm r_71 = NULL;
            ATerm s_71 = NULL;
            t = l_0(t);
            {
              s_71 = t;
              if(((r_71 != NULL) && (r_71 != s_71)))
                _fail(s_71);
              else
                r_71 = s_71;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(r_71)), not_null(m_71));
            return(t);
          }
          t = reverse_1(t, s_8);
        }
      }
    }
  else
    {
      if(((ATermList) o_71 == ATempty))
        {
          {
            t = term_h_10;
            t = l_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, t_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_52 (ATerm))
{
  ATerm z_71 = NULL,d_72 = NULL;
  z_71 = t;
  y_71 :
  if(match_cons(z_71, sym_Program_1))
    {
      d_72 = ATgetArgument(z_71, 0);
      {
        ATerm f_72 = NULL;
        t = not_null(d_72);
        {
          t = m_52(t);
          {
            f_72 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_72));
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
  ATerm n_72 = NULL;
  ATerm v_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      ATerm o_72 = NULL;
      o_72 = t;
      if(((n_72 != NULL) && (n_72 != o_72)))
        _fail(o_72);
      else
        n_72 = o_72;
      return(t);
    }
    t = Program_1(t, x_8);
    return(t);
  }
  t = option_defined_1(t, v_8);
  {
    ATerm y_8 (ATerm t)
    {
      ATerm p_72 = NULL;
      ATerm q_72 = NULL;
      t = term_h_10;
      {
        ATerm z_8 (ATerm t)
        {
          t = not_null(n_72);
          return(t);
        }
        t = short_description_1(t, z_8);
        {
          t = concat_strings_0(t);
          {
            q_72 = t;
            if(((p_72 != NULL) && (p_72 != q_72)))
              _fail(q_72);
            else
              p_72 = q_72;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATempty, not_null(p_72)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_8);
    {
      t = term_i_29;
      {
        t = printnl_0(t);
        {
          t = term_l_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm r_72 = NULL;
                  r_72 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_72)), term_r_29));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_9);
                {
                  ATerm b_9 (ATerm t)
                  {
                    ATerm t_72 = NULL;
                    ATerm u_72 = NULL;
                    t = term_h_10;
                    {
                      ATerm g_9 (ATerm t)
                      {
                        t = not_null(n_72);
                        return(t);
                      }
                      t = long_description_1(t, g_9);
                      {
                        t = concat_strings_0(t);
                        {
                          u_72 = t;
                          if(((t_72 != NULL) && (t_72 != u_72)))
                            _fail(u_72);
                          else
                            t_72 = u_72;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_72)), term_s_29));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_9);
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
  ATerm d_73 = NULL,e_73 = NULL,h_73 = NULL;
  d_73 = t;
  b_73 :
  if(match_cons(d_73, sym__2))
    {
      e_73 = ATgetArgument(d_73, 0);
      h_73 = ATgetArgument(d_73, 1);
      {
        ATerm t_29;
        t_29 = t;
        t = SSL_printnl(not_null(e_73), not_null(h_73));
        t = t_29;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_52 (ATerm))
{
  ATerm r_73 = NULL,s_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym_Undefined_1))
    {
      s_73 = ATgetArgument(r_73, 0);
      {
        ATerm u_73 = NULL;
        t = not_null(s_73);
        {
          t = n_52(t);
          {
            u_73 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_73));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm y_73 (ATerm t)
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_75, _id);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = Cons_2(t, _id, y_73);
      }
    return(t);
  }
  t = y_73(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_64 (ATerm))
{
  t = fetch_1(t, q_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm a_74 = NULL;
  a_74 = t;
  z_73 :
  if(!(match_cons(a_74, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_79(t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  c_74 :
  if(match_cons(d_74, sym__2))
    {
      e_74 = ATgetArgument(d_74, 0);
      f_74 = ATgetArgument(d_74, 1);
      t = SSL_table_get(not_null(e_74), not_null(f_74));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
  m_74 = t;
  l_74 :
  if(match_cons(m_74, sym__3))
    {
      n_74 = ATgetArgument(m_74, 0);
      o_74 = ATgetArgument(m_74, 1);
      p_74 = ATgetArgument(m_74, 2);
      {
        ATerm y_29;
        y_29 = t;
        {
          ATerm t_74 = NULL;
          ATerm u_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_74), not_null(o_74));
          {
            ATerm z_29 = t;
            int a_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_30);
              }
            else
              {
                t = z_29;
                t = (ATerm) ATempty;
              }
            {
              u_74 = t;
              if(((t_74 != NULL) && (t_74 != u_74)))
                _fail(u_74);
              else
                t_74 = u_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_74), not_null(o_74), (ATerm) ATinsert(CheckATermList(not_null(t_74)), not_null(p_74)));
            t = table_put_0(t);
          }
        }
        t = y_29;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_63 (ATerm))
{
  ATerm y_74 = NULL;
  ATerm z_74 = NULL;
  t = term_h_10;
  {
    t = w_63(t);
    {
      z_74 = t;
      if(((y_74 != NULL) && (y_74 != z_74)))
        _fail(z_74);
      else
        y_74 = z_74;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_29, term_k_29, not_null(y_74));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL;
  f_75 = t;
  e_75 :
  if(match_string(f_75, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(f_75) == AT_LIST) && ((ATermList) f_75 != ATempty)))
        {
          g_75 = ATgetFirst((ATermList) f_75);
          h_75 = (ATerm) ATgetNext((ATermList) f_75);
          {
            ATerm m_75 = NULL;
            ATerm b_30;
            b_30 = t;
            {
              t = not_null(g_75);
              t = a_0(t);
            }
            t = b_30;
            {
              ATerm n_75 = NULL;
              t = term_h_10;
              {
                t = g_0(t);
                {
                  n_75 = t;
                  if(((m_75 != NULL) && (m_75 != n_75)))
                    _fail(n_75);
                  else
                    m_75 = n_75;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_75)), not_null(m_75));
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
  ATerm h_9 (ATerm t)
  {
    ATerm u_75 = NULL;
    u_75 = t;
    t_75 :
    if(!(match_string(u_75, "--help")))
      {
        if(!(match_string(u_75, "-h")))
          {
            if(!(match_string(u_75, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm i_9 (ATerm t)
  {
    t = term_g_30;
    return(t);
  }
  ATerm j_9 (ATerm t)
  {
    t = term_h_30;
    return(t);
  }
  t = Option_3(t, h_9, i_9, j_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL;
  z_75 = t;
  w_75 :
  if(((ATgetType(z_75) == AT_LIST) && ((ATermList) z_75 != ATempty)))
    {
      a_76 = ATgetFirst((ATermList) z_75);
      b_76 = (ATerm) ATgetNext((ATermList) z_75);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_76)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_61 (ATerm), ATerm r_61 (ATerm))
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  i_76 :
  if(((ATgetType(j_76) == AT_LIST) && ((ATermList) j_76 != ATempty)))
    {
      k_76 = ATgetFirst((ATermList) j_76);
      l_76 = (ATerm) ATgetNext((ATermList) j_76);
      {
        ATerm o_76 = NULL;
        t = not_null(k_76);
        {
          ATerm q_76 = NULL;
          t = q_61(t);
          {
            o_76 = t;
            {
              t = not_null(l_76);
              {
                t = r_61(t);
                {
                  q_76 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_76)), not_null(o_76));
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
  ATerm x_76 = NULL;
  x_76 = t;
  w_76 :
  if(((ATermList) x_76 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm i_30;
  i_30 = t;
  {
    ATerm k_9 (ATerm t)
    {
      t = term_l_30;
      t = u_63(t);
      return(t);
    }
    t = try_1(t, k_9);
  }
  t = i_30;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm z_76 = NULL;
      z_76 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_76));
      return(t);
    }
    ATerm s_9 (ATerm t)
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
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
                t = u_63(t);
                t = Cons_2(t, _id, s_9);
              }
            }
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_9, s_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL;
  ATerm q_30;
  q_30 = t;
  {
    ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
    o_77 = t;
    k_77 :
    if(match_cons(o_77, sym__3))
      {
        p_77 = ATgetArgument(o_77, 0);
        q_77 = ATgetArgument(o_77, 1);
        r_77 = ATgetArgument(o_77, 2);
        {
          if(((l_77 != NULL) && (l_77 != p_77)))
            _fail(p_77);
          else
            l_77 = p_77;
          {
            if(((m_77 != NULL) && (m_77 != q_77)))
              _fail(q_77);
            else
              m_77 = q_77;
            {
              if(((n_77 != NULL) && (n_77 != r_77)))
                _fail(r_77);
              else
                n_77 = r_77;
              t = SSL_table_put(not_null(l_77), not_null(m_77), not_null(n_77));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = q_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_63 (ATerm))
{
  ATerm u_77 = NULL;
  ATerm r_30;
  r_30 = t;
  {
    t = term_s_30;
    t = table_put_0(t);
  }
  t = r_30;
  {
    ATerm t_9 (ATerm t)
    {
      ATerm t_30 = t;
      int u_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_63(t);
          LocalPopChoice(u_30);
        }
      else
        {
          t = t_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_9);
    {
      ATerm x_9 (ATerm t)
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_b_26;
                t = exit_0(t);
              }
            }
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            {
              ATerm y_9 (ATerm t)
              {
                ATerm z_9 (ATerm t)
                {
                  ATerm v_77 = NULL;
                  v_77 = t;
                  if(((u_77 != NULL) && (u_77 != v_77)))
                    _fail(v_77);
                  else
                    u_77 = v_77;
                  return(t);
                }
                t = Undefined_1(t, z_9);
                return(t);
              }
              t = option_defined_1(t, y_9);
              {
                ATerm x_30;
                x_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_77)), term_y_30));
                  t = printnl_0(t);
                }
                t = x_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_t_17;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_9);
      {
        ATerm z_30;
        z_30 = t;
        {
          t = term_j_29;
          t = table_destroy_0(t);
        }
        t = z_30;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_65 (ATerm), ATerm b_65 (ATerm), ATerm c_65 (ATerm))
{
  ATerm a_10 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_65(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, a_10);
  {
    t = store_options_0(t);
    {
      ATerm c_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, c_65);
          LocalPopChoice(e_31);
        }
      else
        {
          t = c_31;
          {
            ATerm f_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, a_65);
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
ATerm iowrap_2 (ATerm t, ATerm v_64 (ATerm), ATerm w_64 (ATerm))
{
  t = iowrap_3(t, v_64, w_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm b_10 (ATerm t)
  {
    t = _2(t, _id, s_64);
    return(t);
  }
  t = iowrap_2(t, b_10, _fail);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  t = iowrap_1(t, inline_strategies_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = inline_0(t);
  return(t);
}
