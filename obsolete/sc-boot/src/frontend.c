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
ATerm term_o_28;
ATerm term_e_28;
ATerm term_x_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_m_25;
ATerm term_d_25;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
void init_constant_terms (void)
{
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Op_2, term_t_13, (ATerm) ATempty);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATinsert(ATempty, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_FunType_2, term_w_13, term_v_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATinsert(ATempty, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Var_1, term_g_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATinsert(ATempty, term_h_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_k_16, term_h_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATinsert(CheckATermList(term_k_16), term_h_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_n_16, term_h_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATinsert(CheckATermList(term_n_16), term_h_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_q_16, term_h_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATinsert(CheckATermList(term_q_16), term_h_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_t_16, term_h_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATinsert(CheckATermList(term_t_16), term_h_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_w_16, term_h_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATinsert(CheckATermList(term_w_16), term_h_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_FunType_2, term_z_16, term_h_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATinsert(CheckATermList(term_z_16), term_h_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_FunType_2, term_c_17, term_h_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATinsert(CheckATermList(term_c_17), term_h_16);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_FunType_2, term_f_17, term_h_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_o_11, term_g_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATinsert(ATempty, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATinsert(ATempty, term_h_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATinsert(ATempty, term_q_18);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATinsert(ATempty, term_h_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Op_2, term_o_11, (ATerm) ATempty);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_21);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATinsert(ATempty, term_g_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATinsert(ATempty, term_k_24);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_l_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATinsert(ATempty, term_p_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATinsert(ATempty, term_d_27);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_e_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_h_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__3, term_g_27, term_h_27, (ATerm) ATempty);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Explode_2 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm pat_td_1 (ATerm, ATerm c_57 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm s_52 (ATerm), ATerm t_52 (ATerm));
ATerm Con_3 (ATerm, ATerm p_52 (ATerm), ATerm q_52 (ATerm), ATerm r_52 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm h_77 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_54 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_54 (ATerm));
ATerm spaste_1 (ATerm, ATerm o_57 (ATerm));
ATerm Rec_2 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm));
ATerm Let_2 (ATerm, ATerm l_55 (ATerm), ATerm m_55 (ATerm));
ATerm sboundin_3 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm i_55 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm i_60 (ATerm, ATerm (ATerm)), ATerm j_60 (ATerm), ATerm k_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_60 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm CheckConsError_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_63 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm p_78 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm u_63 (ATerm));
ATerm restore_always_2 (ATerm, ATerm i_80 (ATerm), ATerm j_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_63 (ATerm));
ATerm scope_2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm e_57 (ATerm), ATerm f_57 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_63 (ATerm));
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm n_58 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm k_57 (ATerm));
ATerm Var_1 (ATerm, ATerm m_54 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm g_60 (ATerm), ATerm h_60 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm u_59 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm m_74 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm r_74 (ATerm));
ATerm substitute_6 (ATerm, ATerm s_60 (ATerm), ATerm t_60 (ATerm, ATerm (ATerm)), ATerm u_60 (ATerm), ATerm v_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_60 (ATerm, ATerm (ATerm)), ATerm x_60 (ATerm));
ATerm substitute_5 (ATerm, ATerm z_60 (ATerm), ATerm a_61 (ATerm, ATerm (ATerm)), ATerm b_61 (ATerm), ATerm c_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_61 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm l_58 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm m_58 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm e_46 (ATerm), ATerm f_46 (ATerm), ATerm g_46 (ATerm));
ATerm Overlay_3 (ATerm, ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm h_71 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm h_57 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm b_56 (ATerm), ATerm c_56 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm h_53 (ATerm));
ATerm BAM_3 (ATerm, ATerm m_52 (ATerm), ATerm n_52 (ATerm), ATerm o_52 (ATerm));
ATerm BA_2 (ATerm, ATerm k_52 (ATerm), ATerm l_52 (ATerm));
ATerm AM_2 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm));
ATerm MA_2 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm Match_1 (ATerm, ATerm j_56 (ATerm));
ATerm Build_1 (ATerm, ATerm k_56 (ATerm));
ATerm constructs_1 (ATerm, ATerm g_57 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm), ATerm p_53 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_55 (ATerm), ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm y_53 (ATerm));
ATerm Signature_1 (ATerm, ATerm x_53 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm isect_0 (ATerm);
ATerm new_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm l_80 (ATerm));
ATerm one_dist_1 (ATerm, ATerm n_74 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm c_75 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_79 (ATerm));
ATerm listtd_1 (ATerm, ATerm y_73 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm q_53 (ATerm));
ATerm Scope_2 (ATerm, ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm crush_3 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_79 (ATerm), ATerm q_79 (ATerm));
ATerm for_3 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm HdMember_1 (ATerm, ATerm x_68 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm t_58 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm r_75 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm n_60 (ATerm), ATerm o_60 (ATerm));
ATerm alltd_1 (ATerm, ATerm v_77 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm m_71 (ATerm));
ATerm zip_1 (ATerm, ATerm o_71 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm substitute_1 (ATerm, ATerm r_60 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm z_66 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm p_75 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm c_46 (ATerm), ATerm d_46 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_66 (ATerm), ATerm i_66 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_73 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_61 (ATerm));
ATerm map_1 (ATerm, ATerm w_72 (ATerm));
ATerm reverse_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_61 (ATerm));
ATerm Program_1 (ATerm, ATerm l_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm g_63 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_62 (ATerm), ATerm a_63 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_62 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  q_5 = t;
  o_5 :
  if(match_cons(q_5, sym_ExplodeCong_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      p_5 = ATgetArgument(q_5, 1);
      {
        ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
        ATerm y_5 = NULL;
        ATerm z_5 = NULL;
        t = new_0(t);
        {
          y_5 = t;
          {
            if(((u_5 != NULL) && (u_5 != y_5)))
              _fail(y_5);
            else
              u_5 = y_5;
            {
              ATerm a_6 = NULL;
              t = new_0(t);
              {
                z_5 = t;
                {
                  if(((v_5 != NULL) && (v_5 != z_5)))
                    _fail(z_5);
                  else
                    v_5 = z_5;
                  {
                    ATerm b_6 = NULL;
                    t = new_0(t);
                    {
                      a_6 = t;
                      {
                        if(((w_5 != NULL) && (w_5 != a_6)))
                          _fail(a_6);
                        else
                          w_5 = a_6;
                        {
                          t = new_0(t);
                          {
                            b_6 = t;
                            if(((x_5 != NULL) && (x_5 != b_6)))
                              _fail(b_6);
                            else
                              x_5 = b_6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_5)), not_null(w_5)), not_null(v_5)), not_null(u_5)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_5)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_5))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_5))))), (ATerm) ATmakeAppl(sym_Prim_2, term_m_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_5))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_5)))))));
      }
    }
  else
    {
      if(match_cons(q_5, sym_Build_1))
        {
          r_5 = ATgetArgument(q_5, 0);
          {
            ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
            ATerm h_6 = NULL;
            ATerm l_6 = NULL;
            t = new_0(t);
            {
              h_6 = t;
              {
                if(((f_6 != NULL) && (f_6 != h_6)))
                  _fail(h_6);
                else
                  f_6 = h_6;
                {
                  t = not_null(r_5);
                  {
                    ATerm b_0 (ATerm t)
                    {
                      ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
                      i_6 = t;
                      h_5 :
                      if(match_cons(i_6, sym_Explode_2))
                        {
                          j_6 = ATgetArgument(i_6, 0);
                          k_6 = ATgetArgument(i_6, 1);
                          {
                            if(((d_6 != NULL) && (d_6 != j_6)))
                              _fail(j_6);
                            else
                              d_6 = j_6;
                            {
                              if(((e_6 != NULL) && (e_6 != k_6)))
                                _fail(k_6);
                              else
                                e_6 = k_6;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_6));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, b_0);
                    {
                      l_6 = t;
                      if(((g_6 != NULL) && (g_6 != l_6)))
                        _fail(l_6);
                      else
                        g_6 = l_6;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_m_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_6)), not_null(d_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_6))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_6)))));
          }
        }
      else
        {
          if(match_cons(q_5, sym_Match_1))
            {
              r_5 = ATgetArgument(q_5, 0);
              {
                ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
                ATerm s_6 = NULL;
                ATerm t_6 = NULL;
                t = new_0(t);
                {
                  s_6 = t;
                  {
                    if(((p_6 != NULL) && (p_6 != s_6)))
                      _fail(s_6);
                    else
                      p_6 = s_6;
                    {
                      ATerm x_6 = NULL;
                      t = new_0(t);
                      {
                        t_6 = t;
                        {
                          if(((q_6 != NULL) && (q_6 != t_6)))
                            _fail(t_6);
                          else
                            q_6 = t_6;
                          {
                            t = not_null(r_5);
                            {
                              ATerm e_0 (ATerm t)
                              {
                                ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
                                u_6 = t;
                                m_5 :
                                if(match_cons(u_6, sym_Explode_2))
                                  {
                                    v_6 = ATgetArgument(u_6, 0);
                                    w_6 = ATgetArgument(u_6, 1);
                                    {
                                      if(((n_6 != NULL) && (n_6 != v_6)))
                                        _fail(v_6);
                                      else
                                        n_6 = v_6;
                                      {
                                        if(((o_6 != NULL) && (o_6 != w_6)))
                                          _fail(w_6);
                                        else
                                          o_6 = w_6;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_6));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, e_0);
                              {
                                x_6 = t;
                                if(((r_6 != NULL) && (r_6 != x_6)))
                                  _fail(x_6);
                                else
                                  r_6 = x_6;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_6)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_6))), (ATerm) ATmakeAppl(sym_Prim_2, term_n_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_6)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_6)), (ATerm) ATmakeAppl(sym_Op_2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_6)), not_null(n_6)))))));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym_Match_1))
    {
      y_7 = ATgetArgument(x_7, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
            ATerm d_8 = NULL;
            ATerm g_8 = NULL;
            t = new_0(t);
            {
              d_8 = t;
              {
                if(((b_8 != NULL) && (b_8 != d_8)))
                  _fail(d_8);
                else
                  b_8 = d_8;
                {
                  t = not_null(y_7);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm e_8 = NULL,f_8 = NULL;
                      e_8 = t;
                      q_7 :
                      if(match_cons(e_8, sym_RootApp_1))
                        {
                          f_8 = ATgetArgument(e_8, 0);
                          {
                            if(((a_8 != NULL) && (a_8 != f_8)))
                              _fail(f_8);
                            else
                              a_8 = f_8;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_8));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, f_0);
                    {
                      g_8 = t;
                      if(((c_8 != NULL) && (c_8 != g_8)))
                        _fail(g_8);
                      else
                        c_8 = g_8;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_8))), not_null(a_8))));
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
              ATerm m_8 = NULL;
              ATerm q_8 = NULL;
              t = new_0(t);
              {
                m_8 = t;
                {
                  if(((k_8 != NULL) && (k_8 != m_8)))
                    _fail(m_8);
                  else
                    k_8 = m_8;
                  {
                    t = not_null(y_7);
                    {
                      ATerm i_0 (ATerm t)
                      {
                        ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
                        n_8 = t;
                        u_7 :
                        if(match_cons(n_8, sym_App_2))
                          {
                            o_8 = ATgetArgument(n_8, 0);
                            p_8 = ATgetArgument(n_8, 1);
                            {
                              if(((j_8 != NULL) && (j_8 != o_8)))
                                _fail(o_8);
                              else
                                j_8 = o_8;
                              {
                                if(((i_8 != NULL) && (i_8 != p_8)))
                                  _fail(p_8);
                                else
                                  i_8 = p_8;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_8));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, i_0);
                      {
                        q_8 = t;
                        if(((l_8 != NULL) && (l_8 != q_8)))
                          _fail(q_8);
                        else
                          l_8 = q_8;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_8)), not_null(j_8)))));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp1_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
  d_9 = t;
  b_9 :
  if(match_cons(d_9, sym_Match_1))
    {
      e_9 = ATgetArgument(d_9, 0);
      c_9 :
      if(match_cons(e_9, sym_RootApp_1))
        {
          f_9 = ATgetArgument(e_9, 0);
          t = not_null(f_9);
        }
      else
        {
          if(match_cons(e_9, sym_App_2))
            {
              f_9 = ATgetArgument(e_9, 0);
              g_9 = ATgetArgument(e_9, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(f_9), not_null(g_9));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym_Match_1))
    {
      t_9 = ATgetArgument(s_9, 0);
      {
        ATerm v_9 = NULL,w_9 = NULL;
        ATerm a_10 = NULL;
        t = not_null(t_9);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
            x_9 = t;
            o_9 :
            if(match_cons(x_9, sym_RootApp_1))
              {
                y_9 = ATgetArgument(x_9, 0);
                p_9 :
                if(match_cons(y_9, sym_Match_1))
                  {
                    z_9 = ATgetArgument(y_9, 0);
                    {
                      if(((v_9 != NULL) && (v_9 != z_9)))
                        _fail(z_9);
                      else
                        v_9 = z_9;
                      t = not_null(v_9);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = pat_td_1(t, q_0);
          {
            a_10 = t;
            if(((w_9 != NULL) && (w_9 != a_10)))
              _fail(a_10);
            else
              w_9 = a_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(w_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_Build_1))
    {
      q_10 = ATgetArgument(p_10, 0);
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
            ATerm v_10 = NULL;
            ATerm y_10 = NULL;
            t = new_0(t);
            {
              v_10 = t;
              {
                if(((t_10 != NULL) && (t_10 != v_10)))
                  _fail(v_10);
                else
                  t_10 = v_10;
                {
                  t = not_null(q_10);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm w_10 = NULL,x_10 = NULL;
                      w_10 = t;
                      i_10 :
                      if(match_cons(w_10, sym_RootApp_1))
                        {
                          x_10 = ATgetArgument(w_10, 0);
                          {
                            if(((s_10 != NULL) && (s_10 != x_10)))
                              _fail(x_10);
                            else
                              s_10 = x_10;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, r_0);
                    {
                      y_10 = t;
                      if(((u_10 != NULL) && (u_10 != y_10)))
                        _fail(y_10);
                      else
                        u_10 = y_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_10), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_10))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_10))));
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm a_11 = NULL,b_11 = NULL,k_11 = NULL,l_11 = NULL;
              ATerm d_14 = NULL;
              ATerm h_14 = NULL;
              t = new_0(t);
              {
                d_14 = t;
                {
                  if(((k_11 != NULL) && (k_11 != d_14)))
                    _fail(d_14);
                  else
                    k_11 = d_14;
                  {
                    t = not_null(q_10);
                    {
                      ATerm s_0 (ATerm t)
                      {
                        ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
                        e_14 = t;
                        m_10 :
                        if(match_cons(e_14, sym_App_2))
                          {
                            f_14 = ATgetArgument(e_14, 0);
                            g_14 = ATgetArgument(e_14, 1);
                            {
                              if(((a_11 != NULL) && (a_11 != f_14)))
                                _fail(f_14);
                              else
                                a_11 = f_14;
                              {
                                if(((b_11 != NULL) && (b_11 != g_14)))
                                  _fail(g_14);
                                else
                                  b_11 = g_14;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, s_0);
                      {
                        h_14 = t;
                        if(((l_11 != NULL) && (l_11 != h_14)))
                          _fail(h_14);
                        else
                          l_11 = h_14;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_11), not_null(b_11), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_11)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_11))));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,o_17 = NULL,p_17 = NULL;
  k_15 = t;
  i_15 :
  if(match_cons(k_15, sym_Build_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      j_15 :
      if(match_cons(l_15, sym_RootApp_1))
        {
          o_17 = ATgetArgument(l_15, 0);
          t = not_null(o_17);
        }
      else
        {
          if(match_cons(l_15, sym_App_2))
            {
              o_17 = ATgetArgument(l_15, 0);
              p_17 = ATgetArgument(l_15, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_17)), not_null(o_17));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  r_19 :
  if(match_cons(y_20, sym_Explode_2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        ATerm k_21 = NULL;
        t = not_null(z_20);
        {
          ATerm w_21 = NULL;
          t = y_52(t);
          {
            k_21 = t;
            {
              t = not_null(a_21);
              {
                t = z_52(t);
                {
                  w_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(k_21), not_null(w_21));
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
ATerm pat_td_1 (ATerm t, ATerm c_57 (ATerm))
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_57(t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm u_0 (ATerm t)
              {
                t = pat_td_1(t, c_57);
                return(t);
              }
              t = fetch_1(t, u_0);
              return(t);
            }
            t = Op_2(t, _id, t_0);
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            {
              ATerm x_11 = t;
              int y_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_0 (ATerm t)
                  {
                    t = pat_td_1(t, c_57);
                    return(t);
                  }
                  t = Explode_2(t, _id, v_0);
                  LocalPopChoice(y_11);
                }
              else
                {
                  t = x_11;
                  {
                    ATerm w_0 (ATerm t)
                    {
                      t = pat_td_1(t, c_57);
                      return(t);
                    }
                    t = Explode_2(t, w_0, _id);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bapp0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_Build_1))
    {
      n_22 = ATgetArgument(m_22, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_22 = NULL,q_22 = NULL;
            ATerm w_22 = NULL;
            t = not_null(n_22);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
                t_22 = t;
                e_22 :
                if(match_cons(t_22, sym_RootApp_1))
                  {
                    u_22 = ATgetArgument(t_22, 0);
                    f_22 :
                    if(match_cons(u_22, sym_Build_1))
                      {
                        v_22 = ATgetArgument(u_22, 0);
                        {
                          if(((p_22 != NULL) && (p_22 != v_22)))
                            _fail(v_22);
                          else
                            p_22 = v_22;
                          t = not_null(p_22);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = pat_td_1(t, x_0);
              {
                w_22 = t;
                if(((q_22 != NULL) && (q_22 != w_22)))
                  _fail(w_22);
                else
                  q_22 = w_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_22));
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
              ATerm j_24 = NULL;
              t = not_null(n_22);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm b_23 = NULL,c_23 = NULL,i_23 = NULL,i_24 = NULL;
                  b_23 = t;
                  i_22 :
                  if(match_cons(b_23, sym_App_2))
                    {
                      c_23 = ATgetArgument(b_23, 0);
                      i_24 = ATgetArgument(b_23, 1);
                      j_22 :
                      if(match_cons(c_23, sym_Build_1))
                        {
                          i_23 = ATgetArgument(c_23, 0);
                          {
                            if(((z_22 != NULL) && (z_22 != i_23)))
                              _fail(i_23);
                            else
                              z_22 = i_23;
                            {
                              if(((y_22 != NULL) && (y_22 != i_24)))
                                _fail(i_24);
                              else
                                y_22 = i_24;
                              t = not_null(z_22);
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
                t = pat_td_1(t, y_0);
                {
                  j_24 = t;
                  if(((a_23 != NULL) && (a_23 != j_24)))
                    _fail(j_24);
                  else
                    a_23 = j_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_23));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  s_25 = t;
  j_25 :
  if(match_cons(s_25, sym_InfixApp_3))
    {
      t_25 = ATgetArgument(s_25, 0);
      p_25 = ATgetArgument(s_25, 1);
      o_25 = ATgetArgument(s_25, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(p_25), (ATerm) ATmakeAppl(sym_Op_2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(t_25))));
    }
  else
    {
      if(match_cons(s_25, sym_BAM_3))
        {
          t_25 = ATgetArgument(s_25, 0);
          p_25 = ATgetArgument(s_25, 1);
          o_25 = ATgetArgument(s_25, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(o_25))), not_null(t_25)), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_25))));
        }
      else
        {
          if(match_cons(s_25, sym_AM_2))
            {
              t_25 = ATgetArgument(s_25, 0);
              p_25 = ATgetArgument(s_25, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_25), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_25)));
            }
          else
            {
              if(match_cons(s_25, sym_MA_2))
                {
                  t_25 = ATgetArgument(s_25, 0);
                  p_25 = ATgetArgument(s_25, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(t_25)), not_null(p_25));
                }
              else
                {
                  if(match_cons(s_25, sym_BA_2))
                    {
                      t_25 = ATgetArgument(s_25, 0);
                      p_25 = ATgetArgument(s_25, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_25)), not_null(t_25));
                    }
                  else
                    {
                      if(match_cons(s_25, sym_Lets_2))
                        {
                          t_25 = ATgetArgument(s_25, 0);
                          p_25 = ATgetArgument(s_25, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_25), not_null(p_25));
                        }
                      else
                        {
                          if(match_cons(s_25, sym_LChoices_1))
                            {
                              t_25 = ATgetArgument(s_25, 0);
                              k_25 :
                              if(((ATgetType(t_25) == AT_LIST) && ((ATermList) t_25 != ATempty)))
                                {
                                  q_25 = ATgetFirst((ATermList) t_25);
                                  r_25 = (ATerm) ATgetNext((ATermList) t_25);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(q_25), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(r_25)));
                                }
                              else
                                {
                                  if(((ATermList) t_25 == ATempty))
                                    {
                                      t = term_b_12;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(s_25, sym_Choices_1))
                                {
                                  t_25 = ATgetArgument(s_25, 0);
                                  l_25 :
                                  if(((ATgetType(t_25) == AT_LIST) && ((ATermList) t_25 != ATempty)))
                                    {
                                      q_25 = ATgetFirst((ATermList) t_25);
                                      r_25 = (ATerm) ATgetNext((ATermList) t_25);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_25), (ATerm) ATmakeAppl(sym_Choices_1, not_null(r_25)));
                                    }
                                  else
                                    {
                                      if(((ATermList) t_25 == ATempty))
                                        {
                                          t = term_b_12;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(s_25, sym_Seqs_1))
                                    {
                                      t_25 = ATgetArgument(s_25, 0);
                                      n_25 :
                                      if(((ATgetType(t_25) == AT_LIST) && ((ATermList) t_25 != ATempty)))
                                        {
                                          q_25 = ATgetFirst((ATermList) t_25);
                                          r_25 = (ATerm) ATgetNext((ATermList) t_25);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_25), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(r_25)));
                                        }
                                      else
                                        {
                                          if(((ATermList) t_25 == ATempty))
                                            {
                                              t = term_c_12;
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
ATerm Wld_0 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  f_28 :
  if(!(match_cons(g_28, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm d_12 = t;
  if((PushChoice() == 0))
    {
      ATerm z_0 (ATerm t)
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, z_0);
      PopChoice();
      _fail(t);
    }
  else
    t = d_12;
  return(t);
}
ATerm App_2 (ATerm t, ATerm s_52 (ATerm), ATerm t_52 (ATerm))
{
  ATerm n_28 = NULL,t_28 = NULL,u_28 = NULL;
  n_28 = t;
  m_28 :
  if(match_cons(n_28, sym_App_2))
    {
      t_28 = ATgetArgument(n_28, 0);
      u_28 = ATgetArgument(n_28, 1);
      {
        ATerm x_28 = NULL;
        t = not_null(t_28);
        {
          ATerm z_28 = NULL;
          t = s_52(t);
          {
            x_28 = t;
            {
              t = not_null(u_28);
              {
                t = t_52(t);
                {
                  z_28 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_28), not_null(z_28));
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
ATerm Con_3 (ATerm t, ATerm p_52 (ATerm), ATerm q_52 (ATerm), ATerm r_52 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Con_3))
    {
      m_29 = ATgetArgument(l_29, 0);
      n_29 = ATgetArgument(l_29, 1);
      o_29 = ATgetArgument(l_29, 2);
      {
        ATerm s_29 = NULL;
        t = not_null(m_29);
        {
          ATerm u_29 = NULL;
          t = p_52(t);
          {
            s_29 = t;
            {
              t = not_null(n_29);
              {
                ATerm w_29 = NULL;
                t = q_52(t);
                {
                  u_29 = t;
                  {
                    t = not_null(o_29);
                    {
                      t = r_52(t);
                      {
                        w_29 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(s_29), not_null(u_29), not_null(w_29));
                      }
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
ATerm pureterm_0 (ATerm t)
{
  ATerm g_12 = t;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, a_1);
      PopChoice();
      _fail(t);
    }
  else
    t = g_12;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  g_30 = t;
  e_30 :
  if(match_cons(g_30, sym_SRule_1))
    {
      h_30 = ATgetArgument(g_30, 0);
      f_30 :
      if(match_cons(h_30, sym_StratRule_3))
        {
          i_30 = ATgetArgument(h_30, 0);
          j_30 = ATgetArgument(h_30, 1);
          k_30 = ATgetArgument(h_30, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_30)), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_30))), not_null(i_30)));
        }
      else
        {
          if(match_cons(h_30, sym_Rule_3))
            {
              i_30 = ATgetArgument(h_30, 0);
              j_30 = ATgetArgument(h_30, 1);
              k_30 = ATgetArgument(h_30, 2);
              {
                t = not_null(i_30);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(j_30);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(j_30))), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_30))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_30))));
              }
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm u_30 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_77(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = _one(t, u_30);
      }
    return(t);
  }
  t = u_30(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  k_31 = t;
  i_31 :
  if(match_cons(k_31, sym_SRule_1))
    {
      l_31 = ATgetArgument(k_31, 0);
      j_31 :
      if(match_cons(l_31, sym_Rule_3))
        {
          o_31 = ATgetArgument(l_31, 0);
          p_31 = ATgetArgument(l_31, 1);
          q_31 = ATgetArgument(l_31, 2);
          {
            ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
            ATerm c_32 = NULL;
            ATerm i_32 = NULL;
            t = new_0(t);
            {
              c_32 = t;
              {
                if(((z_31 != NULL) && (z_31 != c_32)))
                  _fail(c_32);
                else
                  z_31 = c_32;
                {
                  t = not_null(o_31);
                  {
                    ATerm q_32 = NULL;
                    ATerm b_1 (ATerm t)
                    {
                      ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
                      d_32 = t;
                      y_30 :
                      if(match_cons(d_32, sym_Con_3))
                        {
                          e_32 = ATgetArgument(d_32, 0);
                          g_32 = ATgetArgument(d_32, 1);
                          h_32 = ATgetArgument(d_32, 2);
                          z_30 :
                          if(match_cons(e_32, sym_Var_1))
                            {
                              f_32 = ATgetArgument(e_32, 0);
                              {
                                if(((y_31 != NULL) && (y_31 != f_32)))
                                  _fail(f_32);
                                else
                                  y_31 = f_32;
                                {
                                  if(((w_31 != NULL) && (w_31 != g_32)))
                                    _fail(g_32);
                                  else
                                    w_31 = g_32;
                                  {
                                    if(((u_31 != NULL) && (u_31 != h_32)))
                                      _fail(h_32);
                                    else
                                      u_31 = h_32;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_31));
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
                    t = oncetd_1(t, b_1);
                    {
                      i_32 = t;
                      {
                        if(((a_32 != NULL) && (a_32 != i_32)))
                          _fail(i_32);
                        else
                          a_32 = i_32;
                        {
                          t = not_null(p_31);
                          {
                            ATerm c_1 (ATerm t)
                            {
                              ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL;
                              j_32 = t;
                              d_31 :
                              if(match_cons(j_32, sym_Con_3))
                                {
                                  k_32 = ATgetArgument(j_32, 0);
                                  m_32 = ATgetArgument(j_32, 1);
                                  n_32 = ATgetArgument(j_32, 2);
                                  e_31 :
                                  if(match_cons(k_32, sym_Var_1))
                                    {
                                      l_32 = ATgetArgument(k_32, 0);
                                      f_31 :
                                      if(match_cons(n_32, sym_Call_2))
                                        {
                                          o_32 = ATgetArgument(n_32, 0);
                                          p_32 = ATgetArgument(n_32, 1);
                                          g_31 :
                                          if(((ATermList) p_32 == ATempty))
                                            {
                                              {
                                                if(((y_31 != NULL) && (y_31 != l_32)))
                                                  _fail(l_32);
                                                else
                                                  y_31 = l_32;
                                                {
                                                  if(((x_31 != NULL) && (x_31 != m_32)))
                                                    _fail(m_32);
                                                  else
                                                    x_31 = m_32;
                                                  {
                                                    if(((v_31 != NULL) && (v_31 != o_32)))
                                                      _fail(o_32);
                                                    else
                                                      v_31 = o_32;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_31));
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
                                  else
                                    _fail(t);
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1(t, c_1);
                            {
                              q_32 = t;
                              if(((b_32 != NULL) && (b_32 != q_32)))
                                _fail(q_32);
                              else
                                b_32 = q_32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_31)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_32), not_null(b_32), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_31), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(v_31), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_31), not_null(x_31), term_c_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_31)))))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, d_1);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm r_12 = t;
              int s_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_12 = t;
                  int u_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
                      LocalPopChoice(u_12);
                    }
                  else
                    {
                      t = t_12;
                      {
                        ATerm v_12 = t;
                        int w_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Bapp1_0(t);
                            LocalPopChoice(w_12);
                          }
                        else
                          {
                            t = v_12;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  LocalPopChoice(s_12);
                }
              else
                {
                  t = r_12;
                  {
                    ATerm x_12 = t;
                    int y_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_12 = t;
                        int a_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
                            LocalPopChoice(a_13);
                          }
                        else
                          {
                            t = z_12;
                            {
                              ATerm b_13 = t;
                              int c_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Mapp1_0(t);
                                  LocalPopChoice(c_13);
                                }
                              else
                                {
                                  t = b_13;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        LocalPopChoice(y_12);
                      }
                    else
                      {
                        t = x_12;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, f_1);
    }
    return(t);
  }
  t = topdown_1(t, e_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, g_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm a_54 (ATerm))
{
  ATerm b_33 = NULL,c_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym_Strategies_1))
    {
      c_33 = ATgetArgument(b_33, 0);
      {
        ATerm e_33 = NULL;
        t = not_null(c_33);
        {
          t = a_54(t);
          {
            e_33 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(e_33));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm c_54 (ATerm))
{
  ATerm l_33 = NULL,m_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym_Specification_1))
    {
      m_33 = ATgetArgument(l_33, 0);
      {
        ATerm o_33 = NULL;
        t = not_null(m_33);
        {
          t = c_54(t);
          {
            o_33 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(o_33));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm o_57 (ATerm))
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        t = split_2(t, _id, o_57);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
            y_33 = t;
            t_33 :
            if(match_cons(y_33, sym__2))
              {
                z_33 = ATgetArgument(y_33, 0);
                d_34 = ATgetArgument(y_33, 1);
                u_33 :
                if(match_cons(z_33, sym_SDef_3))
                  {
                    a_34 = ATgetArgument(z_33, 0);
                    b_34 = ATgetArgument(z_33, 1);
                    c_34 = ATgetArgument(z_33, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_34), not_null(b_34), not_null(c_34));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, i_1);
        }
        return(t);
      }
      t = Let_2(t, h_1, _id);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              t = split_2(t, _id, o_57);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
                  h_34 = t;
                  w_33 :
                  if(match_cons(h_34, sym__2))
                    {
                      i_34 = ATgetArgument(h_34, 0);
                      l_34 = ATgetArgument(h_34, 1);
                      x_33 :
                      if(match_cons(i_34, sym_VarDec_2))
                        {
                          j_34 = ATgetArgument(i_34, 0);
                          k_34 = ATgetArgument(i_34, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_34), not_null(k_34));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, k_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, j_1, _id);
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              ATerm l_1 (ATerm t)
              {
                t = o_57(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, l_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm))
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym_Rec_2))
    {
      w_34 = ATgetArgument(v_34, 0);
      x_34 = ATgetArgument(v_34, 1);
      {
        ATerm a_35 = NULL;
        t = not_null(w_34);
        {
          ATerm c_35 = NULL;
          t = j_55(t);
          {
            a_35 = t;
            {
              t = not_null(x_34);
              {
                t = k_55(t);
                {
                  c_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(a_35), not_null(c_35));
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
ATerm Let_2 (ATerm t, ATerm l_55 (ATerm), ATerm m_55 (ATerm))
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym_Let_2))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      {
        ATerm v_35 = NULL;
        t = not_null(r_35);
        {
          ATerm x_35 = NULL;
          t = l_55(t);
          {
            v_35 = t;
            {
              t = not_null(s_35);
              {
                t = m_55(t);
                {
                  x_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_35), not_null(x_35));
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
ATerm sboundin_3 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, p_57, p_57);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, r_57, r_57, p_57);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = Rec_2(t, r_57, p_57);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,k_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Rec_2))
    {
      f_36 = ATgetArgument(e_36, 0);
      k_36 = ATgetArgument(e_36, 1);
      t = (ATerm) ATinsert(ATempty, not_null(f_36));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  s_36 = t;
  r_36 :
  if(match_cons(s_36, sym_SDef_3))
    {
      t_36 = ATgetArgument(s_36, 0);
      u_36 = ATgetArgument(s_36, 1);
      v_36 = ATgetArgument(s_36, 2);
      {
        t = not_null(u_36);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
            z_36 = t;
            q_36 :
            if(match_cons(z_36, sym_VarDec_2))
              {
                a_37 = ATgetArgument(z_36, 0);
                b_37 = ATgetArgument(z_36, 1);
                t = not_null(a_37);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, m_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,v_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym_Let_2))
    {
      q_37 = ATgetArgument(p_37, 0);
      v_37 = ATgetArgument(p_37, 1);
      {
        t = not_null(q_37);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
            b_38 = t;
            l_37 :
            if(match_cons(b_38, sym_SDef_3))
              {
                c_38 = ATgetArgument(b_38, 0);
                d_38 = ATgetArgument(b_38, 1);
                e_38 = ATgetArgument(b_38, 2);
                t = not_null(c_38);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, n_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm i_55 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_SVar_1))
    {
      o_38 = ATgetArgument(n_38, 0);
      {
        ATerm q_38 = NULL;
        t = not_null(o_38);
        {
          t = i_55(t);
          {
            q_38 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(q_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, o_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm i_60 (ATerm, ATerm (ATerm)), ATerm j_60 (ATerm), ATerm k_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_60 (ATerm, ATerm (ATerm)))
{
  ATerm v_38 = NULL;
  v_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_38), (ATerm) ATempty);
    {
      ATerm y_38 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, i_60);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              {
                t = RnBinding_2(t, j_60, l_60);
                t = DistBinding_2(t, y_38, k_60);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, p_1);
        return(t);
      }
      t = y_38(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm z_38 (ATerm t, ATerm a_39 (ATerm))
  {
    t = Scope_2(t, a_39, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, z_38);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  i_39 = t;
  d_39 :
  if(match_cons(i_39, sym_SDef_3))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      l_39 = ATgetArgument(i_39, 2);
      {
        ATerm x_39 = NULL;
        ATerm y_39 = NULL;
        t = not_null(l_39);
        {
          t = tvars_0(t);
          {
            y_39 = t;
            if(((x_39 != NULL) && (x_39 != y_39)))
              _fail(y_39);
            else
              x_39 = y_39;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_39), not_null(k_39), (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_39), not_null(l_39)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  i_40 = t;
  d_40 :
  if(match_cons(i_40, sym_RDef_3))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      l_40 = ATgetArgument(i_40, 2);
      {
        ATerm p_40 = NULL;
        ATerm q_40 = NULL;
        t = not_null(l_40);
        {
          t = tvars_0(t);
          {
            q_40 = t;
            if(((p_40 != NULL) && (p_40 != q_40)))
              _fail(q_40);
            else
              p_40 = q_40;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_40), not_null(k_40), (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_40), (ATerm) ATmakeAppl(sym_SRule_1, not_null(l_40))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_40)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  h_41 = t;
  e_41 :
  if(match_cons(h_41, sym_OpDecl_2))
    {
      i_41 = ATgetArgument(h_41, 0);
      j_41 = ATgetArgument(h_41, 1);
      f_41 :
      if(match_cons(j_41, sym_FunType_2))
        {
          k_41 = ATgetArgument(j_41, 0);
          g_41 = ATgetArgument(j_41, 1);
          {
            ATerm o_41 = NULL,p_41 = NULL,x_41 = NULL;
            ATerm r_13;
            r_13 = t;
            {
              ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
              t = not_null(k_41);
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm q_41 = NULL,s_41 = NULL;
                  t = new_0(t);
                  {
                    ATerm s_13;
                    s_13 = t;
                    {
                      ATerm r_41 = NULL;
                      r_41 = t;
                      if(((q_41 != NULL) && (q_41 != r_41)))
                        _fail(r_41);
                      else
                        q_41 = r_41;
                    }
                    t = s_13;
                    {
                      ATerm t_41 = NULL;
                      t_41 = t;
                      if(((s_41 != NULL) && (s_41 != t_41)))
                        _fail(t_41);
                      else
                        s_41 = t_41;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(q_41), term_x_13), not_null(s_41));
                    }
                  }
                  return(t);
                }
                t = map_1(t, q_1);
                {
                  t = unzip_0(t);
                  {
                    u_41 = t;
                    c_41 :
                    if(match_cons(u_41, sym__2))
                      {
                        v_41 = ATgetArgument(u_41, 0);
                        w_41 = ATgetArgument(u_41, 1);
                        {
                          if(((o_41 != NULL) && (o_41 != v_41)))
                            _fail(v_41);
                          else
                            o_41 = v_41;
                          if(((p_41 != NULL) && (p_41 != w_41)))
                            _fail(w_41);
                          else
                            p_41 = w_41;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = r_13;
            {
              ATerm y_41 = NULL;
              t = not_null(p_41);
              {
                t = map_1(t, MkCall_0);
                {
                  y_41 = t;
                  if(((x_41 != NULL) && (x_41 != y_41)))
                    _fail(y_41);
                  else
                    x_41 = y_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_41), not_null(o_41), (ATerm) ATmakeAppl(sym_Cong_2, not_null(i_41), not_null(x_41)));
            }
          }
        }
      else
        {
          if(match_cons(j_41, sym_ConstType_1))
            {
              k_41 = ATgetArgument(j_41, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_41), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(i_41), (ATerm) ATempty));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Constructors_1))
    {
      r_42 = ATgetArgument(q_42, 0);
      {
        t = not_null(r_42);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(q_42, sym_Sorts_1))
        {
          r_42 = ATgetArgument(q_42, 0);
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm congdefs_0 (ATerm t)
{
  t = map_1(t, MkCongDefs_0);
  t = concat_0(t);
  return(t);
}
ATerm RulesToSdefs_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,b_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  o_44 = t;
  k_43 :
  if(match_cons(o_44, sym_Specification_1))
    {
      p_44 = ATgetArgument(o_44, 0);
      l_43 :
      if(((ATgetType(p_44) == AT_LIST) && ((ATermList) p_44 != ATempty)))
        {
          b_46 = ATgetFirst((ATermList) p_44);
          i_46 = (ATerm) ATgetNext((ATermList) p_44);
          m_43 :
          if(match_cons(b_46, sym_Signature_1))
            {
              h_46 = ATgetArgument(b_46, 0);
              n_43 :
              if(((ATgetType(i_46) == AT_LIST) && ((ATermList) i_46 != ATempty)))
                {
                  j_46 = ATgetFirst((ATermList) i_46);
                  l_46 = (ATerm) ATgetNext((ATermList) i_46);
                  o_43 :
                  if(match_cons(j_46, sym_Strategies_1))
                    {
                      k_46 = ATgetArgument(j_46, 0);
                      n_44 :
                      if(((ATermList) l_46 == ATempty))
                        {
                          {
                            ATerm o_46 = NULL;
                            ATerm p_46 = NULL,r_46 = NULL,t_46 = NULL;
                            ATerm y_13;
                            y_13 = t;
                            {
                              ATerm q_46 = NULL;
                              t = not_null(h_46);
                              {
                                t = congdefs_0(t);
                                {
                                  q_46 = t;
                                  if(((p_46 != NULL) && (p_46 != q_46)))
                                    _fail(q_46);
                                  else
                                    p_46 = q_46;
                                }
                              }
                            }
                            t = y_13;
                            {
                              ATerm s_46 = NULL;
                              t = not_null(k_46);
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  ATerm z_13 = t;
                                  int a_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(a_14);
                                    }
                                  else
                                    {
                                      t = z_13;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, r_1);
                                {
                                  s_46 = t;
                                  if(((r_46 != NULL) && (r_46 != s_46)))
                                    _fail(s_46);
                                  else
                                    r_46 = s_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_46), not_null(r_46));
                                {
                                  t = conc_0(t);
                                  {
                                    t_46 = t;
                                    if(((o_46 != NULL) && (o_46 != t_46)))
                                      _fail(t_46);
                                    else
                                      o_46 = t_46;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_46))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(h_46))));
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
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm z_46 = NULL;
  z_46 = t;
  t = SSL_int_to_string(not_null(z_46));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  h_47 :
  if(match_cons(i_47, sym_Op_2))
    {
      j_47 = ATgetArgument(i_47, 0);
      k_47 = ATgetArgument(i_47, 1);
      {
        ATerm p_47 = NULL,q_47 = NULL;
        ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
        t = term_b_14;
        {
          ATerm s_1 (ATerm t)
          {
            t = term_c_14;
            return(t);
          }
          t = rewrite_1(t, s_1);
          {
            r_47 = t;
            f_47 :
            if(match_cons(r_47, sym_Defined_3))
              {
                s_47 = ATgetArgument(r_47, 0);
                t_47 = ATgetArgument(r_47, 1);
                u_47 = ATgetArgument(r_47, 2);
                g_47 :
                if(match_string(s_47, "h_0"))
                  {
                    ATerm v_47 = NULL;
                    if(((q_47 != NULL) && (q_47 != t_47)))
                      _fail(t_47);
                    else
                      q_47 = t_47;
                    {
                      if(((p_47 != NULL) && (p_47 != u_47)))
                        _fail(u_47);
                      else
                        p_47 = u_47;
                      {
                        ATerm w_47 = NULL;
                        t = not_null(k_47);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              w_47 = t;
                              if(((v_47 != NULL) && (v_47 != w_47)))
                                _fail(w_47);
                              else
                                v_47 = w_47;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_p_14), not_null(v_47)), term_n_14), not_null(j_47)), term_m_14), term_l_14), not_null(q_47)), term_k_14), not_null(p_47)), term_j_14));
                          t = printnl_0(t);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(j_47), not_null(k_47));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
  c_48 = t;
  b_48 :
  if(((ATgetType(c_48) == AT_LIST) && ((ATermList) c_48 != ATempty)))
    {
      d_48 = ATgetFirst((ATermList) c_48);
      e_48 = (ATerm) ATgetNext((ATermList) c_48);
      t = not_null(d_48);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  j_48 :
  if(match_cons(k_48, sym__2))
    {
      l_48 = ATgetArgument(k_48, 0);
      m_48 = ATgetArgument(k_48, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_48), not_null(m_48));
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
ATerm rewrite_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm s_48 = NULL;
  ATerm u_48 = NULL;
  s_48 = t;
  {
    ATerm v_48 = NULL;
    t = term_q_14;
    {
      t = z_63(t);
      {
        v_48 = t;
        if(((u_48 != NULL) && (u_48 != v_48)))
          _fail(v_48);
        else
          u_48 = v_48;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(s_48));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  k_49 :
  if(match_cons(l_49, sym_Op_2))
    {
      m_49 = ATgetArgument(l_49, 0);
      n_49 = ATgetArgument(l_49, 1);
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_49 = NULL;
            ATerm s_49 = NULL;
            t = not_null(n_49);
            {
              q_49 = t;
              {
                t = length_0(t);
                {
                  s_49 = t;
                  {
                    ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(m_49), not_null(s_49));
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = term_t_14;
                        return(t);
                      }
                      t = rewrite_1(t, t_1);
                      {
                        u_49 = t;
                        d_49 :
                        if(match_cons(u_49, sym_Defined_2))
                          {
                            v_49 = ATgetArgument(u_49, 0);
                            w_49 = ATgetArgument(u_49, 1);
                            e_49 :
                            if(match_string(v_49, "d_0"))
                              {
                                if(((m_49 != NULL) && (m_49 != w_49)))
                                  _fail(w_49);
                                else
                                  m_49 = w_49;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(m_49), not_null(q_49));
                  }
                }
              }
            }
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
              ATerm z_49 = NULL;
              ATerm b_50 = NULL;
              t = not_null(n_49);
              {
                z_49 = t;
                {
                  t = length_0(t);
                  {
                    b_50 = t;
                    {
                      ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(m_49), not_null(b_50));
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = term_t_14;
                          return(t);
                        }
                        t = rewrite_1(t, u_1);
                        {
                          d_50 = t;
                          i_49 :
                          if(match_cons(d_50, sym_Defined_2))
                            {
                              e_50 = ATgetArgument(d_50, 0);
                              f_50 = ATgetArgument(d_50, 1);
                              j_49 :
                              if(match_string(e_50, "c_0"))
                                {
                                  if(((m_49 != NULL) && (m_49 != f_50)))
                                    _fail(f_50);
                                  else
                                    m_49 = f_50;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(m_49), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm o_50 (ATerm t)
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_78(t);
        {
          ATerm v_1 (ATerm t)
          {
            t = try_1(t, o_50);
            return(t);
          }
          t = _all(t, v_1);
        }
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = _some(t, o_50);
      }
    return(t);
  }
  t = o_50(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  r_50 :
  if(match_cons(s_50, sym__2))
    {
      t_50 = ATgetArgument(s_50, 0);
      u_50 = ATgetArgument(s_50, 1);
      {
        ATerm w_14;
        w_14 = t;
        {
          ATerm x_50 = NULL;
          ATerm y_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_50), not_null(u_50));
          {
            ATerm x_14 = t;
            int y_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(y_14);
              }
            else
              {
                t = x_14;
                t = (ATerm) ATempty;
              }
            {
              y_50 = t;
              if(((x_50 != NULL) && (x_50 != y_50)))
                _fail(y_50);
              else
                x_50 = y_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_50), not_null(u_50), not_null(x_50));
            t = table_put_0(t);
          }
        }
        t = w_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
  ATerm z_14;
  z_14 = t;
  {
    ATerm i_51 = NULL;
    ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
    t = u_63(t);
    {
      i_51 = t;
      {
        if(((g_51 != NULL) && (g_51 != i_51)))
          _fail(i_51);
        else
          g_51 = i_51;
        {
          ATerm a_15 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), term_c_15);
              t = table_get_0(t);
              LocalPopChoice(b_15);
            }
          else
            {
              t = a_15;
              t = term_d_15;
            }
          {
            j_51 = t;
            e_51 :
            if(((ATgetType(j_51) == AT_LIST) && ((ATermList) j_51 != ATempty)))
              {
                k_51 = ATgetFirst((ATermList) j_51);
                l_51 = (ATerm) ATgetNext((ATermList) j_51);
                {
                  if(((h_51 != NULL) && (h_51 != k_51)))
                    _fail(k_51);
                  else
                    h_51 = k_51;
                  {
                    if(((f_51 != NULL) && (f_51 != l_51)))
                      _fail(l_51);
                    else
                      f_51 = l_51;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_51), term_c_15, not_null(f_51));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_51);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm m_51 = NULL;
                              m_51 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_51), not_null(m_51));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, w_1);
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
  t = z_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm i_80 (ATerm), ATerm j_80 (ATerm))
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_80(t);
      t = j_80(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        t = j_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_63 (ATerm))
{
  ATerm t_51 = NULL;
  ATerm g_15;
  g_15 = t;
  {
    ATerm u_51 = NULL;
    ATerm v_51 = NULL;
    t = t_63(t);
    {
      u_51 = t;
      {
        if(((t_51 != NULL) && (t_51 != u_51)))
          _fail(u_51);
        else
          t_51 = u_51;
        {
          ATerm w_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_51), term_c_15);
          {
            ATerm h_15 = t;
            int m_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_15);
              }
            else
              {
                t = h_15;
                t = (ATerm) ATempty;
              }
            {
              w_51 = t;
              if(((v_51 != NULL) && (v_51 != w_51)))
                _fail(w_51);
              else
                v_51 = w_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_51), term_c_15, (ATerm) ATinsert(CheckATermList(not_null(v_51)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = g_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
{
  t = begin_scope_1(t, v_63);
  {
    ATerm x_1 (ATerm t)
    {
      t = end_scope_1(t, v_63);
      return(t);
    }
    t = restore_always_2(t, w_63, x_1);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm e_57 (ATerm), ATerm f_57 (ATerm))
{
  ATerm b_52 = NULL,c_52 = NULL;
  ATerm y_1 (ATerm t)
  {
    t = term_c_14;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm n_15;
    n_15 = t;
    {
      ATerm d_52 = NULL;
      ATerm e_52 = NULL;
      t = e_57(t);
      {
        d_52 = t;
        {
          if(((b_52 != NULL) && (b_52 != d_52)))
            _fail(d_52);
          else
            b_52 = d_52;
          {
            t = f_57(t);
            {
              e_52 = t;
              if(((c_52 != NULL) && (c_52 != e_52)))
                _fail(e_52);
              else
                c_52 = e_52;
            }
          }
        }
      }
    }
    t = n_15;
    {
      ATerm o_15;
      o_15 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATmakeAppl(sym_Defined_3, term_p_15, not_null(b_52), not_null(c_52)));
        {
          ATerm a_2 (ATerm t)
          {
            t = term_c_14;
            return(t);
          }
          t = assert_1(t, a_2);
        }
      }
      t = o_15;
      {
        ATerm b_2 (ATerm t)
        {
          ATerm q_15 = t;
          if((PushChoice() == 0))
            {
              t = CheckCons_0(t);
              PopChoice();
              _fail(t);
            }
          else
            t = q_15;
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, b_2);
      }
    }
    return(t);
  }
  t = scope_2(t, y_1, z_1);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
  a_53 = t;
  x_52 :
  if(match_cons(a_53, sym_SDef_3))
    {
      b_53 = ATgetArgument(a_53, 0);
      c_53 = ATgetArgument(a_53, 1);
      d_53 = ATgetArgument(a_53, 2);
      {
        t = not_null(d_53);
        {
          ATerm c_2 (ATerm t)
          {
            t = not_null(b_53);
            return(t);
          }
          ATerm d_2 (ATerm t)
          {
            t = term_r_15;
            return(t);
          }
          t = check_constructors_p__2(t, c_2, d_2);
        }
      }
    }
  else
    {
      if(match_cons(a_53, sym_RDef_3))
        {
          b_53 = ATgetArgument(a_53, 0);
          c_53 = ATgetArgument(a_53, 1);
          d_53 = ATgetArgument(a_53, 2);
          {
            t = not_null(d_53);
            {
              ATerm e_2 (ATerm t)
              {
                t = not_null(b_53);
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = term_s_15;
                return(t);
              }
              t = check_constructors_p__2(t, e_2, f_2);
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  e_54 :
  if(match_cons(f_54, sym__2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      {
        ATerm k_54 = NULL,l_54 = NULL,n_54 = NULL;
        ATerm t_15;
        t_15 = t;
        {
          ATerm o_54 = NULL;
          ATerm p_54 = NULL,s_54 = NULL,t_54 = NULL;
          t = x_63(t);
          {
            o_54 = t;
            {
              if(((k_54 != NULL) && (k_54 != o_54)))
                _fail(o_54);
              else
                k_54 = o_54;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_54), not_null(g_54), not_null(h_54));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_54), term_c_15);
                        t = table_get_0(t);
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = u_15;
                        t = term_d_15;
                      }
                    {
                      p_54 = t;
                      d_54 :
                      if(((ATgetType(p_54) == AT_LIST) && ((ATermList) p_54 != ATempty)))
                        {
                          s_54 = ATgetFirst((ATermList) p_54);
                          t_54 = (ATerm) ATgetNext((ATermList) p_54);
                          {
                            if(((l_54 != NULL) && (l_54 != s_54)))
                              _fail(s_54);
                            else
                              l_54 = s_54;
                            {
                              if(((n_54 != NULL) && (n_54 != t_54)))
                                _fail(t_54);
                              else
                                n_54 = t_54;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_54), term_c_15, (ATerm) ATinsert(CheckATermList(not_null(n_54)), (ATerm) ATinsert(CheckATermList(not_null(l_54)), not_null(g_54))));
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
        t = t_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  y_54 :
  if(match_cons(z_54, sym__2))
    {
      a_55 = ATgetArgument(z_54, 0);
      b_55 = ATgetArgument(z_54, 1);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_55), not_null(b_55));
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = SSL_addr(not_null(a_55), not_null(b_55));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_y_15;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_z_15;
    return(t);
  }
  t = foldr_3(t, g_2, add_0, h_2);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  u_55 = t;
  r_55 :
  if(match_cons(u_55, sym_OpDecl_2))
    {
      v_55 = ATgetArgument(u_55, 0);
      w_55 = ATgetArgument(u_55, 1);
      s_55 :
      if(match_cons(w_55, sym_FunType_2))
        {
          x_55 = ATgetArgument(w_55, 0);
          t_55 = ATgetArgument(w_55, 1);
          {
            ATerm d_56 = NULL;
            ATerm a_16;
            a_16 = t;
            {
              ATerm e_56 = NULL;
              t = not_null(x_55);
              {
                t = length_0(t);
                {
                  e_56 = t;
                  if(((d_56 != NULL) && (d_56 != e_56)))
                    _fail(e_56);
                  else
                    d_56 = e_56;
                }
              }
            }
            t = a_16;
            {
              ATerm b_16;
              b_16 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(v_55), not_null(d_56)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_16, not_null(v_55)));
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = term_t_14;
                    return(t);
                  }
                  t = assert_1(t, i_2);
                }
              }
              t = b_16;
            }
          }
        }
      else
        {
          if(match_cons(w_55, sym_ConstType_1))
            {
              x_55 = ATgetArgument(w_55, 0);
              {
                ATerm h_56 = NULL;
                ATerm d_16;
                d_16 = t;
                {
                  ATerm i_56 = NULL;
                  t = term_y_15;
                  {
                    i_56 = t;
                    if(((h_56 != NULL) && (h_56 != i_56)))
                      _fail(i_56);
                    else
                      h_56 = i_56;
                  }
                }
                t = d_16;
                {
                  ATerm e_16;
                  e_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(v_55), not_null(h_56)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_16, not_null(v_55)));
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = term_t_14;
                        return(t);
                      }
                      t = assert_1(t, j_2);
                    }
                  }
                  t = e_16;
                }
              }
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  u_57 = t;
  w_56 :
  if(match_cons(u_57, sym_Specification_1))
    {
      v_57 = ATgetArgument(u_57, 0);
      x_56 :
      if(((ATgetType(v_57) == AT_LIST) && ((ATermList) v_57 != ATempty)))
        {
          w_57 = ATgetFirst((ATermList) v_57);
          b_58 = (ATerm) ATgetNext((ATermList) v_57);
          y_56 :
          if(match_cons(w_57, sym_Signature_1))
            {
              x_57 = ATgetArgument(w_57, 0);
              z_56 :
              if(((ATgetType(x_57) == AT_LIST) && ((ATermList) x_57 != ATempty)))
                {
                  y_57 = ATgetFirst((ATermList) x_57);
                  a_58 = (ATerm) ATgetNext((ATermList) x_57);
                  a_57 :
                  if(match_cons(y_57, sym_Constructors_1))
                    {
                      z_57 = ATgetArgument(y_57, 0);
                      b_57 :
                      if(((ATermList) a_58 == ATempty))
                        {
                          j_57 :
                          if(((ATgetType(b_58) == AT_LIST) && ((ATermList) b_58 != ATempty)))
                            {
                              c_58 = ATgetFirst((ATermList) b_58);
                              e_58 = (ATerm) ATgetNext((ATermList) b_58);
                              s_57 :
                              if(match_cons(c_58, sym_Strategies_1))
                                {
                                  d_58 = ATgetArgument(c_58, 0);
                                  t_57 :
                                  if(((ATermList) e_58 == ATempty))
                                    {
                                      {
                                        ATerm h_58 = NULL;
                                        ATerm i_58 = NULL;
                                        ATerm j_58 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(z_57)), term_h_17), term_e_17), term_b_17), term_y_16), term_v_16), term_s_16), term_p_16), term_m_16), term_j_16);
                                        {
                                          i_58 = t;
                                          {
                                            if(((h_58 != NULL) && (h_58 != i_58)))
                                              _fail(i_58);
                                            else
                                              h_58 = i_58;
                                            {
                                              t = not_null(h_58);
                                              {
                                                t = map_1(t, GenerateCheckRule_0);
                                                {
                                                  t = not_null(d_58);
                                                  {
                                                    t = filter_1(t, check_constructors_0);
                                                    {
                                                      j_58 = t;
                                                      v_56 :
                                                      if(((ATermList) j_58 == ATempty))
                                                        {
                                                          {
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
                                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(d_58))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(h_58))))));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays2_1 (ATerm t, ATerm n_58 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm i_17;
    i_17 = t;
    {
      ATerm j_17 = t;
      if((PushChoice() == 0))
        {
          ATerm v_58 = NULL;
          t = n_58(t);
          {
            v_58 = t;
            q_58 :
            if(((ATermList) v_58 == ATempty))
              {
                {
                }
              }
            else
              _fail(t);
          }
          PopChoice();
          _fail(t);
        }
      else
        t = j_17;
    }
    t = i_17;
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          t = ExpOverlay_1(t, n_58);
          return(t);
        }
        t = try_1(t, m_2);
        return(t);
      }
      t = topdown_1(t, l_2);
    }
    return(t);
  }
  t = try_1(t, k_2);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
  e_59 = t;
  c_59 :
  if(match_cons(e_59, sym_BuildDefault_1))
    {
      f_59 = ATgetArgument(e_59, 0);
      t = term_c_12;
    }
  else
    {
      if(match_cons(e_59, sym_Real_1))
        {
          f_59 = ATgetArgument(e_59, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(f_59)));
        }
      else
        {
          if(match_cons(e_59, sym_Int_1))
            {
              f_59 = ATgetArgument(e_59, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(f_59)));
            }
          else
            {
              if(match_cons(e_59, sym_Str_1))
                {
                  f_59 = ATgetArgument(e_59, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_59)));
                }
              else
                {
                  if(match_cons(e_59, sym_Op_2))
                    {
                      f_59 = ATgetArgument(e_59, 0);
                      d_59 = ATgetArgument(e_59, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_59)), not_null(d_59));
                    }
                  else
                    {
                      if(match_cons(e_59, sym_Var_1))
                        {
                          f_59 = ATgetArgument(e_59, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_59)), (ATerm) ATempty);
                        }
                      else
                        _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm Op_2 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm y_59 = NULL,z_59 = NULL,c_60 = NULL;
  y_59 = t;
  x_59 :
  if(match_cons(y_59, sym_Op_2))
    {
      z_59 = ATgetArgument(y_59, 0);
      c_60 = ATgetArgument(y_59, 1);
      {
        ATerm f_60 = NULL;
        t = not_null(z_59);
        {
          ATerm f_61 = NULL;
          t = q_54(t);
          {
            f_60 = t;
            {
              t = not_null(c_60);
              {
                t = r_54(t);
                {
                  f_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(f_60), not_null(f_61));
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
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm o_2 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, o_2);
    return(t);
  }
  t = try_1(t, n_2);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  q_61 = t;
  p_61 :
  if(match_cons(q_61, sym_Overlay_3))
    {
      r_61 = ATgetArgument(q_61, 0);
      s_61 = ATgetArgument(q_61, 1);
      t_61 = ATgetArgument(q_61, 2);
      {
        ATerm d_62 = NULL,h_62 = NULL;
        ATerm k_17;
        k_17 = t;
        {
          ATerm g_62 = NULL;
          t = not_null(s_61);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm e_62 = NULL;
              ATerm f_62 = NULL;
              f_62 = t;
              if(((e_62 != NULL) && (e_62 != f_62)))
                _fail(f_62);
              else
                e_62 = f_62;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(e_62), term_x_13);
              return(t);
            }
            t = map_1(t, p_2);
            {
              g_62 = t;
              if(((d_62 != NULL) && (d_62 != g_62)))
                _fail(g_62);
              else
                d_62 = g_62;
            }
          }
        }
        t = k_17;
        {
          ATerm i_62 = NULL;
          t = not_null(t_61);
          {
            t = trm_to_cong_0(t);
            {
              i_62 = t;
              if(((h_62 != NULL) && (h_62 != i_62)))
                _fail(i_62);
              else
                h_62 = i_62;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_61), not_null(d_62), not_null(h_62));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm k_57 (ATerm))
{
  t = Scope_2(t, k_57, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm q_62 = NULL,r_62 = NULL;
  q_62 = t;
  p_62 :
  if(match_cons(q_62, sym_Var_1))
    {
      r_62 = ATgetArgument(q_62, 0);
      {
        ATerm t_62 = NULL;
        t = not_null(r_62);
        {
          t = m_54(t);
          {
            t_62 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_62));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL;
  i_63 = t;
  h_63 :
  if(match_cons(i_63, sym__3))
    {
      j_63 = ATgetArgument(i_63, 0);
      k_63 = ATgetArgument(i_63, 1);
      l_63 = ATgetArgument(i_63, 2);
      {
        t = not_null(j_63);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm r_63 = NULL;
            r_63 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_63), not_null(l_63));
              t = a_60(t);
            }
            return(t);
          }
          ATerm r_2 (ATerm t)
          {
            ATerm y_63 = NULL;
            y_63 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_63), not_null(k_63));
              t = a_60(t);
            }
            return(t);
          }
          t = b_60(t, q_2, r_2, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm g_60 (ATerm), ATerm h_60 (ATerm, ATerm (ATerm)))
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL;
  l_64 = t;
  k_64 :
  if(match_cons(l_64, sym__2))
    {
      m_64 = ATgetArgument(l_64, 0);
      n_64 = ATgetArgument(l_64, 1);
      {
        ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,y_64 = NULL;
        ATerm l_17;
        l_17 = t;
        {
          ATerm t_64 = NULL;
          t = not_null(m_64);
          {
            ATerm u_64 = NULL;
            t = g_60(t);
            {
              t_64 = t;
              {
                if(((q_64 != NULL) && (q_64 != t_64)))
                  _fail(t_64);
                else
                  q_64 = t_64;
                {
                  ATerm v_64 = NULL,x_64 = NULL;
                  t = map_1(t, new_0);
                  {
                    u_64 = t;
                    {
                      if(((r_64 != NULL) && (r_64 != u_64)))
                        _fail(u_64);
                      else
                        r_64 = u_64;
                      {
                        ATerm w_64 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(r_64));
                        {
                          t = zip_1(t, _id);
                          {
                            w_64 = t;
                            if(((v_64 != NULL) && (v_64 != w_64)))
                              _fail(w_64);
                            else
                              v_64 = w_64;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_64), not_null(n_64));
                          {
                            t = conc_0(t);
                            {
                              x_64 = t;
                              if(((s_64 != NULL) && (s_64 != x_64)))
                                _fail(x_64);
                              else
                                s_64 = x_64;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = l_17;
        {
          ATerm z_64 = NULL;
          t = not_null(m_64);
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(r_64);
              return(t);
            }
            t = h_60(t, s_2);
            {
              z_64 = t;
              if(((y_64 != NULL) && (y_64 != z_64)))
                _fail(z_64);
              else
                y_64 = z_64;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(y_64), not_null(n_64), not_null(s_64));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm m_65 = NULL;
  ATerm o_65 = NULL,p_65 = NULL;
  m_65 = t;
  {
    ATerm q_65 = NULL;
    ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
    t = not_null(m_65);
    {
      q_65 = t;
      {
        t = SSL_explode_term(not_null(q_65));
        {
          s_65 = t;
          j_65 :
          if(match_cons(s_65, sym__2))
            {
              t_65 = ATgetArgument(s_65, 0);
              u_65 = ATgetArgument(s_65, 1);
              k_65 :
              if(match_string(t_65, ""))
                {
                  l_65 :
                  if(((ATgetType(u_65) == AT_LIST) && ((ATermList) u_65 != ATempty)))
                    {
                      v_65 = ATgetFirst((ATermList) u_65);
                      w_65 = (ATerm) ATgetNext((ATermList) u_65);
                      {
                        if(((p_65 != NULL) && (p_65 != v_65)))
                          _fail(v_65);
                        else
                          p_65 = v_65;
                        if(((o_65 != NULL) && (o_65 != w_65)))
                          _fail(w_65);
                        else
                          o_65 = w_65;
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
      }
    }
    t = not_null(p_65);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm u_59 (ATerm, ATerm (ATerm)))
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  b_66 :
  if(match_cons(c_66, sym__2))
    {
      d_66 = ATgetArgument(c_66, 0);
      e_66 = ATgetArgument(c_66, 1);
      {
        t = not_null(d_66);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              t = not_null(e_66);
              return(t);
            }
            t = split_2(t, _id, u_2);
            t = lookup_0(t);
            return(t);
          }
          t = u_59(t, t_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(match_cons(n_66, sym__2))
    {
      o_66 = ATgetArgument(n_66, 0);
      p_66 = ATgetArgument(n_66, 1);
      {
        t = not_null(o_66);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm s_66 = NULL;
            s_66 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_66), not_null(p_66));
              t = m_74(t);
            }
            return(t);
          }
          t = _all(t, v_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm w_66 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_74(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = all_dist_1(t, w_66);
      }
    return(t);
  }
  t = w_66(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm s_60 (ATerm), ATerm t_60 (ATerm, ATerm (ATerm)), ATerm u_60 (ATerm), ATerm v_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_60 (ATerm, ATerm (ATerm)), ATerm x_60 (ATerm))
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  t = subs_args_0(t);
  {
    a_67 = t;
    y_66 :
    if(match_cons(a_67, sym__2))
      {
        b_67 = ATgetArgument(a_67, 0);
        c_67 = ATgetArgument(a_67, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_67), (ATerm) ATempty);
          {
            ATerm g_67 (ATerm t)
            {
              ATerm w_2 (ATerm t)
              {
                ATerm q_17 = t;
                int r_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, t_60);
                    LocalPopChoice(r_17);
                  }
                else
                  {
                    t = q_17;
                    {
                      ATerm s_17 = t;
                      int t_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              t = not_null(b_67);
                              return(t);
                            }
                            t = SubsVar_2(t, s_60, x_2);
                            t = x_60(t);
                          }
                          LocalPopChoice(t_17);
                        }
                      else
                        {
                          t = s_17;
                          {
                            t = RnBinding_2(t, u_60, w_60);
                            t = DistBinding_2(t, g_67, v_60);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, w_2);
              return(t);
            }
            t = g_67(t);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_5 (ATerm t, ATerm z_60 (ATerm), ATerm a_61 (ATerm, ATerm (ATerm)), ATerm b_61 (ATerm), ATerm c_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_61 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, z_60, a_61, b_61, c_61, d_61, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm h_67 (ATerm t, ATerm i_67 (ATerm))
  {
    t = Scope_2(t, i_67, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, h_67);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm l_58 (ATerm))
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  p_67 :
  if(match_cons(q_67, sym_Op_2))
    {
      r_67 = ATgetArgument(q_67, 0);
      s_67 = ATgetArgument(q_67, 1);
      {
        ATerm a_68 = NULL,b_68 = NULL;
        t = l_58(t);
        {
          ATerm y_2 (ATerm t)
          {
            ATerm u_17;
            u_17 = t;
            {
              ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
              c_68 = t;
              o_67 :
              if(match_cons(c_68, sym_Overlay_3))
                {
                  d_68 = ATgetArgument(c_68, 0);
                  e_68 = ATgetArgument(c_68, 1);
                  f_68 = ATgetArgument(c_68, 2);
                  {
                    ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,k_68 = NULL;
                    if(((r_67 != NULL) && (r_67 != d_68)))
                      _fail(d_68);
                    else
                      r_67 = d_68;
                    {
                      if(((g_68 != NULL) && (g_68 != e_68)))
                        _fail(e_68);
                      else
                        g_68 = e_68;
                      {
                        if(((h_68 != NULL) && (h_68 != f_68)))
                          _fail(f_68);
                        else
                          h_68 = f_68;
                        {
                          ATerm v_17;
                          v_17 = t;
                          {
                            ATerm j_68 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_68), not_null(s_67));
                            {
                              t = zip_1(t, _id);
                              {
                                j_68 = t;
                                if(((i_68 != NULL) && (i_68 != j_68)))
                                  _fail(j_68);
                                else
                                  i_68 = j_68;
                              }
                            }
                          }
                          t = v_17;
                          {
                            ATerm l_68 = NULL;
                            t = not_null(i_68);
                            {
                              k_68 = t;
                              {
                                if(((a_68 != NULL) && (a_68 != k_68)))
                                  _fail(k_68);
                                else
                                  a_68 = k_68;
                                {
                                  t = not_null(h_68);
                                  {
                                    l_68 = t;
                                    {
                                      if(((b_68 != NULL) && (b_68 != l_68)))
                                        _fail(l_68);
                                      else
                                        b_68 = l_68;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_68), not_null(h_68));
                                    }
                                  }
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
            t = u_17;
            return(t);
          }
          t = fetch_1(t, y_2);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_68), not_null(b_68));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm w_17;
    w_17 = t;
    {
      ATerm x_17 = t;
      if((PushChoice() == 0))
        {
          ATerm t_68 = NULL;
          t = m_58(t);
          {
            t_68 = t;
            r_68 :
            if(((ATermList) t_68 == ATempty))
              {
                {
                }
              }
            else
              _fail(t);
          }
          PopChoice();
          _fail(t);
        }
      else
        t = x_17;
    }
    t = w_17;
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          t = ExpOverlay_1(t, m_58);
          return(t);
        }
        t = repeat_1(t, b_3);
        return(t);
      }
      t = topdown_1(t, a_3);
    }
    return(t);
  }
  t = try_1(t, z_2);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL;
  o_69 = t;
  c_69 :
  if(match_cons(o_69, sym_Specification_1))
    {
      p_69 = ATgetArgument(o_69, 0);
      d_69 :
      if(((ATgetType(p_69) == AT_LIST) && ((ATermList) p_69 != ATempty)))
        {
          q_69 = ATgetFirst((ATermList) p_69);
          s_69 = (ATerm) ATgetNext((ATermList) p_69);
          e_69 :
          if(match_cons(q_69, sym_Signature_1))
            {
              r_69 = ATgetArgument(q_69, 0);
              g_69 :
              if(((ATgetType(s_69) == AT_LIST) && ((ATermList) s_69 != ATempty)))
                {
                  t_69 = ATgetFirst((ATermList) s_69);
                  v_69 = (ATerm) ATgetNext((ATermList) s_69);
                  h_69 :
                  if(match_cons(t_69, sym_Overlays_1))
                    {
                      u_69 = ATgetArgument(t_69, 0);
                      l_69 :
                      if(((ATgetType(v_69) == AT_LIST) && ((ATermList) v_69 != ATempty)))
                        {
                          w_69 = ATgetFirst((ATermList) v_69);
                          y_69 = (ATerm) ATgetNext((ATermList) v_69);
                          m_69 :
                          if(match_cons(w_69, sym_Strategies_1))
                            {
                              x_69 = ATgetArgument(w_69, 0);
                              n_69 :
                              if(((ATermList) y_69 == ATempty))
                                {
                                  {
                                    ATerm c_70 = NULL,e_70 = NULL;
                                    ATerm y_17;
                                    y_17 = t;
                                    {
                                      ATerm d_70 = NULL;
                                      t = not_null(u_69);
                                      {
                                        ATerm c_3 (ATerm t)
                                        {
                                          t = not_null(u_69);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, c_3);
                                        {
                                          d_70 = t;
                                          if(((c_70 != NULL) && (c_70 != d_70)))
                                            _fail(d_70);
                                          else
                                            c_70 = d_70;
                                        }
                                      }
                                    }
                                    t = y_17;
                                    {
                                      ATerm f_70 = NULL,h_70 = NULL,j_70 = NULL;
                                      ATerm z_17;
                                      z_17 = t;
                                      {
                                        ATerm g_70 = NULL;
                                        t = not_null(u_69);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            g_70 = t;
                                            if(((f_70 != NULL) && (f_70 != g_70)))
                                              _fail(g_70);
                                            else
                                              f_70 = g_70;
                                          }
                                        }
                                      }
                                      t = z_17;
                                      {
                                        ATerm i_70 = NULL;
                                        t = not_null(x_69);
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            t = not_null(c_70);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, d_3);
                                          {
                                            i_70 = t;
                                            if(((h_70 != NULL) && (h_70 != i_70)))
                                              _fail(i_70);
                                            else
                                              h_70 = i_70;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_70), not_null(h_70));
                                          {
                                            t = conc_0(t);
                                            {
                                              j_70 = t;
                                              if(((e_70 != NULL) && (e_70 != j_70)))
                                                _fail(j_70);
                                              else
                                                e_70 = j_70;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(e_70))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(r_69))));
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
    }
  else
    _fail(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_18;
  a_18 = t;
  {
    ATerm q_70 = NULL;
    ATerm r_70 = NULL;
    r_70 = t;
    if(((q_70 != NULL) && (q_70 != r_70)))
      _fail(r_70);
    else
      q_70 = r_70;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(q_70));
      t = printnl_0(t);
    }
  }
  t = a_18;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm b_18;
  b_18 = t;
  {
    t = error_0(t);
    {
      t = term_z_15;
      t = exit_0(t);
    }
  }
  t = b_18;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
  x_70 = t;
  w_70 :
  if(match_cons(x_70, sym__3))
    {
      y_70 = ATgetArgument(x_70, 0);
      z_70 = ATgetArgument(x_70, 1);
      a_71 = ATgetArgument(x_70, 2);
      {
        ATerm e_71 = NULL,g_71 = NULL;
        ATerm c_18;
        c_18 = t;
        {
          ATerm f_71 = NULL;
          t = not_null(y_70);
          {
            t = MsgU_0(t);
            {
              f_71 = t;
              if(((e_71 != NULL) && (e_71 != f_71)))
                _fail(f_71);
              else
                e_71 = f_71;
            }
          }
        }
        t = c_18;
        {
          ATerm i_71 = NULL;
          t = not_null(a_71);
          {
            t = MsgE_0(t);
            {
              i_71 = t;
              if(((g_71 != NULL) && (g_71 != i_71)))
                _fail(i_71);
              else
                g_71 = i_71;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_71)), not_null(e_71));
            t = concat_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MsgE_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  b_72 = t;
  v_71 :
  if(((ATgetType(b_72) == AT_LIST) && ((ATermList) b_72 != ATempty)))
    {
      z_71 = ATgetFirst((ATermList) b_72);
      a_72 = (ATerm) ATgetNext((ATermList) b_72);
      w_71 :
      if(((ATgetType(a_72) == AT_LIST) && ((ATermList) a_72 != ATempty)))
        {
          x_71 = ATgetFirst((ATermList) a_72);
          y_71 = (ATerm) ATgetNext((ATermList) a_72);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(term_f_18), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_71)), not_null(x_71)), not_null(z_71))), term_d_18);
        }
      else
        {
          if(((ATermList) a_72 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(term_f_18), not_null(z_71)), term_g_18);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) b_72 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgU_0 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL;
  s_72 = t;
  m_72 :
  if(((ATgetType(s_72) == AT_LIST) && ((ATermList) s_72 != ATempty)))
    {
      q_72 = ATgetFirst((ATermList) s_72);
      r_72 = (ATerm) ATgetNext((ATermList) s_72);
      n_72 :
      if(((ATgetType(r_72) == AT_LIST) && ((ATermList) r_72 != ATempty)))
        {
          o_72 = ATgetFirst((ATermList) r_72);
          p_72 = (ATerm) ATgetNext((ATermList) r_72);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(term_i_18), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_72)), not_null(o_72)), not_null(q_72))), term_d_18);
        }
      else
        {
          if(((ATermList) r_72 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(term_i_18), not_null(q_72)), term_g_18);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) s_72 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm MsgS_0 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,m_73 = NULL,n_73 = NULL;
  i_73 = t;
  h_73 :
  if(match_cons(i_73, sym__3))
    {
      j_73 = ATgetArgument(i_73, 0);
      m_73 = ATgetArgument(i_73, 1);
      n_73 = ATgetArgument(i_73, 2);
      {
        ATerm r_73 = NULL,t_73 = NULL;
        ATerm j_18;
        j_18 = t;
        {
          ATerm s_73 = NULL;
          t = not_null(j_73);
          {
            t = MsgU_0(t);
            {
              s_73 = t;
              if(((r_73 != NULL) && (r_73 != s_73)))
                _fail(s_73);
              else
                r_73 = s_73;
            }
          }
        }
        t = j_18;
        {
          ATerm u_73 = NULL;
          t = not_null(n_73);
          {
            t = MsgE_0(t);
            {
              u_73 = t;
              if(((t_73 != NULL) && (t_73 != u_73)))
                _fail(u_73);
              else
                t_73 = u_73;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_73)), not_null(r_73));
            t = concat_0(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkMsg_0 (ATerm t)
{
  ATerm h_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL;
  h_74 = t;
  g_74 :
  if(match_cons(h_74, sym_Overlay_3))
    {
      j_74 = ATgetArgument(h_74, 0);
      k_74 = ATgetArgument(h_74, 1);
      l_74 = ATgetArgument(h_74, 2);
      {
        ATerm t_74 = NULL;
        ATerm u_74 = NULL;
        t = not_null(l_74);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              u_74 = t;
              if(((t_74 != NULL) && (t_74 != u_74)))
                _fail(u_74);
              else
                t_74 = u_74;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(t_74)), term_l_18), not_null(j_74)), term_k_18);
      }
    }
  else
    {
      if(match_cons(h_74, sym_SDef_3))
        {
          j_74 = ATgetArgument(h_74, 0);
          k_74 = ATgetArgument(h_74, 1);
          l_74 = ATgetArgument(h_74, 2);
          {
            ATerm y_74 = NULL;
            ATerm z_74 = NULL;
            t = not_null(l_74);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  z_74 = t;
                  if(((y_74 != NULL) && (y_74 != z_74)))
                    _fail(z_74);
                  else
                    y_74 = z_74;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_74)), term_l_18), not_null(j_74)), term_m_18);
          }
        }
      else
        {
          if(match_cons(h_74, sym_RDef_3))
            {
              j_74 = ATgetArgument(h_74, 0);
              k_74 = ATgetArgument(h_74, 1);
              l_74 = ATgetArgument(h_74, 2);
              {
                ATerm f_75 = NULL;
                ATerm g_75 = NULL;
                t = not_null(l_74);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      g_75 = t;
                      if(((f_75 != NULL) && (f_75 != g_75)))
                        _fail(g_75);
                      else
                        f_75 = g_75;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(f_75)), term_l_18), not_null(j_74)), term_n_18);
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm err_msg_0 (ATerm t)
{
  t = MkMsg_0(t);
  t = fatal_error_0(t);
  return(t);
}
ATerm _3 (ATerm t, ATerm e_46 (ATerm), ATerm f_46 (ATerm), ATerm g_46 (ATerm))
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  w_75 = t;
  v_75 :
  if(match_cons(w_75, sym__3))
    {
      x_75 = ATgetArgument(w_75, 0);
      y_75 = ATgetArgument(w_75, 1);
      z_75 = ATgetArgument(w_75, 2);
      {
        ATerm d_76 = NULL;
        t = not_null(x_75);
        {
          ATerm f_76 = NULL;
          t = e_46(t);
          {
            d_76 = t;
            {
              t = not_null(y_75);
              {
                ATerm h_76 = NULL;
                t = f_46(t);
                {
                  f_76 = t;
                  {
                    t = not_null(z_75);
                    {
                      t = g_46(t);
                      {
                        h_76 = t;
                        t = (ATerm) ATmakeAppl(sym__3, not_null(d_76), not_null(f_76), not_null(h_76));
                      }
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
ATerm Overlay_3 (ATerm t, ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm))
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  s_76 = t;
  r_76 :
  if(match_cons(s_76, sym_Overlay_3))
    {
      t_76 = ATgetArgument(s_76, 0);
      u_76 = ATgetArgument(s_76, 1);
      v_76 = ATgetArgument(s_76, 2);
      {
        ATerm z_76 = NULL;
        t = not_null(t_76);
        {
          ATerm b_77 = NULL;
          t = u_53(t);
          {
            z_76 = t;
            {
              t = not_null(u_76);
              {
                ATerm d_77 = NULL;
                t = v_53(t);
                {
                  b_77 = t;
                  {
                    t = not_null(v_76);
                    {
                      t = w_53(t);
                      {
                        d_77 = t;
                        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(z_76), not_null(b_77), not_null(d_77));
                      }
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
ATerm Union_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL;
  s_77 = t;
  p_77 :
  if(match_cons(s_77, sym__2))
    {
      t_77 = ATgetArgument(s_77, 0);
      z_77 = ATgetArgument(s_77, 1);
      q_77 :
      if(match_cons(t_77, sym__3))
        {
          u_77 = ATgetArgument(t_77, 0);
          x_77 = ATgetArgument(t_77, 1);
          y_77 = ATgetArgument(t_77, 2);
          r_77 :
          if(match_cons(z_77, sym__3))
            {
              a_78 = ATgetArgument(z_77, 0);
              b_78 = ATgetArgument(z_77, 1);
              c_78 = ATgetArgument(z_77, 2);
              {
                ATerm j_78 = NULL,l_78 = NULL,n_78 = NULL;
                ATerm o_18;
                o_18 = t;
                {
                  ATerm k_78 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_77), not_null(a_78));
                  {
                    t = union_0(t);
                    {
                      k_78 = t;
                      if(((j_78 != NULL) && (j_78 != k_78)))
                        _fail(k_78);
                      else
                        j_78 = k_78;
                    }
                  }
                }
                t = o_18;
                {
                  ATerm p_18;
                  p_18 = t;
                  {
                    ATerm m_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_77), not_null(b_78));
                    {
                      t = union_0(t);
                      {
                        m_78 = t;
                        if(((l_78 != NULL) && (l_78 != m_78)))
                          _fail(m_78);
                        else
                          l_78 = m_78;
                      }
                    }
                  }
                  t = p_18;
                  {
                    ATerm o_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_77), not_null(c_78));
                    {
                      t = union_0(t);
                      {
                        o_78 = t;
                        if(((n_78 != NULL) && (n_78 != o_78)))
                          _fail(o_78);
                        else
                          n_78 = o_78;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(j_78), not_null(l_78), not_null(n_78));
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
  else
    _fail(t);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm g_79 = NULL;
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL;
  g_79 = t;
  {
    ATerm l_79 = NULL;
    ATerm n_79 = NULL,o_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
    t = not_null(g_79);
    {
      l_79 = t;
      {
        t = SSL_explode_term(not_null(l_79));
        {
          n_79 = t;
          c_79 :
          if(match_cons(n_79, sym__2))
            {
              o_79 = ATgetArgument(n_79, 0);
              w_79 = ATgetArgument(n_79, 1);
              d_79 :
              if(match_string(o_79, ""))
                {
                  e_79 :
                  if(((ATgetType(w_79) == AT_LIST) && ((ATermList) w_79 != ATempty)))
                    {
                      x_79 = ATgetFirst((ATermList) w_79);
                      y_79 = (ATerm) ATgetNext((ATermList) w_79);
                      f_79 :
                      if(((ATgetType(y_79) == AT_LIST) && ((ATermList) y_79 != ATempty)))
                        {
                          z_79 = ATgetFirst((ATermList) y_79);
                          a_80 = (ATerm) ATgetNext((ATermList) y_79);
                          {
                            if(((i_79 != NULL) && (i_79 != x_79)))
                              _fail(x_79);
                            else
                              i_79 = x_79;
                            {
                              if(((k_79 != NULL) && (k_79 != z_79)))
                                _fail(z_79);
                              else
                                k_79 = z_79;
                              if(((j_79 != NULL) && (j_79 != a_80)))
                                _fail(a_80);
                              else
                                j_79 = a_80;
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
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(k_79);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm f_80 = NULL;
  f_80 = t;
  t = SSL_explode_term(not_null(f_80));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm e_3 (ATerm t)
      {
        t = term_r_18;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, e_3, f_3);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  u_80 = t;
  r_80 :
  if(match_cons(u_80, sym__2))
    {
      v_80 = ATgetArgument(u_80, 0);
      z_80 = ATgetArgument(u_80, 1);
      s_80 :
      if(match_cons(v_80, sym__3))
        {
          w_80 = ATgetArgument(v_80, 0);
          x_80 = ATgetArgument(v_80, 1);
          y_80 = ATgetArgument(v_80, 2);
          t_80 :
          if(match_cons(z_80, sym__3))
            {
              a_81 = ATgetArgument(z_80, 0);
              b_81 = ATgetArgument(z_80, 1);
              c_81 = ATgetArgument(z_80, 2);
              {
                ATerm j_81 = NULL,n_81 = NULL,p_81 = NULL;
                ATerm s_18;
                s_18 = t;
                {
                  ATerm k_81 = NULL,m_81 = NULL;
                  ATerm l_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_81), not_null(x_80));
                  {
                    t = diff_0(t);
                    {
                      l_81 = t;
                      if(((k_81 != NULL) && (k_81 != l_81)))
                        _fail(l_81);
                      else
                        k_81 = l_81;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_80), not_null(k_81));
                    {
                      t = union_0(t);
                      {
                        m_81 = t;
                        if(((j_81 != NULL) && (j_81 != m_81)))
                          _fail(m_81);
                        else
                          j_81 = m_81;
                      }
                    }
                  }
                }
                t = s_18;
                {
                  ATerm t_18;
                  t_18 = t;
                  {
                    ATerm o_81 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_80), not_null(b_81));
                    {
                      t = union_0(t);
                      {
                        o_81 = t;
                        if(((n_81 != NULL) && (n_81 != o_81)))
                          _fail(o_81);
                        else
                          n_81 = o_81;
                      }
                    }
                  }
                  t = t_18;
                  {
                    ATerm q_81 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_80), not_null(c_81));
                    {
                      t = union_0(t);
                      {
                        q_81 = t;
                        if(((p_81 != NULL) && (p_81 != q_81)))
                          _fail(q_81);
                        else
                          p_81 = q_81;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(j_81), not_null(n_81), not_null(p_81));
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
  else
    _fail(t);
  return(t);
}
ATerm cart_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  a_82 = t;
  z_81 :
  if(match_cons(a_82, sym__2))
    {
      b_82 = ATgetArgument(a_82, 0);
      c_82 = ATgetArgument(a_82, 1);
      {
        t = not_null(b_82);
        {
          ATerm g_3 (ATerm t)
          {
            ATerm f_82 = NULL;
            f_82 = t;
            {
              t = not_null(c_82);
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm h_82 = NULL;
                  h_82 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_82), not_null(h_82));
                    t = h_71(t);
                  }
                  return(t);
                }
                t = map_1(t, h_3);
              }
            }
            return(t);
          }
          t = map_1(t, g_3);
          {
            ATerm i_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = foldr_2(t, i_3, union_0);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm seqs_join_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, j_3, k_3);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm h_57 (ATerm))
{
  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL;
  t_82 = t;
  s_82 :
  if(match_cons(t_82, sym__3))
    {
      u_82 = ATgetArgument(t_82, 0);
      v_82 = ATgetArgument(t_82, 1);
      w_82 = ATgetArgument(t_82, 2);
      {
        ATerm a_83 = NULL,e_83 = NULL;
        ATerm u_18;
        u_18 = t;
        {
          ATerm b_83 = NULL,d_83 = NULL;
          ATerm c_83 = NULL;
          t = term_q_14;
          {
            t = h_57(t);
            {
              c_83 = t;
              if(((b_83 != NULL) && (b_83 != c_83)))
                _fail(c_83);
              else
                b_83 = c_83;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_82), not_null(b_83));
            {
              t = diff_0(t);
              {
                d_83 = t;
                if(((a_83 != NULL) && (a_83 != d_83)))
                  _fail(d_83);
                else
                  a_83 = d_83;
              }
            }
          }
        }
        t = u_18;
        {
          ATerm f_83 = NULL,j_83 = NULL;
          ATerm g_83 = NULL,i_83 = NULL;
          ATerm h_83 = NULL;
          t = term_q_14;
          {
            t = h_57(t);
            {
              h_83 = t;
              if(((g_83 != NULL) && (g_83 != h_83)))
                _fail(h_83);
              else
                g_83 = h_83;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_82), not_null(g_83));
            {
              t = isect_0(t);
              {
                i_83 = t;
                if(((f_83 != NULL) && (f_83 != i_83)))
                  _fail(i_83);
                else
                  f_83 = i_83;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_83), not_null(w_82));
            {
              t = conc_0(t);
              {
                j_83 = t;
                if(((e_83 != NULL) && (e_83 != j_83)))
                  _fail(j_83);
                else
                  e_83 = j_83;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_82), not_null(a_83), not_null(e_83));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UDjoin_0 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  f_84 = t;
  c_84 :
  if(match_cons(f_84, sym_Overlay_3))
    {
      g_84 = ATgetArgument(f_84, 0);
      e_84 = ATgetArgument(f_84, 1);
      d_84 = ATgetArgument(f_84, 2);
      {
        ATerm k_84 = NULL;
        ATerm l_84 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_84)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(e_84), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            l_84 = t;
            if(((k_84 != NULL) && (k_84 != l_84)))
              _fail(l_84);
            else
              k_84 = l_84;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(g_84), not_null(e_84), not_null(k_84));
      }
    }
  else
    {
      if(match_cons(f_84, sym_Scope_2))
        {
          g_84 = ATgetArgument(f_84, 0);
          e_84 = ATgetArgument(f_84, 1);
          {
            t = not_null(e_84);
            {
              ATerm l_3 (ATerm t)
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(g_84);
                  return(t);
                }
                t = JoinScope_1(t, m_3);
                return(t);
              }
              t = map_1(t, l_3);
            }
          }
        }
      else
        {
          if(match_cons(f_84, sym_Cong_2))
            {
              g_84 = ATgetArgument(f_84, 0);
              e_84 = ATgetArgument(f_84, 1);
              {
                t = not_null(e_84);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(f_84, sym_BAM_3))
                {
                  g_84 = ATgetArgument(f_84, 0);
                  e_84 = ATgetArgument(f_84, 1);
                  d_84 = ATgetArgument(f_84, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_84)), not_null(g_84)), not_null(e_84));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(f_84, sym_BA_2))
                    {
                      g_84 = ATgetArgument(f_84, 0);
                      e_84 = ATgetArgument(f_84, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_84)), not_null(e_84));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(f_84, sym_AM_2))
                        {
                          g_84 = ATgetArgument(f_84, 0);
                          e_84 = ATgetArgument(f_84, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_84)), not_null(g_84));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(f_84, sym_MA_2))
                            {
                              g_84 = ATgetArgument(f_84, 0);
                              e_84 = ATgetArgument(f_84, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_84)), not_null(g_84));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(f_84, sym_StratRule_3))
                                {
                                  g_84 = ATgetArgument(f_84, 0);
                                  e_84 = ATgetArgument(f_84, 1);
                                  d_84 = ATgetArgument(f_84, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_84)), not_null(d_84)), not_null(g_84));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(f_84, sym_Rule_3))
                                    {
                                      g_84 = ATgetArgument(f_84, 0);
                                      e_84 = ATgetArgument(f_84, 1);
                                      d_84 = ATgetArgument(f_84, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_84)), not_null(d_84)), not_null(g_84));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(f_84, sym_Seq_2))
                                        {
                                          g_84 = ATgetArgument(f_84, 0);
                                          e_84 = ATgetArgument(f_84, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_84)), not_null(g_84));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(f_84, sym_Seqs_1))
                                            {
                                              g_84 = ATgetArgument(f_84, 0);
                                              {
                                                t = not_null(g_84);
                                                t = seqs_join_0(t);
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
        }
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm b_56 (ATerm), ATerm c_56 (ATerm))
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL;
  y_85 = t;
  x_85 :
  if(match_cons(y_85, sym_Cong_2))
    {
      z_85 = ATgetArgument(y_85, 0);
      a_86 = ATgetArgument(y_85, 1);
      {
        ATerm d_86 = NULL;
        t = not_null(z_85);
        {
          ATerm f_86 = NULL;
          t = b_56(t);
          {
            d_86 = t;
            {
              t = not_null(a_86);
              {
                t = c_56(t);
                {
                  f_86 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(d_86), not_null(f_86));
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
ATerm use_term_0 (ATerm t)
{
  ATerm l_86 = NULL;
  ATerm m_86 = NULL;
  t = tvars_0(t);
  {
    m_86 = t;
    if(((l_86 != NULL) && (l_86 != m_86)))
      _fail(m_86);
    else
      l_86 = m_86;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(l_86), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm p_86 = NULL;
  ATerm q_86 = NULL;
  t = tvars_0(t);
  {
    q_86 = t;
    if(((p_86 != NULL) && (p_86 != q_86)))
      _fail(q_86);
    else
      p_86 = q_86;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(p_86), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm f_53 (ATerm), ATerm g_53 (ATerm), ATerm h_53 (ATerm))
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
  x_86 = t;
  w_86 :
  if(match_cons(x_86, sym_Rule_3))
    {
      y_86 = ATgetArgument(x_86, 0);
      z_86 = ATgetArgument(x_86, 1);
      a_87 = ATgetArgument(x_86, 2);
      {
        ATerm e_87 = NULL;
        t = not_null(y_86);
        {
          ATerm g_87 = NULL;
          t = f_53(t);
          {
            e_87 = t;
            {
              t = not_null(z_86);
              {
                ATerm i_87 = NULL;
                t = g_53(t);
                {
                  g_87 = t;
                  {
                    t = not_null(a_87);
                    {
                      t = h_53(t);
                      {
                        i_87 = t;
                        t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_87), not_null(g_87), not_null(i_87));
                      }
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
ATerm BAM_3 (ATerm t, ATerm m_52 (ATerm), ATerm n_52 (ATerm), ATerm o_52 (ATerm))
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  t_87 = t;
  s_87 :
  if(match_cons(t_87, sym_BAM_3))
    {
      u_87 = ATgetArgument(t_87, 0);
      v_87 = ATgetArgument(t_87, 1);
      w_87 = ATgetArgument(t_87, 2);
      {
        ATerm a_88 = NULL;
        t = not_null(u_87);
        {
          ATerm c_88 = NULL;
          t = m_52(t);
          {
            a_88 = t;
            {
              t = not_null(v_87);
              {
                ATerm e_88 = NULL;
                t = n_52(t);
                {
                  c_88 = t;
                  {
                    t = not_null(w_87);
                    {
                      t = o_52(t);
                      {
                        e_88 = t;
                        t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_88), not_null(c_88), not_null(e_88));
                      }
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
ATerm BA_2 (ATerm t, ATerm k_52 (ATerm), ATerm l_52 (ATerm))
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
  o_88 = t;
  n_88 :
  if(match_cons(o_88, sym_BA_2))
    {
      p_88 = ATgetArgument(o_88, 0);
      q_88 = ATgetArgument(o_88, 1);
      {
        ATerm t_88 = NULL;
        t = not_null(p_88);
        {
          ATerm v_88 = NULL;
          t = k_52(t);
          {
            t_88 = t;
            {
              t = not_null(q_88);
              {
                t = l_52(t);
                {
                  v_88 = t;
                  t = (ATerm) ATmakeAppl(sym_BA_2, not_null(t_88), not_null(v_88));
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
ATerm AM_2 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm))
{
  ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL;
  e_89 = t;
  d_89 :
  if(match_cons(e_89, sym_AM_2))
    {
      f_89 = ATgetArgument(e_89, 0);
      g_89 = ATgetArgument(e_89, 1);
      {
        ATerm j_89 = NULL;
        t = not_null(f_89);
        {
          ATerm l_89 = NULL;
          t = i_52(t);
          {
            j_89 = t;
            {
              t = not_null(g_89);
              {
                t = j_52(t);
                {
                  l_89 = t;
                  t = (ATerm) ATmakeAppl(sym_AM_2, not_null(j_89), not_null(l_89));
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
ATerm MA_2 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
  u_89 = t;
  t_89 :
  if(match_cons(u_89, sym_MA_2))
    {
      v_89 = ATgetArgument(u_89, 0);
      w_89 = ATgetArgument(u_89, 1);
      {
        ATerm z_89 = NULL;
        t = not_null(v_89);
        {
          ATerm b_90 = NULL;
          t = g_52(t);
          {
            z_89 = t;
            {
              t = not_null(w_89);
              {
                t = h_52(t);
                {
                  b_90 = t;
                  t = (ATerm) ATmakeAppl(sym_MA_2, not_null(z_89), not_null(b_90));
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
ATerm Match_1 (ATerm t, ATerm j_56 (ATerm))
{
  ATerm j_90 = NULL,k_90 = NULL;
  j_90 = t;
  i_90 :
  if(match_cons(j_90, sym_Match_1))
    {
      k_90 = ATgetArgument(j_90, 0);
      {
        ATerm m_90 = NULL;
        t = not_null(k_90);
        {
          t = j_56(t);
          {
            m_90 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(m_90));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm k_56 (ATerm))
{
  ATerm t_90 = NULL,u_90 = NULL;
  t_90 = t;
  s_90 :
  if(match_cons(t_90, sym_Build_1))
    {
      u_90 = ATgetArgument(t_90, 0);
      {
        ATerm w_90 = NULL;
        t = not_null(u_90);
        {
          t = k_56(t);
          {
            w_90 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_90));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm g_57 (ATerm))
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm z_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, g_57);
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = z_18;
                  {
                    ATerm b_19 = t;
                    int c_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, g_57, def_term_0);
                        LocalPopChoice(c_19);
                      }
                    else
                      {
                        t = b_19;
                        {
                          ATerm d_19 = t;
                          int e_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, g_57, use_term_0);
                              LocalPopChoice(e_19);
                            }
                          else
                            {
                              t = d_19;
                              {
                                ATerm f_19 = t;
                                int g_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, g_57, use_term_0, def_term_0);
                                    LocalPopChoice(g_19);
                                  }
                                else
                                  {
                                    t = f_19;
                                    {
                                      ATerm h_19 = t;
                                      int i_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, g_57);
                                          LocalPopChoice(i_19);
                                        }
                                      else
                                        {
                                          t = h_19;
                                          {
                                            ATerm j_19 = t;
                                            int k_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, g_57);
                                                LocalPopChoice(k_19);
                                              }
                                            else
                                              {
                                                t = j_19;
                                                {
                                                  ATerm l_19 = t;
                                                  int m_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(m_19);
                                                    }
                                                  else
                                                    {
                                                      t = l_19;
                                                      {
                                                        ATerm n_3 (ATerm t)
                                                        {
                                                          t = map_1(t, g_57);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, n_3);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm use_def_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      t = _all(t, use_def_0);
    }
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm), ATerm p_53 (ATerm))
{
  ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL,j_91 = NULL;
  g_91 = t;
  f_91 :
  if(match_cons(g_91, sym_RDef_3))
    {
      h_91 = ATgetArgument(g_91, 0);
      i_91 = ATgetArgument(g_91, 1);
      j_91 = ATgetArgument(g_91, 2);
      {
        ATerm n_91 = NULL;
        t = not_null(h_91);
        {
          ATerm p_91 = NULL;
          t = n_53(t);
          {
            n_91 = t;
            {
              t = not_null(i_91);
              {
                ATerm r_91 = NULL;
                t = o_53(t);
                {
                  p_91 = t;
                  {
                    t = not_null(j_91);
                    {
                      t = p_53(t);
                      {
                        r_91 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(n_91), not_null(p_91), not_null(r_91));
                      }
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
ATerm SDef_3 (ATerm t, ATerm n_55 (ATerm), ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL;
  c_92 = t;
  b_92 :
  if(match_cons(c_92, sym_SDef_3))
    {
      d_92 = ATgetArgument(c_92, 0);
      e_92 = ATgetArgument(c_92, 1);
      f_92 = ATgetArgument(c_92, 2);
      {
        ATerm j_92 = NULL;
        t = not_null(d_92);
        {
          ATerm l_92 = NULL;
          t = n_55(t);
          {
            j_92 = t;
            {
              t = not_null(e_92);
              {
                ATerm n_92 = NULL;
                t = o_55(t);
                {
                  l_92 = t;
                  {
                    t = not_null(f_92);
                    {
                      t = p_55(t);
                      {
                        n_92 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_92), not_null(l_92), not_null(n_92));
                      }
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
ATerm check_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm u_19 = t;
          if((PushChoice() == 0))
            {
              ATerm p_3 (ATerm t)
              {
                t = _3(t, Nil_0, _id, Nil_0);
                return(t);
              }
              t = Cons_2(t, p_3, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = u_19;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, o_3);
      t = err_msg_0(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm x_19 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 (ATerm t)
                    {
                      t = _3(t, Nil_0, _id, Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, r_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = x_19;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, q_3);
            t = err_msg_0(t);
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm y_19 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm s_3 (ATerm t)
                      {
                        ATerm t_3 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, t_3, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, s_3);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = y_19;
                  t = err_msg_0(t);
                }
              }
            }
          }
      }
    }
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm u_92 = NULL;
  t = filter_1(t, check_0);
  {
    u_92 = t;
    t_92 :
    if(((ATermList) u_92 == ATempty))
      {
        {
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm y_53 (ATerm))
{
  ATerm y_92 = NULL,z_92 = NULL;
  y_92 = t;
  x_92 :
  if(match_cons(y_92, sym_Overlays_1))
    {
      z_92 = ATgetArgument(y_92, 0);
      {
        ATerm b_93 = NULL;
        t = not_null(z_92);
        {
          t = y_53(t);
          {
            b_93 = t;
            t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(b_93));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm x_53 (ATerm))
{
  ATerm i_93 = NULL,j_93 = NULL;
  i_93 = t;
  h_93 :
  if(match_cons(i_93, sym_Signature_1))
    {
      j_93 = ATgetArgument(i_93, 0);
      {
        ATerm l_93 = NULL;
        t = not_null(j_93);
        {
          t = x_53(t);
          {
            l_93 = t;
            t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(l_93));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spec_use_def_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm w_3 (ATerm t)
    {
      ATerm x_3 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        ATerm z_3 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, z_3, Nil_0);
        return(t);
      }
      t = Cons_2(t, x_3, y_3);
      return(t);
    }
    t = Cons_2(t, v_3, w_3);
    return(t);
  }
  t = Specification_1(t, u_3);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,a_94 = NULL;
  t_93 = t;
  q_93 :
  if(match_cons(t_93, sym__2))
    {
      u_93 = ATgetArgument(t_93, 0);
      x_93 = ATgetArgument(t_93, 1);
      r_93 :
      if(match_cons(u_93, sym__2))
        {
          v_93 = ATgetArgument(u_93, 0);
          w_93 = ATgetArgument(u_93, 1);
          s_93 :
          if(match_cons(x_93, sym__2))
            {
              y_93 = ATgetArgument(x_93, 0);
              a_94 = ATgetArgument(x_93, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_93)), not_null(v_93)), (ATerm) ATinsert(CheckATermList(not_null(a_94)), not_null(w_93)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL;
  i_94 = t;
  h_94 :
  if(((ATgetType(i_94) == AT_LIST) && ((ATermList) i_94 != ATempty)))
    {
      j_94 = ATgetFirst((ATermList) i_94);
      k_94 = (ATerm) ATgetNext((ATermList) i_94);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_94), not_null(k_94));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_94 = NULL;
  q_94 = t;
  p_94 :
  if(((ATermList) q_94 == ATempty))
    {
      t = term_z_19;
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm strings_to_vars_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm t_94 = NULL;
    t_94 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_94));
    return(t);
  }
  t = map_1(t, a_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  x_94 :
  if(((ATgetType(y_94) == AT_LIST) && ((ATermList) y_94 != ATempty)))
    {
      z_94 = ATgetFirst((ATermList) y_94);
      a_95 = (ATerm) ATgetNext((ATermList) y_94);
      t = not_null(a_95);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL;
  h_95 = t;
  g_95 :
  if(match_cons(h_95, sym__2))
    {
      i_95 = ATgetArgument(h_95, 0);
      j_95 = ATgetArgument(h_95, 1);
      {
        t = not_null(i_95);
        {
          ATerm n_95 (ATerm t)
          {
            ATerm a_20 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(b_20);
              }
            else
              {
                t = a_20;
                {
                  ATerm c_20 = t;
                  int d_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_20;
                      e_20 = t;
                      {
                        ATerm b_4 (ATerm t)
                        {
                          t = not_null(j_95);
                          return(t);
                        }
                        t = HdMember_1(t, b_4);
                      }
                      t = e_20;
                      t = Cons_2(t, _id, n_95);
                      LocalPopChoice(d_20);
                    }
                  else
                    {
                      t = c_20;
                      {
                        t = Tl_0(t);
                        t = n_95(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = n_95(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL;
  q_95 = t;
  p_95 :
  if(match_cons(q_95, sym__2))
    {
      r_95 = ATgetArgument(q_95, 0);
      s_95 = ATgetArgument(q_95, 1);
      if(((r_95 != NULL) && (r_95 != s_95)))
        _fail(s_95);
      else
        r_95 = s_95;
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL,y_96 = NULL;
  ATerm h_98 (ATerm t)
  {
    ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,t_97 = NULL;
    ATerm f_20;
    f_20 = t;
    {
      ATerm h_97 = NULL,j_97 = NULL,l_97 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_96), term_h_20);
      {
        ATerm i_20 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = i_20;
        {
          ATerm j_20;
          j_20 = t;
          {
            ATerm i_97 = NULL;
            t = term_q_14;
            {
              t = o_0(t);
              {
                i_97 = t;
                if(((h_97 != NULL) && (h_97 != i_97)))
                  _fail(i_97);
                else
                  h_97 = i_97;
              }
            }
          }
          t = j_20;
          {
            ATerm k_97 = NULL;
            t = not_null(u_96);
            {
              t = tvars_0(t);
              {
                k_97 = t;
                if(((j_97 != NULL) && (j_97 != k_97)))
                  _fail(k_97);
                else
                  j_97 = k_97;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_97), not_null(j_97));
              {
                t = isect_0(t);
                {
                  ATerm m_97 = NULL,p_97 = NULL,r_97 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    l_97 = t;
                    {
                      if(((e_97 != NULL) && (e_97 != l_97)))
                        _fail(l_97);
                      else
                        e_97 = l_97;
                      {
                        ATerm k_20;
                        k_20 = t;
                        {
                          ATerm o_97 = NULL;
                          t = term_q_14;
                          {
                            t = o_0(t);
                            {
                              o_97 = t;
                              if(((m_97 != NULL) && (m_97 != o_97)))
                                _fail(o_97);
                              else
                                m_97 = o_97;
                            }
                          }
                        }
                        t = k_20;
                        {
                          ATerm q_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_96), not_null(y_96));
                          {
                            t = tvars_0(t);
                            {
                              q_97 = t;
                              if(((p_97 != NULL) && (p_97 != q_97)))
                                _fail(q_97);
                              else
                                p_97 = q_97;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_97), not_null(p_97));
                            {
                              t = isect_0(t);
                              {
                                ATerm s_97 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  r_97 = t;
                                  {
                                    if(((f_97 != NULL) && (f_97 != r_97)))
                                      _fail(r_97);
                                    else
                                      f_97 = r_97;
                                    {
                                      t = new_0(t);
                                      {
                                        s_97 = t;
                                        if(((g_97 != NULL) && (g_97 != s_97)))
                                          _fail(s_97);
                                        else
                                          g_97 = s_97;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = f_20;
    {
      ATerm u_97 = NULL;
      t = not_null(r_96);
      {
        t = p_0(t);
        {
          u_97 = t;
          if(((t_97 != NULL) && (t_97 != u_97)))
            _fail(u_97);
          else
            t_97 = u_97;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(t_97), (ATerm) ATmakeAppl(sym_Op_2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(CheckATermList(not_null(f_97)), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_97))))), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, not_null(e_97)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_96), not_null(s_96), (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_96), not_null(v_96), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_o_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_96))))), (ATerm)ATmakeAppl(sym_Op_2, term_l_20, not_null(e_97)), (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(CheckATermList(not_null(f_97)), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_97))))), not_null(y_96)))));
    }
    return(t);
  }
  ATerm i_98 (ATerm t)
  {
    ATerm z_97 = NULL,f_98 = NULL;
    ATerm p_20;
    p_20 = t;
    {
      ATerm a_98 = NULL,c_98 = NULL,e_98 = NULL;
      ATerm q_20;
      q_20 = t;
      {
        ATerm b_98 = NULL;
        t = term_q_14;
        {
          t = o_0(t);
          {
            b_98 = t;
            if(((a_98 != NULL) && (a_98 != b_98)))
              _fail(b_98);
            else
              a_98 = b_98;
          }
        }
      }
      t = q_20;
      {
        ATerm d_98 = NULL;
        t = not_null(u_96);
        {
          t = tvars_0(t);
          {
            d_98 = t;
            if(((c_98 != NULL) && (c_98 != d_98)))
              _fail(d_98);
            else
              c_98 = d_98;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_98), not_null(c_98));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                e_98 = t;
                if(((z_97 != NULL) && (z_97 != e_98)))
                  _fail(e_98);
                else
                  z_97 = e_98;
              }
            }
          }
        }
      }
    }
    t = p_20;
    {
      ATerm g_98 = NULL;
      t = not_null(r_96);
      {
        t = p_0(t);
        {
          g_98 = t;
          if(((f_98 != NULL) && (f_98 != g_98)))
            _fail(g_98);
          else
            f_98 = g_98;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(f_98), (ATerm) ATmakeAppl(sym_Op_2, term_o_11, (ATerm) ATinsert(CheckATermList(term_r_20), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, not_null(z_97)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_96), not_null(s_96), (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_96), term_s_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_o_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_96))))), (ATerm)ATmakeAppl(sym_Op_2, term_l_20, not_null(z_97)), term_h_20), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_96), term_b_12)))));
    }
    return(t);
  }
  q_96 = t;
  k_96 :
  if(match_cons(q_96, sym_RDef_3))
    {
      r_96 = ATgetArgument(q_96, 0);
      s_96 = ATgetArgument(q_96, 1);
      t_96 = ATgetArgument(q_96, 2);
      l_96 :
      if(match_cons(t_96, sym_Rule_3))
        {
          u_96 = ATgetArgument(t_96, 0);
          v_96 = ATgetArgument(t_96, 1);
          y_96 = ATgetArgument(t_96, 2);
          m_96 :
          if(match_cons(v_96, sym_Op_2))
            {
              w_96 = ATgetArgument(v_96, 0);
              x_96 = ATgetArgument(v_96, 1);
              n_96 :
              if(((ATermList) x_96 == ATempty))
                {
                  o_96 :
                  if(match_string(w_96, "Undefined"))
                    {
                      ATerm t_20 = t;
                      int u_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_98(t);
                          LocalPopChoice(u_20);
                        }
                      else
                        {
                          t = t_20;
                          t = i_98(t);
                        }
                    }
                  else
                    t = h_98(t);
                }
              else
                {
                  p_96 :
                  t = h_98(t);
                }
            }
          else
            t = h_98(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL;
  c_99 = t;
  a_99 :
  if(match_cons(c_99, sym__2))
    {
      d_99 = ATgetArgument(c_99, 0);
      f_99 = ATgetArgument(c_99, 1);
      b_99 :
      if(match_cons(d_99, sym_OverrideDynamicRules_1))
        {
          e_99 = ATgetArgument(d_99, 0);
          {
            t = not_null(e_99);
            {
              ATerm c_4 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  t = not_null(f_99);
                  return(t);
                }
                ATerm e_4 (ATerm t)
                {
                  ATerm i_99 = NULL;
                  i_99 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_99)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, d_4, e_4);
                return(t);
              }
              t = map_1(t, c_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(d_99, sym_DynamicRules_1))
            {
              e_99 = ATgetArgument(d_99, 0);
              {
                t = not_null(e_99);
                {
                  ATerm f_4 (ATerm t)
                  {
                    ATerm g_4 (ATerm t)
                    {
                      t = not_null(f_99);
                      return(t);
                    }
                    ATerm h_4 (ATerm t)
                    {
                      ATerm m_99 = NULL;
                      m_99 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_99)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, g_4, h_4);
                    return(t);
                  }
                  t = map_1(t, f_4);
                  t = unzip_0(t);
                }
              }
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm dist_scope_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm x_99 = NULL,y_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL;
  x_99 = t;
  v_99 :
  if(match_cons(x_99, sym__2))
    {
      y_99 = ATgetArgument(x_99, 0);
      c_100 = ATgetArgument(x_99, 1);
      w_99 :
      if(match_cons(y_99, sym_Scope_2))
        {
          a_100 = ATgetArgument(y_99, 0);
          b_100 = ATgetArgument(y_99, 1);
          {
            ATerm g_100 = NULL;
            ATerm h_100 = NULL,j_100 = NULL;
            ATerm i_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_100), not_null(c_100));
            {
              t = union_0(t);
              {
                i_100 = t;
                if(((h_100 != NULL) && (h_100 != i_100)))
                  _fail(i_100);
                else
                  h_100 = i_100;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_100), not_null(h_100));
              {
                t = l_80(t);
                {
                  j_100 = t;
                  if(((g_100 != NULL) && (g_100 != j_100)))
                    _fail(j_100);
                  else
                    g_100 = j_100;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_100), not_null(g_100));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
  q_100 = t;
  p_100 :
  if(match_cons(q_100, sym__2))
    {
      r_100 = ATgetArgument(q_100, 0);
      s_100 = ATgetArgument(q_100, 1);
      {
        t = not_null(r_100);
        {
          ATerm i_4 (ATerm t)
          {
            ATerm v_100 = NULL;
            v_100 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_100), not_null(s_100));
              t = n_74(t);
            }
            return(t);
          }
          t = _one(t, i_4);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm z_100 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_75(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = one_dist_1(t, z_100);
      }
    return(t);
  }
  t = z_100(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL,j_101 = NULL;
  h_101 = t;
  g_101 :
  if(((ATgetType(h_101) == AT_LIST) && ((ATermList) h_101 != ATempty)))
    {
      i_101 = ATgetFirst((ATermList) h_101);
      j_101 = (ATerm) ATgetNext((ATermList) h_101);
      {
        ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL,p_101 = NULL;
        ATerm q_101 = NULL;
        t = not_null(i_101);
        {
          ATerm u_101 = NULL;
          t = tvars_0(t);
          {
            q_101 = t;
            {
              if(((o_101 != NULL) && (o_101 != q_101)))
                _fail(q_101);
              else
                o_101 = q_101;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_101), not_null(o_101));
                {
                  ATerm x_101 (ATerm t)
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm e_21 = t;
                      int f_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, x_101);
                          LocalPopChoice(f_21);
                        }
                      else
                        {
                          t = e_21;
                          {
                            ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              r_101 = t;
                              d_101 :
                              if(match_cons(r_101, sym__2))
                                {
                                  s_101 = ATgetArgument(r_101, 0);
                                  t_101 = ATgetArgument(r_101, 1);
                                  {
                                    if(((n_101 != NULL) && (n_101 != s_101)))
                                      _fail(s_101);
                                    else
                                      n_101 = s_101;
                                    {
                                      if(((m_101 != NULL) && (m_101 != t_101)))
                                        _fail(t_101);
                                      else
                                        m_101 = t_101;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_101));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        }
                      return(t);
                    }
                    t = env_oncetd_1(t, j_4);
                    return(t);
                  }
                  t = x_101(t);
                  {
                    u_101 = t;
                    if(((p_101 != NULL) && (p_101 != u_101)))
                      _fail(u_101);
                    else
                      p_101 = u_101;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_101)), not_null(p_101)), not_null(j_101));
          t = conc_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm a_102 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_78(t);
        t = a_102(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = z_78(t);
      }
    return(t);
  }
  t = a_102(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_79 (ATerm))
{
  t = repeat_2(t, b_79, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm b_102 (ATerm t)
  {
    t = y_73(t);
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          t = Cons_2(t, _id, b_102);
        }
    }
    return(t);
  }
  t = b_102(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, k_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm g_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,l_102 = NULL;
  j_102 = t;
  e_102 :
  if(match_cons(j_102, sym_DynRuleScope_2))
    {
      k_102 = ATgetArgument(j_102, 0);
      l_102 = ATgetArgument(j_102, 1);
      f_102 :
      if(((ATgetType(k_102) == AT_LIST) && ((ATermList) k_102 != ATempty)))
        {
          g_102 = ATgetFirst((ATermList) k_102);
          i_102 = (ATerm) ATgetNext((ATermList) k_102);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(i_102), not_null(l_102))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(g_102)))));
        }
      else
        {
          if(((ATermList) k_102 == ATempty))
            {
              t = not_null(l_102);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, l_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        ATerm p_4 (ATerm t)
        {
          ATerm q_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, q_4);
          return(t);
        }
        t = Cons_2(t, p_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, o_4);
      return(t);
    }
    t = Cons_2(t, _id, n_4);
    return(t);
  }
  t = Specification_1(t, m_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL;
  v_102 = t;
  u_102 :
  if(match_cons(v_102, sym_ScopeDefault_1))
    {
      w_102 = ATgetArgument(v_102, 0);
      {
        ATerm y_102 = NULL;
        ATerm z_102 = NULL;
        t = not_null(w_102);
        {
          t = tvars_0(t);
          {
            z_102 = t;
            if(((y_102 != NULL) && (y_102 != z_102)))
              _fail(z_102);
            else
              y_102 = z_102;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_102), not_null(w_102));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm f_103 = NULL,g_103 = NULL;
  f_103 = t;
  e_103 :
  if(match_cons(f_103, sym_DynamicRules_1))
    {
      g_103 = ATgetArgument(f_103, 0);
      {
        ATerm i_103 = NULL;
        t = not_null(g_103);
        {
          t = q_53(t);
          {
            i_103 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(i_103));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
  r_103 = t;
  q_103 :
  if(match_cons(r_103, sym_Scope_2))
    {
      s_103 = ATgetArgument(r_103, 0);
      t_103 = ATgetArgument(r_103, 1);
      {
        ATerm w_103 = NULL;
        t = not_null(s_103);
        {
          ATerm y_103 = NULL;
          t = n_56(t);
          {
            w_103 = t;
            {
              t = not_null(t_103);
              {
                t = o_56(t);
                {
                  y_103 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_103), not_null(y_103));
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
ATerm tboundin_3 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, n_57, l_57);
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      t = DynamicRules_1(t, l_57);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL;
  f_104 = t;
  e_104 :
  if(match_cons(f_104, sym_DynamicRules_1))
    {
      g_104 = ATgetArgument(f_104, 0);
      {
        t = not_null(g_104);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,s_104 = NULL;
  q_104 = t;
  l_104 :
  if(match_cons(q_104, sym_LRule_1))
    {
      r_104 = ATgetArgument(q_104, 0);
      m_104 :
      if(match_cons(r_104, sym_Rule_3))
        {
          n_104 = ATgetArgument(r_104, 0);
          o_104 = ATgetArgument(r_104, 1);
          p_104 = ATgetArgument(r_104, 2);
          {
            t = not_null(n_104);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(q_104, sym_Scope_2))
        {
          r_104 = ATgetArgument(q_104, 0);
          s_104 = ATgetArgument(q_104, 1);
          t = not_null(r_104);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL;
  c_105 = t;
  b_105 :
  if(match_cons(c_105, sym_Var_1))
    {
      d_105 = ATgetArgument(c_105, 0);
      t = (ATerm) ATinsert(ATempty, not_null(d_105));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL;
  i_105 = t;
  h_105 :
  if(match_cons(i_105, sym__2))
    {
      j_105 = ATgetArgument(i_105, 0);
      k_105 = ATgetArgument(i_105, 1);
      {
        t = not_null(j_105);
        {
          ATerm o_105 (ATerm t)
          {
            ATerm p_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_105);
                LocalPopChoice(q_21);
              }
            else
              {
                t = p_21;
                {
                  ATerm r_21 = t;
                  int s_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = not_null(k_105);
                        return(t);
                      }
                      t = HdMember_1(t, r_4);
                      t = o_105(t);
                      LocalPopChoice(s_21);
                    }
                  else
                    {
                      t = r_21;
                      t = Cons_2(t, _id, o_105);
                    }
                }
              }
            return(t);
          }
          t = o_105(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_67(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm t_105 = NULL,u_105 = NULL,v_105 = NULL;
        t_105 = t;
        s_105 :
        if(((ATgetType(t_105) == AT_LIST) && ((ATermList) t_105 != ATempty)))
          {
            u_105 = ATgetFirst((ATermList) t_105);
            v_105 = (ATerm) ATgetNext((ATermList) t_105);
            {
              ATerm y_105 = NULL,a_106 = NULL;
              ATerm v_21;
              v_21 = t;
              {
                ATerm z_105 = NULL;
                t = not_null(u_105);
                {
                  t = x_67(t);
                  {
                    z_105 = t;
                    if(((y_105 != NULL) && (y_105 != z_105)))
                      _fail(z_105);
                    else
                      y_105 = z_105;
                  }
                }
              }
              t = v_21;
              {
                ATerm b_106 = NULL;
                t = not_null(v_105);
                {
                  t = foldr_3(t, v_67, w_67, x_67);
                  {
                    b_106 = t;
                    if(((a_106 != NULL) && (a_106 != b_106)))
                      _fail(b_106);
                    else
                      a_106 = b_106;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_105), not_null(a_106));
                  t = w_67(t);
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
ATerm crush_3 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm l_106 = NULL;
  ATerm n_106 = NULL;
  l_106 = t;
  {
    ATerm o_106 = NULL;
    ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL;
    t = not_null(l_106);
    {
      o_106 = t;
      {
        t = SSL_explode_term(not_null(o_106));
        {
          q_106 = t;
          i_106 :
          if(match_cons(q_106, sym__2))
            {
              r_106 = ATgetArgument(q_106, 0);
              s_106 = ATgetArgument(q_106, 1);
              if(((n_106 != NULL) && (n_106 != s_106)))
                _fail(s_106);
              else
                n_106 = s_106;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(n_106);
      t = foldr_3(t, i_69, j_69, k_69);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_106 = NULL,a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL;
  z_106 = t;
  x_106 :
  if(match_cons(z_106, sym__2))
    {
      a_107 = ATgetArgument(z_106, 0);
      b_107 = ATgetArgument(z_106, 1);
      y_106 :
      if(((ATgetType(b_107) == AT_LIST) && ((ATermList) b_107 != ATempty)))
        {
          c_107 = ATgetFirst((ATermList) b_107);
          d_107 = (ATerm) ATgetNext((ATermList) b_107);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_107)), not_null(c_107)), not_null(d_107));
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
  ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL;
  s_107 = t;
  q_107 :
  if(((ATgetType(s_107) == AT_LIST) && ((ATermList) s_107 != ATempty)))
    {
      t_107 = ATgetFirst((ATermList) s_107);
      w_107 = (ATerm) ATgetNext((ATermList) s_107);
      r_107 :
      if(match_cons(t_107, sym__2))
        {
          u_107 = ATgetArgument(t_107, 0);
          v_107 = ATgetArgument(t_107, 1);
          {
            ATerm a_108 = NULL,b_108 = NULL,h_108 = NULL,n_108 = NULL;
            ATerm x_21;
            x_21 = t;
            {
              ATerm c_108 = NULL;
              ATerm e_108 = NULL,f_108 = NULL,g_108 = NULL;
              t = not_null(v_107);
              {
                c_108 = t;
                {
                  t = SSL_explode_term(not_null(c_108));
                  {
                    e_108 = t;
                    l_107 :
                    if(match_cons(e_108, sym__2))
                      {
                        f_108 = ATgetArgument(e_108, 0);
                        g_108 = ATgetArgument(e_108, 1);
                        {
                          if(((a_108 != NULL) && (a_108 != f_108)))
                            _fail(f_108);
                          else
                            a_108 = f_108;
                          if(((b_108 != NULL) && (b_108 != g_108)))
                            _fail(g_108);
                          else
                            b_108 = g_108;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = x_21;
            {
              ATerm y_21;
              y_21 = t;
              {
                ATerm i_108 = NULL;
                ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL;
                t = not_null(u_107);
                {
                  i_108 = t;
                  {
                    t = SSL_explode_term(not_null(i_108));
                    {
                      k_108 = t;
                      o_107 :
                      if(match_cons(k_108, sym__2))
                        {
                          l_108 = ATgetArgument(k_108, 0);
                          m_108 = ATgetArgument(k_108, 1);
                          {
                            if(((a_108 != NULL) && (a_108 != l_108)))
                              _fail(l_108);
                            else
                              a_108 = l_108;
                            if(((h_108 != NULL) && (h_108 != m_108)))
                              _fail(m_108);
                            else
                              h_108 = m_108;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = y_21;
              {
                ATerm o_108 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_108), not_null(b_108));
                {
                  t = zip_1(t, _id);
                  {
                    o_108 = t;
                    if(((n_108 != NULL) && (n_108 != o_108)))
                      _fail(o_108);
                    else
                      n_108 = o_108;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_108), not_null(w_107));
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
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL;
  y_108 = t;
  w_108 :
  if(((ATgetType(y_108) == AT_LIST) && ((ATermList) y_108 != ATempty)))
    {
      z_108 = ATgetFirst((ATermList) y_108);
      c_109 = (ATerm) ATgetNext((ATermList) y_108);
      x_108 :
      if(match_cons(z_108, sym__2))
        {
          a_109 = ATgetArgument(z_108, 0);
          b_109 = ATgetArgument(z_108, 1);
          {
            ATerm e_109 = NULL;
            if(((a_109 != NULL) && (a_109 != b_109)))
              _fail(b_109);
            else
              a_109 = b_109;
            {
              if(((e_109 != NULL) && (e_109 != c_109)))
                _fail(c_109);
              else
                e_109 = c_109;
              t = not_null(e_109);
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
ATerm while_not_2 (ATerm t, ATerm p_79 (ATerm), ATerm q_79 (ATerm))
{
  ATerm g_109 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_79(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          t = q_79(t);
          t = g_109(t);
        }
      }
    return(t);
  }
  t = g_109(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  t = s_79(t);
  t = while_not_2(t, t_79, u_79);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm x_68 (ATerm))
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  k_109 = t;
  j_109 :
  if(((ATgetType(k_109) == AT_LIST) && ((ATermList) k_109 != ATempty)))
    {
      l_109 = ATgetFirst((ATermList) k_109);
      m_109 = (ATerm) ATgetNext((ATermList) k_109);
      {
        t = x_68(t);
        {
          ATerm s_4 (ATerm t)
          {
            ATerm p_109 = NULL;
            p_109 = t;
            if(((l_109 != NULL) && (l_109 != p_109)))
              _fail(p_109);
            else
              l_109 = p_109;
            return(t);
          }
          t = fetch_1(t, s_4);
        }
        t = not_null(m_109);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL;
      v_109 = t;
      t_109 :
      if(match_cons(v_109, sym__2))
        {
          w_109 = ATgetArgument(v_109, 0);
          x_109 = ATgetArgument(v_109, 1);
          {
            t = not_null(w_109);
            {
              ATerm d_110 (ATerm t)
              {
                ATerm d_22 = t;
                int g_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(g_22);
                  }
                else
                  {
                    t = d_22;
                    {
                      ATerm h_22 = t;
                      int k_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_4 (ATerm t)
                          {
                            t = not_null(x_109);
                            return(t);
                          }
                          t = HdMember_1(t, t_4);
                          t = d_110(t);
                          LocalPopChoice(k_22);
                        }
                      else
                        {
                          t = h_22;
                          t = Cons_2(t, _id, d_110);
                        }
                    }
                  }
                return(t);
              }
              t = d_110(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm a_110 = NULL;
          a_110 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_110));
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          ATerm o_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 (ATerm t)
              {
                ATerm s_22 = t;
                int x_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(x_22);
                  }
                else
                  {
                    t = s_22;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, x_4);
              LocalPopChoice(r_22);
            }
          else
            {
              t = o_22;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, u_4, v_4, w_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm t_58 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_110 (ATerm t)
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_58(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_110 = NULL;
              ATerm h_23;
              h_23 = t;
              {
                ATerm h_110 = NULL;
                t = s_58(t);
                {
                  h_110 = t;
                  if(((g_110 != NULL) && (g_110 != h_110)))
                    _fail(h_110);
                  else
                    g_110 = h_110;
                }
              }
              t = h_23;
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm a_5 (ATerm t)
                  {
                    t = not_null(g_110);
                    return(t);
                  }
                  t = split_2(t, i_110, a_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_58(t, y_4, i_110, z_4);
                {
                  ATerm b_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_5, union_0, _id);
                }
              }
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              {
                ATerm c_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_5, union_0, i_110);
              }
            }
        }
      }
    return(t);
  }
  t = i_110(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL;
  o_110 = t;
  m_110 :
  if(match_cons(o_110, sym_LRule_1))
    {
      p_110 = ATgetArgument(o_110, 0);
      n_110 :
      if(match_cons(p_110, sym_Rule_3))
        {
          q_110 = ATgetArgument(p_110, 0);
          r_110 = ATgetArgument(p_110, 1);
          s_110 = ATgetArgument(p_110, 2);
          {
            ATerm w_110 = NULL;
            ATerm x_110 = NULL;
            t = not_null(q_110);
            {
              t = tvars_0(t);
              {
                x_110 = t;
                if(((w_110 != NULL) && (w_110 != x_110)))
                  _fail(x_110);
                else
                  w_110 = x_110;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_110), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_110), not_null(r_110), not_null(s_110))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm a_111 (ATerm t)
  {
    t = _all(t, a_111);
    t = r_75(t);
    return(t);
  }
  t = a_111(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, f_5);
    return(t);
  }
  t = bottomup_1(t, e_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm d_111 = NULL,e_111 = NULL;
  d_111 = t;
  c_111 :
  if(match_cons(d_111, sym_Var_1))
    {
      e_111 = ATgetArgument(d_111, 0);
      t = not_null(e_111);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL;
  k_111 = t;
  i_111 :
  if(match_cons(k_111, sym__2))
    {
      l_111 = ATgetArgument(k_111, 0);
      m_111 = ATgetArgument(k_111, 1);
      j_111 :
      if(((ATgetType(m_111) == AT_LIST) && ((ATermList) m_111 != ATempty)))
        {
          n_111 = ATgetFirst((ATermList) m_111);
          o_111 = (ATerm) ATgetNext((ATermList) m_111);
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_111), not_null(o_111));
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
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL;
  w_111 = t;
  t_111 :
  if(match_cons(w_111, sym__2))
    {
      x_111 = ATgetArgument(w_111, 0);
      y_111 = ATgetArgument(w_111, 1);
      u_111 :
      if(((ATgetType(y_111) == AT_LIST) && ((ATermList) y_111 != ATempty)))
        {
          z_111 = ATgetFirst((ATermList) y_111);
          c_112 = (ATerm) ATgetNext((ATermList) y_111);
          v_111 :
          if(match_cons(z_111, sym__2))
            {
              a_112 = ATgetArgument(z_111, 0);
              b_112 = ATgetArgument(z_111, 1);
              {
                ATerm f_112 = NULL;
                if(((x_111 != NULL) && (x_111 != a_112)))
                  _fail(a_112);
                else
                  x_111 = a_112;
                {
                  if(((f_112 != NULL) && (f_112 != b_112)))
                    _fail(b_112);
                  else
                    f_112 = b_112;
                  t = not_null(f_112);
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
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm n_60 (ATerm), ATerm o_60 (ATerm))
{
  ATerm l_112 = NULL;
  ATerm n_112 = NULL,o_112 = NULL;
  l_112 = t;
  {
    ATerm p_112 = NULL;
    t = not_null(l_112);
    {
      ATerm q_112 = NULL;
      t = n_60(t);
      {
        p_112 = t;
        {
          if(((n_112 != NULL) && (n_112 != p_112)))
            _fail(p_112);
          else
            n_112 = p_112;
          {
            t = o_60(t);
            {
              q_112 = t;
              if(((o_112 != NULL) && (o_112 != q_112)))
                _fail(q_112);
              else
                o_112 = q_112;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_112), not_null(o_112));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm v_77 (ATerm))
{
  ATerm u_112 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_77(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = _all(t, u_112);
      }
    return(t);
  }
  t = u_112(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm x_112 = NULL,y_112 = NULL,z_112 = NULL;
  x_112 = t;
  w_112 :
  if(match_cons(x_112, sym__2))
    {
      y_112 = ATgetArgument(x_112, 0);
      z_112 = ATgetArgument(x_112, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_112)), not_null(y_112));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL;
  h_113 = t;
  e_113 :
  if(match_cons(h_113, sym__2))
    {
      i_113 = ATgetArgument(h_113, 0);
      l_113 = ATgetArgument(h_113, 1);
      f_113 :
      if(((ATgetType(i_113) == AT_LIST) && ((ATermList) i_113 != ATempty)))
        {
          j_113 = ATgetFirst((ATermList) i_113);
          k_113 = (ATerm) ATgetNext((ATermList) i_113);
          g_113 :
          if(((ATgetType(l_113) == AT_LIST) && ((ATermList) l_113 != ATempty)))
            {
              m_113 = ATgetFirst((ATermList) l_113);
              n_113 = (ATerm) ATgetNext((ATermList) l_113);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_113), not_null(m_113)), (ATerm) ATmakeAppl(sym__2, not_null(k_113), not_null(n_113)));
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
  ATerm x_113 = NULL,y_113 = NULL,a_114 = NULL;
  x_113 = t;
  u_113 :
  if(match_cons(x_113, sym__2))
    {
      y_113 = ATgetArgument(x_113, 0);
      a_114 = ATgetArgument(x_113, 1);
      v_113 :
      if(((ATermList) y_113 == ATempty))
        {
          w_113 :
          if(((ATermList) a_114 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm), ATerm l_71 (ATerm), ATerm m_71 (ATerm))
{
  ATerm c_114 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_71(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          t = k_71(t);
          {
            t = _2(t, m_71, c_114);
            t = l_71(t);
          }
        }
      }
    return(t);
  }
  t = c_114(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm o_71 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, o_71);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL;
  h_114 = t;
  g_114 :
  if(match_cons(h_114, sym__2))
    {
      i_114 = ATgetArgument(h_114, 0);
      j_114 = ATgetArgument(h_114, 1);
      {
        ATerm m_114 = NULL;
        if(((m_114 != NULL) && (m_114 != j_114)))
          _fail(j_114);
        else
          m_114 = j_114;
      }
    }
  else
    {
      if(match_cons(h_114, sym__3))
        {
          i_114 = ATgetArgument(h_114, 0);
          j_114 = ATgetArgument(h_114, 1);
          k_114 = ATgetArgument(h_114, 2);
          {
            ATerm s_114 = NULL;
            ATerm t_114 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_114), not_null(j_114));
            {
              t = zip_1(t, _id);
              {
                t_114 = t;
                if(((s_114 != NULL) && (s_114 != t_114)))
                  _fail(t_114);
                else
                  s_114 = t_114;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_114), not_null(k_114));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm))
{
  ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL;
  t = subs_args_0(t);
  {
    z_114 = t;
    y_114 :
    if(match_cons(z_114, sym__2))
      {
        a_115 = ATgetArgument(z_114, 0);
        b_115 = ATgetArgument(z_114, 1);
        {
          t = not_null(b_115);
          {
            ATerm g_5 (ATerm t)
            {
              ATerm i_5 (ATerm t)
              {
                t = not_null(a_115);
                return(t);
              }
              t = SubsVar_2(t, p_60, i_5);
              t = q_60(t);
              return(t);
            }
            t = alltd_1(t, g_5);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm r_60 (ATerm))
{
  t = substitute_2(t, r_60, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL;
  i_115 = t;
  g_115 :
  if(match_cons(i_115, sym_OpDecl_2))
    {
      j_115 = ATgetArgument(i_115, 0);
      k_115 = ATgetArgument(i_115, 1);
      h_115 :
      if(match_cons(k_115, sym_ConstType_1))
        {
          l_115 = ATgetArgument(k_115, 0);
          t = not_null(j_115);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm OpNames_0 (ATerm t)
{
  ATerm q_115 = NULL,r_115 = NULL;
  q_115 = t;
  p_115 :
  if(match_cons(q_115, sym_Constructors_1))
    {
      r_115 = ATgetArgument(q_115, 0);
      {
        t = not_null(r_115);
        t = filter_1(t, OpName_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm x_115 = NULL,y_115 = NULL,z_115 = NULL,a_116 = NULL;
  x_115 = t;
  v_115 :
  if(match_cons(x_115, sym_Overlay_3))
    {
      y_115 = ATgetArgument(x_115, 0);
      z_115 = ATgetArgument(x_115, 1);
      a_116 = ATgetArgument(x_115, 2);
      w_115 :
      if(((ATermList) z_115 == ATempty))
        {
          t = not_null(y_115);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Names_0 (ATerm t)
{
  ATerm h_116 = NULL,i_116 = NULL;
  h_116 = t;
  g_116 :
  if(match_cons(h_116, sym_Overlays_1))
    {
      i_116 = ATgetArgument(h_116, 0);
      {
        t = not_null(i_116);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(h_116, sym_Signature_1))
        {
          i_116 = ATgetArgument(h_116, 0);
          {
            t = not_null(i_116);
            {
              t = filter_1(t, OpNames_0);
              t = concat_0(t);
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = filter_1(t, z_66);
              return(t);
            }
            t = Cons_2(t, z_66, j_5);
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            {
              ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL;
              p_116 = t;
              o_116 :
              if(((ATgetType(p_116) == AT_LIST) && ((ATermList) p_116 != ATempty)))
                {
                  q_116 = ATgetFirst((ATermList) p_116);
                  r_116 = (ATerm) ATgetNext((ATermList) p_116);
                  {
                    t = not_null(r_116);
                    t = filter_1(t, z_66);
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
ATerm const_names_0 (ATerm t)
{
  t = filter_1(t, Names_0);
  t = concat_0(t);
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm y_116 = NULL,e_117 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm d_117 = NULL;
    t = const_names_0(t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm z_116 = NULL,b_117 = NULL;
        ATerm y_23;
        y_23 = t;
        {
          ATerm a_117 = NULL;
          a_117 = t;
          if(((z_116 != NULL) && (z_116 != a_117)))
            _fail(a_117);
          else
            z_116 = a_117;
        }
        t = y_23;
        {
          ATerm c_117 = NULL;
          c_117 = t;
          if(((b_117 != NULL) && (b_117 != c_117)))
            _fail(c_117);
          else
            b_117 = c_117;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_116), (ATerm) ATmakeAppl(sym_Op_2, not_null(b_117), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, k_5);
      {
        d_117 = t;
        if(((y_116 != NULL) && (y_116 != d_117)))
          _fail(d_117);
        else
          y_116 = d_117;
      }
    }
  }
  t = x_23;
  {
    ATerm f_117 = NULL;
    f_117 = t;
    if(((e_117 != NULL) && (e_117 != f_117)))
      _fail(f_117);
    else
      e_117 = f_117;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_116), not_null(e_117));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  m_117 = t;
  l_117 :
  if(match_cons(m_117, sym__3))
    {
      n_117 = ATgetArgument(m_117, 0);
      o_117 = ATgetArgument(m_117, 1);
      p_117 = ATgetArgument(m_117, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_117))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(o_117))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(n_117))))));
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm w_117 = NULL,x_117 = NULL,y_117 = NULL;
  w_117 = t;
  v_117 :
  if(match_cons(w_117, sym__2))
    {
      x_117 = ATgetArgument(w_117, 0);
      y_117 = ATgetArgument(w_117, 1);
      {
        t = not_null(x_117);
        {
          ATerm l_5 (ATerm t)
          {
            t = not_null(y_117);
            return(t);
          }
          t = at_end_1(t, l_5);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL;
  j_118 = t;
  g_118 :
  if(match_cons(j_118, sym__2))
    {
      k_118 = ATgetArgument(j_118, 0);
      o_118 = ATgetArgument(j_118, 1);
      h_118 :
      if(match_cons(k_118, sym__3))
        {
          l_118 = ATgetArgument(k_118, 0);
          m_118 = ATgetArgument(k_118, 1);
          n_118 = ATgetArgument(k_118, 2);
          i_118 :
          if(match_cons(o_118, sym__3))
            {
              p_118 = ATgetArgument(o_118, 0);
              q_118 = ATgetArgument(o_118, 1);
              r_118 = ATgetArgument(o_118, 2);
              {
                ATerm z_118 = NULL,b_119 = NULL,d_119 = NULL;
                ATerm z_23;
                z_23 = t;
                {
                  ATerm a_119 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_118), not_null(p_118));
                  {
                    t = conc_0(t);
                    {
                      a_119 = t;
                      if(((z_118 != NULL) && (z_118 != a_119)))
                        _fail(a_119);
                      else
                        z_118 = a_119;
                    }
                  }
                }
                t = z_23;
                {
                  ATerm a_24;
                  a_24 = t;
                  {
                    ATerm c_119 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_118), not_null(q_118));
                    {
                      t = conc_0(t);
                      {
                        c_119 = t;
                        if(((b_119 != NULL) && (b_119 != c_119)))
                          _fail(c_119);
                        else
                          b_119 = c_119;
                      }
                    }
                  }
                  t = a_24;
                  {
                    ATerm e_119 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_118), not_null(r_118));
                    {
                      t = conc_0(t);
                      {
                        e_119 = t;
                        if(((d_119 != NULL) && (d_119 != e_119)))
                          _fail(e_119);
                        else
                          d_119 = e_119;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(z_118), not_null(b_119), not_null(d_119));
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
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm))
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_67(t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL;
        n_119 = t;
        m_119 :
        if(((ATgetType(n_119) == AT_LIST) && ((ATermList) n_119 != ATempty)))
          {
            o_119 = ATgetFirst((ATermList) n_119);
            p_119 = (ATerm) ATgetNext((ATermList) n_119);
            {
              ATerm s_119 = NULL;
              ATerm t_119 = NULL;
              t = not_null(p_119);
              {
                t = foldr_2(t, t_67, u_67);
                {
                  t_119 = t;
                  if(((s_119 != NULL) && (s_119 != t_119)))
                    _fail(t_119);
                  else
                    s_119 = t_119;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_119), not_null(s_119));
                t = u_67(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm NormBSIG_0 (ATerm t)
{
  ATerm z_119 = NULL,a_120 = NULL;
  z_119 = t;
  y_119 :
  if(match_cons(z_119, sym_Sorts_1))
    {
      a_120 = ATgetArgument(z_119, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(z_119, sym_Constructors_1))
        {
          a_120 = ATgetArgument(z_119, 0);
          t = not_null(a_120);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm normalize_sigs_0 (ATerm t)
{
  t = map_1(t, NormBSIG_0);
  t = concat_0(t);
  return(t);
}
ATerm NormBSP_0 (ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL;
  l_120 = t;
  k_120 :
  if(match_cons(l_120, sym_Overlays_1))
    {
      m_120 = ATgetArgument(l_120, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(m_120), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(l_120, sym_Rules_1))
        {
          m_120 = ATgetArgument(l_120, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(m_120));
        }
      else
        {
          if(match_cons(l_120, sym_Strategies_1))
            {
              m_120 = ATgetArgument(l_120, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(m_120));
            }
          else
            {
              if(match_cons(l_120, sym_Signature_1))
                {
                  m_120 = ATgetArgument(l_120, 0);
                  {
                    ATerm r_120 = NULL;
                    ATerm s_120 = NULL;
                    t = not_null(m_120);
                    {
                      t = normalize_sigs_0(t);
                      {
                        s_120 = t;
                        if(((r_120 != NULL) && (r_120 != s_120)))
                          _fail(s_120);
                        else
                          r_120 = s_120;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(r_120), (ATerm)ATempty, (ATerm) ATempty);
                  }
                }
              else
                _fail(t);
            }
        }
    }
  return(t);
}
ATerm BSpecs_0 (ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL;
  a_121 = t;
  z_120 :
  if(match_cons(a_121, sym_Specification_1))
    {
      b_121 = ATgetArgument(a_121, 0);
      t = not_null(b_121);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm e_121 (ATerm t)
  {
    t = p_75(t);
    t = _all(t, e_121);
    return(t);
  }
  t = e_121(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm i_121 = NULL,j_121 = NULL;
      i_121 = t;
      h_121 :
      if(match_cons(i_121, sym_DefaultVarDec_1))
        {
          j_121 = ATgetArgument(i_121, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_121), term_x_13);
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, s_5);
    return(t);
  }
  t = topdown_1(t, n_5);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = DefineSugar_0(t);
  {
    t = BSpecs_0(t);
    {
      t = map_1(t, NormBSP_0);
      {
        ATerm t_5 (ATerm t)
        {
          t = term_q_18;
          return(t);
        }
        t = foldr_2(t, t_5, Combine_0);
        {
          t = MkSpec_0(t);
          {
            t = Specification_1(t, vars_to_consts_0);
            {
              t = define_lrules_0(t);
              t = LiftDynamicRules_0(t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm frontend_transformation_0 (ATerm t)
{
  t = normalize_spec_0(t);
  {
    ATerm d_24;
    d_24 = t;
    t = spec_use_def_0(t);
    t = d_24;
    {
      t = ExpandOverlays_0(t);
      {
        t = CheckConstructors_0(t);
        {
          t = RulesToSdefs_0(t);
          {
            t = strename_0(t);
            {
              ATerm c_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm y_6 (ATerm t)
                  {
                    t = Strategies_1(t, desugar_spec_0);
                    return(t);
                  }
                  t = Cons_2(t, y_6, Nil_0);
                  return(t);
                }
                t = Cons_2(t, _id, m_6);
                return(t);
              }
              t = Specification_1(t, c_6);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_46 (ATerm), ATerm d_46 (ATerm))
{
  ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL;
  q_121 = t;
  p_121 :
  if(match_cons(q_121, sym__2))
    {
      r_121 = ATgetArgument(q_121, 0);
      s_121 = ATgetArgument(q_121, 1);
      {
        ATerm w_121 = NULL;
        t = not_null(r_121);
        {
          ATerm y_121 = NULL;
          t = c_46(t);
          {
            w_121 = t;
            {
              t = not_null(s_121);
              {
                t = d_46(t);
                {
                  y_121 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_121), not_null(y_121));
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
  ATerm g_122 = NULL;
  ATerm e_24;
  e_24 = t;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm h_122 = NULL,i_122 = NULL;
      h_122 = t;
      f_122 :
      if(match_cons(h_122, sym_Program_1))
        {
          i_122 = ATgetArgument(h_122, 0);
          if(((g_122 != NULL) && (g_122 != i_122)))
            _fail(i_122);
          else
            g_122 = i_122;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, z_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(CheckATermList(term_h_24), not_null(g_122)), term_f_24));
      {
        t = printnl_0(t);
        {
          t = term_z_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_m_24;
  {
    t = printnl_0(t);
    {
      t = term_z_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_122 = NULL,r_122 = NULL;
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm n_24 = t;
      if((PushChoice() == 0))
        {
          ATerm c_7 (ATerm t)
          {
            ATerm s_122 = NULL;
            s_122 = t;
            k_122 :
            if(!(match_cons(s_122, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_7);
          PopChoice();
          _fail(t);
        }
      else
        t = n_24;
      return(t);
    }
    t = _2(t, b_7, _id);
    {
      ATerm d_7 (ATerm t)
      {
        ATerm e_7 (ATerm t)
        {
          ATerm t_122 = NULL,u_122 = NULL;
          t_122 = t;
          m_122 :
          if(match_cons(t_122, sym_Runtime_1))
            {
              u_122 = ATgetArgument(t_122, 0);
              if(((r_122 != NULL) && (r_122 != u_122)))
                _fail(u_122);
              else
                r_122 = u_122;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_7);
        return(t);
      }
      t = _2(t, d_7, _id);
      {
        ATerm f_7 (ATerm t)
        {
          ATerm g_7 (ATerm t)
          {
            ATerm v_122 = NULL,w_122 = NULL;
            v_122 = t;
            o_122 :
            if(match_cons(v_122, sym_Program_1))
              {
                w_122 = ATgetArgument(v_122, 0);
                if(((q_122 != NULL) && (q_122 != w_122)))
                  _fail(w_122);
                else
                  q_122 = w_122;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_7);
          return(t);
        }
        t = _2(t, f_7, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_q_24), not_null(r_122)), term_o_24), not_null(q_122)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_7);
  {
    t = term_y_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL,e_123 = NULL;
  c_123 = t;
  b_123 :
  if(match_cons(c_123, sym__2))
    {
      d_123 = ATgetArgument(c_123, 0);
      e_123 = ATgetArgument(c_123, 1);
      t = SSL_WriteToTextFile(not_null(d_123), not_null(e_123));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_123 = NULL,m_123 = NULL,n_123 = NULL;
  l_123 = t;
  k_123 :
  if(match_cons(l_123, sym__2))
    {
      m_123 = ATgetArgument(l_123, 0);
      n_123 = ATgetArgument(l_123, 1);
      t = SSL_WriteToBinaryFile(not_null(m_123), not_null(n_123));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_123 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_7 (ATerm t)
          {
            ATerm w_123 = NULL,x_123 = NULL;
            w_123 = t;
            s_123 :
            if(match_cons(w_123, sym_Output_1))
              {
                x_123 = ATgetArgument(w_123, 0);
                if(((v_123 != NULL) && (v_123 != x_123)))
                  _fail(x_123);
                else
                  v_123 = x_123;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_7);
          LocalPopChoice(t_24);
        }
      else
        {
          t = s_24;
          {
            ATerm z_123 = NULL;
            t = term_u_24;
            {
              z_123 = t;
              if(((v_123 != NULL) && (v_123 != z_123)))
                _fail(z_123);
              else
                v_123 = z_123;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_7, _id);
  }
  t = r_24;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm k_7 (ATerm t)
      {
        t = not_null(v_123);
        return(t);
      }
      t = split_2(t, k_7, _id);
      return(t);
    }
    t = _2(t, _id, j_7);
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_7 (ATerm t)
          {
            ATerm m_7 (ATerm t)
            {
              ATerm b_124 = NULL;
              b_124 = t;
              u_123 :
              if(!(match_cons(b_124, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, m_7);
            return(t);
          }
          t = _2(t, l_7, WriteToBinaryFile_0);
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_63 (ATerm))
{
  ATerm h_124 = NULL,j_124 = NULL,k_124 = NULL,l_124 = NULL;
  ATerm x_24;
  x_24 = t;
  t = dtime_0(t);
  t = x_24;
  {
    t = q_63(t);
    {
      ATerm y_24;
      y_24 = t;
      {
        ATerm i_124 = NULL;
        t = dtime_0(t);
        {
          i_124 = t;
          if(((h_124 != NULL) && (h_124 != i_124)))
            _fail(i_124);
          else
            h_124 = i_124;
        }
      }
      t = y_24;
      {
        j_124 = t;
        g_124 :
        if(match_cons(j_124, sym__2))
          {
            k_124 = ATgetArgument(j_124, 0);
            l_124 = ATgetArgument(j_124, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_124)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_124))), not_null(l_124));
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
  ATerm s_124 = NULL;
  s_124 = t;
  t = SSL_ReadFromFile(not_null(s_124));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_66 (ATerm), ATerm i_66 (ATerm))
{
  ATerm x_124 = NULL,a_125 = NULL;
  ATerm z_24;
  z_24 = t;
  {
    ATerm y_124 = NULL;
    t = h_66(t);
    {
      y_124 = t;
      if(((x_124 != NULL) && (x_124 != y_124)))
        _fail(y_124);
      else
        x_124 = y_124;
    }
  }
  t = z_24;
  {
    ATerm b_125 = NULL;
    t = i_66(t);
    {
      b_125 = t;
      if(((a_125 != NULL) && (a_125 != b_125)))
        _fail(b_125);
      else
        a_125 = b_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_124), not_null(a_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm h_125 = NULL;
  ATerm a_25;
  a_25 = t;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 (ATerm t)
        {
          ATerm i_125 = NULL,j_125 = NULL;
          i_125 = t;
          f_125 :
          if(match_cons(i_125, sym_Input_1))
            {
              j_125 = ATgetArgument(i_125, 0);
              if(((h_125 != NULL) && (h_125 != j_125)))
                _fail(j_125);
              else
                h_125 = j_125;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_7);
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        {
          ATerm k_125 = NULL;
          t = term_d_25;
          {
            k_125 = t;
            if(((h_125 != NULL) && (h_125 != k_125)))
              _fail(k_125);
            else
              h_125 = k_125;
          }
        }
      }
  }
  t = a_25;
  {
    ATerm o_7 (ATerm t)
    {
      t = not_null(h_125);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm o_125 = NULL;
  o_125 = t;
  n_125 :
  if(!(match_cons(o_125, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm p_7 (ATerm t)
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_7);
  t = p_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_125 = NULL;
  q_125 = t;
  t = SSL_table_create(not_null(q_125));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_125 = NULL;
  u_125 = t;
  {
    ATerm i_25;
    i_25 = t;
    {
      t = term_m_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_25, term_u_25, not_null(u_125));
          t = table_put_0(t);
        }
      }
    }
    t = i_25;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL,f_126 = NULL,g_126 = NULL;
  c_126 = t;
  a_126 :
  if(match_string(c_126, "register-usage-info"))
    t = register_usage_1(t, n_0);
  else
    {
      if(((ATgetType(c_126) == AT_LIST) && ((ATermList) c_126 != ATempty)))
        {
          d_126 = ATgetFirst((ATermList) c_126);
          e_126 = (ATerm) ATgetNext((ATermList) c_126);
          b_126 :
          if(((ATgetType(e_126) == AT_LIST) && ((ATermList) e_126 != ATempty)))
            {
              f_126 = ATgetFirst((ATermList) e_126);
              g_126 = (ATerm) ATgetNext((ATermList) e_126);
              {
                ATerm k_126 = NULL;
                ATerm v_25;
                v_25 = t;
                {
                  t = not_null(d_126);
                  t = l_0(t);
                }
                t = v_25;
                {
                  ATerm l_126 = NULL;
                  t = not_null(f_126);
                  {
                    t = m_0(t);
                    {
                      l_126 = t;
                      if(((k_126 != NULL) && (k_126 != l_126)))
                        _fail(l_126);
                      else
                        k_126 = l_126;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_126)), not_null(k_126));
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
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        ATerm a_127 = NULL;
        a_127 = t;
        p_126 :
        if(!(match_string(a_127, "-S")))
          {
            if(!(match_string(a_127, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = term_y_25;
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        t = term_z_25;
        return(t);
      }
      t = Option_3(t, r_7, s_7, t_7);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              ATerm b_127 = NULL;
              b_127 = t;
              q_126 :
              if(!(match_string(b_127, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm z_7 (ATerm t)
            {
              t = term_c_26;
              return(t);
            }
            ATerm h_8 (ATerm t)
            {
              t = term_d_26;
              return(t);
            }
            t = Option_3(t, v_7, z_7, h_8);
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            {
              ATerm e_26 = t;
              int f_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_8 (ATerm t)
                  {
                    ATerm c_127 = NULL;
                    c_127 = t;
                    r_126 :
                    if(!(match_string(c_127, "-v")))
                      {
                        if(!(match_string(c_127, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm s_8 (ATerm t)
                  {
                    t = term_g_26;
                    return(t);
                  }
                  ATerm t_8 (ATerm t)
                  {
                    t = term_h_26;
                    return(t);
                  }
                  t = Option_3(t, r_8, s_8, t_8);
                  LocalPopChoice(f_26);
                }
              else
                {
                  t = e_26;
                  {
                    ATerm i_26 = t;
                    int j_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_8 (ATerm t)
                        {
                          ATerm d_127 = NULL;
                          d_127 = t;
                          s_126 :
                          if(!(match_string(d_127, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm v_8 (ATerm t)
                        {
                          ATerm e_127 = NULL;
                          ATerm f_127 = NULL;
                          f_127 = t;
                          if(((e_127 != NULL) && (e_127 != f_127)))
                            _fail(f_127);
                          else
                            e_127 = f_127;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(e_127));
                          return(t);
                        }
                        ATerm w_8 (ATerm t)
                        {
                          t = term_k_26;
                          return(t);
                        }
                        t = ArgOption_3(t, u_8, v_8, w_8);
                        LocalPopChoice(j_26);
                      }
                    else
                      {
                        t = i_26;
                        {
                          ATerm l_26 = t;
                          int m_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_8 (ATerm t)
                              {
                                ATerm g_127 = NULL;
                                g_127 = t;
                                u_126 :
                                if(!(match_string(g_127, "-i")))
                                  {
                                    if(!(match_string(g_127, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm y_8 (ATerm t)
                              {
                                ATerm h_127 = NULL;
                                ATerm i_127 = NULL;
                                i_127 = t;
                                if(((h_127 != NULL) && (h_127 != i_127)))
                                  _fail(i_127);
                                else
                                  h_127 = i_127;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_127));
                                return(t);
                              }
                              ATerm z_8 (ATerm t)
                              {
                                t = term_n_26;
                                return(t);
                              }
                              t = ArgOption_3(t, x_8, y_8, z_8);
                              LocalPopChoice(m_26);
                            }
                          else
                            {
                              t = l_26;
                              {
                                ATerm o_26 = t;
                                int p_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_9 (ATerm t)
                                    {
                                      ATerm j_127 = NULL;
                                      j_127 = t;
                                      w_126 :
                                      if(!(match_string(j_127, "-o")))
                                        {
                                          if(!(match_string(j_127, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_9 (ATerm t)
                                    {
                                      ATerm k_127 = NULL;
                                      ATerm l_127 = NULL;
                                      l_127 = t;
                                      if(((k_127 != NULL) && (k_127 != l_127)))
                                        _fail(l_127);
                                      else
                                        k_127 = l_127;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(k_127));
                                      return(t);
                                    }
                                    ATerm i_9 (ATerm t)
                                    {
                                      t = term_q_26;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, a_9, h_9, i_9);
                                    LocalPopChoice(p_26);
                                  }
                                else
                                  {
                                    t = o_26;
                                    {
                                      ATerm r_26 = t;
                                      int s_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_9 (ATerm t)
                                          {
                                            ATerm m_127 = NULL;
                                            m_127 = t;
                                            y_126 :
                                            if(!(match_string(m_127, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_9 (ATerm t)
                                          {
                                            t = term_t_26;
                                            return(t);
                                          }
                                          ATerm l_9 (ATerm t)
                                          {
                                            t = term_u_26;
                                            return(t);
                                          }
                                          t = Option_3(t, j_9, k_9, l_9);
                                          LocalPopChoice(s_26);
                                        }
                                      else
                                        {
                                          t = r_26;
                                          {
                                            ATerm m_9 (ATerm t)
                                            {
                                              ATerm n_127 = NULL;
                                              n_127 = t;
                                              z_126 :
                                              if(!(match_string(n_127, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm n_9 (ATerm t)
                                            {
                                              t = term_v_26;
                                              return(t);
                                            }
                                            ATerm q_9 (ATerm t)
                                            {
                                              t = term_w_26;
                                              return(t);
                                            }
                                            t = Option_3(t, m_9, n_9, q_9);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm s_127 = NULL;
  s_127 = t;
  t = SSL_table_destroy(not_null(s_127));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_127 = NULL;
  w_127 = t;
  t = SSL_exit(not_null(w_127));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_128 = NULL;
  a_128 = t;
  t = SSL_implode_string(not_null(a_128));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_73 (ATerm))
{
  ATerm d_128 (ATerm t)
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_128);
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        {
          t = Nil_0(t);
          t = k_73(t);
        }
      }
    return(t);
  }
  t = d_128(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm g_128 = NULL,h_128 = NULL,i_128 = NULL;
        g_128 = t;
        f_128 :
        if(((ATgetType(g_128) == AT_LIST) && ((ATermList) g_128 != ATempty)))
          {
            h_128 = ATgetFirst((ATermList) g_128);
            i_128 = (ATerm) ATgetNext((ATermList) g_128);
            {
              t = not_null(h_128);
              {
                ATerm u_9 (ATerm t)
                {
                  t = not_null(i_128);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_9);
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
  ATerm o_128 = NULL;
  o_128 = t;
  t = SSL_explode_string(not_null(o_128));
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
ATerm long_description_1 (ATerm t, ATerm w_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm r_128 (ATerm t)
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = Cons_2(t, w_72, r_128);
      }
    return(t);
  }
  t = r_128(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm w_128 = NULL,x_128 = NULL,z_128 = NULL;
  z_128 = t;
  v_128 :
  if(((ATgetType(z_128) == AT_LIST) && ((ATermList) z_128 != ATempty)))
    {
      w_128 = ATgetFirst((ATermList) z_128);
      x_128 = (ATerm) ATgetNext((ATermList) z_128);
      {
        t = not_null(x_128);
        {
          ATerm b_10 (ATerm t)
          {
            ATerm c_129 = NULL;
            ATerm d_129 = NULL;
            t = k_0(t);
            {
              d_129 = t;
              if(((c_129 != NULL) && (c_129 != d_129)))
                _fail(d_129);
              else
                c_129 = d_129;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(c_129)), not_null(w_128));
            return(t);
          }
          t = reverse_1(t, b_10);
        }
      }
    }
  else
    {
      if(((ATermList) z_128 == ATempty))
        {
          {
            t = term_q_14;
            t = k_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, c_10);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_47 (ATerm))
{
  ATerm k_129 = NULL,l_129 = NULL;
  k_129 = t;
  j_129 :
  if(match_cons(k_129, sym_Program_1))
    {
      l_129 = ATgetArgument(k_129, 0);
      {
        ATerm n_129 = NULL;
        t = not_null(l_129);
        {
          t = l_47(t);
          {
            n_129 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_129));
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
  ATerm x_129 = NULL;
  ATerm d_10 (ATerm t)
  {
    ATerm e_10 (ATerm t)
    {
      ATerm y_129 = NULL;
      y_129 = t;
      if(((x_129 != NULL) && (x_129 != y_129)))
        _fail(y_129);
      else
        x_129 = y_129;
      return(t);
    }
    t = Program_1(t, e_10);
    return(t);
  }
  t = option_defined_1(t, d_10);
  {
    ATerm f_10 (ATerm t)
    {
      ATerm z_129 = NULL;
      ATerm a_130 = NULL;
      t = term_q_14;
      {
        ATerm g_10 (ATerm t)
        {
          t = not_null(x_129);
          return(t);
        }
        t = short_description_1(t, g_10);
        {
          t = concat_strings_0(t);
          {
            a_130 = t;
            if(((z_129 != NULL) && (z_129 != a_130)))
              _fail(a_130);
            else
              z_129 = a_130;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATempty, not_null(z_129)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_10);
    {
      t = term_f_27;
      {
        t = printnl_0(t);
        {
          t = term_i_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_10 (ATerm t)
                {
                  ATerm b_130 = NULL;
                  b_130 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_130)), term_j_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_10);
                {
                  ATerm j_10 (ATerm t)
                  {
                    ATerm d_130 = NULL;
                    ATerm e_130 = NULL;
                    t = term_q_14;
                    {
                      ATerm k_10 (ATerm t)
                      {
                        t = not_null(x_129);
                        return(t);
                      }
                      t = long_description_1(t, k_10);
                      {
                        t = concat_strings_0(t);
                        {
                          e_130 = t;
                          if(((d_130 != NULL) && (d_130 != e_130)))
                            _fail(e_130);
                          else
                            d_130 = e_130;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_130)), term_k_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_10);
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
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL;
  o_130 = t;
  n_130 :
  if(match_cons(o_130, sym__2))
    {
      p_130 = ATgetArgument(o_130, 0);
      q_130 = ATgetArgument(o_130, 1);
      {
        ATerm l_27;
        l_27 = t;
        t = SSL_printnl(not_null(p_130), not_null(q_130));
        t = l_27;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm m_47 (ATerm))
{
  ATerm x_130 = NULL,y_130 = NULL;
  x_130 = t;
  w_130 :
  if(match_cons(x_130, sym_Undefined_1))
    {
      y_130 = ATgetArgument(x_130, 0);
      {
        ATerm a_131 = NULL;
        t = not_null(y_130);
        {
          t = m_47(t);
          {
            a_131 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_131));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm e_131 (ATerm t)
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_73, _id);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = Cons_2(t, _id, e_131);
      }
    return(t);
  }
  t = e_131(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_62 (ATerm))
{
  t = fetch_1(t, u_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_131 = NULL;
  g_131 = t;
  f_131 :
  if(!(match_cons(g_131, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_79 (ATerm))
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_79(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL,l_131 = NULL;
  j_131 = t;
  i_131 :
  if(match_cons(j_131, sym__2))
    {
      k_131 = ATgetArgument(j_131, 0);
      l_131 = ATgetArgument(j_131, 1);
      t = SSL_table_get(not_null(k_131), not_null(l_131));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL,v_131 = NULL;
  s_131 = t;
  r_131 :
  if(match_cons(s_131, sym__3))
    {
      t_131 = ATgetArgument(s_131, 0);
      u_131 = ATgetArgument(s_131, 1);
      v_131 = ATgetArgument(s_131, 2);
      {
        ATerm q_27;
        q_27 = t;
        {
          ATerm z_131 = NULL;
          ATerm a_132 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_131), not_null(u_131));
          {
            ATerm r_27 = t;
            int s_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_27);
              }
            else
              {
                t = r_27;
                t = (ATerm) ATempty;
              }
            {
              a_132 = t;
              if(((z_131 != NULL) && (z_131 != a_132)))
                _fail(a_132);
              else
                z_131 = a_132;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_131), not_null(u_131), (ATerm) ATinsert(CheckATermList(not_null(z_131)), not_null(v_131)));
            t = table_put_0(t);
          }
        }
        t = q_27;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm e_132 = NULL;
  ATerm f_132 = NULL;
  t = term_q_14;
  {
    t = a_62(t);
    {
      f_132 = t;
      if(((e_132 != NULL) && (e_132 != f_132)))
        _fail(f_132);
      else
        e_132 = f_132;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_27, term_h_27, not_null(e_132));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm l_132 = NULL,m_132 = NULL,n_132 = NULL;
  l_132 = t;
  k_132 :
  if(match_string(l_132, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(l_132) == AT_LIST) && ((ATermList) l_132 != ATempty)))
        {
          m_132 = ATgetFirst((ATermList) l_132);
          n_132 = (ATerm) ATgetNext((ATermList) l_132);
          {
            ATerm q_132 = NULL;
            ATerm t_27;
            t_27 = t;
            {
              t = not_null(m_132);
              t = a_0(t);
            }
            t = t_27;
            {
              ATerm r_132 = NULL;
              t = term_q_14;
              {
                t = g_0(t);
                {
                  r_132 = t;
                  if(((q_132 != NULL) && (q_132 != r_132)))
                    _fail(r_132);
                  else
                    q_132 = r_132;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_132)), not_null(q_132));
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
  ATerm l_10 (ATerm t)
  {
    ATerm w_132 = NULL;
    w_132 = t;
    v_132 :
    if(!(match_string(w_132, "--help")))
      {
        if(!(match_string(w_132, "-h")))
          {
            if(!(match_string(w_132, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm n_10 (ATerm t)
  {
    t = term_u_27;
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    t = term_v_27;
    return(t);
  }
  t = Option_3(t, l_10, n_10, r_10);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL;
  z_132 = t;
  y_132 :
  if(((ATgetType(z_132) == AT_LIST) && ((ATermList) z_132 != ATempty)))
    {
      a_133 = ATgetFirst((ATermList) z_132);
      b_133 = (ATerm) ATgetNext((ATermList) z_132);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_133)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_133)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm j_133 = NULL,k_133 = NULL,l_133 = NULL;
  j_133 = t;
  i_133 :
  if(((ATgetType(j_133) == AT_LIST) && ((ATermList) j_133 != ATempty)))
    {
      k_133 = ATgetFirst((ATermList) j_133);
      l_133 = (ATerm) ATgetNext((ATermList) j_133);
      {
        ATerm o_133 = NULL;
        t = not_null(k_133);
        {
          ATerm q_133 = NULL;
          t = s_56(t);
          {
            o_133 = t;
            {
              t = not_null(l_133);
              {
                t = t_56(t);
                {
                  q_133 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_133)), not_null(o_133));
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
  ATerm w_133 = NULL;
  w_133 = t;
  v_133 :
  if(((ATermList) w_133 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm w_27;
  w_27 = t;
  {
    ATerm z_10 (ATerm t)
    {
      t = term_x_27;
      t = y_61(t);
      return(t);
    }
    t = try_1(t, z_10);
  }
  t = w_27;
  {
    ATerm c_11 (ATerm t)
    {
      ATerm y_133 = NULL;
      y_133 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_133));
      return(t);
    }
    ATerm d_11 (ATerm t)
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_28 = t;
          int b_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_28);
            }
          else
            {
              t = a_28;
              {
                t = y_61(t);
                t = Cons_2(t, _id, d_11);
              }
            }
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_11, d_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_134 = NULL,f_134 = NULL,g_134 = NULL;
  ATerm c_28;
  c_28 = t;
  {
    ATerm h_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL;
    h_134 = t;
    d_134 :
    if(match_cons(h_134, sym__3))
      {
        i_134 = ATgetArgument(h_134, 0);
        j_134 = ATgetArgument(h_134, 1);
        k_134 = ATgetArgument(h_134, 2);
        {
          if(((e_134 != NULL) && (e_134 != i_134)))
            _fail(i_134);
          else
            e_134 = i_134;
          {
            if(((f_134 != NULL) && (f_134 != j_134)))
              _fail(j_134);
            else
              f_134 = j_134;
            {
              if(((g_134 != NULL) && (g_134 != k_134)))
                _fail(k_134);
              else
                g_134 = k_134;
              t = SSL_table_put(not_null(e_134), not_null(f_134), not_null(g_134));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = c_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm n_134 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    t = term_e_28;
    t = table_put_0(t);
  }
  t = d_28;
  {
    ATerm e_11 (ATerm t)
    {
      ATerm h_28 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_61(t);
          LocalPopChoice(i_28);
        }
      else
        {
          t = h_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_11);
    {
      ATerm f_11 (ATerm t)
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_y_15;
                t = exit_0(t);
              }
            }
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm g_11 (ATerm t)
              {
                ATerm h_11 (ATerm t)
                {
                  ATerm o_134 = NULL;
                  o_134 = t;
                  if(((n_134 != NULL) && (n_134 != o_134)))
                    _fail(o_134);
                  else
                    n_134 = o_134;
                  return(t);
                }
                t = Undefined_1(t, h_11);
                return(t);
              }
              t = option_defined_1(t, g_11);
              {
                ATerm l_28;
                l_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_134)), term_o_28));
                  t = printnl_0(t);
                }
                t = l_28;
                {
                  t = system_usage_0(t);
                  {
                    t = term_z_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_11);
      {
        ATerm p_28;
        p_28 = t;
        {
          t = term_g_27;
          t = table_destroy_0(t);
        }
        t = p_28;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_63 (ATerm), ATerm f_63 (ATerm), ATerm g_63 (ATerm))
{
  ATerm i_11 (ATerm t)
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_63(t);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_11);
  {
    t = store_options_0(t);
    {
      ATerm s_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, g_63);
          LocalPopChoice(v_28);
        }
      else
        {
          t = s_28;
          {
            ATerm w_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, e_63);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(y_28);
              }
            else
              {
                t = w_28;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_62 (ATerm), ATerm a_63 (ATerm))
{
  t = iowrap_3(t, z_62, a_63, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    t = _2(t, _id, w_62);
    return(t);
  }
  t = iowrap_2(t, j_11, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
