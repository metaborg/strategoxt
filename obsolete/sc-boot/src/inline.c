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
ATerm term_w_30;
ATerm term_m_30;
ATerm term_a_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_p_26;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_r_18;
ATerm term_i_17;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_p_15;
ATerm term_o_14;
ATerm term_e_14;
ATerm term_p_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
void init_constant_terms (void)
{
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_x_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__3, term_w_28, term_x_28, (ATerm) ATempty);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm o_67 (ATerm));
ATerm SubsArgCall2_0 (ATerm);
ATerm SubsArgCall1_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm z_81 (ATerm));
ATerm substitute_arg_0 (ATerm);
ATerm substitute_args_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm b_86 (ATerm));
ATerm Rec_2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm Let_2 (ATerm, ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm sboundin_3 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm x_85 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm o_60 (ATerm));
ATerm tboundin_3 (ATerm, ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm for_3 (ATerm, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm HdMember_1 (ATerm, ATerm x_74 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm b_61 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm m_72 (ATerm), ATerm n_72 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm s_72 (ATerm), ATerm t_72 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm g_72 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm o_71 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm t_71 (ATerm));
ATerm rename_4 (ATerm, ATerm u_72 (ATerm, ATerm (ATerm)), ATerm v_72 (ATerm), ATerm w_72 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_72 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm InlineCall_0 (ATerm);
ATerm UndefineSDef_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm j_67 (ATerm));
ATerm restore_always_2 (ATerm, ATerm x_81 (ATerm), ATerm y_81 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm i_67 (ATerm));
ATerm scope_2 (ATerm, ATerm k_67 (ATerm), ATerm l_67 (ATerm));
ATerm inline_sdef_0 (ATerm);
ATerm assert_1 (ATerm, ATerm m_67 (ATerm));
ATerm AddSDef_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm));
ATerm crush_3 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm term_size_0 (ATerm);
ATerm LChoice_2 (ATerm, ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm Choice_2 (ATerm, ATerm l_61 (ATerm), ATerm m_61 (ATerm));
ATerm Cong_2 (ATerm, ATerm q_62 (ATerm), ATerm r_62 (ATerm));
ATerm Match_1 (ATerm, ATerm y_62 (ATerm));
ATerm Seq_2 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm));
ATerm Scope_2 (ATerm, ATerm c_63 (ATerm), ATerm d_63 (ATerm));
ATerm Build_1 (ATerm, ATerm z_62 (ATerm));
ATerm SVar_1 (ATerm, ATerm x_61 (ATerm));
ATerm Call_2 (ATerm, ATerm m_62 (ATerm), ATerm n_62 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm body_to_inline_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm r_83 (ATerm));
ATerm SDef_3 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm));
ATerm inlineable_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm));
ATerm zip_1 (ATerm, ATerm k_79 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_68 (ATerm));
ATerm downup_1 (ATerm, ATerm d_82 (ATerm));
ATerm simplify0_0 (ATerm);
ATerm inline_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm y_60 (ATerm));
ATerm Specification_1 (ATerm, ATerm a_61 (ATerm));
ATerm inline_strategies_0 (ATerm);
ATerm _2 (ATerm, ATerm t_51 (ATerm), ATerm u_51 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_67 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_80 (ATerm), ATerm t_80 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_67 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_77 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_65 (ATerm));
ATerm map_1 (ATerm, ATerm k_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_65 (ATerm));
ATerm Program_1 (ATerm, ATerm w_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_53 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_65 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_65 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_66 (ATerm), ATerm p_66 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_66 (ATerm));
ATerm inline_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_lookup_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
  c_3 = t;
  b_3 :
  if(match_cons(c_3, sym__2))
    {
      d_3 = ATgetArgument(c_3, 0);
      e_3 = ATgetArgument(c_3, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), not_null(e_3));
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
ATerm rewrite_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm k_3 = NULL;
  ATerm m_3 = NULL;
  k_3 = t;
  {
    ATerm n_3 = NULL;
    t = term_a_10;
    {
      t = o_67(t);
      {
        n_3 = t;
        if(((m_3 != NULL) && (m_3 != n_3)))
          _fail(n_3);
        else
          m_3 = n_3;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_3), not_null(k_3));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm SubsArgCall2_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  w_3 = t;
  u_3 :
  if(match_cons(w_3, sym_Call_2))
    {
      x_3 = ATgetArgument(w_3, 0);
      z_3 = ATgetArgument(w_3, 1);
      v_3 :
      if(match_cons(x_3, sym_SVar_1))
        {
          y_3 = ATgetArgument(x_3, 0);
          {
            ATerm c_4 = NULL;
            ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_3));
            {
              ATerm a_0 (ATerm t)
              {
                t = term_b_10;
                return(t);
              }
              t = rewrite_1(t, a_0);
              {
                d_4 = t;
                s_3 :
                if(match_cons(d_4, sym_Defined_2))
                  {
                    e_4 = ATgetArgument(d_4, 0);
                    f_4 = ATgetArgument(d_4, 1);
                    t_3 :
                    if(match_string(e_4, "j_0"))
                      {
                        if(((c_4 != NULL) && (c_4 != f_4)))
                          _fail(f_4);
                        else
                          c_4 = f_4;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_4)), not_null(z_3));
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
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  p_4 = t;
  m_4 :
  if(match_cons(p_4, sym_Call_2))
    {
      q_4 = ATgetArgument(p_4, 0);
      s_4 = ATgetArgument(p_4, 1);
      n_4 :
      if(match_cons(q_4, sym_SVar_1))
        {
          r_4 = ATgetArgument(q_4, 0);
          o_4 :
          if(((ATermList) s_4 == ATempty))
            {
              {
                ATerm u_4 = NULL;
                ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
                t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_4));
                {
                  ATerm b_0 (ATerm t)
                  {
                    t = term_c_10;
                    return(t);
                  }
                  t = rewrite_1(t, b_0);
                  {
                    v_4 = t;
                    k_4 :
                    if(match_cons(v_4, sym_Defined_2))
                      {
                        w_4 = ATgetArgument(v_4, 0);
                        x_4 = ATgetArgument(v_4, 1);
                        l_4 :
                        if(match_string(w_4, "i_0"))
                          {
                            if(((u_4 != NULL) && (u_4 != x_4)))
                              _fail(x_4);
                            else
                              u_4 = x_4;
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
                {
                  t = not_null(u_4);
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
ATerm topdown_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    t = z_81(t);
    t = _all(t, a_5);
    return(t);
  }
  t = a_5(t);
  return(t);
}
ATerm substitute_arg_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
  q_5 = t;
  d_5 :
  if(match_cons(q_5, sym__2))
    {
      r_5 = ATgetArgument(q_5, 0);
      y_5 = ATgetArgument(q_5, 1);
      e_5 :
      if(match_cons(r_5, sym_VarDec_2))
        {
          s_5 = ATgetArgument(r_5, 0);
          t_5 = ATgetArgument(r_5, 1);
          f_5 :
          if(match_cons(t_5, sym_FunType_2))
            {
              u_5 = ATgetArgument(t_5, 0);
              x_5 = ATgetArgument(t_5, 1);
              g_5 :
              if(((ATgetType(u_5) == AT_LIST) && ((ATermList) u_5 != ATempty)))
                {
                  v_5 = ATgetFirst((ATermList) u_5);
                  w_5 = (ATerm) ATgetNext((ATermList) u_5);
                  h_5 :
                  if(((ATgetType(w_5) == AT_LIST) && ((ATermList) w_5 != ATempty)))
                    {
                      l_5 = ATgetFirst((ATermList) w_5);
                      m_5 = (ATerm) ATgetNext((ATermList) w_5);
                      i_5 :
                      if(match_cons(y_5, sym_Call_2))
                        {
                          n_5 = ATgetArgument(y_5, 0);
                          p_5 = ATgetArgument(y_5, 1);
                          j_5 :
                          if(match_cons(n_5, sym_SVar_1))
                            {
                              o_5 = ATgetArgument(n_5, 0);
                              k_5 :
                              if(((ATermList) p_5 == ATempty))
                                {
                                  {
                                    ATerm i_10;
                                    i_10 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(s_5)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_10, not_null(o_5)));
                                      {
                                        ATerm d_0 (ATerm t)
                                        {
                                          t = term_b_10;
                                          return(t);
                                        }
                                        t = assert_1(t, d_0);
                                      }
                                    }
                                    t = i_10;
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
                      if(((ATermList) w_5 == ATempty))
                        {
                          {
                            ATerm o_10;
                            o_10 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(s_5)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_10, not_null(y_5)));
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  t = term_c_10;
                                  return(t);
                                }
                                t = assert_1(t, e_0);
                              }
                            }
                            t = o_10;
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
  ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
  ATerm q_0 (ATerm t)
  {
    t = term_c_10;
    return(t);
  }
  ATerm r_0 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = term_b_10;
      return(t);
    }
    ATerm t_0 (ATerm t)
    {
      ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
      k_6 = t;
      g_6 :
      if(match_cons(k_6, sym__3))
        {
          l_6 = ATgetArgument(k_6, 0);
          m_6 = ATgetArgument(k_6, 1);
          n_6 = ATgetArgument(k_6, 2);
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
                if(((j_6 != NULL) && (j_6 != n_6)))
                  _fail(n_6);
                else
                  j_6 = n_6;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_6), not_null(i_6));
                  {
                    t = zip_1(t, substitute_arg_0);
                    {
                      t = not_null(j_6);
                      {
                        ATerm u_0 (ATerm t)
                        {
                          ATerm v_0 (ATerm t)
                          {
                            ATerm q_10 = t;
                            int r_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = SubsArgCall1_0(t);
                                LocalPopChoice(r_10);
                              }
                            else
                              {
                                t = q_10;
                                t = SubsArgCall2_0(t);
                              }
                            return(t);
                          }
                          t = try_1(t, v_0);
                          return(t);
                        }
                        t = topdown_1(t, u_0);
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
    t = scope_2(t, s_0, t_0);
    return(t);
  }
  t = scope_2(t, q_0, r_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(((ATgetType(r_6) == AT_LIST) && ((ATermList) r_6 != ATempty)))
    {
      s_6 = ATgetFirst((ATermList) r_6);
      t_6 = (ATerm) ATgetNext((ATermList) r_6);
      t = not_null(s_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = split_2(t, _id, b_86);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
            d_7 = t;
            y_6 :
            if(match_cons(d_7, sym__2))
              {
                e_7 = ATgetArgument(d_7, 0);
                i_7 = ATgetArgument(d_7, 1);
                z_6 :
                if(match_cons(e_7, sym_SDef_3))
                  {
                    f_7 = ATgetArgument(e_7, 0);
                    g_7 = ATgetArgument(e_7, 1);
                    h_7 = ATgetArgument(e_7, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_7), not_null(g_7), not_null(h_7));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, x_0);
        }
        return(t);
      }
      t = Let_2(t, w_0, _id);
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
        ATerm u_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = split_2(t, _id, b_86);
              {
                ATerm z_0 (ATerm t)
                {
                  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
                  m_7 = t;
                  b_7 :
                  if(match_cons(m_7, sym__2))
                    {
                      n_7 = ATgetArgument(m_7, 0);
                      q_7 = ATgetArgument(m_7, 1);
                      c_7 :
                      if(match_cons(n_7, sym_VarDec_2))
                        {
                          o_7 = ATgetArgument(n_7, 0);
                          p_7 = ATgetArgument(n_7, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_7), not_null(p_7));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, z_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, y_0, _id);
            LocalPopChoice(y_10);
          }
        else
          {
            t = u_10;
            {
              ATerm a_1 (ATerm t)
              {
                t = b_86(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, a_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_Rec_2))
    {
      b_8 = ATgetArgument(a_8, 0);
      c_8 = ATgetArgument(a_8, 1);
      {
        ATerm f_8 = NULL;
        t = not_null(b_8);
        {
          ATerm h_8 = NULL;
          t = y_61(t);
          {
            f_8 = t;
            {
              t = not_null(c_8);
              {
                t = z_61(t);
                {
                  h_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(f_8), not_null(h_8));
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
ATerm Let_2 (ATerm t, ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_Let_2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      {
        ATerm v_8 = NULL;
        t = not_null(r_8);
        {
          ATerm x_8 = NULL;
          t = a_62(t);
          {
            v_8 = t;
            {
              t = not_null(s_8);
              {
                t = b_62(t);
                {
                  x_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_8), not_null(x_8));
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
ATerm sboundin_3 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm))
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, c_86, c_86);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, e_86, e_86, c_86);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = Rec_2(t, e_86, c_86);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Rec_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      t = (ATerm) ATinsert(ATempty, not_null(f_9));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_SDef_3))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      r_9 = ATgetArgument(o_9, 2);
      {
        t = not_null(q_9);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
            v_9 = t;
            m_9 :
            if(match_cons(v_9, sym_VarDec_2))
              {
                w_9 = ATgetArgument(v_9, 0);
                x_9 = ATgetArgument(v_9, 1);
                t = not_null(w_9);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  f_10 = t;
  e_10 :
  if(match_cons(f_10, sym_Let_2))
    {
      g_10 = ATgetArgument(f_10, 0);
      h_10 = ATgetArgument(f_10, 1);
      {
        t = not_null(g_10);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
            k_10 = t;
            d_10 :
            if(match_cons(k_10, sym_SDef_3))
              {
                l_10 = ATgetArgument(k_10, 0);
                m_10 = ATgetArgument(k_10, 1);
                n_10 = ATgetArgument(k_10, 2);
                t = not_null(l_10);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, c_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        {
          ATerm j_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(n_11);
            }
          else
            {
              t = j_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, d_1, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm x_85 (ATerm))
{
  t = Scope_2(t, x_85, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm o_60 (ATerm))
{
  ATerm w_10 = NULL,x_10 = NULL;
  w_10 = t;
  v_10 :
  if(match_cons(w_10, sym_DynamicRules_1))
    {
      x_10 = ATgetArgument(w_10, 0);
      {
        ATerm z_10 = NULL;
        t = not_null(x_10);
        {
          t = o_60(t);
          {
            z_10 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(z_10));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tboundin_3 (ATerm t, ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm))
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, a_86, y_85);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = DynamicRules_1(t, y_85);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  f_11 = t;
  e_11 :
  if(match_cons(f_11, sym_DynamicRules_1))
    {
      g_11 = ATgetArgument(f_11, 0);
      {
        t = not_null(g_11);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_Var_1))
    {
      m_11 = ATgetArgument(l_11, 0);
      t = (ATerm) ATinsert(ATempty, not_null(m_11));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  r_11 = t;
  q_11 :
  if(match_cons(r_11, sym__2))
    {
      s_11 = ATgetArgument(r_11, 0);
      t_11 = ATgetArgument(r_11, 1);
      {
        t = not_null(s_11);
        {
          ATerm x_11 (ATerm t)
          {
            ATerm u_11 = t;
            int v_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_11);
                LocalPopChoice(v_11);
              }
            else
              {
                t = u_11;
                {
                  ATerm w_11 = t;
                  int y_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_1 (ATerm t)
                      {
                        t = not_null(t_11);
                        return(t);
                      }
                      t = HdMember_1(t, e_1);
                      t = x_11(t);
                      LocalPopChoice(y_11);
                    }
                  else
                    {
                      t = w_11;
                      t = Cons_2(t, _id, x_11);
                    }
                }
              }
            return(t);
          }
          t = x_11(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  b_12 = t;
  z_11 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      a_12 :
      if(((ATgetType(d_12) == AT_LIST) && ((ATermList) d_12 != ATempty)))
        {
          e_12 = ATgetFirst((ATermList) d_12);
          f_12 = (ATerm) ATgetNext((ATermList) d_12);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_12)), not_null(e_12)), not_null(f_12));
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
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  b_13 = t;
  z_12 :
  if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
    {
      c_13 = ATgetFirst((ATermList) b_13);
      f_13 = (ATerm) ATgetNext((ATermList) b_13);
      a_13 :
      if(match_cons(c_13, sym__2))
        {
          d_13 = ATgetArgument(c_13, 0);
          e_13 = ATgetArgument(c_13, 1);
          {
            ATerm j_13 = NULL,k_13 = NULL,q_13 = NULL,w_13 = NULL;
            ATerm g_12;
            g_12 = t;
            {
              ATerm l_13 = NULL;
              ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
              t = not_null(e_13);
              {
                l_13 = t;
                {
                  t = SSL_explode_term(not_null(l_13));
                  {
                    n_13 = t;
                    p_12 :
                    if(match_cons(n_13, sym__2))
                      {
                        o_13 = ATgetArgument(n_13, 0);
                        p_13 = ATgetArgument(n_13, 1);
                        {
                          if(((j_13 != NULL) && (j_13 != o_13)))
                            _fail(o_13);
                          else
                            j_13 = o_13;
                          if(((k_13 != NULL) && (k_13 != p_13)))
                            _fail(p_13);
                          else
                            k_13 = p_13;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = g_12;
            {
              ATerm h_12;
              h_12 = t;
              {
                ATerm r_13 = NULL;
                ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
                t = not_null(d_13);
                {
                  r_13 = t;
                  {
                    t = SSL_explode_term(not_null(r_13));
                    {
                      t_13 = t;
                      x_12 :
                      if(match_cons(t_13, sym__2))
                        {
                          u_13 = ATgetArgument(t_13, 0);
                          v_13 = ATgetArgument(t_13, 1);
                          {
                            if(((j_13 != NULL) && (j_13 != u_13)))
                              _fail(u_13);
                            else
                              j_13 = u_13;
                            if(((q_13 != NULL) && (q_13 != v_13)))
                              _fail(v_13);
                            else
                              q_13 = v_13;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = h_12;
              {
                ATerm x_13 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_13), not_null(k_13));
                {
                  t = zip_1(t, _id);
                  {
                    x_13 = t;
                    if(((w_13 != NULL) && (w_13 != x_13)))
                      _fail(x_13);
                    else
                      w_13 = x_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_13), not_null(f_13));
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
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  h_14 = t;
  f_14 :
  if(((ATgetType(h_14) == AT_LIST) && ((ATermList) h_14 != ATempty)))
    {
      i_14 = ATgetFirst((ATermList) h_14);
      l_14 = (ATerm) ATgetNext((ATermList) h_14);
      g_14 :
      if(match_cons(i_14, sym__2))
        {
          j_14 = ATgetArgument(i_14, 0);
          k_14 = ATgetArgument(i_14, 1);
          {
            ATerm n_14 = NULL;
            if(((j_14 != NULL) && (j_14 != k_14)))
              _fail(k_14);
            else
              j_14 = k_14;
            {
              if(((n_14 != NULL) && (n_14 != l_14)))
                _fail(l_14);
              else
                n_14 = l_14;
              t = not_null(n_14);
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
ATerm while_not_2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm p_14 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_69(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        {
          t = j_69(t);
          t = p_14(t);
        }
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  t = l_69(t);
  t = while_not_2(t, m_69, n_69);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm j_15 = NULL,o_15 = NULL,y_15 = NULL;
  j_15 = t;
  i_15 :
  if(((ATgetType(j_15) == AT_LIST) && ((ATermList) j_15 != ATempty)))
    {
      o_15 = ATgetFirst((ATermList) j_15);
      y_15 = (ATerm) ATgetNext((ATermList) j_15);
      {
        t = x_74(t);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm b_16 = NULL;
            b_16 = t;
            if(((o_15 != NULL) && (o_15 != b_16)))
              _fail(b_16);
            else
              o_15 = b_16;
            return(t);
          }
          t = fetch_1(t, f_1);
        }
        t = not_null(y_15);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
      h_16 = t;
      f_16 :
      if(match_cons(h_16, sym__2))
        {
          i_16 = ATgetArgument(h_16, 0);
          j_16 = ATgetArgument(h_16, 1);
          {
            t = not_null(i_16);
            {
              ATerm p_16 (ATerm t)
              {
                ATerm m_12 = t;
                int n_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(n_12);
                  }
                else
                  {
                    t = m_12;
                    {
                      ATerm o_12 = t;
                      int q_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_1 (ATerm t)
                          {
                            t = not_null(j_16);
                            return(t);
                          }
                          t = HdMember_1(t, g_1);
                          t = p_16(t);
                          LocalPopChoice(q_12);
                        }
                      else
                        {
                          t = o_12;
                          t = Cons_2(t, _id, p_16);
                        }
                    }
                  }
                return(t);
              }
              t = p_16(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm h_1 (ATerm t)
        {
          ATerm m_16 = NULL;
          m_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_16));
          return(t);
        }
        ATerm i_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm j_1 (ATerm t)
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_1 (ATerm t)
              {
                ATerm t_12 = t;
                int u_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(u_12);
                  }
                else
                  {
                    t = t_12;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, k_1);
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, h_1, i_1, j_1);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_16 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_70(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm y_12 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_16 = NULL;
              ATerm h_13;
              h_13 = t;
              {
                ATerm t_16 = NULL;
                t = u_70(t);
                {
                  t_16 = t;
                  if(((s_16 != NULL) && (s_16 != t_16)))
                    _fail(t_16);
                  else
                    s_16 = t_16;
                }
              }
              t = h_13;
              {
                ATerm l_1 (ATerm t)
                {
                  ATerm n_1 (ATerm t)
                  {
                    t = not_null(s_16);
                    return(t);
                  }
                  t = split_2(t, u_16, n_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm m_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = v_70(t, l_1, u_16, m_1);
                {
                  ATerm o_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, o_1, union_0, _id);
                }
              }
              LocalPopChoice(g_13);
            }
          else
            {
              t = y_12;
              {
                ATerm p_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, p_1, union_0, u_16);
              }
            }
        }
      }
    return(t);
  }
  t = u_16(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm i_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = i_13;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, q_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  y_16 :
  if(match_cons(d_17, sym_LRule_1))
    {
      e_17 = ATgetArgument(d_17, 0);
      z_16 :
      if(match_cons(e_17, sym_Rule_3))
        {
          a_17 = ATgetArgument(e_17, 0);
          b_17 = ATgetArgument(e_17, 1);
          c_17 = ATgetArgument(e_17, 2);
          {
            t = not_null(a_17);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(d_17, sym_Scope_2))
        {
          e_17 = ATgetArgument(d_17, 0);
          f_17 = ATgetArgument(d_17, 1);
          t = not_null(e_17);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm b_61 (ATerm))
{
  ATerm q_17 = NULL,r_17 = NULL;
  q_17 = t;
  p_17 :
  if(match_cons(q_17, sym_Var_1))
    {
      r_17 = ATgetArgument(q_17, 0);
      {
        ATerm t_17 = NULL;
        t = not_null(r_17);
        {
          t = b_61(t);
          {
            t_17 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_17));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm m_72 (ATerm), ATerm n_72 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym__3))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      e_18 = ATgetArgument(b_18, 2);
      {
        t = not_null(c_18);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm i_18 = NULL;
            i_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_18), not_null(e_18));
              t = m_72(t);
            }
            return(t);
          }
          ATerm s_1 (ATerm t)
          {
            ATerm k_18 = NULL;
            k_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(d_18));
              t = m_72(t);
            }
            return(t);
          }
          t = n_72(t, r_1, s_1, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm s_72 (ATerm), ATerm t_72 (ATerm, ATerm (ATerm)))
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      {
        ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,k_19 = NULL;
        ATerm s_13;
        s_13 = t;
        {
          ATerm f_19 = NULL;
          t = not_null(x_18);
          {
            ATerm g_19 = NULL;
            t = s_72(t);
            {
              f_19 = t;
              {
                if(((b_19 != NULL) && (b_19 != f_19)))
                  _fail(f_19);
                else
                  b_19 = f_19;
                {
                  ATerm h_19 = NULL,j_19 = NULL;
                  t = map_1(t, new_0);
                  {
                    g_19 = t;
                    {
                      if(((c_19 != NULL) && (c_19 != g_19)))
                        _fail(g_19);
                      else
                        c_19 = g_19;
                      {
                        ATerm i_19 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(c_19));
                        {
                          t = zip_1(t, _id);
                          {
                            i_19 = t;
                            if(((h_19 != NULL) && (h_19 != i_19)))
                              _fail(i_19);
                            else
                              h_19 = i_19;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), not_null(y_18));
                          {
                            t = conc_0(t);
                            {
                              j_19 = t;
                              if(((d_19 != NULL) && (d_19 != j_19)))
                                _fail(j_19);
                              else
                                d_19 = j_19;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = s_13;
        {
          ATerm l_19 = NULL;
          t = not_null(x_18);
          {
            ATerm t_1 (ATerm t)
            {
              t = not_null(c_19);
              return(t);
            }
            t = t_72(t, t_1);
            {
              l_19 = t;
              if(((k_19 != NULL) && (k_19 != l_19)))
                _fail(l_19);
              else
                k_19 = l_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(k_19), not_null(y_18), not_null(d_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  v_19 = t;
  t_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      u_19 :
      if(((ATgetType(x_19) == AT_LIST) && ((ATermList) x_19 != ATempty)))
        {
          y_19 = ATgetFirst((ATermList) x_19);
          z_19 = (ATerm) ATgetNext((ATermList) x_19);
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(z_19));
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
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  h_20 = t;
  e_20 :
  if(match_cons(h_20, sym__2))
    {
      i_20 = ATgetArgument(h_20, 0);
      j_20 = ATgetArgument(h_20, 1);
      f_20 :
      if(((ATgetType(j_20) == AT_LIST) && ((ATermList) j_20 != ATempty)))
        {
          k_20 = ATgetFirst((ATermList) j_20);
          n_20 = (ATerm) ATgetNext((ATermList) j_20);
          g_20 :
          if(match_cons(k_20, sym__2))
            {
              l_20 = ATgetArgument(k_20, 0);
              m_20 = ATgetArgument(k_20, 1);
              {
                ATerm p_20 = NULL;
                if(((i_20 != NULL) && (i_20 != l_20)))
                  _fail(l_20);
                else
                  i_20 = l_20;
                {
                  if(((p_20 != NULL) && (p_20 != m_20)))
                    _fail(m_20);
                  else
                    p_20 = m_20;
                  t = not_null(p_20);
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
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm g_72 (ATerm, ATerm (ATerm)))
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(match_cons(u_20, sym__2))
    {
      v_20 = ATgetArgument(u_20, 0);
      w_20 = ATgetArgument(u_20, 1);
      {
        t = not_null(v_20);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_1 (ATerm t)
            {
              t = not_null(w_20);
              return(t);
            }
            t = split_2(t, _id, v_1);
            t = lookup_0(t);
            return(t);
          }
          t = g_72(t, u_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym__2))
    {
      e_21 = ATgetArgument(d_21, 0);
      f_21 = ATgetArgument(d_21, 1);
      {
        t = not_null(e_21);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm i_21 = NULL;
            i_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), not_null(f_21));
              t = o_71(t);
            }
            return(t);
          }
          t = _all(t, w_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm m_21 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_71(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = all_dist_1(t, m_21);
      }
    return(t);
  }
  t = m_21(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm u_72 (ATerm, ATerm (ATerm)), ATerm v_72 (ATerm), ATerm w_72 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_72 (ATerm, ATerm (ATerm)))
{
  ATerm o_21 = NULL;
  o_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_21), (ATerm) ATempty);
    {
      ATerm r_21 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, u_72);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              {
                t = RnBinding_2(t, v_72, x_72);
                t = DistBinding_2(t, r_21, w_72);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, x_1);
        return(t);
      }
      t = r_21(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm s_21 (ATerm t, ATerm t_21 (ATerm))
  {
    t = Scope_2(t, t_21, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, s_21);
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
  ATerm f_25 (ATerm t)
  {
    ATerm u_23 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_23));
    {
      ATerm y_1 (ATerm t)
      {
        t = term_e_14;
        return(t);
      }
      t = rewrite_1(t, y_1);
      {
        u_23 = t;
        a_22 :
        if(match_cons(u_23, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = term_a_10;
    return(t);
  }
  ATerm g_25 (ATerm t)
  {
    ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
    ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_23));
    {
      ATerm z_1 (ATerm t)
      {
        t = term_e_14;
        return(t);
      }
      t = rewrite_1(t, z_1);
      {
        a_24 = t;
        g_22 :
        if(match_cons(a_24, sym_Defined_3))
          {
            b_24 = ATgetArgument(a_24, 0);
            c_24 = ATgetArgument(a_24, 1);
            d_24 = ATgetArgument(a_24, 2);
            h_22 :
            if(match_string(b_24, "g_0"))
              {
                ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
                if(((w_23 != NULL) && (w_23 != c_24)))
                  _fail(c_24);
                else
                  w_23 = c_24;
                {
                  if(((r_23 != NULL) && (r_23 != d_24)))
                    _fail(d_24);
                  else
                    r_23 = d_24;
                  {
                    t = not_null(w_23);
                    {
                      t = strename_0(t);
                      {
                        e_24 = t;
                        e_22 :
                        if(match_cons(e_24, sym_SDef_3))
                          {
                            f_24 = ATgetArgument(e_24, 0);
                            g_24 = ATgetArgument(e_24, 1);
                            j_24 = ATgetArgument(e_24, 2);
                            f_22 :
                            if(((ATgetType(g_24) == AT_LIST) && ((ATermList) g_24 != ATempty)))
                              {
                                h_24 = ATgetFirst((ATermList) g_24);
                                i_24 = (ATerm) ATgetNext((ATermList) g_24);
                                {
                                  ATerm k_24 = NULL;
                                  if(((r_23 != NULL) && (r_23 != f_24)))
                                    _fail(f_24);
                                  else
                                    r_23 = f_24;
                                  {
                                    if(((x_23 != NULL) && (x_23 != g_24)))
                                      _fail(g_24);
                                    else
                                      x_23 = g_24;
                                    {
                                      if(((y_23 != NULL) && (y_23 != j_24)))
                                        _fail(j_24);
                                      else
                                        y_23 = j_24;
                                      {
                                        t = new_0(t);
                                        {
                                          k_24 = t;
                                          {
                                            if(((z_23 != NULL) && (z_23 != k_24)))
                                              _fail(k_24);
                                            else
                                              z_23 = k_24;
                                            {
                                              ATerm m_14;
                                              m_14 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_23)), term_o_14);
                                                {
                                                  ATerm a_2 (ATerm t)
                                                  {
                                                    t = term_e_14;
                                                    return(t);
                                                  }
                                                  t = assert_1(t, a_2);
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
    t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_23), not_null(x_23), not_null(y_23))), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_23)), (ATerm) ATempty));
    return(t);
  }
  ATerm h_25 (ATerm t)
  {
    ATerm m_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_23));
    {
      ATerm b_2 (ATerm t)
      {
        t = term_e_14;
        return(t);
      }
      t = rewrite_1(t, b_2);
      {
        m_24 = t;
        j_22 :
        if(match_cons(m_24, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = term_a_10;
    return(t);
  }
  ATerm i_25 (ATerm t)
  {
    ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
    ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_23));
    {
      ATerm c_2 (ATerm t)
      {
        t = term_e_14;
        return(t);
      }
      t = rewrite_1(t, c_2);
      {
        t_24 = t;
        i_23 :
        if(match_cons(t_24, sym_Defined_3))
          {
            u_24 = ATgetArgument(t_24, 0);
            v_24 = ATgetArgument(t_24, 1);
            w_24 = ATgetArgument(t_24, 2);
            j_23 :
            if(match_string(u_24, "f_0"))
              {
                ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
                if(((p_24 != NULL) && (p_24 != v_24)))
                  _fail(v_24);
                else
                  p_24 = v_24;
                {
                  if(((r_23 != NULL) && (r_23 != w_24)))
                    _fail(w_24);
                  else
                    r_23 = w_24;
                  {
                    t = not_null(p_24);
                    {
                      t = strename_0(t);
                      {
                        x_24 = t;
                        h_23 :
                        if(match_cons(x_24, sym_SDef_3))
                          {
                            y_24 = ATgetArgument(x_24, 0);
                            z_24 = ATgetArgument(x_24, 1);
                            a_25 = ATgetArgument(x_24, 2);
                            {
                              ATerm b_25 = NULL;
                              if(((r_23 != NULL) && (r_23 != y_24)))
                                _fail(y_24);
                              else
                                r_23 = y_24;
                              {
                                if(((q_24 != NULL) && (q_24 != z_24)))
                                  _fail(z_24);
                                else
                                  q_24 = z_24;
                                {
                                  if(((r_24 != NULL) && (r_24 != a_25)))
                                    _fail(a_25);
                                  else
                                    r_24 = a_25;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__3, not_null(q_24), not_null(s_23), not_null(r_24));
                                    {
                                      t = substitute_args_0(t);
                                      {
                                        b_25 = t;
                                        {
                                          if(((s_24 != NULL) && (s_24 != b_25)))
                                            _fail(b_25);
                                          else
                                            s_24 = b_25;
                                          {
                                            ATerm q_14;
                                            q_14 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(r_23)), term_o_14);
                                              {
                                                ATerm d_2 (ATerm t)
                                                {
                                                  t = term_e_14;
                                                  return(t);
                                                }
                                                t = assert_1(t, d_2);
                                              }
                                            }
                                            t = q_14;
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
    t = not_null(s_24);
    return(t);
  }
  ATerm j_25 (ATerm t)
  {
    ATerm e_25 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(r_23));
    {
      ATerm e_2 (ATerm t)
      {
        t = term_e_14;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        e_25 = t;
        l_23 :
        if(match_cons(e_25, sym_Undefined_0))
          _fail(t);
        else
          _fail(t);
      }
    }
    t = term_a_10;
    return(t);
  }
  p_23 = t;
  m_23 :
  if(match_cons(p_23, sym_Call_2))
    {
      q_23 = ATgetArgument(p_23, 0);
      s_23 = ATgetArgument(p_23, 1);
      n_23 :
      if(match_cons(q_23, sym_SVar_1))
        {
          r_23 = ATgetArgument(q_23, 0);
          o_23 :
          if(((ATermList) s_23 == ATempty))
            {
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_25(t);
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
                          t = g_25(t);
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = t_14;
                          {
                            ATerm v_14 = t;
                            int w_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_25(t);
                                LocalPopChoice(w_14);
                              }
                            else
                              {
                                t = v_14;
                                {
                                  ATerm x_14 = t;
                                  int y_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = i_25(t);
                                      LocalPopChoice(y_14);
                                    }
                                  else
                                    {
                                      t = x_14;
                                      t = j_25(t);
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
              ATerm z_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_25(t);
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
                        {
                          ATerm d_15 = t;
                          int e_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_25(t);
                              LocalPopChoice(e_15);
                            }
                          else
                            {
                              t = d_15;
                              t = j_25(t);
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
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_SDef_3))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      y_25 = ATgetArgument(v_25, 2);
      {
        ATerm f_15;
        f_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(w_25)), term_o_14);
          {
            ATerm f_2 (ATerm t)
            {
              t = term_e_14;
              return(t);
            }
            t = assert_1(t, f_2);
          }
        }
        t = f_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  c_26 :
  if(((ATgetType(d_26) == AT_LIST) && ((ATermList) d_26 != ATempty)))
    {
      e_26 = ATgetFirst((ATermList) d_26);
      f_26 = (ATerm) ATgetNext((ATermList) d_26);
      t = not_null(f_26);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  l_26 :
  if(match_cons(m_26, sym__2))
    {
      n_26 = ATgetArgument(m_26, 0);
      o_26 = ATgetArgument(m_26, 1);
      {
        ATerm g_15;
        g_15 = t;
        {
          ATerm r_26 = NULL;
          ATerm b_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), not_null(o_26));
          {
            ATerm h_15 = t;
            int k_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(k_15);
              }
            else
              {
                t = h_15;
                t = (ATerm) ATempty;
              }
            {
              b_27 = t;
              if(((r_26 != NULL) && (r_26 != b_27)))
                _fail(b_27);
              else
                r_26 = b_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_26), not_null(o_26), not_null(r_26));
            t = table_put_0(t);
          }
        }
        t = g_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm j_67 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    ATerm d_28 = NULL;
    ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
    t = j_67(t);
    {
      d_28 = t;
      {
        if(((b_28 != NULL) && (b_28 != d_28)))
          _fail(d_28);
        else
          b_28 = d_28;
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), term_p_15);
              t = table_get_0(t);
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            e_28 = t;
            z_27 :
            if(((ATgetType(e_28) == AT_LIST) && ((ATermList) e_28 != ATempty)))
              {
                f_28 = ATgetFirst((ATermList) e_28);
                g_28 = (ATerm) ATgetNext((ATermList) e_28);
                {
                  if(((c_28 != NULL) && (c_28 != f_28)))
                    _fail(f_28);
                  else
                    c_28 = f_28;
                  {
                    if(((a_28 != NULL) && (a_28 != g_28)))
                      _fail(g_28);
                    else
                      a_28 = g_28;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_28), term_p_15, not_null(a_28));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_28);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm h_28 = NULL;
                              h_28 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(h_28));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_2);
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
  t = l_15;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm x_81 (ATerm), ATerm y_81 (ATerm))
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_81(t);
      t = y_81(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        t = y_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm o_28 = NULL;
  ATerm s_15;
  s_15 = t;
  {
    ATerm p_28 = NULL;
    ATerm q_28 = NULL;
    t = i_67(t);
    {
      p_28 = t;
      {
        if(((o_28 != NULL) && (o_28 != p_28)))
          _fail(p_28);
        else
          o_28 = p_28;
        {
          ATerm y_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), term_p_15);
          {
            ATerm t_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_15);
              }
            else
              {
                t = t_15;
                t = (ATerm) ATempty;
              }
            {
              y_28 = t;
              if(((q_28 != NULL) && (q_28 != y_28)))
                _fail(y_28);
              else
                q_28 = y_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_28), term_p_15, (ATerm) ATinsert(CheckATermList(not_null(q_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm k_67 (ATerm), ATerm l_67 (ATerm))
{
  t = begin_scope_1(t, k_67);
  {
    ATerm h_2 (ATerm t)
    {
      t = end_scope_1(t, k_67);
      return(t);
    }
    t = restore_always_2(t, l_67, h_2);
  }
  return(t);
}
ATerm inline_sdef_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = term_e_14;
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UndefineSDef_0(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = repeat_1(t, InlineCall_0);
      }
    t = _all(t, inline_sdef_0);
    return(t);
  }
  t = scope_2(t, i_2, j_2);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  g_29 :
  if(match_cons(m_29, sym__2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      {
        ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
        ATerm x_15;
        x_15 = t;
        {
          ATerm w_29 = NULL;
          ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
          t = m_67(t);
          {
            w_29 = t;
            {
              if(((t_29 != NULL) && (t_29 != w_29)))
                _fail(w_29);
              else
                t_29 = w_29;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_29), not_null(n_29), not_null(o_29));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), term_p_15);
                        t = table_get_0(t);
                        LocalPopChoice(a_16);
                      }
                    else
                      {
                        t = z_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_29 = t;
                      f_29 :
                      if(((ATgetType(x_29) == AT_LIST) && ((ATermList) x_29 != ATempty)))
                        {
                          y_29 = ATgetFirst((ATermList) x_29);
                          z_29 = (ATerm) ATgetNext((ATermList) x_29);
                          {
                            if(((u_29 != NULL) && (u_29 != y_29)))
                              _fail(y_29);
                            else
                              u_29 = y_29;
                            {
                              if(((v_29 != NULL) && (v_29 != z_29)))
                                _fail(z_29);
                              else
                                v_29 = z_29;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_29), term_p_15, (ATerm) ATinsert(CheckATermList(not_null(v_29)), (ATerm) ATinsert(CheckATermList(not_null(u_29)), not_null(n_29))));
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
        t = x_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AddSDef_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym_SDef_3))
    {
      h_30 = ATgetArgument(g_30, 0);
      i_30 = ATgetArgument(g_30, 1);
      j_30 = ATgetArgument(g_30, 2);
      {
        ATerm c_16;
        c_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_30)), (ATerm) ATmakeAppl(sym_Defined_3, term_d_16, not_null(g_30), not_null(h_30)));
          {
            ATerm k_2 (ATerm t)
            {
              t = term_e_14;
              return(t);
            }
            t = assert_1(t, k_2);
          }
        }
        t = c_16;
        {
          ATerm e_16;
          e_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(h_30)), (ATerm) ATmakeAppl(sym_Defined_3, term_g_16, not_null(g_30), not_null(h_30)));
            {
              ATerm l_2 (ATerm t)
              {
                t = term_e_14;
                return(t);
              }
              t = assert_1(t, l_2);
            }
          }
          t = e_16;
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      {
        ATerm k_16;
        k_16 = t;
        {
          ATerm l_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_30), not_null(r_30));
              LocalPopChoice(n_16);
            }
          else
            {
              t = l_16;
              t = SSL_gtr(not_null(q_30), not_null(r_30));
            }
        }
        t = k_16;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm o_16 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = o_16;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,l_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym__2))
    {
      h_31 = ATgetArgument(g_31, 0);
      l_31 = ATgetArgument(g_31, 1);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_31), not_null(l_31));
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = SSL_addr(not_null(h_31), not_null(l_31));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm x_73 (ATerm))
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_73(t);
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
        m_32 = t;
        l_32 :
        if(((ATgetType(m_32) == AT_LIST) && ((ATermList) m_32 != ATempty)))
          {
            n_32 = ATgetFirst((ATermList) m_32);
            o_32 = (ATerm) ATgetNext((ATermList) m_32);
            {
              ATerm r_32 = NULL,t_32 = NULL;
              ATerm x_16;
              x_16 = t;
              {
                ATerm s_32 = NULL;
                t = not_null(n_32);
                {
                  t = x_73(t);
                  {
                    s_32 = t;
                    if(((r_32 != NULL) && (r_32 != s_32)))
                      _fail(s_32);
                    else
                      r_32 = s_32;
                  }
                }
              }
              t = x_16;
              {
                ATerm u_32 = NULL;
                t = not_null(o_32);
                {
                  t = foldr_3(t, v_73, w_73, x_73);
                  {
                    u_32 = t;
                    if(((t_32 != NULL) && (t_32 != u_32)))
                      _fail(u_32);
                    else
                      t_32 = u_32;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_32), not_null(t_32));
                  t = w_73(t);
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
ATerm crush_3 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  ATerm e_33 = NULL;
  ATerm g_33 = NULL;
  e_33 = t;
  {
    ATerm h_33 = NULL;
    ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
    t = not_null(e_33);
    {
      h_33 = t;
      {
        t = SSL_explode_term(not_null(h_33));
        {
          j_33 = t;
          d_33 :
          if(match_cons(j_33, sym__2))
            {
              k_33 = ATgetArgument(j_33, 0);
              l_33 = ATgetArgument(j_33, 1);
              if(((g_33 != NULL) && (g_33 != l_33)))
                _fail(l_33);
              else
                g_33 = l_33;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(g_33);
      t = foldr_3(t, i_75, j_75, k_75);
    }
  }
  return(t);
}
ATerm term_size_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = term_i_17;
          return(t);
        }
        t = crush_3(t, m_2, add_0, p_33);
        return(t);
      }
      t = p_33(t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_i_17;
          return(t);
        }
        t = crush_3(t, n_2, add_0, term_size_0);
      }
    }
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  t_33 :
  if(match_cons(u_33, sym_LChoice_2))
    {
      v_33 = ATgetArgument(u_33, 0);
      w_33 = ATgetArgument(u_33, 1);
      {
        ATerm z_33 = NULL;
        t = not_null(v_33);
        {
          ATerm d_34 = NULL;
          t = n_61(t);
          {
            z_33 = t;
            {
              t = not_null(w_33);
              {
                t = o_61(t);
                {
                  d_34 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_33), not_null(d_34));
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
ATerm Choice_2 (ATerm t, ATerm l_61 (ATerm), ATerm m_61 (ATerm))
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  l_34 :
  if(match_cons(m_34, sym_Choice_2))
    {
      n_34 = ATgetArgument(m_34, 0);
      o_34 = ATgetArgument(m_34, 1);
      {
        ATerm r_34 = NULL;
        t = not_null(n_34);
        {
          ATerm t_34 = NULL;
          t = l_61(t);
          {
            r_34 = t;
            {
              t = not_null(o_34);
              {
                t = m_61(t);
                {
                  t_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_34), not_null(t_34));
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
ATerm Cong_2 (ATerm t, ATerm q_62 (ATerm), ATerm r_62 (ATerm))
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym_Cong_2))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      {
        ATerm h_35 = NULL;
        t = not_null(d_35);
        {
          ATerm l_35 = NULL;
          t = q_62(t);
          {
            h_35 = t;
            {
              t = not_null(e_35);
              {
                t = r_62(t);
                {
                  l_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(h_35), not_null(l_35));
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
ATerm Match_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm t_35 = NULL,u_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym_Match_1))
    {
      u_35 = ATgetArgument(t_35, 0);
      {
        ATerm w_35 = NULL;
        t = not_null(u_35);
        {
          t = y_62(t);
          {
            w_35 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(w_35));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Seq_2))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      {
        ATerm j_36 = NULL;
        t = not_null(f_36);
        {
          ATerm l_36 = NULL;
          t = j_61(t);
          {
            j_36 = t;
            {
              t = not_null(g_36);
              {
                t = k_61(t);
                {
                  l_36 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_36), not_null(l_36));
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
ATerm Scope_2 (ATerm t, ATerm c_63 (ATerm), ATerm d_63 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym_Scope_2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      {
        ATerm z_36 = NULL;
        t = not_null(v_36);
        {
          ATerm b_37 = NULL;
          t = c_63(t);
          {
            z_36 = t;
            {
              t = not_null(w_36);
              {
                t = d_63(t);
                {
                  b_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_36), not_null(b_37));
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
ATerm Build_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm j_37 = NULL,k_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Build_1))
    {
      k_37 = ATgetArgument(j_37, 0);
      {
        ATerm m_37 = NULL;
        t = not_null(k_37);
        {
          t = z_62(t);
          {
            m_37 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_37));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm t_37 = NULL,u_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym_SVar_1))
    {
      u_37 = ATgetArgument(t_37, 0);
      {
        ATerm w_37 = NULL;
        t = not_null(u_37);
        {
          t = x_61(t);
          {
            w_37 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(w_37));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm m_62 (ATerm), ATerm n_62 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym_Call_2))
    {
      f_38 = ATgetArgument(e_38, 0);
      g_38 = ATgetArgument(e_38, 1);
      {
        ATerm j_38 = NULL;
        t = not_null(f_38);
        {
          ATerm l_38 = NULL;
          t = m_62(t);
          {
            j_38 = t;
            {
              t = not_null(g_38);
              {
                t = n_62(t);
                {
                  l_38 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(j_38), not_null(l_38));
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
  ATerm r_38 = NULL;
  r_38 = t;
  q_38 :
  if(!(match_cons(r_38, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  s_38 :
  if(!(match_cons(t_38, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm body_to_inline_0 (ATerm t)
{
  ATerm u_38 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Id_0(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Fail_0(t);
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              {
                ATerm n_17 = t;
                int o_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_2 (ATerm t)
                    {
                      t = SVar_1(t, _id);
                      return(t);
                    }
                    t = Call_2(t, o_2, _id);
                    LocalPopChoice(o_17);
                  }
                else
                  {
                    t = n_17;
                    {
                      ATerm s_17 = t;
                      int u_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Build_1(t, _id);
                          LocalPopChoice(u_17);
                        }
                      else
                        {
                          t = s_17;
                          {
                            ATerm v_17 = t;
                            int w_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Match_1(t, _id);
                                LocalPopChoice(w_17);
                              }
                            else
                              {
                                t = v_17;
                                {
                                  ATerm x_17 = t;
                                  int y_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm p_2 (ATerm t)
                                      {
                                        t = Match_1(t, _id);
                                        return(t);
                                      }
                                      t = Seq_2(t, p_2, _id);
                                      LocalPopChoice(y_17);
                                    }
                                  else
                                    {
                                      t = x_17;
                                      {
                                        ATerm z_17 = t;
                                        int f_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm q_2 (ATerm t)
                                            {
                                              t = Match_1(t, _id);
                                              return(t);
                                            }
                                            t = Scope_2(t, _id, q_2);
                                            LocalPopChoice(f_18);
                                          }
                                        else
                                          {
                                            t = z_17;
                                            {
                                              ATerm g_18 = t;
                                              int h_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_2 (ATerm t)
                                                  {
                                                    ATerm s_2 (ATerm t)
                                                    {
                                                      t = Match_1(t, _id);
                                                      return(t);
                                                    }
                                                    t = Seq_2(t, s_2, _id);
                                                    return(t);
                                                  }
                                                  t = Scope_2(t, _id, r_2);
                                                  LocalPopChoice(h_18);
                                                }
                                              else
                                                {
                                                  t = g_18;
                                                  {
                                                    ATerm j_18 = t;
                                                    int l_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm t_2 (ATerm t)
                                                        {
                                                          ATerm u_2 (ATerm t)
                                                          {
                                                            ATerm v_2 (ATerm t)
                                                            {
                                                              t = Match_1(t, _id);
                                                              return(t);
                                                            }
                                                            t = Seq_2(t, v_2, _id);
                                                            return(t);
                                                          }
                                                          t = Scope_2(t, _id, u_2);
                                                          return(t);
                                                        }
                                                        t = Seq_2(t, t_2, _id);
                                                        LocalPopChoice(l_18);
                                                      }
                                                    else
                                                      {
                                                        t = j_18;
                                                        {
                                                          ATerm m_18 = t;
                                                          int n_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Cong_2(t, _id, _id);
                                                              LocalPopChoice(n_18);
                                                            }
                                                          else
                                                            {
                                                              t = m_18;
                                                              {
                                                                ATerm o_18 = t;
                                                                int p_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2(t, u_38, u_38);
                                                                    LocalPopChoice(p_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = o_18;
                                                                    t = LChoice_2(t, u_38, u_38);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = u_38(t);
  {
    ATerm q_18;
    q_18 = t;
    {
      ATerm w_2 (ATerm t)
      {
        t = term_r_18;
        return(t);
      }
      t = split_2(t, term_size_0, w_2);
      t = leq_0(t);
    }
    t = q_18;
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm r_83 (ATerm))
{
  ATerm v_38 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_83(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = _one(t, v_38);
      }
    return(t);
  }
  t = v_38(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm))
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym_SDef_3))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      i_39 = ATgetArgument(f_39, 2);
      {
        ATerm m_39 = NULL;
        t = not_null(g_39);
        {
          ATerm o_39 = NULL;
          t = c_62(t);
          {
            m_39 = t;
            {
              t = not_null(h_39);
              {
                ATerm s_39 = NULL;
                t = d_62(t);
                {
                  o_39 = t;
                  {
                    t = not_null(i_39);
                    {
                      t = e_62(t);
                      {
                        s_39 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_39), not_null(o_39), not_null(s_39));
                      }
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
  ATerm p_40 = NULL;
  ATerm x_2 (ATerm t)
  {
    ATerm r_40 = NULL;
    ATerm u_18 = t;
    if((PushChoice() == 0))
      {
        ATerm q_40 = NULL;
        q_40 = t;
        y_39 :
        if(!(match_string(q_40, "main_0")))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      t = u_18;
    {
      r_40 = t;
      if(((p_40 != NULL) && (p_40 != r_40)))
        _fail(r_40);
      else
        p_40 = r_40;
    }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm z_18;
    z_18 = t;
    {
      ATerm a_19 = t;
      if((PushChoice() == 0))
        {
          ATerm z_2 (ATerm t)
          {
            ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
            s_40 = t;
            g_40 :
            if(match_cons(s_40, sym_Call_2))
              {
                t_40 = ATgetArgument(s_40, 0);
                v_40 = ATgetArgument(s_40, 1);
                n_40 :
                if(match_cons(t_40, sym_SVar_1))
                  {
                    u_40 = ATgetArgument(t_40, 0);
                    o_40 :
                    if(((ATermList) v_40 == ATempty))
                      {
                        if(((p_40 != NULL) && (p_40 != u_40)))
                          _fail(u_40);
                        else
                          p_40 = u_40;
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
          t = oncetd_1(t, z_2);
          PopChoice();
          _fail(t);
        }
      else
        t = a_19;
    }
    t = z_18;
    t = body_to_inline_0(t);
    return(t);
  }
  t = SDef_3(t, x_2, _id, y_2);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  z_40 :
  if(match_cons(a_41, sym__2))
    {
      b_41 = ATgetArgument(a_41, 0);
      c_41 = ATgetArgument(a_41, 1);
      {
        t = not_null(b_41);
        {
          ATerm a_3 (ATerm t)
          {
            t = not_null(c_41);
            return(t);
          }
          t = at_end_1(t, a_3);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym__2))
    {
      l_41 = ATgetArgument(k_41, 0);
      m_41 = ATgetArgument(k_41, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(l_41));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,d_42 = NULL,e_42 = NULL;
  u_41 = t;
  r_41 :
  if(match_cons(u_41, sym__2))
    {
      v_41 = ATgetArgument(u_41, 0);
      y_41 = ATgetArgument(u_41, 1);
      s_41 :
      if(((ATgetType(v_41) == AT_LIST) && ((ATermList) v_41 != ATempty)))
        {
          w_41 = ATgetFirst((ATermList) v_41);
          x_41 = (ATerm) ATgetNext((ATermList) v_41);
          t_41 :
          if(((ATgetType(y_41) == AT_LIST) && ((ATermList) y_41 != ATempty)))
            {
              d_42 = ATgetFirst((ATermList) y_41);
              e_42 = (ATerm) ATgetNext((ATermList) y_41);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_41), not_null(d_42)), (ATerm) ATmakeAppl(sym__2, not_null(x_41), not_null(e_42)));
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
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
  q_42 = t;
  l_42 :
  if(match_cons(q_42, sym__2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      m_42 :
      if(((ATermList) r_42 == ATempty))
        {
          n_42 :
          if(((ATermList) s_42 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm))
{
  ATerm y_42 (ATerm t)
  {
    ATerm e_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_79(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = e_19;
        {
          t = g_79(t);
          {
            t = _2(t, i_79, y_42);
            t = h_79(t);
          }
        }
      }
    return(t);
  }
  t = y_42(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm k_79 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, k_79);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm TransformingCongruence_0 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym_Cong_2))
    {
      p_43 = ATgetArgument(o_43, 0);
      q_43 = ATgetArgument(o_43, 1);
      {
        ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_44 = NULL;
        ATerm n_19;
        n_19 = t;
        {
          ATerm y_43 = NULL;
          t = not_null(q_43);
          {
            ATerm b_44 = NULL;
            t = map_1(t, new_0);
            {
              y_43 = t;
              {
                if(((v_43 != NULL) && (v_43 != y_43)))
                  _fail(y_43);
                else
                  v_43 = y_43;
                {
                  t = not_null(v_43);
                  {
                    ATerm c_44 = NULL;
                    ATerm f_3 (ATerm t)
                    {
                      ATerm z_43 = NULL;
                      ATerm a_44 = NULL;
                      a_44 = t;
                      if(((z_43 != NULL) && (z_43 != a_44)))
                        _fail(a_44);
                      else
                        z_43 = a_44;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_43));
                      return(t);
                    }
                    t = map_1(t, f_3);
                    {
                      b_44 = t;
                      {
                        if(((t_43 != NULL) && (t_43 != b_44)))
                          _fail(b_44);
                        else
                          t_43 = b_44;
                        {
                          t = not_null(q_43);
                          {
                            ATerm j_44 = NULL;
                            t = map_1(t, new_0);
                            {
                              c_44 = t;
                              {
                                if(((w_43 != NULL) && (w_43 != c_44)))
                                  _fail(c_44);
                                else
                                  w_43 = c_44;
                                {
                                  t = not_null(w_43);
                                  {
                                    ATerm k_44 = NULL,x_44 = NULL;
                                    ATerm g_3 (ATerm t)
                                    {
                                      ATerm d_44 = NULL;
                                      ATerm i_44 = NULL;
                                      i_44 = t;
                                      if(((d_44 != NULL) && (d_44 != i_44)))
                                        _fail(i_44);
                                      else
                                        d_44 = i_44;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_44));
                                      return(t);
                                    }
                                    t = map_1(t, g_3);
                                    {
                                      j_44 = t;
                                      {
                                        if(((u_43 != NULL) && (u_43 != j_44)))
                                          _fail(j_44);
                                        else
                                          u_43 = j_44;
                                        {
                                          ATerm l_44 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_43), not_null(w_43));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              l_44 = t;
                                              if(((k_44 != NULL) && (k_44 != l_44)))
                                                _fail(l_44);
                                              else
                                                k_44 = l_44;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_44), not_null(q_43));
                                            {
                                              ATerm h_3 (ATerm t)
                                              {
                                                ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
                                                m_44 = t;
                                                j_43 :
                                                if(match_cons(m_44, sym__2))
                                                  {
                                                    n_44 = ATgetArgument(m_44, 0);
                                                    q_44 = ATgetArgument(m_44, 1);
                                                    k_43 :
                                                    if(match_cons(n_44, sym__2))
                                                      {
                                                        o_44 = ATgetArgument(n_44, 0);
                                                        p_44 = ATgetArgument(n_44, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_44))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_44), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_44)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, h_3);
                                              {
                                                x_44 = t;
                                                if(((x_43 != NULL) && (x_43 != x_44)))
                                                  _fail(x_44);
                                                else
                                                  x_43 = x_44;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = n_19;
        {
          ATerm z_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_43), not_null(w_43));
          {
            t = conc_0(t);
            {
              z_44 = t;
              if(((y_44 != NULL) && (y_44 != z_44)))
                _fail(z_44);
              else
                y_44 = z_44;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_44), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(p_43), not_null(t_43))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(x_43)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(p_43), not_null(u_43))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym_Cong_2))
    {
      c_46 = ATgetArgument(b_46, 0);
      d_46 = ATgetArgument(b_46, 1);
      {
        ATerm g_46 = NULL;
        ATerm k_46 = NULL;
        t = not_null(d_46);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm h_46 = NULL,i_46 = NULL;
            i_46 = t;
            y_45 :
            if(match_cons(i_46, sym_Match_1))
              {
                h_46 = ATgetArgument(i_46, 0);
                t = not_null(h_46);
              }
            else
              {
                if(match_cons(i_46, sym_Id_0))
                  t = term_o_19;
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, i_3);
          {
            k_46 = t;
            if(((g_46 != NULL) && (g_46 != k_46)))
              _fail(k_46);
            else
              g_46 = k_46;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(c_46), not_null(g_46)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  q_46 :
  if(match_cons(s_46, sym_Scope_2))
    {
      t_46 = ATgetArgument(s_46, 0);
      u_46 = ATgetArgument(s_46, 1);
      r_46 :
      if(((ATermList) t_46 == ATempty))
        {
          t = not_null(u_46);
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
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  d_47 :
  if(match_cons(q_47, sym_Where_1))
    {
      r_47 = ATgetArgument(q_47, 0);
      e_47 :
      if(match_cons(r_47, sym_Seq_2))
        {
          p_47 = ATgetArgument(r_47, 0);
          l_47 = ATgetArgument(r_47, 1);
          f_47 :
          if(match_cons(p_47, sym_Where_1))
            {
              k_47 = ATgetArgument(p_47, 0);
              g_47 :
              if(match_cons(l_47, sym_Seq_2))
                {
                  m_47 = ATgetArgument(l_47, 0);
                  o_47 = ATgetArgument(l_47, 1);
                  h_47 :
                  if(match_cons(m_47, sym_Build_1))
                    {
                      n_47 = ATgetArgument(m_47, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_47)), not_null(o_47))));
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
          if(match_cons(r_47, sym_Where_1))
            {
              p_47 = ATgetArgument(r_47, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(p_47));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(q_47, sym_Test_1))
        {
          r_47 = ATgetArgument(q_47, 0);
          i_47 :
          if(match_cons(r_47, sym_Test_1))
            {
              p_47 = ATgetArgument(r_47, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_47));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(q_47, sym_Not_1))
            {
              r_47 = ATgetArgument(q_47, 0);
              j_47 :
              if(match_cons(r_47, sym_Not_1))
                {
                  p_47 = ATgetArgument(r_47, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(p_47));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(q_47, sym_LChoice_2))
                {
                  r_47 = ATgetArgument(q_47, 0);
                  s_47 = ATgetArgument(q_47, 1);
                  {
                    if(((r_47 != NULL) && (r_47 != s_47)))
                      _fail(s_47);
                    else
                      r_47 = s_47;
                    t = not_null(r_47);
                  }
                }
              else
                {
                  if(match_cons(q_47, sym_Choice_2))
                    {
                      r_47 = ATgetArgument(q_47, 0);
                      s_47 = ATgetArgument(q_47, 1);
                      {
                        if(((r_47 != NULL) && (r_47 != s_47)))
                          _fail(s_47);
                        else
                          r_47 = s_47;
                        t = not_null(r_47);
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
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  o_48 = t;
  k_48 :
  if(match_cons(o_48, sym_LChoice_2))
    {
      p_48 = ATgetArgument(o_48, 0);
      s_48 = ATgetArgument(o_48, 1);
      l_48 :
      if(match_cons(p_48, sym_LChoice_2))
        {
          q_48 = ATgetArgument(p_48, 0);
          r_48 = ATgetArgument(p_48, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_48), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_48), not_null(s_48)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(o_48, sym_Seq_2))
        {
          p_48 = ATgetArgument(o_48, 0);
          s_48 = ATgetArgument(o_48, 1);
          m_48 :
          if(match_cons(p_48, sym_Seq_2))
            {
              q_48 = ATgetArgument(p_48, 0);
              r_48 = ATgetArgument(p_48, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_48), not_null(s_48)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(o_48, sym_Choice_2))
            {
              p_48 = ATgetArgument(o_48, 0);
              s_48 = ATgetArgument(o_48, 1);
              n_48 :
              if(match_cons(p_48, sym_Choice_2))
                {
                  q_48 = ATgetArgument(p_48, 0);
                  r_48 = ATgetArgument(p_48, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_48), (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_48), not_null(s_48)));
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
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  e_52 = t;
  w_51 :
  if(match_cons(e_52, sym_InfixApp_3))
    {
      f_52 = ATgetArgument(e_52, 0);
      b_52 = ATgetArgument(e_52, 1);
      a_52 = ATgetArgument(e_52, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(b_52), (ATerm) ATmakeAppl(sym_Op_2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_52)), not_null(f_52))));
    }
  else
    {
      if(match_cons(e_52, sym_BAM_3))
        {
          f_52 = ATgetArgument(e_52, 0);
          b_52 = ATgetArgument(e_52, 1);
          a_52 = ATgetArgument(e_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(a_52))), not_null(f_52)), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_52))));
        }
      else
        {
          if(match_cons(e_52, sym_AM_2))
            {
              f_52 = ATgetArgument(e_52, 0);
              b_52 = ATgetArgument(e_52, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_52), (ATerm) ATmakeAppl(sym_Match_1, not_null(b_52)));
            }
          else
            {
              if(match_cons(e_52, sym_MA_2))
                {
                  f_52 = ATgetArgument(e_52, 0);
                  b_52 = ATgetArgument(e_52, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_52)), not_null(b_52));
                }
              else
                {
                  if(match_cons(e_52, sym_BA_2))
                    {
                      f_52 = ATgetArgument(e_52, 0);
                      b_52 = ATgetArgument(e_52, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_52)), not_null(f_52));
                    }
                  else
                    {
                      if(match_cons(e_52, sym_Lets_2))
                        {
                          f_52 = ATgetArgument(e_52, 0);
                          b_52 = ATgetArgument(e_52, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(f_52), not_null(b_52));
                        }
                      else
                        {
                          if(match_cons(e_52, sym_LChoices_1))
                            {
                              f_52 = ATgetArgument(e_52, 0);
                              x_51 :
                              if(((ATgetType(f_52) == AT_LIST) && ((ATermList) f_52 != ATempty)))
                                {
                                  c_52 = ATgetFirst((ATermList) f_52);
                                  d_52 = (ATerm) ATgetNext((ATermList) f_52);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(c_52), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(d_52)));
                                }
                              else
                                {
                                  if(((ATermList) f_52 == ATempty))
                                    {
                                      t = term_q_19;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(e_52, sym_Choices_1))
                                {
                                  f_52 = ATgetArgument(e_52, 0);
                                  y_51 :
                                  if(((ATgetType(f_52) == AT_LIST) && ((ATermList) f_52 != ATempty)))
                                    {
                                      c_52 = ATgetFirst((ATermList) f_52);
                                      d_52 = (ATerm) ATgetNext((ATermList) f_52);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Choices_1, not_null(d_52)));
                                    }
                                  else
                                    {
                                      if(((ATermList) f_52 == ATempty))
                                        {
                                          t = term_q_19;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(e_52, sym_Seqs_1))
                                    {
                                      f_52 = ATgetArgument(e_52, 0);
                                      z_51 :
                                      if(((ATgetType(f_52) == AT_LIST) && ((ATermList) f_52 != ATempty)))
                                        {
                                          c_52 = ATgetFirst((ATermList) f_52);
                                          d_52 = (ATerm) ATgetNext((ATermList) f_52);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_52), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(d_52)));
                                        }
                                      else
                                        {
                                          if(((ATermList) f_52 == ATempty))
                                            {
                                              t = term_r_19;
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
  ATerm p_53 = NULL,q_53 = NULL;
  p_53 = t;
  n_53 :
  if(match_cons(p_53, sym_Where_1))
    {
      q_53 = ATgetArgument(p_53, 0);
      o_53 :
      if(match_cons(q_53, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F14_0 (ATerm t)
{
  ATerm v_53 = NULL,y_53 = NULL,z_53 = NULL;
  v_53 = t;
  t_53 :
  if(match_cons(v_53, sym_LChoice_2))
    {
      y_53 = ATgetArgument(v_53, 0);
      z_53 = ATgetArgument(v_53, 1);
      u_53 :
      if(match_cons(z_53, sym_Fail_0))
        t = not_null(y_53);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  d_54 :
  if(match_cons(f_54, sym_LChoice_2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      e_54 :
      if(match_cons(g_54, sym_Fail_0))
        t = not_null(h_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  l_54 :
  if(match_cons(n_54, sym_Choice_2))
    {
      o_54 = ATgetArgument(n_54, 0);
      p_54 = ATgetArgument(n_54, 1);
      m_54 :
      if(match_cons(p_54, sym_Fail_0))
        t = not_null(o_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL;
  v_54 = t;
  t_54 :
  if(match_cons(v_54, sym_Choice_2))
    {
      w_54 = ATgetArgument(v_54, 0);
      x_54 = ATgetArgument(v_54, 1);
      u_54 :
      if(match_cons(w_54, sym_Fail_0))
        t = not_null(x_54);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym_Cong_2))
    {
      e_55 = ATgetArgument(d_55, 0);
      f_55 = ATgetArgument(d_55, 1);
      {
        t = not_null(f_55);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm i_55 = NULL;
            i_55 = t;
            b_55 :
            if(!(match_cons(i_55, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, j_3);
        }
        t = term_q_19;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm F9_0 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
  n_55 = t;
  l_55 :
  if(match_cons(n_55, sym_Path_2))
    {
      o_55 = ATgetArgument(n_55, 0);
      p_55 = ATgetArgument(n_55, 1);
      m_55 :
      if(match_cons(p_55, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F8_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  v_55 = t;
  t_55 :
  if(match_cons(v_55, sym_One_1))
    {
      w_55 = ATgetArgument(v_55, 0);
      u_55 :
      if(match_cons(w_55, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F7_0 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  b_56 = t;
  z_55 :
  if(match_cons(b_56, sym_Some_1))
    {
      c_56 = ATgetArgument(b_56, 0);
      a_56 :
      if(match_cons(c_56, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F6_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL;
  h_56 = t;
  f_56 :
  if(match_cons(h_56, sym_Rec_2))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      g_56 :
      if(match_cons(j_56, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F5_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  n_56 :
  if(match_cons(p_56, sym_Scope_2))
    {
      q_56 = ATgetArgument(p_56, 0);
      r_56 = ATgetArgument(p_56, 1);
      o_56 :
      if(match_cons(r_56, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F3_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  v_56 :
  if(match_cons(x_56, sym_Seq_2))
    {
      y_56 = ATgetArgument(x_56, 0);
      z_56 = ATgetArgument(x_56, 1);
      w_56 :
      if(match_cons(y_56, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F2_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  f_57 = t;
  d_57 :
  if(match_cons(f_57, sym_Not_1))
    {
      g_57 = ATgetArgument(f_57, 0);
      e_57 :
      if(match_cons(g_57, sym_Fail_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F1_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  l_57 = t;
  j_57 :
  if(match_cons(l_57, sym_Test_1))
    {
      m_57 = ATgetArgument(l_57, 0);
      k_57 :
      if(match_cons(m_57, sym_Fail_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimFail_0 (ATerm t)
{
  ATerm s_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      LocalPopChoice(a_20);
    }
  else
    {
      t = s_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm d_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = d_20;
                  {
                    ATerm q_20 = t;
                    int r_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        LocalPopChoice(r_20);
                      }
                    else
                      {
                        t = q_20;
                        {
                          ATerm s_20 = t;
                          int x_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              LocalPopChoice(x_20);
                            }
                          else
                            {
                              t = s_20;
                              {
                                ATerm y_20 = t;
                                int z_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    LocalPopChoice(z_20);
                                  }
                                else
                                  {
                                    t = y_20;
                                    {
                                      ATerm a_21 = t;
                                      int b_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          LocalPopChoice(b_21);
                                        }
                                      else
                                        {
                                          t = a_21;
                                          {
                                            ATerm g_21 = t;
                                            int h_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                LocalPopChoice(h_21);
                                              }
                                            else
                                              {
                                                t = g_21;
                                                {
                                                  ATerm j_21 = t;
                                                  int k_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      LocalPopChoice(k_21);
                                                    }
                                                  else
                                                    {
                                                      t = j_21;
                                                      {
                                                        ATerm l_21 = t;
                                                        int n_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            LocalPopChoice(n_21);
                                                          }
                                                        else
                                                          {
                                                            t = l_21;
                                                            {
                                                              ATerm p_21 = t;
                                                              int q_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  LocalPopChoice(q_21);
                                                                }
                                                              else
                                                                {
                                                                  t = p_21;
                                                                  {
                                                                    ATerm u_21 = t;
                                                                    int v_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        LocalPopChoice(v_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_21;
                                                                        {
                                                                          ATerm w_21 = t;
                                                                          int x_21 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              LocalPopChoice(x_21);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_21;
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
  ATerm r_57 = NULL,s_57 = NULL;
  r_57 = t;
  p_57 :
  if(match_cons(r_57, sym_Match_1))
    {
      s_57 = ATgetArgument(r_57, 0);
      q_57 :
      if(match_cons(s_57, sym_Wld_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I12_0 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL;
  x_57 = t;
  v_57 :
  if(match_cons(x_57, sym_Where_1))
    {
      y_57 = ATgetArgument(x_57, 0);
      w_57 :
      if(match_cons(y_57, sym_Id_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I10_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL;
  d_58 = t;
  b_58 :
  if(match_cons(d_58, sym_All_1))
    {
      e_58 = ATgetArgument(d_58, 0);
      c_58 :
      if(match_cons(e_58, sym_Id_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I9_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
  j_58 = t;
  h_58 :
  if(match_cons(j_58, sym_Rec_2))
    {
      k_58 = ATgetArgument(j_58, 0);
      l_58 = ATgetArgument(j_58, 1);
      i_58 :
      if(match_cons(l_58, sym_Id_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I8_0 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  p_58 :
  if(match_cons(r_58, sym_Scope_2))
    {
      s_58 = ATgetArgument(r_58, 0);
      t_58 = ATgetArgument(r_58, 1);
      q_58 :
      if(match_cons(t_58, sym_Id_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I7_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
  z_58 = t;
  x_58 :
  if(match_cons(z_58, sym_LChoice_2))
    {
      a_59 = ATgetArgument(z_58, 0);
      b_59 = ATgetArgument(z_58, 1);
      y_58 :
      if(match_cons(a_59, sym_Id_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I4_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  f_59 :
  if(match_cons(h_59, sym_Seq_2))
    {
      i_59 = ATgetArgument(h_59, 0);
      j_59 = ATgetArgument(h_59, 1);
      g_59 :
      if(match_cons(j_59, sym_Id_0))
        t = not_null(i_59);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
  p_59 = t;
  n_59 :
  if(match_cons(p_59, sym_Seq_2))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      o_59 :
      if(match_cons(q_59, sym_Id_0))
        t = not_null(r_59);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  x_59 = t;
  v_59 :
  if(match_cons(x_59, sym_Not_1))
    {
      y_59 = ATgetArgument(x_59, 0);
      w_59 :
      if(match_cons(y_59, sym_Id_0))
        t = term_q_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I1_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL;
  d_60 = t;
  b_60 :
  if(match_cons(d_60, sym_Test_1))
    {
      e_60 = ATgetArgument(d_60, 0);
      c_60 :
      if(match_cons(e_60, sym_Id_0))
        t = term_r_19;
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm ElimId_0 (ATerm t)
{
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
            {
              ATerm d_22 = t;
              int i_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  LocalPopChoice(i_22);
                }
              else
                {
                  t = d_22;
                  {
                    ATerm k_22 = t;
                    int l_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
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
                              t = I7_0(t);
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
                                    t = I8_0(t);
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
                                          t = I9_0(t);
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
                                                t = I10_0(t);
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
                                                      t = I12_0(t);
                                                      LocalPopChoice(v_22);
                                                    }
                                                  else
                                                    {
                                                      t = u_22;
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
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm a_23 = t;
              int b_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                  {
                    ATerm c_23 = t;
                    int d_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        LocalPopChoice(d_23);
                      }
                    else
                      {
                        t = c_23;
                        {
                          ATerm e_23 = t;
                          int f_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              LocalPopChoice(f_23);
                            }
                          else
                            {
                              t = e_23;
                              {
                                ATerm g_23 = t;
                                int k_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    LocalPopChoice(k_23);
                                  }
                                else
                                  {
                                    t = g_23;
                                    {
                                      ATerm t_23 = t;
                                      int v_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          LocalPopChoice(v_23);
                                        }
                                      else
                                        {
                                          t = t_23;
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
ATerm repeat_2 (ATerm t, ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  ATerm g_60 (ATerm t)
  {
    ATerm l_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_68(t);
        t = g_60(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = l_24;
        t = s_68(t);
      }
    return(t);
  }
  t = g_60(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_68 (ATerm))
{
  t = repeat_2(t, u_68, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm d_82 (ATerm))
{
  ATerm h_60 (ATerm t)
  {
    t = d_82(t);
    {
      t = _all(t, h_60);
      t = d_82(t);
    }
    return(t);
  }
  t = h_60(t);
  return(t);
}
ATerm simplify0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    t = repeat_1(t, Simplify_0);
    return(t);
  }
  t = downup_1(t, l_3);
  return(t);
}
ATerm inline_sdefs_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    t = simplify0_0(t);
    {
      ATerm p_3 (ATerm t)
      {
        t = inlineable_0(t);
        t = AddSDef_0(t);
        return(t);
      }
      t = try_1(t, p_3);
    }
    return(t);
  }
  t = map_1(t, o_3);
  t = map_1(t, inline_sdef_0);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm l_60 = NULL,m_60 = NULL;
  l_60 = t;
  k_60 :
  if(match_cons(l_60, sym_Strategies_1))
    {
      m_60 = ATgetArgument(l_60, 0);
      {
        ATerm p_60 = NULL;
        t = not_null(m_60);
        {
          t = y_60(t);
          {
            p_60 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_60));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm a_61 (ATerm))
{
  ATerm w_60 = NULL,x_60 = NULL;
  w_60 = t;
  v_60 :
  if(match_cons(w_60, sym_Specification_1))
    {
      x_60 = ATgetArgument(w_60, 0);
      {
        ATerm c_61 = NULL;
        t = not_null(x_60);
        {
          t = a_61(t);
          {
            c_61 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(c_61));
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
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      ATerm a_4 (ATerm t)
      {
        t = Strategies_1(t, inline_sdefs_0);
        return(t);
      }
      t = Cons_2(t, a_4, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, r_3);
    return(t);
  }
  t = Specification_1(t, q_3);
  return(t);
}
ATerm _2 (ATerm t, ATerm t_51 (ATerm), ATerm u_51 (ATerm))
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
  q_61 = t;
  p_61 :
  if(match_cons(q_61, sym__2))
    {
      r_61 = ATgetArgument(q_61, 0);
      s_61 = ATgetArgument(q_61, 1);
      {
        ATerm v_61 = NULL;
        t = not_null(r_61);
        {
          ATerm f_62 = NULL;
          t = t_51(t);
          {
            v_61 = t;
            {
              t = not_null(s_61);
              {
                t = u_51(t);
                {
                  f_62 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_61), not_null(f_62));
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
  ATerm o_62 = NULL;
  ATerm o_24;
  o_24 = t;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm p_62 = NULL,s_62 = NULL;
      p_62 = t;
      l_62 :
      if(match_cons(p_62, sym_Program_1))
        {
          s_62 = ATgetArgument(p_62, 0);
          if(((o_62 != NULL) && (o_62 != s_62)))
            _fail(s_62);
          else
            o_62 = s_62;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, b_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_25), not_null(o_62)), term_d_25));
      {
        t = printnl_0(t);
        {
          t = term_i_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATempty, term_l_25));
  {
    t = printnl_0(t);
    {
      t = term_i_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_63 = NULL,e_63 = NULL;
  ATerm g_4 (ATerm t)
  {
    ATerm h_4 (ATerm t)
    {
      ATerm m_25 = t;
      if((PushChoice() == 0))
        {
          ATerm i_4 (ATerm t)
          {
            ATerm f_63 = NULL;
            f_63 = t;
            u_62 :
            if(!(match_cons(f_63, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_4);
          PopChoice();
          _fail(t);
        }
      else
        t = m_25;
      return(t);
    }
    t = _2(t, h_4, _id);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm t_4 (ATerm t)
        {
          ATerm g_63 = NULL,j_63 = NULL;
          g_63 = t;
          w_62 :
          if(match_cons(g_63, sym_Runtime_1))
            {
              j_63 = ATgetArgument(g_63, 0);
              if(((e_63 != NULL) && (e_63 != j_63)))
                _fail(j_63);
              else
                e_63 = j_63;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, t_4);
        return(t);
      }
      t = _2(t, j_4, _id);
      {
        ATerm y_4 (ATerm t)
        {
          ATerm z_4 (ATerm t)
          {
            ATerm k_63 = NULL,l_63 = NULL;
            k_63 = t;
            a_63 :
            if(match_cons(k_63, sym_Program_1))
              {
                l_63 = ATgetArgument(k_63, 0);
                if(((b_63 != NULL) && (b_63 != l_63)))
                  _fail(l_63);
                else
                  b_63 = l_63;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_4);
          return(t);
        }
        t = _2(t, y_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_25), not_null(e_63)), term_n_25), not_null(b_63)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, g_4);
  {
    t = term_p_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  q_63 = t;
  p_63 :
  if(match_cons(q_63, sym__2))
    {
      r_63 = ATgetArgument(q_63, 0);
      s_63 = ATgetArgument(q_63, 1);
      t = SSL_WriteToTextFile(not_null(r_63), not_null(s_63));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL;
  y_63 = t;
  x_63 :
  if(match_cons(y_63, sym__2))
    {
      z_63 = ATgetArgument(y_63, 0);
      a_64 = ATgetArgument(y_63, 1);
      t = SSL_WriteToBinaryFile(not_null(z_63), not_null(a_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_64 = NULL;
  ATerm q_25;
  q_25 = t;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm r_25 = t;
      int s_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_5 (ATerm t)
          {
            ATerm j_64 = NULL,k_64 = NULL;
            j_64 = t;
            f_64 :
            if(match_cons(j_64, sym_Output_1))
              {
                k_64 = ATgetArgument(j_64, 0);
                if(((i_64 != NULL) && (i_64 != k_64)))
                  _fail(k_64);
                else
                  i_64 = k_64;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_5);
          LocalPopChoice(s_25);
        }
      else
        {
          t = r_25;
          {
            ATerm l_64 = NULL;
            t = term_t_25;
            {
              l_64 = t;
              if(((i_64 != NULL) && (i_64 != l_64)))
                _fail(l_64);
              else
                i_64 = l_64;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_5, _id);
  }
  t = q_25;
  {
    ATerm z_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        t = not_null(i_64);
        return(t);
      }
      t = split_2(t, a_6, _id);
      return(t);
    }
    t = _2(t, _id, z_5);
    {
      ATerm z_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_6 (ATerm t)
          {
            ATerm c_6 (ATerm t)
            {
              ATerm m_64 = NULL;
              m_64 = t;
              h_64 :
              if(!(match_cons(m_64, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, c_6);
            return(t);
          }
          t = _2(t, b_6, WriteToBinaryFile_0);
          LocalPopChoice(a_26);
        }
      else
        {
          t = z_25;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm s_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  ATerm b_26;
  b_26 = t;
  t = dtime_0(t);
  t = b_26;
  {
    t = f_67(t);
    {
      ATerm g_26;
      g_26 = t;
      {
        ATerm t_64 = NULL;
        t = dtime_0(t);
        {
          t_64 = t;
          if(((s_64 != NULL) && (s_64 != t_64)))
            _fail(t_64);
          else
            s_64 = t_64;
        }
      }
      t = g_26;
      {
        u_64 = t;
        r_64 :
        if(match_cons(u_64, sym__2))
          {
            v_64 = ATgetArgument(u_64, 0);
            w_64 = ATgetArgument(u_64, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_64)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(s_64))), not_null(w_64));
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
  ATerm c_65 = NULL;
  c_65 = t;
  t = SSL_ReadFromFile(not_null(c_65));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_80 (ATerm), ATerm t_80 (ATerm))
{
  ATerm h_65 = NULL,j_65 = NULL;
  ATerm h_26;
  h_26 = t;
  {
    ATerm i_65 = NULL;
    t = s_80(t);
    {
      i_65 = t;
      if(((h_65 != NULL) && (h_65 != i_65)))
        _fail(i_65);
      else
        h_65 = i_65;
    }
  }
  t = h_26;
  {
    ATerm q_65 = NULL;
    t = t_80(t);
    {
      q_65 = t;
      if(((j_65 != NULL) && (j_65 != q_65)))
        _fail(q_65);
      else
        j_65 = q_65;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_65), not_null(j_65));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_65 = NULL;
  ATerm i_26;
  i_26 = t;
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_6 (ATerm t)
        {
          ATerm x_65 = NULL,y_65 = NULL;
          x_65 = t;
          u_65 :
          if(match_cons(x_65, sym_Input_1))
            {
              y_65 = ATgetArgument(x_65, 0);
              if(((w_65 != NULL) && (w_65 != y_65)))
                _fail(y_65);
              else
                w_65 = y_65;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, d_6);
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        {
          ATerm z_65 = NULL;
          t = term_p_26;
          {
            z_65 = t;
            if(((w_65 != NULL) && (w_65 != z_65)))
              _fail(z_65);
            else
              w_65 = z_65;
          }
        }
      }
  }
  t = i_26;
  {
    ATerm e_6 (ATerm t)
    {
      t = not_null(w_65);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, e_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_66 = NULL;
  d_66 = t;
  c_66 :
  if(!(match_cons(d_66, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm q_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_26);
      }
    else
      {
        t = q_26;
        {
          ATerm t_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_26);
            }
          else
            {
              t = t_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_6);
  t = e_67(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  t = SSL_table_create(not_null(f_66));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_66 = NULL;
  k_66 = t;
  {
    ATerm v_26;
    v_26 = t;
    {
      t = term_w_26;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_26, term_x_26, not_null(k_66));
          t = table_put_0(t);
        }
      }
    }
    t = v_26;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
  y_66 = t;
  w_66 :
  if(match_string(y_66, "register-usage-info"))
    t = register_usage_1(t, p_0);
  else
    {
      if(((ATgetType(y_66) == AT_LIST) && ((ATermList) y_66 != ATempty)))
        {
          z_66 = ATgetFirst((ATermList) y_66);
          a_67 = (ATerm) ATgetNext((ATermList) y_66);
          x_66 :
          if(((ATgetType(a_67) == AT_LIST) && ((ATermList) a_67 != ATempty)))
            {
              b_67 = ATgetFirst((ATermList) a_67);
              c_67 = (ATerm) ATgetNext((ATermList) a_67);
              {
                ATerm n_67 = NULL;
                ATerm y_26;
                y_26 = t;
                {
                  t = not_null(z_66);
                  t = n_0(t);
                }
                t = y_26;
                {
                  ATerm p_67 = NULL;
                  t = not_null(b_67);
                  {
                    t = o_0(t);
                    {
                      p_67 = t;
                      if(((n_67 != NULL) && (n_67 != p_67)))
                        _fail(p_67);
                      else
                        n_67 = p_67;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_67)), not_null(n_67));
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
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_6 (ATerm t)
      {
        ATerm e_68 = NULL;
        e_68 = t;
        t_67 :
        if(!(match_string(e_68, "-S")))
          {
            if(!(match_string(e_68, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        t = term_c_27;
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        t = term_d_27;
        return(t);
      }
      t = Option_3(t, o_6, p_6, u_6);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm e_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 (ATerm t)
            {
              ATerm f_68 = NULL;
              f_68 = t;
              u_67 :
              if(!(match_string(f_68, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm w_6 (ATerm t)
            {
              t = term_g_27;
              return(t);
            }
            ATerm x_6 (ATerm t)
            {
              t = term_h_27;
              return(t);
            }
            t = Option_3(t, v_6, w_6, x_6);
            LocalPopChoice(f_27);
          }
        else
          {
            t = e_27;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_7 (ATerm t)
                  {
                    ATerm g_68 = NULL;
                    g_68 = t;
                    v_67 :
                    if(!(match_string(g_68, "-v")))
                      {
                        if(!(match_string(g_68, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm j_7 (ATerm t)
                  {
                    t = term_k_27;
                    return(t);
                  }
                  ATerm k_7 (ATerm t)
                  {
                    t = term_l_27;
                    return(t);
                  }
                  t = Option_3(t, a_7, j_7, k_7);
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  {
                    ATerm m_27 = t;
                    int n_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_7 (ATerm t)
                        {
                          ATerm h_68 = NULL;
                          h_68 = t;
                          w_67 :
                          if(!(match_string(h_68, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm r_7 (ATerm t)
                        {
                          ATerm i_68 = NULL;
                          ATerm j_68 = NULL;
                          j_68 = t;
                          if(((i_68 != NULL) && (i_68 != j_68)))
                            _fail(j_68);
                          else
                            i_68 = j_68;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(i_68));
                          return(t);
                        }
                        ATerm s_7 (ATerm t)
                        {
                          t = term_o_27;
                          return(t);
                        }
                        t = ArgOption_3(t, l_7, r_7, s_7);
                        LocalPopChoice(n_27);
                      }
                    else
                      {
                        t = m_27;
                        {
                          ATerm p_27 = t;
                          int q_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_7 (ATerm t)
                              {
                                ATerm k_68 = NULL;
                                k_68 = t;
                                y_67 :
                                if(!(match_string(k_68, "-i")))
                                  {
                                    if(!(match_string(k_68, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm u_7 (ATerm t)
                              {
                                ATerm l_68 = NULL;
                                ATerm m_68 = NULL;
                                m_68 = t;
                                if(((l_68 != NULL) && (l_68 != m_68)))
                                  _fail(m_68);
                                else
                                  l_68 = m_68;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_68));
                                return(t);
                              }
                              ATerm v_7 (ATerm t)
                              {
                                t = term_r_27;
                                return(t);
                              }
                              t = ArgOption_3(t, t_7, u_7, v_7);
                              LocalPopChoice(q_27);
                            }
                          else
                            {
                              t = p_27;
                              {
                                ATerm s_27 = t;
                                int t_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_7 (ATerm t)
                                    {
                                      ATerm n_68 = NULL;
                                      n_68 = t;
                                      a_68 :
                                      if(!(match_string(n_68, "-o")))
                                        {
                                          if(!(match_string(n_68, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm x_7 (ATerm t)
                                    {
                                      ATerm o_68 = NULL;
                                      ATerm p_68 = NULL;
                                      p_68 = t;
                                      if(((o_68 != NULL) && (o_68 != p_68)))
                                        _fail(p_68);
                                      else
                                        o_68 = p_68;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_68));
                                      return(t);
                                    }
                                    ATerm y_7 (ATerm t)
                                    {
                                      t = term_u_27;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, w_7, x_7, y_7);
                                    LocalPopChoice(t_27);
                                  }
                                else
                                  {
                                    t = s_27;
                                    {
                                      ATerm v_27 = t;
                                      int w_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_8 (ATerm t)
                                          {
                                            ATerm q_68 = NULL;
                                            q_68 = t;
                                            c_68 :
                                            if(!(match_string(q_68, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm e_8 (ATerm t)
                                          {
                                            t = term_x_27;
                                            return(t);
                                          }
                                          ATerm g_8 (ATerm t)
                                          {
                                            t = term_y_27;
                                            return(t);
                                          }
                                          t = Option_3(t, d_8, e_8, g_8);
                                          LocalPopChoice(w_27);
                                        }
                                      else
                                        {
                                          t = v_27;
                                          {
                                            ATerm i_8 (ATerm t)
                                            {
                                              ATerm v_68 = NULL;
                                              v_68 = t;
                                              d_68 :
                                              if(!(match_string(v_68, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm j_8 (ATerm t)
                                            {
                                              t = term_i_28;
                                              return(t);
                                            }
                                            ATerm k_8 (ATerm t)
                                            {
                                              t = term_j_28;
                                              return(t);
                                            }
                                            t = Option_3(t, i_8, j_8, k_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm a_69 = NULL;
  a_69 = t;
  t = SSL_table_destroy(not_null(a_69));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_69 = NULL;
  e_69 = t;
  t = SSL_exit(not_null(e_69));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm o_69 = NULL;
  o_69 = t;
  t = SSL_implode_string(not_null(o_69));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm r_69 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_69);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        {
          t = Nil_0(t);
          t = y_77(t);
        }
      }
    return(t);
  }
  t = r_69(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
        u_69 = t;
        t_69 :
        if(((ATgetType(u_69) == AT_LIST) && ((ATermList) u_69 != ATempty)))
          {
            v_69 = ATgetFirst((ATermList) u_69);
            w_69 = (ATerm) ATgetNext((ATermList) u_69);
            {
              t = not_null(v_69);
              {
                ATerm l_8 (ATerm t)
                {
                  t = not_null(w_69);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_8);
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
  ATerm c_70 = NULL;
  c_70 = t;
  t = SSL_explode_string(not_null(c_70));
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
ATerm long_description_1 (ATerm t, ATerm l_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm f_70 (ATerm t)
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = Cons_2(t, k_77, f_70);
      }
    return(t);
  }
  t = f_70(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  o_70 = t;
  l_70 :
  if(((ATgetType(o_70) == AT_LIST) && ((ATermList) o_70 != ATempty)))
    {
      m_70 = ATgetFirst((ATermList) o_70);
      n_70 = (ATerm) ATgetNext((ATermList) o_70);
      {
        ATerm r_70 = NULL;
        t = not_null(n_70);
        {
          ATerm t_28;
          t_28 = t;
          {
            ATerm s_70 = NULL,y_70 = NULL,a_71 = NULL;
            ATerm u_28;
            u_28 = t;
            {
              ATerm x_70 = NULL;
              t = m_0(t);
              {
                x_70 = t;
                if(((s_70 != NULL) && (s_70 != x_70)))
                  _fail(x_70);
                else
                  s_70 = x_70;
              }
            }
            t = u_28;
            {
              ATerm z_70 = NULL;
              t = not_null(m_70);
              {
                t = l_0(t);
                {
                  z_70 = t;
                  if(((y_70 != NULL) && (y_70 != z_70)))
                    _fail(z_70);
                  else
                    y_70 = z_70;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_70)), not_null(y_70));
                {
                  a_71 = t;
                  if(((r_70 != NULL) && (r_70 != a_71)))
                    _fail(a_71);
                  else
                    r_70 = a_71;
                }
              }
            }
          }
          t = t_28;
          {
            ATerm m_8 (ATerm t)
            {
              t = not_null(r_70);
              return(t);
            }
            t = reverse_acc_2(t, l_0, m_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_70 == ATempty))
        {
          {
            t = term_a_10;
            t = m_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, n_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_65 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_53 (ATerm))
{
  ATerm j_71 = NULL,k_71 = NULL;
  j_71 = t;
  i_71 :
  if(match_cons(j_71, sym_Program_1))
    {
      k_71 = ATgetArgument(j_71, 0);
      {
        ATerm m_71 = NULL;
        t = not_null(k_71);
        {
          t = w_53(t);
          {
            m_71 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_71));
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
  ATerm x_71 = NULL;
  ATerm o_8 (ATerm t)
  {
    ATerm t_8 (ATerm t)
    {
      ATerm y_71 = NULL;
      y_71 = t;
      if(((x_71 != NULL) && (x_71 != y_71)))
        _fail(y_71);
      else
        x_71 = y_71;
      return(t);
    }
    t = Program_1(t, t_8);
    return(t);
  }
  t = option_defined_1(t, o_8);
  {
    ATerm u_8 (ATerm t)
    {
      ATerm z_71 = NULL;
      ATerm a_72 = NULL;
      t = term_a_10;
      {
        ATerm w_8 (ATerm t)
        {
          t = not_null(x_71);
          return(t);
        }
        t = short_description_1(t, w_8);
        {
          t = concat_strings_0(t);
          {
            a_72 = t;
            if(((z_71 != NULL) && (z_71 != a_72)))
              _fail(a_72);
            else
              z_71 = a_72;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATempty, not_null(z_71)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, u_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATempty, term_v_28));
      {
        t = printnl_0(t);
        {
          t = term_z_28;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_8 (ATerm t)
                {
                  ATerm b_72 = NULL;
                  b_72 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_72)), term_a_29));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_8);
                {
                  ATerm z_8 (ATerm t)
                  {
                    ATerm d_72 = NULL;
                    ATerm e_72 = NULL;
                    t = term_a_10;
                    {
                      ATerm a_9 (ATerm t)
                      {
                        t = not_null(x_71);
                        return(t);
                      }
                      t = long_description_1(t, a_9);
                      {
                        t = concat_strings_0(t);
                        {
                          e_72 = t;
                          if(((d_72 != NULL) && (d_72 != e_72)))
                            _fail(e_72);
                          else
                            d_72 = e_72;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_72)), term_b_29));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, z_8);
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
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
  o_72 = t;
  l_72 :
  if(match_cons(o_72, sym__2))
    {
      p_72 = ATgetArgument(o_72, 0);
      q_72 = ATgetArgument(o_72, 1);
      {
        ATerm c_29;
        c_29 = t;
        t = SSL_printnl(not_null(p_72), not_null(q_72));
        t = c_29;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm x_53 (ATerm))
{
  ATerm e_73 = NULL,f_73 = NULL;
  e_73 = t;
  d_73 :
  if(match_cons(e_73, sym_Undefined_1))
    {
      f_73 = ATgetArgument(e_73, 0);
      {
        ATerm h_73 = NULL;
        t = not_null(f_73);
        {
          t = x_53(t);
          {
            h_73 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_73));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm l_73 (ATerm t)
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_77, _id);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = Cons_2(t, _id, l_73);
      }
    return(t);
  }
  t = l_73(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_66 (ATerm))
{
  t = fetch_1(t, j_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_73 = NULL;
  n_73 = t;
  m_73 :
  if(!(match_cons(n_73, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_81(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
  q_73 = t;
  p_73 :
  if(match_cons(q_73, sym__2))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      t = SSL_table_get(not_null(r_73), not_null(s_73));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL;
  c_74 = t;
  b_74 :
  if(match_cons(c_74, sym__3))
    {
      d_74 = ATgetArgument(c_74, 0);
      e_74 = ATgetArgument(c_74, 1);
      f_74 = ATgetArgument(c_74, 2);
      {
        ATerm j_29;
        j_29 = t;
        {
          ATerm j_74 = NULL;
          ATerm k_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_74), not_null(e_74));
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = (ATerm) ATempty;
              }
            {
              k_74 = t;
              if(((j_74 != NULL) && (j_74 != k_74)))
                _fail(k_74);
              else
                j_74 = k_74;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_74), not_null(e_74), (ATerm) ATinsert(CheckATermList(not_null(j_74)), not_null(f_74)));
            t = table_put_0(t);
          }
        }
        t = j_29;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm o_74 = NULL;
  ATerm p_74 = NULL;
  t = term_a_10;
  {
    t = p_65(t);
    {
      p_74 = t;
      if(((o_74 != NULL) && (o_74 != p_74)))
        _fail(p_74);
      else
        o_74 = p_74;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_28, term_x_28, not_null(o_74));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm w_74 = NULL,y_74 = NULL,z_74 = NULL;
  w_74 = t;
  v_74 :
  if(match_string(w_74, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(w_74) == AT_LIST) && ((ATermList) w_74 != ATempty)))
        {
          y_74 = ATgetFirst((ATermList) w_74);
          z_74 = (ATerm) ATgetNext((ATermList) w_74);
          {
            ATerm e_75 = NULL;
            ATerm p_29;
            p_29 = t;
            {
              t = not_null(y_74);
              t = c_0(t);
            }
            t = p_29;
            {
              ATerm f_75 = NULL;
              t = term_a_10;
              {
                t = h_0(t);
                {
                  f_75 = t;
                  if(((e_75 != NULL) && (e_75 != f_75)))
                    _fail(f_75);
                  else
                    e_75 = f_75;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_74)), not_null(e_75));
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
  ATerm b_9 (ATerm t)
  {
    ATerm n_75 = NULL;
    n_75 = t;
    m_75 :
    if(!(match_string(n_75, "--help")))
      {
        if(!(match_string(n_75, "-h")))
          {
            if(!(match_string(n_75, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    t = term_q_29;
    return(t);
  }
  ATerm h_9 (ATerm t)
  {
    t = term_r_29;
    return(t);
  }
  t = Option_3(t, b_9, c_9, h_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
  q_75 = t;
  p_75 :
  if(((ATgetType(q_75) == AT_LIST) && ((ATermList) q_75 != ATempty)))
    {
      r_75 = ATgetFirst((ATermList) q_75);
      s_75 = (ATerm) ATgetNext((ATermList) q_75);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_75)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_75)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL;
  a_76 = t;
  z_75 :
  if(((ATgetType(a_76) == AT_LIST) && ((ATermList) a_76 != ATempty)))
    {
      b_76 = ATgetFirst((ATermList) a_76);
      c_76 = (ATerm) ATgetNext((ATermList) a_76);
      {
        ATerm f_76 = NULL;
        t = not_null(b_76);
        {
          ATerm h_76 = NULL;
          t = h_63(t);
          {
            f_76 = t;
            {
              t = not_null(c_76);
              {
                t = i_63(t);
                {
                  h_76 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_76)), not_null(f_76));
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
  ATerm n_76 = NULL;
  n_76 = t;
  m_76 :
  if(((ATermList) n_76 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm s_29;
  s_29 = t;
  {
    ATerm i_9 (ATerm t)
    {
      t = term_a_30;
      t = n_65(t);
      return(t);
    }
    t = try_1(t, i_9);
  }
  t = s_29;
  {
    ATerm j_9 (ATerm t)
    {
      ATerm p_76 = NULL;
      p_76 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_76));
      return(t);
    }
    ATerm k_9 (ATerm t)
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              {
                t = n_65(t);
                t = Cons_2(t, _id, k_9);
              }
            }
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_9, k_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
  ATerm k_30;
  k_30 = t;
  {
    ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL;
    y_76 = t;
    u_76 :
    if(match_cons(y_76, sym__3))
      {
        z_76 = ATgetArgument(y_76, 0);
        a_77 = ATgetArgument(y_76, 1);
        b_77 = ATgetArgument(y_76, 2);
        {
          if(((v_76 != NULL) && (v_76 != z_76)))
            _fail(z_76);
          else
            v_76 = z_76;
          {
            if(((w_76 != NULL) && (w_76 != a_77)))
              _fail(a_77);
            else
              w_76 = a_77;
            {
              if(((x_76 != NULL) && (x_76 != b_77)))
                _fail(b_77);
              else
                x_76 = b_77;
              t = SSL_table_put(not_null(v_76), not_null(w_76), not_null(x_76));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = k_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm e_77 = NULL;
  ATerm l_30;
  l_30 = t;
  {
    t = term_m_30;
    t = table_put_0(t);
  }
  t = l_30;
  {
    ATerm l_9 (ATerm t)
    {
      ATerm n_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_65(t);
          LocalPopChoice(s_30);
        }
      else
        {
          t = n_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_9);
    {
      ATerm s_9 (ATerm t)
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_p_25;
                t = exit_0(t);
              }
            }
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            {
              ATerm t_9 (ATerm t)
              {
                ATerm u_9 (ATerm t)
                {
                  ATerm f_77 = NULL;
                  f_77 = t;
                  if(((e_77 != NULL) && (e_77 != f_77)))
                    _fail(f_77);
                  else
                    e_77 = f_77;
                  return(t);
                }
                t = Undefined_1(t, u_9);
                return(t);
              }
              t = option_defined_1(t, t_9);
              {
                ATerm v_30;
                v_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_77)), term_w_30));
                  t = printnl_0(t);
                }
                t = v_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_17;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_9);
      {
        ATerm x_30;
        x_30 = t;
        {
          t = term_w_28;
          t = table_destroy_0(t);
        }
        t = x_30;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm))
{
  ATerm y_9 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_66(t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, y_9);
  {
    t = store_options_0(t);
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, v_66);
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          {
            ATerm c_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, t_66);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(d_31);
              }
            else
              {
                t = c_31;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_66 (ATerm), ATerm p_66 (ATerm))
{
  t = iowrap_3(t, o_66, p_66, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm z_9 (ATerm t)
  {
    t = _2(t, _id, l_66);
    return(t);
  }
  t = iowrap_2(t, z_9, _fail);
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
