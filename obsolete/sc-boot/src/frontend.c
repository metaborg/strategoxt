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
ATerm term_e_29;
ATerm term_y_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_z_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_e_25;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_m_20;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_r_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_d_12;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
void init_constant_terms (void)
{
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATgetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATsetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Op_2, term_k_14, (ATerm) ATempty);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Var_1, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Var_1, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Anno_2, term_s_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Var_1, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Var_1, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Anno_2, term_x_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Call_2, term_b_15, (ATerm) ATempty);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_BAM_3, term_c_15, term_s_14, term_x_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_14);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Call_2, term_f_15, (ATerm) ATempty);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_BAM_3, term_j_15, term_u_14, term_z_14);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Var_1, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, term_s_17);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_21);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Op_2, term_q_11, (ATerm) ATempty);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_22);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_v_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__3, term_s_27, term_v_27, (ATerm) ATempty);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm x_57 (ATerm), ATerm y_57 (ATerm));
ATerm Explode_2 (ATerm, ATerm d_54 (ATerm), ATerm e_54 (ATerm));
ATerm pat_td_1 (ATerm, ATerm l_58 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm h_73 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm x_53 (ATerm), ATerm y_53 (ATerm));
ATerm Con_3 (ATerm, ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm y_78 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm h_55 (ATerm));
ATerm Specification_1 (ATerm, ATerm j_55 (ATerm));
ATerm spaste_1 (ATerm, ATerm x_58 (ATerm));
ATerm Rec_2 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm));
ATerm Let_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm sboundin_3 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm a_59 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm p_56 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm r_61 (ATerm, ATerm (ATerm)), ATerm s_61 (ATerm), ATerm t_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_61 (ATerm, ATerm (ATerm)));
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
ATerm rewrite_1 (ATerm, ATerm i_65 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm g_80 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_65 (ATerm));
ATerm restore_always_2 (ATerm, ATerm z_81 (ATerm), ATerm a_82 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_65 (ATerm));
ATerm scope_2 (ATerm, ATerm e_65 (ATerm), ATerm f_65 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm n_58 (ATerm), ATerm o_58 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_65 (ATerm));
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm w_59 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm x_55 (ATerm), ATerm y_55 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm t_58 (ATerm));
ATerm Var_1 (ATerm, ATerm t_55 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm d_61 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm d_76 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm i_76 (ATerm));
ATerm substitute_6 (ATerm, ATerm b_62 (ATerm), ATerm c_62 (ATerm, ATerm (ATerm)), ATerm d_62 (ATerm), ATerm e_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_62 (ATerm, ATerm (ATerm)), ATerm g_62 (ATerm));
ATerm substitute_5 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm, ATerm (ATerm)), ATerm k_62 (ATerm), ATerm l_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_62 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm u_59 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm v_59 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm h_47 (ATerm), ATerm i_47 (ATerm), ATerm j_47 (ATerm));
ATerm Overlay_3 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm v_72 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm q_58 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm i_57 (ATerm), ATerm j_57 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm));
ATerm BAM_3 (ATerm, ATerm r_53 (ATerm), ATerm s_53 (ATerm), ATerm t_53 (ATerm));
ATerm BA_2 (ATerm, ATerm p_53 (ATerm), ATerm q_53 (ATerm));
ATerm AM_2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
ATerm MA_2 (ATerm, ATerm l_53 (ATerm), ATerm m_53 (ATerm));
ATerm Match_1 (ATerm, ATerm q_57 (ATerm));
ATerm Build_1 (ATerm, ATerm r_57 (ATerm));
ATerm constructs_1 (ATerm, ATerm p_58 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm w_54 (ATerm));
ATerm SDef_3 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm f_55 (ATerm));
ATerm Signature_1 (ATerm, ATerm e_55 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm c_82 (ATerm));
ATerm one_dist_1 (ATerm, ATerm e_76 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm t_76 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm repeat_1 (ATerm, ATerm s_80 (ATerm));
ATerm listtd_1 (ATerm, ATerm m_75 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm x_54 (ATerm));
ATerm Scope_2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm tboundin_3 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm));
ATerm crush_3 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm g_81 (ATerm), ATerm h_81 (ATerm));
ATerm for_3 (ATerm, ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm l_81 (ATerm));
ATerm HdMember_1 (ATerm, ATerm i_70 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm i_77 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm w_61 (ATerm), ATerm x_61 (ATerm));
ATerm alltd_1 (ATerm, ATerm m_79 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm));
ATerm zip_1 (ATerm, ATerm c_73 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm substitute_1 (ATerm, ATerm a_62 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm k_68 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_77 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm f_47 (ATerm), ATerm g_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_64 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_67 (ATerm), ATerm t_67 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_64 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm y_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_63 (ATerm));
ATerm map_1 (ATerm, ATerm k_74 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_63 (ATerm));
ATerm Program_1 (ATerm, ATerm o_48 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_48 (ATerm));
ATerm fetch_1 (ATerm, ATerm s_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm d_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_63 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_57 (ATerm), ATerm a_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_63 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_63 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_64 (ATerm), ATerm j_64 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_64 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  v_5 = t;
  t_5 :
  if(match_cons(v_5, sym_ExplodeCong_2))
    {
      w_5 = ATgetArgument(v_5, 0);
      u_5 = ATgetArgument(v_5, 1);
      {
        ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
        ATerm d_6 = NULL;
        ATerm e_6 = NULL;
        t = new_0(t);
        {
          d_6 = t;
          {
            if(((z_5 != NULL) && (z_5 != d_6)))
              _fail(d_6);
            else
              z_5 = d_6;
            {
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
                          t = new_0(t);
                          {
                            g_6 = t;
                            if(((c_6 != NULL) && (c_6 != g_6)))
                              _fail(g_6);
                            else
                              c_6 = g_6;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_6)), not_null(b_6)), not_null(a_6)), not_null(z_5)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_6)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(w_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_6))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(u_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_6)), (ATerm) ATmakeAppl(sym_Var_1, not_null(c_6))))), (ATerm) ATmakeAppl(sym_Prim_2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_6))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_6)))))));
      }
    }
  else
    {
      if(match_cons(v_5, sym_Build_1))
        {
          w_5 = ATgetArgument(v_5, 0);
          {
            ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
            ATerm m_6 = NULL;
            ATerm q_6 = NULL;
            t = new_0(t);
            {
              m_6 = t;
              {
                if(((k_6 != NULL) && (k_6 != m_6)))
                  _fail(m_6);
                else
                  k_6 = m_6;
                {
                  t = not_null(w_5);
                  {
                    ATerm d_0 (ATerm t)
                    {
                      ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
                      n_6 = t;
                      m_5 :
                      if(match_cons(n_6, sym_Explode_2))
                        {
                          o_6 = ATgetArgument(n_6, 0);
                          p_6 = ATgetArgument(n_6, 1);
                          {
                            if(((i_6 != NULL) && (i_6 != o_6)))
                              _fail(o_6);
                            else
                              i_6 = o_6;
                            {
                              if(((j_6 != NULL) && (j_6 != p_6)))
                                _fail(p_6);
                              else
                                j_6 = p_6;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_6));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, d_0);
                    {
                      q_6 = t;
                      if(((l_6 != NULL) && (l_6 != q_6)))
                        _fail(q_6);
                      else
                        l_6 = q_6;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_6)), not_null(i_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_6))), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_6)))));
          }
        }
      else
        {
          if(match_cons(v_5, sym_Match_1))
            {
              w_5 = ATgetArgument(v_5, 0);
              {
                ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
                ATerm x_6 = NULL;
                ATerm y_6 = NULL;
                t = new_0(t);
                {
                  x_6 = t;
                  {
                    if(((u_6 != NULL) && (u_6 != x_6)))
                      _fail(x_6);
                    else
                      u_6 = x_6;
                    {
                      ATerm c_7 = NULL;
                      t = new_0(t);
                      {
                        y_6 = t;
                        {
                          if(((v_6 != NULL) && (v_6 != y_6)))
                            _fail(y_6);
                          else
                            v_6 = y_6;
                          {
                            t = not_null(w_5);
                            {
                              ATerm e_0 (ATerm t)
                              {
                                ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
                                z_6 = t;
                                r_5 :
                                if(match_cons(z_6, sym_Explode_2))
                                  {
                                    a_7 = ATgetArgument(z_6, 0);
                                    b_7 = ATgetArgument(z_6, 1);
                                    {
                                      if(((s_6 != NULL) && (s_6 != a_7)))
                                        _fail(a_7);
                                      else
                                        s_6 = a_7;
                                      {
                                        if(((t_6 != NULL) && (t_6 != b_7)))
                                          _fail(b_7);
                                        else
                                          t_6 = b_7;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_6));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, e_0);
                              {
                                c_7 = t;
                                if(((w_6 != NULL) && (w_6 != c_7)))
                                  _fail(c_7);
                                else
                                  w_6 = c_7;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_6)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_6))), (ATerm) ATmakeAppl(sym_Prim_2, term_p_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_6)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_6)), (ATerm) ATmakeAppl(sym_Op_2, term_q_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_6)), not_null(s_6)))))));
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
  ATerm h_8 = NULL,i_8 = NULL;
  h_8 = t;
  g_8 :
  if(match_cons(h_8, sym_Match_1))
    {
      i_8 = ATgetArgument(h_8, 0);
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
            ATerm o_8 = NULL;
            ATerm s_8 = NULL;
            t = new_0(t);
            {
              o_8 = t;
              {
                if(((m_8 != NULL) && (m_8 != o_8)))
                  _fail(o_8);
                else
                  m_8 = o_8;
                {
                  t = not_null(i_8);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
                      p_8 = t;
                      w_7 :
                      if(match_cons(p_8, sym_Anno_2))
                        {
                          q_8 = ATgetArgument(p_8, 0);
                          r_8 = ATgetArgument(p_8, 1);
                          {
                            if(((k_8 != NULL) && (k_8 != q_8)))
                              _fail(q_8);
                            else
                              k_8 = q_8;
                            {
                              if(((l_8 != NULL) && (l_8 != r_8)))
                                _fail(r_8);
                              else
                                l_8 = r_8;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_8)), not_null(k_8));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, f_0);
                    {
                      s_8 = t;
                      if(((n_8 != NULL) && (n_8 != s_8)))
                        _fail(s_8);
                      else
                        n_8 = s_8;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_8)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_u_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_8)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_8))))));
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm v_11 = t;
              int w_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
                  ATerm x_8 = NULL;
                  ATerm a_9 = NULL;
                  t = new_0(t);
                  {
                    x_8 = t;
                    {
                      if(((v_8 != NULL) && (v_8 != x_8)))
                        _fail(x_8);
                      else
                        v_8 = x_8;
                      {
                        t = not_null(i_8);
                        {
                          ATerm i_0 (ATerm t)
                          {
                            ATerm y_8 = NULL,z_8 = NULL;
                            y_8 = t;
                            a_8 :
                            if(match_cons(y_8, sym_RootApp_1))
                              {
                                z_8 = ATgetArgument(y_8, 0);
                                {
                                  if(((u_8 != NULL) && (u_8 != z_8)))
                                    _fail(z_8);
                                  else
                                    u_8 = z_8;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_8));
                                }
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = pat_td_1(t, i_0);
                          {
                            a_9 = t;
                            if(((w_8 != NULL) && (w_8 != a_9)))
                              _fail(a_9);
                            else
                              w_8 = a_9;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_8))), not_null(u_8))));
                  LocalPopChoice(w_11);
                }
              else
                {
                  t = v_11;
                  {
                    ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
                    ATerm g_9 = NULL;
                    ATerm k_9 = NULL;
                    t = new_0(t);
                    {
                      g_9 = t;
                      {
                        if(((e_9 != NULL) && (e_9 != g_9)))
                          _fail(g_9);
                        else
                          e_9 = g_9;
                        {
                          t = not_null(i_8);
                          {
                            ATerm r_0 (ATerm t)
                            {
                              ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
                              h_9 = t;
                              e_8 :
                              if(match_cons(h_9, sym_App_2))
                                {
                                  i_9 = ATgetArgument(h_9, 0);
                                  j_9 = ATgetArgument(h_9, 1);
                                  {
                                    if(((d_9 != NULL) && (d_9 != i_9)))
                                      _fail(i_9);
                                    else
                                      d_9 = i_9;
                                    {
                                      if(((c_9 != NULL) && (c_9 != j_9)))
                                        _fail(j_9);
                                      else
                                        c_9 = j_9;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_9));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = pat_td_1(t, r_0);
                            {
                              k_9 = t;
                              if(((f_9 != NULL) && (f_9 != k_9)))
                                _fail(k_9);
                              else
                                f_9 = k_9;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_9)), not_null(d_9)))));
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  b_10 = t;
  z_9 :
  if(match_cons(b_10, sym_Match_1))
    {
      c_10 = ATgetArgument(b_10, 0);
      a_10 :
      if(match_cons(c_10, sym_RootApp_1))
        {
          d_10 = ATgetArgument(c_10, 0);
          t = not_null(d_10);
        }
      else
        {
          if(match_cons(c_10, sym_App_2))
            {
              d_10 = ATgetArgument(c_10, 0);
              e_10 = ATgetArgument(c_10, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(d_10), not_null(e_10));
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
  ATerm q_10 = NULL,r_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym_Match_1))
    {
      r_10 = ATgetArgument(q_10, 0);
      {
        ATerm t_10 = NULL,u_10 = NULL;
        ATerm y_10 = NULL;
        t = not_null(r_10);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
            v_10 = t;
            m_10 :
            if(match_cons(v_10, sym_RootApp_1))
              {
                w_10 = ATgetArgument(v_10, 0);
                n_10 :
                if(match_cons(w_10, sym_Match_1))
                  {
                    x_10 = ATgetArgument(w_10, 0);
                    {
                      if(((t_10 != NULL) && (t_10 != x_10)))
                        _fail(x_10);
                      else
                        t_10 = x_10;
                      t = not_null(t_10);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = pat_td_1(t, s_0);
          {
            y_10 = t;
            if(((u_10 != NULL) && (u_10 != y_10)))
              _fail(y_10);
            else
              u_10 = y_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_10));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym_Build_1))
    {
      i_15 = ATgetArgument(h_15, 0);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
            ATerm o_15 = NULL;
            ATerm i_16 = NULL;
            t = new_0(t);
            {
              o_15 = t;
              {
                if(((m_15 != NULL) && (m_15 != o_15)))
                  _fail(o_15);
                else
                  m_15 = o_15;
                {
                  t = not_null(i_15);
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
                      f_16 = t;
                      h_11 :
                      if(match_cons(f_16, sym_Anno_2))
                        {
                          g_16 = ATgetArgument(f_16, 0);
                          h_16 = ATgetArgument(f_16, 1);
                          {
                            if(((k_15 != NULL) && (k_15 != g_16)))
                              _fail(g_16);
                            else
                              k_15 = g_16;
                            {
                              if(((l_15 != NULL) && (l_15 != h_16)))
                                _fail(h_16);
                              else
                                l_15 = h_16;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, t_0);
                    {
                      i_16 = t;
                      if(((n_15 != NULL) && (n_15 != i_16)))
                        _fail(i_16);
                      else
                        n_15 = i_16;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_15)), not_null(k_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_15))));
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            {
              ATerm e_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
                  ATerm p_18 = NULL;
                  ATerm n_19 = NULL;
                  t = new_0(t);
                  {
                    p_18 = t;
                    {
                      if(((n_18 != NULL) && (n_18 != p_18)))
                        _fail(p_18);
                      else
                        n_18 = p_18;
                      {
                        t = not_null(i_15);
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm k_19 = NULL,m_19 = NULL;
                            k_19 = t;
                            t_11 :
                            if(match_cons(k_19, sym_RootApp_1))
                              {
                                m_19 = ATgetArgument(k_19, 0);
                                {
                                  if(((m_18 != NULL) && (m_18 != m_19)))
                                    _fail(m_19);
                                  else
                                    m_18 = m_19;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_18));
                                }
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = pat_td_1(t, u_0);
                          {
                            n_19 = t;
                            if(((o_18 != NULL) && (o_18 != n_19)))
                              _fail(n_19);
                            else
                              o_18 = n_19;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_18)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_18))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_18))));
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = e_12;
                  {
                    ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,w_21 = NULL;
                    ATerm x_21 = NULL;
                    ATerm i_22 = NULL;
                    t = new_0(t);
                    {
                      x_21 = t;
                      {
                        if(((p_20 != NULL) && (p_20 != x_21)))
                          _fail(x_21);
                        else
                          p_20 = x_21;
                        {
                          t = not_null(i_15);
                          {
                            ATerm v_0 (ATerm t)
                            {
                              ATerm y_21 = NULL,z_21 = NULL,h_22 = NULL;
                              y_21 = t;
                              e_15 :
                              if(match_cons(y_21, sym_App_2))
                                {
                                  z_21 = ATgetArgument(y_21, 0);
                                  h_22 = ATgetArgument(y_21, 1);
                                  {
                                    if(((n_20 != NULL) && (n_20 != z_21)))
                                      _fail(z_21);
                                    else
                                      n_20 = z_21;
                                    {
                                      if(((o_20 != NULL) && (o_20 != h_22)))
                                        _fail(h_22);
                                      else
                                        o_20 = h_22;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_20));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = pat_td_1(t, v_0);
                            {
                              i_22 = t;
                              if(((w_21 != NULL) && (w_21 != i_22)))
                                _fail(i_22);
                              else
                                w_21 = i_22;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_20), not_null(o_20), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_20)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_21))));
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  j_23 = t;
  h_23 :
  if(match_cons(j_23, sym_Build_1))
    {
      k_23 = ATgetArgument(j_23, 0);
      i_23 :
      if(match_cons(k_23, sym_RootApp_1))
        {
          l_23 = ATgetArgument(k_23, 0);
          t = not_null(l_23);
        }
      else
        {
          if(match_cons(k_23, sym_App_2))
            {
              l_23 = ATgetArgument(k_23, 0);
              m_23 = ATgetArgument(k_23, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(m_23)), not_null(l_23));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm x_57 (ATerm), ATerm y_57 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_Prim_2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      {
        ATerm h_25 = NULL;
        t = not_null(z_23);
        {
          ATerm j_25 = NULL;
          t = x_57(t);
          {
            h_25 = t;
            {
              t = not_null(a_24);
              {
                t = y_57(t);
                {
                  j_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(h_25), not_null(j_25));
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
ATerm Explode_2 (ATerm t, ATerm d_54 (ATerm), ATerm e_54 (ATerm))
{
  ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_Explode_2))
    {
      a_26 = ATgetArgument(x_25, 0);
      b_26 = ATgetArgument(x_25, 1);
      {
        ATerm e_26 = NULL;
        t = not_null(a_26);
        {
          ATerm g_26 = NULL;
          t = d_54(t);
          {
            e_26 = t;
            {
              t = not_null(b_26);
              {
                t = e_54(t);
                {
                  g_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(e_26), not_null(g_26));
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
ATerm pat_td_1 (ATerm t, ATerm l_58 (ATerm))
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_58(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = pat_td_1(t, l_58);
                return(t);
              }
              t = fetch_1(t, x_0);
              return(t);
            }
            t = Op_2(t, _id, w_0);
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            {
              ATerm k_12 = t;
              int l_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = pat_td_1(t, l_58);
                    return(t);
                  }
                  t = Explode_2(t, _id, y_0);
                  LocalPopChoice(l_12);
                }
              else
                {
                  t = k_12;
                  {
                    ATerm m_12 = t;
                    int n_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_0 (ATerm t)
                        {
                          t = pat_td_1(t, l_58);
                          return(t);
                        }
                        t = Explode_2(t, z_0, _id);
                        LocalPopChoice(n_12);
                      }
                    else
                      {
                        t = m_12;
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = pat_td_1(t, l_58);
                              return(t);
                            }
                            t = fetch_1(t, b_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, a_1);
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
  ATerm x_26 = NULL,y_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym_Build_1))
    {
      y_26 = ATgetArgument(x_26, 0);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_27 = NULL,b_27 = NULL;
            ATerm o_27 = NULL;
            t = not_null(y_26);
            {
              ATerm c_1 (ATerm t)
              {
                ATerm c_27 = NULL,m_27 = NULL,n_27 = NULL;
                c_27 = t;
                p_26 :
                if(match_cons(c_27, sym_RootApp_1))
                  {
                    m_27 = ATgetArgument(c_27, 0);
                    q_26 :
                    if(match_cons(m_27, sym_Build_1))
                      {
                        n_27 = ATgetArgument(m_27, 0);
                        {
                          if(((a_27 != NULL) && (a_27 != n_27)))
                            _fail(n_27);
                          else
                            a_27 = n_27;
                          t = not_null(a_27);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = pat_td_1(t, c_1);
              {
                o_27 = t;
                if(((b_27 != NULL) && (b_27 != o_27)))
                  _fail(o_27);
                else
                  b_27 = o_27;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_27));
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm t_27 = NULL,u_27 = NULL,n_28 = NULL;
              ATerm t_28 = NULL;
              t = not_null(y_26);
              {
                ATerm d_1 (ATerm t)
                {
                  ATerm o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL;
                  o_28 = t;
                  t_26 :
                  if(match_cons(o_28, sym_App_2))
                    {
                      p_28 = ATgetArgument(o_28, 0);
                      s_28 = ATgetArgument(o_28, 1);
                      u_26 :
                      if(match_cons(p_28, sym_Build_1))
                        {
                          r_28 = ATgetArgument(p_28, 0);
                          {
                            if(((u_27 != NULL) && (u_27 != r_28)))
                              _fail(r_28);
                            else
                              u_27 = r_28;
                            {
                              if(((t_27 != NULL) && (t_27 != s_28)))
                                _fail(s_28);
                              else
                                t_27 = s_28;
                              t = not_null(u_27);
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
                t = pat_td_1(t, d_1);
                {
                  t_28 = t;
                  if(((n_28 != NULL) && (n_28 != t_28)))
                    _fail(t_28);
                  else
                    n_28 = t_28;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_28));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,e_30 = NULL;
  b_30 = t;
  t_29 :
  if(match_cons(b_30, sym_InfixApp_3))
    {
      e_30 = ATgetArgument(b_30, 0);
      y_29 = ATgetArgument(b_30, 1);
      x_29 = ATgetArgument(b_30, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_29), (ATerm) ATmakeAppl(sym_Op_2, term_q_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_29)), not_null(e_30))));
    }
  else
    {
      if(match_cons(b_30, sym_BAM_3))
        {
          e_30 = ATgetArgument(b_30, 0);
          y_29 = ATgetArgument(b_30, 1);
          x_29 = ATgetArgument(b_30, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(x_29))), not_null(e_30)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_29))));
        }
      else
        {
          if(match_cons(b_30, sym_AM_2))
            {
              e_30 = ATgetArgument(b_30, 0);
              y_29 = ATgetArgument(b_30, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_30), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_29)));
            }
          else
            {
              if(match_cons(b_30, sym_MA_2))
                {
                  e_30 = ATgetArgument(b_30, 0);
                  y_29 = ATgetArgument(b_30, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_30)), not_null(y_29));
                }
              else
                {
                  if(match_cons(b_30, sym_BA_2))
                    {
                      e_30 = ATgetArgument(b_30, 0);
                      y_29 = ATgetArgument(b_30, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_29)), not_null(e_30));
                    }
                  else
                    {
                      if(match_cons(b_30, sym_Lets_2))
                        {
                          e_30 = ATgetArgument(b_30, 0);
                          y_29 = ATgetArgument(b_30, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_30), not_null(y_29));
                        }
                      else
                        {
                          if(match_cons(b_30, sym_LChoices_1))
                            {
                              e_30 = ATgetArgument(b_30, 0);
                              u_29 :
                              if(((ATgetType(e_30) == AT_LIST) && ((ATermList) e_30 != ATempty)))
                                {
                                  z_29 = ATgetFirst((ATermList) e_30);
                                  a_30 = (ATerm) ATgetNext((ATermList) e_30);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_29), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_30)));
                                }
                              else
                                {
                                  if(((ATermList) e_30 == ATempty))
                                    {
                                      t = term_u_12;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(b_30, sym_Choices_1))
                                {
                                  e_30 = ATgetArgument(b_30, 0);
                                  v_29 :
                                  if(((ATgetType(e_30) == AT_LIST) && ((ATermList) e_30 != ATempty)))
                                    {
                                      z_29 = ATgetFirst((ATermList) e_30);
                                      a_30 = (ATerm) ATgetNext((ATermList) e_30);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_29), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_30)));
                                    }
                                  else
                                    {
                                      if(((ATermList) e_30 == ATempty))
                                        {
                                          t = term_u_12;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(b_30, sym_Seqs_1))
                                    {
                                      e_30 = ATgetArgument(b_30, 0);
                                      w_29 :
                                      if(((ATgetType(e_30) == AT_LIST) && ((ATermList) e_30 != ATempty)))
                                        {
                                          z_29 = ATgetFirst((ATermList) e_30);
                                          a_30 = (ATerm) ATgetNext((ATermList) e_30);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_29), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_30)));
                                        }
                                      else
                                        {
                                          if(((ATermList) e_30 == ATempty))
                                            {
                                              t = term_v_12;
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
ATerm unzip_1 (ATerm t, ATerm h_73 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, h_73);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  ATerm w_31 (ATerm t)
  {
    ATerm t_31 = NULL;
    ATerm u_31 = NULL;
    t = not_null(q_31);
    {
      ATerm w_12 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        t = w_12;
      {
        t = new_0(t);
        {
          u_31 = t;
          if(((t_31 != NULL) && (t_31 != u_31)))
            _fail(u_31);
          else
            t_31 = u_31;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(t_31)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_31)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_31))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_31))));
    return(t);
  }
  ATerm x_31 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_v_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_31))));
    return(t);
  }
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym_Var_1))
    {
      r_31 = ATgetArgument(q_31, 0);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_31(t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            t = x_31(t);
          }
      }
    }
  else
    t = w_31(t);
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Prim_2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
        ATerm n_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
        t = not_null(h_32);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm z_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              t = z_12;
            return(t);
          }
          t = fetch_1(t, e_1);
          {
            t = not_null(h_32);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm f_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, f_1);
                {
                  n_32 = t;
                  b_32 :
                  if(match_cons(n_32, sym__2))
                    {
                      q_32 = ATgetArgument(n_32, 0);
                      r_32 = ATgetArgument(n_32, 1);
                      d_32 :
                      if(match_cons(r_32, sym__2))
                        {
                          s_32 = ATgetArgument(r_32, 0);
                          t_32 = ATgetArgument(r_32, 1);
                          {
                            if(((k_32 != NULL) && (k_32 != q_32)))
                              _fail(q_32);
                            else
                              k_32 = q_32;
                            {
                              if(((l_32 != NULL) && (l_32 != s_32)))
                                _fail(s_32);
                              else
                                l_32 = s_32;
                              if(((m_32 != NULL) && (m_32 != t_32)))
                                _fail(t_32);
                              else
                                m_32 = t_32;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_32)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_32), not_null(m_32))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  w_32 :
  if(!(match_cons(x_32, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm a_13 = t;
  if((PushChoice() == 0))
    {
      ATerm g_1 (ATerm t)
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, g_1);
      PopChoice();
      _fail(t);
    }
  else
    t = a_13;
  return(t);
}
ATerm App_2 (ATerm t, ATerm x_53 (ATerm), ATerm y_53 (ATerm))
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym_App_2))
    {
      d_33 = ATgetArgument(c_33, 0);
      e_33 = ATgetArgument(c_33, 1);
      {
        ATerm h_33 = NULL;
        t = not_null(d_33);
        {
          ATerm j_33 = NULL;
          t = x_53(t);
          {
            h_33 = t;
            {
              t = not_null(e_33);
              {
                t = y_53(t);
                {
                  j_33 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(h_33), not_null(j_33));
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
ATerm Con_3 (ATerm t, ATerm u_53 (ATerm), ATerm v_53 (ATerm), ATerm w_53 (ATerm))
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym_Con_3))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      w_33 = ATgetArgument(t_33, 2);
      {
        ATerm a_34 = NULL;
        t = not_null(u_33);
        {
          ATerm c_34 = NULL;
          t = u_53(t);
          {
            a_34 = t;
            {
              t = not_null(v_33);
              {
                ATerm e_34 = NULL;
                t = v_53(t);
                {
                  c_34 = t;
                  {
                    t = not_null(w_33);
                    {
                      t = w_53(t);
                      {
                        e_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(a_34), not_null(c_34), not_null(e_34));
                      }
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
  ATerm d_13 = t;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, h_1);
      PopChoice();
      _fail(t);
    }
  else
    t = d_13;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
  o_34 = t;
  m_34 :
  if(match_cons(o_34, sym_SRule_1))
    {
      p_34 = ATgetArgument(o_34, 0);
      n_34 :
      if(match_cons(p_34, sym_StratRule_3))
        {
          q_34 = ATgetArgument(p_34, 0);
          r_34 = ATgetArgument(p_34, 1);
          s_34 = ATgetArgument(p_34, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_34)), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_34))), not_null(q_34)));
        }
      else
        {
          if(match_cons(p_34, sym_Rule_3))
            {
              q_34 = ATgetArgument(p_34, 0);
              r_34 = ATgetArgument(p_34, 1);
              s_34 = ATgetArgument(p_34, 2);
              {
                t = not_null(q_34);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(r_34);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(r_34))), (ATerm) ATmakeAppl(sym_Where_1, not_null(s_34))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_34))));
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
ATerm oncetd_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm b_35 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_78(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = _one(t, b_35);
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  q_35 = t;
  o_35 :
  if(match_cons(q_35, sym_SRule_1))
    {
      r_35 = ATgetArgument(q_35, 0);
      p_35 :
      if(match_cons(r_35, sym_Rule_3))
        {
          s_35 = ATgetArgument(r_35, 0);
          t_35 = ATgetArgument(r_35, 1);
          u_35 = ATgetArgument(r_35, 2);
          {
            ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,k_36 = NULL;
            ATerm l_36 = NULL;
            ATerm r_36 = NULL;
            t = new_0(t);
            {
              l_36 = t;
              {
                if(((d_36 != NULL) && (d_36 != l_36)))
                  _fail(l_36);
                else
                  d_36 = l_36;
                {
                  t = not_null(s_35);
                  {
                    ATerm z_36 = NULL;
                    ATerm i_1 (ATerm t)
                    {
                      ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
                      m_36 = t;
                      f_35 :
                      if(match_cons(m_36, sym_Con_3))
                        {
                          n_36 = ATgetArgument(m_36, 0);
                          p_36 = ATgetArgument(m_36, 1);
                          q_36 = ATgetArgument(m_36, 2);
                          g_35 :
                          if(match_cons(n_36, sym_Var_1))
                            {
                              o_36 = ATgetArgument(n_36, 0);
                              {
                                if(((c_36 != NULL) && (c_36 != o_36)))
                                  _fail(o_36);
                                else
                                  c_36 = o_36;
                                {
                                  if(((a_36 != NULL) && (a_36 != p_36)))
                                    _fail(p_36);
                                  else
                                    a_36 = p_36;
                                  {
                                    if(((y_35 != NULL) && (y_35 != q_36)))
                                      _fail(q_36);
                                    else
                                      y_35 = q_36;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_36));
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
                    t = oncetd_1(t, i_1);
                    {
                      r_36 = t;
                      {
                        if(((e_36 != NULL) && (e_36 != r_36)))
                          _fail(r_36);
                        else
                          e_36 = r_36;
                        {
                          t = not_null(t_35);
                          {
                            ATerm j_1 (ATerm t)
                            {
                              ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
                              s_36 = t;
                              j_35 :
                              if(match_cons(s_36, sym_Con_3))
                                {
                                  t_36 = ATgetArgument(s_36, 0);
                                  v_36 = ATgetArgument(s_36, 1);
                                  w_36 = ATgetArgument(s_36, 2);
                                  k_35 :
                                  if(match_cons(t_36, sym_Var_1))
                                    {
                                      u_36 = ATgetArgument(t_36, 0);
                                      l_35 :
                                      if(match_cons(w_36, sym_Call_2))
                                        {
                                          x_36 = ATgetArgument(w_36, 0);
                                          y_36 = ATgetArgument(w_36, 1);
                                          m_35 :
                                          if(((ATermList) y_36 == ATempty))
                                            {
                                              {
                                                if(((c_36 != NULL) && (c_36 != u_36)))
                                                  _fail(u_36);
                                                else
                                                  c_36 = u_36;
                                                {
                                                  if(((b_36 != NULL) && (b_36 != v_36)))
                                                    _fail(v_36);
                                                  else
                                                    b_36 = v_36;
                                                  {
                                                    if(((z_35 != NULL) && (z_35 != x_36)))
                                                      _fail(x_36);
                                                    else
                                                      z_35 = x_36;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_36));
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
                            t = oncetd_1(t, j_1);
                            {
                              z_36 = t;
                              if(((k_36 != NULL) && (k_36 != z_36)))
                                _fail(z_36);
                              else
                                k_36 = z_36;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_36)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_36), not_null(k_36), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_35), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(z_35), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_36), not_null(b_36), term_v_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_36)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_36)))))));
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
  ATerm k_1 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        {
          ATerm k_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, k_1);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm m_1 (ATerm t)
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  {
                    ATerm q_13 = t;
                    int r_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(r_13);
                      }
                    else
                      {
                        t = q_13;
                        {
                          ATerm s_13 = t;
                          int t_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(t_13);
                            }
                          else
                            {
                              t = s_13;
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
      t = repeat_1(t, m_1);
    }
    return(t);
  }
  t = topdown_1(t, l_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, n_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym_Strategies_1))
    {
      p_37 = ATgetArgument(o_37, 0);
      {
        ATerm r_37 = NULL;
        t = not_null(p_37);
        {
          t = h_55(t);
          {
            r_37 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_37));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm j_55 (ATerm))
{
  ATerm y_37 = NULL,z_37 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym_Specification_1))
    {
      z_37 = ATgetArgument(y_37, 0);
      {
        ATerm b_38 = NULL;
        t = not_null(z_37);
        {
          t = j_55(t);
          {
            b_38 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(b_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm x_58 (ATerm))
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        t = split_2(t, _id, x_58);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm r_38 = NULL,s_38 = NULL,x_38 = NULL,y_38 = NULL,b_39 = NULL,d_39 = NULL;
            r_38 = t;
            k_38 :
            if(match_cons(r_38, sym__2))
              {
                s_38 = ATgetArgument(r_38, 0);
                d_39 = ATgetArgument(r_38, 1);
                l_38 :
                if(match_cons(s_38, sym_SDef_3))
                  {
                    x_38 = ATgetArgument(s_38, 0);
                    y_38 = ATgetArgument(s_38, 1);
                    b_39 = ATgetArgument(s_38, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_39), not_null(y_38), not_null(b_39));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, p_1);
        }
        return(t);
      }
      t = Let_2(t, o_1, _id);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = split_2(t, _id, x_58);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
                  h_39 = t;
                  n_38 :
                  if(match_cons(h_39, sym__2))
                    {
                      i_39 = ATgetArgument(h_39, 0);
                      l_39 = ATgetArgument(h_39, 1);
                      q_38 :
                      if(match_cons(i_39, sym_VarDec_2))
                        {
                          j_39 = ATgetArgument(i_39, 0);
                          k_39 = ATgetArgument(i_39, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(l_39), not_null(k_39));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, r_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, q_1, _id);
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm s_1 (ATerm t)
              {
                t = x_58(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, s_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym_Rec_2))
    {
      w_39 = ATgetArgument(v_39, 0);
      x_39 = ATgetArgument(v_39, 1);
      {
        ATerm a_40 = NULL;
        t = not_null(w_39);
        {
          ATerm c_40 = NULL;
          t = q_56(t);
          {
            a_40 = t;
            {
              t = not_null(x_39);
              {
                t = r_56(t);
                {
                  c_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(a_40), not_null(c_40));
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
ATerm Let_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm p_40 = NULL,y_40 = NULL,z_40 = NULL;
  p_40 = t;
  o_40 :
  if(match_cons(p_40, sym_Let_2))
    {
      y_40 = ATgetArgument(p_40, 0);
      z_40 = ATgetArgument(p_40, 1);
      {
        ATerm c_41 = NULL;
        t = not_null(y_40);
        {
          ATerm e_41 = NULL;
          t = s_56(t);
          {
            c_41 = t;
            {
              t = not_null(z_40);
              {
                t = t_56(t);
                {
                  e_41 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_41), not_null(e_41));
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
ATerm sboundin_3 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm a_59 (ATerm))
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, y_58, y_58);
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, a_59, a_59, y_58);
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
            t = Rec_2(t, a_59, y_58);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_Rec_2))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      t = (ATerm) ATinsert(ATempty, not_null(q_41));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym_SDef_3))
    {
      a_42 = ATgetArgument(z_41, 0);
      b_42 = ATgetArgument(z_41, 1);
      c_42 = ATgetArgument(z_41, 2);
      {
        t = not_null(b_42);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
            g_42 = t;
            x_41 :
            if(match_cons(g_42, sym_VarDec_2))
              {
                h_42 = ATgetArgument(g_42, 0);
                i_42 = ATgetArgument(g_42, 1);
                t = not_null(h_42);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, t_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_Let_2))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      {
        t = not_null(r_42);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
            v_42 = t;
            o_42 :
            if(match_cons(v_42, sym_SDef_3))
              {
                w_42 = ATgetArgument(v_42, 0);
                x_42 = ATgetArgument(v_42, 1);
                y_42 = ATgetArgument(v_42, 2);
                t = not_null(w_42);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, u_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm p_56 (ATerm))
{
  ATerm l_43 = NULL,m_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym_SVar_1))
    {
      m_43 = ATgetArgument(l_43, 0);
      {
        ATerm o_43 = NULL;
        t = not_null(m_43);
        {
          t = p_56(t);
          {
            o_43 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(o_43));
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
  ATerm v_1 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, v_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm r_61 (ATerm, ATerm (ATerm)), ATerm s_61 (ATerm), ATerm t_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm u_61 (ATerm, ATerm (ATerm)))
{
  ATerm w_43 = NULL;
  w_43 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_43), (ATerm) ATempty);
    {
      ATerm j_44 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, r_61);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              {
                t = RnBinding_2(t, s_61, u_61);
                t = DistBinding_2(t, j_44, t_61);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, w_1);
        return(t);
      }
      t = j_44(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm k_44 (ATerm t, ATerm l_44 (ATerm))
  {
    t = Scope_2(t, l_44, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, k_44);
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
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,q_45 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym_SDef_3))
    {
      q_44 = ATgetArgument(p_44, 0);
      r_44 = ATgetArgument(p_44, 1);
      q_45 = ATgetArgument(p_44, 2);
      {
        ATerm k_47 = NULL;
        ATerm l_47 = NULL;
        t = not_null(q_45);
        {
          t = tvars_0(t);
          {
            l_47 = t;
            if(((k_47 != NULL) && (k_47 != l_47)))
              _fail(l_47);
            else
              k_47 = l_47;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_44), not_null(r_44), (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_47), not_null(q_45)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  r_47 = t;
  q_47 :
  if(match_cons(r_47, sym_RDef_3))
    {
      s_47 = ATgetArgument(r_47, 0);
      t_47 = ATgetArgument(r_47, 1);
      u_47 = ATgetArgument(r_47, 2);
      {
        ATerm y_47 = NULL;
        ATerm z_47 = NULL;
        t = not_null(u_47);
        {
          t = tvars_0(t);
          {
            z_47 = t;
            if(((y_47 != NULL) && (y_47 != z_47)))
              _fail(z_47);
            else
              y_47 = z_47;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_47), not_null(t_47), (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_47), (ATerm) ATmakeAppl(sym_SRule_1, not_null(u_47))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_48)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  s_48 = t;
  n_48 :
  if(match_cons(s_48, sym_OpDecl_2))
    {
      t_48 = ATgetArgument(s_48, 0);
      u_48 = ATgetArgument(s_48, 1);
      q_48 :
      if(match_cons(u_48, sym_FunType_2))
        {
          v_48 = ATgetArgument(u_48, 0);
          r_48 = ATgetArgument(u_48, 1);
          {
            ATerm z_48 = NULL,a_49 = NULL,i_49 = NULL;
            ATerm i_14;
            i_14 = t;
            {
              ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
              t = not_null(v_48);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm b_49 = NULL,d_49 = NULL;
                  t = new_0(t);
                  {
                    ATerm j_14;
                    j_14 = t;
                    {
                      ATerm c_49 = NULL;
                      c_49 = t;
                      if(((b_49 != NULL) && (b_49 != c_49)))
                        _fail(c_49);
                      else
                        b_49 = c_49;
                    }
                    t = j_14;
                    {
                      ATerm e_49 = NULL;
                      e_49 = t;
                      if(((d_49 != NULL) && (d_49 != e_49)))
                        _fail(e_49);
                      else
                        d_49 = e_49;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(b_49), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14)), not_null(d_49));
                    }
                  }
                  return(t);
                }
                t = map_1(t, x_1);
                {
                  t = unzip_0(t);
                  {
                    f_49 = t;
                    l_48 :
                    if(match_cons(f_49, sym__2))
                      {
                        g_49 = ATgetArgument(f_49, 0);
                        h_49 = ATgetArgument(f_49, 1);
                        {
                          if(((z_48 != NULL) && (z_48 != g_49)))
                            _fail(g_49);
                          else
                            z_48 = g_49;
                          if(((a_49 != NULL) && (a_49 != h_49)))
                            _fail(h_49);
                          else
                            a_49 = h_49;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = i_14;
            {
              ATerm j_49 = NULL;
              t = not_null(a_49);
              {
                t = map_1(t, MkCall_0);
                {
                  j_49 = t;
                  if(((i_49 != NULL) && (i_49 != j_49)))
                    _fail(j_49);
                  else
                    i_49 = j_49;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_48), not_null(z_48), (ATerm) ATmakeAppl(sym_Cong_2, not_null(t_48), not_null(i_49)));
            }
          }
        }
      else
        {
          if(match_cons(u_48, sym_ConstType_1))
            {
              v_48 = ATgetArgument(u_48, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_48), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(t_48), (ATerm) ATempty));
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
  ATerm v_49 = NULL,w_49 = NULL;
  v_49 = t;
  u_49 :
  if(match_cons(v_49, sym_Constructors_1))
    {
      w_49 = ATgetArgument(v_49, 0);
      {
        t = not_null(w_49);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(v_49, sym_Sorts_1))
        {
          w_49 = ATgetArgument(v_49, 0);
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
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  l_50 = t;
  f_50 :
  if(match_cons(l_50, sym_Specification_1))
    {
      m_50 = ATgetArgument(l_50, 0);
      g_50 :
      if(((ATgetType(m_50) == AT_LIST) && ((ATermList) m_50 != ATempty)))
        {
          n_50 = ATgetFirst((ATermList) m_50);
          p_50 = (ATerm) ATgetNext((ATermList) m_50);
          h_50 :
          if(match_cons(n_50, sym_Signature_1))
            {
              o_50 = ATgetArgument(n_50, 0);
              i_50 :
              if(((ATgetType(p_50) == AT_LIST) && ((ATermList) p_50 != ATempty)))
                {
                  q_50 = ATgetFirst((ATermList) p_50);
                  s_50 = (ATerm) ATgetNext((ATermList) p_50);
                  j_50 :
                  if(match_cons(q_50, sym_Strategies_1))
                    {
                      r_50 = ATgetArgument(q_50, 0);
                      k_50 :
                      if(((ATermList) s_50 == ATempty))
                        {
                          {
                            ATerm v_50 = NULL;
                            ATerm w_50 = NULL,y_50 = NULL,a_51 = NULL;
                            ATerm n_14;
                            n_14 = t;
                            {
                              ATerm x_50 = NULL;
                              t = not_null(o_50);
                              {
                                t = congdefs_0(t);
                                {
                                  x_50 = t;
                                  if(((w_50 != NULL) && (w_50 != x_50)))
                                    _fail(x_50);
                                  else
                                    w_50 = x_50;
                                }
                              }
                            }
                            t = n_14;
                            {
                              ATerm z_50 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(r_50)), (ATerm) ATmakeAppl(sym_RDef_3, term_o_14, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_q_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14))), (ATerm) ATmakeAppl(sym_VarDec_2, term_p_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14))), (ATerm) ATmakeAppl(sym_Rule_3, term_v_14, term_a_15, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_15), term_d_15)))));
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  ATerm q_15 = t;
                                  int r_15 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(r_15);
                                    }
                                  else
                                    {
                                      t = q_15;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, y_1);
                                {
                                  z_50 = t;
                                  if(((y_50 != NULL) && (y_50 != z_50)))
                                    _fail(z_50);
                                  else
                                    y_50 = z_50;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_50), not_null(y_50));
                                {
                                  t = conc_0(t);
                                  {
                                    a_51 = t;
                                    if(((v_50 != NULL) && (v_50 != a_51)))
                                      _fail(a_51);
                                    else
                                      v_50 = a_51;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(v_50))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(o_50))));
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
  ATerm g_51 = NULL;
  g_51 = t;
  t = SSL_int_to_string(not_null(g_51));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym_Op_2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      {
        ATerm u_51 = NULL,v_51 = NULL;
        ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
        t = term_s_15;
        {
          ATerm z_1 (ATerm t)
          {
            t = term_t_15;
            return(t);
          }
          t = rewrite_1(t, z_1);
          {
            w_51 = t;
            m_51 :
            if(match_cons(w_51, sym_Defined_3))
              {
                x_51 = ATgetArgument(w_51, 0);
                y_51 = ATgetArgument(w_51, 1);
                z_51 = ATgetArgument(w_51, 2);
                n_51 :
                if(match_string(x_51, "g_0"))
                  {
                    ATerm a_52 = NULL;
                    if(((v_51 != NULL) && (v_51 != y_51)))
                      _fail(y_51);
                    else
                      v_51 = y_51;
                    {
                      if(((u_51 != NULL) && (u_51 != z_51)))
                        _fail(z_51);
                      else
                        u_51 = z_51;
                      {
                        ATerm b_52 = NULL;
                        t = not_null(r_51);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              b_52 = t;
                              if(((a_52 != NULL) && (a_52 != b_52)))
                                _fail(b_52);
                              else
                                a_52 = b_52;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_16), not_null(a_52)), term_z_15), not_null(q_51)), term_y_15), term_x_15), not_null(v_51)), term_w_15), not_null(u_51)), term_v_15));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_51), not_null(r_51));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  g_52 :
  if(((ATgetType(h_52) == AT_LIST) && ((ATermList) h_52 != ATempty)))
    {
      i_52 = ATgetFirst((ATermList) h_52);
      j_52 = (ATerm) ATgetNext((ATermList) h_52);
      t = not_null(i_52);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  p_52 = t;
  o_52 :
  if(match_cons(p_52, sym__2))
    {
      q_52 = ATgetArgument(p_52, 0);
      r_52 = ATgetArgument(p_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_52), not_null(r_52));
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
ATerm rewrite_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm x_52 = NULL;
  ATerm z_52 = NULL;
  x_52 = t;
  {
    ATerm a_53 = NULL;
    t = term_b_16;
    {
      t = i_65(t);
      {
        a_53 = t;
        if(((z_52 != NULL) && (z_52 != a_53)))
          _fail(a_53);
        else
          z_52 = a_53;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_52), not_null(x_52));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  g_54 = t;
  f_54 :
  if(match_cons(g_54, sym_Op_2))
    {
      h_54 = ATgetArgument(g_54, 0);
      i_54 = ATgetArgument(g_54, 1);
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_54 = NULL;
            ATerm q_54 = NULL;
            t = not_null(i_54);
            {
              l_54 = t;
              {
                t = length_0(t);
                {
                  q_54 = t;
                  {
                    ATerm s_54 = NULL,t_54 = NULL,y_54 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_54), not_null(q_54));
                    {
                      ATerm a_2 (ATerm t)
                      {
                        t = term_e_16;
                        return(t);
                      }
                      t = rewrite_1(t, a_2);
                      {
                        s_54 = t;
                        i_53 :
                        if(match_cons(s_54, sym_Defined_2))
                          {
                            t_54 = ATgetArgument(s_54, 0);
                            y_54 = ATgetArgument(s_54, 1);
                            j_53 :
                            if(match_string(t_54, "b_0"))
                              {
                                if(((h_54 != NULL) && (h_54 != y_54)))
                                  _fail(y_54);
                                else
                                  h_54 = y_54;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_54), not_null(l_54));
                  }
                }
              }
            }
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm g_55 = NULL;
              ATerm k_55 = NULL;
              t = not_null(i_54);
              {
                g_55 = t;
                {
                  t = length_0(t);
                  {
                    k_55 = t;
                    {
                      ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_54), not_null(k_55));
                      {
                        ATerm b_2 (ATerm t)
                        {
                          t = term_e_16;
                          return(t);
                        }
                        t = rewrite_1(t, b_2);
                        {
                          m_55 = t;
                          b_54 :
                          if(match_cons(m_55, sym_Defined_2))
                            {
                              n_55 = ATgetArgument(m_55, 0);
                              o_55 = ATgetArgument(m_55, 1);
                              c_54 :
                              if(match_string(n_55, "a_0"))
                                {
                                  if(((h_54 != NULL) && (h_54 != o_55)))
                                    _fail(o_55);
                                  else
                                    h_54 = o_55;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_54), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm g_80 (ATerm))
{
  ATerm a_56 (ATerm t)
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_80(t);
        {
          ATerm c_2 (ATerm t)
          {
            t = try_1(t, a_56);
            return(t);
          }
          t = _all(t, c_2);
        }
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = _some(t, a_56);
      }
    return(t);
  }
  t = a_56(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym__2))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      {
        ATerm l_16;
        l_16 = t;
        {
          ATerm j_56 = NULL;
          ATerm k_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_56), not_null(g_56));
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = (ATerm) ATempty;
              }
            {
              k_56 = t;
              if(((j_56 != NULL) && (j_56 != k_56)))
                _fail(k_56);
              else
                j_56 = k_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_56), not_null(g_56), not_null(j_56));
            t = table_put_0(t);
          }
        }
        t = l_16;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  ATerm o_16;
  o_16 = t;
  {
    ATerm c_57 = NULL;
    ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
    t = d_65(t);
    {
      c_57 = t;
      {
        if(((a_57 != NULL) && (a_57 != c_57)))
          _fail(c_57);
        else
          a_57 = c_57;
        {
          ATerm p_16 = t;
          int q_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), term_r_16);
              t = table_get_0(t);
              LocalPopChoice(q_16);
            }
          else
            {
              t = p_16;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            d_57 = t;
            y_56 :
            if(((ATgetType(d_57) == AT_LIST) && ((ATermList) d_57 != ATempty)))
              {
                e_57 = ATgetFirst((ATermList) d_57);
                f_57 = (ATerm) ATgetNext((ATermList) d_57);
                {
                  if(((b_57 != NULL) && (b_57 != e_57)))
                    _fail(e_57);
                  else
                    b_57 = e_57;
                  {
                    if(((z_56 != NULL) && (z_56 != f_57)))
                      _fail(f_57);
                    else
                      z_56 = f_57;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(a_57), term_r_16, not_null(z_56));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(b_57);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm g_57 = NULL;
                              g_57 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_57), not_null(g_57));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, d_2);
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
  t = o_16;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm z_81 (ATerm), ATerm a_82 (ATerm))
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_81(t);
      t = a_82(t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        t = a_82(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_65 (ATerm))
{
  ATerm p_57 = NULL;
  ATerm u_16;
  u_16 = t;
  {
    ATerm s_57 = NULL;
    ATerm t_57 = NULL;
    t = c_65(t);
    {
      s_57 = t;
      {
        if(((p_57 != NULL) && (p_57 != s_57)))
          _fail(s_57);
        else
          p_57 = s_57;
        {
          ATerm w_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_57), term_r_16);
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                t = (ATerm) ATempty;
              }
            {
              w_57 = t;
              if(((t_57 != NULL) && (t_57 != w_57)))
                _fail(w_57);
              else
                t_57 = w_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_57), term_r_16, (ATerm) ATinsert(CheckATermList(not_null(t_57)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_16;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm e_65 (ATerm), ATerm f_65 (ATerm))
{
  t = begin_scope_1(t, e_65);
  {
    ATerm e_2 (ATerm t)
    {
      t = end_scope_1(t, e_65);
      return(t);
    }
    t = restore_always_2(t, f_65, e_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm n_58 (ATerm), ATerm o_58 (ATerm))
{
  ATerm f_58 = NULL,g_58 = NULL;
  ATerm f_2 (ATerm t)
  {
    t = term_t_15;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm x_16;
    x_16 = t;
    {
      ATerm h_58 = NULL;
      ATerm i_58 = NULL;
      t = n_58(t);
      {
        h_58 = t;
        {
          if(((f_58 != NULL) && (f_58 != h_58)))
            _fail(h_58);
          else
            f_58 = h_58;
          {
            t = o_58(t);
            {
              i_58 = t;
              if(((g_58 != NULL) && (g_58 != i_58)))
                _fail(i_58);
              else
                g_58 = i_58;
            }
          }
        }
      }
    }
    t = x_16;
    {
      ATerm y_16;
      y_16 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_15, (ATerm) ATmakeAppl(sym_Defined_3, term_z_16, not_null(f_58), not_null(g_58)));
        {
          ATerm h_2 (ATerm t)
          {
            t = term_t_15;
            return(t);
          }
          t = assert_1(t, h_2);
        }
      }
      t = y_16;
      {
        ATerm i_2 (ATerm t)
        {
          ATerm a_17 = t;
          if((PushChoice() == 0))
            {
              t = CheckCons_0(t);
              PopChoice();
              _fail(t);
            }
          else
            t = a_17;
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, i_2);
      }
    }
    return(t);
  }
  t = scope_2(t, f_2, g_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  d_59 = t;
  c_59 :
  if(match_cons(d_59, sym_SDef_3))
    {
      e_59 = ATgetArgument(d_59, 0);
      f_59 = ATgetArgument(d_59, 1);
      g_59 = ATgetArgument(d_59, 2);
      {
        t = not_null(g_59);
        {
          ATerm j_2 (ATerm t)
          {
            t = not_null(e_59);
            return(t);
          }
          ATerm k_2 (ATerm t)
          {
            t = term_b_17;
            return(t);
          }
          t = check_constructors_p__2(t, j_2, k_2);
        }
      }
    }
  else
    {
      if(match_cons(d_59, sym_RDef_3))
        {
          e_59 = ATgetArgument(d_59, 0);
          f_59 = ATgetArgument(d_59, 1);
          g_59 = ATgetArgument(d_59, 2);
          {
            t = not_null(g_59);
            {
              ATerm l_2 (ATerm t)
              {
                t = not_null(e_59);
                return(t);
              }
              ATerm m_2 (ATerm t)
              {
                t = term_c_17;
                return(t);
              }
              t = check_constructors_p__2(t, l_2, m_2);
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm y_59 = NULL,z_59 = NULL,e_60 = NULL;
  y_59 = t;
  x_59 :
  if(match_cons(y_59, sym__2))
    {
      z_59 = ATgetArgument(y_59, 0);
      e_60 = ATgetArgument(y_59, 1);
      {
        ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
        ATerm d_17;
        d_17 = t;
        {
          ATerm k_60 = NULL;
          ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL;
          t = g_65(t);
          {
            k_60 = t;
            {
              if(((h_60 != NULL) && (h_60 != k_60)))
                _fail(k_60);
              else
                h_60 = k_60;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_60), not_null(z_59), not_null(e_60));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_17 = t;
                    int f_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_60), term_r_16);
                        t = table_get_0(t);
                        LocalPopChoice(f_17);
                      }
                    else
                      {
                        t = e_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_60 = t;
                      s_59 :
                      if(((ATgetType(l_60) == AT_LIST) && ((ATermList) l_60 != ATempty)))
                        {
                          m_60 = ATgetFirst((ATermList) l_60);
                          n_60 = (ATerm) ATgetNext((ATermList) l_60);
                          {
                            if(((i_60 != NULL) && (i_60 != m_60)))
                              _fail(m_60);
                            else
                              i_60 = m_60;
                            {
                              if(((j_60 != NULL) && (j_60 != n_60)))
                                _fail(n_60);
                              else
                                j_60 = n_60;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_60), term_r_16, (ATerm) ATinsert(CheckATermList(not_null(j_60)), (ATerm) ATinsert(CheckATermList(not_null(i_60)), not_null(z_59))));
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
        t = d_17;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  s_60 :
  if(match_cons(t_60, sym__2))
    {
      u_60 = ATgetArgument(t_60, 0);
      v_60 = ATgetArgument(t_60, 1);
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_60), not_null(v_60));
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            t = SSL_addr(not_null(u_60), not_null(v_60));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = term_i_17;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_j_17;
    return(t);
  }
  t = foldr_3(t, n_2, add_0, o_2);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,l_61 = NULL,m_61 = NULL;
  h_61 = t;
  e_61 :
  if(match_cons(h_61, sym_OpDecl_2))
    {
      i_61 = ATgetArgument(h_61, 0);
      l_61 = ATgetArgument(h_61, 1);
      f_61 :
      if(match_cons(l_61, sym_FunType_2))
        {
          m_61 = ATgetArgument(l_61, 0);
          g_61 = ATgetArgument(l_61, 1);
          {
            ATerm o_62 = NULL;
            ATerm k_17;
            k_17 = t;
            {
              ATerm p_62 = NULL;
              t = not_null(m_61);
              {
                t = length_0(t);
                {
                  p_62 = t;
                  if(((o_62 != NULL) && (o_62 != p_62)))
                    _fail(p_62);
                  else
                    o_62 = p_62;
                }
              }
            }
            t = k_17;
            {
              ATerm l_17;
              l_17 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(i_61), not_null(o_62)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, not_null(i_61)));
                {
                  ATerm p_2 (ATerm t)
                  {
                    t = term_e_16;
                    return(t);
                  }
                  t = assert_1(t, p_2);
                }
              }
              t = l_17;
            }
          }
        }
      else
        {
          if(match_cons(l_61, sym_ConstType_1))
            {
              m_61 = ATgetArgument(l_61, 0);
              {
                ATerm s_62 = NULL;
                ATerm n_17;
                n_17 = t;
                {
                  ATerm t_62 = NULL;
                  t = term_i_17;
                  {
                    t_62 = t;
                    if(((s_62 != NULL) && (s_62 != t_62)))
                      _fail(t_62);
                    else
                      s_62 = t_62;
                  }
                }
                t = n_17;
                {
                  ATerm o_17;
                  o_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(i_61), not_null(s_62)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_17, not_null(i_61)));
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = term_e_16;
                        return(t);
                      }
                      t = assert_1(t, q_2);
                    }
                  }
                  t = o_17;
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
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
  q_63 = t;
  b_63 :
  if(match_cons(q_63, sym_Specification_1))
    {
      r_63 = ATgetArgument(q_63, 0);
      c_63 :
      if(((ATgetType(r_63) == AT_LIST) && ((ATermList) r_63 != ATempty)))
        {
          s_63 = ATgetFirst((ATermList) r_63);
          x_63 = (ATerm) ATgetNext((ATermList) r_63);
          d_63 :
          if(match_cons(s_63, sym_Signature_1))
            {
              t_63 = ATgetArgument(s_63, 0);
              k_63 :
              if(((ATgetType(t_63) == AT_LIST) && ((ATermList) t_63 != ATempty)))
                {
                  u_63 = ATgetFirst((ATermList) t_63);
                  w_63 = (ATerm) ATgetNext((ATermList) t_63);
                  l_63 :
                  if(match_cons(u_63, sym_Constructors_1))
                    {
                      v_63 = ATgetArgument(u_63, 0);
                      m_63 :
                      if(((ATermList) w_63 == ATempty))
                        {
                          n_63 :
                          if(((ATgetType(x_63) == AT_LIST) && ((ATermList) x_63 != ATempty)))
                            {
                              y_63 = ATgetFirst((ATermList) x_63);
                              a_64 = (ATerm) ATgetNext((ATermList) x_63);
                              o_63 :
                              if(match_cons(y_63, sym_Strategies_1))
                                {
                                  z_63 = ATgetArgument(y_63, 0);
                                  p_63 :
                                  if(((ATermList) a_64 == ATempty))
                                    {
                                      {
                                        ATerm e_64 = NULL;
                                        ATerm g_64 = NULL;
                                        ATerm h_64 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_63)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), term_r_17), term_r_17), term_r_17), term_r_17), term_r_17))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_17), term_r_17), term_r_17), term_r_17), term_r_17))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_r_17), term_r_17), term_r_17), term_r_17))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_r_17), term_r_17), term_r_17))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_q_11, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_r_17), term_r_17))), term_t_17);
                                        {
                                          g_64 = t;
                                          {
                                            if(((e_64 != NULL) && (e_64 != g_64)))
                                              _fail(g_64);
                                            else
                                              e_64 = g_64;
                                            {
                                              t = not_null(e_64);
                                              {
                                                t = map_1(t, GenerateCheckRule_0);
                                                {
                                                  t = not_null(z_63);
                                                  {
                                                    t = filter_1(t, check_constructors_0);
                                                    {
                                                      h_64 = t;
                                                      a_63 :
                                                      if(((ATermList) h_64 == ATempty))
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
                                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(z_63))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(e_64))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm u_17;
    u_17 = t;
    {
      ATerm v_17 = t;
      if((PushChoice() == 0))
        {
          ATerm q_64 = NULL;
          t = w_59(t);
          {
            q_64 = t;
            m_64 :
            if(((ATermList) q_64 == ATempty))
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
        t = v_17;
    }
    t = u_17;
    {
      ATerm s_2 (ATerm t)
      {
        ATerm t_2 (ATerm t)
        {
          t = ExpOverlay_1(t, w_59);
          return(t);
        }
        t = try_1(t, t_2);
        return(t);
      }
      t = topdown_1(t, s_2);
    }
    return(t);
  }
  t = try_1(t, r_2);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,h_65 = NULL;
  b_65 = t;
  x_64 :
  if(match_cons(b_65, sym_BuildDefault_1))
    {
      h_65 = ATgetArgument(b_65, 0);
      t = term_v_12;
    }
  else
    {
      if(match_cons(b_65, sym_Real_1))
        {
          h_65 = ATgetArgument(b_65, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(h_65)));
        }
      else
        {
          if(match_cons(b_65, sym_Int_1))
            {
              h_65 = ATgetArgument(b_65, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(h_65)));
            }
          else
            {
              if(match_cons(b_65, sym_Str_1))
                {
                  h_65 = ATgetArgument(b_65, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(h_65)));
                }
              else
                {
                  if(match_cons(b_65, sym_Op_2))
                    {
                      h_65 = ATgetArgument(b_65, 0);
                      a_65 = ATgetArgument(b_65, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_65)), not_null(a_65));
                    }
                  else
                    {
                      if(match_cons(b_65, sym_Var_1))
                        {
                          h_65 = ATgetArgument(b_65, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_65)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm x_55 (ATerm), ATerm y_55 (ATerm))
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL;
  a_66 = t;
  z_65 :
  if(match_cons(a_66, sym_Op_2))
    {
      b_66 = ATgetArgument(a_66, 0);
      c_66 = ATgetArgument(a_66, 1);
      {
        ATerm f_66 = NULL;
        t = not_null(b_66);
        {
          ATerm h_66 = NULL;
          t = x_55(t);
          {
            f_66 = t;
            {
              t = not_null(c_66);
              {
                t = y_55(t);
                {
                  h_66 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(f_66), not_null(h_66));
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
  ATerm u_2 (ATerm t)
  {
    ATerm v_2 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, v_2);
    return(t);
  }
  t = try_1(t, u_2);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
  s_66 = t;
  r_66 :
  if(match_cons(s_66, sym_Overlay_3))
    {
      t_66 = ATgetArgument(s_66, 0);
      u_66 = ATgetArgument(s_66, 1);
      v_66 = ATgetArgument(s_66, 2);
      {
        ATerm z_66 = NULL,d_67 = NULL;
        ATerm w_17;
        w_17 = t;
        {
          ATerm c_67 = NULL;
          t = not_null(u_66);
          {
            ATerm w_2 (ATerm t)
            {
              ATerm a_67 = NULL;
              ATerm b_67 = NULL;
              b_67 = t;
              if(((a_67 != NULL) && (a_67 != b_67)))
                _fail(b_67);
              else
                a_67 = b_67;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(a_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14));
              return(t);
            }
            t = map_1(t, w_2);
            {
              c_67 = t;
              if(((z_66 != NULL) && (z_66 != c_67)))
                _fail(c_67);
              else
                z_66 = c_67;
            }
          }
        }
        t = w_17;
        {
          ATerm e_67 = NULL;
          t = not_null(v_66);
          {
            t = trm_to_cong_0(t);
            {
              e_67 = t;
              if(((d_67 != NULL) && (d_67 != e_67)))
                _fail(e_67);
              else
                d_67 = e_67;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_66), not_null(z_66), not_null(d_67));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm t_58 (ATerm))
{
  t = Scope_2(t, t_58, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm m_67 = NULL,n_67 = NULL;
  m_67 = t;
  l_67 :
  if(match_cons(m_67, sym_Var_1))
    {
      n_67 = ATgetArgument(m_67, 0);
      {
        ATerm p_67 = NULL;
        t = not_null(n_67);
        {
          t = t_55(t);
          {
            p_67 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_67));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym__3))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      c_68 = ATgetArgument(z_67, 2);
      {
        t = not_null(a_68);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm g_68 = NULL;
            g_68 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_68), not_null(c_68));
              t = j_61(t);
            }
            return(t);
          }
          ATerm y_2 (ATerm t)
          {
            ATerm i_68 = NULL;
            i_68 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_68), not_null(b_68));
              t = j_61(t);
            }
            return(t);
          }
          t = k_61(t, x_2, y_2, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm, ATerm (ATerm)))
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
  v_68 = t;
  u_68 :
  if(match_cons(v_68, sym__2))
    {
      w_68 = ATgetArgument(v_68, 0);
      x_68 = ATgetArgument(v_68, 1);
      {
        ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,n_69 = NULL;
        ATerm x_17;
        x_17 = t;
        {
          ATerm d_69 = NULL;
          t = not_null(w_68);
          {
            ATerm j_69 = NULL;
            t = p_61(t);
            {
              d_69 = t;
              {
                if(((a_69 != NULL) && (a_69 != d_69)))
                  _fail(d_69);
                else
                  a_69 = d_69;
                {
                  ATerm k_69 = NULL,m_69 = NULL;
                  t = map_1(t, new_0);
                  {
                    j_69 = t;
                    {
                      if(((b_69 != NULL) && (b_69 != j_69)))
                        _fail(j_69);
                      else
                        b_69 = j_69;
                      {
                        ATerm l_69 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_69), not_null(b_69));
                        {
                          t = zip_1(t, _id);
                          {
                            l_69 = t;
                            if(((k_69 != NULL) && (k_69 != l_69)))
                              _fail(l_69);
                            else
                              k_69 = l_69;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(k_69), not_null(x_68));
                          {
                            t = conc_0(t);
                            {
                              m_69 = t;
                              if(((c_69 != NULL) && (c_69 != m_69)))
                                _fail(m_69);
                              else
                                c_69 = m_69;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_17;
        {
          ATerm o_69 = NULL;
          t = not_null(w_68);
          {
            ATerm z_2 (ATerm t)
            {
              t = not_null(b_69);
              return(t);
            }
            t = q_61(t, z_2);
            {
              o_69 = t;
              if(((n_69 != NULL) && (n_69 != o_69)))
                _fail(o_69);
              else
                n_69 = o_69;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(n_69), not_null(x_68), not_null(c_69));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm b_70 = NULL;
  ATerm e_70 = NULL,f_70 = NULL;
  b_70 = t;
  {
    ATerm g_70 = NULL;
    ATerm j_70 = NULL,k_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
    t = not_null(b_70);
    {
      g_70 = t;
      {
        t = SSL_explode_term(not_null(g_70));
        {
          j_70 = t;
          y_69 :
          if(match_cons(j_70, sym__2))
            {
              k_70 = ATgetArgument(j_70, 0);
              n_70 = ATgetArgument(j_70, 1);
              z_69 :
              if(match_string(k_70, ""))
                {
                  a_70 :
                  if(((ATgetType(n_70) == AT_LIST) && ((ATermList) n_70 != ATempty)))
                    {
                      o_70 = ATgetFirst((ATermList) n_70);
                      p_70 = (ATerm) ATgetNext((ATermList) n_70);
                      {
                        if(((f_70 != NULL) && (f_70 != o_70)))
                          _fail(o_70);
                        else
                          f_70 = o_70;
                        if(((e_70 != NULL) && (e_70 != p_70)))
                          _fail(p_70);
                        else
                          e_70 = p_70;
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
    t = not_null(f_70);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm d_61 (ATerm, ATerm (ATerm)))
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  z_70 = t;
  y_70 :
  if(match_cons(z_70, sym__2))
    {
      a_71 = ATgetArgument(z_70, 0);
      b_71 = ATgetArgument(z_70, 1);
      {
        t = not_null(a_71);
        {
          ATerm a_3 (ATerm t)
          {
            ATerm b_3 (ATerm t)
            {
              t = not_null(b_71);
              return(t);
            }
            t = split_2(t, _id, b_3);
            t = lookup_0(t);
            return(t);
          }
          t = d_61(t, a_3);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm d_76 (ATerm))
{
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
  i_71 = t;
  h_71 :
  if(match_cons(i_71, sym__2))
    {
      j_71 = ATgetArgument(i_71, 0);
      k_71 = ATgetArgument(i_71, 1);
      {
        t = not_null(j_71);
        {
          ATerm c_3 (ATerm t)
          {
            ATerm n_71 = NULL;
            n_71 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_71), not_null(k_71));
              t = d_76(t);
            }
            return(t);
          }
          t = _all(t, c_3);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm r_71 (ATerm t)
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_76(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = all_dist_1(t, r_71);
      }
    return(t);
  }
  t = r_71(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm b_62 (ATerm), ATerm c_62 (ATerm, ATerm (ATerm)), ATerm d_62 (ATerm), ATerm e_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm f_62 (ATerm, ATerm (ATerm)), ATerm g_62 (ATerm))
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL;
  t = subs_args_0(t);
  {
    u_71 = t;
    t_71 :
    if(match_cons(u_71, sym__2))
      {
        v_71 = ATgetArgument(u_71, 0);
        w_71 = ATgetArgument(u_71, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_71), (ATerm) ATempty);
          {
            ATerm a_72 (ATerm t)
            {
              ATerm d_3 (ATerm t)
              {
                ATerm a_18 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, c_62);
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = a_18;
                    {
                      ATerm c_18 = t;
                      int d_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm e_3 (ATerm t)
                            {
                              t = not_null(v_71);
                              return(t);
                            }
                            t = SubsVar_2(t, b_62, e_3);
                            t = g_62(t);
                          }
                          LocalPopChoice(d_18);
                        }
                      else
                        {
                          t = c_18;
                          {
                            t = RnBinding_2(t, d_62, f_62);
                            t = DistBinding_2(t, a_72, e_62);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, d_3);
              return(t);
            }
            t = a_72(t);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_5 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm, ATerm (ATerm)), ATerm k_62 (ATerm), ATerm l_62 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_62 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, i_62, j_62, k_62, l_62, m_62, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm b_72 (ATerm t, ATerm c_72 (ATerm))
  {
    t = Scope_2(t, c_72, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, b_72);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm u_59 (ATerm))
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  j_72 :
  if(match_cons(k_72, sym_Op_2))
    {
      l_72 = ATgetArgument(k_72, 0);
      m_72 = ATgetArgument(k_72, 1);
      {
        ATerm p_72 = NULL,q_72 = NULL;
        t = u_59(t);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm e_18;
            e_18 = t;
            {
              ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
              r_72 = t;
              i_72 :
              if(match_cons(r_72, sym_Overlay_3))
                {
                  s_72 = ATgetArgument(r_72, 0);
                  t_72 = ATgetArgument(r_72, 1);
                  u_72 = ATgetArgument(r_72, 2);
                  {
                    ATerm w_72 = NULL,d_73 = NULL,e_73 = NULL,g_73 = NULL;
                    if(((l_72 != NULL) && (l_72 != s_72)))
                      _fail(s_72);
                    else
                      l_72 = s_72;
                    {
                      if(((w_72 != NULL) && (w_72 != t_72)))
                        _fail(t_72);
                      else
                        w_72 = t_72;
                      {
                        if(((d_73 != NULL) && (d_73 != u_72)))
                          _fail(u_72);
                        else
                          d_73 = u_72;
                        {
                          ATerm f_18;
                          f_18 = t;
                          {
                            ATerm f_73 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_72), not_null(m_72));
                            {
                              t = zip_1(t, _id);
                              {
                                f_73 = t;
                                if(((e_73 != NULL) && (e_73 != f_73)))
                                  _fail(f_73);
                                else
                                  e_73 = f_73;
                              }
                            }
                          }
                          t = f_18;
                          {
                            ATerm i_73 = NULL;
                            t = not_null(e_73);
                            {
                              g_73 = t;
                              {
                                if(((p_72 != NULL) && (p_72 != g_73)))
                                  _fail(g_73);
                                else
                                  p_72 = g_73;
                                {
                                  t = not_null(d_73);
                                  {
                                    i_73 = t;
                                    {
                                      if(((q_72 != NULL) && (q_72 != i_73)))
                                        _fail(i_73);
                                      else
                                        q_72 = i_73;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_73), not_null(d_73));
                                    }
                                  }
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
            t = e_18;
            return(t);
          }
          t = fetch_1(t, f_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_72), not_null(q_72));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm g_3 (ATerm t)
  {
    ATerm g_18;
    g_18 = t;
    {
      ATerm h_18 = t;
      if((PushChoice() == 0))
        {
          ATerm p_73 = NULL;
          t = v_59(t);
          {
            p_73 = t;
            o_73 :
            if(((ATermList) p_73 == ATempty))
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
        t = h_18;
    }
    t = g_18;
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = ExpOverlay_1(t, v_59);
          return(t);
        }
        t = repeat_1(t, i_3);
        return(t);
      }
      t = topdown_1(t, h_3);
    }
    return(t);
  }
  t = try_1(t, g_3);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
  d_74 = t;
  v_73 :
  if(match_cons(d_74, sym_Specification_1))
    {
      e_74 = ATgetArgument(d_74, 0);
      w_73 :
      if(((ATgetType(e_74) == AT_LIST) && ((ATermList) e_74 != ATempty)))
        {
          f_74 = ATgetFirst((ATermList) e_74);
          h_74 = (ATerm) ATgetNext((ATermList) e_74);
          x_73 :
          if(match_cons(f_74, sym_Signature_1))
            {
              g_74 = ATgetArgument(f_74, 0);
              y_73 :
              if(((ATgetType(h_74) == AT_LIST) && ((ATermList) h_74 != ATempty)))
                {
                  i_74 = ATgetFirst((ATermList) h_74);
                  m_74 = (ATerm) ATgetNext((ATermList) h_74);
                  z_73 :
                  if(match_cons(i_74, sym_Overlays_1))
                    {
                      j_74 = ATgetArgument(i_74, 0);
                      a_74 :
                      if(((ATgetType(m_74) == AT_LIST) && ((ATermList) m_74 != ATempty)))
                        {
                          n_74 = ATgetFirst((ATermList) m_74);
                          p_74 = (ATerm) ATgetNext((ATermList) m_74);
                          b_74 :
                          if(match_cons(n_74, sym_Strategies_1))
                            {
                              o_74 = ATgetArgument(n_74, 0);
                              c_74 :
                              if(((ATermList) p_74 == ATempty))
                                {
                                  {
                                    ATerm v_74 = NULL,x_74 = NULL;
                                    ATerm i_18;
                                    i_18 = t;
                                    {
                                      ATerm w_74 = NULL;
                                      t = not_null(j_74);
                                      {
                                        ATerm j_3 (ATerm t)
                                        {
                                          t = not_null(j_74);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, j_3);
                                        {
                                          w_74 = t;
                                          if(((v_74 != NULL) && (v_74 != w_74)))
                                            _fail(w_74);
                                          else
                                            v_74 = w_74;
                                        }
                                      }
                                    }
                                    t = i_18;
                                    {
                                      ATerm a_75 = NULL,c_75 = NULL,e_75 = NULL;
                                      ATerm j_18;
                                      j_18 = t;
                                      {
                                        ATerm b_75 = NULL;
                                        t = not_null(j_74);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            b_75 = t;
                                            if(((a_75 != NULL) && (a_75 != b_75)))
                                              _fail(b_75);
                                            else
                                              a_75 = b_75;
                                          }
                                        }
                                      }
                                      t = j_18;
                                      {
                                        ATerm d_75 = NULL;
                                        t = not_null(o_74);
                                        {
                                          ATerm k_3 (ATerm t)
                                          {
                                            t = not_null(v_74);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, k_3);
                                          {
                                            d_75 = t;
                                            if(((c_75 != NULL) && (c_75 != d_75)))
                                              _fail(d_75);
                                            else
                                              c_75 = d_75;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), not_null(c_75));
                                          {
                                            t = conc_0(t);
                                            {
                                              e_75 = t;
                                              if(((x_74 != NULL) && (x_74 != e_75)))
                                                _fail(e_75);
                                              else
                                                x_74 = e_75;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(x_74))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(g_74))));
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
  ATerm k_18;
  k_18 = t;
  {
    ATerm l_75 = NULL;
    ATerm o_75 = NULL;
    o_75 = t;
    if(((l_75 != NULL) && (l_75 != o_75)))
      _fail(o_75);
    else
      l_75 = o_75;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_15, not_null(l_75));
      t = printnl_0(t);
    }
  }
  t = k_18;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm l_18;
  l_18 = t;
  {
    t = error_0(t);
    {
      t = term_j_17;
      t = exit_0(t);
    }
  }
  t = l_18;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
  u_75 = t;
  t_75 :
  if(match_cons(u_75, sym__3))
    {
      v_75 = ATgetArgument(u_75, 0);
      w_75 = ATgetArgument(u_75, 1);
      x_75 = ATgetArgument(u_75, 2);
      {
        ATerm c_76 = NULL,g_76 = NULL;
        ATerm q_18;
        q_18 = t;
        {
          ATerm f_76 = NULL;
          t = not_null(v_75);
          {
            t = MsgU_0(t);
            {
              f_76 = t;
              if(((c_76 != NULL) && (c_76 != f_76)))
                _fail(f_76);
              else
                c_76 = f_76;
            }
          }
        }
        t = q_18;
        {
          ATerm h_76 = NULL;
          t = not_null(x_75);
          {
            t = MsgE_0(t);
            {
              h_76 = t;
              if(((g_76 != NULL) && (g_76 != h_76)))
                _fail(h_76);
              else
                g_76 = h_76;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_76)), not_null(c_76));
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
  ATerm s_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL;
  y_76 = t;
  q_76 :
  if(((ATgetType(y_76) == AT_LIST) && ((ATermList) y_76 != ATempty)))
    {
      w_76 = ATgetFirst((ATermList) y_76);
      x_76 = (ATerm) ATgetNext((ATermList) y_76);
      r_76 :
      if(((ATgetType(x_76) == AT_LIST) && ((ATermList) x_76 != ATempty)))
        {
          s_76 = ATgetFirst((ATermList) x_76);
          v_76 = (ATerm) ATgetNext((ATermList) x_76);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_18), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_76)), not_null(s_76)), not_null(w_76))), term_r_18);
        }
      else
        {
          if(((ATermList) x_76 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_18), not_null(w_76)), term_t_18);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) y_76 == ATempty))
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
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL;
  t_77 = t;
  n_77 :
  if(((ATgetType(t_77) == AT_LIST) && ((ATermList) t_77 != ATempty)))
    {
      r_77 = ATgetFirst((ATermList) t_77);
      s_77 = (ATerm) ATgetNext((ATermList) t_77);
      o_77 :
      if(((ATgetType(s_77) == AT_LIST) && ((ATermList) s_77 != ATempty)))
        {
          p_77 = ATgetFirst((ATermList) s_77);
          q_77 = (ATerm) ATgetNext((ATermList) s_77);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_18), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_77)), not_null(p_77)), not_null(r_77))), term_r_18);
        }
      else
        {
          if(((ATermList) s_77 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_18), not_null(r_77)), term_t_18);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) t_77 == ATempty))
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
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL;
  f_78 = t;
  e_78 :
  if(match_cons(f_78, sym__3))
    {
      g_78 = ATgetArgument(f_78, 0);
      h_78 = ATgetArgument(f_78, 1);
      i_78 = ATgetArgument(f_78, 2);
      {
        ATerm m_78 = NULL,o_78 = NULL;
        ATerm v_18;
        v_18 = t;
        {
          ATerm n_78 = NULL;
          t = not_null(g_78);
          {
            t = MsgU_0(t);
            {
              n_78 = t;
              if(((m_78 != NULL) && (m_78 != n_78)))
                _fail(n_78);
              else
                m_78 = n_78;
            }
          }
        }
        t = v_18;
        {
          ATerm p_78 = NULL;
          t = not_null(i_78);
          {
            t = MsgE_0(t);
            {
              p_78 = t;
              if(((o_78 != NULL) && (o_78 != p_78)))
                _fail(p_78);
              else
                o_78 = p_78;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_78)), not_null(m_78));
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
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL;
  c_79 = t;
  b_79 :
  if(match_cons(c_79, sym_Overlay_3))
    {
      d_79 = ATgetArgument(c_79, 0);
      e_79 = ATgetArgument(c_79, 1);
      f_79 = ATgetArgument(c_79, 2);
      {
        ATerm j_79 = NULL;
        ATerm k_79 = NULL;
        t = not_null(f_79);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              k_79 = t;
              if(((j_79 != NULL) && (j_79 != k_79)))
                _fail(k_79);
              else
                j_79 = k_79;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_79)), term_x_18), not_null(d_79)), term_w_18);
      }
    }
  else
    {
      if(match_cons(c_79, sym_SDef_3))
        {
          d_79 = ATgetArgument(c_79, 0);
          e_79 = ATgetArgument(c_79, 1);
          f_79 = ATgetArgument(c_79, 2);
          {
            ATerm q_79 = NULL;
            ATerm r_79 = NULL;
            t = not_null(f_79);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  r_79 = t;
                  if(((q_79 != NULL) && (q_79 != r_79)))
                    _fail(r_79);
                  else
                    q_79 = r_79;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_79)), term_x_18), not_null(d_79)), term_y_18);
          }
        }
      else
        {
          if(match_cons(c_79, sym_RDef_3))
            {
              d_79 = ATgetArgument(c_79, 0);
              e_79 = ATgetArgument(c_79, 1);
              f_79 = ATgetArgument(c_79, 2);
              {
                ATerm v_79 = NULL;
                ATerm w_79 = NULL;
                t = not_null(f_79);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      w_79 = t;
                      if(((v_79 != NULL) && (v_79 != w_79)))
                        _fail(w_79);
                      else
                        v_79 = w_79;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_79)), term_x_18), not_null(d_79)), term_z_18);
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
ATerm _3 (ATerm t, ATerm h_47 (ATerm), ATerm i_47 (ATerm), ATerm j_47 (ATerm))
{
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL;
  k_80 = t;
  j_80 :
  if(match_cons(k_80, sym__3))
    {
      l_80 = ATgetArgument(k_80, 0);
      m_80 = ATgetArgument(k_80, 1);
      n_80 = ATgetArgument(k_80, 2);
      {
        ATerm v_80 = NULL;
        t = not_null(l_80);
        {
          ATerm x_80 = NULL;
          t = h_47(t);
          {
            v_80 = t;
            {
              t = not_null(m_80);
              {
                ATerm z_80 = NULL;
                t = i_47(t);
                {
                  x_80 = t;
                  {
                    t = not_null(n_80);
                    {
                      t = j_47(t);
                      {
                        z_80 = t;
                        t = (ATerm) ATmakeAppl(sym__3, not_null(v_80), not_null(x_80), not_null(z_80));
                      }
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
ATerm Overlay_3 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm), ATerm d_55 (ATerm))
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  r_81 = t;
  q_81 :
  if(match_cons(r_81, sym_Overlay_3))
    {
      s_81 = ATgetArgument(r_81, 0);
      t_81 = ATgetArgument(r_81, 1);
      u_81 = ATgetArgument(r_81, 2);
      {
        ATerm y_81 = NULL;
        t = not_null(s_81);
        {
          ATerm e_82 = NULL;
          t = b_55(t);
          {
            y_81 = t;
            {
              t = not_null(t_81);
              {
                ATerm g_82 = NULL;
                t = c_55(t);
                {
                  e_82 = t;
                  {
                    t = not_null(u_81);
                    {
                      t = d_55(t);
                      {
                        g_82 = t;
                        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(y_81), not_null(e_82), not_null(g_82));
                      }
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
  ATerm t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL;
  t_82 = t;
  q_82 :
  if(match_cons(t_82, sym__2))
    {
      u_82 = ATgetArgument(t_82, 0);
      y_82 = ATgetArgument(t_82, 1);
      r_82 :
      if(match_cons(u_82, sym__3))
        {
          v_82 = ATgetArgument(u_82, 0);
          w_82 = ATgetArgument(u_82, 1);
          x_82 = ATgetArgument(u_82, 2);
          s_82 :
          if(match_cons(y_82, sym__3))
            {
              z_82 = ATgetArgument(y_82, 0);
              a_83 = ATgetArgument(y_82, 1);
              b_83 = ATgetArgument(y_82, 2);
              {
                ATerm i_83 = NULL,k_83 = NULL,m_83 = NULL;
                ATerm a_19;
                a_19 = t;
                {
                  ATerm j_83 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_82), not_null(z_82));
                  {
                    t = union_0(t);
                    {
                      j_83 = t;
                      if(((i_83 != NULL) && (i_83 != j_83)))
                        _fail(j_83);
                      else
                        i_83 = j_83;
                    }
                  }
                }
                t = a_19;
                {
                  ATerm b_19;
                  b_19 = t;
                  {
                    ATerm l_83 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_82), not_null(a_83));
                    {
                      t = union_0(t);
                      {
                        l_83 = t;
                        if(((k_83 != NULL) && (k_83 != l_83)))
                          _fail(l_83);
                        else
                          k_83 = l_83;
                      }
                    }
                  }
                  t = b_19;
                  {
                    ATerm n_83 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_82), not_null(b_83));
                    {
                      t = union_0(t);
                      {
                        n_83 = t;
                        if(((m_83 != NULL) && (m_83 != n_83)))
                          _fail(n_83);
                        else
                          m_83 = n_83;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(i_83), not_null(k_83), not_null(m_83));
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
  ATerm z_83 = NULL;
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL;
  z_83 = t;
  {
    ATerm e_84 = NULL;
    ATerm g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL;
    t = not_null(z_83);
    {
      e_84 = t;
      {
        t = SSL_explode_term(not_null(e_84));
        {
          g_84 = t;
          v_83 :
          if(match_cons(g_84, sym__2))
            {
              h_84 = ATgetArgument(g_84, 0);
              i_84 = ATgetArgument(g_84, 1);
              w_83 :
              if(match_string(h_84, ""))
                {
                  x_83 :
                  if(((ATgetType(i_84) == AT_LIST) && ((ATermList) i_84 != ATempty)))
                    {
                      j_84 = ATgetFirst((ATermList) i_84);
                      k_84 = (ATerm) ATgetNext((ATermList) i_84);
                      y_83 :
                      if(((ATgetType(k_84) == AT_LIST) && ((ATermList) k_84 != ATempty)))
                        {
                          l_84 = ATgetFirst((ATermList) k_84);
                          m_84 = (ATerm) ATgetNext((ATermList) k_84);
                          {
                            if(((b_84 != NULL) && (b_84 != j_84)))
                              _fail(j_84);
                            else
                              b_84 = j_84;
                            {
                              if(((d_84 != NULL) && (d_84 != l_84)))
                                _fail(l_84);
                              else
                                d_84 = l_84;
                              if(((c_84 != NULL) && (c_84 != m_84)))
                                _fail(m_84);
                              else
                                c_84 = m_84;
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
    t = not_null(d_84);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm r_84 = NULL;
  r_84 = t;
  t = SSL_explode_term(not_null(r_84));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm l_3 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_c_19);
        return(t);
      }
      ATerm m_3 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, l_3, m_3);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
  c_85 = t;
  z_84 :
  if(match_cons(c_85, sym__2))
    {
      d_85 = ATgetArgument(c_85, 0);
      h_85 = ATgetArgument(c_85, 1);
      a_85 :
      if(match_cons(d_85, sym__3))
        {
          e_85 = ATgetArgument(d_85, 0);
          f_85 = ATgetArgument(d_85, 1);
          g_85 = ATgetArgument(d_85, 2);
          b_85 :
          if(match_cons(h_85, sym__3))
            {
              i_85 = ATgetArgument(h_85, 0);
              j_85 = ATgetArgument(h_85, 1);
              k_85 = ATgetArgument(h_85, 2);
              {
                ATerm r_85 = NULL,v_85 = NULL,x_85 = NULL;
                ATerm d_19;
                d_19 = t;
                {
                  ATerm s_85 = NULL,u_85 = NULL;
                  ATerm t_85 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_85), not_null(f_85));
                  {
                    t = diff_0(t);
                    {
                      t_85 = t;
                      if(((s_85 != NULL) && (s_85 != t_85)))
                        _fail(t_85);
                      else
                        s_85 = t_85;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_85), not_null(s_85));
                    {
                      t = union_0(t);
                      {
                        u_85 = t;
                        if(((r_85 != NULL) && (r_85 != u_85)))
                          _fail(u_85);
                        else
                          r_85 = u_85;
                      }
                    }
                  }
                }
                t = d_19;
                {
                  ATerm e_19;
                  e_19 = t;
                  {
                    ATerm w_85 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_85), not_null(j_85));
                    {
                      t = union_0(t);
                      {
                        w_85 = t;
                        if(((v_85 != NULL) && (v_85 != w_85)))
                          _fail(w_85);
                        else
                          v_85 = w_85;
                      }
                    }
                  }
                  t = e_19;
                  {
                    ATerm y_85 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_85), not_null(k_85));
                    {
                      t = union_0(t);
                      {
                        y_85 = t;
                        if(((x_85 != NULL) && (x_85 != y_85)))
                          _fail(y_85);
                        else
                          x_85 = y_85;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(r_85), not_null(v_85), not_null(x_85));
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
ATerm cart_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL;
  i_86 = t;
  h_86 :
  if(match_cons(i_86, sym__2))
    {
      j_86 = ATgetArgument(i_86, 0);
      k_86 = ATgetArgument(i_86, 1);
      {
        t = not_null(j_86);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm n_86 = NULL;
            n_86 = t;
            {
              t = not_null(k_86);
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm p_86 = NULL;
                  p_86 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_86), not_null(p_86));
                    t = v_72(t);
                  }
                  return(t);
                }
                t = map_1(t, o_3);
              }
            }
            return(t);
          }
          t = map_1(t, n_3);
          {
            ATerm p_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = foldr_2(t, p_3, union_0);
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
  ATerm q_3 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_c_19);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, q_3, r_3);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL;
  b_87 = t;
  a_87 :
  if(match_cons(b_87, sym__3))
    {
      c_87 = ATgetArgument(b_87, 0);
      d_87 = ATgetArgument(b_87, 1);
      e_87 = ATgetArgument(b_87, 2);
      {
        ATerm i_87 = NULL,m_87 = NULL;
        ATerm f_19;
        f_19 = t;
        {
          ATerm j_87 = NULL,l_87 = NULL;
          ATerm k_87 = NULL;
          t = term_b_16;
          {
            t = q_58(t);
            {
              k_87 = t;
              if(((j_87 != NULL) && (j_87 != k_87)))
                _fail(k_87);
              else
                j_87 = k_87;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_87), not_null(j_87));
            {
              t = diff_0(t);
              {
                l_87 = t;
                if(((i_87 != NULL) && (i_87 != l_87)))
                  _fail(l_87);
                else
                  i_87 = l_87;
              }
            }
          }
        }
        t = f_19;
        {
          ATerm n_87 = NULL,r_87 = NULL;
          ATerm o_87 = NULL,q_87 = NULL;
          ATerm p_87 = NULL;
          t = term_b_16;
          {
            t = q_58(t);
            {
              p_87 = t;
              if(((o_87 != NULL) && (o_87 != p_87)))
                _fail(p_87);
              else
                o_87 = p_87;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_87), not_null(o_87));
            {
              t = isect_0(t);
              {
                q_87 = t;
                if(((n_87 != NULL) && (n_87 != q_87)))
                  _fail(q_87);
                else
                  n_87 = q_87;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_87), not_null(e_87));
            {
              t = conc_0(t);
              {
                r_87 = t;
                if(((m_87 != NULL) && (m_87 != r_87)))
                  _fail(r_87);
                else
                  m_87 = r_87;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(c_87), not_null(i_87), not_null(m_87));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UDjoin_0 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
  n_88 = t;
  k_88 :
  if(match_cons(n_88, sym_Overlay_3))
    {
      o_88 = ATgetArgument(n_88, 0);
      m_88 = ATgetArgument(n_88, 1);
      l_88 = ATgetArgument(n_88, 2);
      {
        ATerm s_88 = NULL;
        ATerm t_88 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_88)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(m_88), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            t_88 = t;
            if(((s_88 != NULL) && (s_88 != t_88)))
              _fail(t_88);
            else
              s_88 = t_88;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(o_88), not_null(m_88), not_null(s_88));
      }
    }
  else
    {
      if(match_cons(n_88, sym_Scope_2))
        {
          o_88 = ATgetArgument(n_88, 0);
          m_88 = ATgetArgument(n_88, 1);
          {
            t = not_null(m_88);
            {
              ATerm s_3 (ATerm t)
              {
                ATerm t_3 (ATerm t)
                {
                  t = not_null(o_88);
                  return(t);
                }
                t = JoinScope_1(t, t_3);
                return(t);
              }
              t = map_1(t, s_3);
            }
          }
        }
      else
        {
          if(match_cons(n_88, sym_Cong_2))
            {
              o_88 = ATgetArgument(n_88, 0);
              m_88 = ATgetArgument(n_88, 1);
              {
                t = not_null(m_88);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(n_88, sym_BAM_3))
                {
                  o_88 = ATgetArgument(n_88, 0);
                  m_88 = ATgetArgument(n_88, 1);
                  l_88 = ATgetArgument(n_88, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_88)), not_null(o_88)), not_null(m_88));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(n_88, sym_BA_2))
                    {
                      o_88 = ATgetArgument(n_88, 0);
                      m_88 = ATgetArgument(n_88, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_88)), not_null(m_88));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(n_88, sym_AM_2))
                        {
                          o_88 = ATgetArgument(n_88, 0);
                          m_88 = ATgetArgument(n_88, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_88)), not_null(o_88));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(n_88, sym_MA_2))
                            {
                              o_88 = ATgetArgument(n_88, 0);
                              m_88 = ATgetArgument(n_88, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_88)), not_null(o_88));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(n_88, sym_StratRule_3))
                                {
                                  o_88 = ATgetArgument(n_88, 0);
                                  m_88 = ATgetArgument(n_88, 1);
                                  l_88 = ATgetArgument(n_88, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_88)), not_null(l_88)), not_null(o_88));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(n_88, sym_Rule_3))
                                    {
                                      o_88 = ATgetArgument(n_88, 0);
                                      m_88 = ATgetArgument(n_88, 1);
                                      l_88 = ATgetArgument(n_88, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_88)), not_null(l_88)), not_null(o_88));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(n_88, sym_Seq_2))
                                        {
                                          o_88 = ATgetArgument(n_88, 0);
                                          m_88 = ATgetArgument(n_88, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_88)), not_null(o_88));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(n_88, sym_Seqs_1))
                                            {
                                              o_88 = ATgetArgument(n_88, 0);
                                              {
                                                t = not_null(o_88);
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
ATerm Cong_2 (ATerm t, ATerm i_57 (ATerm), ATerm j_57 (ATerm))
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
  g_90 = t;
  f_90 :
  if(match_cons(g_90, sym_Cong_2))
    {
      h_90 = ATgetArgument(g_90, 0);
      i_90 = ATgetArgument(g_90, 1);
      {
        ATerm l_90 = NULL;
        t = not_null(h_90);
        {
          ATerm n_90 = NULL;
          t = i_57(t);
          {
            l_90 = t;
            {
              t = not_null(i_90);
              {
                t = j_57(t);
                {
                  n_90 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(l_90), not_null(n_90));
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
  ATerm t_90 = NULL;
  ATerm u_90 = NULL;
  t = tvars_0(t);
  {
    u_90 = t;
    if(((t_90 != NULL) && (t_90 != u_90)))
      _fail(u_90);
    else
      t_90 = u_90;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(t_90), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm x_90 = NULL;
  ATerm y_90 = NULL;
  t = tvars_0(t);
  {
    y_90 = t;
    if(((x_90 != NULL) && (x_90 != y_90)))
      _fail(y_90);
    else
      x_90 = y_90;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(x_90), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm m_54 (ATerm), ATerm n_54 (ATerm), ATerm o_54 (ATerm))
{
  ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL;
  f_91 = t;
  e_91 :
  if(match_cons(f_91, sym_Rule_3))
    {
      g_91 = ATgetArgument(f_91, 0);
      h_91 = ATgetArgument(f_91, 1);
      i_91 = ATgetArgument(f_91, 2);
      {
        ATerm m_91 = NULL;
        t = not_null(g_91);
        {
          ATerm o_91 = NULL;
          t = m_54(t);
          {
            m_91 = t;
            {
              t = not_null(h_91);
              {
                ATerm q_91 = NULL;
                t = n_54(t);
                {
                  o_91 = t;
                  {
                    t = not_null(i_91);
                    {
                      t = o_54(t);
                      {
                        q_91 = t;
                        t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_91), not_null(o_91), not_null(q_91));
                      }
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
ATerm BAM_3 (ATerm t, ATerm r_53 (ATerm), ATerm s_53 (ATerm), ATerm t_53 (ATerm))
{
  ATerm b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL;
  b_92 = t;
  a_92 :
  if(match_cons(b_92, sym_BAM_3))
    {
      c_92 = ATgetArgument(b_92, 0);
      d_92 = ATgetArgument(b_92, 1);
      e_92 = ATgetArgument(b_92, 2);
      {
        ATerm i_92 = NULL;
        t = not_null(c_92);
        {
          ATerm k_92 = NULL;
          t = r_53(t);
          {
            i_92 = t;
            {
              t = not_null(d_92);
              {
                ATerm m_92 = NULL;
                t = s_53(t);
                {
                  k_92 = t;
                  {
                    t = not_null(e_92);
                    {
                      t = t_53(t);
                      {
                        m_92 = t;
                        t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_92), not_null(k_92), not_null(m_92));
                      }
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
ATerm BA_2 (ATerm t, ATerm p_53 (ATerm), ATerm q_53 (ATerm))
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL;
  w_92 = t;
  v_92 :
  if(match_cons(w_92, sym_BA_2))
    {
      x_92 = ATgetArgument(w_92, 0);
      y_92 = ATgetArgument(w_92, 1);
      {
        ATerm b_93 = NULL;
        t = not_null(x_92);
        {
          ATerm d_93 = NULL;
          t = p_53(t);
          {
            b_93 = t;
            {
              t = not_null(y_92);
              {
                t = q_53(t);
                {
                  d_93 = t;
                  t = (ATerm) ATmakeAppl(sym_BA_2, not_null(b_93), not_null(d_93));
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
ATerm AM_2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
  m_93 = t;
  l_93 :
  if(match_cons(m_93, sym_AM_2))
    {
      n_93 = ATgetArgument(m_93, 0);
      o_93 = ATgetArgument(m_93, 1);
      {
        ATerm r_93 = NULL;
        t = not_null(n_93);
        {
          ATerm t_93 = NULL;
          t = n_53(t);
          {
            r_93 = t;
            {
              t = not_null(o_93);
              {
                t = o_53(t);
                {
                  t_93 = t;
                  t = (ATerm) ATmakeAppl(sym_AM_2, not_null(r_93), not_null(t_93));
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
ATerm MA_2 (ATerm t, ATerm l_53 (ATerm), ATerm m_53 (ATerm))
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL;
  c_94 = t;
  b_94 :
  if(match_cons(c_94, sym_MA_2))
    {
      d_94 = ATgetArgument(c_94, 0);
      e_94 = ATgetArgument(c_94, 1);
      {
        ATerm h_94 = NULL;
        t = not_null(d_94);
        {
          ATerm j_94 = NULL;
          t = l_53(t);
          {
            h_94 = t;
            {
              t = not_null(e_94);
              {
                t = m_53(t);
                {
                  j_94 = t;
                  t = (ATerm) ATmakeAppl(sym_MA_2, not_null(h_94), not_null(j_94));
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
ATerm Match_1 (ATerm t, ATerm q_57 (ATerm))
{
  ATerm r_94 = NULL,s_94 = NULL;
  r_94 = t;
  q_94 :
  if(match_cons(r_94, sym_Match_1))
    {
      s_94 = ATgetArgument(r_94, 0);
      {
        ATerm u_94 = NULL;
        t = not_null(s_94);
        {
          t = q_57(t);
          {
            u_94 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_94));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm b_95 = NULL,c_95 = NULL;
  b_95 = t;
  a_95 :
  if(match_cons(b_95, sym_Build_1))
    {
      c_95 = ATgetArgument(b_95, 0);
      {
        ATerm e_95 = NULL;
        t = not_null(c_95);
        {
          t = r_57(t);
          {
            e_95 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_95));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            {
              ATerm l_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, p_58);
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = l_19;
                  {
                    ATerm p_19 = t;
                    int q_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, p_58, def_term_0);
                        LocalPopChoice(q_19);
                      }
                    else
                      {
                        t = p_19;
                        {
                          ATerm r_19 = t;
                          int s_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, p_58, use_term_0);
                              LocalPopChoice(s_19);
                            }
                          else
                            {
                              t = r_19;
                              {
                                ATerm t_19 = t;
                                int u_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, p_58, use_term_0, def_term_0);
                                    LocalPopChoice(u_19);
                                  }
                                else
                                  {
                                    t = t_19;
                                    {
                                      ATerm v_19 = t;
                                      int w_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, p_58);
                                          LocalPopChoice(w_19);
                                        }
                                      else
                                        {
                                          t = v_19;
                                          {
                                            ATerm x_19 = t;
                                            int y_19 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, p_58);
                                                LocalPopChoice(y_19);
                                              }
                                            else
                                              {
                                                t = x_19;
                                                {
                                                  ATerm z_19 = t;
                                                  int a_20 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(a_20);
                                                    }
                                                  else
                                                    {
                                                      t = z_19;
                                                      {
                                                        ATerm u_3 (ATerm t)
                                                        {
                                                          t = map_1(t, p_58);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, u_3);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      t = _all(t, use_def_0);
    }
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm w_54 (ATerm))
{
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL;
  o_95 = t;
  n_95 :
  if(match_cons(o_95, sym_RDef_3))
    {
      p_95 = ATgetArgument(o_95, 0);
      q_95 = ATgetArgument(o_95, 1);
      r_95 = ATgetArgument(o_95, 2);
      {
        ATerm v_95 = NULL;
        t = not_null(p_95);
        {
          ATerm x_95 = NULL;
          t = u_54(t);
          {
            v_95 = t;
            {
              t = not_null(q_95);
              {
                ATerm z_95 = NULL;
                t = v_54(t);
                {
                  x_95 = t;
                  {
                    t = not_null(r_95);
                    {
                      t = w_54(t);
                      {
                        z_95 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(v_95), not_null(x_95), not_null(z_95));
                      }
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
ATerm SDef_3 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL,n_96 = NULL;
  k_96 = t;
  j_96 :
  if(match_cons(k_96, sym_SDef_3))
    {
      l_96 = ATgetArgument(k_96, 0);
      m_96 = ATgetArgument(k_96, 1);
      n_96 = ATgetArgument(k_96, 2);
      {
        ATerm r_96 = NULL;
        t = not_null(l_96);
        {
          ATerm t_96 = NULL;
          t = u_56(t);
          {
            r_96 = t;
            {
              t = not_null(m_96);
              {
                ATerm v_96 = NULL;
                t = v_56(t);
                {
                  t_96 = t;
                  {
                    t = not_null(n_96);
                    {
                      t = w_56(t);
                      {
                        v_96 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_96), not_null(t_96), not_null(v_96));
                      }
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
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm h_20 = t;
          if((PushChoice() == 0))
            {
              ATerm w_3 (ATerm t)
              {
                t = _3(t, Nil_0, _id, Nil_0);
                return(t);
              }
              t = Cons_2(t, w_3, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            t = h_20;
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, v_3);
      t = err_msg_0(t);
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm k_20 = t;
                if((PushChoice() == 0))
                  {
                    ATerm y_3 (ATerm t)
                    {
                      t = _3(t, Nil_0, _id, Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, y_3, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = k_20;
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, x_3);
            t = err_msg_0(t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm l_20 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm z_3 (ATerm t)
                      {
                        ATerm a_4 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, a_4, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, z_3);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    t = l_20;
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
  ATerm c_97 = NULL;
  t = filter_1(t, check_0);
  {
    c_97 = t;
    b_97 :
    if(((ATermList) c_97 == ATempty))
      {
        {
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm f_55 (ATerm))
{
  ATerm g_97 = NULL,h_97 = NULL;
  g_97 = t;
  f_97 :
  if(match_cons(g_97, sym_Overlays_1))
    {
      h_97 = ATgetArgument(g_97, 0);
      {
        ATerm j_97 = NULL;
        t = not_null(h_97);
        {
          t = f_55(t);
          {
            j_97 = t;
            t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(j_97));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm e_55 (ATerm))
{
  ATerm q_97 = NULL,r_97 = NULL;
  q_97 = t;
  p_97 :
  if(match_cons(q_97, sym_Signature_1))
    {
      r_97 = ATgetArgument(q_97, 0);
      {
        ATerm t_97 = NULL;
        t = not_null(r_97);
        {
          t = e_55(t);
          {
            t_97 = t;
            t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(t_97));
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
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm d_4 (ATerm t)
    {
      ATerm e_4 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm f_4 (ATerm t)
      {
        ATerm g_4 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, g_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, e_4, f_4);
      return(t);
    }
    t = Cons_2(t, c_4, d_4);
    return(t);
  }
  t = Specification_1(t, b_4);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL;
  b_98 = t;
  y_97 :
  if(match_cons(b_98, sym__2))
    {
      c_98 = ATgetArgument(b_98, 0);
      f_98 = ATgetArgument(b_98, 1);
      z_97 :
      if(match_cons(c_98, sym__2))
        {
          d_98 = ATgetArgument(c_98, 0);
          e_98 = ATgetArgument(c_98, 1);
          a_98 :
          if(match_cons(f_98, sym__2))
            {
              g_98 = ATgetArgument(f_98, 0);
              h_98 = ATgetArgument(f_98, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_98)), not_null(d_98)), (ATerm) ATinsert(CheckATermList(not_null(h_98)), not_null(e_98)));
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
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL;
  p_98 = t;
  o_98 :
  if(((ATgetType(p_98) == AT_LIST) && ((ATermList) p_98 != ATempty)))
    {
      q_98 = ATgetFirst((ATermList) p_98);
      r_98 = (ATerm) ATgetNext((ATermList) p_98);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_98), not_null(r_98));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm x_98 = NULL;
  x_98 = t;
  w_98 :
  if(((ATermList) x_98 == ATempty))
    {
      t = term_m_20;
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
  ATerm h_4 (ATerm t)
  {
    ATerm a_99 = NULL;
    a_99 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_99));
    return(t);
  }
  t = map_1(t, h_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL;
  f_99 = t;
  e_99 :
  if(((ATgetType(f_99) == AT_LIST) && ((ATermList) f_99 != ATempty)))
    {
      g_99 = ATgetFirst((ATermList) f_99);
      h_99 = (ATerm) ATgetNext((ATermList) f_99);
      t = not_null(h_99);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm n_99 = NULL,o_99 = NULL,p_99 = NULL;
  n_99 = t;
  m_99 :
  if(match_cons(n_99, sym__2))
    {
      o_99 = ATgetArgument(n_99, 0);
      p_99 = ATgetArgument(n_99, 1);
      {
        t = not_null(o_99);
        {
          ATerm t_99 (ATerm t)
          {
            ATerm q_20 = t;
            int r_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(r_20);
              }
            else
              {
                t = q_20;
                {
                  ATerm s_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_20;
                      u_20 = t;
                      {
                        ATerm i_4 (ATerm t)
                        {
                          t = not_null(p_99);
                          return(t);
                        }
                        t = HdMember_1(t, i_4);
                      }
                      t = u_20;
                      t = Cons_2(t, _id, t_99);
                      LocalPopChoice(t_20);
                    }
                  else
                    {
                      t = s_20;
                      {
                        t = Tl_0(t);
                        t = t_99(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = t_99(t);
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
  ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL;
  w_99 = t;
  v_99 :
  if(match_cons(w_99, sym__2))
    {
      x_99 = ATgetArgument(w_99, 0);
      y_99 = ATgetArgument(w_99, 1);
      if(((x_99 != NULL) && (x_99 != y_99)))
        _fail(y_99);
      else
        x_99 = y_99;
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL;
  ATerm l_102 (ATerm t)
  {
    ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL,x_101 = NULL;
    ATerm v_20;
    v_20 = t;
    {
      ATerm m_101 = NULL,o_101 = NULL,q_101 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_101), term_x_20);
      {
        ATerm y_20 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = y_20;
        {
          ATerm z_20;
          z_20 = t;
          {
            ATerm n_101 = NULL;
            t = term_b_16;
            {
              t = p_0(t);
              {
                n_101 = t;
                if(((m_101 != NULL) && (m_101 != n_101)))
                  _fail(n_101);
                else
                  m_101 = n_101;
              }
            }
          }
          t = z_20;
          {
            ATerm p_101 = NULL;
            t = not_null(z_100);
            {
              t = tvars_0(t);
              {
                p_101 = t;
                if(((o_101 != NULL) && (o_101 != p_101)))
                  _fail(p_101);
                else
                  o_101 = p_101;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_101), not_null(o_101));
              {
                t = isect_0(t);
                {
                  ATerm r_101 = NULL,t_101 = NULL,v_101 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    q_101 = t;
                    {
                      if(((j_101 != NULL) && (j_101 != q_101)))
                        _fail(q_101);
                      else
                        j_101 = q_101;
                      {
                        ATerm a_21;
                        a_21 = t;
                        {
                          ATerm s_101 = NULL;
                          t = term_b_16;
                          {
                            t = p_0(t);
                            {
                              s_101 = t;
                              if(((r_101 != NULL) && (r_101 != s_101)))
                                _fail(s_101);
                              else
                                r_101 = s_101;
                            }
                          }
                        }
                        t = a_21;
                        {
                          ATerm u_101 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_101), not_null(d_101));
                          {
                            t = tvars_0(t);
                            {
                              u_101 = t;
                              if(((t_101 != NULL) && (t_101 != u_101)))
                                _fail(u_101);
                              else
                                t_101 = u_101;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_101), not_null(t_101));
                            {
                              t = isect_0(t);
                              {
                                ATerm w_101 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  v_101 = t;
                                  {
                                    if(((k_101 != NULL) && (k_101 != v_101)))
                                      _fail(v_101);
                                    else
                                      k_101 = v_101;
                                    {
                                      t = new_0(t);
                                      {
                                        w_101 = t;
                                        if(((l_101 != NULL) && (l_101 != w_101)))
                                          _fail(w_101);
                                        else
                                          l_101 = w_101;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = v_20;
    {
      ATerm y_101 = NULL;
      t = not_null(w_100);
      {
        t = q_0(t);
        {
          y_101 = t;
          if(((x_101 != NULL) && (x_101 != y_101)))
            _fail(y_101);
          else
            x_101 = y_101;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(x_101), (ATerm) ATmakeAppl(sym_Op_2, term_q_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(CheckATermList(not_null(k_101)), (ATerm) ATmakeAppl(sym_Str_1, not_null(l_101))))), (ATerm) ATmakeAppl(sym_Op_2, term_b_21, not_null(j_101)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(w_100), not_null(x_100), (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_100), not_null(a_101), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(w_100))))), (ATerm)ATmakeAppl(sym_Op_2, term_b_21, not_null(j_101)), (ATerm) ATmakeAppl(sym_Op_2, term_c_21, (ATerm) ATinsert(CheckATermList(not_null(k_101)), (ATerm) ATmakeAppl(sym_Str_1, not_null(l_101))))), not_null(d_101)))));
    }
    return(t);
  }
  ATerm m_102 (ATerm t)
  {
    ATerm d_102 = NULL,j_102 = NULL;
    ATerm f_21;
    f_21 = t;
    {
      ATerm e_102 = NULL,g_102 = NULL,i_102 = NULL;
      ATerm g_21;
      g_21 = t;
      {
        ATerm f_102 = NULL;
        t = term_b_16;
        {
          t = p_0(t);
          {
            f_102 = t;
            if(((e_102 != NULL) && (e_102 != f_102)))
              _fail(f_102);
            else
              e_102 = f_102;
          }
        }
      }
      t = g_21;
      {
        ATerm h_102 = NULL;
        t = not_null(z_100);
        {
          t = tvars_0(t);
          {
            h_102 = t;
            if(((g_102 != NULL) && (g_102 != h_102)))
              _fail(h_102);
            else
              g_102 = h_102;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_102), not_null(g_102));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                i_102 = t;
                if(((d_102 != NULL) && (d_102 != i_102)))
                  _fail(i_102);
                else
                  d_102 = i_102;
              }
            }
          }
        }
      }
    }
    t = f_21;
    {
      ATerm k_102 = NULL;
      t = not_null(w_100);
      {
        t = q_0(t);
        {
          k_102 = t;
          if(((j_102 != NULL) && (j_102 != k_102)))
            _fail(k_102);
          else
            j_102 = k_102;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(j_102), (ATerm) ATmakeAppl(sym_Op_2, term_q_11, (ATerm) ATinsert(ATinsert(ATempty, term_x_20), (ATerm) ATmakeAppl(sym_Op_2, term_b_21, not_null(d_102)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(w_100), not_null(x_100), (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_100), term_h_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_e_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(w_100))))), (ATerm)ATmakeAppl(sym_Op_2, term_b_21, not_null(d_102)), term_x_20), (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_101), term_u_12)))));
    }
    return(t);
  }
  v_100 = t;
  p_100 :
  if(match_cons(v_100, sym_RDef_3))
    {
      w_100 = ATgetArgument(v_100, 0);
      x_100 = ATgetArgument(v_100, 1);
      y_100 = ATgetArgument(v_100, 2);
      q_100 :
      if(match_cons(y_100, sym_Rule_3))
        {
          z_100 = ATgetArgument(y_100, 0);
          a_101 = ATgetArgument(y_100, 1);
          d_101 = ATgetArgument(y_100, 2);
          r_100 :
          if(match_cons(a_101, sym_Op_2))
            {
              b_101 = ATgetArgument(a_101, 0);
              c_101 = ATgetArgument(a_101, 1);
              s_100 :
              if(((ATermList) c_101 == ATempty))
                {
                  t_100 :
                  if(match_string(b_101, "Undefined"))
                    {
                      ATerm i_21 = t;
                      int j_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_102(t);
                          LocalPopChoice(j_21);
                        }
                      else
                        {
                          t = i_21;
                          t = m_102(t);
                        }
                    }
                  else
                    t = l_102(t);
                }
              else
                {
                  u_100 :
                  t = l_102(t);
                }
            }
          else
            t = l_102(t);
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
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL;
  f_103 = t;
  d_103 :
  if(match_cons(f_103, sym__2))
    {
      g_103 = ATgetArgument(f_103, 0);
      i_103 = ATgetArgument(f_103, 1);
      e_103 :
      if(match_cons(g_103, sym_OverrideDynamicRules_1))
        {
          h_103 = ATgetArgument(g_103, 0);
          {
            t = not_null(h_103);
            {
              ATerm j_4 (ATerm t)
              {
                ATerm k_4 (ATerm t)
                {
                  t = not_null(i_103);
                  return(t);
                }
                ATerm l_4 (ATerm t)
                {
                  ATerm l_103 = NULL;
                  l_103 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_103)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, k_4, l_4);
                return(t);
              }
              t = map_1(t, j_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(g_103, sym_DynamicRules_1))
            {
              h_103 = ATgetArgument(g_103, 0);
              {
                t = not_null(h_103);
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm n_4 (ATerm t)
                    {
                      t = not_null(i_103);
                      return(t);
                    }
                    ATerm o_4 (ATerm t)
                    {
                      ATerm p_103 = NULL;
                      p_103 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_n_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_103)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, n_4, o_4);
                    return(t);
                  }
                  t = map_1(t, m_4);
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
ATerm dist_scope_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL;
  a_104 = t;
  y_103 :
  if(match_cons(a_104, sym__2))
    {
      b_104 = ATgetArgument(a_104, 0);
      e_104 = ATgetArgument(a_104, 1);
      z_103 :
      if(match_cons(b_104, sym_Scope_2))
        {
          c_104 = ATgetArgument(b_104, 0);
          d_104 = ATgetArgument(b_104, 1);
          {
            ATerm i_104 = NULL;
            ATerm j_104 = NULL,l_104 = NULL;
            ATerm k_104 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_104), not_null(e_104));
            {
              t = union_0(t);
              {
                k_104 = t;
                if(((j_104 != NULL) && (j_104 != k_104)))
                  _fail(k_104);
                else
                  j_104 = k_104;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_104), not_null(j_104));
              {
                t = c_82(t);
                {
                  l_104 = t;
                  if(((i_104 != NULL) && (i_104 != l_104)))
                    _fail(l_104);
                  else
                    i_104 = l_104;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_104), not_null(i_104));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL;
  s_104 = t;
  r_104 :
  if(match_cons(s_104, sym__2))
    {
      t_104 = ATgetArgument(s_104, 0);
      u_104 = ATgetArgument(s_104, 1);
      {
        t = not_null(t_104);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm x_104 = NULL;
            x_104 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_104), not_null(u_104));
              t = e_76(t);
            }
            return(t);
          }
          t = _one(t, p_4);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm b_105 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_76(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        t = one_dist_1(t, b_105);
      }
    return(t);
  }
  t = b_105(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL;
  i_105 = t;
  h_105 :
  if(((ATgetType(i_105) == AT_LIST) && ((ATermList) i_105 != ATempty)))
    {
      j_105 = ATgetFirst((ATermList) i_105);
      k_105 = (ATerm) ATgetNext((ATermList) i_105);
      {
        ATerm n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
        ATerm r_105 = NULL;
        t = not_null(j_105);
        {
          ATerm w_105 = NULL;
          t = tvars_0(t);
          {
            r_105 = t;
            {
              if(((p_105 != NULL) && (p_105 != r_105)))
                _fail(r_105);
              else
                p_105 = r_105;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_105), not_null(p_105));
                {
                  ATerm z_105 (ATerm t)
                  {
                    ATerm q_4 (ATerm t)
                    {
                      ATerm q_21 = t;
                      int r_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, z_105);
                          LocalPopChoice(r_21);
                        }
                      else
                        {
                          t = q_21;
                          {
                            ATerm s_105 = NULL,t_105 = NULL,v_105 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              s_105 = t;
                              f_105 :
                              if(match_cons(s_105, sym__2))
                                {
                                  t_105 = ATgetArgument(s_105, 0);
                                  v_105 = ATgetArgument(s_105, 1);
                                  {
                                    if(((o_105 != NULL) && (o_105 != t_105)))
                                      _fail(t_105);
                                    else
                                      o_105 = t_105;
                                    {
                                      if(((n_105 != NULL) && (n_105 != v_105)))
                                        _fail(v_105);
                                      else
                                        n_105 = v_105;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(o_105));
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
                    t = env_oncetd_1(t, q_4);
                    return(t);
                  }
                  t = z_105(t);
                  {
                    w_105 = t;
                    if(((q_105 != NULL) && (q_105 != w_105)))
                      _fail(w_105);
                    else
                      q_105 = w_105;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_105)), not_null(q_105)), not_null(k_105));
          t = conc_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm c_106 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_80(t);
        t = c_106(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = q_80(t);
      }
    return(t);
  }
  t = c_106(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm s_80 (ATerm))
{
  t = repeat_2(t, s_80, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm m_75 (ATerm))
{
  ATerm d_106 (ATerm t)
  {
    t = m_75(t);
    {
      ATerm u_21 = t;
      int v_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(v_21);
        }
      else
        {
          t = u_21;
          t = Cons_2(t, _id, d_106);
        }
    }
    return(t);
  }
  t = d_106(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, r_4);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL;
  k_106 = t;
  g_106 :
  if(match_cons(k_106, sym_DynRuleScope_2))
    {
      l_106 = ATgetArgument(k_106, 0);
      m_106 = ATgetArgument(k_106, 1);
      h_106 :
      if(((ATgetType(l_106) == AT_LIST) && ((ATermList) l_106 != ATempty)))
        {
          i_106 = ATgetFirst((ATermList) l_106);
          j_106 = (ATerm) ATgetNext((ATermList) l_106);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(j_106), not_null(m_106))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(i_106)))));
        }
      else
        {
          if(((ATermList) l_106 == ATempty))
            {
              t = not_null(m_106);
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
  ATerm s_4 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, s_4);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm u_4 (ATerm t)
    {
      ATerm v_4 (ATerm t)
      {
        ATerm w_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, x_4);
          return(t);
        }
        t = Cons_2(t, w_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, v_4);
      return(t);
    }
    t = Cons_2(t, _id, u_4);
    return(t);
  }
  t = Specification_1(t, t_4);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm w_106 = NULL,x_106 = NULL;
  w_106 = t;
  v_106 :
  if(match_cons(w_106, sym_ScopeDefault_1))
    {
      x_106 = ATgetArgument(w_106, 0);
      {
        ATerm z_106 = NULL;
        ATerm a_107 = NULL;
        t = not_null(x_106);
        {
          t = tvars_0(t);
          {
            a_107 = t;
            if(((z_106 != NULL) && (z_106 != a_107)))
              _fail(a_107);
            else
              z_106 = a_107;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_106), not_null(x_106));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm x_54 (ATerm))
{
  ATerm g_107 = NULL,h_107 = NULL;
  g_107 = t;
  f_107 :
  if(match_cons(g_107, sym_DynamicRules_1))
    {
      h_107 = ATgetArgument(g_107, 0);
      {
        ATerm k_107 = NULL;
        t = not_null(h_107);
        {
          t = x_54(t);
          {
            k_107 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(k_107));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL;
  s_107 = t;
  r_107 :
  if(match_cons(s_107, sym_Scope_2))
    {
      t_107 = ATgetArgument(s_107, 0);
      u_107 = ATgetArgument(s_107, 1);
      {
        ATerm x_107 = NULL;
        t = not_null(t_107);
        {
          ATerm z_107 = NULL;
          t = u_57(t);
          {
            x_107 = t;
            {
              t = not_null(u_107);
              {
                t = v_57(t);
                {
                  z_107 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_107), not_null(z_107));
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
ATerm tboundin_3 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, w_58, u_58);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      t = DynamicRules_1(t, u_58);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL;
  g_108 = t;
  f_108 :
  if(match_cons(g_108, sym_DynamicRules_1))
    {
      h_108 = ATgetArgument(g_108, 0);
      {
        t = not_null(h_108);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm o_108 = NULL,p_108 = NULL,q_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL;
  s_108 = t;
  m_108 :
  if(match_cons(s_108, sym_LRule_1))
    {
      t_108 = ATgetArgument(s_108, 0);
      n_108 :
      if(match_cons(t_108, sym_Rule_3))
        {
          o_108 = ATgetArgument(t_108, 0);
          p_108 = ATgetArgument(t_108, 1);
          q_108 = ATgetArgument(t_108, 2);
          {
            t = not_null(o_108);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_108, sym_Scope_2))
        {
          t_108 = ATgetArgument(s_108, 0);
          u_108 = ATgetArgument(s_108, 1);
          t = not_null(t_108);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL;
  e_109 = t;
  d_109 :
  if(match_cons(e_109, sym_Var_1))
    {
      f_109 = ATgetArgument(e_109, 0);
      t = (ATerm) ATinsert(ATempty, not_null(f_109));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm k_109 = NULL,l_109 = NULL,m_109 = NULL;
  k_109 = t;
  j_109 :
  if(match_cons(k_109, sym__2))
    {
      l_109 = ATgetArgument(k_109, 0);
      m_109 = ATgetArgument(k_109, 1);
      {
        t = not_null(l_109);
        {
          ATerm q_109 (ATerm t)
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_109);
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                {
                  ATerm g_22 = t;
                  int j_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_4 (ATerm t)
                      {
                        t = not_null(m_109);
                        return(t);
                      }
                      t = HdMember_1(t, y_4);
                      t = q_109(t);
                      LocalPopChoice(j_22);
                    }
                  else
                    {
                      t = g_22;
                      t = Cons_2(t, _id, q_109);
                    }
                }
              }
            return(t);
          }
          t = q_109(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm g_69 (ATerm), ATerm h_69 (ATerm), ATerm i_69 (ATerm))
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_69(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL;
        v_109 = t;
        u_109 :
        if(((ATgetType(v_109) == AT_LIST) && ((ATermList) v_109 != ATempty)))
          {
            w_109 = ATgetFirst((ATermList) v_109);
            x_109 = (ATerm) ATgetNext((ATermList) v_109);
            {
              ATerm a_110 = NULL,c_110 = NULL;
              ATerm m_22;
              m_22 = t;
              {
                ATerm b_110 = NULL;
                t = not_null(w_109);
                {
                  t = i_69(t);
                  {
                    b_110 = t;
                    if(((a_110 != NULL) && (a_110 != b_110)))
                      _fail(b_110);
                    else
                      a_110 = b_110;
                  }
                }
              }
              t = m_22;
              {
                ATerm d_110 = NULL;
                t = not_null(x_109);
                {
                  t = foldr_3(t, g_69, h_69, i_69);
                  {
                    d_110 = t;
                    if(((c_110 != NULL) && (c_110 != d_110)))
                      _fail(d_110);
                    else
                      c_110 = d_110;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_110), not_null(c_110));
                  t = h_69(t);
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
ATerm crush_3 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm v_70 (ATerm))
{
  ATerm m_110 = NULL;
  ATerm o_110 = NULL;
  m_110 = t;
  {
    ATerm p_110 = NULL;
    ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL;
    t = not_null(m_110);
    {
      p_110 = t;
      {
        t = SSL_explode_term(not_null(p_110));
        {
          r_110 = t;
          l_110 :
          if(match_cons(r_110, sym__2))
            {
              s_110 = ATgetArgument(r_110, 0);
              t_110 = ATgetArgument(r_110, 1);
              if(((o_110 != NULL) && (o_110 != t_110)))
                _fail(t_110);
              else
                o_110 = t_110;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(o_110);
      t = foldr_3(t, t_70, u_70, v_70);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL;
  a_111 = t;
  y_110 :
  if(match_cons(a_111, sym__2))
    {
      b_111 = ATgetArgument(a_111, 0);
      c_111 = ATgetArgument(a_111, 1);
      z_110 :
      if(((ATgetType(c_111) == AT_LIST) && ((ATermList) c_111 != ATempty)))
        {
          d_111 = ATgetFirst((ATermList) c_111);
          e_111 = (ATerm) ATgetNext((ATermList) c_111);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_111)), not_null(d_111)), not_null(e_111));
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
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL;
  u_111 = t;
  s_111 :
  if(((ATgetType(u_111) == AT_LIST) && ((ATermList) u_111 != ATempty)))
    {
      v_111 = ATgetFirst((ATermList) u_111);
      y_111 = (ATerm) ATgetNext((ATermList) u_111);
      t_111 :
      if(match_cons(v_111, sym__2))
        {
          w_111 = ATgetArgument(v_111, 0);
          x_111 = ATgetArgument(v_111, 1);
          {
            ATerm c_112 = NULL,d_112 = NULL,j_112 = NULL,p_112 = NULL;
            ATerm n_22;
            n_22 = t;
            {
              ATerm e_112 = NULL;
              ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
              t = not_null(x_111);
              {
                e_112 = t;
                {
                  t = SSL_explode_term(not_null(e_112));
                  {
                    g_112 = t;
                    m_111 :
                    if(match_cons(g_112, sym__2))
                      {
                        h_112 = ATgetArgument(g_112, 0);
                        i_112 = ATgetArgument(g_112, 1);
                        {
                          if(((c_112 != NULL) && (c_112 != h_112)))
                            _fail(h_112);
                          else
                            c_112 = h_112;
                          if(((d_112 != NULL) && (d_112 != i_112)))
                            _fail(i_112);
                          else
                            d_112 = i_112;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = n_22;
            {
              ATerm o_22;
              o_22 = t;
              {
                ATerm k_112 = NULL;
                ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL;
                t = not_null(w_111);
                {
                  k_112 = t;
                  {
                    t = SSL_explode_term(not_null(k_112));
                    {
                      m_112 = t;
                      q_111 :
                      if(match_cons(m_112, sym__2))
                        {
                          n_112 = ATgetArgument(m_112, 0);
                          o_112 = ATgetArgument(m_112, 1);
                          {
                            if(((c_112 != NULL) && (c_112 != n_112)))
                              _fail(n_112);
                            else
                              c_112 = n_112;
                            if(((j_112 != NULL) && (j_112 != o_112)))
                              _fail(o_112);
                            else
                              j_112 = o_112;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = o_22;
              {
                ATerm q_112 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_112), not_null(d_112));
                {
                  t = zip_1(t, _id);
                  {
                    q_112 = t;
                    if(((p_112 != NULL) && (p_112 != q_112)))
                      _fail(q_112);
                    else
                      p_112 = q_112;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_112), not_null(y_111));
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
  ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL;
  a_113 = t;
  y_112 :
  if(((ATgetType(a_113) == AT_LIST) && ((ATermList) a_113 != ATempty)))
    {
      b_113 = ATgetFirst((ATermList) a_113);
      e_113 = (ATerm) ATgetNext((ATermList) a_113);
      z_112 :
      if(match_cons(b_113, sym__2))
        {
          c_113 = ATgetArgument(b_113, 0);
          d_113 = ATgetArgument(b_113, 1);
          {
            ATerm g_113 = NULL;
            if(((c_113 != NULL) && (c_113 != d_113)))
              _fail(d_113);
            else
              c_113 = d_113;
            {
              if(((g_113 != NULL) && (g_113 != e_113)))
                _fail(e_113);
              else
                g_113 = e_113;
              t = not_null(g_113);
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
ATerm while_not_2 (ATerm t, ATerm g_81 (ATerm), ATerm h_81 (ATerm))
{
  ATerm j_113 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_81(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        {
          t = h_81(t);
          t = j_113(t);
        }
      }
    return(t);
  }
  t = j_113(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm l_81 (ATerm))
{
  t = j_81(t);
  t = while_not_2(t, k_81, l_81);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm n_113 = NULL,o_113 = NULL,p_113 = NULL;
  n_113 = t;
  m_113 :
  if(((ATgetType(n_113) == AT_LIST) && ((ATermList) n_113 != ATempty)))
    {
      o_113 = ATgetFirst((ATermList) n_113);
      p_113 = (ATerm) ATgetNext((ATermList) n_113);
      {
        t = i_70(t);
        {
          ATerm z_4 (ATerm t)
          {
            ATerm s_113 = NULL;
            s_113 = t;
            if(((o_113 != NULL) && (o_113 != s_113)))
              _fail(s_113);
            else
              o_113 = s_113;
            return(t);
          }
          t = fetch_1(t, z_4);
        }
        t = not_null(p_113);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL;
      y_113 = t;
      w_113 :
      if(match_cons(y_113, sym__2))
        {
          z_113 = ATgetArgument(y_113, 0);
          a_114 = ATgetArgument(y_113, 1);
          {
            t = not_null(z_113);
            {
              ATerm g_114 (ATerm t)
              {
                ATerm t_22 = t;
                int u_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(u_22);
                  }
                else
                  {
                    t = t_22;
                    {
                      ATerm v_22 = t;
                      int w_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_5 (ATerm t)
                          {
                            t = not_null(a_114);
                            return(t);
                          }
                          t = HdMember_1(t, a_5);
                          t = g_114(t);
                          LocalPopChoice(w_22);
                        }
                      else
                        {
                          t = v_22;
                          t = Cons_2(t, _id, g_114);
                        }
                    }
                  }
                return(t);
              }
              t = g_114(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm d_114 = NULL;
          d_114 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(d_114));
          return(t);
        }
        ATerm c_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm d_5 (ATerm t)
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_5 (ATerm t)
              {
                ATerm z_22 = t;
                int a_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(a_23);
                  }
                else
                  {
                    t = z_22;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, e_5);
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, b_5, c_5, d_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_114 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_60(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_114 = NULL;
              ATerm f_23;
              f_23 = t;
              {
                ATerm k_114 = NULL;
                t = b_60(t);
                {
                  k_114 = t;
                  if(((j_114 != NULL) && (j_114 != k_114)))
                    _fail(k_114);
                  else
                    j_114 = k_114;
                }
              }
              t = f_23;
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm h_5 (ATerm t)
                  {
                    t = not_null(j_114);
                    return(t);
                  }
                  t = split_2(t, l_114, h_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm g_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = c_60(t, f_5, l_114, g_5);
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, i_5, union_0, _id);
                }
              }
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              {
                ATerm j_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, j_5, union_0, l_114);
              }
            }
        }
      }
    return(t);
  }
  t = l_114(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm g_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = g_23;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, k_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL;
  s_114 = t;
  p_114 :
  if(match_cons(s_114, sym_LRule_1))
    {
      t_114 = ATgetArgument(s_114, 0);
      r_114 :
      if(match_cons(t_114, sym_Rule_3))
        {
          u_114 = ATgetArgument(t_114, 0);
          v_114 = ATgetArgument(t_114, 1);
          w_114 = ATgetArgument(t_114, 2);
          {
            ATerm a_115 = NULL;
            ATerm b_115 = NULL;
            t = not_null(u_114);
            {
              t = tvars_0(t);
              {
                b_115 = t;
                if(((a_115 != NULL) && (a_115 != b_115)))
                  _fail(b_115);
                else
                  a_115 = b_115;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_115), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_114), not_null(v_114), not_null(w_114))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm e_115 (ATerm t)
  {
    t = _all(t, e_115);
    t = i_77(t);
    return(t);
  }
  t = e_115(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm n_5 (ATerm t)
    {
      ATerm o_23 = t;
      int p_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(p_23);
        }
      else
        {
          t = o_23;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, n_5);
    return(t);
  }
  t = bottomup_1(t, l_5);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm h_115 = NULL,i_115 = NULL;
  h_115 = t;
  g_115 :
  if(match_cons(h_115, sym_Var_1))
    {
      i_115 = ATgetArgument(h_115, 0);
      t = not_null(i_115);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL;
  o_115 = t;
  m_115 :
  if(match_cons(o_115, sym__2))
    {
      p_115 = ATgetArgument(o_115, 0);
      q_115 = ATgetArgument(o_115, 1);
      n_115 :
      if(((ATgetType(q_115) == AT_LIST) && ((ATermList) q_115 != ATempty)))
        {
          r_115 = ATgetFirst((ATermList) q_115);
          s_115 = (ATerm) ATgetNext((ATermList) q_115);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_115), not_null(s_115));
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
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL;
  a_116 = t;
  x_115 :
  if(match_cons(a_116, sym__2))
    {
      b_116 = ATgetArgument(a_116, 0);
      c_116 = ATgetArgument(a_116, 1);
      y_115 :
      if(((ATgetType(c_116) == AT_LIST) && ((ATermList) c_116 != ATempty)))
        {
          d_116 = ATgetFirst((ATermList) c_116);
          h_116 = (ATerm) ATgetNext((ATermList) c_116);
          z_115 :
          if(match_cons(d_116, sym__2))
            {
              f_116 = ATgetArgument(d_116, 0);
              g_116 = ATgetArgument(d_116, 1);
              {
                ATerm j_116 = NULL;
                if(((b_116 != NULL) && (b_116 != f_116)))
                  _fail(f_116);
                else
                  b_116 = f_116;
                {
                  if(((j_116 != NULL) && (j_116 != g_116)))
                    _fail(g_116);
                  else
                    j_116 = g_116;
                  t = not_null(j_116);
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
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm w_61 (ATerm), ATerm x_61 (ATerm))
{
  ATerm p_116 = NULL;
  ATerm r_116 = NULL,s_116 = NULL;
  p_116 = t;
  {
    ATerm t_116 = NULL;
    t = not_null(p_116);
    {
      ATerm u_116 = NULL;
      t = w_61(t);
      {
        t_116 = t;
        {
          if(((r_116 != NULL) && (r_116 != t_116)))
            _fail(t_116);
          else
            r_116 = t_116;
          {
            t = x_61(t);
            {
              u_116 = t;
              if(((s_116 != NULL) && (s_116 != u_116)))
                _fail(u_116);
              else
                s_116 = u_116;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_116), not_null(s_116));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm y_116 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_79(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = _all(t, y_116);
      }
    return(t);
  }
  t = y_116(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL,d_117 = NULL;
  b_117 = t;
  a_117 :
  if(match_cons(b_117, sym__2))
    {
      c_117 = ATgetArgument(b_117, 0);
      d_117 = ATgetArgument(b_117, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_117)), not_null(c_117));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL,s_117 = NULL;
  l_117 = t;
  i_117 :
  if(match_cons(l_117, sym__2))
    {
      m_117 = ATgetArgument(l_117, 0);
      q_117 = ATgetArgument(l_117, 1);
      j_117 :
      if(((ATgetType(m_117) == AT_LIST) && ((ATermList) m_117 != ATempty)))
        {
          o_117 = ATgetFirst((ATermList) m_117);
          p_117 = (ATerm) ATgetNext((ATermList) m_117);
          k_117 :
          if(((ATgetType(q_117) == AT_LIST) && ((ATermList) q_117 != ATempty)))
            {
              r_117 = ATgetFirst((ATermList) q_117);
              s_117 = (ATerm) ATgetNext((ATermList) q_117);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_117), not_null(r_117)), (ATerm) ATmakeAppl(sym__2, not_null(p_117), not_null(s_117)));
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
  ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL;
  c_118 = t;
  z_117 :
  if(match_cons(c_118, sym__2))
    {
      d_118 = ATgetArgument(c_118, 0);
      e_118 = ATgetArgument(c_118, 1);
      a_118 :
      if(((ATermList) d_118 == ATempty))
        {
          b_118 :
          if(((ATermList) e_118 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm x_72 (ATerm), ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm))
{
  ATerm g_118 (ATerm t)
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_72(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
          t = y_72(t);
          {
            t = _2(t, a_73, g_118);
            t = z_72(t);
          }
        }
      }
    return(t);
  }
  t = g_118(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_73 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_73);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL;
  l_118 = t;
  k_118 :
  if(match_cons(l_118, sym__2))
    {
      m_118 = ATgetArgument(l_118, 0);
      n_118 = ATgetArgument(l_118, 1);
      {
        ATerm q_118 = NULL;
        if(((q_118 != NULL) && (q_118 != n_118)))
          _fail(n_118);
        else
          q_118 = n_118;
      }
    }
  else
    {
      if(match_cons(l_118, sym__3))
        {
          m_118 = ATgetArgument(l_118, 0);
          n_118 = ATgetArgument(l_118, 1);
          o_118 = ATgetArgument(l_118, 2);
          {
            ATerm x_118 = NULL;
            ATerm y_118 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_118), not_null(n_118));
            {
              t = zip_1(t, _id);
              {
                y_118 = t;
                if(((x_118 != NULL) && (x_118 != y_118)))
                  _fail(y_118);
                else
                  x_118 = y_118;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_118), not_null(o_118));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL;
  t = subs_args_0(t);
  {
    e_119 = t;
    d_119 :
    if(match_cons(e_119, sym__2))
      {
        f_119 = ATgetArgument(e_119, 0);
        g_119 = ATgetArgument(e_119, 1);
        {
          t = not_null(g_119);
          {
            ATerm o_5 (ATerm t)
            {
              ATerm p_5 (ATerm t)
              {
                t = not_null(f_119);
                return(t);
              }
              t = SubsVar_2(t, y_61, p_5);
              t = z_61(t);
              return(t);
            }
            t = alltd_1(t, o_5);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm a_62 (ATerm))
{
  t = substitute_2(t, a_62, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL;
  n_119 = t;
  l_119 :
  if(match_cons(n_119, sym_OpDecl_2))
    {
      o_119 = ATgetArgument(n_119, 0);
      p_119 = ATgetArgument(n_119, 1);
      m_119 :
      if(match_cons(p_119, sym_ConstType_1))
        {
          q_119 = ATgetArgument(p_119, 0);
          t = not_null(o_119);
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
  ATerm v_119 = NULL,w_119 = NULL;
  v_119 = t;
  u_119 :
  if(match_cons(v_119, sym_Constructors_1))
    {
      w_119 = ATgetArgument(v_119, 0);
      {
        t = not_null(w_119);
        t = filter_1(t, OpName_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL;
  c_120 = t;
  a_120 :
  if(match_cons(c_120, sym_Overlay_3))
    {
      d_120 = ATgetArgument(c_120, 0);
      e_120 = ATgetArgument(c_120, 1);
      f_120 = ATgetArgument(c_120, 2);
      b_120 :
      if(((ATermList) e_120 == ATempty))
        {
          t = not_null(d_120);
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
  ATerm n_120 = NULL,o_120 = NULL;
  n_120 = t;
  m_120 :
  if(match_cons(n_120, sym_Overlays_1))
    {
      o_120 = ATgetArgument(n_120, 0);
      {
        t = not_null(o_120);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(n_120, sym_Signature_1))
        {
          o_120 = ATgetArgument(n_120, 0);
          {
            t = not_null(o_120);
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
ATerm filter_1 (ATerm t, ATerm k_68 (ATerm))
{
  ATerm w_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = w_23;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 (ATerm t)
            {
              t = filter_1(t, k_68);
              return(t);
            }
            t = Cons_2(t, k_68, q_5);
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm v_120 = NULL,w_120 = NULL,x_120 = NULL;
              v_120 = t;
              u_120 :
              if(((ATgetType(v_120) == AT_LIST) && ((ATermList) v_120 != ATempty)))
                {
                  w_120 = ATgetFirst((ATermList) v_120);
                  x_120 = (ATerm) ATgetNext((ATermList) v_120);
                  {
                    t = not_null(x_120);
                    t = filter_1(t, k_68);
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
  ATerm e_121 = NULL,k_121 = NULL;
  ATerm e_24;
  e_24 = t;
  {
    ATerm j_121 = NULL;
    t = const_names_0(t);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm f_121 = NULL,h_121 = NULL;
        ATerm f_24;
        f_24 = t;
        {
          ATerm g_121 = NULL;
          g_121 = t;
          if(((f_121 != NULL) && (f_121 != g_121)))
            _fail(g_121);
          else
            f_121 = g_121;
        }
        t = f_24;
        {
          ATerm i_121 = NULL;
          i_121 = t;
          if(((h_121 != NULL) && (h_121 != i_121)))
            _fail(i_121);
          else
            h_121 = i_121;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_121), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_121), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, s_5);
      {
        j_121 = t;
        if(((e_121 != NULL) && (e_121 != j_121)))
          _fail(j_121);
        else
          e_121 = j_121;
      }
    }
  }
  t = e_24;
  {
    ATerm l_121 = NULL;
    l_121 = t;
    if(((k_121 != NULL) && (k_121 != l_121)))
      _fail(l_121);
    else
      k_121 = l_121;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_121), not_null(k_121));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL;
  s_121 = t;
  r_121 :
  if(match_cons(s_121, sym__3))
    {
      t_121 = ATgetArgument(s_121, 0);
      u_121 = ATgetArgument(s_121, 1);
      v_121 = ATgetArgument(s_121, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(v_121))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(u_121))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(t_121))))));
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL,e_122 = NULL;
  c_122 = t;
  b_122 :
  if(match_cons(c_122, sym__2))
    {
      d_122 = ATgetArgument(c_122, 0);
      e_122 = ATgetArgument(c_122, 1);
      {
        t = not_null(d_122);
        {
          ATerm x_5 (ATerm t)
          {
            t = not_null(e_122);
            return(t);
          }
          t = at_end_1(t, x_5);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL;
  p_122 = t;
  m_122 :
  if(match_cons(p_122, sym__2))
    {
      q_122 = ATgetArgument(p_122, 0);
      u_122 = ATgetArgument(p_122, 1);
      n_122 :
      if(match_cons(q_122, sym__3))
        {
          r_122 = ATgetArgument(q_122, 0);
          s_122 = ATgetArgument(q_122, 1);
          t_122 = ATgetArgument(q_122, 2);
          o_122 :
          if(match_cons(u_122, sym__3))
            {
              v_122 = ATgetArgument(u_122, 0);
              w_122 = ATgetArgument(u_122, 1);
              x_122 = ATgetArgument(u_122, 2);
              {
                ATerm e_123 = NULL,g_123 = NULL,i_123 = NULL;
                ATerm g_24;
                g_24 = t;
                {
                  ATerm f_123 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_122), not_null(v_122));
                  {
                    t = conc_0(t);
                    {
                      f_123 = t;
                      if(((e_123 != NULL) && (e_123 != f_123)))
                        _fail(f_123);
                      else
                        e_123 = f_123;
                    }
                  }
                }
                t = g_24;
                {
                  ATerm h_24;
                  h_24 = t;
                  {
                    ATerm h_123 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_122), not_null(w_122));
                    {
                      t = conc_0(t);
                      {
                        h_123 = t;
                        if(((g_123 != NULL) && (g_123 != h_123)))
                          _fail(h_123);
                        else
                          g_123 = h_123;
                      }
                    }
                  }
                  t = h_24;
                  {
                    ATerm j_123 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_122), not_null(x_122));
                    {
                      t = conc_0(t);
                      {
                        j_123 = t;
                        if(((i_123 != NULL) && (i_123 != j_123)))
                          _fail(j_123);
                        else
                          i_123 = j_123;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(e_123), not_null(g_123), not_null(i_123));
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
ATerm foldr_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_69(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL;
        r_123 = t;
        q_123 :
        if(((ATgetType(r_123) == AT_LIST) && ((ATermList) r_123 != ATempty)))
          {
            s_123 = ATgetFirst((ATermList) r_123);
            t_123 = (ATerm) ATgetNext((ATermList) r_123);
            {
              ATerm w_123 = NULL;
              ATerm x_123 = NULL;
              t = not_null(t_123);
              {
                t = foldr_2(t, e_69, f_69);
                {
                  x_123 = t;
                  if(((w_123 != NULL) && (w_123 != x_123)))
                    _fail(x_123);
                  else
                    w_123 = x_123;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_123), not_null(w_123));
                t = f_69(t);
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
  ATerm f_124 = NULL,g_124 = NULL;
  f_124 = t;
  e_124 :
  if(match_cons(f_124, sym_Sorts_1))
    {
      g_124 = ATgetArgument(f_124, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(f_124, sym_Constructors_1))
        {
          g_124 = ATgetArgument(f_124, 0);
          t = not_null(g_124);
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
  ATerm r_124 = NULL,s_124 = NULL;
  r_124 = t;
  q_124 :
  if(match_cons(r_124, sym_Overlays_1))
    {
      s_124 = ATgetArgument(r_124, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(s_124), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(r_124, sym_Rules_1))
        {
          s_124 = ATgetArgument(r_124, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(s_124));
        }
      else
        {
          if(match_cons(r_124, sym_Strategies_1))
            {
              s_124 = ATgetArgument(r_124, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(s_124));
            }
          else
            {
              if(match_cons(r_124, sym_Signature_1))
                {
                  s_124 = ATgetArgument(r_124, 0);
                  {
                    ATerm x_124 = NULL;
                    ATerm y_124 = NULL;
                    t = not_null(s_124);
                    {
                      t = normalize_sigs_0(t);
                      {
                        y_124 = t;
                        if(((x_124 != NULL) && (x_124 != y_124)))
                          _fail(y_124);
                        else
                          x_124 = y_124;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(x_124), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm g_125 = NULL,h_125 = NULL;
  g_125 = t;
  f_125 :
  if(match_cons(g_125, sym_Specification_1))
    {
      h_125 = ATgetArgument(g_125, 0);
      t = not_null(h_125);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm k_125 (ATerm t)
  {
    t = g_77(t);
    t = _all(t, k_125);
    return(t);
  }
  t = k_125(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      ATerm n_125 = NULL,o_125 = NULL;
      n_125 = t;
      m_125 :
      if(match_cons(n_125, sym_DefaultVarDec_1))
        {
          o_125 = ATgetArgument(n_125, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_125), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_14), term_m_14));
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, h_6);
    return(t);
  }
  t = topdown_1(t, y_5);
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
        ATerm r_6 (ATerm t)
        {
          t = term_c_19;
          return(t);
        }
        t = foldr_2(t, r_6, Combine_0);
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
    ATerm k_24;
    k_24 = t;
    t = spec_use_def_0(t);
    t = k_24;
    {
      t = ExpandOverlays_0(t);
      {
        t = CheckConstructors_0(t);
        {
          t = RulesToSdefs_0(t);
          {
            t = strename_0(t);
            {
              ATerm d_7 (ATerm t)
              {
                ATerm e_7 (ATerm t)
                {
                  ATerm f_7 (ATerm t)
                  {
                    t = Strategies_1(t, desugar_spec_0);
                    return(t);
                  }
                  t = Cons_2(t, f_7, Nil_0);
                  return(t);
                }
                t = Cons_2(t, _id, e_7);
                return(t);
              }
              t = Specification_1(t, d_7);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm f_47 (ATerm), ATerm g_47 (ATerm))
{
  ATerm v_125 = NULL,w_125 = NULL,x_125 = NULL;
  v_125 = t;
  u_125 :
  if(match_cons(v_125, sym__2))
    {
      w_125 = ATgetArgument(v_125, 0);
      x_125 = ATgetArgument(v_125, 1);
      {
        ATerm a_126 = NULL;
        t = not_null(w_125);
        {
          ATerm c_126 = NULL;
          t = f_47(t);
          {
            a_126 = t;
            {
              t = not_null(x_125);
              {
                t = g_47(t);
                {
                  c_126 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_126), not_null(c_126));
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
  ATerm j_126 = NULL;
  ATerm l_24;
  l_24 = t;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm k_126 = NULL,l_126 = NULL;
      k_126 = t;
      i_126 :
      if(match_cons(k_126, sym_Program_1))
        {
          l_126 = ATgetArgument(k_126, 0);
          if(((j_126 != NULL) && (j_126 != l_126)))
            _fail(l_126);
          else
            j_126 = l_126;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_24), not_null(j_126)), term_m_24));
      {
        t = printnl_0(t);
        {
          t = term_j_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATempty, term_o_24));
  {
    t = printnl_0(t);
    {
      t = term_j_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_126 = NULL,t_126 = NULL;
  ATerm h_7 (ATerm t)
  {
    ATerm i_7 (ATerm t)
    {
      ATerm p_24 = t;
      if((PushChoice() == 0))
        {
          ATerm j_7 (ATerm t)
          {
            ATerm u_126 = NULL;
            u_126 = t;
            n_126 :
            if(!(match_cons(u_126, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_7);
          PopChoice();
          _fail(t);
        }
      else
        t = p_24;
      return(t);
    }
    t = _2(t, i_7, _id);
    {
      ATerm k_7 (ATerm t)
      {
        ATerm l_7 (ATerm t)
        {
          ATerm v_126 = NULL,w_126 = NULL;
          v_126 = t;
          p_126 :
          if(match_cons(v_126, sym_Runtime_1))
            {
              w_126 = ATgetArgument(v_126, 0);
              if(((t_126 != NULL) && (t_126 != w_126)))
                _fail(w_126);
              else
                t_126 = w_126;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_7);
        return(t);
      }
      t = _2(t, k_7, _id);
      {
        ATerm m_7 (ATerm t)
        {
          ATerm n_7 (ATerm t)
          {
            ATerm x_126 = NULL,y_126 = NULL;
            x_126 = t;
            r_126 :
            if(match_cons(x_126, sym_Program_1))
              {
                y_126 = ATgetArgument(x_126, 0);
                if(((s_126 != NULL) && (s_126 != y_126)))
                  _fail(y_126);
                else
                  s_126 = y_126;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_7);
          return(t);
        }
        t = _2(t, m_7, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_24), not_null(t_126)), term_q_24), not_null(s_126)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, h_7);
  {
    t = term_i_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm d_127 = NULL,e_127 = NULL,f_127 = NULL;
  d_127 = t;
  c_127 :
  if(match_cons(d_127, sym__2))
    {
      e_127 = ATgetArgument(d_127, 0);
      f_127 = ATgetArgument(d_127, 1);
      t = SSL_WriteToTextFile(not_null(e_127), not_null(f_127));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL;
  l_127 = t;
  k_127 :
  if(match_cons(l_127, sym__2))
    {
      m_127 = ATgetArgument(l_127, 0);
      n_127 = ATgetArgument(l_127, 1);
      t = SSL_WriteToBinaryFile(not_null(m_127), not_null(n_127));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm v_127 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_7 (ATerm t)
          {
            ATerm w_127 = NULL,x_127 = NULL;
            w_127 = t;
            s_127 :
            if(match_cons(w_127, sym_Output_1))
              {
                x_127 = ATgetArgument(w_127, 0);
                if(((v_127 != NULL) && (v_127 != x_127)))
                  _fail(x_127);
                else
                  v_127 = x_127;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, p_7);
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          {
            ATerm y_127 = NULL;
            t = term_v_24;
            {
              y_127 = t;
              if(((v_127 != NULL) && (v_127 != y_127)))
                _fail(y_127);
              else
                v_127 = y_127;
            }
          }
        }
      return(t);
    }
    t = _2(t, o_7, _id);
  }
  t = s_24;
  {
    ATerm q_7 (ATerm t)
    {
      ATerm r_7 (ATerm t)
      {
        t = not_null(v_127);
        return(t);
      }
      t = split_2(t, r_7, _id);
      return(t);
    }
    t = _2(t, _id, q_7);
    {
      ATerm w_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 (ATerm t)
          {
            ATerm t_7 (ATerm t)
            {
              ATerm z_127 = NULL;
              z_127 = t;
              u_127 :
              if(!(match_cons(z_127, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, t_7);
            return(t);
          }
          t = _2(t, s_7, WriteToBinaryFile_0);
          LocalPopChoice(x_24);
        }
      else
        {
          t = w_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm f_128 = NULL,h_128 = NULL,i_128 = NULL,j_128 = NULL;
  ATerm y_24;
  y_24 = t;
  t = dtime_0(t);
  t = y_24;
  {
    t = z_64(t);
    {
      ATerm z_24;
      z_24 = t;
      {
        ATerm g_128 = NULL;
        t = dtime_0(t);
        {
          g_128 = t;
          if(((f_128 != NULL) && (f_128 != g_128)))
            _fail(g_128);
          else
            f_128 = g_128;
        }
      }
      t = z_24;
      {
        h_128 = t;
        e_128 :
        if(match_cons(h_128, sym__2))
          {
            i_128 = ATgetArgument(h_128, 0);
            j_128 = ATgetArgument(h_128, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_128)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_128))), not_null(j_128));
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
  ATerm p_128 = NULL;
  p_128 = t;
  t = SSL_ReadFromFile(not_null(p_128));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_67 (ATerm), ATerm t_67 (ATerm))
{
  ATerm u_128 = NULL,w_128 = NULL;
  ATerm a_25;
  a_25 = t;
  {
    ATerm v_128 = NULL;
    t = s_67(t);
    {
      v_128 = t;
      if(((u_128 != NULL) && (u_128 != v_128)))
        _fail(v_128);
      else
        u_128 = v_128;
    }
  }
  t = a_25;
  {
    ATerm x_128 = NULL;
    t = t_67(t);
    {
      x_128 = t;
      if(((w_128 != NULL) && (w_128 != x_128)))
        _fail(x_128);
      else
        w_128 = x_128;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_128), not_null(w_128));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_129 = NULL;
  ATerm b_25;
  b_25 = t;
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_7 (ATerm t)
        {
          ATerm e_129 = NULL,f_129 = NULL;
          e_129 = t;
          b_129 :
          if(match_cons(e_129, sym_Input_1))
            {
              f_129 = ATgetArgument(e_129, 0);
              if(((d_129 != NULL) && (d_129 != f_129)))
                _fail(f_129);
              else
                d_129 = f_129;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, u_7);
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm g_129 = NULL;
          t = term_e_25;
          {
            g_129 = t;
            if(((d_129 != NULL) && (d_129 != g_129)))
              _fail(g_129);
            else
              d_129 = g_129;
          }
        }
      }
  }
  t = b_25;
  {
    ATerm v_7 (ATerm t)
    {
      t = not_null(d_129);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_129 = NULL;
  k_129 = t;
  j_129 :
  if(!(match_cons(k_129, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm x_7 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm i_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(k_25);
            }
          else
            {
              t = i_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_7);
  t = y_64(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_129 = NULL;
  m_129 = t;
  t = SSL_table_create(not_null(m_129));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_129 = NULL;
  q_129 = t;
  {
    ATerm l_25;
    l_25 = t;
    {
      t = term_m_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_25, term_n_25, not_null(q_129));
          t = table_put_0(t);
        }
      }
    }
    t = l_25;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL,c_130 = NULL;
  y_129 = t;
  w_129 :
  if(match_string(y_129, "register-usage-info"))
    t = register_usage_1(t, o_0);
  else
    {
      if(((ATgetType(y_129) == AT_LIST) && ((ATermList) y_129 != ATempty)))
        {
          z_129 = ATgetFirst((ATermList) y_129);
          a_130 = (ATerm) ATgetNext((ATermList) y_129);
          x_129 :
          if(((ATgetType(a_130) == AT_LIST) && ((ATermList) a_130 != ATempty)))
            {
              b_130 = ATgetFirst((ATermList) a_130);
              c_130 = (ATerm) ATgetNext((ATermList) a_130);
              {
                ATerm g_130 = NULL;
                ATerm o_25;
                o_25 = t;
                {
                  t = not_null(z_129);
                  t = m_0(t);
                }
                t = o_25;
                {
                  ATerm h_130 = NULL;
                  t = not_null(b_130);
                  {
                    t = n_0(t);
                    {
                      h_130 = t;
                      if(((g_130 != NULL) && (g_130 != h_130)))
                        _fail(h_130);
                      else
                        g_130 = h_130;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_130)), not_null(g_130));
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
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 (ATerm t)
      {
        ATerm w_130 = NULL;
        w_130 = t;
        l_130 :
        if(!(match_string(w_130, "-S")))
          {
            if(!(match_string(w_130, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        t = term_r_25;
        return(t);
      }
      ATerm b_8 (ATerm t)
      {
        t = term_s_25;
        return(t);
      }
      t = Option_3(t, y_7, z_7, b_8);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_8 (ATerm t)
            {
              ATerm x_130 = NULL;
              x_130 = t;
              m_130 :
              if(!(match_string(x_130, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm d_8 (ATerm t)
            {
              t = term_v_25;
              return(t);
            }
            ATerm f_8 (ATerm t)
            {
              t = term_y_25;
              return(t);
            }
            t = Option_3(t, c_8, d_8, f_8);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            {
              ATerm z_25 = t;
              int c_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_8 (ATerm t)
                  {
                    ATerm y_130 = NULL;
                    y_130 = t;
                    n_130 :
                    if(!(match_string(y_130, "-v")))
                      {
                        if(!(match_string(y_130, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm t_8 (ATerm t)
                  {
                    t = term_d_26;
                    return(t);
                  }
                  ATerm b_9 (ATerm t)
                  {
                    t = term_f_26;
                    return(t);
                  }
                  t = Option_3(t, j_8, t_8, b_9);
                  LocalPopChoice(c_26);
                }
              else
                {
                  t = z_25;
                  {
                    ATerm h_26 = t;
                    int i_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_9 (ATerm t)
                        {
                          ATerm z_130 = NULL;
                          z_130 = t;
                          o_130 :
                          if(!(match_string(z_130, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm m_9 (ATerm t)
                        {
                          ATerm a_131 = NULL;
                          ATerm b_131 = NULL;
                          b_131 = t;
                          if(((a_131 != NULL) && (a_131 != b_131)))
                            _fail(b_131);
                          else
                            a_131 = b_131;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_131));
                          return(t);
                        }
                        ATerm n_9 (ATerm t)
                        {
                          t = term_j_26;
                          return(t);
                        }
                        t = ArgOption_3(t, l_9, m_9, n_9);
                        LocalPopChoice(i_26);
                      }
                    else
                      {
                        t = h_26;
                        {
                          ATerm k_26 = t;
                          int l_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_9 (ATerm t)
                              {
                                ATerm c_131 = NULL;
                                c_131 = t;
                                q_130 :
                                if(!(match_string(c_131, "-i")))
                                  {
                                    if(!(match_string(c_131, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm p_9 (ATerm t)
                              {
                                ATerm d_131 = NULL;
                                ATerm e_131 = NULL;
                                e_131 = t;
                                if(((d_131 != NULL) && (d_131 != e_131)))
                                  _fail(e_131);
                                else
                                  d_131 = e_131;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_131));
                                return(t);
                              }
                              ATerm q_9 (ATerm t)
                              {
                                t = term_m_26;
                                return(t);
                              }
                              t = ArgOption_3(t, o_9, p_9, q_9);
                              LocalPopChoice(l_26);
                            }
                          else
                            {
                              t = k_26;
                              {
                                ATerm n_26 = t;
                                int o_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_9 (ATerm t)
                                    {
                                      ATerm f_131 = NULL;
                                      f_131 = t;
                                      s_130 :
                                      if(!(match_string(f_131, "-o")))
                                        {
                                          if(!(match_string(f_131, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm s_9 (ATerm t)
                                    {
                                      ATerm g_131 = NULL;
                                      ATerm h_131 = NULL;
                                      h_131 = t;
                                      if(((g_131 != NULL) && (g_131 != h_131)))
                                        _fail(h_131);
                                      else
                                        g_131 = h_131;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_131));
                                      return(t);
                                    }
                                    ATerm t_9 (ATerm t)
                                    {
                                      t = term_r_26;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, r_9, s_9, t_9);
                                    LocalPopChoice(o_26);
                                  }
                                else
                                  {
                                    t = n_26;
                                    {
                                      ATerm s_26 = t;
                                      int v_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_9 (ATerm t)
                                          {
                                            ATerm j_131 = NULL;
                                            j_131 = t;
                                            u_130 :
                                            if(!(match_string(j_131, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm v_9 (ATerm t)
                                          {
                                            t = term_z_26;
                                            return(t);
                                          }
                                          ATerm w_9 (ATerm t)
                                          {
                                            t = term_d_27;
                                            return(t);
                                          }
                                          t = Option_3(t, u_9, v_9, w_9);
                                          LocalPopChoice(v_26);
                                        }
                                      else
                                        {
                                          t = s_26;
                                          {
                                            ATerm x_9 (ATerm t)
                                            {
                                              ATerm k_131 = NULL;
                                              k_131 = t;
                                              v_130 :
                                              if(!(match_string(k_131, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm y_9 (ATerm t)
                                            {
                                              t = term_e_27;
                                              return(t);
                                            }
                                            ATerm f_10 (ATerm t)
                                            {
                                              t = term_f_27;
                                              return(t);
                                            }
                                            t = Option_3(t, x_9, y_9, f_10);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm p_131 = NULL;
  p_131 = t;
  t = SSL_table_destroy(not_null(p_131));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_131 = NULL;
  t_131 = t;
  t = SSL_exit(not_null(t_131));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_131 = NULL;
  x_131 = t;
  t = SSL_implode_string(not_null(x_131));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm a_132 (ATerm t)
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_132);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        {
          t = Nil_0(t);
          t = y_74(t);
        }
      }
    return(t);
  }
  t = a_132(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL;
        d_132 = t;
        c_132 :
        if(((ATgetType(d_132) == AT_LIST) && ((ATermList) d_132 != ATempty)))
          {
            e_132 = ATgetFirst((ATermList) d_132);
            f_132 = (ATerm) ATgetNext((ATermList) d_132);
            {
              t = not_null(e_132);
              {
                ATerm g_10 (ATerm t)
                {
                  t = not_null(f_132);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_10);
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
  ATerm l_132 = NULL;
  l_132 = t;
  t = SSL_explode_string(not_null(l_132));
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
ATerm long_description_1 (ATerm t, ATerm f_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm o_132 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = Cons_2(t, k_74, o_132);
      }
    return(t);
  }
  t = o_132(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_132 = NULL,w_132 = NULL,x_132 = NULL;
  x_132 = t;
  u_132 :
  if(((ATgetType(x_132) == AT_LIST) && ((ATermList) x_132 != ATempty)))
    {
      v_132 = ATgetFirst((ATermList) x_132);
      w_132 = (ATerm) ATgetNext((ATermList) x_132);
      {
        ATerm a_133 = NULL;
        t = not_null(w_132);
        {
          ATerm p_27;
          p_27 = t;
          {
            ATerm b_133 = NULL,d_133 = NULL,f_133 = NULL;
            ATerm q_27;
            q_27 = t;
            {
              ATerm c_133 = NULL;
              t = l_0(t);
              {
                c_133 = t;
                if(((b_133 != NULL) && (b_133 != c_133)))
                  _fail(c_133);
                else
                  b_133 = c_133;
              }
            }
            t = q_27;
            {
              ATerm e_133 = NULL;
              t = not_null(v_132);
              {
                t = k_0(t);
                {
                  e_133 = t;
                  if(((d_133 != NULL) && (d_133 != e_133)))
                    _fail(e_133);
                  else
                    d_133 = e_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_133)), not_null(d_133));
                {
                  f_133 = t;
                  if(((a_133 != NULL) && (a_133 != f_133)))
                    _fail(f_133);
                  else
                    a_133 = f_133;
                }
              }
            }
          }
          t = p_27;
          {
            ATerm h_10 (ATerm t)
            {
              t = not_null(a_133);
              return(t);
            }
            t = reverse_acc_2(t, k_0, h_10);
          }
        }
      }
    }
  else
    {
      if(((ATermList) x_132 == ATempty))
        {
          {
            t = term_b_16;
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
  ATerm i_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_10);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_48 (ATerm))
{
  ATerm o_133 = NULL,p_133 = NULL;
  o_133 = t;
  n_133 :
  if(match_cons(o_133, sym_Program_1))
    {
      p_133 = ATgetArgument(o_133, 0);
      {
        ATerm s_133 = NULL;
        t = not_null(p_133);
        {
          t = o_48(t);
          {
            s_133 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_133));
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
  ATerm a_134 = NULL;
  ATerm j_10 (ATerm t)
  {
    ATerm k_10 (ATerm t)
    {
      ATerm b_134 = NULL;
      b_134 = t;
      if(((a_134 != NULL) && (a_134 != b_134)))
        _fail(b_134);
      else
        a_134 = b_134;
      return(t);
    }
    t = Program_1(t, k_10);
    return(t);
  }
  t = option_defined_1(t, j_10);
  {
    ATerm l_10 (ATerm t)
    {
      ATerm c_134 = NULL;
      ATerm d_134 = NULL;
      t = term_b_16;
      {
        ATerm o_10 (ATerm t)
        {
          t = not_null(a_134);
          return(t);
        }
        t = short_description_1(t, o_10);
        {
          t = concat_strings_0(t);
          {
            d_134 = t;
            if(((c_134 != NULL) && (c_134 != d_134)))
              _fail(d_134);
            else
              c_134 = d_134;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATempty, not_null(c_134)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_10);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATempty, term_r_27));
      {
        t = printnl_0(t);
        {
          t = term_w_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_10 (ATerm t)
                {
                  ATerm e_134 = NULL;
                  e_134 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_134)), term_x_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_10);
                {
                  ATerm z_10 (ATerm t)
                  {
                    ATerm g_134 = NULL;
                    ATerm h_134 = NULL;
                    t = term_b_16;
                    {
                      ATerm a_11 (ATerm t)
                      {
                        t = not_null(a_134);
                        return(t);
                      }
                      t = long_description_1(t, a_11);
                      {
                        t = concat_strings_0(t);
                        {
                          h_134 = t;
                          if(((g_134 != NULL) && (g_134 != h_134)))
                            _fail(h_134);
                          else
                            g_134 = h_134;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_134)), term_y_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, z_10);
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
  ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL;
  o_134 = t;
  n_134 :
  if(match_cons(o_134, sym__2))
    {
      p_134 = ATgetArgument(o_134, 0);
      q_134 = ATgetArgument(o_134, 1);
      {
        ATerm z_27;
        z_27 = t;
        t = SSL_printnl(not_null(p_134), not_null(q_134));
        t = z_27;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_48 (ATerm))
{
  ATerm x_134 = NULL,y_134 = NULL;
  x_134 = t;
  w_134 :
  if(match_cons(x_134, sym_Undefined_1))
    {
      y_134 = ATgetArgument(x_134, 0);
      {
        ATerm a_135 = NULL;
        t = not_null(y_134);
        {
          t = p_48(t);
          {
            a_135 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_135));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm e_135 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_74, _id);
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = Cons_2(t, _id, e_135);
      }
    return(t);
  }
  t = e_135(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm d_64 (ATerm))
{
  t = fetch_1(t, d_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_135 = NULL;
  g_135 = t;
  f_135 :
  if(!(match_cons(g_135, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_81(t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_135 = NULL,k_135 = NULL,l_135 = NULL;
  j_135 = t;
  i_135 :
  if(match_cons(j_135, sym__2))
    {
      k_135 = ATgetArgument(j_135, 0);
      l_135 = ATgetArgument(j_135, 1);
      t = SSL_table_get(not_null(k_135), not_null(l_135));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_135 = NULL,t_135 = NULL,u_135 = NULL,v_135 = NULL;
  s_135 = t;
  r_135 :
  if(match_cons(s_135, sym__3))
    {
      t_135 = ATgetArgument(s_135, 0);
      u_135 = ATgetArgument(s_135, 1);
      v_135 = ATgetArgument(s_135, 2);
      {
        ATerm e_28;
        e_28 = t;
        {
          ATerm z_135 = NULL;
          ATerm a_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_135), not_null(u_135));
          {
            ATerm f_28 = t;
            int g_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_28);
              }
            else
              {
                t = f_28;
                t = (ATerm) ATempty;
              }
            {
              a_136 = t;
              if(((z_135 != NULL) && (z_135 != a_136)))
                _fail(a_136);
              else
                z_135 = a_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_135), not_null(u_135), (ATerm) ATinsert(CheckATermList(not_null(z_135)), not_null(v_135)));
            t = table_put_0(t);
          }
        }
        t = e_28;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_63 (ATerm))
{
  ATerm e_136 = NULL;
  ATerm f_136 = NULL;
  t = term_b_16;
  {
    t = j_63(t);
    {
      f_136 = t;
      if(((e_136 != NULL) && (e_136 != f_136)))
        _fail(f_136);
      else
        e_136 = f_136;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_27, term_v_27, not_null(e_136));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm h_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm l_136 = NULL,m_136 = NULL,n_136 = NULL;
  l_136 = t;
  k_136 :
  if(match_string(l_136, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(l_136) == AT_LIST) && ((ATermList) l_136 != ATempty)))
        {
          m_136 = ATgetFirst((ATermList) l_136);
          n_136 = (ATerm) ATgetNext((ATermList) l_136);
          {
            ATerm q_136 = NULL;
            ATerm h_28;
            h_28 = t;
            {
              t = not_null(m_136);
              t = c_0(t);
            }
            t = h_28;
            {
              ATerm r_136 = NULL;
              t = term_b_16;
              {
                t = h_0(t);
                {
                  r_136 = t;
                  if(((q_136 != NULL) && (q_136 != r_136)))
                    _fail(r_136);
                  else
                    q_136 = r_136;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_136)), not_null(q_136));
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
  ATerm b_11 (ATerm t)
  {
    ATerm w_136 = NULL;
    w_136 = t;
    v_136 :
    if(!(match_string(w_136, "--help")))
      {
        if(!(match_string(w_136, "-h")))
          {
            if(!(match_string(w_136, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm c_11 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    t = term_j_28;
    return(t);
  }
  t = Option_3(t, b_11, c_11, d_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_136 = NULL,a_137 = NULL,b_137 = NULL;
  z_136 = t;
  y_136 :
  if(((ATgetType(z_136) == AT_LIST) && ((ATermList) z_136 != ATempty)))
    {
      a_137 = ATgetFirst((ATermList) z_136);
      b_137 = (ATerm) ATgetNext((ATermList) z_136);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_137)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_137)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_57 (ATerm), ATerm a_58 (ATerm))
{
  ATerm j_137 = NULL,k_137 = NULL,l_137 = NULL;
  j_137 = t;
  i_137 :
  if(((ATgetType(j_137) == AT_LIST) && ((ATermList) j_137 != ATempty)))
    {
      k_137 = ATgetFirst((ATermList) j_137);
      l_137 = (ATerm) ATgetNext((ATermList) j_137);
      {
        ATerm o_137 = NULL;
        t = not_null(k_137);
        {
          ATerm q_137 = NULL;
          t = z_57(t);
          {
            o_137 = t;
            {
              t = not_null(l_137);
              {
                t = a_58(t);
                {
                  q_137 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_137)), not_null(o_137));
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
  ATerm w_137 = NULL;
  w_137 = t;
  v_137 :
  if(((ATermList) w_137 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_63 (ATerm))
{
  ATerm k_28;
  k_28 = t;
  {
    ATerm e_11 (ATerm t)
    {
      t = term_l_28;
      t = h_63(t);
      return(t);
    }
    t = try_1(t, e_11);
  }
  t = k_28;
  {
    ATerm f_11 (ATerm t)
    {
      ATerm y_137 = NULL;
      y_137 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_137));
      return(t);
    }
    ATerm g_11 (ATerm t)
    {
      ATerm m_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_28 = t;
          int v_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_28);
            }
          else
            {
              t = u_28;
              {
                t = h_63(t);
                t = Cons_2(t, _id, g_11);
              }
            }
          LocalPopChoice(q_28);
        }
      else
        {
          t = m_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_11, g_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL,g_138 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm h_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL;
    h_138 = t;
    d_138 :
    if(match_cons(h_138, sym__3))
      {
        i_138 = ATgetArgument(h_138, 0);
        j_138 = ATgetArgument(h_138, 1);
        k_138 = ATgetArgument(h_138, 2);
        {
          if(((e_138 != NULL) && (e_138 != i_138)))
            _fail(i_138);
          else
            e_138 = i_138;
          {
            if(((f_138 != NULL) && (f_138 != j_138)))
              _fail(j_138);
            else
              f_138 = j_138;
            {
              if(((g_138 != NULL) && (g_138 != k_138)))
                _fail(k_138);
              else
                g_138 = k_138;
              t = SSL_table_put(not_null(e_138), not_null(f_138), not_null(g_138));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = w_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm n_138 = NULL;
  ATerm x_28;
  x_28 = t;
  {
    t = term_y_28;
    t = table_put_0(t);
  }
  t = x_28;
  {
    ATerm i_11 (ATerm t)
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_63(t);
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_11);
    {
      ATerm j_11 (ATerm t)
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            {
              ATerm k_11 (ATerm t)
              {
                ATerm l_11 (ATerm t)
                {
                  ATerm o_138 = NULL;
                  o_138 = t;
                  if(((n_138 != NULL) && (n_138 != o_138)))
                    _fail(o_138);
                  else
                    n_138 = o_138;
                  return(t);
                }
                t = Undefined_1(t, l_11);
                return(t);
              }
              t = option_defined_1(t, k_11);
              {
                ATerm d_29;
                d_29 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_138)), term_e_29));
                  t = printnl_0(t);
                }
                t = d_29;
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_17;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_11);
      {
        ATerm f_29;
        f_29 = t;
        {
          t = term_s_27;
          t = table_destroy_0(t);
        }
        t = f_29;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm p_64 (ATerm))
{
  ATerm m_11 (ATerm t)
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_64(t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_11);
  {
    t = store_options_0(t);
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, p_64);
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, n_64);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_64 (ATerm), ATerm j_64 (ATerm))
{
  t = iowrap_3(t, i_64, j_64, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_64 (ATerm))
{
  ATerm n_11 (ATerm t)
  {
    t = _2(t, _id, f_64);
    return(t);
  }
  t = iowrap_2(t, n_11, _fail);
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
