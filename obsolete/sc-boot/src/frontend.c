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
ATerm term_o_30;
ATerm term_y_29;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_w_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_y_27;
ATerm term_r_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_k_26;
ATerm term_x_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_k_21;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_k_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_i_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
void init_constant_terms (void)
{
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Op_2, term_p_14, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Var_1, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Var_1, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Anno_2, term_x_14, term_z_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Var_1, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Var_1, term_e_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Anno_2, term_d_15, term_g_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_14);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Call_2, term_p_15, (ATerm) ATempty);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_BAM_3, term_q_15, term_x_14, term_d_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_14);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Call_2, term_s_15, (ATerm) ATempty);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_BAM_3, term_t_15, term_z_14, term_g_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Var_1, term_s_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_16);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, term_l_18);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Op_2, term_r_21, (ATerm) ATempty);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Op_2, term_w_11, (ATerm) ATempty);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_23);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_s_28, term_w_28);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__3, term_s_28, term_w_28, (ATerm) ATempty);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm Explode_2 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_58 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm m_73 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm d_54 (ATerm), ATerm e_54 (ATerm));
ATerm Con_3 (ATerm, ATerm a_54 (ATerm), ATerm b_54 (ATerm), ATerm c_54 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm d_79 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_55 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_55 (ATerm));
ATerm spaste_1 (ATerm, ATerm d_59 (ATerm));
ATerm Rec_2 (ATerm, ATerm w_56 (ATerm), ATerm x_56 (ATerm));
ATerm Let_2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm sboundin_3 (ATerm, ATerm e_59 (ATerm), ATerm f_59 (ATerm), ATerm g_59 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm v_56 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm x_61 (ATerm, ATerm (ATerm)), ATerm y_61 (ATerm), ATerm z_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_62 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm DeclareVariables_0 (ATerm);
ATerm RDtoSD_0 (ATerm);
ATerm MkCall_0 (ATerm);
ATerm MkCongDef_0 (ATerm);
ATerm MkCongDefs_0 (ATerm);
ATerm congdefs_0 (ATerm);
ATerm RulesToSdefs_0 (ATerm);
ATerm TupleDeclarations_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm CheckConsError_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_0 (ATerm);
ATerm CheckTuple_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm o_65 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm l_80 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm j_65 (ATerm));
ATerm restore_always_2 (ATerm, ATerm e_82 (ATerm), ATerm f_82 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm i_65 (ATerm));
ATerm scope_2 (ATerm, ATerm k_65 (ATerm), ATerm l_65 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm t_58 (ATerm), ATerm u_58 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm m_65 (ATerm));
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm c_60 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm d_56 (ATerm), ATerm e_56 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm z_58 (ATerm));
ATerm Var_1 (ATerm, ATerm z_55 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm j_61 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm i_76 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm n_76 (ATerm));
ATerm substitute_6 (ATerm, ATerm h_62 (ATerm), ATerm i_62 (ATerm, ATerm (ATerm)), ATerm j_62 (ATerm), ATerm k_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_62 (ATerm, ATerm (ATerm)), ATerm m_62 (ATerm));
ATerm substitute_5 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm, ATerm (ATerm)), ATerm q_62 (ATerm), ATerm r_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_62 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm a_60 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm b_60 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm n_47 (ATerm), ATerm o_47 (ATerm), ATerm p_47 (ATerm));
ATerm Overlay_3 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm), ATerm j_55 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm a_73 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm w_58 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm o_57 (ATerm), ATerm p_57 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm s_54 (ATerm), ATerm t_54 (ATerm), ATerm u_54 (ATerm));
ATerm BAM_3 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm));
ATerm BA_2 (ATerm, ATerm v_53 (ATerm), ATerm w_53 (ATerm));
ATerm AM_2 (ATerm, ATerm t_53 (ATerm), ATerm u_53 (ATerm));
ATerm MA_2 (ATerm, ATerm r_53 (ATerm), ATerm s_53 (ATerm));
ATerm Match_1 (ATerm, ATerm w_57 (ATerm));
ATerm Build_1 (ATerm, ATerm x_57 (ATerm));
ATerm constructs_1 (ATerm, ATerm v_58 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm a_55 (ATerm), ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm l_55 (ATerm));
ATerm Signature_1 (ATerm, ATerm k_55 (ATerm));
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
ATerm SplitDynamicRule_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm h_82 (ATerm));
ATerm one_dist_1 (ATerm, ATerm j_76 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm y_76 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_80 (ATerm));
ATerm listtd_1 (ATerm, ATerm r_75 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm d_55 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm tboundin_3 (ATerm, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm crush_3 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_81 (ATerm), ATerm m_81 (ATerm));
ATerm for_3 (ATerm, ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm));
ATerm HdMember_1 (ATerm, ATerm n_70 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_60 (ATerm), ATerm h_60 (ATerm), ATerm i_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm n_77 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm));
ATerm alltd_1 (ATerm, ATerm r_79 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm zip_1 (ATerm, ATerm h_73 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm substitute_1 (ATerm, ATerm g_62 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm p_68 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_69 (ATerm), ATerm k_69 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_77 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm l_47 (ATerm), ATerm m_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_67 (ATerm), ATerm y_67 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_63 (ATerm));
ATerm map_1 (ATerm, ATerm p_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_63 (ATerm));
ATerm Program_1 (ATerm, ATerm u_48 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_48 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_63 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm j_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_64 (ATerm), ATerm p_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_64 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  w_5 = t;
  u_5 :
  if(match_cons(w_5, sym_ExplodeCong_2))
    {
      x_5 = ATgetArgument(w_5, 0);
      v_5 = ATgetArgument(w_5, 1);
      {
        ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
        ATerm e_6 = NULL;
        ATerm f_6 = NULL;
        t = new_0(t);
        {
          e_6 = t;
          {
            if(((a_6 != NULL) && (a_6 != e_6)))
              _fail(e_6);
            else
              a_6 = e_6;
            {
              ATerm g_6 = NULL;
              t = new_0(t);
              {
                f_6 = t;
                {
                  if(((b_6 != NULL) && (b_6 != f_6)))
                    _fail(f_6);
                  else
                    b_6 = f_6;
                  {
                    ATerm h_6 = NULL;
                    t = new_0(t);
                    {
                      g_6 = t;
                      {
                        if(((c_6 != NULL) && (c_6 != g_6)))
                          _fail(g_6);
                        else
                          c_6 = g_6;
                        {
                          t = new_0(t);
                          {
                            h_6 = t;
                            if(((d_6 != NULL) && (d_6 != h_6)))
                              _fail(h_6);
                            else
                              d_6 = h_6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_6)), not_null(c_6)), not_null(b_6)), not_null(a_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_6)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_6)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(x_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_6)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_6))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_6)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_6))))), (ATerm) ATmakeAppl(sym_Prim_2, term_u_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_6))), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_6)))))));
      }
    }
  else
    {
      if(match_cons(w_5, sym_Build_1))
        {
          x_5 = ATgetArgument(w_5, 0);
          {
            ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
            ATerm n_6 = NULL;
            ATerm r_6 = NULL;
            t = new_0(t);
            {
              n_6 = t;
              {
                if(((l_6 != NULL) && (l_6 != n_6)))
                  _fail(n_6);
                else
                  l_6 = n_6;
                {
                  t = not_null(x_5);
                  {
                    ATerm d_0 (ATerm t)
                    {
                      ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
                      o_6 = t;
                      n_5 :
                      if(match_cons(o_6, sym_Explode_2))
                        {
                          p_6 = ATgetArgument(o_6, 0);
                          q_6 = ATgetArgument(o_6, 1);
                          {
                            if(((j_6 != NULL) && (j_6 != p_6)))
                              _fail(p_6);
                            else
                              j_6 = p_6;
                            {
                              if(((k_6 != NULL) && (k_6 != q_6)))
                                _fail(q_6);
                              else
                                k_6 = q_6;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_6));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, d_0);
                    {
                      r_6 = t;
                      if(((m_6 != NULL) && (m_6 != r_6)))
                        _fail(r_6);
                      else
                        m_6 = r_6;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_u_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_6)), not_null(j_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_6))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_6)))));
          }
        }
      else
        {
          if(match_cons(w_5, sym_Match_1))
            {
              x_5 = ATgetArgument(w_5, 0);
              {
                ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
                ATerm y_6 = NULL;
                ATerm z_6 = NULL;
                t = new_0(t);
                {
                  y_6 = t;
                  {
                    if(((v_6 != NULL) && (v_6 != y_6)))
                      _fail(y_6);
                    else
                      v_6 = y_6;
                    {
                      ATerm d_7 = NULL;
                      t = new_0(t);
                      {
                        z_6 = t;
                        {
                          if(((w_6 != NULL) && (w_6 != z_6)))
                            _fail(z_6);
                          else
                            w_6 = z_6;
                          {
                            t = not_null(x_5);
                            {
                              ATerm e_0 (ATerm t)
                              {
                                ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
                                a_7 = t;
                                s_5 :
                                if(match_cons(a_7, sym_Explode_2))
                                  {
                                    b_7 = ATgetArgument(a_7, 0);
                                    c_7 = ATgetArgument(a_7, 1);
                                    {
                                      if(((t_6 != NULL) && (t_6 != b_7)))
                                        _fail(b_7);
                                      else
                                        t_6 = b_7;
                                      {
                                        if(((u_6 != NULL) && (u_6 != c_7)))
                                          _fail(c_7);
                                        else
                                          u_6 = c_7;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_6));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, e_0);
                              {
                                d_7 = t;
                                if(((x_6 != NULL) && (x_6 != d_7)))
                                  _fail(d_7);
                                else
                                  x_6 = d_7;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_6)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_6))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_6)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_6)), (ATerm) ATmakeAppl(sym_Op_2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_6)), not_null(t_6)))))));
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Match_1))
    {
      j_8 = ATgetArgument(i_8, 0);
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
            ATerm p_8 = NULL;
            ATerm t_8 = NULL;
            t = new_0(t);
            {
              p_8 = t;
              {
                if(((n_8 != NULL) && (n_8 != p_8)))
                  _fail(p_8);
                else
                  n_8 = p_8;
                {
                  t = not_null(j_8);
                  {
                    ATerm i_0 (ATerm t)
                    {
                      ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
                      q_8 = t;
                      x_7 :
                      if(match_cons(q_8, sym_Anno_2))
                        {
                          r_8 = ATgetArgument(q_8, 0);
                          s_8 = ATgetArgument(q_8, 1);
                          {
                            if(((l_8 != NULL) && (l_8 != r_8)))
                              _fail(r_8);
                            else
                              l_8 = r_8;
                            {
                              if(((m_8 != NULL) && (m_8 != s_8)))
                                _fail(s_8);
                              else
                                m_8 = s_8;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_8)), not_null(l_8));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, i_0);
                    {
                      t_8 = t;
                      if(((o_8 != NULL) && (o_8 != t_8)))
                        _fail(t_8);
                      else
                        o_8 = t_8;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_8)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_8)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_8))))));
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm a_12 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
                  ATerm y_8 = NULL;
                  ATerm b_9 = NULL;
                  t = new_0(t);
                  {
                    y_8 = t;
                    {
                      if(((w_8 != NULL) && (w_8 != y_8)))
                        _fail(y_8);
                      else
                        w_8 = y_8;
                      {
                        t = not_null(j_8);
                        {
                          ATerm r_0 (ATerm t)
                          {
                            ATerm z_8 = NULL,a_9 = NULL;
                            z_8 = t;
                            b_8 :
                            if(match_cons(z_8, sym_RootApp_1))
                              {
                                a_9 = ATgetArgument(z_8, 0);
                                {
                                  if(((v_8 != NULL) && (v_8 != a_9)))
                                    _fail(a_9);
                                  else
                                    v_8 = a_9;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_8));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, r_0);
                          {
                            b_9 = t;
                            if(((x_8 != NULL) && (x_8 != b_9)))
                              _fail(b_9);
                            else
                              x_8 = b_9;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(x_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_8))), not_null(v_8))));
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = a_12;
                  {
                    ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
                    ATerm h_9 = NULL;
                    ATerm l_9 = NULL;
                    t = new_0(t);
                    {
                      h_9 = t;
                      {
                        if(((f_9 != NULL) && (f_9 != h_9)))
                          _fail(h_9);
                        else
                          f_9 = h_9;
                        {
                          t = not_null(j_8);
                          {
                            ATerm s_0 (ATerm t)
                            {
                              ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
                              i_9 = t;
                              f_8 :
                              if(match_cons(i_9, sym_App_2))
                                {
                                  j_9 = ATgetArgument(i_9, 0);
                                  k_9 = ATgetArgument(i_9, 1);
                                  {
                                    if(((e_9 != NULL) && (e_9 != j_9)))
                                      _fail(j_9);
                                    else
                                      e_9 = j_9;
                                    {
                                      if(((d_9 != NULL) && (d_9 != k_9)))
                                        _fail(k_9);
                                      else
                                        d_9 = k_9;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_9));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, s_0);
                            {
                              l_9 = t;
                              if(((g_9 != NULL) && (g_9 != l_9)))
                                _fail(l_9);
                              else
                                g_9 = l_9;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_9)), not_null(e_9)))));
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  c_10 = t;
  a_10 :
  if(match_cons(c_10, sym_Match_1))
    {
      d_10 = ATgetArgument(c_10, 0);
      b_10 :
      if(match_cons(d_10, sym_RootApp_1))
        {
          e_10 = ATgetArgument(d_10, 0);
          t = not_null(e_10);
        }
      else
        {
          if(match_cons(d_10, sym_App_2))
            {
              e_10 = ATgetArgument(d_10, 0);
              f_10 = ATgetArgument(d_10, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(e_10), not_null(f_10));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym_Match_1))
    {
      s_10 = ATgetArgument(r_10, 0);
      {
        ATerm u_10 = NULL,v_10 = NULL;
        ATerm z_10 = NULL;
        t = not_null(s_10);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
            w_10 = t;
            n_10 :
            if(match_cons(w_10, sym_RootApp_1))
              {
                x_10 = ATgetArgument(w_10, 0);
                o_10 :
                if(match_cons(x_10, sym_Match_1))
                  {
                    y_10 = ATgetArgument(x_10, 0);
                    {
                      if(((u_10 != NULL) && (u_10 != y_10)))
                        _fail(y_10);
                      else
                        u_10 = y_10;
                      t = not_null(u_10);
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
          t = pat_td_1(t, t_0);
          {
            z_10 = t;
            if(((v_10 != NULL) && (v_10 != z_10)))
              _fail(z_10);
            else
              v_10 = z_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(v_10));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_Build_1))
    {
      j_15 = ATgetArgument(i_15, 0);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
            ATerm o_18 = NULL;
            ATerm m_19 = NULL;
            t = new_0(t);
            {
              o_18 = t;
              {
                if(((n_15 != NULL) && (n_15 != o_18)))
                  _fail(o_18);
                else
                  n_15 = o_18;
                {
                  t = not_null(j_15);
                  {
                    ATerm u_0 (ATerm t)
                    {
                      ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
                      p_18 = t;
                      i_11 :
                      if(match_cons(p_18, sym_Anno_2))
                        {
                          q_18 = ATgetArgument(p_18, 0);
                          r_18 = ATgetArgument(p_18, 1);
                          {
                            if(((l_15 != NULL) && (l_15 != q_18)))
                              _fail(q_18);
                            else
                              l_15 = q_18;
                            {
                              if(((m_15 != NULL) && (m_15 != r_18)))
                                _fail(r_18);
                              else
                                m_15 = r_18;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, u_0);
                    {
                      m_19 = t;
                      if(((o_15 != NULL) && (o_15 != m_19)))
                        _fail(m_19);
                      else
                        o_15 = m_19;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_i_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_15)), not_null(l_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_15))));
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm j_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_19 = NULL,q_19 = NULL,p_20 = NULL;
                  ATerm q_20 = NULL;
                  ATerm z_21 = NULL;
                  t = new_0(t);
                  {
                    q_20 = t;
                    {
                      if(((q_19 != NULL) && (q_19 != q_20)))
                        _fail(q_20);
                      else
                        q_19 = q_20;
                      {
                        t = not_null(j_15);
                        {
                          ATerm v_0 (ATerm t)
                          {
                            ATerm r_20 = NULL,y_21 = NULL;
                            r_20 = t;
                            b_15 :
                            if(match_cons(r_20, sym_RootApp_1))
                              {
                                y_21 = ATgetArgument(r_20, 0);
                                {
                                  if(((p_19 != NULL) && (p_19 != y_21)))
                                    _fail(y_21);
                                  else
                                    p_19 = y_21;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_19));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, v_0);
                          {
                            z_21 = t;
                            if(((p_20 != NULL) && (p_20 != z_21)))
                              _fail(z_21);
                            else
                              p_20 = z_21;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_19)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_19), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_19))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_20))));
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = j_12;
                  {
                    ATerm b_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
                    ATerm w_22 = NULL;
                    ATerm a_23 = NULL;
                    t = new_0(t);
                    {
                      w_22 = t;
                      {
                        if(((k_22 != NULL) && (k_22 != w_22)))
                          _fail(w_22);
                        else
                          k_22 = w_22;
                        {
                          t = not_null(j_15);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
                              x_22 = t;
                              f_15 :
                              if(match_cons(x_22, sym_App_2))
                                {
                                  y_22 = ATgetArgument(x_22, 0);
                                  z_22 = ATgetArgument(x_22, 1);
                                  {
                                    if(((b_22 != NULL) && (b_22 != y_22)))
                                      _fail(y_22);
                                    else
                                      b_22 = y_22;
                                    {
                                      if(((j_22 != NULL) && (j_22 != z_22)))
                                        _fail(z_22);
                                      else
                                        j_22 = z_22;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_22));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, w_0);
                            {
                              a_23 = t;
                              if(((l_22 != NULL) && (l_22 != a_23)))
                                _fail(a_23);
                              else
                                l_22 = a_23;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_22)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_22), not_null(j_22), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_22)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_22))));
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  t_23 = t;
  p_23 :
  if(match_cons(t_23, sym_Build_1))
    {
      u_23 = ATgetArgument(t_23, 0);
      q_23 :
      if(match_cons(u_23, sym_RootApp_1))
        {
          v_23 = ATgetArgument(u_23, 0);
          t = not_null(v_23);
        }
      else
        {
          if(match_cons(u_23, sym_App_2))
            {
              v_23 = ATgetArgument(u_23, 0);
              w_23 = ATgetArgument(u_23, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_23)), not_null(v_23));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_Prim_2))
    {
      l_25 = ATgetArgument(k_25, 0);
      m_25 = ATgetArgument(k_25, 1);
      {
        ATerm p_25 = NULL;
        t = not_null(l_25);
        {
          ATerm r_25 = NULL;
          t = d_58(t);
          {
            p_25 = t;
            {
              t = not_null(m_25);
              {
                t = e_58(t);
                {
                  r_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_25), not_null(r_25));
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
ATerm Explode_2 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Explode_2))
    {
      i_26 = ATgetArgument(h_26, 0);
      j_26 = ATgetArgument(h_26, 1);
      {
        ATerm m_26 = NULL;
        t = not_null(i_26);
        {
          ATerm o_26 = NULL;
          t = j_54(t);
          {
            m_26 = t;
            {
              t = not_null(j_26);
              {
                t = k_54(t);
                {
                  o_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(m_26), not_null(o_26));
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
ATerm pat_td_1 (ATerm t, ATerm r_58 (ATerm))
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_58(t);
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
            ATerm x_0 (ATerm t)
            {
              ATerm y_0 (ATerm t)
              {
                t = pat_td_1(t, r_58);
                return(t);
              }
              t = fetch_1(t, y_0);
              return(t);
            }
            t = Op_2(t, _id, x_0);
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm p_12 = t;
              int q_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = pat_td_1(t, r_58);
                    return(t);
                  }
                  t = Explode_2(t, _id, z_0);
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
                        ATerm a_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_58);
                          return(t);
                        }
                        t = Explode_2(t, a_1, _id);
                        LocalPopChoice(s_12);
                      }
                    else
                      {
                        t = r_12;
                        {
                          ATerm b_1 (ATerm t)
                          {
                            ATerm c_1 (ATerm t)
                            {
                              t = pat_td_1(t, r_58);
                              return(t);
                            }
                            t = fetch_1(t, c_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, b_1);
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  f_27 = t;
  e_27 :
  if(match_cons(f_27, sym_Build_1))
    {
      g_27 = ATgetArgument(f_27, 0);
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_27 = NULL,s_27 = NULL;
            ATerm z_27 = NULL;
            t = not_null(g_27);
            {
              ATerm d_1 (ATerm t)
              {
                ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
                t_27 = t;
                x_26 :
                if(match_cons(t_27, sym_RootApp_1))
                  {
                    u_27 = ATgetArgument(t_27, 0);
                    y_26 :
                    if(match_cons(u_27, sym_Build_1))
                      {
                        v_27 = ATgetArgument(u_27, 0);
                        {
                          if(((i_27 != NULL) && (i_27 != v_27)))
                            _fail(v_27);
                          else
                            i_27 = v_27;
                          t = not_null(i_27);
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
              t = pat_td_1(t, d_1);
              {
                z_27 = t;
                if(((s_27 != NULL) && (s_27 != z_27)))
                  _fail(z_27);
                else
                  s_27 = z_27;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_27));
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            {
              ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
              ATerm b_29 = NULL;
              t = not_null(g_27);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
                  x_28 = t;
                  b_27 :
                  if(match_cons(x_28, sym_App_2))
                    {
                      y_28 = ATgetArgument(x_28, 0);
                      a_29 = ATgetArgument(x_28, 1);
                      c_27 :
                      if(match_cons(y_28, sym_Build_1))
                        {
                          z_28 = ATgetArgument(y_28, 0);
                          {
                            if(((u_28 != NULL) && (u_28 != z_28)))
                              _fail(z_28);
                            else
                              u_28 = z_28;
                            {
                              if(((t_28 != NULL) && (t_28 != a_29)))
                                _fail(a_29);
                              else
                                t_28 = a_29;
                              t = not_null(u_28);
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
                t = pat_td_1(t, e_1);
                {
                  b_29 = t;
                  if(((v_28 != NULL) && (v_28 != b_29)))
                    _fail(b_29);
                  else
                    v_28 = b_29;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_28));
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
ATerm Bapp_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  l_30 = t;
  b_30 :
  if(match_cons(l_30, sym_InfixApp_3))
    {
      m_30 = ATgetArgument(l_30, 0);
      g_30 = ATgetArgument(l_30, 1);
      f_30 = ATgetArgument(l_30, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(g_30), (ATerm) ATmakeAppl(sym_Op_2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_30)), not_null(m_30))));
    }
  else
    {
      if(match_cons(l_30, sym_BAM_3))
        {
          m_30 = ATgetArgument(l_30, 0);
          g_30 = ATgetArgument(l_30, 1);
          f_30 = ATgetArgument(l_30, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(f_30))), not_null(m_30)), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_30))));
        }
      else
        {
          if(match_cons(l_30, sym_AM_2))
            {
              m_30 = ATgetArgument(l_30, 0);
              g_30 = ATgetArgument(l_30, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_30), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_30)));
            }
          else
            {
              if(match_cons(l_30, sym_MA_2))
                {
                  m_30 = ATgetArgument(l_30, 0);
                  g_30 = ATgetArgument(l_30, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_30)), not_null(g_30));
                }
              else
                {
                  if(match_cons(l_30, sym_BA_2))
                    {
                      m_30 = ATgetArgument(l_30, 0);
                      g_30 = ATgetArgument(l_30, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(g_30)), not_null(m_30));
                    }
                  else
                    {
                      if(match_cons(l_30, sym_Lets_2))
                        {
                          m_30 = ATgetArgument(l_30, 0);
                          g_30 = ATgetArgument(l_30, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(m_30), not_null(g_30));
                        }
                      else
                        {
                          if(match_cons(l_30, sym_LChoices_1))
                            {
                              m_30 = ATgetArgument(l_30, 0);
                              c_30 :
                              if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
                                {
                                  h_30 = ATgetFirst((ATermList) m_30);
                                  k_30 = (ATerm) ATgetNext((ATermList) m_30);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_30), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(k_30)));
                                }
                              else
                                {
                                  if(((ATermList) m_30 == ATempty))
                                    {
                                      t = term_z_12;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(l_30, sym_Choices_1))
                                {
                                  m_30 = ATgetArgument(l_30, 0);
                                  d_30 :
                                  if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
                                    {
                                      h_30 = ATgetFirst((ATermList) m_30);
                                      k_30 = (ATerm) ATgetNext((ATermList) m_30);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_30), (ATerm) ATmakeAppl(sym_Choices_1, not_null(k_30)));
                                    }
                                  else
                                    {
                                      if(((ATermList) m_30 == ATempty))
                                        {
                                          t = term_z_12;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(l_30, sym_Seqs_1))
                                    {
                                      m_30 = ATgetArgument(l_30, 0);
                                      e_30 :
                                      if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
                                        {
                                          h_30 = ATgetFirst((ATermList) m_30);
                                          k_30 = (ATerm) ATgetNext((ATermList) m_30);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_30), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_30)));
                                        }
                                      else
                                        {
                                          if(((ATermList) m_30 == ATempty))
                                            {
                                              t = term_a_13;
                                            }
                                          else
                                            {
                                              _fail(t);
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
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm m_73 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, m_73);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  ATerm k_32 (ATerm t)
  {
    ATerm g_32 = NULL;
    ATerm h_32 = NULL;
    t = not_null(d_32);
    {
      ATerm b_13 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_13;
        }
      {
        t = new_0(t);
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(g_32)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(d_32)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_32))));
    return(t);
  }
  ATerm l_32 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_a_13, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_32))));
    return(t);
  }
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_Var_1))
    {
      e_32 = ATgetArgument(d_32, 0);
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_32(t);
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = l_32(t);
          }
      }
    }
  else
    {
      t = k_32(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,w_32 = NULL;
  s_32 = t;
  r_32 :
  if(match_cons(s_32, sym_Prim_2))
    {
      t_32 = ATgetArgument(s_32, 0);
      w_32 = ATgetArgument(s_32, 1);
      {
        ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
        ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
        t = not_null(w_32);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm e_13 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_13;
              }
            return(t);
          }
          t = fetch_1(t, f_1);
          {
            t = not_null(w_32);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm g_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, g_1);
                {
                  c_33 = t;
                  p_32 :
                  if(match_cons(c_33, sym__2))
                    {
                      d_33 = ATgetArgument(c_33, 0);
                      e_33 = ATgetArgument(c_33, 1);
                      q_32 :
                      if(match_cons(e_33, sym__2))
                        {
                          f_33 = ATgetArgument(e_33, 0);
                          g_33 = ATgetArgument(e_33, 1);
                          {
                            if(((z_32 != NULL) && (z_32 != d_33)))
                              _fail(d_33);
                            else
                              z_32 = d_33;
                            {
                              if(((a_33 != NULL) && (a_33 != f_33)))
                                _fail(f_33);
                              else
                                a_33 = f_33;
                              if(((b_33 != NULL) && (b_33 != g_33)))
                                _fail(g_33);
                              else
                                b_33 = g_33;
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
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(a_33)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(t_32), not_null(b_33))));
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
  ATerm k_33 = NULL;
  k_33 = t;
  j_33 :
  if(!(match_cons(k_33, sym_Wld_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm f_13 = t;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, h_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm d_54 (ATerm), ATerm e_54 (ATerm))
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym_App_2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      {
        ATerm u_33 = NULL;
        t = not_null(q_33);
        {
          ATerm w_33 = NULL;
          t = d_54(t);
          {
            u_33 = t;
            {
              t = not_null(r_33);
              {
                t = e_54(t);
                {
                  w_33 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(u_33), not_null(w_33));
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
ATerm Con_3 (ATerm t, ATerm a_54 (ATerm), ATerm b_54 (ATerm), ATerm c_54 (ATerm))
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  g_34 = t;
  f_34 :
  if(match_cons(g_34, sym_Con_3))
    {
      h_34 = ATgetArgument(g_34, 0);
      i_34 = ATgetArgument(g_34, 1);
      j_34 = ATgetArgument(g_34, 2);
      {
        ATerm n_34 = NULL;
        t = not_null(h_34);
        {
          ATerm p_34 = NULL;
          t = a_54(t);
          {
            n_34 = t;
            {
              t = not_null(i_34);
              {
                ATerm r_34 = NULL;
                t = b_54(t);
                {
                  p_34 = t;
                  {
                    t = not_null(j_34);
                    {
                      t = c_54(t);
                      {
                        r_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(n_34), not_null(p_34), not_null(r_34));
                      }
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
ATerm pureterm_0 (ATerm t)
{
  ATerm i_13 = t;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, i_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  b_35 = t;
  z_34 :
  if(match_cons(b_35, sym_SRule_1))
    {
      c_35 = ATgetArgument(b_35, 0);
      a_35 :
      if(match_cons(c_35, sym_StratRule_3))
        {
          d_35 = ATgetArgument(c_35, 0);
          e_35 = ATgetArgument(c_35, 1);
          f_35 = ATgetArgument(c_35, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_35)), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_35))), not_null(d_35)));
        }
      else
        {
          if(match_cons(c_35, sym_Rule_3))
            {
              d_35 = ATgetArgument(c_35, 0);
              e_35 = ATgetArgument(c_35, 1);
              f_35 = ATgetArgument(c_35, 2);
              {
                t = not_null(d_35);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(e_35);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(e_35))), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_35))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_35))));
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm d_79 (ATerm))
{
  ATerm o_35 (ATerm t)
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_79(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = _one(t, o_35);
      }
    return(t);
  }
  t = o_35(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  d_36 = t;
  b_36 :
  if(match_cons(d_36, sym_SRule_1))
    {
      e_36 = ATgetArgument(d_36, 0);
      c_36 :
      if(match_cons(e_36, sym_Rule_3))
        {
          f_36 = ATgetArgument(e_36, 0);
          g_36 = ATgetArgument(e_36, 1);
          h_36 = ATgetArgument(e_36, 2);
          {
            ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL;
            ATerm y_36 = NULL;
            ATerm e_37 = NULL;
            t = new_0(t);
            {
              y_36 = t;
              {
                if(((v_36 != NULL) && (v_36 != y_36)))
                  _fail(y_36);
                else
                  v_36 = y_36;
                {
                  t = not_null(f_36);
                  {
                    ATerm m_37 = NULL;
                    ATerm j_1 (ATerm t)
                    {
                      ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
                      z_36 = t;
                      s_35 :
                      if(match_cons(z_36, sym_Con_3))
                        {
                          a_37 = ATgetArgument(z_36, 0);
                          c_37 = ATgetArgument(z_36, 1);
                          d_37 = ATgetArgument(z_36, 2);
                          t_35 :
                          if(match_cons(a_37, sym_Var_1))
                            {
                              b_37 = ATgetArgument(a_37, 0);
                              {
                                if(((u_36 != NULL) && (u_36 != b_37)))
                                  _fail(b_37);
                                else
                                  u_36 = b_37;
                                {
                                  if(((s_36 != NULL) && (s_36 != c_37)))
                                    _fail(c_37);
                                  else
                                    s_36 = c_37;
                                  {
                                    if(((q_36 != NULL) && (q_36 != d_37)))
                                      _fail(d_37);
                                    else
                                      q_36 = d_37;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_36));
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
                    t = oncetd_1(t, j_1);
                    {
                      e_37 = t;
                      {
                        if(((w_36 != NULL) && (w_36 != e_37)))
                          _fail(e_37);
                        else
                          w_36 = e_37;
                        {
                          t = not_null(g_36);
                          {
                            ATerm k_1 (ATerm t)
                            {
                              ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
                              f_37 = t;
                              w_35 :
                              if(match_cons(f_37, sym_Con_3))
                                {
                                  g_37 = ATgetArgument(f_37, 0);
                                  i_37 = ATgetArgument(f_37, 1);
                                  j_37 = ATgetArgument(f_37, 2);
                                  x_35 :
                                  if(match_cons(g_37, sym_Var_1))
                                    {
                                      h_37 = ATgetArgument(g_37, 0);
                                      y_35 :
                                      if(match_cons(j_37, sym_Call_2))
                                        {
                                          k_37 = ATgetArgument(j_37, 0);
                                          l_37 = ATgetArgument(j_37, 1);
                                          z_35 :
                                          if(((ATermList) l_37 == ATempty))
                                            {
                                              {
                                                if(((u_36 != NULL) && (u_36 != h_37)))
                                                  _fail(h_37);
                                                else
                                                  u_36 = h_37;
                                                {
                                                  if(((t_36 != NULL) && (t_36 != i_37)))
                                                    _fail(i_37);
                                                  else
                                                    t_36 = i_37;
                                                  {
                                                    if(((r_36 != NULL) && (r_36 != k_37)))
                                                      _fail(k_37);
                                                    else
                                                      r_36 = k_37;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_36));
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
                            t = oncetd_1(t, k_1);
                            {
                              m_37 = t;
                              if(((x_36 != NULL) && (x_36 != m_37)))
                                _fail(m_37);
                              else
                                x_36 = m_37;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_36)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_36), not_null(x_36), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_36), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(r_36), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_36), not_null(t_36), term_a_13)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_36)))))));
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
ATerm desugarRule_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm n_1 (ATerm t)
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm t_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = t_13;
                  {
                    ATerm v_13 = t;
                    int w_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(w_13);
                      }
                    else
                      {
                        t = v_13;
                        {
                          ATerm x_13 = t;
                          int y_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(y_13);
                            }
                          else
                            {
                              t = x_13;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, n_1);
    }
    return(t);
  }
  t = topdown_1(t, m_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, o_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_55 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_Strategies_1))
    {
      j_38 = ATgetArgument(i_38, 0);
      {
        ATerm p_38 = NULL;
        t = not_null(j_38);
        {
          t = n_55(t);
          {
            p_38 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_38));
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
ATerm Specification_1 (ATerm t, ATerm p_55 (ATerm))
{
  ATerm y_38 = NULL,d_39 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym_Specification_1))
    {
      d_39 = ATgetArgument(y_38, 0);
      {
        ATerm h_39 = NULL;
        t = not_null(d_39);
        {
          t = p_55(t);
          {
            h_39 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(h_39));
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
ATerm spaste_1 (ATerm t, ATerm d_59 (ATerm))
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        t = split_2(t, _id, d_59);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
            s_39 = t;
            n_39 :
            if(match_cons(s_39, sym__2))
              {
                t_39 = ATgetArgument(s_39, 0);
                x_39 = ATgetArgument(s_39, 1);
                o_39 :
                if(match_cons(t_39, sym_SDef_3))
                  {
                    u_39 = ATgetArgument(t_39, 0);
                    v_39 = ATgetArgument(t_39, 1);
                    w_39 = ATgetArgument(t_39, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_39), not_null(v_39), not_null(w_39));
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
          t = zip_1(t, q_1);
        }
        return(t);
      }
      t = Let_2(t, p_1, _id);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = split_2(t, _id, d_59);
              {
                ATerm s_1 (ATerm t)
                {
                  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
                  b_40 = t;
                  q_39 :
                  if(match_cons(b_40, sym__2))
                    {
                      c_40 = ATgetArgument(b_40, 0);
                      f_40 = ATgetArgument(b_40, 1);
                      r_39 :
                      if(match_cons(c_40, sym_VarDec_2))
                        {
                          d_40 = ATgetArgument(c_40, 0);
                          e_40 = ATgetArgument(c_40, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_40), not_null(e_40));
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
                t = zip_1(t, s_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, r_1, _id);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            {
              ATerm t_1 (ATerm t)
              {
                t = d_59(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, t_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm w_56 (ATerm), ATerm x_56 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_Rec_2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      {
        ATerm g_41 = NULL;
        t = not_null(u_40);
        {
          ATerm i_41 = NULL;
          t = w_56(t);
          {
            g_41 = t;
            {
              t = not_null(v_40);
              {
                t = x_56(t);
                {
                  i_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(g_41), not_null(i_41));
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
ATerm Let_2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm))
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Let_2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        ATerm a_42 = NULL;
        t = not_null(w_41);
        {
          ATerm c_42 = NULL;
          t = y_56(t);
          {
            a_42 = t;
            {
              t = not_null(x_41);
              {
                t = z_56(t);
                {
                  c_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_42), not_null(c_42));
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
ATerm sboundin_3 (ATerm t, ATerm e_59 (ATerm), ATerm f_59 (ATerm), ATerm g_59 (ATerm))
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, e_59, e_59);
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
            t = SDef_3(t, g_59, g_59, e_59);
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            t = Rec_2(t, g_59, e_59);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  i_42 :
  if(match_cons(j_42, sym_Rec_2))
    {
      k_42 = ATgetArgument(j_42, 0);
      l_42 = ATgetArgument(j_42, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_42));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym_SDef_3))
    {
      u_42 = ATgetArgument(t_42, 0);
      v_42 = ATgetArgument(t_42, 1);
      w_42 = ATgetArgument(t_42, 2);
      {
        t = not_null(v_42);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
            a_43 = t;
            r_42 :
            if(match_cons(a_43, sym_VarDec_2))
              {
                b_43 = ATgetArgument(a_43, 0);
                c_43 = ATgetArgument(a_43, 1);
                t = not_null(b_43);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_1);
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
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
  o_43 = t;
  n_43 :
  if(match_cons(o_43, sym_Let_2))
    {
      p_43 = ATgetArgument(o_43, 0);
      q_43 = ATgetArgument(o_43, 1);
      {
        t = not_null(p_43);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm t_43 = NULL,u_43 = NULL,y_43 = NULL,z_43 = NULL;
            t_43 = t;
            m_43 :
            if(match_cons(t_43, sym_SDef_3))
              {
                u_43 = ATgetArgument(t_43, 0);
                y_43 = ATgetArgument(t_43, 1);
                z_43 = ATgetArgument(t_43, 2);
                t = not_null(u_43);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm v_56 (ATerm))
{
  ATerm s_44 = NULL,t_44 = NULL;
  s_44 = t;
  r_44 :
  if(match_cons(s_44, sym_SVar_1))
    {
      t_44 = ATgetArgument(s_44, 0);
      {
        ATerm v_44 = NULL;
        t = not_null(t_44);
        {
          t = v_56(t);
          {
            v_44 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(v_44));
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
  ATerm w_1 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, w_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm x_61 (ATerm, ATerm (ATerm)), ATerm y_61 (ATerm), ATerm z_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_62 (ATerm, ATerm (ATerm)))
{
  ATerm y_45 = NULL;
  y_45 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_45), (ATerm) ATempty);
    {
      ATerm r_47 (ATerm t)
      {
        ATerm x_1 (ATerm t)
        {
          ATerm l_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, x_61);
              LocalPopChoice(m_14);
            }
          else
            {
              t = l_14;
              {
                t = RnBinding_2(t, y_61, a_62);
                t = DistBinding_2(t, r_47, z_61);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, x_1);
        return(t);
      }
      t = r_47(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm s_47 (ATerm t, ATerm t_47 (ATerm))
  {
    t = Scope_2(t, t_47, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, s_47);
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
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym_SDef_3))
    {
      y_47 = ATgetArgument(x_47, 0);
      z_47 = ATgetArgument(x_47, 1);
      a_48 = ATgetArgument(x_47, 2);
      {
        ATerm e_48 = NULL;
        ATerm f_48 = NULL;
        t = not_null(a_48);
        {
          t = tvars_0(t);
          {
            f_48 = t;
            if(((e_48 != NULL) && (e_48 != f_48)))
              _fail(f_48);
            else
              e_48 = f_48;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_47), not_null(z_47), (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_48), not_null(a_48)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_RDef_3))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      o_48 = ATgetArgument(l_48, 2);
      {
        ATerm s_48 = NULL;
        ATerm t_48 = NULL;
        t = not_null(o_48);
        {
          t = tvars_0(t);
          {
            t_48 = t;
            if(((s_48 != NULL) && (s_48 != t_48)))
              _fail(t_48);
            else
              s_48 = t_48;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_48), not_null(n_48), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_48), (ATerm) ATmakeAppl(sym_SRule_1, not_null(o_48))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_48)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL;
  m_49 = t;
  j_49 :
  if(match_cons(m_49, sym_OpDecl_2))
    {
      n_49 = ATgetArgument(m_49, 0);
      o_49 = ATgetArgument(m_49, 1);
      k_49 :
      if(match_cons(o_49, sym_FunType_2))
        {
          p_49 = ATgetArgument(o_49, 0);
          l_49 = ATgetArgument(o_49, 1);
          {
            ATerm t_49 = NULL,u_49 = NULL,c_50 = NULL;
            ATerm n_14;
            n_14 = t;
            {
              ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
              t = not_null(p_49);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm v_49 = NULL,x_49 = NULL;
                  t = new_0(t);
                  {
                    ATerm o_14;
                    o_14 = t;
                    {
                      ATerm w_49 = NULL;
                      w_49 = t;
                      if(((v_49 != NULL) && (v_49 != w_49)))
                        _fail(w_49);
                      else
                        v_49 = w_49;
                    }
                    t = o_14;
                    {
                      ATerm y_49 = NULL;
                      y_49 = t;
                      if(((x_49 != NULL) && (x_49 != y_49)))
                        _fail(y_49);
                      else
                        x_49 = y_49;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(v_49), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14)), not_null(x_49));
                    }
                  }
                  return(t);
                }
                t = map_1(t, y_1);
                {
                  t = unzip_0(t);
                  {
                    z_49 = t;
                    h_49 :
                    if(match_cons(z_49, sym__2))
                      {
                        a_50 = ATgetArgument(z_49, 0);
                        b_50 = ATgetArgument(z_49, 1);
                        {
                          if(((t_49 != NULL) && (t_49 != a_50)))
                            _fail(a_50);
                          else
                            t_49 = a_50;
                          if(((u_49 != NULL) && (u_49 != b_50)))
                            _fail(b_50);
                          else
                            u_49 = b_50;
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
            t = n_14;
            {
              ATerm d_50 = NULL;
              t = not_null(u_49);
              {
                t = map_1(t, MkCall_0);
                {
                  d_50 = t;
                  if(((c_50 != NULL) && (c_50 != d_50)))
                    _fail(d_50);
                  else
                    c_50 = d_50;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_49), not_null(t_49), (ATerm) ATmakeAppl(sym_Cong_2, not_null(n_49), not_null(c_50)));
            }
          }
        }
      else
        {
          if(match_cons(o_49, sym_ConstType_1))
            {
              p_49 = ATgetArgument(o_49, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_49), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(n_49), (ATerm) ATempty));
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MkCongDefs_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  p_50 = t;
  o_50 :
  if(match_cons(p_50, sym_Constructors_1))
    {
      q_50 = ATgetArgument(p_50, 0);
      {
        t = not_null(q_50);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(p_50, sym_Sorts_1))
        {
          q_50 = ATgetArgument(p_50, 0);
          t = (ATerm) ATempty;
        }
      else
        {
          _fail(t);
        }
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
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  f_51 = t;
  z_50 :
  if(match_cons(f_51, sym_Specification_1))
    {
      g_51 = ATgetArgument(f_51, 0);
      a_51 :
      if(((ATgetType(g_51) == AT_LIST) && ((ATermList) g_51 != ATempty)))
        {
          h_51 = ATgetFirst((ATermList) g_51);
          j_51 = (ATerm) ATgetNext((ATermList) g_51);
          b_51 :
          if(match_cons(h_51, sym_Signature_1))
            {
              i_51 = ATgetArgument(h_51, 0);
              c_51 :
              if(((ATgetType(j_51) == AT_LIST) && ((ATermList) j_51 != ATempty)))
                {
                  k_51 = ATgetFirst((ATermList) j_51);
                  m_51 = (ATerm) ATgetNext((ATermList) j_51);
                  d_51 :
                  if(match_cons(k_51, sym_Strategies_1))
                    {
                      l_51 = ATgetArgument(k_51, 0);
                      e_51 :
                      if(((ATermList) m_51 == ATempty))
                        {
                          {
                            ATerm p_51 = NULL;
                            ATerm q_51 = NULL,s_51 = NULL,u_51 = NULL;
                            ATerm s_14;
                            s_14 = t;
                            {
                              ATerm r_51 = NULL;
                              t = not_null(i_51);
                              {
                                t = congdefs_0(t);
                                {
                                  r_51 = t;
                                  if(((q_51 != NULL) && (q_51 != r_51)))
                                    _fail(r_51);
                                  else
                                    q_51 = r_51;
                                }
                              }
                            }
                            t = s_14;
                            {
                              ATerm t_51 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(l_51)), (ATerm) ATmakeAppl(sym_RDef_3, term_t_14, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_v_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14))), (ATerm) ATmakeAppl(sym_VarDec_2, term_u_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14))), (ATerm) ATmakeAppl(sym_Rule_3, term_a_15, term_k_15, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_u_15), term_r_15)))));
                              {
                                ATerm z_1 (ATerm t)
                                {
                                  ATerm v_15 = t;
                                  int w_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(w_15);
                                    }
                                  else
                                    {
                                      t = v_15;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, z_1);
                                {
                                  t_51 = t;
                                  if(((s_51 != NULL) && (s_51 != t_51)))
                                    _fail(t_51);
                                  else
                                    s_51 = t_51;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), not_null(s_51));
                                {
                                  t = conc_0(t);
                                  {
                                    u_51 = t;
                                    if(((p_51 != NULL) && (p_51 != u_51)))
                                      _fail(u_51);
                                    else
                                      p_51 = u_51;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_51))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(i_51))));
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
ATerm TupleDeclarations_0 (ATerm t)
{
  ATerm c_52 = NULL;
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  t = term_x_15;
  {
    ATerm a_2 (ATerm t)
    {
      t = term_y_15;
      return(t);
    }
    t = rewrite_1(t, a_2);
    {
      d_52 = t;
      a_52 :
      if(match_cons(d_52, sym_Defined_2))
        {
          e_52 = ATgetArgument(d_52, 0);
          f_52 = ATgetArgument(d_52, 1);
          b_52 :
          if(match_string(e_52, "g_0"))
            {
              if(((c_52 != NULL) && (c_52 != f_52)))
                _fail(f_52);
              else
                c_52 = f_52;
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
  t = not_null(c_52);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  t = SSL_int_to_string(not_null(i_52));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  r_52 = t;
  q_52 :
  if(match_cons(r_52, sym_Op_2))
    {
      s_52 = ATgetArgument(r_52, 0);
      t_52 = ATgetArgument(r_52, 1);
      {
        ATerm w_52 = NULL,x_52 = NULL;
        ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
        t = term_x_15;
        {
          ATerm b_2 (ATerm t)
          {
            t = term_z_15;
            return(t);
          }
          t = rewrite_1(t, b_2);
          {
            y_52 = t;
            o_52 :
            if(match_cons(y_52, sym_Defined_3))
              {
                z_52 = ATgetArgument(y_52, 0);
                a_53 = ATgetArgument(y_52, 1);
                b_53 = ATgetArgument(y_52, 2);
                p_52 :
                if(match_string(z_52, "h_0"))
                  {
                    ATerm c_53 = NULL;
                    if(((x_52 != NULL) && (x_52 != a_53)))
                      _fail(a_53);
                    else
                      x_52 = a_53;
                    {
                      if(((w_52 != NULL) && (w_52 != b_53)))
                        _fail(b_53);
                      else
                        w_52 = b_53;
                      {
                        ATerm d_53 = NULL;
                        t = not_null(t_52);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              d_53 = t;
                              if(((c_53 != NULL) && (c_53 != d_53)))
                                _fail(d_53);
                              else
                                c_53 = d_53;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_16), not_null(c_53)), term_f_16), not_null(s_52)), term_e_16), term_d_16), not_null(x_52)), term_c_16), not_null(w_52)), term_b_16));
                          t = printnl_0(t);
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
          }
        }
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(s_52), not_null(t_52));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  i_53 :
  if(match_cons(j_53, sym__2))
    {
      k_53 = ATgetArgument(j_53, 0);
      l_53 = ATgetArgument(j_53, 1);
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(k_53), not_null(l_53));
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            t = SSL_subtr(not_null(k_53), not_null(l_53));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
  f_54 = t;
  q_53 :
  if(match_cons(f_54, sym__2))
    {
      g_54 = ATgetArgument(f_54, 0);
      h_54 = ATgetArgument(f_54, 1);
      {
        ATerm j_16;
        j_16 = t;
        {
          ATerm k_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_54), not_null(h_54));
              LocalPopChoice(l_16);
            }
          else
            {
              t = k_16;
              t = SSL_gtr(not_null(g_54), not_null(h_54));
            }
        }
        t = j_16;
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
  ATerm p_54 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_54 = NULL,r_54 = NULL,v_54 = NULL;
      q_54 = t;
      o_54 :
      if(match_cons(q_54, sym__2))
        {
          r_54 = ATgetArgument(q_54, 0);
          v_54 = ATgetArgument(q_54, 1);
          {
            if(((p_54 != NULL) && (p_54 != r_54)))
              _fail(r_54);
            else
              p_54 = r_54;
            if(((p_54 != NULL) && (p_54 != v_54)))
              _fail(v_54);
            else
              p_54 = v_54;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
    q_55 = t;
    y_54 :
    if(match_cons(q_55, sym__2))
      {
        r_55 = ATgetArgument(q_55, 0);
        s_55 = ATgetArgument(q_55, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(r_55), not_null(s_55), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
    v_55 = t;
    e_55 :
    if(match_cons(v_55, sym__3))
      {
        w_55 = ATgetArgument(v_55, 0);
        x_55 = ATgetArgument(v_55, 1);
        y_55 = ATgetArgument(v_55, 2);
        f_55 :
        if(match_int(w_55, 0))
          {
            t = not_null(y_55);
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
  ATerm e_2 (ATerm t)
  {
    ATerm c_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
    c_56 = t;
    o_55 :
    if(match_cons(c_56, sym__3))
      {
        f_56 = ATgetArgument(c_56, 0);
        g_56 = ATgetArgument(c_56, 1);
        h_56 = ATgetArgument(c_56, 2);
        {
          ATerm l_56 = NULL;
          ATerm o_16;
          o_16 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_56), term_p_16);
            t = geq_0(t);
          }
          t = o_16;
          {
            ATerm m_56 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_56), term_p_16);
            {
              t = subt_0(t);
              {
                m_56 = t;
                if(((l_56 != NULL) && (l_56 != m_56)))
                  _fail(m_56);
                else
                  l_56 = m_56;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_56), not_null(g_56), (ATerm) ATinsert(CheckATermList(not_null(h_56)), not_null(g_56)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, c_2, d_2, e_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  i_57 = t;
  g_57 :
  if(match_cons(i_57, sym_Op_2))
    {
      j_57 = ATgetArgument(i_57, 0);
      k_57 = ATgetArgument(i_57, 1);
      h_57 :
      if(match_string(j_57, ""))
        {
          ATerm m_57 = NULL,n_57 = NULL,q_57 = NULL,r_57 = NULL;
          ATerm q_16;
          q_16 = t;
          {
            ATerm s_57 = NULL;
            t = not_null(k_57);
            {
              ATerm t_57 = NULL;
              t = length_0(t);
              {
                s_57 = t;
                {
                  if(((n_57 != NULL) && (n_57 != s_57)))
                    _fail(s_57);
                  else
                    n_57 = s_57;
                  {
                    ATerm u_57 = NULL,y_57 = NULL;
                    t = term_w_11;
                    {
                      t_57 = t;
                      {
                        if(((m_57 != NULL) && (m_57 != t_57)))
                          _fail(t_57);
                        else
                          m_57 = t_57;
                        {
                          ATerm r_16;
                          r_16 = t;
                          {
                            ATerm v_57 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_57), term_t_16);
                            {
                              t = copy_0(t);
                              {
                                v_57 = t;
                                if(((u_57 != NULL) && (u_57 != v_57)))
                                  _fail(v_57);
                                else
                                  u_57 = v_57;
                              }
                            }
                          }
                          t = r_16;
                          {
                            ATerm z_57 = NULL,h_58 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, not_null(u_57), term_t_16));
                            {
                              y_57 = t;
                              {
                                if(((q_57 != NULL) && (q_57 != y_57)))
                                  _fail(y_57);
                                else
                                  q_57 = y_57;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm c_58 = NULL;
                                    ATerm u_16 = t;
                                    int v_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(v_16);
                                      }
                                    else
                                      {
                                        t = u_16;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      c_58 = t;
                                      if(((z_57 != NULL) && (z_57 != c_58)))
                                        _fail(c_58);
                                      else
                                        z_57 = c_58;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(z_57)), not_null(q_57));
                                      {
                                        h_58 = t;
                                        {
                                          if(((r_57 != NULL) && (r_57 != h_58)))
                                            _fail(h_58);
                                          else
                                            r_57 = h_58;
                                          {
                                            ATerm w_16;
                                            w_16 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, not_null(r_57)));
                                              {
                                                ATerm f_2 (ATerm t)
                                                {
                                                  t = term_y_15;
                                                  return(t);
                                                }
                                                t = assert_1(t, f_2);
                                              }
                                            }
                                            t = w_16;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = q_16;
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
ATerm Hd_0 (ATerm t)
{
  ATerm y_58 = NULL,h_59 = NULL,i_59 = NULL;
  y_58 = t;
  q_58 :
  if(((ATgetType(y_58) == AT_LIST) && ((ATermList) y_58 != ATempty)))
    {
      h_59 = ATgetFirst((ATermList) y_58);
      i_59 = (ATerm) ATgetNext((ATermList) y_58);
      t = not_null(h_59);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL;
  o_59 = t;
  n_59 :
  if(match_cons(o_59, sym__2))
    {
      p_59 = ATgetArgument(o_59, 0);
      q_59 = ATgetArgument(o_59, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_59), not_null(q_59));
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
ATerm rewrite_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm w_59 = NULL;
  ATerm y_59 = NULL;
  w_59 = t;
  {
    ATerm d_60 = NULL;
    t = term_y_16;
    {
      t = o_65(t);
      {
        d_60 = t;
        if(((y_59 != NULL) && (y_59 != d_60)))
          _fail(d_60);
        else
          y_59 = d_60;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_59), not_null(w_59));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
  x_60 = t;
  w_60 :
  if(match_cons(x_60, sym_Op_2))
    {
      y_60 = ATgetArgument(x_60, 0);
      z_60 = ATgetArgument(x_60, 1);
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_61 = NULL;
            ATerm e_61 = NULL;
            t = not_null(z_60);
            {
              c_61 = t;
              {
                t = length_0(t);
                {
                  e_61 = t;
                  {
                    ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(y_60), not_null(e_61));
                    {
                      ATerm g_2 (ATerm t)
                      {
                        t = term_b_17;
                        return(t);
                      }
                      t = rewrite_1(t, g_2);
                      {
                        g_61 = t;
                        p_60 :
                        if(match_cons(g_61, sym_Defined_2))
                          {
                            h_61 = ATgetArgument(g_61, 0);
                            i_61 = ATgetArgument(g_61, 1);
                            q_60 :
                            if(match_string(h_61, "b_0"))
                              {
                                if(((y_60 != NULL) && (y_60 != i_61)))
                                  _fail(i_61);
                                else
                                  y_60 = i_61;
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_60), not_null(c_61));
                  }
                }
              }
            }
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            {
              ATerm m_61 = NULL;
              ATerm o_61 = NULL;
              t = not_null(z_60);
              {
                m_61 = t;
                {
                  t = length_0(t);
                  {
                    o_61 = t;
                    {
                      ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(y_60), not_null(o_61));
                      {
                        ATerm h_2 (ATerm t)
                        {
                          t = term_b_17;
                          return(t);
                        }
                        t = rewrite_1(t, h_2);
                        {
                          s_61 = t;
                          u_60 :
                          if(match_cons(s_61, sym_Defined_2))
                            {
                              t_61 = ATgetArgument(s_61, 0);
                              u_61 = ATgetArgument(s_61, 1);
                              v_60 :
                              if(match_string(t_61, "a_0"))
                                {
                                  if(((y_60 != NULL) && (y_60 != u_61)))
                                    _fail(u_61);
                                  else
                                    y_60 = u_61;
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_60), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm b_63 (ATerm t)
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_80(t);
        {
          ATerm i_2 (ATerm t)
          {
            t = try_1(t, b_63);
            return(t);
          }
          t = _all(t, i_2);
        }
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        t = _some(t, b_63);
      }
    return(t);
  }
  t = b_63(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
  f_63 = t;
  e_63 :
  if(match_cons(f_63, sym__2))
    {
      g_63 = ATgetArgument(f_63, 0);
      h_63 = ATgetArgument(f_63, 1);
      {
        ATerm e_17;
        e_17 = t;
        {
          ATerm q_63 = NULL;
          ATerm r_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_63), not_null(h_63));
          {
            ATerm f_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(g_17);
              }
            else
              {
                t = f_17;
                t = (ATerm) ATempty;
              }
            {
              r_63 = t;
              if(((q_63 != NULL) && (q_63 != r_63)))
                _fail(r_63);
              else
                q_63 = r_63;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_63), not_null(h_63), not_null(q_63));
            t = table_put_0(t);
          }
        }
        t = e_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm j_65 (ATerm))
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL;
  ATerm h_17;
  h_17 = t;
  {
    ATerm b_64 = NULL;
    ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
    t = j_65(t);
    {
      b_64 = t;
      {
        if(((z_63 != NULL) && (z_63 != b_64)))
          _fail(b_64);
        else
          z_63 = b_64;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_63), term_k_17);
              t = table_get_0(t);
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_64 = t;
            x_63 :
            if(((ATgetType(c_64) == AT_LIST) && ((ATermList) c_64 != ATempty)))
              {
                d_64 = ATgetFirst((ATermList) c_64);
                e_64 = (ATerm) ATgetNext((ATermList) c_64);
                {
                  if(((a_64 != NULL) && (a_64 != d_64)))
                    _fail(d_64);
                  else
                    a_64 = d_64;
                  {
                    if(((y_63 != NULL) && (y_63 != e_64)))
                      _fail(e_64);
                    else
                      y_63 = e_64;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_63), term_k_17, not_null(y_63));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_64);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm f_64 = NULL;
                              f_64 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_63), not_null(f_64));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_2);
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
          }
        }
      }
    }
  }
  t = h_17;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm e_82 (ATerm), ATerm f_82 (ATerm))
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_82(t);
      t = f_82(t);
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        t = f_82(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm q_64 = NULL;
  ATerm n_17;
  n_17 = t;
  {
    ATerm r_64 = NULL;
    ATerm s_64 = NULL;
    t = i_65(t);
    {
      r_64 = t;
      {
        if(((q_64 != NULL) && (q_64 != r_64)))
          _fail(r_64);
        else
          q_64 = r_64;
        {
          ATerm w_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), term_k_17);
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                t = (ATerm) ATempty;
              }
            {
              w_64 = t;
              if(((s_64 != NULL) && (s_64 != w_64)))
                _fail(w_64);
              else
                s_64 = w_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_64), term_k_17, (ATerm) ATinsert(CheckATermList(not_null(s_64)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = n_17;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm k_65 (ATerm), ATerm l_65 (ATerm))
{
  t = begin_scope_1(t, k_65);
  {
    ATerm k_2 (ATerm t)
    {
      t = end_scope_1(t, k_65);
      return(t);
    }
    t = restore_always_2(t, l_65, k_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm t_58 (ATerm), ATerm u_58 (ATerm))
{
  ATerm b_65 = NULL,c_65 = NULL;
  ATerm l_2 (ATerm t)
  {
    t = term_z_15;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm q_17;
    q_17 = t;
    {
      ATerm d_65 = NULL;
      ATerm g_65 = NULL;
      t = t_58(t);
      {
        d_65 = t;
        {
          if(((b_65 != NULL) && (b_65 != d_65)))
            _fail(d_65);
          else
            b_65 = d_65;
          {
            t = u_58(t);
            {
              g_65 = t;
              if(((c_65 != NULL) && (c_65 != g_65)))
                _fail(g_65);
              else
                c_65 = g_65;
            }
          }
        }
      }
    }
    t = q_17;
    {
      ATerm r_17;
      r_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_15, (ATerm) ATmakeAppl(sym_Defined_3, term_s_17, not_null(b_65), not_null(c_65)));
        {
          ATerm n_2 (ATerm t)
          {
            t = term_z_15;
            return(t);
          }
          t = assert_1(t, n_2);
        }
      }
      t = r_17;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm t_17 = t;
          if((PushChoice() == 0))
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = u_17;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_17;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, o_2);
      }
    }
    return(t);
  }
  t = scope_2(t, l_2, m_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL;
  s_65 = t;
  r_65 :
  if(match_cons(s_65, sym_SDef_3))
    {
      t_65 = ATgetArgument(s_65, 0);
      u_65 = ATgetArgument(s_65, 1);
      v_65 = ATgetArgument(s_65, 2);
      {
        t = not_null(v_65);
        {
          ATerm p_2 (ATerm t)
          {
            t = not_null(t_65);
            return(t);
          }
          ATerm q_2 (ATerm t)
          {
            t = term_w_17;
            return(t);
          }
          t = check_constructors_p__2(t, p_2, q_2);
        }
      }
    }
  else
    {
      if(match_cons(s_65, sym_RDef_3))
        {
          t_65 = ATgetArgument(s_65, 0);
          u_65 = ATgetArgument(s_65, 1);
          v_65 = ATgetArgument(s_65, 2);
          {
            t = not_null(v_65);
            {
              ATerm r_2 (ATerm t)
              {
                t = not_null(t_65);
                return(t);
              }
              ATerm s_2 (ATerm t)
              {
                t = term_x_17;
                return(t);
              }
              t = check_constructors_p__2(t, r_2, s_2);
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
ATerm assert_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  i_66 :
  if(match_cons(j_66, sym__2))
    {
      k_66 = ATgetArgument(j_66, 0);
      l_66 = ATgetArgument(j_66, 1);
      {
        ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
        ATerm y_17;
        y_17 = t;
        {
          ATerm r_66 = NULL;
          ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
          t = m_65(t);
          {
            r_66 = t;
            {
              if(((o_66 != NULL) && (o_66 != r_66)))
                _fail(r_66);
              else
                o_66 = r_66;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_66), not_null(k_66), not_null(l_66));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_17 = t;
                    int a_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_66), term_k_17);
                        t = table_get_0(t);
                        LocalPopChoice(a_18);
                      }
                    else
                      {
                        t = z_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_66 = t;
                      h_66 :
                      if(((ATgetType(s_66) == AT_LIST) && ((ATermList) s_66 != ATempty)))
                        {
                          t_66 = ATgetFirst((ATermList) s_66);
                          u_66 = (ATerm) ATgetNext((ATermList) s_66);
                          {
                            if(((p_66 != NULL) && (p_66 != t_66)))
                              _fail(t_66);
                            else
                              p_66 = t_66;
                            {
                              if(((q_66 != NULL) && (q_66 != u_66)))
                                _fail(u_66);
                              else
                                q_66 = u_66;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_66), term_k_17, (ATerm) ATinsert(CheckATermList(not_null(q_66)), (ATerm) ATinsert(CheckATermList(not_null(p_66)), not_null(k_66))));
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
        t = y_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  z_66 :
  if(match_cons(a_67, sym__2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_67), not_null(c_67));
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            t = SSL_addr(not_null(b_67), not_null(c_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  t = foldr_3(t, t_2, add_0, u_2);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  n_67 = t;
  k_67 :
  if(match_cons(n_67, sym_OpDecl_2))
    {
      o_67 = ATgetArgument(n_67, 0);
      p_67 = ATgetArgument(n_67, 1);
      l_67 :
      if(match_cons(p_67, sym_FunType_2))
        {
          q_67 = ATgetArgument(p_67, 0);
          m_67 = ATgetArgument(p_67, 1);
          {
            ATerm u_67 = NULL;
            ATerm e_18;
            e_18 = t;
            {
              ATerm v_67 = NULL;
              t = not_null(q_67);
              {
                t = length_0(t);
                {
                  v_67 = t;
                  if(((u_67 != NULL) && (u_67 != v_67)))
                    _fail(v_67);
                  else
                    u_67 = v_67;
                }
              }
            }
            t = e_18;
            {
              ATerm f_18;
              f_18 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(o_67), not_null(u_67)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_18, not_null(o_67)));
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = term_b_17;
                    return(t);
                  }
                  t = assert_1(t, v_2);
                }
              }
              t = f_18;
            }
          }
        }
      else
        {
          if(match_cons(p_67, sym_ConstType_1))
            {
              q_67 = ATgetArgument(p_67, 0);
              {
                ATerm a_68 = NULL;
                ATerm h_18;
                h_18 = t;
                {
                  ATerm b_68 = NULL;
                  t = term_d_18;
                  {
                    b_68 = t;
                    if(((a_68 != NULL) && (a_68 != b_68)))
                      _fail(b_68);
                    else
                      a_68 = b_68;
                  }
                }
                t = h_18;
                {
                  ATerm i_18;
                  i_18 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(o_67), not_null(a_68)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_18, not_null(o_67)));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_b_17;
                        return(t);
                      }
                      t = assert_1(t, w_2);
                    }
                  }
                  t = i_18;
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CheckConstructors_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
  w_68 = t;
  m_68 :
  if(match_cons(w_68, sym_Specification_1))
    {
      x_68 = ATgetArgument(w_68, 0);
      n_68 :
      if(((ATgetType(x_68) == AT_LIST) && ((ATermList) x_68 != ATempty)))
        {
          y_68 = ATgetFirst((ATermList) x_68);
          d_69 = (ATerm) ATgetNext((ATermList) x_68);
          o_68 :
          if(match_cons(y_68, sym_Signature_1))
            {
              z_68 = ATgetArgument(y_68, 0);
              q_68 :
              if(((ATgetType(z_68) == AT_LIST) && ((ATermList) z_68 != ATempty)))
                {
                  a_69 = ATgetFirst((ATermList) z_68);
                  c_69 = (ATerm) ATgetNext((ATermList) z_68);
                  r_68 :
                  if(match_cons(a_69, sym_Constructors_1))
                    {
                      b_69 = ATgetArgument(a_69, 0);
                      s_68 :
                      if(((ATermList) c_69 == ATempty))
                        {
                          t_68 :
                          if(((ATgetType(d_69) == AT_LIST) && ((ATermList) d_69 != ATempty)))
                            {
                              e_69 = ATgetFirst((ATermList) d_69);
                              g_69 = (ATerm) ATgetNext((ATermList) d_69);
                              u_68 :
                              if(match_cons(e_69, sym_Strategies_1))
                                {
                                  f_69 = ATgetArgument(e_69, 0);
                                  v_68 :
                                  if(((ATermList) g_69 == ATempty))
                                    {
                                      {
                                        ATerm o_69 = NULL,p_69 = NULL,t_69 = NULL;
                                        ATerm k_18;
                                        k_18 = t;
                                        {
                                          ATerm q_69 = NULL;
                                          ATerm r_69 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_69)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_t_16), term_t_16), term_t_16), term_t_16), term_t_16))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_t_16), term_t_16), term_t_16), term_t_16))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_t_16), term_t_16), term_t_16))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_t_16), term_t_16), term_t_16))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_w_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_16), term_t_16))), term_m_18);
                                          {
                                            q_69 = t;
                                            {
                                              if(((o_69 != NULL) && (o_69 != q_69)))
                                                _fail(q_69);
                                              else
                                                o_69 = q_69;
                                              {
                                                t = not_null(o_69);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(f_69);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        r_69 = t;
                                                        k_68 :
                                                        if(((ATermList) r_69 == ATempty))
                                                          {
                                                            {
                                                              ATerm s_69 = NULL;
                                                              ATerm n_18 = t;
                                                              int s_18 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(s_18);
                                                                }
                                                              else
                                                                {
                                                                  t = n_18;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                s_69 = t;
                                                                if(((p_69 != NULL) && (p_69 != s_69)))
                                                                  _fail(s_69);
                                                                else
                                                                  p_69 = s_69;
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
                                        }
                                        t = k_18;
                                        {
                                          ATerm u_69 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_69), not_null(o_69));
                                          {
                                            t = conc_0(t);
                                            {
                                              u_69 = t;
                                              if(((t_69 != NULL) && (t_69 != u_69)))
                                                _fail(u_69);
                                              else
                                                t_69 = u_69;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_69))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(t_69))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm t_18;
    t_18 = t;
    {
      ATerm u_18 = t;
      if((PushChoice() == 0))
        {
          ATerm b_70 = NULL;
          t = c_60(t);
          {
            b_70 = t;
            a_70 :
            if(((ATermList) b_70 == ATempty))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_18;
        }
    }
    t = t_18;
    {
      ATerm y_2 (ATerm t)
      {
        ATerm z_2 (ATerm t)
        {
          t = ExpOverlay_1(t, c_60);
          return(t);
        }
        t = try_1(t, z_2);
        return(t);
      }
      t = topdown_1(t, y_2);
    }
    return(t);
  }
  t = try_1(t, x_2);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
  l_70 = t;
  j_70 :
  if(match_cons(l_70, sym_BuildDefault_1))
    {
      m_70 = ATgetArgument(l_70, 0);
      t = term_a_13;
    }
  else
    {
      if(match_cons(l_70, sym_Real_1))
        {
          m_70 = ATgetArgument(l_70, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(m_70)));
        }
      else
        {
          if(match_cons(l_70, sym_Int_1))
            {
              m_70 = ATgetArgument(l_70, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(m_70)));
            }
          else
            {
              if(match_cons(l_70, sym_Str_1))
                {
                  m_70 = ATgetArgument(l_70, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_70)));
                }
              else
                {
                  if(match_cons(l_70, sym_Op_2))
                    {
                      m_70 = ATgetArgument(l_70, 0);
                      k_70 = ATgetArgument(l_70, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_70)), not_null(k_70));
                    }
                  else
                    {
                      if(match_cons(l_70, sym_Var_1))
                        {
                          m_70 = ATgetArgument(l_70, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_70)), (ATerm) ATempty);
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
  return(t);
}
ATerm Op_2 (ATerm t, ATerm d_56 (ATerm), ATerm e_56 (ATerm))
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  k_71 :
  if(match_cons(l_71, sym_Op_2))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      {
        ATerm q_71 = NULL;
        t = not_null(m_71);
        {
          ATerm s_71 = NULL;
          t = d_56(t);
          {
            q_71 = t;
            {
              t = not_null(n_71);
              {
                t = e_56(t);
                {
                  s_71 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_71), not_null(s_71));
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
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, b_3);
    return(t);
  }
  t = try_1(t, a_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL;
  d_72 = t;
  c_72 :
  if(match_cons(d_72, sym_Overlay_3))
    {
      e_72 = ATgetArgument(d_72, 0);
      f_72 = ATgetArgument(d_72, 1);
      g_72 = ATgetArgument(d_72, 2);
      {
        ATerm k_72 = NULL,o_72 = NULL;
        ATerm v_18;
        v_18 = t;
        {
          ATerm n_72 = NULL;
          t = not_null(f_72);
          {
            ATerm c_3 (ATerm t)
            {
              ATerm l_72 = NULL;
              ATerm m_72 = NULL;
              m_72 = t;
              if(((l_72 != NULL) && (l_72 != m_72)))
                _fail(m_72);
              else
                l_72 = m_72;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_72), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14));
              return(t);
            }
            t = map_1(t, c_3);
            {
              n_72 = t;
              if(((k_72 != NULL) && (k_72 != n_72)))
                _fail(n_72);
              else
                k_72 = n_72;
            }
          }
        }
        t = v_18;
        {
          ATerm p_72 = NULL;
          t = not_null(g_72);
          {
            t = trm_to_cong_0(t);
            {
              p_72 = t;
              if(((o_72 != NULL) && (o_72 != p_72)))
                _fail(p_72);
              else
                o_72 = p_72;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_72), not_null(k_72), not_null(o_72));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm z_58 (ATerm))
{
  t = Scope_2(t, z_58, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm z_55 (ATerm))
{
  ATerm x_72 = NULL,y_72 = NULL;
  x_72 = t;
  w_72 :
  if(match_cons(x_72, sym_Var_1))
    {
      y_72 = ATgetArgument(x_72, 0);
      {
        ATerm b_73 = NULL;
        t = not_null(y_72);
        {
          t = z_55(t);
          {
            b_73 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_73));
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
ATerm DistBinding_2 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL;
  q_73 = t;
  p_73 :
  if(match_cons(q_73, sym__3))
    {
      r_73 = ATgetArgument(q_73, 0);
      s_73 = ATgetArgument(q_73, 1);
      t_73 = ATgetArgument(q_73, 2);
      {
        t = not_null(r_73);
        {
          ATerm d_3 (ATerm t)
          {
            ATerm x_73 = NULL;
            x_73 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_73), not_null(t_73));
              t = p_61(t);
            }
            return(t);
          }
          ATerm e_3 (ATerm t)
          {
            ATerm z_73 = NULL;
            z_73 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_73), not_null(s_73));
              t = p_61(t);
            }
            return(t);
          }
          t = q_61(t, d_3, e_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm, ATerm (ATerm)))
{
  ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
  l_74 = t;
  k_74 :
  if(match_cons(l_74, sym__2))
    {
      m_74 = ATgetArgument(l_74, 0);
      n_74 = ATgetArgument(l_74, 1);
      {
        ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,c_75 = NULL;
        ATerm w_18;
        w_18 = t;
        {
          ATerm v_74 = NULL;
          t = not_null(m_74);
          {
            ATerm w_74 = NULL;
            t = v_61(t);
            {
              v_74 = t;
              {
                if(((s_74 != NULL) && (s_74 != v_74)))
                  _fail(v_74);
                else
                  s_74 = v_74;
                {
                  ATerm z_74 = NULL,b_75 = NULL;
                  t = map_1(t, new_0);
                  {
                    w_74 = t;
                    {
                      if(((t_74 != NULL) && (t_74 != w_74)))
                        _fail(w_74);
                      else
                        t_74 = w_74;
                      {
                        ATerm a_75 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_74), not_null(t_74));
                        {
                          t = zip_1(t, _id);
                          {
                            a_75 = t;
                            if(((z_74 != NULL) && (z_74 != a_75)))
                              _fail(a_75);
                            else
                              z_74 = a_75;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(z_74), not_null(n_74));
                          {
                            t = conc_0(t);
                            {
                              b_75 = t;
                              if(((u_74 != NULL) && (u_74 != b_75)))
                                _fail(b_75);
                              else
                                u_74 = b_75;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = w_18;
        {
          ATerm f_75 = NULL;
          t = not_null(m_74);
          {
            ATerm f_3 (ATerm t)
            {
              t = not_null(t_74);
              return(t);
            }
            t = w_61(t, f_3);
            {
              f_75 = t;
              if(((c_75 != NULL) && (c_75 != f_75)))
                _fail(f_75);
              else
                c_75 = f_75;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(c_75), not_null(n_74), not_null(u_74));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_75 = NULL;
  ATerm w_75 = NULL,x_75 = NULL;
  u_75 = t;
  {
    ATerm y_75 = NULL;
    ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,f_76 = NULL;
    t = not_null(u_75);
    {
      y_75 = t;
      {
        t = SSL_explode_term(not_null(y_75));
        {
          a_76 = t;
          p_75 :
          if(match_cons(a_76, sym__2))
            {
              b_76 = ATgetArgument(a_76, 0);
              c_76 = ATgetArgument(a_76, 1);
              q_75 :
              if(match_string(b_76, ""))
                {
                  t_75 :
                  if(((ATgetType(c_76) == AT_LIST) && ((ATermList) c_76 != ATempty)))
                    {
                      d_76 = ATgetFirst((ATermList) c_76);
                      f_76 = (ATerm) ATgetNext((ATermList) c_76);
                      {
                        if(((x_75 != NULL) && (x_75 != d_76)))
                          _fail(d_76);
                        else
                          x_75 = d_76;
                        if(((w_75 != NULL) && (w_75 != f_76)))
                          _fail(f_76);
                        else
                          w_75 = f_76;
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
        }
      }
    }
    t = not_null(x_75);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm j_61 (ATerm, ATerm (ATerm)))
{
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL;
  p_76 = t;
  m_76 :
  if(match_cons(p_76, sym__2))
    {
      q_76 = ATgetArgument(p_76, 0);
      r_76 = ATgetArgument(p_76, 1);
      {
        t = not_null(q_76);
        {
          ATerm g_3 (ATerm t)
          {
            ATerm h_3 (ATerm t)
            {
              t = not_null(r_76);
              return(t);
            }
            t = split_2(t, _id, h_3);
            t = lookup_0(t);
            return(t);
          }
          t = j_61(t, g_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL;
  a_77 = t;
  x_76 :
  if(match_cons(a_77, sym__2))
    {
      b_77 = ATgetArgument(a_77, 0);
      c_77 = ATgetArgument(a_77, 1);
      {
        t = not_null(b_77);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm f_77 = NULL;
            f_77 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_77), not_null(c_77));
              t = i_76(t);
            }
            return(t);
          }
          t = _all(t, i_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm n_76 (ATerm))
{
  ATerm j_77 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_76(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = all_dist_1(t, j_77);
      }
    return(t);
  }
  t = j_77(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm h_62 (ATerm), ATerm i_62 (ATerm, ATerm (ATerm)), ATerm j_62 (ATerm), ATerm k_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_62 (ATerm, ATerm (ATerm)), ATerm m_62 (ATerm))
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL;
  t = subs_args_0(t);
  {
    q_77 = t;
    p_77 :
    if(match_cons(q_77, sym__2))
      {
        r_77 = ATgetArgument(q_77, 0);
        s_77 = ATgetArgument(q_77, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_77), (ATerm) ATempty);
          {
            ATerm w_77 (ATerm t)
            {
              ATerm j_3 (ATerm t)
              {
                ATerm z_18 = t;
                int a_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, i_62);
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
                          t = Fst_0(t);
                          {
                            ATerm k_3 (ATerm t)
                            {
                              t = not_null(r_77);
                              return(t);
                            }
                            t = SubsVar_2(t, h_62, k_3);
                            t = m_62(t);
                          }
                          LocalPopChoice(c_19);
                        }
                      else
                        {
                          t = b_19;
                          {
                            t = RnBinding_2(t, j_62, l_62);
                            t = DistBinding_2(t, w_77, k_62);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, j_3);
              return(t);
            }
            t = w_77(t);
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
ATerm substitute_5 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm, ATerm (ATerm)), ATerm q_62 (ATerm), ATerm r_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_62 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, o_62, p_62, q_62, r_62, s_62, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm x_77 (ATerm t, ATerm y_77 (ATerm))
  {
    t = Scope_2(t, y_77, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, x_77);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL;
  g_78 = t;
  f_78 :
  if(match_cons(g_78, sym_Op_2))
    {
      h_78 = ATgetArgument(g_78, 0);
      i_78 = ATgetArgument(g_78, 1);
      {
        ATerm l_78 = NULL,m_78 = NULL;
        t = a_60(t);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm d_19;
            d_19 = t;
            {
              ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
              n_78 = t;
              e_78 :
              if(match_cons(n_78, sym_Overlay_3))
                {
                  o_78 = ATgetArgument(n_78, 0);
                  p_78 = ATgetArgument(n_78, 1);
                  q_78 = ATgetArgument(n_78, 2);
                  {
                    ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,v_78 = NULL;
                    if(((h_78 != NULL) && (h_78 != o_78)))
                      _fail(o_78);
                    else
                      h_78 = o_78;
                    {
                      if(((r_78 != NULL) && (r_78 != p_78)))
                        _fail(p_78);
                      else
                        r_78 = p_78;
                      {
                        if(((s_78 != NULL) && (s_78 != q_78)))
                          _fail(q_78);
                        else
                          s_78 = q_78;
                        {
                          ATerm e_19;
                          e_19 = t;
                          {
                            ATerm u_78 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_78), not_null(i_78));
                            {
                              t = zip_1(t, _id);
                              {
                                u_78 = t;
                                if(((t_78 != NULL) && (t_78 != u_78)))
                                  _fail(u_78);
                                else
                                  t_78 = u_78;
                              }
                            }
                          }
                          t = e_19;
                          {
                            ATerm w_78 = NULL;
                            t = not_null(t_78);
                            {
                              v_78 = t;
                              {
                                if(((l_78 != NULL) && (l_78 != v_78)))
                                  _fail(v_78);
                                else
                                  l_78 = v_78;
                                {
                                  t = not_null(s_78);
                                  {
                                    w_78 = t;
                                    {
                                      if(((m_78 != NULL) && (m_78 != w_78)))
                                        _fail(w_78);
                                      else
                                        m_78 = w_78;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_78), not_null(s_78));
                                    }
                                  }
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
            }
            t = d_19;
            return(t);
          }
          t = fetch_1(t, l_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_78), not_null(m_78));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm f_19;
    f_19 = t;
    {
      ATerm g_19 = t;
      if((PushChoice() == 0))
        {
          ATerm f_79 = NULL;
          t = b_60(t);
          {
            f_79 = t;
            c_79 :
            if(((ATermList) f_79 == ATempty))
              {
                {
                }
              }
            else
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_19;
        }
    }
    t = f_19;
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          t = ExpOverlay_1(t, b_60);
          return(t);
        }
        t = repeat_1(t, o_3);
        return(t);
      }
      t = topdown_1(t, n_3);
    }
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  v_79 = t;
  l_79 :
  if(match_cons(v_79, sym_Specification_1))
    {
      w_79 = ATgetArgument(v_79, 0);
      m_79 :
      if(((ATgetType(w_79) == AT_LIST) && ((ATermList) w_79 != ATempty)))
        {
          x_79 = ATgetFirst((ATermList) w_79);
          z_79 = (ATerm) ATgetNext((ATermList) w_79);
          n_79 :
          if(match_cons(x_79, sym_Signature_1))
            {
              y_79 = ATgetArgument(x_79, 0);
              o_79 :
              if(((ATgetType(z_79) == AT_LIST) && ((ATermList) z_79 != ATempty)))
                {
                  a_80 = ATgetFirst((ATermList) z_79);
                  c_80 = (ATerm) ATgetNext((ATermList) z_79);
                  p_79 :
                  if(match_cons(a_80, sym_Overlays_1))
                    {
                      b_80 = ATgetArgument(a_80, 0);
                      q_79 :
                      if(((ATgetType(c_80) == AT_LIST) && ((ATermList) c_80 != ATempty)))
                        {
                          d_80 = ATgetFirst((ATermList) c_80);
                          f_80 = (ATerm) ATgetNext((ATermList) c_80);
                          t_79 :
                          if(match_cons(d_80, sym_Strategies_1))
                            {
                              e_80 = ATgetArgument(d_80, 0);
                              u_79 :
                              if(((ATermList) f_80 == ATempty))
                                {
                                  {
                                    ATerm j_80 = NULL,n_80 = NULL;
                                    ATerm h_19;
                                    h_19 = t;
                                    {
                                      ATerm k_80 = NULL;
                                      t = not_null(b_80);
                                      {
                                        ATerm p_3 (ATerm t)
                                        {
                                          t = not_null(b_80);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, p_3);
                                        {
                                          k_80 = t;
                                          if(((j_80 != NULL) && (j_80 != k_80)))
                                            _fail(k_80);
                                          else
                                            j_80 = k_80;
                                        }
                                      }
                                    }
                                    t = h_19;
                                    {
                                      ATerm o_80 = NULL,q_80 = NULL,s_80 = NULL;
                                      ATerm i_19;
                                      i_19 = t;
                                      {
                                        ATerm p_80 = NULL;
                                        t = not_null(b_80);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            p_80 = t;
                                            if(((o_80 != NULL) && (o_80 != p_80)))
                                              _fail(p_80);
                                            else
                                              o_80 = p_80;
                                          }
                                        }
                                      }
                                      t = i_19;
                                      {
                                        ATerm r_80 = NULL;
                                        t = not_null(e_80);
                                        {
                                          ATerm q_3 (ATerm t)
                                          {
                                            t = not_null(j_80);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, q_3);
                                          {
                                            r_80 = t;
                                            if(((q_80 != NULL) && (q_80 != r_80)))
                                              _fail(r_80);
                                            else
                                              q_80 = r_80;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_80), not_null(q_80));
                                          {
                                            t = conc_0(t);
                                            {
                                              s_80 = t;
                                              if(((n_80 != NULL) && (n_80 != s_80)))
                                                _fail(s_80);
                                              else
                                                n_80 = s_80;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(n_80))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(y_79))));
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
ATerm error_0 (ATerm t)
{
  ATerm j_19;
  j_19 = t;
  {
    ATerm d_81 = NULL;
    ATerm e_81 = NULL;
    e_81 = t;
    if(((d_81 != NULL) && (d_81 != e_81)))
      _fail(e_81);
    else
      d_81 = e_81;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(d_81));
      t = printnl_0(t);
    }
  }
  t = j_19;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm k_19;
  k_19 = t;
  {
    t = error_0(t);
    {
      t = term_p_16;
      t = exit_0(t);
    }
  }
  t = k_19;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm k_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  k_81 = t;
  j_81 :
  if(match_cons(k_81, sym__3))
    {
      s_81 = ATgetArgument(k_81, 0);
      t_81 = ATgetArgument(k_81, 1);
      u_81 = ATgetArgument(k_81, 2);
      {
        ATerm y_81 = NULL,a_82 = NULL;
        ATerm l_19;
        l_19 = t;
        {
          ATerm z_81 = NULL;
          t = not_null(s_81);
          {
            t = MsgU_0(t);
            {
              z_81 = t;
              if(((y_81 != NULL) && (y_81 != z_81)))
                _fail(z_81);
              else
                y_81 = z_81;
            }
          }
        }
        t = l_19;
        {
          ATerm b_82 = NULL;
          t = not_null(u_81);
          {
            t = MsgE_0(t);
            {
              b_82 = t;
              if(((a_82 != NULL) && (a_82 != b_82)))
                _fail(b_82);
              else
                a_82 = b_82;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_82)), not_null(y_81));
            t = concat_0(t);
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
ATerm MsgE_0 (ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  s_82 = t;
  m_82 :
  if(((ATgetType(s_82) == AT_LIST) && ((ATermList) s_82 != ATempty)))
    {
      q_82 = ATgetFirst((ATermList) s_82);
      r_82 = (ATerm) ATgetNext((ATermList) s_82);
      n_82 :
      if(((ATgetType(r_82) == AT_LIST) && ((ATermList) r_82 != ATempty)))
        {
          o_82 = ATgetFirst((ATermList) r_82);
          p_82 = (ATerm) ATgetNext((ATermList) r_82);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_19), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_82)), not_null(o_82)), not_null(q_82))), term_n_19);
        }
      else
        {
          if(((ATermList) r_82 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_19), not_null(q_82)), term_r_19);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) s_82 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm MsgU_0 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  j_83 = t;
  d_83 :
  if(((ATgetType(j_83) == AT_LIST) && ((ATermList) j_83 != ATempty)))
    {
      h_83 = ATgetFirst((ATermList) j_83);
      i_83 = (ATerm) ATgetNext((ATermList) j_83);
      e_83 :
      if(((ATgetType(i_83) == AT_LIST) && ((ATermList) i_83 != ATempty)))
        {
          f_83 = ATgetFirst((ATermList) i_83);
          g_83 = (ATerm) ATgetNext((ATermList) i_83);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_19), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_83)), not_null(f_83)), not_null(h_83))), term_n_19);
        }
      else
        {
          if(((ATermList) i_83 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_19), not_null(h_83)), term_r_19);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) j_83 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm MsgS_0 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL;
  v_83 = t;
  u_83 :
  if(match_cons(v_83, sym__3))
    {
      w_83 = ATgetArgument(v_83, 0);
      x_83 = ATgetArgument(v_83, 1);
      y_83 = ATgetArgument(v_83, 2);
      {
        ATerm c_84 = NULL,e_84 = NULL;
        ATerm t_19;
        t_19 = t;
        {
          ATerm d_84 = NULL;
          t = not_null(w_83);
          {
            t = MsgU_0(t);
            {
              d_84 = t;
              if(((c_84 != NULL) && (c_84 != d_84)))
                _fail(d_84);
              else
                c_84 = d_84;
            }
          }
        }
        t = t_19;
        {
          ATerm f_84 = NULL;
          t = not_null(y_83);
          {
            t = MsgE_0(t);
            {
              f_84 = t;
              if(((e_84 != NULL) && (e_84 != f_84)))
                _fail(f_84);
              else
                e_84 = f_84;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_84)), not_null(c_84));
            t = concat_0(t);
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
ATerm MkMsg_0 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL;
  q_84 = t;
  p_84 :
  if(match_cons(q_84, sym_Overlay_3))
    {
      r_84 = ATgetArgument(q_84, 0);
      s_84 = ATgetArgument(q_84, 1);
      t_84 = ATgetArgument(q_84, 2);
      {
        ATerm x_84 = NULL;
        ATerm y_84 = NULL;
        t = not_null(t_84);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              y_84 = t;
              if(((x_84 != NULL) && (x_84 != y_84)))
                _fail(y_84);
              else
                x_84 = y_84;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_84)), term_v_19), not_null(r_84)), term_u_19);
      }
    }
  else
    {
      if(match_cons(q_84, sym_SDef_3))
        {
          r_84 = ATgetArgument(q_84, 0);
          s_84 = ATgetArgument(q_84, 1);
          t_84 = ATgetArgument(q_84, 2);
          {
            ATerm c_85 = NULL;
            ATerm d_85 = NULL;
            t = not_null(t_84);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  d_85 = t;
                  if(((c_85 != NULL) && (c_85 != d_85)))
                    _fail(d_85);
                  else
                    c_85 = d_85;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_85)), term_v_19), not_null(r_84)), term_w_19);
          }
        }
      else
        {
          if(match_cons(q_84, sym_RDef_3))
            {
              r_84 = ATgetArgument(q_84, 0);
              s_84 = ATgetArgument(q_84, 1);
              t_84 = ATgetArgument(q_84, 2);
              {
                ATerm h_85 = NULL;
                ATerm i_85 = NULL;
                t = not_null(t_84);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      i_85 = t;
                      if(((h_85 != NULL) && (h_85 != i_85)))
                        _fail(i_85);
                      else
                        h_85 = i_85;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_85)), term_v_19), not_null(r_84)), term_x_19);
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
ATerm err_msg_0 (ATerm t)
{
  t = MkMsg_0(t);
  t = fatal_error_0(t);
  return(t);
}
ATerm _3 (ATerm t, ATerm n_47 (ATerm), ATerm o_47 (ATerm), ATerm p_47 (ATerm))
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL;
  u_85 = t;
  t_85 :
  if(match_cons(u_85, sym__3))
    {
      v_85 = ATgetArgument(u_85, 0);
      w_85 = ATgetArgument(u_85, 1);
      x_85 = ATgetArgument(u_85, 2);
      {
        ATerm b_86 = NULL;
        t = not_null(v_85);
        {
          ATerm d_86 = NULL;
          t = n_47(t);
          {
            b_86 = t;
            {
              t = not_null(w_85);
              {
                ATerm f_86 = NULL;
                t = o_47(t);
                {
                  d_86 = t;
                  {
                    t = not_null(x_85);
                    {
                      t = p_47(t);
                      {
                        f_86 = t;
                        t = (ATerm) ATmakeAppl(sym__3, not_null(b_86), not_null(d_86), not_null(f_86));
                      }
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
ATerm Overlay_3 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm), ATerm j_55 (ATerm))
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL;
  q_86 = t;
  p_86 :
  if(match_cons(q_86, sym_Overlay_3))
    {
      r_86 = ATgetArgument(q_86, 0);
      s_86 = ATgetArgument(q_86, 1);
      t_86 = ATgetArgument(q_86, 2);
      {
        ATerm x_86 = NULL;
        t = not_null(r_86);
        {
          ATerm z_86 = NULL;
          t = h_55(t);
          {
            x_86 = t;
            {
              t = not_null(s_86);
              {
                ATerm b_87 = NULL;
                t = i_55(t);
                {
                  z_86 = t;
                  {
                    t = not_null(t_86);
                    {
                      t = j_55(t);
                      {
                        b_87 = t;
                        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(x_86), not_null(z_86), not_null(b_87));
                      }
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
ATerm Union_0 (ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  o_87 = t;
  l_87 :
  if(match_cons(o_87, sym__2))
    {
      p_87 = ATgetArgument(o_87, 0);
      t_87 = ATgetArgument(o_87, 1);
      m_87 :
      if(match_cons(p_87, sym__3))
        {
          q_87 = ATgetArgument(p_87, 0);
          r_87 = ATgetArgument(p_87, 1);
          s_87 = ATgetArgument(p_87, 2);
          n_87 :
          if(match_cons(t_87, sym__3))
            {
              u_87 = ATgetArgument(t_87, 0);
              v_87 = ATgetArgument(t_87, 1);
              w_87 = ATgetArgument(t_87, 2);
              {
                ATerm d_88 = NULL,f_88 = NULL,h_88 = NULL;
                ATerm y_19;
                y_19 = t;
                {
                  ATerm e_88 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_87), not_null(u_87));
                  {
                    t = union_0(t);
                    {
                      e_88 = t;
                      if(((d_88 != NULL) && (d_88 != e_88)))
                        _fail(e_88);
                      else
                        d_88 = e_88;
                    }
                  }
                }
                t = y_19;
                {
                  ATerm z_19;
                  z_19 = t;
                  {
                    ATerm g_88 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_87), not_null(v_87));
                    {
                      t = union_0(t);
                      {
                        g_88 = t;
                        if(((f_88 != NULL) && (f_88 != g_88)))
                          _fail(g_88);
                        else
                          f_88 = g_88;
                      }
                    }
                  }
                  t = z_19;
                  {
                    ATerm i_88 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_87), not_null(w_87));
                    {
                      t = union_0(t);
                      {
                        i_88 = t;
                        if(((h_88 != NULL) && (h_88 != i_88)))
                          _fail(i_88);
                        else
                          h_88 = i_88;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(d_88), not_null(f_88), not_null(h_88));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm u_88 = NULL;
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
  u_88 = t;
  {
    ATerm z_88 = NULL;
    ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL;
    t = not_null(u_88);
    {
      z_88 = t;
      {
        t = SSL_explode_term(not_null(z_88));
        {
          b_89 = t;
          q_88 :
          if(match_cons(b_89, sym__2))
            {
              c_89 = ATgetArgument(b_89, 0);
              d_89 = ATgetArgument(b_89, 1);
              r_88 :
              if(match_string(c_89, ""))
                {
                  s_88 :
                  if(((ATgetType(d_89) == AT_LIST) && ((ATermList) d_89 != ATempty)))
                    {
                      e_89 = ATgetFirst((ATermList) d_89);
                      f_89 = (ATerm) ATgetNext((ATermList) d_89);
                      t_88 :
                      if(((ATgetType(f_89) == AT_LIST) && ((ATermList) f_89 != ATempty)))
                        {
                          g_89 = ATgetFirst((ATermList) f_89);
                          h_89 = (ATerm) ATgetNext((ATermList) f_89);
                          {
                            if(((w_88 != NULL) && (w_88 != e_89)))
                              _fail(e_89);
                            else
                              w_88 = e_89;
                            {
                              if(((y_88 != NULL) && (y_88 != g_89)))
                                _fail(g_89);
                              else
                                y_88 = g_89;
                              if(((x_88 != NULL) && (x_88 != h_89)))
                                _fail(h_89);
                              else
                                x_88 = h_89;
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
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(y_88);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm m_89 = NULL;
  m_89 = t;
  t = SSL_explode_term(not_null(m_89));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm r_3 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_a_20);
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, r_3, s_3);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL;
  x_89 = t;
  u_89 :
  if(match_cons(x_89, sym__2))
    {
      y_89 = ATgetArgument(x_89, 0);
      c_90 = ATgetArgument(x_89, 1);
      v_89 :
      if(match_cons(y_89, sym__3))
        {
          z_89 = ATgetArgument(y_89, 0);
          a_90 = ATgetArgument(y_89, 1);
          b_90 = ATgetArgument(y_89, 2);
          w_89 :
          if(match_cons(c_90, sym__3))
            {
              d_90 = ATgetArgument(c_90, 0);
              e_90 = ATgetArgument(c_90, 1);
              f_90 = ATgetArgument(c_90, 2);
              {
                ATerm m_90 = NULL,q_90 = NULL,s_90 = NULL;
                ATerm b_20;
                b_20 = t;
                {
                  ATerm n_90 = NULL,p_90 = NULL;
                  ATerm o_90 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_90), not_null(a_90));
                  {
                    t = diff_0(t);
                    {
                      o_90 = t;
                      if(((n_90 != NULL) && (n_90 != o_90)))
                        _fail(o_90);
                      else
                        n_90 = o_90;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_89), not_null(n_90));
                    {
                      t = union_0(t);
                      {
                        p_90 = t;
                        if(((m_90 != NULL) && (m_90 != p_90)))
                          _fail(p_90);
                        else
                          m_90 = p_90;
                      }
                    }
                  }
                }
                t = b_20;
                {
                  ATerm c_20;
                  c_20 = t;
                  {
                    ATerm r_90 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_90), not_null(e_90));
                    {
                      t = union_0(t);
                      {
                        r_90 = t;
                        if(((q_90 != NULL) && (q_90 != r_90)))
                          _fail(r_90);
                        else
                          q_90 = r_90;
                      }
                    }
                  }
                  t = c_20;
                  {
                    ATerm t_90 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_90), not_null(f_90));
                    {
                      t = union_0(t);
                      {
                        t_90 = t;
                        if(((s_90 != NULL) && (s_90 != t_90)))
                          _fail(t_90);
                        else
                          s_90 = t_90;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(m_90), not_null(q_90), not_null(s_90));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm cart_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL;
  d_91 = t;
  c_91 :
  if(match_cons(d_91, sym__2))
    {
      e_91 = ATgetArgument(d_91, 0);
      f_91 = ATgetArgument(d_91, 1);
      {
        t = not_null(e_91);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm i_91 = NULL;
            i_91 = t;
            {
              t = not_null(f_91);
              {
                ATerm u_3 (ATerm t)
                {
                  ATerm k_91 = NULL;
                  k_91 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_91), not_null(k_91));
                    t = a_73(t);
                  }
                  return(t);
                }
                t = map_1(t, u_3);
              }
            }
            return(t);
          }
          t = map_1(t, t_3);
          {
            ATerm v_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = foldr_2(t, v_3, union_0);
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
ATerm seqs_join_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_a_20);
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, w_3, x_3);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL;
  w_91 = t;
  v_91 :
  if(match_cons(w_91, sym__3))
    {
      x_91 = ATgetArgument(w_91, 0);
      y_91 = ATgetArgument(w_91, 1);
      z_91 = ATgetArgument(w_91, 2);
      {
        ATerm d_92 = NULL,h_92 = NULL;
        ATerm d_20;
        d_20 = t;
        {
          ATerm e_92 = NULL,g_92 = NULL;
          ATerm f_92 = NULL;
          t = term_y_16;
          {
            t = w_58(t);
            {
              f_92 = t;
              if(((e_92 != NULL) && (e_92 != f_92)))
                _fail(f_92);
              else
                e_92 = f_92;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_91), not_null(e_92));
            {
              t = diff_0(t);
              {
                g_92 = t;
                if(((d_92 != NULL) && (d_92 != g_92)))
                  _fail(g_92);
                else
                  d_92 = g_92;
              }
            }
          }
        }
        t = d_20;
        {
          ATerm i_92 = NULL,m_92 = NULL;
          ATerm j_92 = NULL,l_92 = NULL;
          ATerm k_92 = NULL;
          t = term_y_16;
          {
            t = w_58(t);
            {
              k_92 = t;
              if(((j_92 != NULL) && (j_92 != k_92)))
                _fail(k_92);
              else
                j_92 = k_92;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_91), not_null(j_92));
            {
              t = isect_0(t);
              {
                l_92 = t;
                if(((i_92 != NULL) && (i_92 != l_92)))
                  _fail(l_92);
                else
                  i_92 = l_92;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_92), not_null(z_91));
            {
              t = conc_0(t);
              {
                m_92 = t;
                if(((h_92 != NULL) && (h_92 != m_92)))
                  _fail(m_92);
                else
                  h_92 = m_92;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(x_91), not_null(d_92), not_null(h_92));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UDjoin_0 (ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  i_93 = t;
  f_93 :
  if(match_cons(i_93, sym_Overlay_3))
    {
      j_93 = ATgetArgument(i_93, 0);
      h_93 = ATgetArgument(i_93, 1);
      g_93 = ATgetArgument(i_93, 2);
      {
        ATerm n_93 = NULL;
        ATerm o_93 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_93)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(h_93), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            o_93 = t;
            if(((n_93 != NULL) && (n_93 != o_93)))
              _fail(o_93);
            else
              n_93 = o_93;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(j_93), not_null(h_93), not_null(n_93));
      }
    }
  else
    {
      if(match_cons(i_93, sym_Scope_2))
        {
          j_93 = ATgetArgument(i_93, 0);
          h_93 = ATgetArgument(i_93, 1);
          {
            t = not_null(h_93);
            {
              ATerm y_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  t = not_null(j_93);
                  return(t);
                }
                t = JoinScope_1(t, z_3);
                return(t);
              }
              t = map_1(t, y_3);
            }
          }
        }
      else
        {
          if(match_cons(i_93, sym_Cong_2))
            {
              j_93 = ATgetArgument(i_93, 0);
              h_93 = ATgetArgument(i_93, 1);
              {
                t = not_null(h_93);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(i_93, sym_BAM_3))
                {
                  j_93 = ATgetArgument(i_93, 0);
                  h_93 = ATgetArgument(i_93, 1);
                  g_93 = ATgetArgument(i_93, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_93)), not_null(j_93)), not_null(h_93));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(i_93, sym_BA_2))
                    {
                      j_93 = ATgetArgument(i_93, 0);
                      h_93 = ATgetArgument(i_93, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_93)), not_null(h_93));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(i_93, sym_AM_2))
                        {
                          j_93 = ATgetArgument(i_93, 0);
                          h_93 = ATgetArgument(i_93, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_93)), not_null(j_93));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(i_93, sym_MA_2))
                            {
                              j_93 = ATgetArgument(i_93, 0);
                              h_93 = ATgetArgument(i_93, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_93)), not_null(j_93));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(i_93, sym_StratRule_3))
                                {
                                  j_93 = ATgetArgument(i_93, 0);
                                  h_93 = ATgetArgument(i_93, 1);
                                  g_93 = ATgetArgument(i_93, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_93)), not_null(g_93)), not_null(j_93));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(i_93, sym_Rule_3))
                                    {
                                      j_93 = ATgetArgument(i_93, 0);
                                      h_93 = ATgetArgument(i_93, 1);
                                      g_93 = ATgetArgument(i_93, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_93)), not_null(g_93)), not_null(j_93));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(i_93, sym_Seq_2))
                                        {
                                          j_93 = ATgetArgument(i_93, 0);
                                          h_93 = ATgetArgument(i_93, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_93)), not_null(j_93));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(i_93, sym_Seqs_1))
                                            {
                                              j_93 = ATgetArgument(i_93, 0);
                                              {
                                                t = not_null(j_93);
                                                t = seqs_join_0(t);
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
            }
        }
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm o_57 (ATerm), ATerm p_57 (ATerm))
{
  ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
  b_95 = t;
  a_95 :
  if(match_cons(b_95, sym_Cong_2))
    {
      c_95 = ATgetArgument(b_95, 0);
      d_95 = ATgetArgument(b_95, 1);
      {
        ATerm g_95 = NULL;
        t = not_null(c_95);
        {
          ATerm i_95 = NULL;
          t = o_57(t);
          {
            g_95 = t;
            {
              t = not_null(d_95);
              {
                t = p_57(t);
                {
                  i_95 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(g_95), not_null(i_95));
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
ATerm use_term_0 (ATerm t)
{
  ATerm o_95 = NULL;
  ATerm p_95 = NULL;
  t = tvars_0(t);
  {
    p_95 = t;
    if(((o_95 != NULL) && (o_95 != p_95)))
      _fail(p_95);
    else
      o_95 = p_95;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(o_95), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm s_95 = NULL;
  ATerm t_95 = NULL;
  t = tvars_0(t);
  {
    t_95 = t;
    if(((s_95 != NULL) && (s_95 != t_95)))
      _fail(t_95);
    else
      s_95 = t_95;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(s_95), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm s_54 (ATerm), ATerm t_54 (ATerm), ATerm u_54 (ATerm))
{
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
  a_96 = t;
  z_95 :
  if(match_cons(a_96, sym_Rule_3))
    {
      b_96 = ATgetArgument(a_96, 0);
      c_96 = ATgetArgument(a_96, 1);
      d_96 = ATgetArgument(a_96, 2);
      {
        ATerm h_96 = NULL;
        t = not_null(b_96);
        {
          ATerm j_96 = NULL;
          t = s_54(t);
          {
            h_96 = t;
            {
              t = not_null(c_96);
              {
                ATerm l_96 = NULL;
                t = t_54(t);
                {
                  j_96 = t;
                  {
                    t = not_null(d_96);
                    {
                      t = u_54(t);
                      {
                        l_96 = t;
                        t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(h_96), not_null(j_96), not_null(l_96));
                      }
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
ATerm BAM_3 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm), ATerm z_53 (ATerm))
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,z_96 = NULL;
  w_96 = t;
  v_96 :
  if(match_cons(w_96, sym_BAM_3))
    {
      x_96 = ATgetArgument(w_96, 0);
      y_96 = ATgetArgument(w_96, 1);
      z_96 = ATgetArgument(w_96, 2);
      {
        ATerm d_97 = NULL;
        t = not_null(x_96);
        {
          ATerm f_97 = NULL;
          t = x_53(t);
          {
            d_97 = t;
            {
              t = not_null(y_96);
              {
                ATerm h_97 = NULL;
                t = y_53(t);
                {
                  f_97 = t;
                  {
                    t = not_null(z_96);
                    {
                      t = z_53(t);
                      {
                        h_97 = t;
                        t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_97), not_null(f_97), not_null(h_97));
                      }
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
ATerm BA_2 (ATerm t, ATerm v_53 (ATerm), ATerm w_53 (ATerm))
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL;
  r_97 = t;
  q_97 :
  if(match_cons(r_97, sym_BA_2))
    {
      s_97 = ATgetArgument(r_97, 0);
      t_97 = ATgetArgument(r_97, 1);
      {
        ATerm w_97 = NULL;
        t = not_null(s_97);
        {
          ATerm y_97 = NULL;
          t = v_53(t);
          {
            w_97 = t;
            {
              t = not_null(t_97);
              {
                t = w_53(t);
                {
                  y_97 = t;
                  t = (ATerm) ATmakeAppl(sym_BA_2, not_null(w_97), not_null(y_97));
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
ATerm AM_2 (ATerm t, ATerm t_53 (ATerm), ATerm u_53 (ATerm))
{
  ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
  h_98 = t;
  g_98 :
  if(match_cons(h_98, sym_AM_2))
    {
      i_98 = ATgetArgument(h_98, 0);
      j_98 = ATgetArgument(h_98, 1);
      {
        ATerm m_98 = NULL;
        t = not_null(i_98);
        {
          ATerm o_98 = NULL;
          t = t_53(t);
          {
            m_98 = t;
            {
              t = not_null(j_98);
              {
                t = u_53(t);
                {
                  o_98 = t;
                  t = (ATerm) ATmakeAppl(sym_AM_2, not_null(m_98), not_null(o_98));
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
ATerm MA_2 (ATerm t, ATerm r_53 (ATerm), ATerm s_53 (ATerm))
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
  x_98 = t;
  w_98 :
  if(match_cons(x_98, sym_MA_2))
    {
      y_98 = ATgetArgument(x_98, 0);
      z_98 = ATgetArgument(x_98, 1);
      {
        ATerm c_99 = NULL;
        t = not_null(y_98);
        {
          ATerm e_99 = NULL;
          t = r_53(t);
          {
            c_99 = t;
            {
              t = not_null(z_98);
              {
                t = s_53(t);
                {
                  e_99 = t;
                  t = (ATerm) ATmakeAppl(sym_MA_2, not_null(c_99), not_null(e_99));
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
ATerm Match_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm m_99 = NULL,n_99 = NULL;
  m_99 = t;
  l_99 :
  if(match_cons(m_99, sym_Match_1))
    {
      n_99 = ATgetArgument(m_99, 0);
      {
        ATerm p_99 = NULL;
        t = not_null(n_99);
        {
          t = w_57(t);
          {
            p_99 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_99));
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
ATerm Build_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm w_99 = NULL,x_99 = NULL;
  w_99 = t;
  v_99 :
  if(match_cons(w_99, sym_Build_1))
    {
      x_99 = ATgetArgument(w_99, 0);
      {
        ATerm z_99 = NULL;
        t = not_null(x_99);
        {
          t = x_57(t);
          {
            z_99 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(z_99));
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
ATerm constructs_1 (ATerm t, ATerm v_58 (ATerm))
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm i_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, v_58);
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  {
                    ATerm k_20 = t;
                    int l_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, v_58, def_term_0);
                        LocalPopChoice(l_20);
                      }
                    else
                      {
                        t = k_20;
                        {
                          ATerm m_20 = t;
                          int n_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, v_58, use_term_0);
                              LocalPopChoice(n_20);
                            }
                          else
                            {
                              t = m_20;
                              {
                                ATerm o_20 = t;
                                int s_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, v_58, use_term_0, def_term_0);
                                    LocalPopChoice(s_20);
                                  }
                                else
                                  {
                                    t = o_20;
                                    {
                                      ATerm t_20 = t;
                                      int u_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, v_58);
                                          LocalPopChoice(u_20);
                                        }
                                      else
                                        {
                                          t = t_20;
                                          {
                                            ATerm v_20 = t;
                                            int w_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, v_58);
                                                LocalPopChoice(w_20);
                                              }
                                            else
                                              {
                                                t = v_20;
                                                {
                                                  ATerm x_20 = t;
                                                  int y_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(y_20);
                                                    }
                                                  else
                                                    {
                                                      t = x_20;
                                                      {
                                                        ATerm a_4 (ATerm t)
                                                        {
                                                          t = map_1(t, v_58);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, a_4);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = _all(t, use_def_0);
    }
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm a_55 (ATerm), ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL,m_100 = NULL;
  j_100 = t;
  i_100 :
  if(match_cons(j_100, sym_RDef_3))
    {
      k_100 = ATgetArgument(j_100, 0);
      l_100 = ATgetArgument(j_100, 1);
      m_100 = ATgetArgument(j_100, 2);
      {
        ATerm q_100 = NULL;
        t = not_null(k_100);
        {
          ATerm s_100 = NULL;
          t = a_55(t);
          {
            q_100 = t;
            {
              t = not_null(l_100);
              {
                ATerm u_100 = NULL;
                t = b_55(t);
                {
                  s_100 = t;
                  {
                    t = not_null(m_100);
                    {
                      t = c_55(t);
                      {
                        u_100 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(q_100), not_null(s_100), not_null(u_100));
                      }
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
ATerm SDef_3 (ATerm t, ATerm a_57 (ATerm), ATerm b_57 (ATerm), ATerm c_57 (ATerm))
{
  ATerm f_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
  f_101 = t;
  e_101 :
  if(match_cons(f_101, sym_SDef_3))
    {
      g_101 = ATgetArgument(f_101, 0);
      h_101 = ATgetArgument(f_101, 1);
      i_101 = ATgetArgument(f_101, 2);
      {
        ATerm m_101 = NULL;
        t = not_null(g_101);
        {
          ATerm o_101 = NULL;
          t = a_57(t);
          {
            m_101 = t;
            {
              t = not_null(h_101);
              {
                ATerm q_101 = NULL;
                t = b_57(t);
                {
                  o_101 = t;
                  {
                    t = not_null(i_101);
                    {
                      t = c_57(t);
                      {
                        q_101 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_101), not_null(o_101), not_null(q_101));
                      }
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
ATerm check_0 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm f_21 = t;
          if((PushChoice() == 0))
            {
              ATerm c_4 (ATerm t)
              {
                t = _3(t, Nil_0, _id, Nil_0);
                return(t);
              }
              t = Cons_2(t, c_4, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_21;
            }
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, b_4);
      t = err_msg_0(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm i_21 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_4 (ATerm t)
                    {
                      t = _3(t, Nil_0, _id, Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, e_4, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_21;
                  }
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, d_4);
            t = err_msg_0(t);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm j_21 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm f_4 (ATerm t)
                      {
                        ATerm g_4 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, g_4, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, f_4);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = j_21;
                    }
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
  ATerm x_101 = NULL;
  t = filter_1(t, check_0);
  {
    x_101 = t;
    w_101 :
    if(((ATermList) x_101 == ATempty))
      {
        {
        }
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm l_55 (ATerm))
{
  ATerm b_102 = NULL,c_102 = NULL;
  b_102 = t;
  a_102 :
  if(match_cons(b_102, sym_Overlays_1))
    {
      c_102 = ATgetArgument(b_102, 0);
      {
        ATerm e_102 = NULL;
        t = not_null(c_102);
        {
          t = l_55(t);
          {
            e_102 = t;
            t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(e_102));
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
ATerm Signature_1 (ATerm t, ATerm k_55 (ATerm))
{
  ATerm l_102 = NULL,m_102 = NULL;
  l_102 = t;
  k_102 :
  if(match_cons(l_102, sym_Signature_1))
    {
      m_102 = ATgetArgument(l_102, 0);
      {
        ATerm o_102 = NULL;
        t = not_null(m_102);
        {
          t = k_55(t);
          {
            o_102 = t;
            t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(o_102));
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
ATerm spec_use_def_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm i_4 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm j_4 (ATerm t)
    {
      ATerm k_4 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, m_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, k_4, l_4);
      return(t);
    }
    t = Cons_2(t, i_4, j_4);
    return(t);
  }
  t = Specification_1(t, h_4);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm w_102 = NULL,x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL;
  w_102 = t;
  t_102 :
  if(match_cons(w_102, sym__2))
    {
      x_102 = ATgetArgument(w_102, 0);
      a_103 = ATgetArgument(w_102, 1);
      u_102 :
      if(match_cons(x_102, sym__2))
        {
          y_102 = ATgetArgument(x_102, 0);
          z_102 = ATgetArgument(x_102, 1);
          v_102 :
          if(match_cons(a_103, sym__2))
            {
              b_103 = ATgetArgument(a_103, 0);
              c_103 = ATgetArgument(a_103, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_103)), not_null(y_102)), (ATerm) ATinsert(CheckATermList(not_null(c_103)), not_null(z_102)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL;
  k_103 = t;
  j_103 :
  if(((ATgetType(k_103) == AT_LIST) && ((ATermList) k_103 != ATempty)))
    {
      l_103 = ATgetFirst((ATermList) k_103);
      m_103 = (ATerm) ATgetNext((ATermList) k_103);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_103), not_null(m_103));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm s_103 = NULL;
  s_103 = t;
  r_103 :
  if(((ATermList) s_103 == ATempty))
    {
      t = term_k_21;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm strings_to_vars_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm v_103 = NULL;
    v_103 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_103));
    return(t);
  }
  t = map_1(t, n_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL;
  a_104 = t;
  z_103 :
  if(((ATgetType(a_104) == AT_LIST) && ((ATermList) a_104 != ATempty)))
    {
      b_104 = ATgetFirst((ATermList) a_104);
      c_104 = (ATerm) ATgetNext((ATermList) a_104);
      t = not_null(c_104);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  h_104 :
  if(match_cons(i_104, sym__2))
    {
      j_104 = ATgetArgument(i_104, 0);
      k_104 = ATgetArgument(i_104, 1);
      {
        t = not_null(j_104);
        {
          ATerm o_104 (ATerm t)
          {
            ATerm l_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(m_21);
              }
            else
              {
                t = l_21;
                {
                  ATerm n_21 = t;
                  int o_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_21;
                      p_21 = t;
                      {
                        ATerm o_4 (ATerm t)
                        {
                          t = not_null(k_104);
                          return(t);
                        }
                        t = HdMember_1(t, o_4);
                      }
                      t = p_21;
                      t = Cons_2(t, _id, o_104);
                      LocalPopChoice(o_21);
                    }
                  else
                    {
                      t = n_21;
                      {
                        t = Tl_0(t);
                        t = o_104(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = o_104(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL;
  r_104 = t;
  q_104 :
  if(match_cons(r_104, sym__2))
    {
      s_104 = ATgetArgument(r_104, 0);
      t_104 = ATgetArgument(r_104, 1);
      if(((s_104 != NULL) && (s_104 != t_104)))
        _fail(t_104);
      else
        s_104 = t_104;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL,y_105 = NULL;
  ATerm h_107 (ATerm t)
  {
    ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,t_106 = NULL;
    ATerm q_21;
    q_21 = t;
    {
      ATerm i_106 = NULL,k_106 = NULL,m_106 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_105), term_s_21);
      {
        ATerm t_21 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_21;
          }
        {
          ATerm u_21;
          u_21 = t;
          {
            ATerm j_106 = NULL;
            t = term_y_16;
            {
              t = p_0(t);
              {
                j_106 = t;
                if(((i_106 != NULL) && (i_106 != j_106)))
                  _fail(j_106);
                else
                  i_106 = j_106;
              }
            }
          }
          t = u_21;
          {
            ATerm l_106 = NULL;
            t = not_null(u_105);
            {
              t = tvars_0(t);
              {
                l_106 = t;
                if(((k_106 != NULL) && (k_106 != l_106)))
                  _fail(l_106);
                else
                  k_106 = l_106;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_106), not_null(k_106));
              {
                t = isect_0(t);
                {
                  ATerm n_106 = NULL,p_106 = NULL,r_106 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    m_106 = t;
                    {
                      if(((f_106 != NULL) && (f_106 != m_106)))
                        _fail(m_106);
                      else
                        f_106 = m_106;
                      {
                        ATerm v_21;
                        v_21 = t;
                        {
                          ATerm o_106 = NULL;
                          t = term_y_16;
                          {
                            t = p_0(t);
                            {
                              o_106 = t;
                              if(((n_106 != NULL) && (n_106 != o_106)))
                                _fail(o_106);
                              else
                                n_106 = o_106;
                            }
                          }
                        }
                        t = v_21;
                        {
                          ATerm q_106 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_105), not_null(y_105));
                          {
                            t = tvars_0(t);
                            {
                              q_106 = t;
                              if(((p_106 != NULL) && (p_106 != q_106)))
                                _fail(q_106);
                              else
                                p_106 = q_106;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_106), not_null(p_106));
                            {
                              t = isect_0(t);
                              {
                                ATerm s_106 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  r_106 = t;
                                  {
                                    if(((g_106 != NULL) && (g_106 != r_106)))
                                      _fail(r_106);
                                    else
                                      g_106 = r_106;
                                    {
                                      t = new_0(t);
                                      {
                                        s_106 = t;
                                        if(((h_106 != NULL) && (h_106 != s_106)))
                                          _fail(s_106);
                                        else
                                          h_106 = s_106;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = q_21;
    {
      ATerm u_106 = NULL;
      t = not_null(r_105);
      {
        t = q_0(t);
        {
          u_106 = t;
          if(((t_106 != NULL) && (t_106 != u_106)))
            _fail(u_106);
          else
            t_106 = u_106;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(t_106), (ATerm) ATmakeAppl(sym_Op_2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_21, (ATerm) ATinsert(CheckATermList(not_null(g_106)), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_106))))), (ATerm) ATmakeAppl(sym_Op_2, term_w_21, not_null(f_106)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_105), not_null(s_105), (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_105), not_null(v_105), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_105))))), (ATerm)ATmakeAppl(sym_Op_2, term_w_21, not_null(f_106)), (ATerm) ATmakeAppl(sym_Op_2, term_x_21, (ATerm) ATinsert(CheckATermList(not_null(g_106)), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_106))))), not_null(y_105)))));
    }
    return(t);
  }
  ATerm i_107 (ATerm t)
  {
    ATerm z_106 = NULL,f_107 = NULL;
    ATerm d_22;
    d_22 = t;
    {
      ATerm a_107 = NULL,c_107 = NULL,e_107 = NULL;
      ATerm e_22;
      e_22 = t;
      {
        ATerm b_107 = NULL;
        t = term_y_16;
        {
          t = p_0(t);
          {
            b_107 = t;
            if(((a_107 != NULL) && (a_107 != b_107)))
              _fail(b_107);
            else
              a_107 = b_107;
          }
        }
      }
      t = e_22;
      {
        ATerm d_107 = NULL;
        t = not_null(u_105);
        {
          t = tvars_0(t);
          {
            d_107 = t;
            if(((c_107 != NULL) && (c_107 != d_107)))
              _fail(d_107);
            else
              c_107 = d_107;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_107), not_null(c_107));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                e_107 = t;
                if(((z_106 != NULL) && (z_106 != e_107)))
                  _fail(e_107);
                else
                  z_106 = e_107;
              }
            }
          }
        }
      }
    }
    t = d_22;
    {
      ATerm g_107 = NULL;
      t = not_null(r_105);
      {
        t = q_0(t);
        {
          g_107 = t;
          if(((f_107 != NULL) && (f_107 != g_107)))
            _fail(g_107);
          else
            f_107 = g_107;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(f_107), (ATerm) ATmakeAppl(sym_Op_2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, term_s_21), (ATerm) ATmakeAppl(sym_Op_2, term_w_21, not_null(z_106)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_105), not_null(s_105), (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_105), term_f_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_c_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_105))))), (ATerm)ATmakeAppl(sym_Op_2, term_w_21, not_null(z_106)), term_s_21), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_105), term_z_12)))));
    }
    return(t);
  }
  q_105 = t;
  k_105 :
  if(match_cons(q_105, sym_RDef_3))
    {
      r_105 = ATgetArgument(q_105, 0);
      s_105 = ATgetArgument(q_105, 1);
      t_105 = ATgetArgument(q_105, 2);
      l_105 :
      if(match_cons(t_105, sym_Rule_3))
        {
          u_105 = ATgetArgument(t_105, 0);
          v_105 = ATgetArgument(t_105, 1);
          y_105 = ATgetArgument(t_105, 2);
          m_105 :
          if(match_cons(v_105, sym_Op_2))
            {
              w_105 = ATgetArgument(v_105, 0);
              x_105 = ATgetArgument(v_105, 1);
              n_105 :
              if(((ATermList) x_105 == ATempty))
                {
                  o_105 :
                  if(match_string(w_105, "Undefined"))
                    {
                      ATerm g_22 = t;
                      int h_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_107(t);
                          LocalPopChoice(h_22);
                        }
                      else
                        {
                          t = g_22;
                          t = i_107(t);
                        }
                    }
                  else
                    {
                      t = h_107(t);
                    }
                }
              else
                {
                  p_105 :
                  t = h_107(t);
                }
            }
          else
            {
              t = h_107(t);
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
ATerm split_dynamic_rules_0 (ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL;
  c_108 = t;
  a_108 :
  if(match_cons(c_108, sym__2))
    {
      d_108 = ATgetArgument(c_108, 0);
      f_108 = ATgetArgument(c_108, 1);
      b_108 :
      if(match_cons(d_108, sym_OverrideDynamicRules_1))
        {
          e_108 = ATgetArgument(d_108, 0);
          {
            t = not_null(e_108);
            {
              ATerm p_4 (ATerm t)
              {
                ATerm q_4 (ATerm t)
                {
                  t = not_null(f_108);
                  return(t);
                }
                ATerm r_4 (ATerm t)
                {
                  ATerm i_108 = NULL;
                  i_108 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_108)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, q_4, r_4);
                return(t);
              }
              t = map_1(t, p_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(d_108, sym_DynamicRules_1))
            {
              e_108 = ATgetArgument(d_108, 0);
              {
                t = not_null(e_108);
                {
                  ATerm s_4 (ATerm t)
                  {
                    ATerm t_4 (ATerm t)
                    {
                      t = not_null(f_108);
                      return(t);
                    }
                    ATerm u_4 (ATerm t)
                    {
                      ATerm m_108 = NULL;
                      m_108 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_o_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_108)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, t_4, u_4);
                    return(t);
                  }
                  t = map_1(t, s_4);
                  t = unzip_0(t);
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm dist_scope_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL;
  y_108 = t;
  v_108 :
  if(match_cons(y_108, sym__2))
    {
      z_108 = ATgetArgument(y_108, 0);
      c_109 = ATgetArgument(y_108, 1);
      x_108 :
      if(match_cons(z_108, sym_Scope_2))
        {
          a_109 = ATgetArgument(z_108, 0);
          b_109 = ATgetArgument(z_108, 1);
          {
            ATerm g_109 = NULL;
            ATerm h_109 = NULL,j_109 = NULL;
            ATerm i_109 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_109), not_null(c_109));
            {
              t = union_0(t);
              {
                i_109 = t;
                if(((h_109 != NULL) && (h_109 != i_109)))
                  _fail(i_109);
                else
                  h_109 = i_109;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), not_null(h_109));
              {
                t = h_82(t);
                {
                  j_109 = t;
                  if(((g_109 != NULL) && (g_109 != j_109)))
                    _fail(j_109);
                  else
                    g_109 = j_109;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_109), not_null(g_109));
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
ATerm one_dist_1 (ATerm t, ATerm j_76 (ATerm))
{
  ATerm q_109 = NULL,r_109 = NULL,s_109 = NULL;
  q_109 = t;
  p_109 :
  if(match_cons(q_109, sym__2))
    {
      r_109 = ATgetArgument(q_109, 0);
      s_109 = ATgetArgument(q_109, 1);
      {
        t = not_null(r_109);
        {
          ATerm v_4 (ATerm t)
          {
            ATerm v_109 = NULL;
            v_109 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_109), not_null(s_109));
              t = j_76(t);
            }
            return(t);
          }
          t = _one(t, v_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm z_109 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_76(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = one_dist_1(t, z_109);
      }
    return(t);
  }
  t = z_109(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm g_110 = NULL,h_110 = NULL,i_110 = NULL;
  g_110 = t;
  f_110 :
  if(((ATgetType(g_110) == AT_LIST) && ((ATermList) g_110 != ATempty)))
    {
      h_110 = ATgetFirst((ATermList) g_110);
      i_110 = (ATerm) ATgetNext((ATermList) g_110);
      {
        ATerm m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL;
        ATerm q_110 = NULL;
        t = not_null(h_110);
        {
          ATerm u_110 = NULL;
          t = tvars_0(t);
          {
            q_110 = t;
            {
              if(((o_110 != NULL) && (o_110 != q_110)))
                _fail(q_110);
              else
                o_110 = q_110;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_110), not_null(o_110));
                {
                  ATerm x_110 (ATerm t)
                  {
                    ATerm w_4 (ATerm t)
                    {
                      ATerm r_22 = t;
                      int s_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, x_110);
                          LocalPopChoice(s_22);
                        }
                      else
                        {
                          t = r_22;
                          {
                            ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              r_110 = t;
                              d_110 :
                              if(match_cons(r_110, sym__2))
                                {
                                  s_110 = ATgetArgument(r_110, 0);
                                  t_110 = ATgetArgument(r_110, 1);
                                  {
                                    if(((n_110 != NULL) && (n_110 != s_110)))
                                      _fail(s_110);
                                    else
                                      n_110 = s_110;
                                    {
                                      if(((m_110 != NULL) && (m_110 != t_110)))
                                        _fail(t_110);
                                      else
                                        m_110 = t_110;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_110));
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
                      return(t);
                    }
                    t = env_oncetd_1(t, w_4);
                    return(t);
                  }
                  t = x_110(t);
                  {
                    u_110 = t;
                    if(((p_110 != NULL) && (p_110 != u_110)))
                      _fail(u_110);
                    else
                      p_110 = u_110;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_110)), not_null(p_110)), not_null(i_110));
          t = conc_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm u_80 (ATerm), ATerm v_80 (ATerm))
{
  ATerm a_111 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_80(t);
        t = a_111(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = v_80(t);
      }
    return(t);
  }
  t = a_111(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_80 (ATerm))
{
  t = repeat_2(t, x_80, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm b_111 (ATerm t)
  {
    t = r_75(t);
    {
      ATerm v_22 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(b_23);
        }
      else
        {
          t = v_22;
          t = Cons_2(t, _id, b_111);
        }
    }
    return(t);
  }
  t = b_111(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, x_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL;
  i_111 = t;
  e_111 :
  if(match_cons(i_111, sym_DynRuleScope_2))
    {
      j_111 = ATgetArgument(i_111, 0);
      k_111 = ATgetArgument(i_111, 1);
      f_111 :
      if(((ATgetType(j_111) == AT_LIST) && ((ATermList) j_111 != ATempty)))
        {
          g_111 = ATgetFirst((ATermList) j_111);
          h_111 = (ATerm) ATgetNext((ATermList) j_111);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(h_111), not_null(k_111))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(g_111)))));
        }
      else
        {
          if(((ATermList) j_111 == ATempty))
            {
              t = not_null(k_111);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm define_rule_scope_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, y_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm b_5 (ATerm t)
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, d_5);
          return(t);
        }
        t = Cons_2(t, c_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, b_5);
      return(t);
    }
    t = Cons_2(t, _id, a_5);
    return(t);
  }
  t = Specification_1(t, z_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm v_111 = NULL,w_111 = NULL;
  v_111 = t;
  u_111 :
  if(match_cons(v_111, sym_ScopeDefault_1))
    {
      w_111 = ATgetArgument(v_111, 0);
      {
        ATerm y_111 = NULL;
        ATerm z_111 = NULL;
        t = not_null(w_111);
        {
          t = tvars_0(t);
          {
            z_111 = t;
            if(((y_111 != NULL) && (y_111 != z_111)))
              _fail(z_111);
            else
              y_111 = z_111;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_111), not_null(w_111));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm d_55 (ATerm))
{
  ATerm f_112 = NULL,g_112 = NULL;
  f_112 = t;
  e_112 :
  if(match_cons(f_112, sym_DynamicRules_1))
    {
      g_112 = ATgetArgument(f_112, 0);
      {
        ATerm i_112 = NULL;
        t = not_null(g_112);
        {
          t = d_55(t);
          {
            i_112 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(i_112));
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
ATerm Scope_2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_cons(q_112, sym_Scope_2))
    {
      r_112 = ATgetArgument(q_112, 0);
      s_112 = ATgetArgument(q_112, 1);
      {
        ATerm v_112 = NULL;
        t = not_null(r_112);
        {
          ATerm x_112 = NULL;
          t = a_58(t);
          {
            v_112 = t;
            {
              t = not_null(s_112);
              {
                t = b_58(t);
                {
                  x_112 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_112), not_null(x_112));
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
ATerm tboundin_3 (ATerm t, ATerm a_59 (ATerm), ATerm b_59 (ATerm), ATerm c_59 (ATerm))
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, c_59, a_59);
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      t = DynamicRules_1(t, a_59);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL;
  e_113 = t;
  d_113 :
  if(match_cons(e_113, sym_DynamicRules_1))
    {
      f_113 = ATgetArgument(e_113, 0);
      {
        t = not_null(f_113);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL;
  q_113 = t;
  k_113 :
  if(match_cons(q_113, sym_LRule_1))
    {
      r_113 = ATgetArgument(q_113, 0);
      l_113 :
      if(match_cons(r_113, sym_Rule_3))
        {
          n_113 = ATgetArgument(r_113, 0);
          o_113 = ATgetArgument(r_113, 1);
          p_113 = ATgetArgument(r_113, 2);
          {
            t = not_null(n_113);
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
      if(match_cons(q_113, sym_Scope_2))
        {
          r_113 = ATgetArgument(q_113, 0);
          s_113 = ATgetArgument(q_113, 1);
          t = not_null(r_113);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL;
  c_114 = t;
  b_114 :
  if(match_cons(c_114, sym_Var_1))
    {
      d_114 = ATgetArgument(c_114, 0);
      t = (ATerm) ATinsert(ATempty, not_null(d_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm i_114 = NULL,j_114 = NULL,k_114 = NULL;
  i_114 = t;
  h_114 :
  if(match_cons(i_114, sym__2))
    {
      j_114 = ATgetArgument(i_114, 0);
      k_114 = ATgetArgument(i_114, 1);
      {
        t = not_null(j_114);
        {
          ATerm o_114 (ATerm t)
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_114);
                LocalPopChoice(h_23);
              }
            else
              {
                t = g_23;
                {
                  ATerm i_23 = t;
                  int j_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_5 (ATerm t)
                      {
                        t = not_null(k_114);
                        return(t);
                      }
                      t = HdMember_1(t, e_5);
                      t = o_114(t);
                      LocalPopChoice(j_23);
                    }
                  else
                    {
                      t = i_23;
                      t = Cons_2(t, _id, o_114);
                    }
                }
              }
            return(t);
          }
          t = o_114(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_69(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm t_114 = NULL,u_114 = NULL,w_114 = NULL;
        t_114 = t;
        s_114 :
        if(((ATgetType(t_114) == AT_LIST) && ((ATermList) t_114 != ATempty)))
          {
            u_114 = ATgetFirst((ATermList) t_114);
            w_114 = (ATerm) ATgetNext((ATermList) t_114);
            {
              ATerm z_114 = NULL,b_115 = NULL;
              ATerm m_23;
              m_23 = t;
              {
                ATerm a_115 = NULL;
                t = not_null(u_114);
                {
                  t = n_69(t);
                  {
                    a_115 = t;
                    if(((z_114 != NULL) && (z_114 != a_115)))
                      _fail(a_115);
                    else
                      z_114 = a_115;
                  }
                }
              }
              t = m_23;
              {
                ATerm c_115 = NULL;
                t = not_null(w_114);
                {
                  t = foldr_3(t, l_69, m_69, n_69);
                  {
                    c_115 = t;
                    if(((b_115 != NULL) && (b_115 != c_115)))
                      _fail(c_115);
                    else
                      b_115 = c_115;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_114), not_null(b_115));
                  t = m_69(t);
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
ATerm crush_3 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm k_115 = NULL;
  ATerm m_115 = NULL;
  k_115 = t;
  {
    ATerm n_115 = NULL;
    ATerm p_115 = NULL,q_115 = NULL,r_115 = NULL;
    t = not_null(k_115);
    {
      n_115 = t;
      {
        t = SSL_explode_term(not_null(n_115));
        {
          p_115 = t;
          j_115 :
          if(match_cons(p_115, sym__2))
            {
              q_115 = ATgetArgument(p_115, 0);
              r_115 = ATgetArgument(p_115, 1);
              if(((m_115 != NULL) && (m_115 != r_115)))
                _fail(r_115);
              else
                m_115 = r_115;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_115);
      t = foldr_3(t, y_70, z_70, a_71);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL;
  y_115 = t;
  w_115 :
  if(match_cons(y_115, sym__2))
    {
      z_115 = ATgetArgument(y_115, 0);
      a_116 = ATgetArgument(y_115, 1);
      x_115 :
      if(((ATgetType(a_116) == AT_LIST) && ((ATermList) a_116 != ATempty)))
        {
          b_116 = ATgetFirst((ATermList) a_116);
          c_116 = (ATerm) ATgetNext((ATermList) a_116);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_115)), not_null(b_116)), not_null(c_116));
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
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL;
  s_116 = t;
  q_116 :
  if(((ATgetType(s_116) == AT_LIST) && ((ATermList) s_116 != ATempty)))
    {
      t_116 = ATgetFirst((ATermList) s_116);
      w_116 = (ATerm) ATgetNext((ATermList) s_116);
      r_116 :
      if(match_cons(t_116, sym__2))
        {
          u_116 = ATgetArgument(t_116, 0);
          v_116 = ATgetArgument(t_116, 1);
          {
            ATerm a_117 = NULL,b_117 = NULL,h_117 = NULL,n_117 = NULL;
            ATerm n_23;
            n_23 = t;
            {
              ATerm c_117 = NULL;
              ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL;
              t = not_null(v_116);
              {
                c_117 = t;
                {
                  t = SSL_explode_term(not_null(c_117));
                  {
                    e_117 = t;
                    l_116 :
                    if(match_cons(e_117, sym__2))
                      {
                        f_117 = ATgetArgument(e_117, 0);
                        g_117 = ATgetArgument(e_117, 1);
                        {
                          if(((a_117 != NULL) && (a_117 != f_117)))
                            _fail(f_117);
                          else
                            a_117 = f_117;
                          if(((b_117 != NULL) && (b_117 != g_117)))
                            _fail(g_117);
                          else
                            b_117 = g_117;
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
            t = n_23;
            {
              ATerm o_23;
              o_23 = t;
              {
                ATerm i_117 = NULL;
                ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
                t = not_null(u_116);
                {
                  i_117 = t;
                  {
                    t = SSL_explode_term(not_null(i_117));
                    {
                      k_117 = t;
                      o_116 :
                      if(match_cons(k_117, sym__2))
                        {
                          l_117 = ATgetArgument(k_117, 0);
                          m_117 = ATgetArgument(k_117, 1);
                          {
                            if(((a_117 != NULL) && (a_117 != l_117)))
                              _fail(l_117);
                            else
                              a_117 = l_117;
                            if(((h_117 != NULL) && (h_117 != m_117)))
                              _fail(m_117);
                            else
                              h_117 = m_117;
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
              t = o_23;
              {
                ATerm o_117 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_117), not_null(b_117));
                {
                  t = zip_1(t, _id);
                  {
                    o_117 = t;
                    if(((n_117 != NULL) && (n_117 != o_117)))
                      _fail(o_117);
                    else
                      n_117 = o_117;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_117), not_null(w_116));
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
  ATerm z_117 = NULL,a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL;
  z_117 = t;
  x_117 :
  if(((ATgetType(z_117) == AT_LIST) && ((ATermList) z_117 != ATempty)))
    {
      a_118 = ATgetFirst((ATermList) z_117);
      d_118 = (ATerm) ATgetNext((ATermList) z_117);
      y_117 :
      if(match_cons(a_118, sym__2))
        {
          b_118 = ATgetArgument(a_118, 0);
          c_118 = ATgetArgument(a_118, 1);
          {
            ATerm f_118 = NULL;
            if(((b_118 != NULL) && (b_118 != c_118)))
              _fail(c_118);
            else
              b_118 = c_118;
            {
              if(((f_118 != NULL) && (f_118 != d_118)))
                _fail(d_118);
              else
                f_118 = d_118;
              t = not_null(f_118);
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
ATerm while_not_2 (ATerm t, ATerm l_81 (ATerm), ATerm m_81 (ATerm))
{
  ATerm h_118 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_81(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          t = m_81(t);
          t = h_118(t);
        }
      }
    return(t);
  }
  t = h_118(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm))
{
  t = o_81(t);
  t = while_not_2(t, p_81, q_81);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL;
  l_118 = t;
  k_118 :
  if(((ATgetType(l_118) == AT_LIST) && ((ATermList) l_118 != ATempty)))
    {
      m_118 = ATgetFirst((ATermList) l_118);
      n_118 = (ATerm) ATgetNext((ATermList) l_118);
      {
        t = n_70(t);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm q_118 = NULL;
            q_118 = t;
            if(((m_118 != NULL) && (m_118 != q_118)))
              _fail(q_118);
            else
              m_118 = q_118;
            return(t);
          }
          t = fetch_1(t, f_5);
        }
        t = not_null(n_118);
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
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL;
      w_118 = t;
      u_118 :
      if(match_cons(w_118, sym__2))
        {
          x_118 = ATgetArgument(w_118, 0);
          y_118 = ATgetArgument(w_118, 1);
          {
            t = not_null(x_118);
            {
              ATerm f_119 (ATerm t)
              {
                ATerm z_23 = t;
                int a_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(a_24);
                  }
                else
                  {
                    t = z_23;
                    {
                      ATerm b_24 = t;
                      int c_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_5 (ATerm t)
                          {
                            t = not_null(y_118);
                            return(t);
                          }
                          t = HdMember_1(t, g_5);
                          t = f_119(t);
                          LocalPopChoice(c_24);
                        }
                      else
                        {
                          t = b_24;
                          t = Cons_2(t, _id, f_119);
                        }
                    }
                  }
                return(t);
              }
              t = f_119(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm h_5 (ATerm t)
        {
          ATerm c_119 = NULL;
          c_119 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(c_119));
          return(t);
        }
        ATerm i_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm j_5 (ATerm t)
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_5 (ATerm t)
              {
                ATerm f_24 = t;
                int g_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(g_24);
                  }
                else
                  {
                    t = f_24;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, k_5);
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, h_5, i_5, j_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_60 (ATerm), ATerm h_60 (ATerm), ATerm i_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_119 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_60(t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_119 = NULL;
              ATerm l_24;
              l_24 = t;
              {
                ATerm j_119 = NULL;
                t = h_60(t);
                {
                  j_119 = t;
                  if(((i_119 != NULL) && (i_119 != j_119)))
                    _fail(j_119);
                  else
                    i_119 = j_119;
                }
              }
              t = l_24;
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm o_5 (ATerm t)
                  {
                    t = not_null(i_119);
                    return(t);
                  }
                  t = split_2(t, k_119, o_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm m_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_60(t, l_5, k_119, m_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, p_5, union_0, _id);
                }
              }
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm q_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, q_5, union_0, k_119);
              }
            }
        }
      }
    return(t);
  }
  t = k_119(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, r_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL;
  q_119 = t;
  o_119 :
  if(match_cons(q_119, sym_LRule_1))
    {
      r_119 = ATgetArgument(q_119, 0);
      p_119 :
      if(match_cons(r_119, sym_Rule_3))
        {
          s_119 = ATgetArgument(r_119, 0);
          t_119 = ATgetArgument(r_119, 1);
          u_119 = ATgetArgument(r_119, 2);
          {
            ATerm y_119 = NULL;
            ATerm z_119 = NULL;
            t = not_null(s_119);
            {
              t = tvars_0(t);
              {
                z_119 = t;
                if(((y_119 != NULL) && (y_119 != z_119)))
                  _fail(z_119);
                else
                  y_119 = z_119;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_119), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_119), not_null(t_119), not_null(u_119))));
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
ATerm bottomup_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm c_120 (ATerm t)
  {
    t = _all(t, c_120);
    t = n_77(t);
    return(t);
  }
  t = c_120(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(p_24);
        }
      else
        {
          t = o_24;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, y_5);
    return(t);
  }
  t = bottomup_1(t, t_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL;
  f_120 = t;
  e_120 :
  if(match_cons(f_120, sym_Var_1))
    {
      g_120 = ATgetArgument(f_120, 0);
      t = not_null(g_120);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm m_120 = NULL,n_120 = NULL,o_120 = NULL,q_120 = NULL,r_120 = NULL;
  m_120 = t;
  k_120 :
  if(match_cons(m_120, sym__2))
    {
      n_120 = ATgetArgument(m_120, 0);
      o_120 = ATgetArgument(m_120, 1);
      l_120 :
      if(((ATgetType(o_120) == AT_LIST) && ((ATermList) o_120 != ATempty)))
        {
          q_120 = ATgetFirst((ATermList) o_120);
          r_120 = (ATerm) ATgetNext((ATermList) o_120);
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_120), not_null(r_120));
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
  ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL,f_121 = NULL;
  z_120 = t;
  w_120 :
  if(match_cons(z_120, sym__2))
    {
      a_121 = ATgetArgument(z_120, 0);
      b_121 = ATgetArgument(z_120, 1);
      x_120 :
      if(((ATgetType(b_121) == AT_LIST) && ((ATermList) b_121 != ATempty)))
        {
          c_121 = ATgetFirst((ATermList) b_121);
          f_121 = (ATerm) ATgetNext((ATermList) b_121);
          y_120 :
          if(match_cons(c_121, sym__2))
            {
              d_121 = ATgetArgument(c_121, 0);
              e_121 = ATgetArgument(c_121, 1);
              {
                ATerm h_121 = NULL;
                if(((a_121 != NULL) && (a_121 != d_121)))
                  _fail(d_121);
                else
                  a_121 = d_121;
                {
                  if(((h_121 != NULL) && (h_121 != e_121)))
                    _fail(e_121);
                  else
                    h_121 = e_121;
                  t = not_null(h_121);
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
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm))
{
  ATerm n_121 = NULL;
  ATerm p_121 = NULL,q_121 = NULL;
  n_121 = t;
  {
    ATerm r_121 = NULL;
    t = not_null(n_121);
    {
      ATerm s_121 = NULL;
      t = c_62(t);
      {
        r_121 = t;
        {
          if(((p_121 != NULL) && (p_121 != r_121)))
            _fail(r_121);
          else
            p_121 = r_121;
          {
            t = d_62(t);
            {
              s_121 = t;
              if(((q_121 != NULL) && (q_121 != s_121)))
                _fail(s_121);
              else
                q_121 = s_121;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_121), not_null(q_121));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm w_121 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_79(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = _all(t, w_121);
      }
    return(t);
  }
  t = w_121(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL;
  z_121 = t;
  y_121 :
  if(match_cons(z_121, sym__2))
    {
      a_122 = ATgetArgument(z_121, 0);
      b_122 = ATgetArgument(z_121, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_122)), not_null(a_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL;
  j_122 = t;
  g_122 :
  if(match_cons(j_122, sym__2))
    {
      k_122 = ATgetArgument(j_122, 0);
      n_122 = ATgetArgument(j_122, 1);
      h_122 :
      if(((ATgetType(k_122) == AT_LIST) && ((ATermList) k_122 != ATempty)))
        {
          l_122 = ATgetFirst((ATermList) k_122);
          m_122 = (ATerm) ATgetNext((ATermList) k_122);
          i_122 :
          if(((ATgetType(n_122) == AT_LIST) && ((ATermList) n_122 != ATempty)))
            {
              o_122 = ATgetFirst((ATermList) n_122);
              p_122 = (ATerm) ATgetNext((ATermList) n_122);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_122), not_null(o_122)), (ATerm) ATmakeAppl(sym__2, not_null(m_122), not_null(p_122)));
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
  ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL;
  z_122 = t;
  w_122 :
  if(match_cons(z_122, sym__2))
    {
      a_123 = ATgetArgument(z_122, 0);
      b_123 = ATgetArgument(z_122, 1);
      x_122 :
      if(((ATermList) a_123 == ATempty))
        {
          y_122 :
          if(((ATermList) b_123 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm d_123 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_73(t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          t = d_73(t);
          {
            t = _2(t, f_73, d_123);
            t = e_73(t);
          }
        }
      }
    return(t);
  }
  t = d_123(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_73);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL;
  i_123 = t;
  h_123 :
  if(match_cons(i_123, sym__2))
    {
      j_123 = ATgetArgument(i_123, 0);
      k_123 = ATgetArgument(i_123, 1);
      {
        ATerm n_123 = NULL;
        if(((n_123 != NULL) && (n_123 != k_123)))
          _fail(k_123);
        else
          n_123 = k_123;
      }
    }
  else
    {
      if(match_cons(i_123, sym__3))
        {
          j_123 = ATgetArgument(i_123, 0);
          k_123 = ATgetArgument(i_123, 1);
          l_123 = ATgetArgument(i_123, 2);
          {
            ATerm t_123 = NULL;
            ATerm u_123 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_123), not_null(k_123));
            {
              t = zip_1(t, _id);
              {
                u_123 = t;
                if(((t_123 != NULL) && (t_123 != u_123)))
                  _fail(u_123);
                else
                  t_123 = u_123;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_123), not_null(l_123));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm a_124 = NULL,b_124 = NULL,c_124 = NULL;
  t = subs_args_0(t);
  {
    a_124 = t;
    z_123 :
    if(match_cons(a_124, sym__2))
      {
        b_124 = ATgetArgument(a_124, 0);
        c_124 = ATgetArgument(a_124, 1);
        {
          t = not_null(c_124);
          {
            ATerm z_5 (ATerm t)
            {
              ATerm i_6 (ATerm t)
              {
                t = not_null(b_124);
                return(t);
              }
              t = SubsVar_2(t, e_62, i_6);
              t = f_62(t);
              return(t);
            }
            t = alltd_1(t, z_5);
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
ATerm substitute_1 (ATerm t, ATerm g_62 (ATerm))
{
  t = substitute_2(t, g_62, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  l_124 = t;
  j_124 :
  if(match_cons(l_124, sym_OpDecl_2))
    {
      m_124 = ATgetArgument(l_124, 0);
      n_124 = ATgetArgument(l_124, 1);
      k_124 :
      if(match_cons(n_124, sym_ConstType_1))
        {
          o_124 = ATgetArgument(n_124, 0);
          t = not_null(m_124);
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
ATerm OpNames_0 (ATerm t)
{
  ATerm t_124 = NULL,u_124 = NULL;
  t_124 = t;
  s_124 :
  if(match_cons(t_124, sym_Constructors_1))
    {
      u_124 = ATgetArgument(t_124, 0);
      {
        t = not_null(u_124);
        t = filter_1(t, OpName_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL;
  a_125 = t;
  y_124 :
  if(match_cons(a_125, sym_Overlay_3))
    {
      b_125 = ATgetArgument(a_125, 0);
      c_125 = ATgetArgument(a_125, 1);
      d_125 = ATgetArgument(a_125, 2);
      z_124 :
      if(((ATermList) c_125 == ATempty))
        {
          t = not_null(b_125);
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
ATerm Names_0 (ATerm t)
{
  ATerm k_125 = NULL,l_125 = NULL;
  k_125 = t;
  j_125 :
  if(match_cons(k_125, sym_Overlays_1))
    {
      l_125 = ATgetArgument(k_125, 0);
      {
        t = not_null(l_125);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(k_125, sym_Signature_1))
        {
          l_125 = ATgetArgument(k_125, 0);
          {
            t = not_null(l_125);
            {
              t = filter_1(t, OpNames_0);
              t = concat_0(t);
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
ATerm filter_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 (ATerm t)
            {
              t = filter_1(t, p_68);
              return(t);
            }
            t = Cons_2(t, p_68, s_6);
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm s_125 = NULL,t_125 = NULL,u_125 = NULL;
              s_125 = t;
              r_125 :
              if(((ATgetType(s_125) == AT_LIST) && ((ATermList) s_125 != ATempty)))
                {
                  t_125 = ATgetFirst((ATermList) s_125);
                  u_125 = (ATerm) ATgetNext((ATermList) s_125);
                  {
                    t = not_null(u_125);
                    t = filter_1(t, p_68);
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
  ATerm b_126 = NULL,h_126 = NULL;
  ATerm a_25;
  a_25 = t;
  {
    ATerm g_126 = NULL;
    t = const_names_0(t);
    {
      ATerm e_7 (ATerm t)
      {
        ATerm c_126 = NULL,e_126 = NULL;
        ATerm b_25;
        b_25 = t;
        {
          ATerm d_126 = NULL;
          d_126 = t;
          if(((c_126 != NULL) && (c_126 != d_126)))
            _fail(d_126);
          else
            c_126 = d_126;
        }
        t = b_25;
        {
          ATerm f_126 = NULL;
          f_126 = t;
          if(((e_126 != NULL) && (e_126 != f_126)))
            _fail(f_126);
          else
            e_126 = f_126;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_126), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_126), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, e_7);
      {
        g_126 = t;
        if(((b_126 != NULL) && (b_126 != g_126)))
          _fail(g_126);
        else
          b_126 = g_126;
      }
    }
  }
  t = a_25;
  {
    ATerm i_126 = NULL;
    i_126 = t;
    if(((h_126 != NULL) && (h_126 != i_126)))
      _fail(i_126);
    else
      h_126 = i_126;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_126), not_null(h_126));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL,s_126 = NULL;
  p_126 = t;
  o_126 :
  if(match_cons(p_126, sym__3))
    {
      q_126 = ATgetArgument(p_126, 0);
      r_126 = ATgetArgument(p_126, 1);
      s_126 = ATgetArgument(p_126, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_126))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(r_126))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(q_126))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm z_126 = NULL,a_127 = NULL,b_127 = NULL;
  z_126 = t;
  y_126 :
  if(match_cons(z_126, sym__2))
    {
      a_127 = ATgetArgument(z_126, 0);
      b_127 = ATgetArgument(z_126, 1);
      {
        t = not_null(a_127);
        {
          ATerm f_7 (ATerm t)
          {
            t = not_null(b_127);
            return(t);
          }
          t = at_end_1(t, f_7);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL;
  m_127 = t;
  j_127 :
  if(match_cons(m_127, sym__2))
    {
      n_127 = ATgetArgument(m_127, 0);
      r_127 = ATgetArgument(m_127, 1);
      k_127 :
      if(match_cons(n_127, sym__3))
        {
          o_127 = ATgetArgument(n_127, 0);
          p_127 = ATgetArgument(n_127, 1);
          q_127 = ATgetArgument(n_127, 2);
          l_127 :
          if(match_cons(r_127, sym__3))
            {
              s_127 = ATgetArgument(r_127, 0);
              t_127 = ATgetArgument(r_127, 1);
              u_127 = ATgetArgument(r_127, 2);
              {
                ATerm b_128 = NULL,d_128 = NULL,f_128 = NULL;
                ATerm c_25;
                c_25 = t;
                {
                  ATerm c_128 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_127), not_null(s_127));
                  {
                    t = conc_0(t);
                    {
                      c_128 = t;
                      if(((b_128 != NULL) && (b_128 != c_128)))
                        _fail(c_128);
                      else
                        b_128 = c_128;
                    }
                  }
                }
                t = c_25;
                {
                  ATerm d_25;
                  d_25 = t;
                  {
                    ATerm e_128 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_127), not_null(t_127));
                    {
                      t = conc_0(t);
                      {
                        e_128 = t;
                        if(((d_128 != NULL) && (d_128 != e_128)))
                          _fail(e_128);
                        else
                          d_128 = e_128;
                      }
                    }
                  }
                  t = d_25;
                  {
                    ATerm g_128 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_127), not_null(u_127));
                    {
                      t = conc_0(t);
                      {
                        g_128 = t;
                        if(((f_128 != NULL) && (f_128 != g_128)))
                          _fail(g_128);
                        else
                          f_128 = g_128;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(b_128), not_null(d_128), not_null(f_128));
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_69 (ATerm), ATerm k_69 (ATerm))
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_69(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm o_128 = NULL,p_128 = NULL,q_128 = NULL;
        o_128 = t;
        n_128 :
        if(((ATgetType(o_128) == AT_LIST) && ((ATermList) o_128 != ATempty)))
          {
            p_128 = ATgetFirst((ATermList) o_128);
            q_128 = (ATerm) ATgetNext((ATermList) o_128);
            {
              ATerm t_128 = NULL;
              ATerm u_128 = NULL;
              t = not_null(q_128);
              {
                t = foldr_2(t, j_69, k_69);
                {
                  u_128 = t;
                  if(((t_128 != NULL) && (t_128 != u_128)))
                    _fail(u_128);
                  else
                    t_128 = u_128;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_128), not_null(t_128));
                t = k_69(t);
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
ATerm NormBSIG_0 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL;
  a_129 = t;
  z_128 :
  if(match_cons(a_129, sym_Sorts_1))
    {
      b_129 = ATgetArgument(a_129, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(a_129, sym_Constructors_1))
        {
          b_129 = ATgetArgument(a_129, 0);
          t = not_null(b_129);
        }
      else
        {
          _fail(t);
        }
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
  ATerm m_129 = NULL,n_129 = NULL;
  m_129 = t;
  l_129 :
  if(match_cons(m_129, sym_Overlays_1))
    {
      n_129 = ATgetArgument(m_129, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(n_129), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(m_129, sym_Rules_1))
        {
          n_129 = ATgetArgument(m_129, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(n_129));
        }
      else
        {
          if(match_cons(m_129, sym_Strategies_1))
            {
              n_129 = ATgetArgument(m_129, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(n_129));
            }
          else
            {
              if(match_cons(m_129, sym_Signature_1))
                {
                  n_129 = ATgetArgument(m_129, 0);
                  {
                    ATerm s_129 = NULL;
                    ATerm t_129 = NULL;
                    t = not_null(n_129);
                    {
                      t = normalize_sigs_0(t);
                      {
                        t_129 = t;
                        if(((s_129 != NULL) && (s_129 != t_129)))
                          _fail(t_129);
                        else
                          s_129 = t_129;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(s_129), (ATerm)ATempty, (ATerm) ATempty);
                  }
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
ATerm BSpecs_0 (ATerm t)
{
  ATerm b_130 = NULL,c_130 = NULL;
  b_130 = t;
  a_130 :
  if(match_cons(b_130, sym_Specification_1))
    {
      c_130 = ATgetArgument(b_130, 0);
      t = not_null(c_130);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm f_130 (ATerm t)
  {
    t = l_77(t);
    t = _all(t, f_130);
    return(t);
  }
  t = f_130(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm h_7 (ATerm t)
    {
      ATerm i_130 = NULL,j_130 = NULL;
      i_130 = t;
      h_130 :
      if(match_cons(i_130, sym_DefaultVarDec_1))
        {
          j_130 = ATgetArgument(i_130, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_130), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_14), term_r_14));
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, h_7);
    return(t);
  }
  t = topdown_1(t, g_7);
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
        ATerm i_7 (ATerm t)
        {
          t = term_a_20;
          return(t);
        }
        t = foldr_2(t, i_7, Combine_0);
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
    ATerm g_25;
    g_25 = t;
    t = spec_use_def_0(t);
    t = g_25;
    {
      t = ExpandOverlays_0(t);
      {
        t = CheckConstructors_0(t);
        {
          t = RulesToSdefs_0(t);
          {
            t = strename_0(t);
            {
              ATerm j_7 (ATerm t)
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm l_7 (ATerm t)
                  {
                    t = Strategies_1(t, desugar_spec_0);
                    return(t);
                  }
                  t = Cons_2(t, l_7, Nil_0);
                  return(t);
                }
                t = Cons_2(t, _id, k_7);
                return(t);
              }
              t = Specification_1(t, j_7);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm l_47 (ATerm), ATerm m_47 (ATerm))
{
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL;
  q_130 = t;
  p_130 :
  if(match_cons(q_130, sym__2))
    {
      r_130 = ATgetArgument(q_130, 0);
      s_130 = ATgetArgument(q_130, 1);
      {
        ATerm v_130 = NULL;
        t = not_null(r_130);
        {
          ATerm y_130 = NULL;
          t = l_47(t);
          {
            v_130 = t;
            {
              t = not_null(s_130);
              {
                t = m_47(t);
                {
                  y_130 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_130), not_null(y_130));
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
  ATerm f_131 = NULL;
  ATerm h_25;
  h_25 = t;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm g_131 = NULL,h_131 = NULL;
      g_131 = t;
      e_131 :
      if(match_cons(g_131, sym_Program_1))
        {
          h_131 = ATgetArgument(g_131, 0);
          if(((f_131 != NULL) && (f_131 != h_131)))
            _fail(h_131);
          else
            f_131 = h_131;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, m_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_25), not_null(f_131)), term_i_25));
      {
        t = printnl_0(t);
        {
          t = term_p_16;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_25;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATempty, term_o_25));
  {
    t = printnl_0(t);
    {
      t = term_p_16;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL;
  ATerm n_7 (ATerm t)
  {
    ATerm o_7 (ATerm t)
    {
      ATerm q_25 = t;
      if((PushChoice() == 0))
        {
          ATerm p_7 (ATerm t)
          {
            ATerm q_131 = NULL;
            q_131 = t;
            j_131 :
            if(!(match_cons(q_131, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_7);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_25;
        }
      return(t);
    }
    t = _2(t, o_7, _id);
    {
      ATerm q_7 (ATerm t)
      {
        ATerm r_7 (ATerm t)
        {
          ATerm r_131 = NULL,s_131 = NULL;
          r_131 = t;
          l_131 :
          if(match_cons(r_131, sym_Runtime_1))
            {
              s_131 = ATgetArgument(r_131, 0);
              if(((p_131 != NULL) && (p_131 != s_131)))
                _fail(s_131);
              else
                p_131 = s_131;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_7);
        return(t);
      }
      t = _2(t, q_7, _id);
      {
        ATerm s_7 (ATerm t)
        {
          ATerm t_7 (ATerm t)
          {
            ATerm t_131 = NULL,u_131 = NULL;
            t_131 = t;
            n_131 :
            if(match_cons(t_131, sym_Program_1))
              {
                u_131 = ATgetArgument(t_131, 0);
                if(((o_131 != NULL) && (o_131 != u_131)))
                  _fail(u_131);
                else
                  o_131 = u_131;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_7);
          return(t);
        }
        t = _2(t, s_7, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_25), not_null(p_131)), term_s_25), not_null(o_131)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, n_7);
  {
    t = term_d_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm z_131 = NULL,a_132 = NULL,b_132 = NULL;
  z_131 = t;
  y_131 :
  if(match_cons(z_131, sym__2))
    {
      a_132 = ATgetArgument(z_131, 0);
      b_132 = ATgetArgument(z_131, 1);
      t = SSL_WriteToTextFile(not_null(a_132), not_null(b_132));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_132 = NULL,j_132 = NULL,k_132 = NULL;
  h_132 = t;
  g_132 :
  if(match_cons(h_132, sym__2))
    {
      j_132 = ATgetArgument(h_132, 0);
      k_132 = ATgetArgument(h_132, 1);
      t = SSL_WriteToBinaryFile(not_null(j_132), not_null(k_132));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm s_132 = NULL;
  ATerm u_25;
  u_25 = t;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm v_25 = t;
      int w_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_7 (ATerm t)
          {
            ATerm t_132 = NULL,u_132 = NULL;
            t_132 = t;
            p_132 :
            if(match_cons(t_132, sym_Output_1))
              {
                u_132 = ATgetArgument(t_132, 0);
                if(((s_132 != NULL) && (s_132 != u_132)))
                  _fail(u_132);
                else
                  s_132 = u_132;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_7);
          LocalPopChoice(w_25);
        }
      else
        {
          t = v_25;
          {
            ATerm v_132 = NULL;
            t = term_x_25;
            {
              v_132 = t;
              if(((s_132 != NULL) && (s_132 != v_132)))
                _fail(v_132);
              else
                s_132 = v_132;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_7, _id);
  }
  t = u_25;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm y_7 (ATerm t)
      {
        t = not_null(s_132);
        return(t);
      }
      t = split_2(t, y_7, _id);
      return(t);
    }
    t = _2(t, _id, w_7);
    {
      ATerm y_25 = t;
      int z_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_7 (ATerm t)
          {
            ATerm a_8 (ATerm t)
            {
              ATerm w_132 = NULL;
              w_132 = t;
              r_132 :
              if(!(match_cons(w_132, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, a_8);
            return(t);
          }
          t = _2(t, z_7, WriteToBinaryFile_0);
          LocalPopChoice(z_25);
        }
      else
        {
          t = y_25;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm c_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL;
  ATerm a_26;
  a_26 = t;
  t = dtime_0(t);
  t = a_26;
  {
    t = f_65(t);
    {
      ATerm b_26;
      b_26 = t;
      {
        ATerm d_133 = NULL;
        t = dtime_0(t);
        {
          d_133 = t;
          if(((c_133 != NULL) && (c_133 != d_133)))
            _fail(d_133);
          else
            c_133 = d_133;
        }
      }
      t = b_26;
      {
        e_133 = t;
        b_133 :
        if(match_cons(e_133, sym__2))
          {
            f_133 = ATgetArgument(e_133, 0);
            g_133 = ATgetArgument(e_133, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_133)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_133))), not_null(g_133));
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
  ATerm m_133 = NULL;
  m_133 = t;
  t = SSL_ReadFromFile(not_null(m_133));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_67 (ATerm), ATerm y_67 (ATerm))
{
  ATerm r_133 = NULL,t_133 = NULL;
  ATerm c_26;
  c_26 = t;
  {
    ATerm s_133 = NULL;
    t = x_67(t);
    {
      s_133 = t;
      if(((r_133 != NULL) && (r_133 != s_133)))
        _fail(s_133);
      else
        r_133 = s_133;
    }
  }
  t = c_26;
  {
    ATerm u_133 = NULL;
    t = y_67(t);
    {
      u_133 = t;
      if(((t_133 != NULL) && (t_133 != u_133)))
        _fail(u_133);
      else
        t_133 = u_133;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_133), not_null(t_133));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_134 = NULL;
  ATerm d_26;
  d_26 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 (ATerm t)
        {
          ATerm b_134 = NULL,c_134 = NULL;
          b_134 = t;
          y_133 :
          if(match_cons(b_134, sym_Input_1))
            {
              c_134 = ATgetArgument(b_134, 0);
              if(((a_134 != NULL) && (a_134 != c_134)))
                _fail(c_134);
              else
                a_134 = c_134;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_8);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm d_134 = NULL;
          t = term_k_26;
          {
            d_134 = t;
            if(((a_134 != NULL) && (a_134 != d_134)))
              _fail(d_134);
            else
              a_134 = d_134;
          }
        }
      }
  }
  t = d_26;
  {
    ATerm d_8 (ATerm t)
    {
      t = not_null(a_134);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_8);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_134 = NULL;
  h_134 = t;
  g_134 :
  if(!(match_cons(h_134, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm e_8 (ATerm t)
  {
    ATerm l_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_26);
      }
    else
      {
        t = l_26;
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_8);
  t = e_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_134 = NULL;
  j_134 = t;
  t = SSL_table_create(not_null(j_134));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_134 = NULL;
  n_134 = t;
  {
    ATerm r_26;
    r_26 = t;
    {
      t = term_s_26;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_26, term_t_26, not_null(n_134));
          t = table_put_0(t);
        }
      }
    }
    t = r_26;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm w_134 = NULL,x_134 = NULL,y_134 = NULL,z_134 = NULL,a_135 = NULL;
  w_134 = t;
  u_134 :
  if(match_string(w_134, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(w_134) == AT_LIST) && ((ATermList) w_134 != ATempty)))
        {
          x_134 = ATgetFirst((ATermList) w_134);
          y_134 = (ATerm) ATgetNext((ATermList) w_134);
          v_134 :
          if(((ATgetType(y_134) == AT_LIST) && ((ATermList) y_134 != ATempty)))
            {
              z_134 = ATgetFirst((ATermList) y_134);
              a_135 = (ATerm) ATgetNext((ATermList) y_134);
              {
                ATerm e_135 = NULL;
                ATerm u_26;
                u_26 = t;
                {
                  t = not_null(x_134);
                  t = m_0(t);
                }
                t = u_26;
                {
                  ATerm f_135 = NULL;
                  t = not_null(z_134);
                  {
                    t = n_0(t);
                    {
                      f_135 = t;
                      if(((e_135 != NULL) && (e_135 != f_135)))
                        _fail(f_135);
                      else
                        e_135 = f_135;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_135)), not_null(e_135));
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
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_8 (ATerm t)
      {
        ATerm u_135 = NULL;
        u_135 = t;
        j_135 :
        if(!(match_string(u_135, "-S")))
          {
            if(!(match_string(u_135, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        t = term_z_26;
        return(t);
      }
      ATerm u_8 (ATerm t)
      {
        t = term_a_27;
        return(t);
      }
      t = Option_3(t, g_8, k_8, u_8);
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm d_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 (ATerm t)
            {
              ATerm v_135 = NULL;
              v_135 = t;
              k_135 :
              if(!(match_string(v_135, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_9 (ATerm t)
            {
              t = term_j_27;
              return(t);
            }
            ATerm n_9 (ATerm t)
            {
              t = term_k_27;
              return(t);
            }
            t = Option_3(t, c_9, m_9, n_9);
            LocalPopChoice(h_27);
          }
        else
          {
            t = d_27;
            {
              ATerm l_27 = t;
              int m_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_9 (ATerm t)
                  {
                    ATerm w_135 = NULL;
                    w_135 = t;
                    l_135 :
                    if(!(match_string(w_135, "-v")))
                      {
                        if(!(match_string(w_135, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm p_9 (ATerm t)
                  {
                    t = term_n_27;
                    return(t);
                  }
                  ATerm q_9 (ATerm t)
                  {
                    t = term_o_27;
                    return(t);
                  }
                  t = Option_3(t, o_9, p_9, q_9);
                  LocalPopChoice(m_27);
                }
              else
                {
                  t = l_27;
                  {
                    ATerm p_27 = t;
                    int q_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_9 (ATerm t)
                        {
                          ATerm x_135 = NULL;
                          x_135 = t;
                          m_135 :
                          if(!(match_string(x_135, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm s_9 (ATerm t)
                        {
                          ATerm y_135 = NULL;
                          ATerm z_135 = NULL;
                          z_135 = t;
                          if(((y_135 != NULL) && (y_135 != z_135)))
                            _fail(z_135);
                          else
                            y_135 = z_135;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(y_135));
                          return(t);
                        }
                        ATerm t_9 (ATerm t)
                        {
                          t = term_r_27;
                          return(t);
                        }
                        t = ArgOption_3(t, r_9, s_9, t_9);
                        LocalPopChoice(q_27);
                      }
                    else
                      {
                        t = p_27;
                        {
                          ATerm w_27 = t;
                          int x_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_9 (ATerm t)
                              {
                                ATerm a_136 = NULL;
                                a_136 = t;
                                o_135 :
                                if(!(match_string(a_136, "-i")))
                                  {
                                    if(!(match_string(a_136, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm v_9 (ATerm t)
                              {
                                ATerm b_136 = NULL;
                                ATerm c_136 = NULL;
                                c_136 = t;
                                if(((b_136 != NULL) && (b_136 != c_136)))
                                  _fail(c_136);
                                else
                                  b_136 = c_136;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(b_136));
                                return(t);
                              }
                              ATerm w_9 (ATerm t)
                              {
                                t = term_y_27;
                                return(t);
                              }
                              t = ArgOption_3(t, u_9, v_9, w_9);
                              LocalPopChoice(x_27);
                            }
                          else
                            {
                              t = w_27;
                              {
                                ATerm a_28 = t;
                                int b_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_9 (ATerm t)
                                    {
                                      ATerm d_136 = NULL;
                                      d_136 = t;
                                      q_135 :
                                      if(!(match_string(d_136, "-o")))
                                        {
                                          if(!(match_string(d_136, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm y_9 (ATerm t)
                                    {
                                      ATerm e_136 = NULL;
                                      ATerm f_136 = NULL;
                                      f_136 = t;
                                      if(((e_136 != NULL) && (e_136 != f_136)))
                                        _fail(f_136);
                                      else
                                        e_136 = f_136;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_136));
                                      return(t);
                                    }
                                    ATerm z_9 (ATerm t)
                                    {
                                      t = term_c_28;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, x_9, y_9, z_9);
                                    LocalPopChoice(b_28);
                                  }
                                else
                                  {
                                    t = a_28;
                                    {
                                      ATerm d_28 = t;
                                      int e_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_10 (ATerm t)
                                          {
                                            ATerm g_136 = NULL;
                                            g_136 = t;
                                            s_135 :
                                            if(!(match_string(g_136, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm h_10 (ATerm t)
                                          {
                                            t = term_f_28;
                                            return(t);
                                          }
                                          ATerm i_10 (ATerm t)
                                          {
                                            t = term_g_28;
                                            return(t);
                                          }
                                          t = Option_3(t, g_10, h_10, i_10);
                                          LocalPopChoice(e_28);
                                        }
                                      else
                                        {
                                          t = d_28;
                                          {
                                            ATerm j_10 (ATerm t)
                                            {
                                              ATerm h_136 = NULL;
                                              h_136 = t;
                                              t_135 :
                                              if(!(match_string(h_136, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm k_10 (ATerm t)
                                            {
                                              t = term_h_28;
                                              return(t);
                                            }
                                            ATerm l_10 (ATerm t)
                                            {
                                              t = term_i_28;
                                              return(t);
                                            }
                                            t = Option_3(t, j_10, k_10, l_10);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm m_136 = NULL;
  m_136 = t;
  t = SSL_table_destroy(not_null(m_136));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_136 = NULL;
  q_136 = t;
  t = SSL_exit(not_null(q_136));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm u_136 = NULL;
  u_136 = t;
  t = SSL_implode_string(not_null(u_136));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm x_136 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_136);
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        {
          t = Nil_0(t);
          t = d_75(t);
        }
      }
    return(t);
  }
  t = x_136(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm a_137 = NULL,c_137 = NULL,d_137 = NULL;
        a_137 = t;
        z_136 :
        if(((ATgetType(a_137) == AT_LIST) && ((ATermList) a_137 != ATempty)))
          {
            c_137 = ATgetFirst((ATermList) a_137);
            d_137 = (ATerm) ATgetNext((ATermList) a_137);
            {
              t = not_null(c_137);
              {
                ATerm m_10 (ATerm t)
                {
                  t = not_null(d_137);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_10);
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
  ATerm j_137 = NULL;
  j_137 = t;
  t = SSL_explode_string(not_null(j_137));
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
ATerm long_description_1 (ATerm t, ATerm l_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm m_137 (ATerm t)
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = Cons_2(t, p_74, m_137);
      }
    return(t);
  }
  t = m_137(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm t_137 = NULL,u_137 = NULL,w_137 = NULL;
  w_137 = t;
  s_137 :
  if(((ATgetType(w_137) == AT_LIST) && ((ATermList) w_137 != ATempty)))
    {
      t_137 = ATgetFirst((ATermList) w_137);
      u_137 = (ATerm) ATgetNext((ATermList) w_137);
      {
        ATerm z_137 = NULL;
        t = not_null(u_137);
        {
          ATerm p_28;
          p_28 = t;
          {
            ATerm a_138 = NULL,c_138 = NULL,e_138 = NULL;
            ATerm q_28;
            q_28 = t;
            {
              ATerm b_138 = NULL;
              t = l_0(t);
              {
                b_138 = t;
                if(((a_138 != NULL) && (a_138 != b_138)))
                  _fail(b_138);
                else
                  a_138 = b_138;
              }
            }
            t = q_28;
            {
              ATerm d_138 = NULL;
              t = not_null(t_137);
              {
                t = k_0(t);
                {
                  d_138 = t;
                  if(((c_138 != NULL) && (c_138 != d_138)))
                    _fail(d_138);
                  else
                    c_138 = d_138;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_138)), not_null(c_138));
                {
                  e_138 = t;
                  if(((z_137 != NULL) && (z_137 != e_138)))
                    _fail(e_138);
                  else
                    z_137 = e_138;
                }
              }
            }
          }
          t = p_28;
          {
            ATerm p_10 (ATerm t)
            {
              t = not_null(z_137);
              return(t);
            }
            t = reverse_acc_2(t, k_0, p_10);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_137 == ATempty))
        {
          {
            t = term_y_16;
            t = l_0(t);
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
  ATerm t_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_10);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_48 (ATerm))
{
  ATerm n_138 = NULL,o_138 = NULL;
  n_138 = t;
  m_138 :
  if(match_cons(n_138, sym_Program_1))
    {
      o_138 = ATgetArgument(n_138, 0);
      {
        ATerm q_138 = NULL;
        t = not_null(o_138);
        {
          t = u_48(t);
          {
            q_138 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_138));
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
  ATerm y_138 = NULL;
  ATerm a_11 (ATerm t)
  {
    ATerm b_11 (ATerm t)
    {
      ATerm z_138 = NULL;
      z_138 = t;
      if(((y_138 != NULL) && (y_138 != z_138)))
        _fail(z_138);
      else
        y_138 = z_138;
      return(t);
    }
    t = Program_1(t, b_11);
    return(t);
  }
  t = option_defined_1(t, a_11);
  {
    ATerm c_11 (ATerm t)
    {
      ATerm a_139 = NULL;
      ATerm b_139 = NULL;
      t = term_y_16;
      {
        ATerm d_11 (ATerm t)
        {
          t = not_null(y_138);
          return(t);
        }
        t = short_description_1(t, d_11);
        {
          t = concat_strings_0(t);
          {
            b_139 = t;
            if(((a_139 != NULL) && (a_139 != b_139)))
              _fail(b_139);
            else
              a_139 = b_139;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATempty, not_null(a_139)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, c_11);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATempty, term_r_28));
      {
        t = printnl_0(t);
        {
          t = term_c_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm e_11 (ATerm t)
                {
                  ATerm c_139 = NULL;
                  c_139 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_139)), term_d_29));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, e_11);
                {
                  ATerm f_11 (ATerm t)
                  {
                    ATerm e_139 = NULL;
                    ATerm f_139 = NULL;
                    t = term_y_16;
                    {
                      ATerm g_11 (ATerm t)
                      {
                        t = not_null(y_138);
                        return(t);
                      }
                      t = long_description_1(t, g_11);
                      {
                        t = concat_strings_0(t);
                        {
                          f_139 = t;
                          if(((e_139 != NULL) && (e_139 != f_139)))
                            _fail(f_139);
                          else
                            e_139 = f_139;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_139)), term_e_29));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_11);
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
  ATerm m_139 = NULL,n_139 = NULL,o_139 = NULL;
  m_139 = t;
  l_139 :
  if(match_cons(m_139, sym__2))
    {
      n_139 = ATgetArgument(m_139, 0);
      o_139 = ATgetArgument(m_139, 1);
      {
        ATerm f_29;
        f_29 = t;
        t = SSL_printnl(not_null(n_139), not_null(o_139));
        t = f_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_48 (ATerm))
{
  ATerm w_139 = NULL,x_139 = NULL;
  w_139 = t;
  v_139 :
  if(match_cons(w_139, sym_Undefined_1))
    {
      x_139 = ATgetArgument(w_139, 0);
      {
        ATerm z_139 = NULL;
        t = not_null(x_139);
        {
          t = v_48(t);
          {
            z_139 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_139));
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
ATerm fetch_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm d_140 (ATerm t)
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_74, _id);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = Cons_2(t, _id, d_140);
      }
    return(t);
  }
  t = d_140(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_64 (ATerm))
{
  t = fetch_1(t, j_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_140 = NULL;
  f_140 = t;
  e_140 :
  if(!(match_cons(f_140, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_81(t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm i_140 = NULL,j_140 = NULL,k_140 = NULL;
  i_140 = t;
  h_140 :
  if(match_cons(i_140, sym__2))
    {
      j_140 = ATgetArgument(i_140, 0);
      k_140 = ATgetArgument(i_140, 1);
      t = SSL_table_get(not_null(j_140), not_null(k_140));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL,v_140 = NULL;
  s_140 = t;
  r_140 :
  if(match_cons(s_140, sym__3))
    {
      t_140 = ATgetArgument(s_140, 0);
      u_140 = ATgetArgument(s_140, 1);
      v_140 = ATgetArgument(s_140, 2);
      {
        ATerm k_29;
        k_29 = t;
        {
          ATerm z_140 = NULL;
          ATerm a_141 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_140), not_null(u_140));
          {
            ATerm l_29 = t;
            int m_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_29);
              }
            else
              {
                t = l_29;
                t = (ATerm) ATempty;
              }
            {
              a_141 = t;
              if(((z_140 != NULL) && (z_140 != a_141)))
                _fail(a_141);
              else
                z_140 = a_141;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_140), not_null(u_140), (ATerm) ATinsert(CheckATermList(not_null(z_140)), not_null(v_140)));
            t = table_put_0(t);
          }
        }
        t = k_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm e_141 = NULL;
  ATerm f_141 = NULL;
  t = term_y_16;
  {
    t = p_63(t);
    {
      f_141 = t;
      if(((e_141 != NULL) && (e_141 != f_141)))
        _fail(f_141);
      else
        e_141 = f_141;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_28, term_w_28, not_null(e_141));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm l_141 = NULL,m_141 = NULL,n_141 = NULL;
  l_141 = t;
  k_141 :
  if(match_string(l_141, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(l_141) == AT_LIST) && ((ATermList) l_141 != ATempty)))
        {
          m_141 = ATgetFirst((ATermList) l_141);
          n_141 = (ATerm) ATgetNext((ATermList) l_141);
          {
            ATerm q_141 = NULL;
            ATerm n_29;
            n_29 = t;
            {
              t = not_null(m_141);
              t = c_0(t);
            }
            t = n_29;
            {
              ATerm r_141 = NULL;
              t = term_y_16;
              {
                t = f_0(t);
                {
                  r_141 = t;
                  if(((q_141 != NULL) && (q_141 != r_141)))
                    _fail(r_141);
                  else
                    q_141 = r_141;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_141)), not_null(q_141));
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
  ATerm h_11 (ATerm t)
  {
    ATerm w_141 = NULL;
    w_141 = t;
    v_141 :
    if(!(match_string(w_141, "--help")))
      {
        if(!(match_string(w_141, "-h")))
          {
            if(!(match_string(w_141, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_11 (ATerm t)
  {
    t = term_o_29;
    return(t);
  }
  ATerm k_11 (ATerm t)
  {
    t = term_p_29;
    return(t);
  }
  t = Option_3(t, h_11, j_11, k_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_141 = NULL,a_142 = NULL,b_142 = NULL;
  z_141 = t;
  y_141 :
  if(((ATgetType(z_141) == AT_LIST) && ((ATermList) z_141 != ATempty)))
    {
      a_142 = ATgetFirst((ATermList) z_141);
      b_142 = (ATerm) ATgetNext((ATermList) z_141);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_142)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_142)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm j_142 = NULL,k_142 = NULL,l_142 = NULL;
  j_142 = t;
  i_142 :
  if(((ATgetType(j_142) == AT_LIST) && ((ATermList) j_142 != ATempty)))
    {
      k_142 = ATgetFirst((ATermList) j_142);
      l_142 = (ATerm) ATgetNext((ATermList) j_142);
      {
        ATerm o_142 = NULL;
        t = not_null(k_142);
        {
          ATerm q_142 = NULL;
          t = f_58(t);
          {
            o_142 = t;
            {
              t = not_null(l_142);
              {
                t = g_58(t);
                {
                  q_142 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_142)), not_null(o_142));
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
  ATerm x_142 = NULL;
  x_142 = t;
  v_142 :
  if(((ATermList) x_142 == ATempty))
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
ATerm parse_options_p__1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm q_29;
  q_29 = t;
  {
    ATerm l_11 (ATerm t)
    {
      t = term_r_29;
      t = n_63(t);
      return(t);
    }
    t = try_1(t, l_11);
  }
  t = q_29;
  {
    ATerm m_11 (ATerm t)
    {
      ATerm z_142 = NULL;
      z_142 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_142));
      return(t);
    }
    ATerm n_11 (ATerm t)
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              {
                t = n_63(t);
                t = Cons_2(t, _id, n_11);
              }
            }
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_11, n_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_143 = NULL,g_143 = NULL,h_143 = NULL;
  ATerm w_29;
  w_29 = t;
  {
    ATerm i_143 = NULL,j_143 = NULL,k_143 = NULL,l_143 = NULL;
    i_143 = t;
    e_143 :
    if(match_cons(i_143, sym__3))
      {
        j_143 = ATgetArgument(i_143, 0);
        k_143 = ATgetArgument(i_143, 1);
        l_143 = ATgetArgument(i_143, 2);
        {
          if(((f_143 != NULL) && (f_143 != j_143)))
            _fail(j_143);
          else
            f_143 = j_143;
          {
            if(((g_143 != NULL) && (g_143 != k_143)))
              _fail(k_143);
            else
              g_143 = k_143;
            {
              if(((h_143 != NULL) && (h_143 != l_143)))
                _fail(l_143);
              else
                h_143 = l_143;
              t = SSL_table_put(not_null(f_143), not_null(g_143), not_null(h_143));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_63 (ATerm))
{
  ATerm o_143 = NULL;
  ATerm x_29;
  x_29 = t;
  {
    t = term_y_29;
    t = table_put_0(t);
  }
  t = x_29;
  {
    ATerm o_11 (ATerm t)
    {
      ATerm z_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_63(t);
          LocalPopChoice(a_30);
        }
      else
        {
          t = z_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_11);
    {
      ATerm p_11 (ATerm t)
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm q_11 (ATerm t)
              {
                ATerm r_11 (ATerm t)
                {
                  ATerm q_143 = NULL;
                  q_143 = t;
                  if(((o_143 != NULL) && (o_143 != q_143)))
                    _fail(q_143);
                  else
                    o_143 = q_143;
                  return(t);
                }
                t = Undefined_1(t, r_11);
                return(t);
              }
              t = option_defined_1(t, q_11);
              {
                ATerm n_30;
                n_30 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_143)), term_o_30));
                  t = printnl_0(t);
                }
                t = n_30;
                {
                  t = system_usage_0(t);
                  {
                    t = term_p_16;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_11);
      {
        ATerm p_30;
        p_30 = t;
        {
          t = term_s_28;
          t = table_destroy_0(t);
        }
        t = p_30;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm s_11 (ATerm t)
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_64(t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, s_11);
  {
    t = store_options_0(t);
    {
      ATerm s_30 = t;
      int t_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, v_64);
          LocalPopChoice(t_30);
        }
      else
        {
          t = s_30;
          {
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, t_64);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(v_30);
              }
            else
              {
                t = u_30;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_64 (ATerm), ATerm p_64 (ATerm))
{
  t = iowrap_3(t, o_64, p_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm t_11 (ATerm t)
  {
    t = _2(t, _id, l_64);
    return(t);
  }
  t = iowrap_2(t, t_11, _fail);
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
