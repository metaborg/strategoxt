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
ATerm term_i_16;
ATerm term_r_15;
ATerm term_g_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_l_9;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_a_7;
ATerm term_t_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_l_6;
ATerm term_c_6;
ATerm term_a_6;
ATerm term_w_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_i_5;
void init_constant_terms (void)
{
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_s_5);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_s_5);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_s_5);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_s_5);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_s_5);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_q_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__3, term_p_13, term_q_13, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm p_79 (ATerm));
ATerm assert_1 (ATerm, ATerm e_60 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm g_60 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm b_67 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm j_57 (ATerm));
ATerm Cons_2 (ATerm, ATerm s_59 (ATerm), ATerm t_59 (ATerm));
ATerm Specification_1 (ATerm, ATerm l_57 (ATerm));
ATerm _2 (ATerm, ATerm t_48 (ATerm), ATerm u_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_71 (ATerm), ATerm g_71 (ATerm));
ATerm crush_2 (ATerm, ATerm t_72 (ATerm), ATerm u_72 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm i_78 (ATerm), ATerm j_78 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_61 (ATerm));
ATerm map_1 (ATerm, ATerm x_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_61 (ATerm));
ATerm Program_1 (ATerm, ATerm i_54 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm j_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_61 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_63 (ATerm));
ATerm rename_defs_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  p_1 :
  if(((ATermList) q_1 == ATempty))
    {
      {
        ATerm f_2 = NULL,h_2 = NULL;
        ATerm h_5;
        h_5 = t;
        {
          ATerm g_2 = NULL;
          t = SSLgetAnnotations(not_null(q_1));
          {
            g_2 = t;
            if(((f_2 != NULL) && (f_2 != g_2)))
              _fail(g_2);
            else
              f_2 = g_2;
          }
        }
        t = h_5;
        {
          ATerm l_2 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_2));
          {
            l_2 = t;
            if(((h_2 != NULL) && (h_2 != l_2)))
              _fail(l_2);
            else
              h_2 = l_2;
          }
          t = not_null(h_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameVar_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym__2))
    {
      v_2 = ATgetArgument(u_2, 0);
      w_2 = ATgetArgument(u_2, 1);
      {
        ATerm z_2 = NULL;
        ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(w_2), not_null(v_2));
        {
          ATerm c_0 (ATerm t)
          {
            t = term_i_5;
            return(t);
          }
          t = rewrite_1(t, c_0);
          {
            a_3 = t;
            r_2 :
            if(match_cons(a_3, sym_Defined_2))
              {
                b_3 = ATgetArgument(a_3, 0);
                c_3 = ATgetArgument(a_3, 1);
                s_2 :
                if(match_string(b_3, "e_0"))
                  {
                    if(((z_2 != NULL) && (z_2 != c_3)))
                      _fail(c_3);
                    else
                      z_2 = c_3;
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
        }
        t = not_null(z_2);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RenameCall_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  l_3 = t;
  j_3 :
  if(match_cons(l_3, sym_Call_2))
    {
      m_3 = ATgetArgument(l_3, 0);
      o_3 = ATgetArgument(l_3, 1);
      k_3 :
      if(match_cons(m_3, sym_SVar_1))
        {
          n_3 = ATgetArgument(m_3, 0);
          {
            ATerm r_3 = NULL,s_3 = NULL;
            ATerm t_3 = NULL;
            t = not_null(o_3);
            {
              t = length_0(t);
              {
                t_3 = t;
                {
                  if(((r_3 != NULL) && (r_3 != t_3)))
                    _fail(t_3);
                  else
                    r_3 = t_3;
                  {
                    ATerm j_5 = t;
                    int k_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_3 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(r_3));
                        {
                          t = RenameVar_0(t);
                          {
                            u_3 = t;
                            if(((s_3 != NULL) && (s_3 != u_3)))
                              _fail(u_3);
                            else
                              s_3 = u_3;
                          }
                        }
                        LocalPopChoice(k_5);
                      }
                    else
                      {
                        t = j_5;
                        {
                          ATerm v_3 = NULL;
                          t = not_null(n_3);
                          {
                            t = HoArg_0(t);
                            {
                              v_3 = t;
                              if(((s_3 != NULL) && (s_3 != v_3)))
                                _fail(v_3);
                              else
                                s_3 = v_3;
                            }
                          }
                        }
                      }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_3)), not_null(o_3));
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
ATerm topdown_1 (ATerm t, ATerm p_79 (ATerm))
{
  t = p_79(t);
  {
    ATerm d_0 (ATerm t)
    {
      t = topdown_1(t, p_79);
      return(t);
    }
    t = _all(t, d_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_cons(f_4, sym__2))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      {
        ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
        ATerm l_5;
        l_5 = t;
        {
          ATerm n_4 = NULL;
          ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
          t = e_60(t);
          {
            n_4 = t;
            {
              if(((k_4 != NULL) && (k_4 != n_4)))
                _fail(n_4);
              else
                k_4 = n_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_4), not_null(g_4), not_null(h_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_5 = t;
                    int q_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), term_r_5);
                        t = table_get_0(t);
                        LocalPopChoice(q_5);
                      }
                    else
                      {
                        t = n_5;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_4 = t;
                      d_4 :
                      if(((ATgetType(o_4) == AT_LIST) && ((ATermList) o_4 != ATempty)))
                        {
                          p_4 = ATgetFirst((ATermList) o_4);
                          q_4 = (ATerm) ATgetNext((ATermList) o_4);
                          {
                            if(((l_4 != NULL) && (l_4 != p_4)))
                              _fail(p_4);
                            else
                              l_4 = p_4;
                            {
                              if(((m_4 != NULL) && (m_4 != q_4)))
                                _fail(q_4);
                              else
                                m_4 = q_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_4), term_r_5, (ATerm) ATinsert(CheckATermList(not_null(m_4)), (ATerm) ATinsert(CheckATermList(not_null(l_4)), not_null(g_4))));
                                t = table_put_0(t);
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
        }
        t = l_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(((ATgetType(w_4) == AT_LIST) && ((ATermList) w_4 != ATempty)))
    {
      x_4 = ATgetFirst((ATermList) w_4);
      y_4 = (ATerm) ATgetNext((ATermList) w_4);
      t = not_null(x_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_5), not_null(g_5));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    t = term_s_5;
    {
      t = g_60(t);
      {
        p_5 = t;
        if(((o_5 != NULL) && (o_5 != p_5)))
          _fail(p_5);
        else
          o_5 = p_5;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(m_5));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm HoArg_0 (ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm t_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
        {
          ATerm g_0 (ATerm t)
          {
            t = term_w_5;
            return(t);
          }
          t = rewrite_1(t, g_0);
          {
            b_6 = t;
            v_5 :
            if(match_cons(b_6, sym_Undefined_0))
              {
                _fail(t);
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = term_s_5;
        LocalPopChoice(u_5);
      }
    else
      {
        t = t_5;
        {
          ATerm d_6 = NULL;
          ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
          {
            ATerm h_0 (ATerm t)
            {
              t = term_w_5;
              return(t);
            }
            t = rewrite_1(t, h_0);
            {
              e_6 = t;
              x_5 :
              if(match_cons(e_6, sym_Defined_2))
                {
                  f_6 = ATgetArgument(e_6, 0);
                  g_6 = ATgetArgument(e_6, 1);
                  y_5 :
                  if(match_string(f_6, "f_0"))
                    {
                      if(((d_6 != NULL) && (d_6 != g_6)))
                        _fail(g_6);
                      else
                        d_6 = g_6;
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
          }
          t = not_null(d_6);
        }
      }
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm m_6 = NULL;
  m_6 = t;
  t = SSL_int_to_string(not_null(m_6));
  return(t);
}
ATerm Cify_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  v_6 :
  if(((ATgetType(x_6) == AT_LIST) && ((ATermList) x_6 != ATempty)))
    {
      y_6 = ATgetFirst((ATermList) x_6);
      z_6 = (ATerm) ATgetNext((ATermList) x_6);
      w_6 :
      if(match_int(y_6, 95))
        {
          ATerm b_7 = NULL;
          ATerm c_7 = NULL;
          t = not_null(z_6);
          {
            t = o_0(t);
            {
              c_7 = t;
              if(((b_7 != NULL) && (b_7 != c_7)))
                _fail(c_7);
              else
                b_7 = c_7;
            }
          }
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_7)), term_a_6), term_a_6);
        }
      else
        {
          if(match_int(y_6, 45))
            {
              ATerm e_7 = NULL;
              ATerm f_7 = NULL;
              t = not_null(z_6);
              {
                t = o_0(t);
                {
                  f_7 = t;
                  if(((e_7 != NULL) && (e_7 != f_7)))
                    _fail(f_7);
                  else
                    e_7 = f_7;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_7)), term_a_6);
            }
          else
            {
              if(match_int(y_6, 39))
                {
                  ATerm h_7 = NULL;
                  ATerm i_7 = NULL;
                  t = not_null(z_6);
                  {
                    t = o_0(t);
                    {
                      i_7 = t;
                      if(((h_7 != NULL) && (h_7 != i_7)))
                        _fail(i_7);
                      else
                        h_7 = i_7;
                    }
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_7)), term_a_6), term_c_6), term_a_6);
                }
              else
                {
                  _fail(t);
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
ATerm escape_1 (ATerm t, ATerm b_67 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm h_6 = t;
      int i_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_67(t, p_7);
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
                t = Cons_2(t, _id, p_7);
                LocalPopChoice(k_6);
              }
            else
              {
                t = j_6;
                t = Nil_0(t);
              }
          }
        }
      return(t);
    }
    t = p_7(t);
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
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
  s_7 = t;
  r_7 :
  if(match_cons(s_7, sym_Mod_2))
    {
      t_7 = ATgetArgument(s_7, 0);
      u_7 = ATgetArgument(s_7, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_l_6), not_null(t_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm))
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_71(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
        c_8 = t;
        b_8 :
        if(((ATgetType(c_8) == AT_LIST) && ((ATermList) c_8 != ATempty)))
          {
            d_8 = ATgetFirst((ATermList) c_8);
            e_8 = (ATerm) ATgetNext((ATermList) c_8);
            {
              ATerm h_8 = NULL,j_8 = NULL;
              ATerm p_6;
              p_6 = t;
              {
                ATerm i_8 = NULL;
                t = not_null(d_8);
                {
                  t = j_71(t);
                  {
                    i_8 = t;
                    if(((h_8 != NULL) && (h_8 != i_8)))
                      _fail(i_8);
                    else
                      h_8 = i_8;
                  }
                }
              }
              t = p_6;
              {
                ATerm k_8 = NULL;
                t = not_null(e_8);
                {
                  t = foldr_3(t, h_71, i_71, j_71);
                  {
                    k_8 = t;
                    if(((j_8 != NULL) && (j_8 != k_8)))
                      _fail(k_8);
                    else
                      j_8 = k_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), not_null(j_8));
                  t = i_71(t);
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
ATerm length_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = term_q_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_r_6;
    return(t);
  }
  t = foldr_3(t, p_0, add_0, q_0);
  return(t);
}
ATerm RenameSDef_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_SDef_3))
    {
      v_8 = ATgetArgument(u_8, 0);
      w_8 = ATgetArgument(u_8, 1);
      x_8 = ATgetArgument(u_8, 2);
      {
        ATerm b_9 = NULL,c_9 = NULL;
        ATerm d_9 = NULL;
        t = not_null(w_8);
        {
          ATerm e_9 = NULL,g_9 = NULL,i_9 = NULL;
          t = length_0(t);
          {
            d_9 = t;
            {
              if(((b_9 != NULL) && (b_9 != d_9)))
                _fail(d_9);
              else
                b_9 = d_9;
              {
                ATerm s_6;
                s_6 = t;
                {
                  ATerm f_9 = NULL;
                  t = not_null(v_8);
                  {
                    t = try_1(t, NameMod_0);
                    {
                      t = cify_0(t);
                      {
                        f_9 = t;
                        if(((e_9 != NULL) && (e_9 != f_9)))
                          _fail(f_9);
                        else
                          e_9 = f_9;
                      }
                    }
                  }
                }
                t = s_6;
                {
                  ATerm h_9 = NULL;
                  t = not_null(b_9);
                  {
                    t = int_to_string_0(t);
                    {
                      h_9 = t;
                      if(((g_9 != NULL) && (g_9 != h_9)))
                        _fail(h_9);
                      else
                        g_9 = h_9;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_9)), term_t_6), not_null(e_9));
                    {
                      t = concat_strings_0(t);
                      {
                        i_9 = t;
                        {
                          if(((c_9 != NULL) && (c_9 != i_9)))
                            _fail(i_9);
                          else
                            c_9 = i_9;
                          {
                            ATerm u_6;
                            u_6 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(b_9), not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_7, not_null(c_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_i_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = u_6;
                            {
                              ATerm d_7 = t;
                              int g_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(v_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm j_7;
                                      j_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), term_k_7);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_w_5;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = j_7;
                                    }
                                  }
                                  LocalPopChoice(g_7);
                                }
                              else
                                {
                                  t = d_7;
                                  {
                                    ATerm l_7;
                                    l_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_7, not_null(c_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_w_5;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = l_7;
                                  }
                                }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_9), not_null(w_8), not_null(x_8));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_sdefs_0 (ATerm t)
{
  t = map_1(t, RenameSDef_0);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm v_0 (ATerm t)
      {
        t = try_1(t, RenameCall_0);
        return(t);
      }
      t = topdown_1(t, v_0);
      return(t);
    }
    t = map_1(t, u_0);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm t_9 = NULL,u_9 = NULL;
  t_9 = t;
  s_9 :
  if(match_cons(t_9, sym_Strategies_1))
    {
      u_9 = ATgetArgument(t_9, 0);
      {
        ATerm x_9 = NULL,z_9 = NULL;
        ATerm y_9 = NULL;
        t = SSLgetAnnotations(not_null(t_9));
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
        {
          t = not_null(u_9);
          {
            ATerm b_10 = NULL;
            t = j_57(t);
            {
              z_9 = t;
              {
                ATerm c_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_9)), not_null(x_9));
                {
                  c_10 = t;
                  if(((b_10 != NULL) && (b_10 != c_10)))
                    _fail(c_10);
                  else
                    b_10 = c_10;
                }
                t = not_null(b_10);
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
ATerm Cons_2 (ATerm t, ATerm s_59 (ATerm), ATerm t_59 (ATerm))
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  m_10 :
  if(((ATgetType(n_10) == AT_LIST) && ((ATermList) n_10 != ATempty)))
    {
      o_10 = ATgetFirst((ATermList) n_10);
      p_10 = (ATerm) ATgetNext((ATermList) n_10);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(n_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(o_10);
          {
            ATerm x_10 = NULL;
            t = s_59(t);
            {
              v_10 = t;
              {
                t = not_null(p_10);
                {
                  ATerm z_10 = NULL;
                  t = t_59(t);
                  {
                    x_10 = t;
                    {
                      ATerm a_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_10)), not_null(v_10)), not_null(t_10));
                      {
                        a_11 = t;
                        if(((z_10 != NULL) && (z_10 != a_11)))
                          _fail(a_11);
                        else
                          z_10 = a_11;
                      }
                      t = not_null(z_10);
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
ATerm Specification_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm l_11 = NULL,m_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_Specification_1))
    {
      m_11 = ATgetArgument(l_11, 0);
      {
        ATerm p_11 = NULL,r_11 = NULL;
        ATerm q_11 = NULL;
        t = SSLgetAnnotations(not_null(l_11));
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
        {
          t = not_null(m_11);
          {
            ATerm t_11 = NULL;
            t = l_57(t);
            {
              r_11 = t;
              {
                ATerm u_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(r_11)), not_null(p_11));
                {
                  u_11 = t;
                  if(((t_11 != NULL) && (t_11 != u_11)))
                    _fail(u_11);
                  else
                    t_11 = u_11;
                }
                t = not_null(t_11);
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
ATerm _2 (ATerm t, ATerm t_48 (ATerm), ATerm u_48 (ATerm))
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  f_12 = t;
  e_12 :
  if(match_cons(f_12, sym__2))
    {
      g_12 = ATgetArgument(f_12, 0);
      h_12 = ATgetArgument(f_12, 1);
      {
        ATerm l_12 = NULL,n_12 = NULL;
        ATerm m_12 = NULL;
        t = SSLgetAnnotations(not_null(f_12));
        {
          m_12 = t;
          if(((l_12 != NULL) && (l_12 != m_12)))
            _fail(m_12);
          else
            l_12 = m_12;
        }
        {
          t = not_null(g_12);
          {
            ATerm p_12 = NULL;
            t = t_48(t);
            {
              n_12 = t;
              {
                t = not_null(h_12);
                {
                  ATerm r_12 = NULL;
                  t = u_48(t);
                  {
                    p_12 = t;
                    {
                      ATerm s_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_12), not_null(p_12)), not_null(l_12));
                      {
                        s_12 = t;
                        if(((r_12 != NULL) && (r_12 != s_12)))
                          _fail(s_12);
                        else
                          r_12 = s_12;
                      }
                      t = not_null(r_12);
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
  ATerm a_13 = NULL;
  ATerm n_7;
  n_7 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm b_13 = NULL,c_13 = NULL;
      b_13 = t;
      z_12 :
      if(match_cons(b_13, sym_Program_1))
        {
          c_13 = ATgetArgument(b_13, 0);
          if(((a_13 != NULL) && (a_13 != c_13)))
            _fail(c_13);
          else
            a_13 = c_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, w_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_7), not_null(a_13)), term_q_7));
      {
        t = printnl_0(t);
        {
          t = term_r_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, term_w_7));
  {
    t = printnl_0(t);
    {
      t = term_r_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  t = SSL_TicksToSeconds(not_null(f_13));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym__2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        ATerm x_7 = t;
        int y_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_13), not_null(m_13));
            LocalPopChoice(y_7);
          }
        else
          {
            t = x_7;
            t = SSL_addr(not_null(l_13), not_null(m_13));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_71 (ATerm), ATerm g_71 (ATerm))
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_71(t);
      LocalPopChoice(a_8);
    }
  else
    {
      t = z_7;
      {
        ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
        t_13 = t;
        s_13 :
        if(((ATgetType(t_13) == AT_LIST) && ((ATermList) t_13 != ATempty)))
          {
            u_13 = ATgetFirst((ATermList) t_13);
            v_13 = (ATerm) ATgetNext((ATermList) t_13);
            {
              ATerm y_13 = NULL;
              ATerm z_13 = NULL;
              t = not_null(v_13);
              {
                t = foldr_2(t, f_71, g_71);
                {
                  z_13 = t;
                  if(((y_13 != NULL) && (y_13 != z_13)))
                    _fail(z_13);
                  else
                    y_13 = z_13;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_13), not_null(y_13));
                t = g_71(t);
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
ATerm crush_2 (ATerm t, ATerm t_72 (ATerm), ATerm u_72 (ATerm))
{
  ATerm g_14 = NULL;
  ATerm i_14 = NULL;
  g_14 = t;
  {
    ATerm j_14 = NULL;
    ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
    t = not_null(g_14);
    {
      j_14 = t;
      {
        t = SSL_explode_term(not_null(j_14));
        {
          l_14 = t;
          f_14 :
          if(match_cons(l_14, sym__2))
            {
              m_14 = ATgetArgument(l_14, 0);
              n_14 = ATgetArgument(l_14, 1);
              if(((i_14 != NULL) && (i_14 != n_14)))
                _fail(n_14);
              else
                i_14 = n_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_14);
      t = foldr_2(t, t_72, u_72);
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
    ATerm x_0 (ATerm t)
    {
      t = term_q_6;
      return(t);
    }
    t = crush_2(t, x_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm e_15 = NULL;
    ATerm z_0 (ATerm t)
    {
      ATerm f_8 = t;
      if((PushChoice() == 0))
        {
          ATerm a_1 (ATerm t)
          {
            ATerm z_14 = NULL;
            z_14 = t;
            r_14 :
            if(!(match_cons(z_14, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, a_1);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_8;
        }
      return(t);
    }
    t = _2(t, z_0, _id);
    {
      ATerm b_1 (ATerm t)
      {
        ATerm c_1 (ATerm t)
        {
          ATerm a_15 = NULL,b_15 = NULL;
          a_15 = t;
          t_14 :
          if(match_cons(a_15, sym_Runtime_1))
            {
              b_15 = ATgetArgument(a_15, 0);
              if(((x_14 != NULL) && (x_14 != b_15)))
                _fail(b_15);
              else
                x_14 = b_15;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_1);
        return(t);
      }
      t = _2(t, b_1, _id);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            ATerm c_15 = NULL,d_15 = NULL;
            c_15 = t;
            v_14 :
            if(match_cons(c_15, sym_Program_1))
              {
                d_15 = ATgetArgument(c_15, 0);
                if(((y_14 != NULL) && (y_14 != d_15)))
                  _fail(d_15);
                else
                  y_14 = d_15;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          return(t);
        }
        t = _2(t, d_1, _id);
        {
          ATerm f_15 = NULL;
          t = run_time_0(t);
          {
            f_15 = t;
            if(((e_15 != NULL) && (e_15 != f_15)))
              _fail(f_15);
            else
              e_15 = f_15;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_8), not_null(e_15)), term_g_8), not_null(y_14)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, y_0);
  {
    t = term_q_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
  l_15 = t;
  k_15 :
  if(match_cons(l_15, sym__2))
    {
      m_15 = ATgetArgument(l_15, 0);
      n_15 = ATgetArgument(l_15, 1);
      t = SSL_WriteToTextFile(not_null(m_15), not_null(n_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym__2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      t = SSL_WriteToBinaryFile(not_null(u_15), not_null(v_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_16 = NULL;
  ATerm m_8;
  m_8 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm e_16 = NULL,f_16 = NULL;
            e_16 = t;
            a_16 :
            if(match_cons(e_16, sym_Output_1))
              {
                f_16 = ATgetArgument(e_16, 0);
                if(((d_16 != NULL) && (d_16 != f_16)))
                  _fail(f_16);
                else
                  d_16 = f_16;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, g_1);
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm g_16 = NULL;
            t = term_p_8;
            {
              g_16 = t;
              if(((d_16 != NULL) && (d_16 != g_16)))
                _fail(g_16);
              else
                d_16 = g_16;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_1, _id);
  }
  t = m_8;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm i_1 (ATerm t)
      {
        t = not_null(d_16);
        return(t);
      }
      t = split_2(t, i_1, _id);
      return(t);
    }
    t = _2(t, _id, h_1);
    {
      ATerm q_8 = t;
      int r_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm h_16 = NULL;
              h_16 = t;
              c_16 :
              if(!(match_cons(h_16, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, k_1);
            return(t);
          }
          t = _2(t, j_1, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm n_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  ATerm s_8;
  s_8 = t;
  t = dtime_0(t);
  t = s_8;
  {
    t = x_63(t);
    {
      ATerm y_8;
      y_8 = t;
      {
        ATerm o_16 = NULL;
        t = dtime_0(t);
        {
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
        }
      }
      t = y_8;
      {
        p_16 = t;
        m_16 :
        if(match_cons(p_16, sym__2))
          {
            q_16 = ATgetArgument(p_16, 0);
            r_16 = ATgetArgument(p_16, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_16)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_16))), not_null(r_16));
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
  ATerm x_16 = NULL;
  x_16 = t;
  t = SSL_ReadFromFile(not_null(x_16));
  return(t);
}
ATerm split_2 (ATerm t, ATerm i_78 (ATerm), ATerm j_78 (ATerm))
{
  ATerm c_17 = NULL,e_17 = NULL;
  ATerm z_8;
  z_8 = t;
  {
    ATerm d_17 = NULL;
    t = i_78(t);
    {
      d_17 = t;
      if(((c_17 != NULL) && (c_17 != d_17)))
        _fail(d_17);
      else
        c_17 = d_17;
    }
  }
  t = z_8;
  {
    ATerm f_17 = NULL;
    t = j_78(t);
    {
      f_17 = t;
      if(((e_17 != NULL) && (e_17 != f_17)))
        _fail(f_17);
      else
        e_17 = f_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(e_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_17 = NULL;
  ATerm a_9;
  a_9 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 (ATerm t)
        {
          ATerm m_17 = NULL,n_17 = NULL;
          m_17 = t;
          j_17 :
          if(match_cons(m_17, sym_Input_1))
            {
              n_17 = ATgetArgument(m_17, 0);
              if(((l_17 != NULL) && (l_17 != n_17)))
                _fail(n_17);
              else
                l_17 = n_17;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, l_1);
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm o_17 = NULL;
          t = term_l_9;
          {
            o_17 = t;
            if(((l_17 != NULL) && (l_17 != o_17)))
              _fail(o_17);
            else
              l_17 = o_17;
          }
        }
      }
  }
  t = a_9;
  {
    ATerm m_1 (ATerm t)
    {
      t = not_null(l_17);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_Version_0))
    {
      ATerm x_17 = NULL,z_17 = NULL;
      ATerm m_9;
      m_9 = t;
      {
        ATerm y_17 = NULL;
        t = SSLgetAnnotations(not_null(v_17));
        {
          y_17 = t;
          if(((x_17 != NULL) && (x_17 != y_17)))
            _fail(y_17);
          else
            x_17 = y_17;
        }
      }
      t = m_9;
      {
        ATerm a_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_17));
        {
          a_18 = t;
          if(((z_17 != NULL) && (z_17 != a_18)))
            _fail(a_18);
          else
            z_17 = a_18;
        }
        t = not_null(z_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, n_1);
  t = v_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_18 = NULL;
  f_18 = t;
  t = SSL_table_create(not_null(f_18));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  {
    ATerm r_9;
    r_9 = t;
    {
      t = term_v_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_w_9, not_null(j_18));
          t = table_put_0(t);
        }
      }
    }
    t = r_9;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym__2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_10, not_null(p_18), not_null(q_18));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  z_18 = t;
  x_18 :
  if(match_string(z_18, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(z_18) == AT_LIST) && ((ATermList) z_18 != ATempty)))
        {
          a_19 = ATgetFirst((ATermList) z_18);
          b_19 = (ATerm) ATgetNext((ATermList) z_18);
          y_18 :
          if(((ATgetType(b_19) == AT_LIST) && ((ATermList) b_19 != ATempty)))
            {
              c_19 = ATgetFirst((ATermList) b_19);
              d_19 = (ATerm) ATgetNext((ATermList) b_19);
              {
                ATerm h_19 = NULL;
                ATerm d_10;
                d_10 = t;
                {
                  t = not_null(a_19);
                  t = l_0(t);
                }
                t = d_10;
                {
                  ATerm i_19 = NULL;
                  t = not_null(c_19);
                  {
                    t = m_0(t);
                    {
                      i_19 = t;
                      if(((h_19 != NULL) && (h_19 != i_19)))
                        _fail(i_19);
                      else
                        h_19 = i_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_19)), not_null(h_19));
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm a_20 = NULL;
        a_20 = t;
        m_19 :
        if(!(match_string(a_20, "-S")))
          {
            if(!(match_string(a_20, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_h_10;
        t = set_config_0(t);
        t = term_i_10;
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_j_10;
        return(t);
      }
      t = Option_3(t, o_1, r_1, s_1);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm b_20 = NULL;
              b_20 = t;
              n_19 :
              if(!(match_string(b_20, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = term_r_10;
              t = set_config_0(t);
              t = term_s_10;
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_w_10;
              return(t);
            }
            t = Option_3(t, t_1, u_1, v_1);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm y_10 = t;
              int b_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm c_20 = NULL;
                    c_20 = t;
                    o_19 :
                    if(!(match_string(c_20, "-v")))
                      {
                        if(!(match_string(c_20, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = term_d_11;
                    t = set_config_0(t);
                    t = term_e_11;
                    return(t);
                  }
                  ATerm y_1 (ATerm t)
                  {
                    t = term_f_11;
                    return(t);
                  }
                  t = Option_3(t, w_1, x_1, y_1);
                  LocalPopChoice(b_11);
                }
              else
                {
                  t = y_10;
                  {
                    ATerm g_11 = t;
                    int h_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          ATerm d_20 = NULL;
                          d_20 = t;
                          p_19 :
                          if(!(match_string(d_20, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_2 (ATerm t)
                        {
                          ATerm g_20 = NULL;
                          ATerm i_11;
                          i_11 = t;
                          {
                            ATerm e_20 = NULL;
                            ATerm f_20 = NULL;
                            f_20 = t;
                            if(((e_20 != NULL) && (e_20 != f_20)))
                              _fail(f_20);
                            else
                              e_20 = f_20;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(e_20));
                              t = set_config_0(t);
                            }
                          }
                          t = i_11;
                          {
                            ATerm h_20 = NULL;
                            h_20 = t;
                            if(((g_20 != NULL) && (g_20 != h_20)))
                              _fail(h_20);
                            else
                              g_20 = h_20;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_20));
                          }
                          return(t);
                        }
                        ATerm b_2 (ATerm t)
                        {
                          t = term_n_11;
                          return(t);
                        }
                        t = ArgOption_3(t, z_1, a_2, b_2);
                        LocalPopChoice(h_11);
                      }
                    else
                      {
                        t = g_11;
                        {
                          ATerm o_11 = t;
                          int s_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 (ATerm t)
                              {
                                ATerm i_20 = NULL;
                                i_20 = t;
                                s_19 :
                                if(!(match_string(i_20, "-i")))
                                  {
                                    if(!(match_string(i_20, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_2 (ATerm t)
                              {
                                ATerm l_20 = NULL;
                                ATerm v_11;
                                v_11 = t;
                                {
                                  ATerm j_20 = NULL;
                                  ATerm k_20 = NULL;
                                  k_20 = t;
                                  if(((j_20 != NULL) && (j_20 != k_20)))
                                    _fail(k_20);
                                  else
                                    j_20 = k_20;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(j_20));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_11;
                                {
                                  ATerm m_20 = NULL;
                                  m_20 = t;
                                  if(((l_20 != NULL) && (l_20 != m_20)))
                                    _fail(m_20);
                                  else
                                    l_20 = m_20;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_20));
                                }
                                return(t);
                              }
                              ATerm e_2 (ATerm t)
                              {
                                t = term_x_11;
                                return(t);
                              }
                              t = ArgOption_3(t, c_2, d_2, e_2);
                              LocalPopChoice(s_11);
                            }
                          else
                            {
                              t = o_11;
                              {
                                ATerm y_11 = t;
                                int z_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_2 (ATerm t)
                                    {
                                      ATerm n_20 = NULL;
                                      n_20 = t;
                                      v_19 :
                                      if(!(match_string(n_20, "-o")))
                                        {
                                          if(!(match_string(n_20, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm q_20 = NULL;
                                      ATerm a_12;
                                      a_12 = t;
                                      {
                                        ATerm o_20 = NULL;
                                        ATerm p_20 = NULL;
                                        p_20 = t;
                                        if(((o_20 != NULL) && (o_20 != p_20)))
                                          _fail(p_20);
                                        else
                                          o_20 = p_20;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(o_20));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = a_12;
                                      {
                                        ATerm r_20 = NULL;
                                        r_20 = t;
                                        if(((q_20 != NULL) && (q_20 != r_20)))
                                          _fail(r_20);
                                        else
                                          q_20 = r_20;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_20));
                                      }
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      t = term_c_12;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_2, j_2, k_2);
                                    LocalPopChoice(z_11);
                                  }
                                else
                                  {
                                    t = y_11;
                                    {
                                      ATerm d_12 = t;
                                      int i_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            ATerm s_20 = NULL;
                                            s_20 = t;
                                            y_19 :
                                            if(!(match_string(s_20, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm n_2 (ATerm t)
                                          {
                                            t = term_k_12;
                                            t = set_config_0(t);
                                            t = term_o_12;
                                            return(t);
                                          }
                                          ATerm o_2 (ATerm t)
                                          {
                                            t = term_q_12;
                                            return(t);
                                          }
                                          t = Option_3(t, m_2, n_2, o_2);
                                          LocalPopChoice(i_12);
                                        }
                                      else
                                        {
                                          t = d_12;
                                          {
                                            ATerm p_2 (ATerm t)
                                            {
                                              ATerm t_20 = NULL;
                                              t_20 = t;
                                              z_19 :
                                              if(!(match_string(t_20, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm q_2 (ATerm t)
                                            {
                                              t = term_u_12;
                                              t = set_config_0(t);
                                              t = term_v_12;
                                              return(t);
                                            }
                                            ATerm x_2 (ATerm t)
                                            {
                                              t = term_w_12;
                                              return(t);
                                            }
                                            t = Option_3(t, p_2, q_2, x_2);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_21 = NULL;
  g_21 = t;
  t = SSL_table_destroy(not_null(g_21));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_exit(not_null(l_21));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  t = SSL_implode_string(not_null(p_21));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm s_21 (ATerm t)
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_21);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        {
          t = Nil_0(t);
          t = l_75(t);
        }
      }
    return(t);
  }
  t = s_21(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
        v_21 = t;
        u_21 :
        if(((ATgetType(v_21) == AT_LIST) && ((ATermList) v_21 != ATempty)))
          {
            w_21 = ATgetFirst((ATermList) v_21);
            x_21 = (ATerm) ATgetNext((ATermList) v_21);
            {
              t = not_null(w_21);
              {
                ATerm y_2 (ATerm t)
                {
                  t = not_null(x_21);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_2);
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
  ATerm d_22 = NULL;
  d_22 = t;
  t = SSL_explode_string(not_null(d_22));
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
ATerm long_description_1 (ATerm t, ATerm o_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm g_22 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = Cons_2(t, x_74, g_22);
      }
    return(t);
  }
  t = g_22(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm n_22 = NULL,v_22 = NULL,w_22 = NULL;
  w_22 = t;
  m_22 :
  if(((ATgetType(w_22) == AT_LIST) && ((ATermList) w_22 != ATempty)))
    {
      n_22 = ATgetFirst((ATermList) w_22);
      v_22 = (ATerm) ATgetNext((ATermList) w_22);
      {
        ATerm z_22 = NULL;
        t = not_null(v_22);
        {
          ATerm i_13;
          i_13 = t;
          {
            ATerm a_23 = NULL,c_23 = NULL,e_23 = NULL;
            ATerm n_13;
            n_13 = t;
            {
              ATerm b_23 = NULL;
              t = k_0(t);
              {
                b_23 = t;
                if(((a_23 != NULL) && (a_23 != b_23)))
                  _fail(b_23);
                else
                  a_23 = b_23;
              }
            }
            t = n_13;
            {
              ATerm d_23 = NULL;
              t = not_null(n_22);
              {
                t = j_0(t);
                {
                  d_23 = t;
                  if(((c_23 != NULL) && (c_23 != d_23)))
                    _fail(d_23);
                  else
                    c_23 = d_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_23)), not_null(c_23));
                {
                  e_23 = t;
                  if(((z_22 != NULL) && (z_22 != e_23)))
                    _fail(e_23);
                  else
                    z_22 = e_23;
                }
              }
            }
          }
          t = i_13;
          {
            ATerm d_3 (ATerm t)
            {
              t = not_null(z_22);
              return(t);
            }
            t = reverse_acc_2(t, j_0, d_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_22 == ATempty))
        {
          {
            t = term_s_5;
            t = k_0(t);
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
  ATerm e_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm n_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm i_54 (ATerm))
{
  ATerm u_23 = NULL,v_23 = NULL;
  u_23 = t;
  t_23 :
  if(match_cons(u_23, sym_Program_1))
    {
      v_23 = ATgetArgument(u_23, 0);
      {
        ATerm y_23 = NULL,a_24 = NULL;
        ATerm z_23 = NULL;
        t = SSLgetAnnotations(not_null(u_23));
        {
          z_23 = t;
          if(((y_23 != NULL) && (y_23 != z_23)))
            _fail(z_23);
          else
            y_23 = z_23;
        }
        {
          t = not_null(v_23);
          {
            ATerm c_24 = NULL;
            t = i_54(t);
            {
              a_24 = t;
              {
                ATerm e_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_24)), not_null(y_23));
                {
                  e_24 = t;
                  if(((c_24 != NULL) && (c_24 != e_24)))
                    _fail(e_24);
                  else
                    c_24 = e_24;
                }
                t = not_null(c_24);
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
  ATerm n_24 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm o_24 = NULL;
      o_24 = t;
      if(((n_24 != NULL) && (n_24 != o_24)))
        _fail(o_24);
      else
        n_24 = o_24;
      return(t);
    }
    t = Program_1(t, g_3);
    return(t);
  }
  t = option_defined_1(t, f_3);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm p_24 = NULL;
      ATerm q_24 = NULL;
      t = term_s_5;
      {
        ATerm i_3 (ATerm t)
        {
          t = not_null(n_24);
          return(t);
        }
        t = short_description_1(t, i_3);
        {
          t = concat_strings_0(t);
          {
            q_24 = t;
            if(((p_24 != NULL) && (p_24 != q_24)))
              _fail(q_24);
            else
              p_24 = q_24;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(p_24)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, term_o_13));
      {
        t = printnl_0(t);
        {
          t = term_r_13;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm r_24 = NULL;
                  r_24 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_24)), term_w_13));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_3);
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm t_24 = NULL;
                    ATerm u_24 = NULL;
                    t = term_s_5;
                    {
                      ATerm w_3 (ATerm t)
                      {
                        t = not_null(n_24);
                        return(t);
                      }
                      t = long_description_1(t, w_3);
                      {
                        t = concat_strings_0(t);
                        {
                          u_24 = t;
                          if(((t_24 != NULL) && (t_24 != u_24)))
                            _fail(u_24);
                          else
                            t_24 = u_24;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_24)), term_x_13));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, q_3);
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
  ATerm k_25 = NULL,l_25 = NULL,o_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__2))
    {
      l_25 = ATgetArgument(k_25, 0);
      o_25 = ATgetArgument(k_25, 1);
      {
        ATerm a_14;
        a_14 = t;
        t = SSL_printnl(not_null(l_25), not_null(o_25));
        t = a_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm j_54 (ATerm))
{
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_Undefined_1))
    {
      a_26 = ATgetArgument(z_25, 0);
      {
        ATerm d_26 = NULL,g_26 = NULL;
        ATerm e_26 = NULL;
        t = SSLgetAnnotations(not_null(z_25));
        {
          e_26 = t;
          if(((d_26 != NULL) && (d_26 != e_26)))
            _fail(e_26);
          else
            d_26 = e_26;
        }
        {
          t = not_null(a_26);
          {
            ATerm q_26 = NULL;
            t = j_54(t);
            {
              g_26 = t;
              {
                ATerm r_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_26)), not_null(d_26));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm f_75 (ATerm))
{
  ATerm w_26 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_75, _id);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = Cons_2(t, _id, w_26);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_62 (ATerm))
{
  t = fetch_1(t, m_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Help_0))
    {
      ATerm e_27 = NULL,g_27 = NULL;
      ATerm d_14;
      d_14 = t;
      {
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(c_27));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
      }
      t = d_14;
      {
        ATerm h_27 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
        t = not_null(g_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm e_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_79(t);
      LocalPopChoice(h_14);
    }
  else
    {
      t = e_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  m_27 :
  if(match_cons(n_27, sym__2))
    {
      o_27 = ATgetArgument(n_27, 0);
      p_27 = ATgetArgument(n_27, 1);
      t = SSL_table_get(not_null(o_27), not_null(p_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym__3))
    {
      x_27 = ATgetArgument(w_27, 0);
      y_27 = ATgetArgument(w_27, 1);
      z_27 = ATgetArgument(w_27, 2);
      {
        ATerm k_14;
        k_14 = t;
        {
          ATerm d_28 = NULL;
          ATerm e_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), not_null(y_27));
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                t = (ATerm) ATempty;
              }
            {
              e_28 = t;
              if(((d_28 != NULL) && (d_28 != e_28)))
                _fail(e_28);
              else
                d_28 = e_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_27), not_null(y_27), (ATerm) ATinsert(CheckATermList(not_null(d_28)), not_null(z_27)));
            t = table_put_0(t);
          }
        }
        t = k_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm i_28 = NULL;
  ATerm j_28 = NULL;
  t = term_s_5;
  {
    t = s_61(t);
    {
      j_28 = t;
      if(((i_28 != NULL) && (i_28 != j_28)))
        _fail(j_28);
      else
        i_28 = j_28;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_13, term_q_13, not_null(i_28));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_string(p_28, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(p_28) == AT_LIST) && ((ATermList) p_28 != ATempty)))
        {
          q_28 = ATgetFirst((ATermList) p_28);
          r_28 = (ATerm) ATgetNext((ATermList) p_28);
          {
            ATerm u_28 = NULL;
            ATerm q_14;
            q_14 = t;
            {
              t = not_null(q_28);
              t = a_0(t);
            }
            t = q_14;
            {
              ATerm v_28 = NULL;
              t = term_s_5;
              {
                t = b_0(t);
                {
                  v_28 = t;
                  if(((u_28 != NULL) && (u_28 != v_28)))
                    _fail(v_28);
                  else
                    u_28 = v_28;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_28)), not_null(u_28));
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
  ATerm x_3 (ATerm t)
  {
    ATerm c_29 = NULL;
    c_29 = t;
    z_28 :
    if(!(match_string(c_29, "--help")))
      {
        if(!(match_string(c_29, "-h")))
          {
            if(!(match_string(c_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_s_14;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_u_14;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_29 = NULL,l_29 = NULL,m_29 = NULL;
  f_29 = t;
  e_29 :
  if(((ATgetType(f_29) == AT_LIST) && ((ATermList) f_29 != ATempty)))
    {
      l_29 = ATgetFirst((ATermList) f_29);
      m_29 = (ATerm) ATgetNext((ATermList) f_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm w_14;
  w_14 = t;
  {
    ATerm a_4 (ATerm t)
    {
      t = term_g_15;
      t = q_61(t);
      return(t);
    }
    t = try_1(t, a_4);
  }
  t = w_14;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm r_29 = NULL;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_29));
      return(t);
    }
    ATerm c_4 (ATerm t)
    {
      ATerm h_15 = t;
      int i_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_15);
            }
          else
            {
              t = j_15;
              {
                t = q_61(t);
                t = Cons_2(t, _id, c_4);
              }
            }
          LocalPopChoice(i_15);
        }
      else
        {
          t = h_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_4, c_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  ATerm p_15;
  p_15 = t;
  {
    ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
    c_30 = t;
    y_29 :
    if(match_cons(c_30, sym__3))
      {
        d_30 = ATgetArgument(c_30, 0);
        e_30 = ATgetArgument(c_30, 1);
        f_30 = ATgetArgument(c_30, 2);
        {
          if(((z_29 != NULL) && (z_29 != d_30)))
            _fail(d_30);
          else
            z_29 = d_30;
          {
            if(((a_30 != NULL) && (a_30 != e_30)))
              _fail(e_30);
            else
              a_30 = e_30;
            {
              if(((b_30 != NULL) && (b_30 != f_30)))
                _fail(f_30);
              else
                b_30 = f_30;
              t = SSL_table_put(not_null(z_29), not_null(a_30), not_null(b_30));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm i_30 = NULL;
  ATerm q_15;
  q_15 = t;
  {
    t = term_r_15;
    t = table_put_0(t);
  }
  t = q_15;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm w_15 = t;
      int x_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_61(t);
          LocalPopChoice(x_15);
        }
      else
        {
          t = w_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_4);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm r_4 (ATerm t)
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm j_30 = NULL;
                  j_30 = t;
                  if(((i_30 != NULL) && (i_30 != j_30)))
                    _fail(j_30);
                  else
                    i_30 = j_30;
                  return(t);
                }
                t = Undefined_1(t, s_4);
                return(t);
              }
              t = option_defined_1(t, r_4);
              {
                ATerm b_16;
                b_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_30)), term_i_16));
                  t = printnl_0(t);
                }
                t = b_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_4);
      {
        ATerm j_16;
        j_16 = t;
        {
          t = term_p_13;
          t = table_destroy_0(t);
        }
        t = j_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm m_63 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_63(t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, t_4);
  {
    t = store_options_0(t);
    {
      ATerm s_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, m_63);
          LocalPopChoice(t_16);
        }
      else
        {
          t = s_16;
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, k_63);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  t = iowrap_3(t, f_63, g_63, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    t = _2(t, _id, c_63);
    return(t);
  }
  t = iowrap_2(t, u_4, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm b_5 (ATerm t)
      {
        ATerm c_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, c_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, b_5);
      return(t);
    }
    t = Specification_1(t, a_5);
    return(t);
  }
  t = iowrap_1(t, z_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
