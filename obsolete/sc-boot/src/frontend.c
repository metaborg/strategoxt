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
ATerm term_m_35;
ATerm term_e_35;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_a_32;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_l_31;
ATerm term_c_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_i_27;
ATerm term_l_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_d_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_c_20;
ATerm term_n_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_u_16;
ATerm term_m_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_q_11;
ATerm term_q_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
void init_constant_terms (void)
{
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Op_2, term_l_15, (ATerm) ATempty);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Var_1, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Var_1, term_w_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Anno_2, term_v_15, term_y_15);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Var_1, term_m_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Var_1, term_e_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Anno_2, term_u_16, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_15);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Call_2, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_i_17, term_v_15, term_u_16);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_15);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Call_2, term_k_17, (ATerm) ATempty);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_l_17, term_y_15, term_f_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Var_1, term_a_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_19);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, term_r_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_15);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Op_2, term_r_27, (ATerm) ATempty);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Op_2, term_e_9, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_28);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_g_19);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_g_19);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_g_19);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("version", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_o_33, term_g_19);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_g_19);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_g_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__3, term_f_34, term_g_34, (ATerm) ATempty);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm Explode_2 (ATerm, ATerm t_74 (ATerm), ATerm u_74 (ATerm));
ATerm pat_td_1 (ATerm, ATerm c_79 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm c_95 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm y_75 (ATerm));
ATerm Specification_1 (ATerm, ATerm a_76 (ATerm));
ATerm spaste_1 (ATerm, ATerm o_79 (ATerm));
ATerm Rec_2 (ATerm, ATerm h_77 (ATerm), ATerm i_77 (ATerm));
ATerm Let_2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm sboundin_3 (ATerm, ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm r_79 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm g_77 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm i_82 (ATerm, ATerm (ATerm)), ATerm j_82 (ATerm), ATerm k_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_82 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm Con_3 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm x_100 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm ListVarScope_0 (ATerm);
ATerm DesugarListMatching_0 (ATerm);
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
ATerm rewrite_1 (ATerm, ATerm y_87 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm f_102 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm t_87 (ATerm));
ATerm restore_always_2 (ATerm, ATerm y_103 (ATerm), ATerm z_103 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm s_87 (ATerm));
ATerm scope_2 (ATerm, ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm w_87 (ATerm));
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm n_80 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm o_76 (ATerm), ATerm p_76 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm k_79 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm a_82 (ATerm), ATerm b_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm u_81 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm a_98 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm f_98 (ATerm));
ATerm substitute_6 (ATerm, ATerm s_82 (ATerm), ATerm t_82 (ATerm, ATerm (ATerm)), ATerm u_82 (ATerm), ATerm v_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_82 (ATerm, ATerm (ATerm)), ATerm x_82 (ATerm));
ATerm substitute_5 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm, ATerm (ATerm)), ATerm b_83 (ATerm), ATerm c_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_83 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm l_80 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm m_80 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm Overlay_3 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm p_94 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm h_79 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm BAM_3 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm BA_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm AM_2 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm MA_2 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm));
ATerm Match_1 (ATerm, ATerm h_78 (ATerm));
ATerm Build_1 (ATerm, ATerm i_78 (ATerm));
ATerm constructs_1 (ATerm, ATerm g_79 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm SDef_3 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm w_75 (ATerm));
ATerm Signature_1 (ATerm, ATerm v_75 (ATerm));
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
ATerm SplitDynamicRule_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm b_104 (ATerm));
ATerm one_dist_1 (ATerm, ATerm b_98 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm q_98 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm o_102 (ATerm), ATerm p_102 (ATerm));
ATerm repeat_1 (ATerm, ATerm r_102 (ATerm));
ATerm listtd_1 (ATerm, ATerm j_97 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm o_75 (ATerm));
ATerm Scope_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm));
ATerm crush_3 (ATerm, ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm f_103 (ATerm), ATerm g_103 (ATerm));
ATerm for_3 (ATerm, ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm));
ATerm HdMember_1 (ATerm, ATerm c_92 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm i_99 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm n_82 (ATerm), ATerm o_82 (ATerm));
ATerm alltd_1 (ATerm, ATerm l_101 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm zip_1 (ATerm, ATerm x_94 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm p_82 (ATerm), ATerm q_82 (ATerm));
ATerm substitute_1 (ATerm, ATerm r_82 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm d_90 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_99 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm r_67 (ATerm), ATerm s_67 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_90 (ATerm), ATerm y_90 (ATerm));
ATerm crush_2 (ATerm, ATerm l_92 (ATerm), ATerm m_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_86 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_89 (ATerm), ATerm m_89 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_96 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_84 (ATerm));
ATerm map_1 (ATerm, ATerm f_96 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_84 (ATerm));
ATerm Program_1 (ATerm, ATerm a_69 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_69 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_96 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_103 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_84 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_84 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_84 (ATerm));
ATerm iowrap_3 (ATerm, ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm b_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_85 (ATerm), ATerm v_85 (ATerm));
ATerm iowrap_1 (ATerm, ATerm r_85 (ATerm));
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
  d_10 = t;
  b_10 :
  if(match_cons(d_10, sym_ExplodeCong_2))
    {
      e_10 = ATgetArgument(d_10, 0);
      c_10 = ATgetArgument(d_10, 1);
      {
        ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
        ATerm l_10 = NULL;
        ATerm m_10 = NULL;
        t = new_0(t);
        {
          l_10 = t;
          {
            if(((h_10 != NULL) && (h_10 != l_10)))
              _fail(l_10);
            else
              h_10 = l_10;
            {
              ATerm n_10 = NULL;
              t = new_0(t);
              {
                m_10 = t;
                {
                  if(((i_10 != NULL) && (i_10 != m_10)))
                    _fail(m_10);
                  else
                    i_10 = m_10;
                  {
                    ATerm o_10 = NULL;
                    t = new_0(t);
                    {
                      n_10 = t;
                      {
                        if(((j_10 != NULL) && (j_10 != n_10)))
                          _fail(n_10);
                        else
                          j_10 = n_10;
                        {
                          t = new_0(t);
                          {
                            o_10 = t;
                            if(((k_10 != NULL) && (k_10 != o_10)))
                              _fail(o_10);
                            else
                              k_10 = o_10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_10)), not_null(j_10)), not_null(i_10)), not_null(h_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(e_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))))), (ATerm) ATmakeAppl(sym_Prim_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10)))))));
      }
    }
  else
    {
      if(match_cons(d_10, sym_Build_1))
        {
          e_10 = ATgetArgument(d_10, 0);
          {
            ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
            ATerm u_10 = NULL;
            ATerm y_10 = NULL;
            t = new_0(t);
            {
              u_10 = t;
              {
                if(((s_10 != NULL) && (s_10 != u_10)))
                  _fail(u_10);
                else
                  s_10 = u_10;
                {
                  t = not_null(e_10);
                  {
                    ATerm g_0 (ATerm t)
                    {
                      ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
                      v_10 = t;
                      u_9 :
                      if(match_cons(v_10, sym_Explode_2))
                        {
                          w_10 = ATgetArgument(v_10, 0);
                          x_10 = ATgetArgument(v_10, 1);
                          {
                            if(((q_10 != NULL) && (q_10 != w_10)))
                              _fail(w_10);
                            else
                              q_10 = w_10;
                            {
                              if(((r_10 != NULL) && (r_10 != x_10)))
                                _fail(x_10);
                              else
                                r_10 = x_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, g_0);
                    {
                      y_10 = t;
                      if(((t_10 != NULL) && (t_10 != y_10)))
                        _fail(y_10);
                      else
                        t_10 = y_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_10)))));
          }
        }
      else
        {
          if(match_cons(d_10, sym_Match_1))
            {
              e_10 = ATgetArgument(d_10, 0);
              {
                ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
                ATerm f_11 = NULL;
                ATerm g_11 = NULL;
                t = new_0(t);
                {
                  f_11 = t;
                  {
                    if(((c_11 != NULL) && (c_11 != f_11)))
                      _fail(f_11);
                    else
                      c_11 = f_11;
                    {
                      ATerm k_11 = NULL;
                      t = new_0(t);
                      {
                        g_11 = t;
                        {
                          if(((d_11 != NULL) && (d_11 != g_11)))
                            _fail(g_11);
                          else
                            d_11 = g_11;
                          {
                            t = not_null(e_10);
                            {
                              ATerm h_0 (ATerm t)
                              {
                                ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
                                h_11 = t;
                                z_9 :
                                if(match_cons(h_11, sym_Explode_2))
                                  {
                                    i_11 = ATgetArgument(h_11, 0);
                                    j_11 = ATgetArgument(h_11, 1);
                                    {
                                      if(((a_11 != NULL) && (a_11 != i_11)))
                                        _fail(i_11);
                                      else
                                        a_11 = i_11;
                                      {
                                        if(((b_11 != NULL) && (b_11 != j_11)))
                                          _fail(j_11);
                                        else
                                          b_11 = j_11;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_11));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, h_0);
                              {
                                k_11 = t;
                                if(((e_11 != NULL) && (e_11 != k_11)))
                                  _fail(k_11);
                                else
                                  e_11 = k_11;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11))), (ATerm) ATmakeAppl(sym_Prim_2, term_d_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_11)), (ATerm) ATmakeAppl(sym_Op_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)))))));
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
  ATerm p_12 = NULL,q_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym_Match_1))
    {
      q_12 = ATgetArgument(p_12, 0);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
            ATerm w_12 = NULL;
            ATerm a_13 = NULL;
            t = new_0(t);
            {
              w_12 = t;
              {
                if(((u_12 != NULL) && (u_12 != w_12)))
                  _fail(w_12);
                else
                  u_12 = w_12;
                {
                  t = not_null(q_12);
                  {
                    ATerm i_0 (ATerm t)
                    {
                      ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
                      x_12 = t;
                      e_12 :
                      if(match_cons(x_12, sym_Anno_2))
                        {
                          y_12 = ATgetArgument(x_12, 0);
                          z_12 = ATgetArgument(x_12, 1);
                          {
                            if(((s_12 != NULL) && (s_12 != y_12)))
                              _fail(y_12);
                            else
                              s_12 = y_12;
                            {
                              if(((t_12 != NULL) && (t_12 != z_12)))
                                _fail(z_12);
                              else
                                t_12 = z_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_12)), not_null(s_12));
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
                      a_13 = t;
                      if(((v_12 != NULL) && (v_12 != a_13)))
                        _fail(a_13);
                      else
                        v_12 = a_13;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_h_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_12))))));
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm i_9 = t;
              int j_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
                  ATerm f_13 = NULL;
                  ATerm i_13 = NULL;
                  t = new_0(t);
                  {
                    f_13 = t;
                    {
                      if(((d_13 != NULL) && (d_13 != f_13)))
                        _fail(f_13);
                      else
                        d_13 = f_13;
                      {
                        t = not_null(q_12);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm g_13 = NULL,h_13 = NULL;
                            g_13 = t;
                            i_12 :
                            if(match_cons(g_13, sym_RootApp_1))
                              {
                                h_13 = ATgetArgument(g_13, 0);
                                {
                                  if(((c_13 != NULL) && (c_13 != h_13)))
                                    _fail(h_13);
                                  else
                                    c_13 = h_13;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_13));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, j_0);
                          {
                            i_13 = t;
                            if(((e_13 != NULL) && (e_13 != i_13)))
                              _fail(i_13);
                            else
                              e_13 = i_13;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_13))), not_null(c_13))));
                  LocalPopChoice(j_9);
                }
              else
                {
                  t = i_9;
                  {
                    ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
                    ATerm o_13 = NULL;
                    ATerm s_13 = NULL;
                    t = new_0(t);
                    {
                      o_13 = t;
                      {
                        if(((m_13 != NULL) && (m_13 != o_13)))
                          _fail(o_13);
                        else
                          m_13 = o_13;
                        {
                          t = not_null(q_12);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
                              p_13 = t;
                              m_12 :
                              if(match_cons(p_13, sym_App_2))
                                {
                                  q_13 = ATgetArgument(p_13, 0);
                                  r_13 = ATgetArgument(p_13, 1);
                                  {
                                    if(((l_13 != NULL) && (l_13 != q_13)))
                                      _fail(q_13);
                                    else
                                      l_13 = q_13;
                                    {
                                      if(((k_13 != NULL) && (k_13 != r_13)))
                                        _fail(r_13);
                                      else
                                        k_13 = r_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_13));
                                    }
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
                              s_13 = t;
                              if(((n_13 != NULL) && (n_13 != s_13)))
                                _fail(s_13);
                              else
                                n_13 = s_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_13)), not_null(l_13)))));
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
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  j_14 = t;
  h_14 :
  if(match_cons(j_14, sym_Match_1))
    {
      k_14 = ATgetArgument(j_14, 0);
      i_14 :
      if(match_cons(k_14, sym_RootApp_1))
        {
          l_14 = ATgetArgument(k_14, 0);
          t = not_null(l_14);
        }
      else
        {
          if(match_cons(k_14, sym_App_2))
            {
              l_14 = ATgetArgument(k_14, 0);
              m_14 = ATgetArgument(k_14, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(l_14), not_null(m_14));
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
  ATerm y_14 = NULL,z_14 = NULL;
  y_14 = t;
  x_14 :
  if(match_cons(y_14, sym_Match_1))
    {
      z_14 = ATgetArgument(y_14, 0);
      {
        ATerm b_15 = NULL,c_15 = NULL;
        ATerm g_15 = NULL;
        t = not_null(z_14);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
            d_15 = t;
            u_14 :
            if(match_cons(d_15, sym_RootApp_1))
              {
                e_15 = ATgetArgument(d_15, 0);
                v_14 :
                if(match_cons(e_15, sym_Match_1))
                  {
                    f_15 = ATgetArgument(e_15, 0);
                    {
                      if(((b_15 != NULL) && (b_15 != f_15)))
                        _fail(f_15);
                      else
                        b_15 = f_15;
                      t = not_null(b_15);
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
          t = pat_td_1(t, u_0);
          {
            g_15 = t;
            if(((c_15 != NULL) && (c_15 != g_15)))
              _fail(g_15);
            else
              c_15 = g_15;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(c_15));
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_Build_1))
    {
      b_16 = ATgetArgument(a_16, 0);
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
            ATerm h_16 = NULL;
            ATerm l_16 = NULL;
            t = new_0(t);
            {
              h_16 = t;
              {
                if(((f_16 != NULL) && (f_16 != h_16)))
                  _fail(h_16);
                else
                  f_16 = h_16;
                {
                  t = not_null(b_16);
                  {
                    ATerm v_0 (ATerm t)
                    {
                      ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL;
                      i_16 = t;
                      p_15 :
                      if(match_cons(i_16, sym_Anno_2))
                        {
                          j_16 = ATgetArgument(i_16, 0);
                          k_16 = ATgetArgument(i_16, 1);
                          {
                            if(((d_16 != NULL) && (d_16 != j_16)))
                              _fail(j_16);
                            else
                              d_16 = j_16;
                            {
                              if(((e_16 != NULL) && (e_16 != k_16)))
                                _fail(k_16);
                              else
                                e_16 = k_16;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_16));
                            }
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
                      l_16 = t;
                      if(((g_16 != NULL) && (g_16 != l_16)))
                        _fail(l_16);
                      else
                        g_16 = l_16;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_q_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_16)), not_null(d_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_16))));
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            {
              ATerm r_9 = t;
              int s_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
                  ATerm q_16 = NULL;
                  ATerm t_16 = NULL;
                  t = new_0(t);
                  {
                    q_16 = t;
                    {
                      if(((o_16 != NULL) && (o_16 != q_16)))
                        _fail(q_16);
                      else
                        o_16 = q_16;
                      {
                        t = not_null(b_16);
                        {
                          ATerm w_0 (ATerm t)
                          {
                            ATerm r_16 = NULL,s_16 = NULL;
                            r_16 = t;
                            t_15 :
                            if(match_cons(r_16, sym_RootApp_1))
                              {
                                s_16 = ATgetArgument(r_16, 0);
                                {
                                  if(((n_16 != NULL) && (n_16 != s_16)))
                                    _fail(s_16);
                                  else
                                    n_16 = s_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_16));
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
                            t_16 = t;
                            if(((p_16 != NULL) && (p_16 != t_16)))
                              _fail(t_16);
                            else
                              p_16 = t_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_16))));
                  LocalPopChoice(s_9);
                }
              else
                {
                  t = r_9;
                  {
                    ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
                    ATerm z_16 = NULL;
                    ATerm d_17 = NULL;
                    t = new_0(t);
                    {
                      z_16 = t;
                      {
                        if(((x_16 != NULL) && (x_16 != z_16)))
                          _fail(z_16);
                        else
                          x_16 = z_16;
                        {
                          t = not_null(b_16);
                          {
                            ATerm x_0 (ATerm t)
                            {
                              ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
                              a_17 = t;
                              x_15 :
                              if(match_cons(a_17, sym_App_2))
                                {
                                  b_17 = ATgetArgument(a_17, 0);
                                  c_17 = ATgetArgument(a_17, 1);
                                  {
                                    if(((v_16 != NULL) && (v_16 != b_17)))
                                      _fail(b_17);
                                    else
                                      v_16 = b_17;
                                    {
                                      if(((w_16 != NULL) && (w_16 != c_17)))
                                        _fail(c_17);
                                      else
                                        w_16 = c_17;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_16));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, x_0);
                            {
                              d_17 = t;
                              if(((y_16 != NULL) && (y_16 != d_17)))
                                _fail(d_17);
                              else
                                y_16 = d_17;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_16), not_null(w_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_16))));
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
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  u_17 = t;
  s_17 :
  if(match_cons(u_17, sym_Build_1))
    {
      v_17 = ATgetArgument(u_17, 0);
      t_17 :
      if(match_cons(v_17, sym_RootApp_1))
        {
          w_17 = ATgetArgument(v_17, 0);
          t = not_null(w_17);
        }
      else
        {
          if(match_cons(v_17, sym_App_2))
            {
              w_17 = ATgetArgument(v_17, 0);
              x_17 = ATgetArgument(v_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_17)), not_null(w_17));
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
ATerm Prim_2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym_Prim_2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      {
        ATerm p_18 = NULL,r_18 = NULL;
        ATerm q_18 = NULL;
        t = SSLgetAnnotations(not_null(j_18));
        {
          q_18 = t;
          if(((p_18 != NULL) && (p_18 != q_18)))
            _fail(q_18);
          else
            p_18 = q_18;
        }
        {
          t = not_null(k_18);
          {
            ATerm t_18 = NULL;
            t = o_78(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm v_18 = NULL;
                  t = p_78(t);
                  {
                    t_18 = t;
                    {
                      ATerm w_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(r_18), not_null(t_18)), not_null(p_18));
                      {
                        w_18 = t;
                        if(((v_18 != NULL) && (v_18 != w_18)))
                          _fail(w_18);
                        else
                          v_18 = w_18;
                      }
                      t = not_null(v_18);
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
ATerm Explode_2 (ATerm t, ATerm t_74 (ATerm), ATerm u_74 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym_Explode_2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      {
        ATerm o_19 = NULL,q_19 = NULL;
        ATerm p_19 = NULL;
        t = SSLgetAnnotations(not_null(i_19));
        {
          p_19 = t;
          if(((o_19 != NULL) && (o_19 != p_19)))
            _fail(p_19);
          else
            o_19 = p_19;
        }
        {
          t = not_null(j_19);
          {
            ATerm s_19 = NULL;
            t = t_74(t);
            {
              q_19 = t;
              {
                t = not_null(k_19);
                {
                  ATerm u_19 = NULL;
                  t = u_74(t);
                  {
                    s_19 = t;
                    {
                      ATerm v_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(q_19), not_null(s_19)), not_null(o_19));
                      {
                        v_19 = t;
                        if(((u_19 != NULL) && (u_19 != v_19)))
                          _fail(v_19);
                        else
                          u_19 = v_19;
                      }
                      t = not_null(u_19);
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
ATerm pat_td_1 (ATerm t, ATerm c_79 (ATerm))
{
  ATerm t_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_79(t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = t_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = pat_td_1(t, c_79);
                return(t);
              }
              t = fetch_1(t, z_0);
              return(t);
            }
            t = Op_2(t, _id, y_0);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm y_9 = t;
              int a_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = pat_td_1(t, c_79);
                    return(t);
                  }
                  t = Explode_2(t, _id, a_1);
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm f_10 = t;
                    int g_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_1 (ATerm t)
                        {
                          t = pat_td_1(t, c_79);
                          return(t);
                        }
                        t = Explode_2(t, b_1, _id);
                        LocalPopChoice(g_10);
                      }
                    else
                      {
                        t = f_10;
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = pat_td_1(t, c_79);
                              return(t);
                            }
                            t = fetch_1(t, d_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, c_1);
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
  ATerm m_20 = NULL,n_20 = NULL;
  m_20 = t;
  l_20 :
  if(match_cons(m_20, sym_Build_1))
    {
      n_20 = ATgetArgument(m_20, 0);
      {
        ATerm p_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_20 = NULL,q_20 = NULL;
            ATerm u_20 = NULL;
            t = not_null(n_20);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
                r_20 = t;
                e_20 :
                if(match_cons(r_20, sym_RootApp_1))
                  {
                    s_20 = ATgetArgument(r_20, 0);
                    f_20 :
                    if(match_cons(s_20, sym_Build_1))
                      {
                        t_20 = ATgetArgument(s_20, 0);
                        {
                          if(((p_20 != NULL) && (p_20 != t_20)))
                            _fail(t_20);
                          else
                            p_20 = t_20;
                          t = not_null(p_20);
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
                u_20 = t;
                if(((q_20 != NULL) && (q_20 != u_20)))
                  _fail(u_20);
                else
                  q_20 = u_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_20));
            LocalPopChoice(z_10);
          }
        else
          {
            t = p_10;
            {
              ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
              ATerm d_21 = NULL;
              t = not_null(n_20);
              {
                ATerm f_1 (ATerm t)
                {
                  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
                  z_20 = t;
                  i_20 :
                  if(match_cons(z_20, sym_App_2))
                    {
                      a_21 = ATgetArgument(z_20, 0);
                      c_21 = ATgetArgument(z_20, 1);
                      j_20 :
                      if(match_cons(a_21, sym_Build_1))
                        {
                          b_21 = ATgetArgument(a_21, 0);
                          {
                            if(((x_20 != NULL) && (x_20 != b_21)))
                              _fail(b_21);
                            else
                              x_20 = b_21;
                            {
                              if(((w_20 != NULL) && (w_20 != c_21)))
                                _fail(c_21);
                              else
                                w_20 = c_21;
                              t = not_null(x_20);
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
                t = pat_td_1(t, f_1);
                {
                  d_21 = t;
                  if(((y_20 != NULL) && (y_20 != d_21)))
                    _fail(d_21);
                  else
                    y_20 = d_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(y_20));
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
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm c_95 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, c_95);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL;
  ATerm u_21 (ATerm t)
  {
    ATerm r_21 = NULL;
    ATerm s_21 = NULL;
    t = not_null(o_21);
    {
      ATerm p_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_11;
        }
      {
        t = new_0(t);
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(r_21)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(o_21)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_21))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_21))));
    return(t);
  }
  ATerm v_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_q_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_21))));
    return(t);
  }
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Var_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_21(t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = v_21(t);
          }
      }
    }
  else
    {
      t = u_21(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Prim_2))
    {
      d_22 = ATgetArgument(c_22, 0);
      e_22 = ATgetArgument(c_22, 1);
      {
        ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
        ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
        t = not_null(e_22);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm t_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_11;
              }
            return(t);
          }
          t = fetch_1(t, g_1);
          {
            t = not_null(e_22);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm h_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, h_1);
                {
                  k_22 = t;
                  z_21 :
                  if(match_cons(k_22, sym__2))
                    {
                      l_22 = ATgetArgument(k_22, 0);
                      m_22 = ATgetArgument(k_22, 1);
                      a_22 :
                      if(match_cons(m_22, sym__2))
                        {
                          n_22 = ATgetArgument(m_22, 0);
                          o_22 = ATgetArgument(m_22, 1);
                          {
                            if(((h_22 != NULL) && (h_22 != l_22)))
                              _fail(l_22);
                            else
                              h_22 = l_22;
                            {
                              if(((i_22 != NULL) && (i_22 != n_22)))
                                _fail(n_22);
                              else
                                i_22 = n_22;
                              if(((j_22 != NULL) && (j_22 != o_22)))
                                _fail(o_22);
                              else
                                j_22 = o_22;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(i_22)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(d_22), not_null(j_22))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm w_11 = t;
              int x_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(x_11);
                }
              else
                {
                  t = w_11;
                  {
                    ATerm y_11 = t;
                    int z_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(z_11);
                      }
                    else
                      {
                        t = y_11;
                        {
                          ATerm a_12 = t;
                          int b_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(b_12);
                            }
                          else
                            {
                              t = a_12;
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
      t = repeat_1(t, j_1);
    }
    return(t);
  }
  t = topdown_1(t, i_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, k_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym_Strategies_1))
    {
      x_22 = ATgetArgument(w_22, 0);
      {
        ATerm a_23 = NULL,c_23 = NULL;
        ATerm b_23 = NULL;
        t = SSLgetAnnotations(not_null(w_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
        {
          t = not_null(x_22);
          {
            ATerm e_23 = NULL;
            t = y_75(t);
            {
              c_23 = t;
              {
                ATerm f_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(c_23)), not_null(a_23));
                {
                  f_23 = t;
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                }
                t = not_null(e_23);
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
ATerm Specification_1 (ATerm t, ATerm a_76 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_Specification_1))
    {
      q_23 = ATgetArgument(p_23, 0);
      {
        ATerm t_23 = NULL,v_23 = NULL;
        ATerm u_23 = NULL;
        t = SSLgetAnnotations(not_null(p_23));
        {
          u_23 = t;
          if(((t_23 != NULL) && (t_23 != u_23)))
            _fail(u_23);
          else
            t_23 = u_23;
        }
        {
          t = not_null(q_23);
          {
            ATerm x_23 = NULL;
            t = a_76(t);
            {
              v_23 = t;
              {
                ATerm y_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(v_23)), not_null(t_23));
                {
                  y_23 = t;
                  if(((x_23 != NULL) && (x_23 != y_23)))
                    _fail(y_23);
                  else
                    x_23 = y_23;
                }
                t = not_null(x_23);
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
ATerm spaste_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = split_2(t, _id, o_79);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
            j_24 = t;
            e_24 :
            if(match_cons(j_24, sym__2))
              {
                k_24 = ATgetArgument(j_24, 0);
                o_24 = ATgetArgument(j_24, 1);
                f_24 :
                if(match_cons(k_24, sym_SDef_3))
                  {
                    l_24 = ATgetArgument(k_24, 0);
                    m_24 = ATgetArgument(k_24, 1);
                    n_24 = ATgetArgument(k_24, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_24), not_null(m_24), not_null(n_24));
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
          t = zip_1(t, m_1);
        }
        return(t);
      }
      t = Let_2(t, l_1, _id);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = split_2(t, _id, o_79);
              {
                ATerm o_1 (ATerm t)
                {
                  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
                  s_24 = t;
                  h_24 :
                  if(match_cons(s_24, sym__2))
                    {
                      t_24 = ATgetArgument(s_24, 0);
                      w_24 = ATgetArgument(s_24, 1);
                      i_24 :
                      if(match_cons(t_24, sym_VarDec_2))
                        {
                          u_24 = ATgetArgument(t_24, 0);
                          v_24 = ATgetArgument(t_24, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_24), not_null(v_24));
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
                t = zip_1(t, o_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, n_1, _id);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm p_1 (ATerm t)
              {
                t = o_79(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, p_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm h_77 (ATerm), ATerm i_77 (ATerm))
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  h_25 :
  if(match_cons(i_25, sym_Rec_2))
    {
      j_25 = ATgetArgument(i_25, 0);
      k_25 = ATgetArgument(i_25, 1);
      {
        ATerm o_25 = NULL,q_25 = NULL;
        ATerm p_25 = NULL;
        t = SSLgetAnnotations(not_null(i_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        {
          t = not_null(j_25);
          {
            ATerm s_25 = NULL;
            t = h_77(t);
            {
              q_25 = t;
              {
                t = not_null(k_25);
                {
                  ATerm u_25 = NULL;
                  t = i_77(t);
                  {
                    s_25 = t;
                    {
                      ATerm v_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(q_25), not_null(s_25)), not_null(o_25));
                      {
                        v_25 = t;
                        if(((u_25 != NULL) && (u_25 != v_25)))
                          _fail(v_25);
                        else
                          u_25 = v_25;
                      }
                      t = not_null(u_25);
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
ATerm Let_2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Let_2))
    {
      i_26 = ATgetArgument(h_26, 0);
      j_26 = ATgetArgument(h_26, 1);
      {
        ATerm n_26 = NULL,p_26 = NULL;
        ATerm o_26 = NULL;
        t = SSLgetAnnotations(not_null(h_26));
        {
          o_26 = t;
          if(((n_26 != NULL) && (n_26 != o_26)))
            _fail(o_26);
          else
            n_26 = o_26;
        }
        {
          t = not_null(i_26);
          {
            ATerm r_26 = NULL;
            t = j_77(t);
            {
              p_26 = t;
              {
                t = not_null(j_26);
                {
                  ATerm t_26 = NULL;
                  t = k_77(t);
                  {
                    r_26 = t;
                    {
                      ATerm u_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_26), not_null(r_26)), not_null(n_26));
                      {
                        u_26 = t;
                        if(((t_26 != NULL) && (t_26 != u_26)))
                          _fail(u_26);
                        else
                          t_26 = u_26;
                      }
                      t = not_null(t_26);
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
ATerm sboundin_3 (ATerm t, ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm h_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, p_79, p_79);
      LocalPopChoice(j_12);
    }
  else
    {
      t = h_12;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, r_79, r_79, p_79);
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = Rec_2(t, r_79, p_79);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm k_27 = NULL,u_31 = NULL,v_31 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Rec_2))
    {
      u_31 = ATgetArgument(k_27, 0);
      v_31 = ATgetArgument(k_27, 1);
      t = (ATerm) ATinsert(ATempty, not_null(u_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym_SDef_3))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      g_32 = ATgetArgument(d_32, 2);
      {
        t = not_null(f_32);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm k_32 = NULL,k_35 = NULL,l_35 = NULL;
            k_32 = t;
            b_32 :
            if(match_cons(k_32, sym_VarDec_2))
              {
                k_35 = ATgetArgument(k_32, 0);
                l_35 = ATgetArgument(k_32, 1);
                t = not_null(k_35);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, q_1);
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
  ATerm m_37 = NULL,n_37 = NULL,w_38 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym_Let_2))
    {
      n_37 = ATgetArgument(m_37, 0);
      w_38 = ATgetArgument(m_37, 1);
      {
        t = not_null(n_37);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm z_38 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
            z_38 = t;
            m_36 :
            if(match_cons(z_38, sym_SDef_3))
              {
                h_39 = ATgetArgument(z_38, 0);
                i_39 = ATgetArgument(z_38, 1);
                j_39 = ATgetArgument(z_38, 2);
                t = not_null(h_39);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm e_40 = NULL,f_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym_SVar_1))
    {
      f_40 = ATgetArgument(e_40, 0);
      {
        ATerm i_40 = NULL,k_40 = NULL;
        ATerm j_40 = NULL;
        t = SSLgetAnnotations(not_null(e_40));
        {
          j_40 = t;
          if(((i_40 != NULL) && (i_40 != j_40)))
            _fail(j_40);
          else
            i_40 = j_40;
        }
        {
          t = not_null(f_40);
          {
            ATerm m_40 = NULL;
            t = g_77(t);
            {
              k_40 = t;
              {
                ATerm n_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(k_40)), not_null(i_40));
                {
                  n_40 = t;
                  if(((m_40 != NULL) && (m_40 != n_40)))
                    _fail(n_40);
                  else
                    m_40 = n_40;
                }
                t = not_null(m_40);
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
  ATerm s_1 (ATerm t)
  {
    ATerm n_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = n_12;
        {
          ATerm b_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(j_13);
            }
          else
            {
              t = b_13;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, s_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm i_82 (ATerm, ATerm (ATerm)), ATerm j_82 (ATerm), ATerm k_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_82 (ATerm, ATerm (ATerm)))
{
  ATerm v_40 = NULL;
  v_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_40), (ATerm) ATempty);
    {
      ATerm y_40 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, i_82);
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              {
                t = RnBinding_2(t, j_82, l_82);
                t = DistBinding_2(t, y_40, k_82);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, t_1);
        return(t);
      }
      t = y_40(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm z_40 (ATerm t, ATerm a_41 (ATerm))
  {
    t = Scope_2(t, a_41, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, z_40);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm ListBuild_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  y_42 = t;
  s_42 :
  if(match_cons(y_42, sym_Build_1))
    {
      z_42 = ATgetArgument(y_42, 0);
      {
        ATerm b_43 = NULL,e_43 = NULL;
        ATerm r_43 = NULL;
        t = not_null(z_42);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,p_43 = NULL,q_43 = NULL;
            f_43 = t;
            h_42 :
            if(match_cons(f_43, sym_Op_2))
              {
                g_43 = ATgetArgument(f_43, 0);
                h_43 = ATgetArgument(f_43, 1);
                i_42 :
                if(match_string(g_43, "Cons"))
                  {
                    j_42 :
                    if(((ATgetType(h_43) == AT_LIST) && ((ATermList) h_43 != ATempty)))
                      {
                        i_43 = ATgetFirst((ATermList) h_43);
                        l_43 = (ATerm) ATgetNext((ATermList) h_43);
                        k_42 :
                        if(match_cons(i_43, sym_Var_1))
                          {
                            j_43 = ATgetArgument(i_43, 0);
                            l_42 :
                            if(match_cons(j_43, sym_ListVar_1))
                              {
                                k_43 = ATgetArgument(j_43, 0);
                                m_42 :
                                if(((ATgetType(l_43) == AT_LIST) && ((ATermList) l_43 != ATempty)))
                                  {
                                    m_43 = ATgetFirst((ATermList) l_43);
                                    q_43 = (ATerm) ATgetNext((ATermList) l_43);
                                    n_42 :
                                    if(match_cons(m_43, sym_Op_2))
                                      {
                                        n_43 = ATgetArgument(m_43, 0);
                                        p_43 = ATgetArgument(m_43, 1);
                                        o_42 :
                                        if(match_string(n_43, "Nil"))
                                          {
                                            p_42 :
                                            if(((ATermList) p_43 == ATempty))
                                              {
                                                q_42 :
                                                if(((ATermList) q_43 == ATempty))
                                                  {
                                                    {
                                                      if(((b_43 != NULL) && (b_43 != k_43)))
                                                        _fail(k_43);
                                                      else
                                                        b_43 = k_43;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_43));
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
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, u_1);
          {
            r_43 = t;
            if(((e_43 != NULL) && (e_43 != r_43)))
              _fail(r_43);
            else
              e_43 = r_43;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(e_43));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ListMatch_0 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  q_46 = t;
  p_46 :
  if(match_cons(q_46, sym_Build_1))
    {
      r_46 = ATgetArgument(q_46, 0);
      {
        ATerm t_46 = NULL,u_46 = NULL;
        ATerm m_47 = NULL;
        t = not_null(r_46);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
            v_46 = t;
            z_43 :
            if(match_cons(v_46, sym_Op_2))
              {
                w_46 = ATgetArgument(v_46, 0);
                x_46 = ATgetArgument(v_46, 1);
                a_44 :
                if(match_string(w_46, "Cons"))
                  {
                    b_44 :
                    if(((ATgetType(x_46) == AT_LIST) && ((ATermList) x_46 != ATempty)))
                      {
                        y_46 = ATgetFirst((ATermList) x_46);
                        z_46 = (ATerm) ATgetNext((ATermList) x_46);
                        c_44 :
                        if(((ATgetType(z_46) == AT_LIST) && ((ATermList) z_46 != ATempty)))
                          {
                            a_47 = ATgetFirst((ATermList) z_46);
                            l_47 = (ATerm) ATgetNext((ATermList) z_46);
                            d_44 :
                            if(match_cons(a_47, sym_Op_2))
                              {
                                b_47 = ATgetArgument(a_47, 0);
                                c_47 = ATgetArgument(a_47, 1);
                                e_44 :
                                if(match_string(b_47, "Cons"))
                                  {
                                    f_44 :
                                    if(((ATgetType(c_47) == AT_LIST) && ((ATermList) c_47 != ATempty)))
                                      {
                                        d_47 = ATgetFirst((ATermList) c_47);
                                        g_47 = (ATerm) ATgetNext((ATermList) c_47);
                                        g_44 :
                                        if(match_cons(d_47, sym_Var_1))
                                          {
                                            e_47 = ATgetArgument(d_47, 0);
                                            h_44 :
                                            if(match_cons(e_47, sym_ListVar_1))
                                              {
                                                f_47 = ATgetArgument(e_47, 0);
                                                i_44 :
                                                if(((ATgetType(g_47) == AT_LIST) && ((ATermList) g_47 != ATempty)))
                                                  {
                                                    h_47 = ATgetFirst((ATermList) g_47);
                                                    k_47 = (ATerm) ATgetNext((ATermList) g_47);
                                                    j_44 :
                                                    if(match_cons(h_47, sym_Op_2))
                                                      {
                                                        i_47 = ATgetArgument(h_47, 0);
                                                        j_47 = ATgetArgument(h_47, 1);
                                                        t_44 :
                                                        if(match_string(i_47, "Nil"))
                                                          {
                                                            u_44 :
                                                            if(((ATermList) j_47 == ATempty))
                                                              {
                                                                v_44 :
                                                                if(((ATermList) k_47 == ATempty))
                                                                  {
                                                                    w_44 :
                                                                    if(((ATermList) l_47 == ATempty))
                                                                      {
                                                                        {
                                                                          if(((r_46 != NULL) && (r_46 != y_46)))
                                                                            _fail(y_46);
                                                                          else
                                                                            r_46 = y_46;
                                                                          {
                                                                            if(((t_46 != NULL) && (t_46 != f_47)))
                                                                              _fail(f_47);
                                                                            else
                                                                              t_46 = f_47;
                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_v_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_46))), not_null(r_46)));
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
          t = oncetd_1(t, v_1);
          {
            m_47 = t;
            if(((u_46 != NULL) && (u_46 != m_47)))
              _fail(m_47);
            else
              u_46 = m_47;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(u_46));
      }
    }
  else
    {
      if(match_cons(q_46, sym_Match_1))
        {
          r_46 = ATgetArgument(q_46, 0);
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_47 = NULL,p_47 = NULL;
                ATerm h_48 = NULL;
                t = not_null(r_46);
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
                    q_47 = t;
                    b_45 :
                    if(match_cons(q_47, sym_Op_2))
                      {
                        r_47 = ATgetArgument(q_47, 0);
                        s_47 = ATgetArgument(q_47, 1);
                        e_45 :
                        if(match_string(r_47, "Cons"))
                          {
                            f_45 :
                            if(((ATgetType(s_47) == AT_LIST) && ((ATermList) s_47 != ATempty)))
                              {
                                t_47 = ATgetFirst((ATermList) s_47);
                                u_47 = (ATerm) ATgetNext((ATermList) s_47);
                                g_45 :
                                if(((ATgetType(u_47) == AT_LIST) && ((ATermList) u_47 != ATempty)))
                                  {
                                    v_47 = ATgetFirst((ATermList) u_47);
                                    g_48 = (ATerm) ATgetNext((ATermList) u_47);
                                    h_45 :
                                    if(match_cons(v_47, sym_Op_2))
                                      {
                                        w_47 = ATgetArgument(v_47, 0);
                                        x_47 = ATgetArgument(v_47, 1);
                                        i_45 :
                                        if(match_string(w_47, "Cons"))
                                          {
                                            j_45 :
                                            if(((ATgetType(x_47) == AT_LIST) && ((ATermList) x_47 != ATempty)))
                                              {
                                                y_47 = ATgetFirst((ATermList) x_47);
                                                b_48 = (ATerm) ATgetNext((ATermList) x_47);
                                                k_45 :
                                                if(match_cons(y_47, sym_Var_1))
                                                  {
                                                    z_47 = ATgetArgument(y_47, 0);
                                                    l_45 :
                                                    if(match_cons(z_47, sym_ListVar_1))
                                                      {
                                                        a_48 = ATgetArgument(z_47, 0);
                                                        m_45 :
                                                        if(((ATgetType(b_48) == AT_LIST) && ((ATermList) b_48 != ATempty)))
                                                          {
                                                            c_48 = ATgetFirst((ATermList) b_48);
                                                            f_48 = (ATerm) ATgetNext((ATermList) b_48);
                                                            n_45 :
                                                            if(match_cons(c_48, sym_Op_2))
                                                              {
                                                                d_48 = ATgetArgument(c_48, 0);
                                                                e_48 = ATgetArgument(c_48, 1);
                                                                o_45 :
                                                                if(match_string(d_48, "Nil"))
                                                                  {
                                                                    p_45 :
                                                                    if(((ATermList) e_48 == ATempty))
                                                                      {
                                                                        r_45 :
                                                                        if(((ATermList) f_48 == ATempty))
                                                                          {
                                                                            s_45 :
                                                                            if(((ATermList) g_48 == ATempty))
                                                                              {
                                                                                {
                                                                                  if(((r_46 != NULL) && (r_46 != t_47)))
                                                                                    _fail(t_47);
                                                                                  else
                                                                                    r_46 = t_47;
                                                                                  {
                                                                                    if(((o_47 != NULL) && (o_47 != a_48)))
                                                                                      _fail(a_48);
                                                                                    else
                                                                                      o_47 = a_48;
                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_v_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_47))), not_null(r_46)));
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
                  t = oncetd_1(t, w_1);
                  {
                    h_48 = t;
                    if(((p_47 != NULL) && (p_47 != h_48)))
                      _fail(h_48);
                    else
                      p_47 = h_48;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_47));
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                {
                  ATerm j_48 = NULL,k_48 = NULL;
                  ATerm d_49 = NULL;
                  t = not_null(r_46);
                  {
                    ATerm x_1 (ATerm t)
                    {
                      ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL;
                      n_48 = t;
                      d_46 :
                      if(match_cons(n_48, sym_Op_2))
                        {
                          o_48 = ATgetArgument(n_48, 0);
                          p_48 = ATgetArgument(n_48, 1);
                          e_46 :
                          if(match_string(o_48, "Cons"))
                            {
                              f_46 :
                              if(((ATgetType(p_48) == AT_LIST) && ((ATermList) p_48 != ATempty)))
                                {
                                  q_48 = ATgetFirst((ATermList) p_48);
                                  y_48 = (ATerm) ATgetNext((ATermList) p_48);
                                  g_46 :
                                  if(match_cons(q_48, sym_Var_1))
                                    {
                                      w_48 = ATgetArgument(q_48, 0);
                                      h_46 :
                                      if(match_cons(w_48, sym_ListVar_1))
                                        {
                                          x_48 = ATgetArgument(w_48, 0);
                                          i_46 :
                                          if(((ATgetType(y_48) == AT_LIST) && ((ATermList) y_48 != ATempty)))
                                            {
                                              z_48 = ATgetFirst((ATermList) y_48);
                                              c_49 = (ATerm) ATgetNext((ATermList) y_48);
                                              j_46 :
                                              if(match_cons(z_48, sym_Op_2))
                                                {
                                                  a_49 = ATgetArgument(z_48, 0);
                                                  b_49 = ATgetArgument(z_48, 1);
                                                  l_46 :
                                                  if(match_string(a_49, "Nil"))
                                                    {
                                                      m_46 :
                                                      if(((ATermList) b_49 == ATempty))
                                                        {
                                                          n_46 :
                                                          if(((ATermList) c_49 == ATempty))
                                                            {
                                                              {
                                                                if(((j_48 != NULL) && (j_48 != x_48)))
                                                                  _fail(x_48);
                                                                else
                                                                  j_48 = x_48;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_48));
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
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, x_1);
                    {
                      d_49 = t;
                      if(((k_48 != NULL) && (k_48 != d_49)))
                        _fail(d_49);
                      else
                        k_48 = d_49;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(k_48));
                }
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
ATerm HL_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  y_50 = t;
  o_50 :
  if(match_cons(y_50, sym_InfixApp_3))
    {
      z_50 = ATgetArgument(y_50, 0);
      t_50 = ATgetArgument(y_50, 1);
      s_50 = ATgetArgument(y_50, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(t_50), (ATerm) ATmakeAppl(sym_Op_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_50)), not_null(z_50))));
    }
  else
    {
      if(match_cons(y_50, sym_BAM_3))
        {
          z_50 = ATgetArgument(y_50, 0);
          t_50 = ATgetArgument(y_50, 1);
          s_50 = ATgetArgument(y_50, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(s_50))), not_null(z_50)), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_50))));
        }
      else
        {
          if(match_cons(y_50, sym_AM_2))
            {
              z_50 = ATgetArgument(y_50, 0);
              t_50 = ATgetArgument(y_50, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_50), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_50)));
            }
          else
            {
              if(match_cons(y_50, sym_MA_2))
                {
                  z_50 = ATgetArgument(y_50, 0);
                  t_50 = ATgetArgument(y_50, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_50)), not_null(t_50));
                }
              else
                {
                  if(match_cons(y_50, sym_BA_2))
                    {
                      z_50 = ATgetArgument(y_50, 0);
                      t_50 = ATgetArgument(y_50, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_50)), not_null(z_50));
                    }
                  else
                    {
                      if(match_cons(y_50, sym_Lets_2))
                        {
                          z_50 = ATgetArgument(y_50, 0);
                          t_50 = ATgetArgument(y_50, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_50), not_null(t_50));
                        }
                      else
                        {
                          if(match_cons(y_50, sym_LChoices_1))
                            {
                              z_50 = ATgetArgument(y_50, 0);
                              p_50 :
                              if(((ATgetType(z_50) == AT_LIST) && ((ATermList) z_50 != ATempty)))
                                {
                                  u_50 = ATgetFirst((ATermList) z_50);
                                  x_50 = (ATerm) ATgetNext((ATermList) z_50);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_50), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(x_50)));
                                }
                              else
                                {
                                  if(((ATermList) z_50 == ATempty))
                                    {
                                      t = term_y_13;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(y_50, sym_Choices_1))
                                {
                                  z_50 = ATgetArgument(y_50, 0);
                                  q_50 :
                                  if(((ATgetType(z_50) == AT_LIST) && ((ATermList) z_50 != ATempty)))
                                    {
                                      u_50 = ATgetFirst((ATermList) z_50);
                                      x_50 = (ATerm) ATgetNext((ATermList) z_50);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_50), (ATerm) ATmakeAppl(sym_Choices_1, not_null(x_50)));
                                    }
                                  else
                                    {
                                      if(((ATermList) z_50 == ATempty))
                                        {
                                          t = term_y_13;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(y_50, sym_Seqs_1))
                                    {
                                      z_50 = ATgetArgument(y_50, 0);
                                      r_50 :
                                      if(((ATgetType(z_50) == AT_LIST) && ((ATermList) z_50 != ATempty)))
                                        {
                                          u_50 = ATgetFirst((ATermList) z_50);
                                          x_50 = (ATerm) ATgetNext((ATermList) z_50);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_50), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_50)));
                                        }
                                      else
                                        {
                                          if(((ATermList) z_50 == ATempty))
                                            {
                                              t = term_q_11;
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
ATerm Wld_0 (ATerm t)
{
  ATerm n_52 = NULL;
  n_52 = t;
  m_52 :
  if(match_cons(n_52, sym_Wld_0))
    {
      ATerm p_52 = NULL,r_52 = NULL;
      ATerm z_13;
      z_13 = t;
      {
        ATerm q_52 = NULL;
        t = SSLgetAnnotations(not_null(n_52));
        {
          q_52 = t;
          if(((p_52 != NULL) && (p_52 != q_52)))
            _fail(q_52);
          else
            p_52 = q_52;
        }
      }
      t = z_13;
      {
        ATerm u_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(p_52));
        {
          u_52 = t;
          if(((r_52 != NULL) && (r_52 != u_52)))
            _fail(u_52);
          else
            r_52 = u_52;
        }
        t = not_null(r_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm a_14 = t;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, y_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_14;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  d_53 :
  if(match_cons(e_53, sym_App_2))
    {
      f_53 = ATgetArgument(e_53, 0);
      g_53 = ATgetArgument(e_53, 1);
      {
        ATerm k_53 = NULL,m_53 = NULL;
        ATerm l_53 = NULL;
        t = SSLgetAnnotations(not_null(e_53));
        {
          l_53 = t;
          if(((k_53 != NULL) && (k_53 != l_53)))
            _fail(l_53);
          else
            k_53 = l_53;
        }
        {
          t = not_null(f_53);
          {
            ATerm o_53 = NULL;
            t = n_74(t);
            {
              m_53 = t;
              {
                t = not_null(g_53);
                {
                  ATerm q_53 = NULL;
                  t = o_74(t);
                  {
                    o_53 = t;
                    {
                      ATerm r_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(m_53), not_null(o_53)), not_null(k_53));
                      {
                        r_53 = t;
                        if(((q_53 != NULL) && (q_53 != r_53)))
                          _fail(r_53);
                        else
                          q_53 = r_53;
                      }
                      t = not_null(q_53);
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
ATerm Con_3 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm))
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
  e_54 = t;
  d_54 :
  if(match_cons(e_54, sym_Con_3))
    {
      f_54 = ATgetArgument(e_54, 0);
      g_54 = ATgetArgument(e_54, 1);
      h_54 = ATgetArgument(e_54, 2);
      {
        ATerm m_54 = NULL,o_54 = NULL;
        ATerm n_54 = NULL;
        t = SSLgetAnnotations(not_null(e_54));
        {
          n_54 = t;
          if(((m_54 != NULL) && (m_54 != n_54)))
            _fail(n_54);
          else
            m_54 = n_54;
        }
        {
          t = not_null(f_54);
          {
            ATerm q_54 = NULL;
            t = k_74(t);
            {
              o_54 = t;
              {
                t = not_null(g_54);
                {
                  ATerm s_54 = NULL;
                  t = l_74(t);
                  {
                    q_54 = t;
                    {
                      t = not_null(h_54);
                      {
                        ATerm u_54 = NULL;
                        t = m_74(t);
                        {
                          s_54 = t;
                          {
                            ATerm v_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(o_54), not_null(q_54), not_null(s_54)), not_null(m_54));
                            {
                              v_54 = t;
                              if(((u_54 != NULL) && (u_54 != v_54)))
                                _fail(v_54);
                              else
                                u_54 = v_54;
                            }
                            t = not_null(u_54);
                          }
                        }
                      }
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
  ATerm d_14 = t;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, z_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_14;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  g_55 = t;
  e_55 :
  if(match_cons(g_55, sym_SRule_1))
    {
      h_55 = ATgetArgument(g_55, 0);
      f_55 :
      if(match_cons(h_55, sym_StratRule_3))
        {
          i_55 = ATgetArgument(h_55, 0);
          j_55 = ATgetArgument(h_55, 1);
          k_55 = ATgetArgument(h_55, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_55)), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_55))), not_null(i_55)));
        }
      else
        {
          if(match_cons(h_55, sym_Rule_3))
            {
              i_55 = ATgetArgument(h_55, 0);
              j_55 = ATgetArgument(h_55, 1);
              k_55 = ATgetArgument(h_55, 2);
              {
                t = not_null(i_55);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(j_55);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(j_55))), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_55))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_55))));
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
ATerm oncetd_1 (ATerm t, ATerm x_100 (ATerm))
{
  ATerm t_55 (ATerm t)
  {
    ATerm g_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_100(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = g_14;
        t = _one(t, t_55);
      }
    return(t);
  }
  t = t_55(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  i_56 = t;
  g_56 :
  if(match_cons(i_56, sym_SRule_1))
    {
      j_56 = ATgetArgument(i_56, 0);
      h_56 :
      if(match_cons(j_56, sym_Rule_3))
        {
          p_56 = ATgetArgument(j_56, 0);
          q_56 = ATgetArgument(j_56, 1);
          r_56 = ATgetArgument(j_56, 2);
          {
            ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
            ATerm d_57 = NULL;
            ATerm j_57 = NULL;
            t = new_0(t);
            {
              d_57 = t;
              {
                if(((a_57 != NULL) && (a_57 != d_57)))
                  _fail(d_57);
                else
                  a_57 = d_57;
                {
                  t = not_null(p_56);
                  {
                    ATerm c_58 = NULL;
                    ATerm a_2 (ATerm t)
                    {
                      ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
                      e_57 = t;
                      x_55 :
                      if(match_cons(e_57, sym_Con_3))
                        {
                          f_57 = ATgetArgument(e_57, 0);
                          h_57 = ATgetArgument(e_57, 1);
                          i_57 = ATgetArgument(e_57, 2);
                          y_55 :
                          if(match_cons(f_57, sym_Var_1))
                            {
                              g_57 = ATgetArgument(f_57, 0);
                              {
                                if(((z_56 != NULL) && (z_56 != g_57)))
                                  _fail(g_57);
                                else
                                  z_56 = g_57;
                                {
                                  if(((x_56 != NULL) && (x_56 != h_57)))
                                    _fail(h_57);
                                  else
                                    x_56 = h_57;
                                  {
                                    if(((v_56 != NULL) && (v_56 != i_57)))
                                      _fail(i_57);
                                    else
                                      v_56 = i_57;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_56));
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
                    t = oncetd_1(t, a_2);
                    {
                      j_57 = t;
                      {
                        if(((b_57 != NULL) && (b_57 != j_57)))
                          _fail(j_57);
                        else
                          b_57 = j_57;
                        {
                          t = not_null(q_56);
                          {
                            ATerm b_2 (ATerm t)
                            {
                              ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,b_58 = NULL;
                              k_57 = t;
                              b_56 :
                              if(match_cons(k_57, sym_Con_3))
                                {
                                  l_57 = ATgetArgument(k_57, 0);
                                  r_57 = ATgetArgument(k_57, 1);
                                  s_57 = ATgetArgument(k_57, 2);
                                  c_56 :
                                  if(match_cons(l_57, sym_Var_1))
                                    {
                                      m_57 = ATgetArgument(l_57, 0);
                                      d_56 :
                                      if(match_cons(s_57, sym_Call_2))
                                        {
                                          t_57 = ATgetArgument(s_57, 0);
                                          b_58 = ATgetArgument(s_57, 1);
                                          e_56 :
                                          if(((ATermList) b_58 == ATempty))
                                            {
                                              {
                                                if(((z_56 != NULL) && (z_56 != m_57)))
                                                  _fail(m_57);
                                                else
                                                  z_56 = m_57;
                                                {
                                                  if(((y_56 != NULL) && (y_56 != r_57)))
                                                    _fail(r_57);
                                                  else
                                                    y_56 = r_57;
                                                  {
                                                    if(((w_56 != NULL) && (w_56 != t_57)))
                                                      _fail(t_57);
                                                    else
                                                      w_56 = t_57;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_57));
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
                            t = oncetd_1(t, b_2);
                            {
                              c_58 = t;
                              if(((c_57 != NULL) && (c_57 != c_58)))
                                _fail(c_58);
                              else
                                c_57 = c_58;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_57)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_57), not_null(c_57), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_56), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(w_56), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_56), not_null(y_56), term_q_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_56)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_57)))))));
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
  ATerm c_2 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm t_58 = NULL,w_58 = NULL,x_58 = NULL;
  t_58 = t;
  s_58 :
  if(match_cons(t_58, sym_Scope_2))
    {
      w_58 = ATgetArgument(t_58, 0);
      x_58 = ATgetArgument(t_58, 1);
      {
        ATerm e_59 = NULL;
        ATerm m_59 = NULL;
        t = not_null(w_58);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              ATerm j_59 = NULL,k_59 = NULL;
              j_59 = t;
              q_58 :
              if(match_cons(j_59, sym_ListVar_1))
                {
                  k_59 = ATgetArgument(j_59, 0);
                  t = not_null(k_59);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, e_2);
            return(t);
          }
          t = map_1(t, d_2);
          {
            m_59 = t;
            if(((e_59 != NULL) && (e_59 != m_59)))
              _fail(m_59);
            else
              e_59 = m_59;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_59), not_null(x_58));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DesugarListMatching_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm g_2 (ATerm t)
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, g_2);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm w_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            LocalPopChoice(a_15);
          }
        else
          {
            t = w_14;
            {
              ATerm h_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ListMatch_0(t);
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = h_15;
                  t = ListBuild_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, h_2);
    }
    return(t);
  }
  t = topdown_1(t, f_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  t_59 = t;
  s_59 :
  if(match_cons(t_59, sym_SDef_3))
    {
      u_59 = ATgetArgument(t_59, 0);
      v_59 = ATgetArgument(t_59, 1);
      w_59 = ATgetArgument(t_59, 2);
      {
        ATerm a_60 = NULL;
        ATerm b_60 = NULL;
        t = not_null(w_59);
        {
          t = tvars_0(t);
          {
            b_60 = t;
            if(((a_60 != NULL) && (a_60 != b_60)))
              _fail(b_60);
            else
              a_60 = b_60;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_59), not_null(v_59), (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_60), not_null(w_59)));
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
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  h_60 = t;
  g_60 :
  if(match_cons(h_60, sym_RDef_3))
    {
      i_60 = ATgetArgument(h_60, 0);
      j_60 = ATgetArgument(h_60, 1);
      k_60 = ATgetArgument(h_60, 2);
      {
        ATerm s_60 = NULL;
        ATerm t_60 = NULL;
        t = not_null(k_60);
        {
          t = tvars_0(t);
          {
            t_60 = t;
            if(((s_60 != NULL) && (s_60 != t_60)))
              _fail(t_60);
            else
              s_60 = t_60;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_60), not_null(j_60), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_60), (ATerm) ATmakeAppl(sym_SRule_1, not_null(k_60))));
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
  ATerm f_61 = NULL;
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(f_61)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  w_61 = t;
  t_61 :
  if(match_cons(w_61, sym_OpDecl_2))
    {
      x_61 = ATgetArgument(w_61, 0);
      y_61 = ATgetArgument(w_61, 1);
      u_61 :
      if(match_cons(y_61, sym_FunType_2))
        {
          z_61 = ATgetArgument(y_61, 0);
          v_61 = ATgetArgument(y_61, 1);
          {
            ATerm d_62 = NULL,e_62 = NULL,m_62 = NULL;
            ATerm j_15;
            j_15 = t;
            {
              ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL;
              t = not_null(z_61);
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm f_62 = NULL,h_62 = NULL;
                  t = new_0(t);
                  {
                    ATerm k_15;
                    k_15 = t;
                    {
                      ATerm g_62 = NULL;
                      g_62 = t;
                      if(((f_62 != NULL) && (f_62 != g_62)))
                        _fail(g_62);
                      else
                        f_62 = g_62;
                    }
                    t = k_15;
                    {
                      ATerm i_62 = NULL;
                      i_62 = t;
                      if(((h_62 != NULL) && (h_62 != i_62)))
                        _fail(i_62);
                      else
                        h_62 = i_62;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(f_62), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15)), not_null(h_62));
                    }
                  }
                  return(t);
                }
                t = map_1(t, i_2);
                {
                  t = unzip_0(t);
                  {
                    j_62 = t;
                    r_61 :
                    if(match_cons(j_62, sym__2))
                      {
                        k_62 = ATgetArgument(j_62, 0);
                        l_62 = ATgetArgument(j_62, 1);
                        {
                          if(((d_62 != NULL) && (d_62 != k_62)))
                            _fail(k_62);
                          else
                            d_62 = k_62;
                          if(((e_62 != NULL) && (e_62 != l_62)))
                            _fail(l_62);
                          else
                            e_62 = l_62;
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
            t = j_15;
            {
              ATerm n_62 = NULL;
              t = not_null(e_62);
              {
                t = map_1(t, MkCall_0);
                {
                  n_62 = t;
                  if(((m_62 != NULL) && (m_62 != n_62)))
                    _fail(n_62);
                  else
                    m_62 = n_62;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_61), not_null(d_62), (ATerm) ATmakeAppl(sym_Cong_2, not_null(x_61), not_null(m_62)));
            }
          }
        }
      else
        {
          if(match_cons(y_61, sym_ConstType_1))
            {
              z_61 = ATgetArgument(y_61, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(x_61), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(x_61), (ATerm) ATempty));
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
  ATerm z_62 = NULL,a_63 = NULL;
  z_62 = t;
  y_62 :
  if(match_cons(z_62, sym_Constructors_1))
    {
      a_63 = ATgetArgument(z_62, 0);
      {
        t = not_null(a_63);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(z_62, sym_Sorts_1))
        {
          a_63 = ATgetArgument(z_62, 0);
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
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,d_64 = NULL;
  t_63 = t;
  j_63 :
  if(match_cons(t_63, sym_Specification_1))
    {
      u_63 = ATgetArgument(t_63, 0);
      k_63 :
      if(((ATgetType(u_63) == AT_LIST) && ((ATermList) u_63 != ATempty)))
        {
          v_63 = ATgetFirst((ATermList) u_63);
          x_63 = (ATerm) ATgetNext((ATermList) u_63);
          p_63 :
          if(match_cons(v_63, sym_Signature_1))
            {
              w_63 = ATgetArgument(v_63, 0);
              q_63 :
              if(((ATgetType(x_63) == AT_LIST) && ((ATermList) x_63 != ATempty)))
                {
                  y_63 = ATgetFirst((ATermList) x_63);
                  d_64 = (ATerm) ATgetNext((ATermList) x_63);
                  r_63 :
                  if(match_cons(y_63, sym_Strategies_1))
                    {
                      z_63 = ATgetArgument(y_63, 0);
                      s_63 :
                      if(((ATermList) d_64 == ATempty))
                        {
                          {
                            ATerm g_64 = NULL;
                            ATerm h_64 = NULL,n_64 = NULL,v_64 = NULL;
                            ATerm o_15;
                            o_15 = t;
                            {
                              ATerm m_64 = NULL;
                              t = not_null(w_63);
                              {
                                t = congdefs_0(t);
                                {
                                  m_64 = t;
                                  if(((h_64 != NULL) && (h_64 != m_64)))
                                    _fail(m_64);
                                  else
                                    h_64 = m_64;
                                }
                              }
                            }
                            t = o_15;
                            {
                              ATerm u_64 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(z_63)), (ATerm) ATmakeAppl(sym_RDef_3, term_q_15, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_s_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_r_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15))), (ATerm) ATmakeAppl(sym_Rule_3, term_c_16, term_g_17, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_17), term_j_17)))));
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  ATerm n_17 = t;
                                  int o_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(o_17);
                                    }
                                  else
                                    {
                                      t = n_17;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, j_2);
                                {
                                  u_64 = t;
                                  if(((n_64 != NULL) && (n_64 != u_64)))
                                    _fail(u_64);
                                  else
                                    n_64 = u_64;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_64), not_null(n_64));
                                {
                                  t = conc_0(t);
                                  {
                                    v_64 = t;
                                    if(((g_64 != NULL) && (g_64 != v_64)))
                                      _fail(v_64);
                                    else
                                      g_64 = v_64;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_64))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(w_63))));
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
  ATerm d_65 = NULL;
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  t = term_p_17;
  {
    ATerm k_2 (ATerm t)
    {
      t = term_q_17;
      return(t);
    }
    t = rewrite_1(t, k_2);
    {
      c_66 = t;
      b_65 :
      if(match_cons(c_66, sym_Defined_2))
        {
          d_66 = ATgetArgument(c_66, 0);
          e_66 = ATgetArgument(c_66, 1);
          c_65 :
          if(match_string(d_66, "e_0"))
            {
              if(((d_65 != NULL) && (d_65 != e_66)))
                _fail(e_66);
              else
                d_65 = e_66;
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
  t = not_null(d_65);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm x_67 = NULL;
  x_67 = t;
  t = SSL_int_to_string(not_null(x_67));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  f_68 :
  if(match_cons(g_68, sym_Op_2))
    {
      h_68 = ATgetArgument(g_68, 0);
      i_68 = ATgetArgument(g_68, 1);
      {
        ATerm l_68 = NULL,m_68 = NULL;
        ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
        t = term_p_17;
        {
          ATerm l_2 (ATerm t)
          {
            t = term_r_17;
            return(t);
          }
          t = rewrite_1(t, l_2);
          {
            n_68 = t;
            d_68 :
            if(match_cons(n_68, sym_Defined_3))
              {
                o_68 = ATgetArgument(n_68, 0);
                p_68 = ATgetArgument(n_68, 1);
                q_68 = ATgetArgument(n_68, 2);
                e_68 :
                if(match_string(o_68, "f_0"))
                  {
                    ATerm r_68 = NULL;
                    if(((m_68 != NULL) && (m_68 != p_68)))
                      _fail(p_68);
                    else
                      m_68 = p_68;
                    {
                      if(((l_68 != NULL) && (l_68 != q_68)))
                        _fail(q_68);
                      else
                        l_68 = q_68;
                      {
                        ATerm s_68 = NULL;
                        t = not_null(i_68);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              s_68 = t;
                              if(((r_68 != NULL) && (r_68 != s_68)))
                                _fail(s_68);
                              else
                                r_68 = s_68;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_18), not_null(r_68)), term_d_18), not_null(h_68)), term_c_18), term_b_18), not_null(m_68)), term_a_18), not_null(l_68)), term_z_17));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_68), not_null(i_68));
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
  ATerm y_68 = NULL,z_68 = NULL,c_69 = NULL;
  y_68 = t;
  x_68 :
  if(match_cons(y_68, sym__2))
    {
      z_68 = ATgetArgument(y_68, 0);
      c_69 = ATgetArgument(y_68, 1);
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(z_68), not_null(c_69));
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            t = SSL_subtr(not_null(z_68), not_null(c_69));
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
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
  i_69 = t;
  h_69 :
  if(match_cons(i_69, sym__2))
    {
      j_69 = ATgetArgument(i_69, 0);
      k_69 = ATgetArgument(i_69, 1);
      {
        ATerm h_18;
        h_18 = t;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_69), not_null(k_69));
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              t = SSL_gtr(not_null(j_69), not_null(k_69));
            }
        }
        t = h_18;
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
  ATerm q_69 = NULL;
  ATerm o_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
      r_69 = t;
      p_69 :
      if(match_cons(r_69, sym__2))
        {
          s_69 = ATgetArgument(r_69, 0);
          t_69 = ATgetArgument(r_69, 1);
          {
            if(((q_69 != NULL) && (q_69 != s_69)))
              _fail(s_69);
            else
              q_69 = s_69;
            if(((q_69 != NULL) && (q_69 != t_69)))
              _fail(t_69);
            else
              q_69 = t_69;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_18);
    }
  else
    {
      t = o_18;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
    d_70 = t;
    w_69 :
    if(match_cons(d_70, sym__2))
      {
        e_70 = ATgetArgument(d_70, 0);
        f_70 = ATgetArgument(d_70, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_70), not_null(f_70), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
    i_70 = t;
    y_69 :
    if(match_cons(i_70, sym__3))
      {
        j_70 = ATgetArgument(i_70, 0);
        k_70 = ATgetArgument(i_70, 1);
        l_70 = ATgetArgument(i_70, 2);
        z_69 :
        if(match_int(j_70, 0))
          {
            t = not_null(l_70);
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
  ATerm o_2 (ATerm t)
  {
    ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
    o_70 = t;
    c_70 :
    if(match_cons(o_70, sym__3))
      {
        p_70 = ATgetArgument(o_70, 0);
        q_70 = ATgetArgument(o_70, 1);
        r_70 = ATgetArgument(o_70, 2);
        {
          ATerm v_70 = NULL;
          ATerm u_18;
          u_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_70), term_x_18);
            t = geq_0(t);
          }
          t = u_18;
          {
            ATerm w_70 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_70), term_x_18);
            {
              t = subt_0(t);
              {
                w_70 = t;
                if(((v_70 != NULL) && (v_70 != w_70)))
                  _fail(w_70);
                else
                  v_70 = w_70;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_70), not_null(q_70), (ATerm) ATinsert(CheckATermList(not_null(r_70)), not_null(q_70)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
  k_71 = t;
  i_71 :
  if(match_cons(k_71, sym_Op_2))
    {
      l_71 = ATgetArgument(k_71, 0);
      m_71 = ATgetArgument(k_71, 1);
      j_71 :
      if(match_string(l_71, ""))
        {
          ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL;
          ATerm y_18;
          y_18 = t;
          {
            ATerm s_71 = NULL;
            t = not_null(m_71);
            {
              ATerm t_71 = NULL;
              t = length_0(t);
              {
                s_71 = t;
                {
                  if(((p_71 != NULL) && (p_71 != s_71)))
                    _fail(s_71);
                  else
                    p_71 = s_71;
                  {
                    ATerm u_71 = NULL,w_71 = NULL;
                    t = term_e_9;
                    {
                      t_71 = t;
                      {
                        if(((o_71 != NULL) && (o_71 != t_71)))
                          _fail(t_71);
                        else
                          o_71 = t_71;
                        {
                          ATerm z_18;
                          z_18 = t;
                          {
                            ATerm v_71 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_71), term_b_19);
                            {
                              t = copy_0(t);
                              {
                                v_71 = t;
                                if(((u_71 != NULL) && (u_71 != v_71)))
                                  _fail(v_71);
                                else
                                  u_71 = v_71;
                              }
                            }
                          }
                          t = z_18;
                          {
                            ATerm x_71 = NULL,z_71 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, not_null(u_71), term_b_19));
                            {
                              w_71 = t;
                              {
                                if(((q_71 != NULL) && (q_71 != w_71)))
                                  _fail(w_71);
                                else
                                  q_71 = w_71;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm y_71 = NULL;
                                    ATerm c_19 = t;
                                    int d_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(d_19);
                                      }
                                    else
                                      {
                                        t = c_19;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      y_71 = t;
                                      if(((x_71 != NULL) && (x_71 != y_71)))
                                        _fail(y_71);
                                      else
                                        x_71 = y_71;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(x_71)), not_null(q_71));
                                      {
                                        z_71 = t;
                                        {
                                          if(((r_71 != NULL) && (r_71 != z_71)))
                                            _fail(z_71);
                                          else
                                            r_71 = z_71;
                                          {
                                            ATerm e_19;
                                            e_19 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATmakeAppl(sym_Defined_2, term_f_19, not_null(r_71)));
                                              {
                                                ATerm p_2 (ATerm t)
                                                {
                                                  t = term_q_17;
                                                  return(t);
                                                }
                                                t = assert_1(t, p_2);
                                              }
                                            }
                                            t = e_19;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = y_18;
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
  ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
  j_72 = t;
  i_72 :
  if(((ATgetType(j_72) == AT_LIST) && ((ATermList) j_72 != ATempty)))
    {
      k_72 = ATgetFirst((ATermList) j_72);
      l_72 = (ATerm) ATgetNext((ATermList) j_72);
      t = not_null(k_72);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
  r_72 = t;
  q_72 :
  if(match_cons(r_72, sym__2))
    {
      s_72 = ATgetArgument(r_72, 0);
      t_72 = ATgetArgument(r_72, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_72), not_null(t_72));
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
ATerm rewrite_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm z_72 = NULL;
  ATerm b_73 = NULL;
  z_72 = t;
  {
    ATerm c_73 = NULL;
    t = term_g_19;
    {
      t = y_87(t);
      {
        c_73 = t;
        if(((b_73 != NULL) && (b_73 != c_73)))
          _fail(c_73);
        else
          b_73 = c_73;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_73), not_null(z_72));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
  s_73 = t;
  r_73 :
  if(match_cons(s_73, sym_Op_2))
    {
      t_73 = ATgetArgument(s_73, 0);
      u_73 = ATgetArgument(s_73, 1);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_73 = NULL;
            ATerm z_73 = NULL;
            t = not_null(u_73);
            {
              x_73 = t;
              {
                t = length_0(t);
                {
                  z_73 = t;
                  {
                    ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(t_73), not_null(z_73));
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = term_n_19;
                        return(t);
                      }
                      t = rewrite_1(t, q_2);
                      {
                        p_74 = t;
                        k_73 :
                        if(match_cons(p_74, sym_Defined_2))
                          {
                            q_74 = ATgetArgument(p_74, 0);
                            r_74 = ATgetArgument(p_74, 1);
                            l_73 :
                            if(match_string(q_74, "d_0"))
                              {
                                if(((t_73 != NULL) && (t_73 != r_74)))
                                  _fail(r_74);
                                else
                                  t_73 = r_74;
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_73), not_null(x_73));
                  }
                }
              }
            }
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm w_74 = NULL;
              ATerm y_74 = NULL;
              t = not_null(u_73);
              {
                w_74 = t;
                {
                  t = length_0(t);
                  {
                    y_74 = t;
                    {
                      ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(t_73), not_null(y_74));
                      {
                        ATerm r_2 (ATerm t)
                        {
                          t = term_n_19;
                          return(t);
                        }
                        t = rewrite_1(t, r_2);
                        {
                          a_75 = t;
                          p_73 :
                          if(match_cons(a_75, sym_Defined_2))
                            {
                              b_75 = ATgetArgument(a_75, 0);
                              c_75 = ATgetArgument(a_75, 1);
                              q_73 :
                              if(match_string(b_75, "c_0"))
                                {
                                  if(((t_73 != NULL) && (t_73 != c_75)))
                                    _fail(c_75);
                                  else
                                    t_73 = c_75;
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_73), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm f_102 (ATerm))
{
  ATerm x_75 (ATerm t)
  {
    ATerm r_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_102(t);
        {
          ATerm s_2 (ATerm t)
          {
            t = try_1(t, x_75);
            return(t);
          }
          t = _all(t, s_2);
        }
        LocalPopChoice(t_19);
      }
    else
      {
        t = r_19;
        t = _some(t, x_75);
      }
    return(t);
  }
  t = x_75(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL;
  d_76 = t;
  c_76 :
  if(match_cons(d_76, sym__2))
    {
      e_76 = ATgetArgument(d_76, 0);
      f_76 = ATgetArgument(d_76, 1);
      {
        ATerm w_19;
        w_19 = t;
        {
          ATerm i_76 = NULL;
          ATerm j_76 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_76), not_null(f_76));
          {
            ATerm x_19 = t;
            int y_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(y_19);
              }
            else
              {
                t = x_19;
                t = (ATerm) ATempty;
              }
            {
              j_76 = t;
              if(((i_76 != NULL) && (i_76 != j_76)))
                _fail(j_76);
              else
                i_76 = j_76;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_76), not_null(f_76), not_null(i_76));
            t = table_put_0(t);
          }
        }
        t = w_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  ATerm z_19;
  z_19 = t;
  {
    ATerm v_76 = NULL;
    ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
    t = t_87(t);
    {
      v_76 = t;
      {
        if(((t_76 != NULL) && (t_76 != v_76)))
          _fail(v_76);
        else
          t_76 = v_76;
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_76), term_c_20);
              t = table_get_0(t);
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            w_76 = t;
            r_76 :
            if(((ATgetType(w_76) == AT_LIST) && ((ATermList) w_76 != ATempty)))
              {
                x_76 = ATgetFirst((ATermList) w_76);
                y_76 = (ATerm) ATgetNext((ATermList) w_76);
                {
                  if(((u_76 != NULL) && (u_76 != x_76)))
                    _fail(x_76);
                  else
                    u_76 = x_76;
                  {
                    if(((s_76 != NULL) && (s_76 != y_76)))
                      _fail(y_76);
                    else
                      s_76 = y_76;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_76), term_c_20, not_null(s_76));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(u_76);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm z_76 = NULL;
                              z_76 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_76), not_null(z_76));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, t_2);
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
  t = z_19;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm y_103 (ATerm), ATerm z_103 (ATerm))
{
  ATerm d_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_103(t);
      t = z_103(t);
      LocalPopChoice(g_20);
    }
  else
    {
      t = d_20;
      {
        t = z_103(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm o_77 = NULL;
  ATerm h_20;
  h_20 = t;
  {
    ATerm p_77 = NULL;
    ATerm q_77 = NULL;
    t = s_87(t);
    {
      p_77 = t;
      {
        if(((o_77 != NULL) && (o_77 != p_77)))
          _fail(p_77);
        else
          o_77 = p_77;
        {
          ATerm r_77 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_77), term_c_20);
          {
            ATerm k_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_20);
              }
            else
              {
                t = k_20;
                t = (ATerm) ATempty;
              }
            {
              r_77 = t;
              if(((q_77 != NULL) && (q_77 != r_77)))
                _fail(r_77);
              else
                q_77 = r_77;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_77), term_c_20, (ATerm) ATinsert(CheckATermList(not_null(q_77)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = h_20;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  t = begin_scope_1(t, u_87);
  {
    ATerm u_2 (ATerm t)
    {
      t = end_scope_1(t, u_87);
      return(t);
    }
    t = restore_always_2(t, v_87, u_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm))
{
  ATerm w_77 = NULL,x_77 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm v_20;
    v_20 = t;
    {
      ATerm y_77 = NULL;
      ATerm b_78 = NULL;
      t = e_79(t);
      {
        y_77 = t;
        {
          if(((w_77 != NULL) && (w_77 != y_77)))
            _fail(y_77);
          else
            w_77 = y_77;
          {
            t = f_79(t);
            {
              b_78 = t;
              if(((x_77 != NULL) && (x_77 != b_78)))
                _fail(b_78);
              else
                x_77 = b_78;
            }
          }
        }
      }
    }
    t = v_20;
    {
      ATerm e_21;
      e_21 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATmakeAppl(sym_Defined_3, term_f_21, not_null(w_77), not_null(x_77)));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_r_17;
            return(t);
          }
          t = assert_1(t, x_2);
        }
      }
      t = e_21;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm g_21 = t;
          if((PushChoice() == 0))
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_21;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, y_2);
      }
    }
    return(t);
  }
  t = scope_2(t, v_2, w_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,n_78 = NULL,s_78 = NULL;
  j_78 = t;
  g_78 :
  if(match_cons(j_78, sym_SDef_3))
    {
      k_78 = ATgetArgument(j_78, 0);
      n_78 = ATgetArgument(j_78, 1);
      s_78 = ATgetArgument(j_78, 2);
      {
        t = not_null(s_78);
        {
          ATerm z_2 (ATerm t)
          {
            t = not_null(k_78);
            return(t);
          }
          ATerm a_3 (ATerm t)
          {
            t = term_j_21;
            return(t);
          }
          t = check_constructors_p__2(t, z_2, a_3);
        }
      }
    }
  else
    {
      if(match_cons(j_78, sym_RDef_3))
        {
          k_78 = ATgetArgument(j_78, 0);
          n_78 = ATgetArgument(j_78, 1);
          s_78 = ATgetArgument(j_78, 2);
          {
            t = not_null(s_78);
            {
              ATerm b_3 (ATerm t)
              {
                t = not_null(k_78);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_k_21;
                return(t);
              }
              t = check_constructors_p__2(t, b_3, c_3);
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
ATerm assert_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
  v_79 = t;
  u_79 :
  if(match_cons(v_79, sym__2))
    {
      w_79 = ATgetArgument(v_79, 0);
      x_79 = ATgetArgument(v_79, 1);
      {
        ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
        ATerm l_21;
        l_21 = t;
        {
          ATerm d_80 = NULL;
          ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
          t = w_87(t);
          {
            d_80 = t;
            {
              if(((a_80 != NULL) && (a_80 != d_80)))
                _fail(d_80);
              else
                a_80 = d_80;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_80), not_null(w_79), not_null(x_79));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_21 = t;
                    int q_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_80), term_c_20);
                        t = table_get_0(t);
                        LocalPopChoice(q_21);
                      }
                    else
                      {
                        t = m_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_80 = t;
                      t_79 :
                      if(((ATgetType(e_80) == AT_LIST) && ((ATermList) e_80 != ATempty)))
                        {
                          f_80 = ATgetFirst((ATermList) e_80);
                          g_80 = (ATerm) ATgetNext((ATermList) e_80);
                          {
                            if(((b_80 != NULL) && (b_80 != f_80)))
                              _fail(f_80);
                            else
                              b_80 = f_80;
                            {
                              if(((c_80 != NULL) && (c_80 != g_80)))
                                _fail(g_80);
                              else
                                c_80 = g_80;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_80), term_c_20, (ATerm) ATinsert(CheckATermList(not_null(c_80)), (ATerm) ATinsert(CheckATermList(not_null(b_80)), not_null(w_79))));
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
        t = l_21;
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
  ATerm d_3 (ATerm t)
  {
    t = term_t_21;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_x_18;
    return(t);
  }
  t = foldr_3(t, d_3, add_0, e_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  z_80 = t;
  w_80 :
  if(match_cons(z_80, sym_OpDecl_2))
    {
      a_81 = ATgetArgument(z_80, 0);
      b_81 = ATgetArgument(z_80, 1);
      x_80 :
      if(match_cons(b_81, sym_FunType_2))
        {
          c_81 = ATgetArgument(b_81, 0);
          y_80 = ATgetArgument(b_81, 1);
          {
            ATerm g_81 = NULL;
            ATerm w_21;
            w_21 = t;
            {
              ATerm h_81 = NULL;
              t = not_null(c_81);
              {
                t = length_0(t);
                {
                  h_81 = t;
                  if(((g_81 != NULL) && (g_81 != h_81)))
                    _fail(h_81);
                  else
                    g_81 = h_81;
                }
              }
            }
            t = w_21;
            {
              ATerm x_21;
              x_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(a_81), not_null(g_81)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_21, not_null(a_81)));
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = term_n_19;
                    return(t);
                  }
                  t = assert_1(t, f_3);
                }
              }
              t = x_21;
            }
          }
        }
      else
        {
          if(match_cons(b_81, sym_ConstType_1))
            {
              c_81 = ATgetArgument(b_81, 0);
              {
                ATerm k_81 = NULL;
                ATerm f_22;
                f_22 = t;
                {
                  ATerm l_81 = NULL;
                  t = term_t_21;
                  {
                    l_81 = t;
                    if(((k_81 != NULL) && (k_81 != l_81)))
                      _fail(l_81);
                    else
                      k_81 = l_81;
                  }
                }
                t = f_22;
                {
                  ATerm g_22;
                  g_22 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(a_81), not_null(k_81)), (ATerm) ATmakeAppl(sym_Defined_2, term_p_22, not_null(a_81)));
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = term_n_19;
                        return(t);
                      }
                      t = assert_1(t, g_3);
                    }
                  }
                  t = g_22;
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
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
  g_83 = t;
  x_81 :
  if(match_cons(g_83, sym_Specification_1))
    {
      h_83 = ATgetArgument(g_83, 0);
      y_81 :
      if(((ATgetType(h_83) == AT_LIST) && ((ATermList) h_83 != ATempty)))
        {
          i_83 = ATgetFirst((ATermList) h_83);
          n_83 = (ATerm) ATgetNext((ATermList) h_83);
          z_81 :
          if(match_cons(i_83, sym_Signature_1))
            {
              j_83 = ATgetArgument(i_83, 0);
              c_82 :
              if(((ATgetType(j_83) == AT_LIST) && ((ATermList) j_83 != ATempty)))
                {
                  k_83 = ATgetFirst((ATermList) j_83);
                  m_83 = (ATerm) ATgetNext((ATermList) j_83);
                  d_82 :
                  if(match_cons(k_83, sym_Constructors_1))
                    {
                      l_83 = ATgetArgument(k_83, 0);
                      e_82 :
                      if(((ATermList) m_83 == ATempty))
                        {
                          f_82 :
                          if(((ATgetType(n_83) == AT_LIST) && ((ATermList) n_83 != ATempty)))
                            {
                              o_83 = ATgetFirst((ATermList) n_83);
                              q_83 = (ATerm) ATgetNext((ATermList) n_83);
                              e_83 :
                              if(match_cons(o_83, sym_Strategies_1))
                                {
                                  p_83 = ATgetArgument(o_83, 0);
                                  f_83 :
                                  if(((ATermList) q_83 == ATempty))
                                    {
                                      {
                                        ATerm t_83 = NULL,u_83 = NULL,y_83 = NULL;
                                        ATerm q_22;
                                        q_22 = t;
                                        {
                                          ATerm v_83 = NULL;
                                          ATerm w_83 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_83)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_19), term_b_19), term_b_19), term_b_19), term_b_19), term_b_19))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_19), term_b_19), term_b_19), term_b_19), term_b_19))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_b_19), term_b_19), term_b_19), term_b_19))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_b_19), term_b_19), term_b_19))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_e_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_b_19), term_b_19))), term_s_22);
                                          {
                                            v_83 = t;
                                            {
                                              if(((t_83 != NULL) && (t_83 != v_83)))
                                                _fail(v_83);
                                              else
                                                t_83 = v_83;
                                              {
                                                t = not_null(t_83);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(p_83);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        w_83 = t;
                                                        v_81 :
                                                        if(((ATermList) w_83 == ATempty))
                                                          {
                                                            {
                                                              ATerm x_83 = NULL;
                                                              ATerm t_22 = t;
                                                              int u_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(u_22);
                                                                }
                                                              else
                                                                {
                                                                  t = t_22;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                x_83 = t;
                                                                if(((u_83 != NULL) && (u_83 != x_83)))
                                                                  _fail(x_83);
                                                                else
                                                                  u_83 = x_83;
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
                                        t = q_22;
                                        {
                                          ATerm z_83 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(t_83));
                                          {
                                            t = conc_0(t);
                                            {
                                              z_83 = t;
                                              if(((y_83 != NULL) && (y_83 != z_83)))
                                                _fail(z_83);
                                              else
                                                y_83 = z_83;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_83))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(y_83))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm y_22;
    y_22 = t;
    {
      ATerm z_22 = t;
      if((PushChoice() == 0))
        {
          ATerm m_84 = NULL;
          t = n_80(t);
          {
            m_84 = t;
            l_84 :
            if(((ATermList) m_84 == ATempty))
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
          t = z_22;
        }
    }
    t = y_22;
    {
      ATerm i_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = ExpOverlay_1(t, n_80);
          return(t);
        }
        t = try_1(t, j_3);
        return(t);
      }
      t = topdown_1(t, i_3);
    }
    return(t);
  }
  t = try_1(t, h_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
  w_84 = t;
  u_84 :
  if(match_cons(w_84, sym_BuildDefault_1))
    {
      x_84 = ATgetArgument(w_84, 0);
      t = term_q_11;
    }
  else
    {
      if(match_cons(w_84, sym_Real_1))
        {
          x_84 = ATgetArgument(w_84, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(x_84)));
        }
      else
        {
          if(match_cons(w_84, sym_Int_1))
            {
              x_84 = ATgetArgument(w_84, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(x_84)));
            }
          else
            {
              if(match_cons(w_84, sym_Str_1))
                {
                  x_84 = ATgetArgument(w_84, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(x_84)));
                }
              else
                {
                  if(match_cons(w_84, sym_Anno_2))
                    {
                      x_84 = ATgetArgument(w_84, 0);
                      v_84 = ATgetArgument(w_84, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_d_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_84)), not_null(x_84)));
                    }
                  else
                    {
                      if(match_cons(w_84, sym_Op_2))
                        {
                          x_84 = ATgetArgument(w_84, 0);
                          v_84 = ATgetArgument(w_84, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_84)), not_null(v_84));
                        }
                      else
                        {
                          if(match_cons(w_84, sym_Var_1))
                            {
                              x_84 = ATgetArgument(w_84, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_84)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm o_76 (ATerm), ATerm p_76 (ATerm))
{
  ATerm y_85 = NULL,c_86 = NULL,d_86 = NULL;
  y_85 = t;
  x_85 :
  if(match_cons(y_85, sym_Op_2))
    {
      c_86 = ATgetArgument(y_85, 0);
      d_86 = ATgetArgument(y_85, 1);
      {
        ATerm h_86 = NULL,j_86 = NULL;
        ATerm i_86 = NULL;
        t = SSLgetAnnotations(not_null(y_85));
        {
          i_86 = t;
          if(((h_86 != NULL) && (h_86 != i_86)))
            _fail(i_86);
          else
            h_86 = i_86;
        }
        {
          t = not_null(c_86);
          {
            ATerm n_86 = NULL;
            t = o_76(t);
            {
              j_86 = t;
              {
                t = not_null(d_86);
                {
                  ATerm p_86 = NULL;
                  t = p_76(t);
                  {
                    n_86 = t;
                    {
                      ATerm q_86 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_86), not_null(n_86)), not_null(h_86));
                      {
                        q_86 = t;
                        if(((p_86 != NULL) && (p_86 != q_86)))
                          _fail(q_86);
                        else
                          p_86 = q_86;
                      }
                      t = not_null(p_86);
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
ATerm trm_to_cong_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, l_3);
    return(t);
  }
  t = try_1(t, k_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL;
  c_87 = t;
  b_87 :
  if(match_cons(c_87, sym_Overlay_3))
    {
      d_87 = ATgetArgument(c_87, 0);
      e_87 = ATgetArgument(c_87, 1);
      f_87 = ATgetArgument(c_87, 2);
      {
        ATerm j_87 = NULL,n_87 = NULL;
        ATerm g_23;
        g_23 = t;
        {
          ATerm m_87 = NULL;
          t = not_null(e_87);
          {
            ATerm m_3 (ATerm t)
            {
              ATerm k_87 = NULL;
              ATerm l_87 = NULL;
              l_87 = t;
              if(((k_87 != NULL) && (k_87 != l_87)))
                _fail(l_87);
              else
                k_87 = l_87;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_87), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15));
              return(t);
            }
            t = map_1(t, m_3);
            {
              m_87 = t;
              if(((j_87 != NULL) && (j_87 != m_87)))
                _fail(m_87);
              else
                j_87 = m_87;
            }
          }
        }
        t = g_23;
        {
          ATerm o_87 = NULL;
          t = not_null(f_87);
          {
            t = trm_to_cong_0(t);
            {
              o_87 = t;
              if(((n_87 != NULL) && (n_87 != o_87)))
                _fail(o_87);
              else
                n_87 = o_87;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_87), not_null(j_87), not_null(n_87));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm k_79 (ATerm))
{
  t = Scope_2(t, k_79, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm i_88 = NULL,j_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym_Var_1))
    {
      j_88 = ATgetArgument(i_88, 0);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_88 = NULL,o_88 = NULL;
            ATerm n_88 = NULL;
            t = SSLgetAnnotations(not_null(i_88));
            {
              n_88 = t;
              if(((m_88 != NULL) && (m_88 != n_88)))
                _fail(n_88);
              else
                m_88 = n_88;
            }
            {
              t = not_null(j_88);
              {
                ATerm q_88 = NULL;
                t = s_0(t);
                {
                  o_88 = t;
                  {
                    ATerm r_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_88)), not_null(m_88));
                    {
                      r_88 = t;
                      if(((q_88 != NULL) && (q_88 != r_88)))
                        _fail(r_88);
                      else
                        q_88 = r_88;
                    }
                    t = not_null(q_88);
                  }
                }
              }
            }
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm u_88 = NULL,w_88 = NULL;
              ATerm v_88 = NULL;
              t = SSLgetAnnotations(not_null(i_88));
              {
                v_88 = t;
                if(((u_88 != NULL) && (u_88 != v_88)))
                  _fail(v_88);
                else
                  u_88 = v_88;
              }
              {
                t = not_null(j_88);
                {
                  ATerm y_88 = NULL;
                  t = s_0(t);
                  {
                    w_88 = t;
                    {
                      ATerm z_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_88)), not_null(u_88));
                      {
                        z_88 = t;
                        if(((y_88 != NULL) && (y_88 != z_88)))
                          _fail(z_88);
                        else
                          y_88 = z_88;
                      }
                      t = not_null(y_88);
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
ATerm DistBinding_2 (ATerm t, ATerm a_82 (ATerm), ATerm b_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL;
  o_89 = t;
  n_89 :
  if(match_cons(o_89, sym__3))
    {
      p_89 = ATgetArgument(o_89, 0);
      q_89 = ATgetArgument(o_89, 1);
      r_89 = ATgetArgument(o_89, 2);
      {
        t = not_null(p_89);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm v_89 = NULL;
            v_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_89), not_null(r_89));
              t = a_82(t);
            }
            return(t);
          }
          ATerm o_3 (ATerm t)
          {
            ATerm x_89 = NULL;
            x_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_89), not_null(q_89));
              t = a_82(t);
            }
            return(t);
          }
          t = b_82(t, n_3, o_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm, ATerm (ATerm)))
{
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL;
  k_90 = t;
  j_90 :
  if(match_cons(k_90, sym__2))
    {
      l_90 = ATgetArgument(k_90, 0);
      m_90 = ATgetArgument(k_90, 1);
      {
        ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL,c_91 = NULL;
        ATerm j_23;
        j_23 = t;
        {
          ATerm s_90 = NULL;
          t = not_null(l_90);
          {
            ATerm t_90 = NULL;
            t = g_82(t);
            {
              s_90 = t;
              {
                if(((p_90 != NULL) && (p_90 != s_90)))
                  _fail(s_90);
                else
                  p_90 = s_90;
                {
                  ATerm u_90 = NULL,w_90 = NULL;
                  t = map_1(t, new_0);
                  {
                    t_90 = t;
                    {
                      if(((q_90 != NULL) && (q_90 != t_90)))
                        _fail(t_90);
                      else
                        q_90 = t_90;
                      {
                        ATerm v_90 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_90), not_null(q_90));
                        {
                          t = zip_1(t, _id);
                          {
                            v_90 = t;
                            if(((u_90 != NULL) && (u_90 != v_90)))
                              _fail(v_90);
                            else
                              u_90 = v_90;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_90), not_null(m_90));
                          {
                            t = conc_0(t);
                            {
                              w_90 = t;
                              if(((r_90 != NULL) && (r_90 != w_90)))
                                _fail(w_90);
                              else
                                r_90 = w_90;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = j_23;
        {
          ATerm d_91 = NULL;
          t = not_null(l_90);
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(q_90);
              return(t);
            }
            t = h_82(t, p_3);
            {
              d_91 = t;
              if(((c_91 != NULL) && (c_91 != d_91)))
                _fail(d_91);
              else
                c_91 = d_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(c_91), not_null(m_90), not_null(r_90));
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
  ATerm q_91 = NULL;
  ATerm s_91 = NULL,t_91 = NULL;
  q_91 = t;
  {
    ATerm u_91 = NULL;
    ATerm w_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL;
    t = not_null(q_91);
    {
      u_91 = t;
      {
        t = SSL_explode_term(not_null(u_91));
        {
          w_91 = t;
          n_91 :
          if(match_cons(w_91, sym__2))
            {
              y_91 = ATgetArgument(w_91, 0);
              z_91 = ATgetArgument(w_91, 1);
              o_91 :
              if(match_string(y_91, ""))
                {
                  p_91 :
                  if(((ATgetType(z_91) == AT_LIST) && ((ATermList) z_91 != ATempty)))
                    {
                      a_92 = ATgetFirst((ATermList) z_91);
                      b_92 = (ATerm) ATgetNext((ATermList) z_91);
                      {
                        if(((t_91 != NULL) && (t_91 != a_92)))
                          _fail(a_92);
                        else
                          t_91 = a_92;
                        if(((s_91 != NULL) && (s_91 != b_92)))
                          _fail(b_92);
                        else
                          s_91 = b_92;
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
    t = not_null(t_91);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm u_81 (ATerm, ATerm (ATerm)))
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
  q_92 = t;
  j_92 :
  if(match_cons(q_92, sym__2))
    {
      r_92 = ATgetArgument(q_92, 0);
      s_92 = ATgetArgument(q_92, 1);
      {
        t = not_null(r_92);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm r_3 (ATerm t)
            {
              t = not_null(s_92);
              return(t);
            }
            t = split_2(t, _id, r_3);
            t = lookup_0(t);
            return(t);
          }
          t = u_81(t, q_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm a_98 (ATerm))
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL;
  z_92 = t;
  y_92 :
  if(match_cons(z_92, sym__2))
    {
      a_93 = ATgetArgument(z_92, 0);
      b_93 = ATgetArgument(z_92, 1);
      {
        t = not_null(a_93);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm e_93 = NULL;
            e_93 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_93), not_null(b_93));
              t = a_98(t);
            }
            return(t);
          }
          t = _all(t, s_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm i_93 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = all_dist_1(t, i_93);
      }
    return(t);
  }
  t = i_93(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm s_82 (ATerm), ATerm t_82 (ATerm, ATerm (ATerm)), ATerm u_82 (ATerm), ATerm v_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_82 (ATerm, ATerm (ATerm)), ATerm x_82 (ATerm))
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL;
  t = subs_args_0(t);
  {
    l_93 = t;
    k_93 :
    if(match_cons(l_93, sym__2))
      {
        m_93 = ATgetArgument(l_93, 0);
        n_93 = ATgetArgument(l_93, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_93), (ATerm) ATempty);
          {
            ATerm r_93 (ATerm t)
            {
              ATerm t_3 (ATerm t)
              {
                ATerm m_23 = t;
                int n_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, t_82);
                    LocalPopChoice(n_23);
                  }
                else
                  {
                    t = m_23;
                    {
                      ATerm r_23 = t;
                      int s_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = not_null(m_93);
                              return(t);
                            }
                            t = SubsVar_2(t, s_82, u_3);
                            t = x_82(t);
                          }
                          LocalPopChoice(s_23);
                        }
                      else
                        {
                          t = r_23;
                          {
                            t = RnBinding_2(t, u_82, w_82);
                            t = DistBinding_2(t, r_93, v_82);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, t_3);
              return(t);
            }
            t = r_93(t);
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
ATerm substitute_5 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm, ATerm (ATerm)), ATerm b_83 (ATerm), ATerm c_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_83 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, z_82, a_83, b_83, c_83, d_83, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm s_93 (ATerm t, ATerm t_93 (ATerm))
  {
    t = Scope_2(t, t_93, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, s_93);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL;
  b_94 = t;
  a_94 :
  if(match_cons(b_94, sym_Op_2))
    {
      c_94 = ATgetArgument(b_94, 0);
      d_94 = ATgetArgument(b_94, 1);
      {
        ATerm g_94 = NULL,h_94 = NULL;
        t = l_80(t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm w_23;
            w_23 = t;
            {
              ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL;
              i_94 = t;
              z_93 :
              if(match_cons(i_94, sym_Overlay_3))
                {
                  j_94 = ATgetArgument(i_94, 0);
                  k_94 = ATgetArgument(i_94, 1);
                  l_94 = ATgetArgument(i_94, 2);
                  {
                    ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL,r_94 = NULL;
                    if(((c_94 != NULL) && (c_94 != j_94)))
                      _fail(j_94);
                    else
                      c_94 = j_94;
                    {
                      if(((m_94 != NULL) && (m_94 != k_94)))
                        _fail(k_94);
                      else
                        m_94 = k_94;
                      {
                        if(((n_94 != NULL) && (n_94 != l_94)))
                          _fail(l_94);
                        else
                          n_94 = l_94;
                        {
                          ATerm z_23;
                          z_23 = t;
                          {
                            ATerm q_94 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_94), not_null(d_94));
                            {
                              t = zip_1(t, _id);
                              {
                                q_94 = t;
                                if(((o_94 != NULL) && (o_94 != q_94)))
                                  _fail(q_94);
                                else
                                  o_94 = q_94;
                              }
                            }
                          }
                          t = z_23;
                          {
                            ATerm y_94 = NULL;
                            t = not_null(o_94);
                            {
                              r_94 = t;
                              {
                                if(((g_94 != NULL) && (g_94 != r_94)))
                                  _fail(r_94);
                                else
                                  g_94 = r_94;
                                {
                                  t = not_null(n_94);
                                  {
                                    y_94 = t;
                                    {
                                      if(((h_94 != NULL) && (h_94 != y_94)))
                                        _fail(y_94);
                                      else
                                        h_94 = y_94;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_94), not_null(n_94));
                                    }
                                  }
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
            t = w_23;
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_94), not_null(h_94));
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
ATerm exp_overlays1_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm a_24;
    a_24 = t;
    {
      ATerm b_24 = t;
      if((PushChoice() == 0))
        {
          ATerm g_95 = NULL;
          t = m_80(t);
          {
            g_95 = t;
            f_95 :
            if(((ATermList) g_95 == ATempty))
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
          t = b_24;
        }
    }
    t = a_24;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          t = ExpOverlay_1(t, m_80);
          return(t);
        }
        t = repeat_1(t, y_3);
        return(t);
      }
      t = topdown_1(t, x_3);
    }
    return(t);
  }
  t = try_1(t, w_3);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL;
  u_95 = t;
  m_95 :
  if(match_cons(u_95, sym_Specification_1))
    {
      v_95 = ATgetArgument(u_95, 0);
      n_95 :
      if(((ATgetType(v_95) == AT_LIST) && ((ATermList) v_95 != ATempty)))
        {
          w_95 = ATgetFirst((ATermList) v_95);
          y_95 = (ATerm) ATgetNext((ATermList) v_95);
          o_95 :
          if(match_cons(w_95, sym_Signature_1))
            {
              x_95 = ATgetArgument(w_95, 0);
              p_95 :
              if(((ATgetType(y_95) == AT_LIST) && ((ATermList) y_95 != ATempty)))
                {
                  z_95 = ATgetFirst((ATermList) y_95);
                  b_96 = (ATerm) ATgetNext((ATermList) y_95);
                  q_95 :
                  if(match_cons(z_95, sym_Overlays_1))
                    {
                      a_96 = ATgetArgument(z_95, 0);
                      r_95 :
                      if(((ATgetType(b_96) == AT_LIST) && ((ATermList) b_96 != ATempty)))
                        {
                          c_96 = ATgetFirst((ATermList) b_96);
                          e_96 = (ATerm) ATgetNext((ATermList) b_96);
                          s_95 :
                          if(match_cons(c_96, sym_Strategies_1))
                            {
                              d_96 = ATgetArgument(c_96, 0);
                              t_95 :
                              if(((ATermList) e_96 == ATempty))
                                {
                                  {
                                    ATerm k_96 = NULL,m_96 = NULL;
                                    ATerm c_24;
                                    c_24 = t;
                                    {
                                      ATerm l_96 = NULL;
                                      t = not_null(a_96);
                                      {
                                        ATerm z_3 (ATerm t)
                                        {
                                          t = not_null(a_96);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, z_3);
                                        {
                                          l_96 = t;
                                          if(((k_96 != NULL) && (k_96 != l_96)))
                                            _fail(l_96);
                                          else
                                            k_96 = l_96;
                                        }
                                      }
                                    }
                                    t = c_24;
                                    {
                                      ATerm p_96 = NULL,r_96 = NULL,v_96 = NULL;
                                      ATerm d_24;
                                      d_24 = t;
                                      {
                                        ATerm q_96 = NULL;
                                        t = not_null(a_96);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            q_96 = t;
                                            if(((p_96 != NULL) && (p_96 != q_96)))
                                              _fail(q_96);
                                            else
                                              p_96 = q_96;
                                          }
                                        }
                                      }
                                      t = d_24;
                                      {
                                        ATerm s_96 = NULL;
                                        t = not_null(d_96);
                                        {
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = not_null(k_96);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, a_4);
                                          {
                                            s_96 = t;
                                            if(((r_96 != NULL) && (r_96 != s_96)))
                                              _fail(s_96);
                                            else
                                              r_96 = s_96;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_96), not_null(r_96));
                                          {
                                            t = conc_0(t);
                                            {
                                              v_96 = t;
                                              if(((m_96 != NULL) && (m_96 != v_96)))
                                                _fail(v_96);
                                              else
                                                m_96 = v_96;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_96))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(x_95))));
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
  ATerm g_24;
  g_24 = t;
  {
    ATerm c_97 = NULL;
    ATerm d_97 = NULL;
    d_97 = t;
    if(((c_97 != NULL) && (c_97 != d_97)))
      _fail(d_97);
    else
      c_97 = d_97;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(c_97));
      t = printnl_0(t);
    }
  }
  t = g_24;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm p_24;
  p_24 = t;
  {
    t = error_0(t);
    {
      t = term_x_18;
      t = exit_0(t);
    }
  }
  t = p_24;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
  l_97 = t;
  i_97 :
  if(match_cons(l_97, sym__3))
    {
      m_97 = ATgetArgument(l_97, 0);
      n_97 = ATgetArgument(l_97, 1);
      o_97 = ATgetArgument(l_97, 2);
      {
        ATerm s_97 = NULL,u_97 = NULL;
        ATerm q_24;
        q_24 = t;
        {
          ATerm t_97 = NULL;
          t = not_null(m_97);
          {
            t = MsgU_0(t);
            {
              t_97 = t;
              if(((s_97 != NULL) && (s_97 != t_97)))
                _fail(t_97);
              else
                s_97 = t_97;
            }
          }
        }
        t = q_24;
        {
          ATerm v_97 = NULL;
          t = not_null(o_97);
          {
            t = MsgE_0(t);
            {
              v_97 = t;
              if(((u_97 != NULL) && (u_97 != v_97)))
                _fail(v_97);
              else
                u_97 = v_97;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_97)), not_null(s_97));
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
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  n_98 = t;
  h_98 :
  if(((ATgetType(n_98) == AT_LIST) && ((ATermList) n_98 != ATempty)))
    {
      l_98 = ATgetFirst((ATermList) n_98);
      m_98 = (ATerm) ATgetNext((ATermList) n_98);
      i_98 :
      if(((ATgetType(m_98) == AT_LIST) && ((ATermList) m_98 != ATempty)))
        {
          j_98 = ATgetFirst((ATermList) m_98);
          k_98 = (ATerm) ATgetNext((ATermList) m_98);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_98)), not_null(j_98)), not_null(l_98))), term_r_24);
        }
      else
        {
          if(((ATermList) m_98 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), not_null(l_98)), term_y_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) n_98 == ATempty))
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
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL;
  g_99 = t;
  a_99 :
  if(((ATgetType(g_99) == AT_LIST) && ((ATermList) g_99 != ATempty)))
    {
      e_99 = ATgetFirst((ATermList) g_99);
      f_99 = (ATerm) ATgetNext((ATermList) g_99);
      b_99 :
      if(((ATgetType(f_99) == AT_LIST) && ((ATermList) f_99 != ATempty)))
        {
          c_99 = ATgetFirst((ATermList) f_99);
          d_99 = (ATerm) ATgetNext((ATermList) f_99);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(d_99)), not_null(c_99)), not_null(e_99))), term_r_24);
        }
      else
        {
          if(((ATermList) f_99 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_24), not_null(e_99)), term_y_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) g_99 == ATempty))
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
  ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL,x_99 = NULL;
  u_99 = t;
  t_99 :
  if(match_cons(u_99, sym__3))
    {
      v_99 = ATgetArgument(u_99, 0);
      w_99 = ATgetArgument(u_99, 1);
      x_99 = ATgetArgument(u_99, 2);
      {
        ATerm b_100 = NULL,d_100 = NULL;
        ATerm a_25;
        a_25 = t;
        {
          ATerm c_100 = NULL;
          t = not_null(v_99);
          {
            t = MsgU_0(t);
            {
              c_100 = t;
              if(((b_100 != NULL) && (b_100 != c_100)))
                _fail(c_100);
              else
                b_100 = c_100;
            }
          }
        }
        t = a_25;
        {
          ATerm e_100 = NULL;
          t = not_null(x_99);
          {
            t = MsgE_0(t);
            {
              e_100 = t;
              if(((d_100 != NULL) && (d_100 != e_100)))
                _fail(e_100);
              else
                d_100 = e_100;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_100)), not_null(b_100));
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
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL;
  p_100 = t;
  o_100 :
  if(match_cons(p_100, sym_Overlay_3))
    {
      q_100 = ATgetArgument(p_100, 0);
      r_100 = ATgetArgument(p_100, 1);
      s_100 = ATgetArgument(p_100, 2);
      {
        ATerm w_100 = NULL;
        ATerm z_100 = NULL;
        t = not_null(s_100);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              z_100 = t;
              if(((w_100 != NULL) && (w_100 != z_100)))
                _fail(z_100);
              else
                w_100 = z_100;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_100)), term_c_25), not_null(q_100)), term_b_25);
      }
    }
  else
    {
      if(match_cons(p_100, sym_SDef_3))
        {
          q_100 = ATgetArgument(p_100, 0);
          r_100 = ATgetArgument(p_100, 1);
          s_100 = ATgetArgument(p_100, 2);
          {
            ATerm d_101 = NULL;
            ATerm e_101 = NULL;
            t = not_null(s_100);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  e_101 = t;
                  if(((d_101 != NULL) && (d_101 != e_101)))
                    _fail(e_101);
                  else
                    d_101 = e_101;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(d_101)), term_c_25), not_null(q_100)), term_d_25);
          }
        }
      else
        {
          if(match_cons(p_100, sym_RDef_3))
            {
              q_100 = ATgetArgument(p_100, 0);
              r_100 = ATgetArgument(p_100, 1);
              s_100 = ATgetArgument(p_100, 2);
              {
                ATerm i_101 = NULL;
                ATerm j_101 = NULL;
                t = not_null(s_100);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      j_101 = t;
                      if(((i_101 != NULL) && (i_101 != j_101)))
                        _fail(j_101);
                      else
                        i_101 = j_101;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(i_101)), term_c_25), not_null(q_100)), term_e_25);
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
ATerm _3 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  ATerm z_101 = NULL,a_102 = NULL,b_102 = NULL,c_102 = NULL;
  z_101 = t;
  y_101 :
  if(match_cons(z_101, sym__3))
    {
      a_102 = ATgetArgument(z_101, 0);
      b_102 = ATgetArgument(z_101, 1);
      c_102 = ATgetArgument(z_101, 2);
      {
        ATerm j_102 = NULL,l_102 = NULL;
        ATerm k_102 = NULL;
        t = SSLgetAnnotations(not_null(z_101));
        {
          k_102 = t;
          if(((j_102 != NULL) && (j_102 != k_102)))
            _fail(k_102);
          else
            j_102 = k_102;
        }
        {
          t = not_null(a_102);
          {
            ATerm n_102 = NULL;
            t = t_67(t);
            {
              l_102 = t;
              {
                t = not_null(b_102);
                {
                  ATerm t_102 = NULL;
                  t = u_67(t);
                  {
                    n_102 = t;
                    {
                      t = not_null(c_102);
                      {
                        ATerm v_102 = NULL;
                        t = v_67(t);
                        {
                          t_102 = t;
                          {
                            ATerm w_102 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__3, not_null(l_102), not_null(n_102), not_null(t_102)), not_null(j_102));
                            {
                              w_102 = t;
                              if(((v_102 != NULL) && (v_102 != w_102)))
                                _fail(w_102);
                              else
                                v_102 = w_102;
                            }
                            t = not_null(v_102);
                          }
                        }
                      }
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
ATerm Overlay_3 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm))
{
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL,u_103 = NULL;
  r_103 = t;
  q_103 :
  if(match_cons(r_103, sym_Overlay_3))
    {
      s_103 = ATgetArgument(r_103, 0);
      t_103 = ATgetArgument(r_103, 1);
      u_103 = ATgetArgument(r_103, 2);
      {
        ATerm d_104 = NULL,f_104 = NULL;
        ATerm e_104 = NULL;
        t = SSLgetAnnotations(not_null(r_103));
        {
          e_104 = t;
          if(((d_104 != NULL) && (d_104 != e_104)))
            _fail(e_104);
          else
            d_104 = e_104;
        }
        {
          t = not_null(s_103);
          {
            ATerm h_104 = NULL;
            t = s_75(t);
            {
              f_104 = t;
              {
                t = not_null(t_103);
                {
                  ATerm j_104 = NULL;
                  t = t_75(t);
                  {
                    h_104 = t;
                    {
                      t = not_null(u_103);
                      {
                        ATerm l_104 = NULL;
                        t = u_75(t);
                        {
                          j_104 = t;
                          {
                            ATerm m_104 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlay_3, not_null(f_104), not_null(h_104), not_null(j_104)), not_null(d_104));
                            {
                              m_104 = t;
                              if(((l_104 != NULL) && (l_104 != m_104)))
                                _fail(m_104);
                              else
                                l_104 = m_104;
                            }
                            t = not_null(l_104);
                          }
                        }
                      }
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
  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL;
  a_105 = t;
  x_104 :
  if(match_cons(a_105, sym__2))
    {
      b_105 = ATgetArgument(a_105, 0);
      f_105 = ATgetArgument(a_105, 1);
      y_104 :
      if(match_cons(b_105, sym__3))
        {
          c_105 = ATgetArgument(b_105, 0);
          d_105 = ATgetArgument(b_105, 1);
          e_105 = ATgetArgument(b_105, 2);
          z_104 :
          if(match_cons(f_105, sym__3))
            {
              g_105 = ATgetArgument(f_105, 0);
              h_105 = ATgetArgument(f_105, 1);
              i_105 = ATgetArgument(f_105, 2);
              {
                ATerm p_105 = NULL,r_105 = NULL,t_105 = NULL;
                ATerm f_25;
                f_25 = t;
                {
                  ATerm q_105 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_105), not_null(g_105));
                  {
                    t = union_0(t);
                    {
                      q_105 = t;
                      if(((p_105 != NULL) && (p_105 != q_105)))
                        _fail(q_105);
                      else
                        p_105 = q_105;
                    }
                  }
                }
                t = f_25;
                {
                  ATerm g_25;
                  g_25 = t;
                  {
                    ATerm s_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_105), not_null(h_105));
                    {
                      t = union_0(t);
                      {
                        s_105 = t;
                        if(((r_105 != NULL) && (r_105 != s_105)))
                          _fail(s_105);
                        else
                          r_105 = s_105;
                      }
                    }
                  }
                  t = g_25;
                  {
                    ATerm u_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_105), not_null(i_105));
                    {
                      t = union_0(t);
                      {
                        u_105 = t;
                        if(((t_105 != NULL) && (t_105 != u_105)))
                          _fail(u_105);
                        else
                          t_105 = u_105;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(p_105), not_null(r_105), not_null(t_105));
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
  ATerm g_106 = NULL;
  ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL;
  g_106 = t;
  {
    ATerm l_106 = NULL;
    ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL;
    t = not_null(g_106);
    {
      l_106 = t;
      {
        t = SSL_explode_term(not_null(l_106));
        {
          n_106 = t;
          c_106 :
          if(match_cons(n_106, sym__2))
            {
              o_106 = ATgetArgument(n_106, 0);
              p_106 = ATgetArgument(n_106, 1);
              d_106 :
              if(match_string(o_106, ""))
                {
                  e_106 :
                  if(((ATgetType(p_106) == AT_LIST) && ((ATermList) p_106 != ATempty)))
                    {
                      q_106 = ATgetFirst((ATermList) p_106);
                      r_106 = (ATerm) ATgetNext((ATermList) p_106);
                      f_106 :
                      if(((ATgetType(r_106) == AT_LIST) && ((ATermList) r_106 != ATempty)))
                        {
                          s_106 = ATgetFirst((ATermList) r_106);
                          t_106 = (ATerm) ATgetNext((ATermList) r_106);
                          {
                            if(((i_106 != NULL) && (i_106 != q_106)))
                              _fail(q_106);
                            else
                              i_106 = q_106;
                            {
                              if(((k_106 != NULL) && (k_106 != s_106)))
                                _fail(s_106);
                              else
                                k_106 = s_106;
                              if(((j_106 != NULL) && (j_106 != t_106)))
                                _fail(t_106);
                              else
                                j_106 = t_106;
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
    t = not_null(k_106);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm y_106 = NULL;
  y_106 = t;
  t = SSL_explode_term(not_null(y_106));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm b_4 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_l_25);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, b_4, c_4);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL;
  j_107 = t;
  g_107 :
  if(match_cons(j_107, sym__2))
    {
      k_107 = ATgetArgument(j_107, 0);
      o_107 = ATgetArgument(j_107, 1);
      h_107 :
      if(match_cons(k_107, sym__3))
        {
          l_107 = ATgetArgument(k_107, 0);
          m_107 = ATgetArgument(k_107, 1);
          n_107 = ATgetArgument(k_107, 2);
          i_107 :
          if(match_cons(o_107, sym__3))
            {
              p_107 = ATgetArgument(o_107, 0);
              q_107 = ATgetArgument(o_107, 1);
              r_107 = ATgetArgument(o_107, 2);
              {
                ATerm y_107 = NULL,c_108 = NULL,e_108 = NULL;
                ATerm m_25;
                m_25 = t;
                {
                  ATerm z_107 = NULL,b_108 = NULL;
                  ATerm a_108 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_107), not_null(m_107));
                  {
                    t = diff_0(t);
                    {
                      a_108 = t;
                      if(((z_107 != NULL) && (z_107 != a_108)))
                        _fail(a_108);
                      else
                        z_107 = a_108;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_107), not_null(z_107));
                    {
                      t = union_0(t);
                      {
                        b_108 = t;
                        if(((y_107 != NULL) && (y_107 != b_108)))
                          _fail(b_108);
                        else
                          y_107 = b_108;
                      }
                    }
                  }
                }
                t = m_25;
                {
                  ATerm n_25;
                  n_25 = t;
                  {
                    ATerm d_108 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_107), not_null(q_107));
                    {
                      t = union_0(t);
                      {
                        d_108 = t;
                        if(((c_108 != NULL) && (c_108 != d_108)))
                          _fail(d_108);
                        else
                          c_108 = d_108;
                      }
                    }
                  }
                  t = n_25;
                  {
                    ATerm f_108 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_107), not_null(r_107));
                    {
                      t = union_0(t);
                      {
                        f_108 = t;
                        if(((e_108 != NULL) && (e_108 != f_108)))
                          _fail(f_108);
                        else
                          e_108 = f_108;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(y_107), not_null(c_108), not_null(e_108));
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
ATerm cart_1 (ATerm t, ATerm p_94 (ATerm))
{
  ATerm p_108 = NULL,q_108 = NULL,r_108 = NULL;
  p_108 = t;
  o_108 :
  if(match_cons(p_108, sym__2))
    {
      q_108 = ATgetArgument(p_108, 0);
      r_108 = ATgetArgument(p_108, 1);
      {
        t = not_null(q_108);
        {
          ATerm d_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm e_4 (ATerm t)
          {
            ATerm u_108 = NULL;
            u_108 = t;
            {
              t = not_null(r_108);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm w_108 = NULL;
                  w_108 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_108), not_null(w_108));
                    t = p_94(t);
                  }
                  return(t);
                }
                t = map_1(t, f_4);
              }
            }
            return(t);
          }
          t = foldr_3(t, d_4, conc_0, e_4);
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
  ATerm g_4 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_l_25);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, g_4, h_4);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm h_79 (ATerm))
{
  ATerm i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL;
  i_109 = t;
  h_109 :
  if(match_cons(i_109, sym__3))
    {
      j_109 = ATgetArgument(i_109, 0);
      k_109 = ATgetArgument(i_109, 1);
      l_109 = ATgetArgument(i_109, 2);
      {
        ATerm p_109 = NULL,t_109 = NULL;
        ATerm r_25;
        r_25 = t;
        {
          ATerm q_109 = NULL,s_109 = NULL;
          ATerm r_109 = NULL;
          t = term_g_19;
          {
            t = h_79(t);
            {
              r_109 = t;
              if(((q_109 != NULL) && (q_109 != r_109)))
                _fail(r_109);
              else
                q_109 = r_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_109), not_null(q_109));
            {
              t = diff_0(t);
              {
                s_109 = t;
                if(((p_109 != NULL) && (p_109 != s_109)))
                  _fail(s_109);
                else
                  p_109 = s_109;
              }
            }
          }
        }
        t = r_25;
        {
          ATerm u_109 = NULL,y_109 = NULL;
          ATerm v_109 = NULL,x_109 = NULL;
          ATerm w_109 = NULL;
          t = term_g_19;
          {
            t = h_79(t);
            {
              w_109 = t;
              if(((v_109 != NULL) && (v_109 != w_109)))
                _fail(w_109);
              else
                v_109 = w_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_109), not_null(v_109));
            {
              t = isect_0(t);
              {
                x_109 = t;
                if(((u_109 != NULL) && (u_109 != x_109)))
                  _fail(x_109);
                else
                  u_109 = x_109;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_109), not_null(l_109));
            {
              t = conc_0(t);
              {
                y_109 = t;
                if(((t_109 != NULL) && (t_109 != y_109)))
                  _fail(y_109);
                else
                  t_109 = y_109;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(j_109), not_null(p_109), not_null(t_109));
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
  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL;
  u_110 = t;
  r_110 :
  if(match_cons(u_110, sym_Overlay_3))
    {
      v_110 = ATgetArgument(u_110, 0);
      t_110 = ATgetArgument(u_110, 1);
      s_110 = ATgetArgument(u_110, 2);
      {
        ATerm z_110 = NULL;
        ATerm a_111 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_110)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(t_110), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            a_111 = t;
            if(((z_110 != NULL) && (z_110 != a_111)))
              _fail(a_111);
            else
              z_110 = a_111;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(v_110), not_null(t_110), not_null(z_110));
      }
    }
  else
    {
      if(match_cons(u_110, sym_Scope_2))
        {
          v_110 = ATgetArgument(u_110, 0);
          t_110 = ATgetArgument(u_110, 1);
          {
            t = not_null(t_110);
            {
              ATerm i_4 (ATerm t)
              {
                ATerm j_4 (ATerm t)
                {
                  t = not_null(v_110);
                  return(t);
                }
                t = JoinScope_1(t, j_4);
                return(t);
              }
              t = map_1(t, i_4);
            }
          }
        }
      else
        {
          if(match_cons(u_110, sym_Cong_2))
            {
              v_110 = ATgetArgument(u_110, 0);
              t_110 = ATgetArgument(u_110, 1);
              {
                t = not_null(t_110);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(u_110, sym_BAM_3))
                {
                  v_110 = ATgetArgument(u_110, 0);
                  t_110 = ATgetArgument(u_110, 1);
                  s_110 = ATgetArgument(u_110, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_110)), not_null(v_110)), not_null(t_110));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(u_110, sym_BA_2))
                    {
                      v_110 = ATgetArgument(u_110, 0);
                      t_110 = ATgetArgument(u_110, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_110)), not_null(t_110));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(u_110, sym_AM_2))
                        {
                          v_110 = ATgetArgument(u_110, 0);
                          t_110 = ATgetArgument(u_110, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_110)), not_null(v_110));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(u_110, sym_MA_2))
                            {
                              v_110 = ATgetArgument(u_110, 0);
                              t_110 = ATgetArgument(u_110, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_110)), not_null(v_110));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(u_110, sym_StratRule_3))
                                {
                                  v_110 = ATgetArgument(u_110, 0);
                                  t_110 = ATgetArgument(u_110, 1);
                                  s_110 = ATgetArgument(u_110, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_110)), not_null(s_110)), not_null(v_110));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(u_110, sym_Rule_3))
                                    {
                                      v_110 = ATgetArgument(u_110, 0);
                                      t_110 = ATgetArgument(u_110, 1);
                                      s_110 = ATgetArgument(u_110, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_110)), not_null(s_110)), not_null(v_110));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(u_110, sym_Seq_2))
                                        {
                                          v_110 = ATgetArgument(u_110, 0);
                                          t_110 = ATgetArgument(u_110, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_110)), not_null(v_110));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(u_110, sym_Seqs_1))
                                            {
                                              v_110 = ATgetArgument(u_110, 0);
                                              {
                                                t = not_null(v_110);
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
ATerm Cong_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL;
  p_112 = t;
  o_112 :
  if(match_cons(p_112, sym_Cong_2))
    {
      q_112 = ATgetArgument(p_112, 0);
      r_112 = ATgetArgument(p_112, 1);
      {
        ATerm v_112 = NULL,x_112 = NULL;
        ATerm w_112 = NULL;
        t = SSLgetAnnotations(not_null(p_112));
        {
          w_112 = t;
          if(((v_112 != NULL) && (v_112 != w_112)))
            _fail(w_112);
          else
            v_112 = w_112;
        }
        {
          t = not_null(q_112);
          {
            ATerm z_112 = NULL;
            t = z_77(t);
            {
              x_112 = t;
              {
                t = not_null(r_112);
                {
                  ATerm b_113 = NULL;
                  t = a_78(t);
                  {
                    z_112 = t;
                    {
                      ATerm c_113 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(x_112), not_null(z_112)), not_null(v_112));
                      {
                        c_113 = t;
                        if(((b_113 != NULL) && (b_113 != c_113)))
                          _fail(c_113);
                        else
                          b_113 = c_113;
                      }
                      t = not_null(b_113);
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
ATerm use_term_0 (ATerm t)
{
  ATerm j_113 = NULL;
  ATerm k_113 = NULL;
  t = tvars_0(t);
  {
    k_113 = t;
    if(((j_113 != NULL) && (j_113 != k_113)))
      _fail(k_113);
    else
      j_113 = k_113;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(j_113), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm n_113 = NULL;
  ATerm o_113 = NULL;
  t = tvars_0(t);
  {
    o_113 = t;
    if(((n_113 != NULL) && (n_113 != o_113)))
      _fail(o_113);
    else
      n_113 = o_113;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(n_113), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL;
  x_113 = t;
  w_113 :
  if(match_cons(x_113, sym_Rule_3))
    {
      y_113 = ATgetArgument(x_113, 0);
      z_113 = ATgetArgument(x_113, 1);
      a_114 = ATgetArgument(x_113, 2);
      {
        ATerm f_114 = NULL,h_114 = NULL;
        ATerm g_114 = NULL;
        t = SSLgetAnnotations(not_null(x_113));
        {
          g_114 = t;
          if(((f_114 != NULL) && (f_114 != g_114)))
            _fail(g_114);
          else
            f_114 = g_114;
        }
        {
          t = not_null(y_113);
          {
            ATerm j_114 = NULL;
            t = d_75(t);
            {
              h_114 = t;
              {
                t = not_null(z_113);
                {
                  ATerm l_114 = NULL;
                  t = e_75(t);
                  {
                    j_114 = t;
                    {
                      t = not_null(a_114);
                      {
                        ATerm n_114 = NULL;
                        t = f_75(t);
                        {
                          l_114 = t;
                          {
                            ATerm o_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(h_114), not_null(j_114), not_null(l_114)), not_null(f_114));
                            {
                              o_114 = t;
                              if(((n_114 != NULL) && (n_114 != o_114)))
                                _fail(o_114);
                              else
                                n_114 = o_114;
                            }
                            t = not_null(n_114);
                          }
                        }
                      }
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
ATerm BAM_3 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL;
  c_115 = t;
  b_115 :
  if(match_cons(c_115, sym_BAM_3))
    {
      d_115 = ATgetArgument(c_115, 0);
      e_115 = ATgetArgument(c_115, 1);
      f_115 = ATgetArgument(c_115, 2);
      {
        ATerm k_115 = NULL,m_115 = NULL;
        ATerm l_115 = NULL;
        t = SSLgetAnnotations(not_null(c_115));
        {
          l_115 = t;
          if(((k_115 != NULL) && (k_115 != l_115)))
            _fail(l_115);
          else
            k_115 = l_115;
        }
        {
          t = not_null(d_115);
          {
            ATerm o_115 = NULL;
            t = h_74(t);
            {
              m_115 = t;
              {
                t = not_null(e_115);
                {
                  ATerm q_115 = NULL;
                  t = i_74(t);
                  {
                    o_115 = t;
                    {
                      t = not_null(f_115);
                      {
                        ATerm s_115 = NULL;
                        t = j_74(t);
                        {
                          q_115 = t;
                          {
                            ATerm t_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BAM_3, not_null(m_115), not_null(o_115), not_null(q_115)), not_null(k_115));
                            {
                              t_115 = t;
                              if(((s_115 != NULL) && (s_115 != t_115)))
                                _fail(t_115);
                              else
                                s_115 = t_115;
                            }
                            t = not_null(s_115);
                          }
                        }
                      }
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
ATerm BA_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm g_116 = NULL,h_116 = NULL,i_116 = NULL;
  g_116 = t;
  f_116 :
  if(match_cons(g_116, sym_BA_2))
    {
      h_116 = ATgetArgument(g_116, 0);
      i_116 = ATgetArgument(g_116, 1);
      {
        ATerm m_116 = NULL,o_116 = NULL;
        ATerm n_116 = NULL;
        t = SSLgetAnnotations(not_null(g_116));
        {
          n_116 = t;
          if(((m_116 != NULL) && (m_116 != n_116)))
            _fail(n_116);
          else
            m_116 = n_116;
        }
        {
          t = not_null(h_116);
          {
            ATerm q_116 = NULL;
            t = f_74(t);
            {
              o_116 = t;
              {
                t = not_null(i_116);
                {
                  ATerm s_116 = NULL;
                  t = g_74(t);
                  {
                    q_116 = t;
                    {
                      ATerm t_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BA_2, not_null(o_116), not_null(q_116)), not_null(m_116));
                      {
                        t_116 = t;
                        if(((s_116 != NULL) && (s_116 != t_116)))
                          _fail(t_116);
                        else
                          s_116 = t_116;
                      }
                      t = not_null(s_116);
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
ATerm AM_2 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm))
{
  ATerm f_117 = NULL,g_117 = NULL,h_117 = NULL;
  f_117 = t;
  e_117 :
  if(match_cons(f_117, sym_AM_2))
    {
      g_117 = ATgetArgument(f_117, 0);
      h_117 = ATgetArgument(f_117, 1);
      {
        ATerm l_117 = NULL,n_117 = NULL;
        ATerm m_117 = NULL;
        t = SSLgetAnnotations(not_null(f_117));
        {
          m_117 = t;
          if(((l_117 != NULL) && (l_117 != m_117)))
            _fail(m_117);
          else
            l_117 = m_117;
        }
        {
          t = not_null(g_117);
          {
            ATerm p_117 = NULL;
            t = d_74(t);
            {
              n_117 = t;
              {
                t = not_null(h_117);
                {
                  ATerm r_117 = NULL;
                  t = e_74(t);
                  {
                    p_117 = t;
                    {
                      ATerm s_117 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AM_2, not_null(n_117), not_null(p_117)), not_null(l_117));
                      {
                        s_117 = t;
                        if(((r_117 != NULL) && (r_117 != s_117)))
                          _fail(s_117);
                        else
                          r_117 = s_117;
                      }
                      t = not_null(r_117);
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
ATerm MA_2 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm))
{
  ATerm e_118 = NULL,f_118 = NULL,g_118 = NULL;
  e_118 = t;
  d_118 :
  if(match_cons(e_118, sym_MA_2))
    {
      f_118 = ATgetArgument(e_118, 0);
      g_118 = ATgetArgument(e_118, 1);
      {
        ATerm k_118 = NULL,m_118 = NULL;
        ATerm l_118 = NULL;
        t = SSLgetAnnotations(not_null(e_118));
        {
          l_118 = t;
          if(((k_118 != NULL) && (k_118 != l_118)))
            _fail(l_118);
          else
            k_118 = l_118;
        }
        {
          t = not_null(f_118);
          {
            ATerm o_118 = NULL;
            t = b_74(t);
            {
              m_118 = t;
              {
                t = not_null(g_118);
                {
                  ATerm q_118 = NULL;
                  t = c_74(t);
                  {
                    o_118 = t;
                    {
                      ATerm r_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MA_2, not_null(m_118), not_null(o_118)), not_null(k_118));
                      {
                        r_118 = t;
                        if(((q_118 != NULL) && (q_118 != r_118)))
                          _fail(r_118);
                        else
                          q_118 = r_118;
                      }
                      t = not_null(q_118);
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
ATerm Match_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm c_119 = NULL,d_119 = NULL;
  c_119 = t;
  b_119 :
  if(match_cons(c_119, sym_Match_1))
    {
      d_119 = ATgetArgument(c_119, 0);
      {
        ATerm g_119 = NULL,i_119 = NULL;
        ATerm h_119 = NULL;
        t = SSLgetAnnotations(not_null(c_119));
        {
          h_119 = t;
          if(((g_119 != NULL) && (g_119 != h_119)))
            _fail(h_119);
          else
            g_119 = h_119;
        }
        {
          t = not_null(d_119);
          {
            ATerm k_119 = NULL;
            t = h_78(t);
            {
              i_119 = t;
              {
                ATerm l_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(i_119)), not_null(g_119));
                {
                  l_119 = t;
                  if(((k_119 != NULL) && (k_119 != l_119)))
                    _fail(l_119);
                  else
                    k_119 = l_119;
                }
                t = not_null(k_119);
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
ATerm Build_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm v_119 = NULL,w_119 = NULL;
  v_119 = t;
  u_119 :
  if(match_cons(v_119, sym_Build_1))
    {
      w_119 = ATgetArgument(v_119, 0);
      {
        ATerm z_119 = NULL,b_120 = NULL;
        ATerm a_120 = NULL;
        t = SSLgetAnnotations(not_null(v_119));
        {
          a_120 = t;
          if(((z_119 != NULL) && (z_119 != a_120)))
            _fail(a_120);
          else
            z_119 = a_120;
        }
        {
          t = not_null(w_119);
          {
            ATerm d_120 = NULL;
            t = i_78(t);
            {
              b_120 = t;
              {
                ATerm e_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(b_120)), not_null(z_119));
                {
                  e_120 = t;
                  if(((d_120 != NULL) && (d_120 != e_120)))
                    _fail(e_120);
                  else
                    d_120 = e_120;
                }
                t = not_null(d_120);
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
ATerm constructs_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm t_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(w_25);
    }
  else
    {
      t = t_25;
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, g_79);
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
                  {
                    ATerm b_26 = t;
                    int c_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, g_79, def_term_0);
                        LocalPopChoice(c_26);
                      }
                    else
                      {
                        t = b_26;
                        {
                          ATerm d_26 = t;
                          int e_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, g_79, use_term_0);
                              LocalPopChoice(e_26);
                            }
                          else
                            {
                              t = d_26;
                              {
                                ATerm f_26 = t;
                                int k_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, g_79, use_term_0, def_term_0);
                                    LocalPopChoice(k_26);
                                  }
                                else
                                  {
                                    t = f_26;
                                    {
                                      ATerm l_26 = t;
                                      int m_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, g_79);
                                          LocalPopChoice(m_26);
                                        }
                                      else
                                        {
                                          t = l_26;
                                          {
                                            ATerm q_26 = t;
                                            int s_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, g_79);
                                                LocalPopChoice(s_26);
                                              }
                                            else
                                              {
                                                t = q_26;
                                                {
                                                  ATerm v_26 = t;
                                                  int w_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(w_26);
                                                    }
                                                  else
                                                    {
                                                      t = v_26;
                                                      {
                                                        ATerm k_4 (ATerm t)
                                                        {
                                                          t = map_1(t, g_79);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, k_4);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = _all(t, use_def_0);
    }
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm r_120 = NULL,s_120 = NULL,t_120 = NULL,u_120 = NULL;
  r_120 = t;
  q_120 :
  if(match_cons(r_120, sym_RDef_3))
    {
      s_120 = ATgetArgument(r_120, 0);
      t_120 = ATgetArgument(r_120, 1);
      u_120 = ATgetArgument(r_120, 2);
      {
        ATerm z_120 = NULL,b_121 = NULL;
        ATerm a_121 = NULL;
        t = SSLgetAnnotations(not_null(r_120));
        {
          a_121 = t;
          if(((z_120 != NULL) && (z_120 != a_121)))
            _fail(a_121);
          else
            z_120 = a_121;
        }
        {
          t = not_null(s_120);
          {
            ATerm d_121 = NULL;
            t = l_75(t);
            {
              b_121 = t;
              {
                t = not_null(t_120);
                {
                  ATerm f_121 = NULL;
                  t = m_75(t);
                  {
                    d_121 = t;
                    {
                      t = not_null(u_120);
                      {
                        ATerm h_121 = NULL;
                        t = n_75(t);
                        {
                          f_121 = t;
                          {
                            ATerm i_121 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(b_121), not_null(d_121), not_null(f_121)), not_null(z_120));
                            {
                              i_121 = t;
                              if(((h_121 != NULL) && (h_121 != i_121)))
                                _fail(i_121);
                              else
                                h_121 = i_121;
                            }
                            t = not_null(h_121);
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL;
  w_121 = t;
  v_121 :
  if(match_cons(w_121, sym_SDef_3))
    {
      x_121 = ATgetArgument(w_121, 0);
      y_121 = ATgetArgument(w_121, 1);
      z_121 = ATgetArgument(w_121, 2);
      {
        ATerm e_122 = NULL,g_122 = NULL;
        ATerm f_122 = NULL;
        t = SSLgetAnnotations(not_null(w_121));
        {
          f_122 = t;
          if(((e_122 != NULL) && (e_122 != f_122)))
            _fail(f_122);
          else
            e_122 = f_122;
        }
        {
          t = not_null(x_121);
          {
            ATerm i_122 = NULL;
            t = l_77(t);
            {
              g_122 = t;
              {
                t = not_null(y_121);
                {
                  ATerm k_122 = NULL;
                  t = m_77(t);
                  {
                    i_122 = t;
                    {
                      t = not_null(z_121);
                      {
                        ATerm m_122 = NULL;
                        t = n_77(t);
                        {
                          k_122 = t;
                          {
                            ATerm n_122 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(g_122), not_null(i_122), not_null(k_122)), not_null(e_122));
                            {
                              n_122 = t;
                              if(((m_122 != NULL) && (m_122 != n_122)))
                                _fail(n_122);
                              else
                                m_122 = n_122;
                            }
                            t = not_null(m_122);
                          }
                        }
                      }
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
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm d_27 = t;
          if((PushChoice() == 0))
            {
              ATerm m_4 (ATerm t)
              {
                t = _3(t, Nil_0, _id, Nil_0);
                return(t);
              }
              t = Cons_2(t, m_4, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_27;
            }
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, l_4);
      t = err_msg_0(t);
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm e_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm g_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_4 (ATerm t)
                    {
                      t = _3(t, Nil_0, _id, Nil_0);
                      return(t);
                    }
                    t = Cons_2(t, o_4, Nil_0);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_27;
                  }
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, n_4);
            t = err_msg_0(t);
            LocalPopChoice(f_27);
          }
        else
          {
            t = e_27;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm h_27 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm p_4 (ATerm t)
                      {
                        ATerm q_4 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, q_4, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, p_4);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = h_27;
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
  ATerm v_122 = NULL;
  t = filter_1(t, check_0);
  {
    v_122 = t;
    u_122 :
    if(((ATermList) v_122 == ATempty))
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
ATerm Overlays_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm b_123 = NULL,c_123 = NULL;
  b_123 = t;
  a_123 :
  if(match_cons(b_123, sym_Overlays_1))
    {
      c_123 = ATgetArgument(b_123, 0);
      {
        ATerm f_123 = NULL,h_123 = NULL;
        ATerm g_123 = NULL;
        t = SSLgetAnnotations(not_null(b_123));
        {
          g_123 = t;
          if(((f_123 != NULL) && (f_123 != g_123)))
            _fail(g_123);
          else
            f_123 = g_123;
        }
        {
          t = not_null(c_123);
          {
            ATerm j_123 = NULL;
            t = w_75(t);
            {
              h_123 = t;
              {
                ATerm k_123 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(h_123)), not_null(f_123));
                {
                  k_123 = t;
                  if(((j_123 != NULL) && (j_123 != k_123)))
                    _fail(k_123);
                  else
                    j_123 = k_123;
                }
                t = not_null(j_123);
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
ATerm Signature_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm u_123 = NULL,v_123 = NULL;
  u_123 = t;
  t_123 :
  if(match_cons(u_123, sym_Signature_1))
    {
      v_123 = ATgetArgument(u_123, 0);
      {
        ATerm y_123 = NULL,a_124 = NULL;
        ATerm z_123 = NULL;
        t = SSLgetAnnotations(not_null(u_123));
        {
          z_123 = t;
          if(((y_123 != NULL) && (y_123 != z_123)))
            _fail(z_123);
          else
            y_123 = z_123;
        }
        {
          t = not_null(v_123);
          {
            ATerm c_124 = NULL;
            t = v_75(t);
            {
              a_124 = t;
              {
                ATerm d_124 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(a_124)), not_null(y_123));
                {
                  d_124 = t;
                  if(((c_124 != NULL) && (c_124 != d_124)))
                    _fail(d_124);
                  else
                    c_124 = d_124;
                }
                t = not_null(c_124);
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
ATerm spec_use_def_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm t_4 (ATerm t)
    {
      ATerm u_4 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm v_4 (ATerm t)
      {
        ATerm w_4 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, w_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, u_4, v_4);
      return(t);
    }
    t = Cons_2(t, s_4, t_4);
    return(t);
  }
  t = Specification_1(t, r_4);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL;
  m_124 = t;
  j_124 :
  if(match_cons(m_124, sym__2))
    {
      n_124 = ATgetArgument(m_124, 0);
      q_124 = ATgetArgument(m_124, 1);
      k_124 :
      if(match_cons(n_124, sym__2))
        {
          o_124 = ATgetArgument(n_124, 0);
          p_124 = ATgetArgument(n_124, 1);
          l_124 :
          if(match_cons(q_124, sym__2))
            {
              r_124 = ATgetArgument(q_124, 0);
              s_124 = ATgetArgument(q_124, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_124)), not_null(o_124)), (ATerm) ATinsert(CheckATermList(not_null(s_124)), not_null(p_124)));
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
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL;
  a_125 = t;
  z_124 :
  if(((ATgetType(a_125) == AT_LIST) && ((ATermList) a_125 != ATempty)))
    {
      b_125 = ATgetFirst((ATermList) a_125);
      c_125 = (ATerm) ATgetNext((ATermList) a_125);
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_125), not_null(c_125));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm i_125 = NULL;
  i_125 = t;
  h_125 :
  if(((ATermList) i_125 == ATempty))
    {
      t = term_i_27;
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
  ATerm x_4 (ATerm t)
  {
    ATerm l_125 = NULL;
    l_125 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_125));
    return(t);
  }
  t = map_1(t, x_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_125 = NULL,r_125 = NULL,s_125 = NULL;
  q_125 = t;
  p_125 :
  if(((ATgetType(q_125) == AT_LIST) && ((ATermList) q_125 != ATempty)))
    {
      r_125 = ATgetFirst((ATermList) q_125);
      s_125 = (ATerm) ATgetNext((ATermList) q_125);
      t = not_null(s_125);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm y_125 = NULL,z_125 = NULL,a_126 = NULL;
  y_125 = t;
  x_125 :
  if(match_cons(y_125, sym__2))
    {
      z_125 = ATgetArgument(y_125, 0);
      a_126 = ATgetArgument(y_125, 1);
      {
        t = not_null(z_125);
        {
          ATerm e_126 (ATerm t)
          {
            ATerm l_27 = t;
            int m_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(m_27);
              }
            else
              {
                t = l_27;
                {
                  ATerm n_27 = t;
                  int o_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_27;
                      p_27 = t;
                      {
                        ATerm y_4 (ATerm t)
                        {
                          t = not_null(a_126);
                          return(t);
                        }
                        t = HdMember_1(t, y_4);
                      }
                      t = p_27;
                      t = Cons_2(t, _id, e_126);
                      LocalPopChoice(o_27);
                    }
                  else
                    {
                      t = n_27;
                      {
                        t = Tl_0(t);
                        t = e_126(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = e_126(t);
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
  ATerm h_126 = NULL,i_126 = NULL,j_126 = NULL;
  h_126 = t;
  g_126 :
  if(match_cons(h_126, sym__2))
    {
      i_126 = ATgetArgument(h_126, 0);
      j_126 = ATgetArgument(h_126, 1);
      if(((i_126 != NULL) && (i_126 != j_126)))
        _fail(j_126);
      else
        i_126 = j_126;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL,j_127 = NULL,k_127 = NULL,l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL;
  ATerm w_128 (ATerm t)
  {
    ATerm u_127 = NULL,v_127 = NULL,w_127 = NULL,i_128 = NULL;
    ATerm q_27;
    q_27 = t;
    {
      ATerm x_127 = NULL,z_127 = NULL,b_128 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_127), term_s_27);
      {
        ATerm t_27 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_27;
          }
        {
          ATerm u_27;
          u_27 = t;
          {
            ATerm y_127 = NULL;
            t = term_g_19;
            {
              t = q_0(t);
              {
                y_127 = t;
                if(((x_127 != NULL) && (x_127 != y_127)))
                  _fail(y_127);
                else
                  x_127 = y_127;
              }
            }
          }
          t = u_27;
          {
            ATerm a_128 = NULL;
            t = not_null(k_127);
            {
              t = tvars_0(t);
              {
                a_128 = t;
                if(((z_127 != NULL) && (z_127 != a_128)))
                  _fail(a_128);
                else
                  z_127 = a_128;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_127), not_null(z_127));
              {
                t = isect_0(t);
                {
                  ATerm c_128 = NULL,e_128 = NULL,g_128 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    b_128 = t;
                    {
                      if(((u_127 != NULL) && (u_127 != b_128)))
                        _fail(b_128);
                      else
                        u_127 = b_128;
                      {
                        ATerm v_27;
                        v_27 = t;
                        {
                          ATerm d_128 = NULL;
                          t = term_g_19;
                          {
                            t = q_0(t);
                            {
                              d_128 = t;
                              if(((c_128 != NULL) && (c_128 != d_128)))
                                _fail(d_128);
                              else
                                c_128 = d_128;
                            }
                          }
                        }
                        t = v_27;
                        {
                          ATerm f_128 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_127), not_null(o_127));
                          {
                            t = tvars_0(t);
                            {
                              f_128 = t;
                              if(((e_128 != NULL) && (e_128 != f_128)))
                                _fail(f_128);
                              else
                                e_128 = f_128;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_128), not_null(e_128));
                            {
                              t = isect_0(t);
                              {
                                ATerm h_128 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  g_128 = t;
                                  {
                                    if(((v_127 != NULL) && (v_127 != g_128)))
                                      _fail(g_128);
                                    else
                                      v_127 = g_128;
                                    {
                                      t = new_0(t);
                                      {
                                        h_128 = t;
                                        if(((w_127 != NULL) && (w_127 != h_128)))
                                          _fail(h_128);
                                        else
                                          w_127 = h_128;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = q_27;
    {
      ATerm j_128 = NULL;
      t = not_null(h_127);
      {
        t = r_0(t);
        {
          j_128 = t;
          if(((i_128 != NULL) && (i_128 != j_128)))
            _fail(j_128);
          else
            i_128 = j_128;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(i_128), (ATerm) ATmakeAppl(sym_Op_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_27, (ATerm) ATinsert(CheckATermList(not_null(v_127)), (ATerm) ATmakeAppl(sym_Str_1, not_null(w_127))))), (ATerm) ATmakeAppl(sym_Op_2, term_w_27, not_null(u_127)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(h_127), not_null(i_127), (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_127), not_null(l_127), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(h_127))))), (ATerm)ATmakeAppl(sym_Op_2, term_w_27, not_null(u_127)), (ATerm) ATmakeAppl(sym_Op_2, term_x_27, (ATerm) ATinsert(CheckATermList(not_null(v_127)), (ATerm) ATmakeAppl(sym_Str_1, not_null(w_127))))), not_null(o_127)))));
    }
    return(t);
  }
  ATerm x_128 (ATerm t)
  {
    ATerm o_128 = NULL,u_128 = NULL;
    ATerm a_28;
    a_28 = t;
    {
      ATerm p_128 = NULL,r_128 = NULL,t_128 = NULL;
      ATerm b_28;
      b_28 = t;
      {
        ATerm q_128 = NULL;
        t = term_g_19;
        {
          t = q_0(t);
          {
            q_128 = t;
            if(((p_128 != NULL) && (p_128 != q_128)))
              _fail(q_128);
            else
              p_128 = q_128;
          }
        }
      }
      t = b_28;
      {
        ATerm s_128 = NULL;
        t = not_null(k_127);
        {
          t = tvars_0(t);
          {
            s_128 = t;
            if(((r_128 != NULL) && (r_128 != s_128)))
              _fail(s_128);
            else
              r_128 = s_128;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_128), not_null(r_128));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                t_128 = t;
                if(((o_128 != NULL) && (o_128 != t_128)))
                  _fail(t_128);
                else
                  o_128 = t_128;
              }
            }
          }
        }
      }
    }
    t = a_28;
    {
      ATerm v_128 = NULL;
      t = not_null(h_127);
      {
        t = r_0(t);
        {
          v_128 = t;
          if(((u_128 != NULL) && (u_128 != v_128)))
            _fail(v_128);
          else
            u_128 = v_128;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(u_128), (ATerm) ATmakeAppl(sym_Op_2, term_e_9, (ATerm) ATinsert(ATinsert(ATempty, term_s_27), (ATerm) ATmakeAppl(sym_Op_2, term_w_27, not_null(o_128)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(h_127), not_null(i_127), (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_127), term_c_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(h_127))))), (ATerm)ATmakeAppl(sym_Op_2, term_w_27, not_null(o_128)), term_s_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_127), term_y_13)))));
    }
    return(t);
  }
  g_127 = t;
  a_127 :
  if(match_cons(g_127, sym_RDef_3))
    {
      h_127 = ATgetArgument(g_127, 0);
      i_127 = ATgetArgument(g_127, 1);
      j_127 = ATgetArgument(g_127, 2);
      b_127 :
      if(match_cons(j_127, sym_Rule_3))
        {
          k_127 = ATgetArgument(j_127, 0);
          l_127 = ATgetArgument(j_127, 1);
          o_127 = ATgetArgument(j_127, 2);
          c_127 :
          if(match_cons(l_127, sym_Op_2))
            {
              m_127 = ATgetArgument(l_127, 0);
              n_127 = ATgetArgument(l_127, 1);
              d_127 :
              if(((ATermList) n_127 == ATempty))
                {
                  e_127 :
                  if(match_string(m_127, "Undefined"))
                    {
                      ATerm d_28 = t;
                      int e_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_128(t);
                          LocalPopChoice(e_28);
                        }
                      else
                        {
                          t = d_28;
                          t = x_128(t);
                        }
                    }
                  else
                    {
                      t = w_128(t);
                    }
                }
              else
                {
                  f_127 :
                  t = w_128(t);
                }
            }
          else
            {
              t = w_128(t);
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
  ATerm q_129 = NULL,r_129 = NULL,s_129 = NULL,t_129 = NULL;
  q_129 = t;
  o_129 :
  if(match_cons(q_129, sym__2))
    {
      r_129 = ATgetArgument(q_129, 0);
      t_129 = ATgetArgument(q_129, 1);
      p_129 :
      if(match_cons(r_129, sym_OverrideDynamicRules_1))
        {
          s_129 = ATgetArgument(r_129, 0);
          {
            t = not_null(s_129);
            {
              ATerm z_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  t = not_null(t_129);
                  return(t);
                }
                ATerm b_5 (ATerm t)
                {
                  ATerm w_129 = NULL;
                  w_129 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_g_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(w_129)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, a_5, b_5);
                return(t);
              }
              t = map_1(t, z_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(r_129, sym_DynamicRules_1))
            {
              s_129 = ATgetArgument(r_129, 0);
              {
                t = not_null(s_129);
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm d_5 (ATerm t)
                    {
                      t = not_null(t_129);
                      return(t);
                    }
                    ATerm e_5 (ATerm t)
                    {
                      ATerm a_130 = NULL;
                      a_130 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_i_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(a_130)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, d_5, e_5);
                    return(t);
                  }
                  t = map_1(t, c_5);
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
ATerm dist_scope_1 (ATerm t, ATerm b_104 (ATerm))
{
  ATerm l_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL;
  l_130 = t;
  j_130 :
  if(match_cons(l_130, sym__2))
    {
      m_130 = ATgetArgument(l_130, 0);
      p_130 = ATgetArgument(l_130, 1);
      k_130 :
      if(match_cons(m_130, sym_Scope_2))
        {
          n_130 = ATgetArgument(m_130, 0);
          o_130 = ATgetArgument(m_130, 1);
          {
            ATerm t_130 = NULL;
            ATerm u_130 = NULL,w_130 = NULL;
            ATerm v_130 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_130), not_null(p_130));
            {
              t = union_0(t);
              {
                v_130 = t;
                if(((u_130 != NULL) && (u_130 != v_130)))
                  _fail(v_130);
                else
                  u_130 = v_130;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_130), not_null(u_130));
              {
                t = b_104(t);
                {
                  w_130 = t;
                  if(((t_130 != NULL) && (t_130 != w_130)))
                    _fail(w_130);
                  else
                    t_130 = w_130;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_130), not_null(t_130));
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
ATerm one_dist_1 (ATerm t, ATerm b_98 (ATerm))
{
  ATerm d_131 = NULL,e_131 = NULL,f_131 = NULL;
  d_131 = t;
  c_131 :
  if(match_cons(d_131, sym__2))
    {
      e_131 = ATgetArgument(d_131, 0);
      f_131 = ATgetArgument(d_131, 1);
      {
        t = not_null(e_131);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm i_131 = NULL;
            i_131 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_131), not_null(f_131));
              t = b_98(t);
            }
            return(t);
          }
          t = _one(t, f_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm m_131 (ATerm t)
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_98(t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = one_dist_1(t, m_131);
      }
    return(t);
  }
  t = m_131(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL;
  t_131 = t;
  s_131 :
  if(((ATgetType(t_131) == AT_LIST) && ((ATermList) t_131 != ATempty)))
    {
      u_131 = ATgetFirst((ATermList) t_131);
      v_131 = (ATerm) ATgetNext((ATermList) t_131);
      {
        ATerm y_131 = NULL,z_131 = NULL,a_132 = NULL,b_132 = NULL;
        ATerm c_132 = NULL;
        t = not_null(u_131);
        {
          ATerm g_132 = NULL;
          t = tvars_0(t);
          {
            c_132 = t;
            {
              if(((a_132 != NULL) && (a_132 != c_132)))
                _fail(c_132);
              else
                a_132 = c_132;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_131), not_null(a_132));
                {
                  ATerm j_132 (ATerm t)
                  {
                    ATerm g_5 (ATerm t)
                    {
                      ATerm l_28 = t;
                      int m_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, j_132);
                          LocalPopChoice(m_28);
                        }
                      else
                        {
                          t = l_28;
                          {
                            ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              d_132 = t;
                              q_131 :
                              if(match_cons(d_132, sym__2))
                                {
                                  e_132 = ATgetArgument(d_132, 0);
                                  f_132 = ATgetArgument(d_132, 1);
                                  {
                                    if(((z_131 != NULL) && (z_131 != e_132)))
                                      _fail(e_132);
                                    else
                                      z_131 = e_132;
                                    {
                                      if(((y_131 != NULL) && (y_131 != f_132)))
                                        _fail(f_132);
                                      else
                                        y_131 = f_132;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(z_131));
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
                    t = env_oncetd_1(t, g_5);
                    return(t);
                  }
                  t = j_132(t);
                  {
                    g_132 = t;
                    if(((b_132 != NULL) && (b_132 != g_132)))
                      _fail(g_132);
                    else
                      b_132 = g_132;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_131)), not_null(b_132)), not_null(v_131));
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
ATerm repeat_2 (ATerm t, ATerm o_102 (ATerm), ATerm p_102 (ATerm))
{
  ATerm m_132 (ATerm t)
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_102(t);
        t = m_132(t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = p_102(t);
      }
    return(t);
  }
  t = m_132(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm r_102 (ATerm))
{
  t = repeat_2(t, r_102, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm j_97 (ATerm))
{
  ATerm n_132 (ATerm t)
  {
    t = j_97(t);
    {
      ATerm p_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(q_28);
        }
      else
        {
          t = p_28;
          t = Cons_2(t, _id, n_132);
        }
    }
    return(t);
  }
  t = n_132(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, h_5);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm s_132 = NULL,t_132 = NULL,u_132 = NULL,v_132 = NULL,w_132 = NULL;
  u_132 = t;
  q_132 :
  if(match_cons(u_132, sym_DynRuleScope_2))
    {
      v_132 = ATgetArgument(u_132, 0);
      w_132 = ATgetArgument(u_132, 1);
      r_132 :
      if(((ATgetType(v_132) == AT_LIST) && ((ATermList) v_132 != ATempty)))
        {
          s_132 = ATgetFirst((ATermList) v_132);
          t_132 = (ATerm) ATgetNext((ATermList) v_132);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_s_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(t_132), not_null(w_132))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_132)))));
        }
      else
        {
          if(((ATermList) v_132 == ATempty))
            {
              t = not_null(w_132);
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
  ATerm i_5 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, i_5);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm l_5 (ATerm t)
      {
        ATerm m_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, n_5);
          return(t);
        }
        t = Cons_2(t, m_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, l_5);
      return(t);
    }
    t = Cons_2(t, _id, k_5);
    return(t);
  }
  t = Specification_1(t, j_5);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm g_133 = NULL,h_133 = NULL;
  g_133 = t;
  f_133 :
  if(match_cons(g_133, sym_ScopeDefault_1))
    {
      h_133 = ATgetArgument(g_133, 0);
      {
        ATerm j_133 = NULL;
        ATerm k_133 = NULL;
        t = not_null(h_133);
        {
          t = tvars_0(t);
          {
            k_133 = t;
            if(((j_133 != NULL) && (j_133 != k_133)))
              _fail(k_133);
            else
              j_133 = k_133;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_133), not_null(h_133));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm s_133 = NULL,t_133 = NULL;
  s_133 = t;
  r_133 :
  if(match_cons(s_133, sym_DynamicRules_1))
    {
      t_133 = ATgetArgument(s_133, 0);
      {
        ATerm w_133 = NULL,y_133 = NULL;
        ATerm x_133 = NULL;
        t = SSLgetAnnotations(not_null(s_133));
        {
          x_133 = t;
          if(((w_133 != NULL) && (w_133 != x_133)))
            _fail(x_133);
          else
            w_133 = x_133;
        }
        {
          t = not_null(t_133);
          {
            ATerm a_134 = NULL;
            t = o_75(t);
            {
              y_133 = t;
              {
                ATerm b_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(y_133)), not_null(w_133));
                {
                  b_134 = t;
                  if(((a_134 != NULL) && (a_134 != b_134)))
                    _fail(b_134);
                  else
                    a_134 = b_134;
                }
                t = not_null(a_134);
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
ATerm Scope_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm m_134 = NULL,n_134 = NULL,o_134 = NULL;
  m_134 = t;
  l_134 :
  if(match_cons(m_134, sym_Scope_2))
    {
      n_134 = ATgetArgument(m_134, 0);
      o_134 = ATgetArgument(m_134, 1);
      {
        ATerm s_134 = NULL,u_134 = NULL;
        ATerm t_134 = NULL;
        t = SSLgetAnnotations(not_null(m_134));
        {
          t_134 = t;
          if(((s_134 != NULL) && (s_134 != t_134)))
            _fail(t_134);
          else
            s_134 = t_134;
        }
        {
          t = not_null(n_134);
          {
            ATerm w_134 = NULL;
            t = l_78(t);
            {
              u_134 = t;
              {
                t = not_null(o_134);
                {
                  ATerm y_134 = NULL;
                  t = m_78(t);
                  {
                    w_134 = t;
                    {
                      ATerm z_134 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(u_134), not_null(w_134)), not_null(s_134));
                      {
                        z_134 = t;
                        if(((y_134 != NULL) && (y_134 != z_134)))
                          _fail(z_134);
                        else
                          y_134 = z_134;
                      }
                      t = not_null(y_134);
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
ATerm tboundin_3 (ATerm t, ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, n_79, l_79);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      t = DynamicRules_1(t, l_79);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm h_135 = NULL,i_135 = NULL;
  h_135 = t;
  g_135 :
  if(match_cons(h_135, sym_DynamicRules_1))
    {
      i_135 = ATgetArgument(h_135, 0);
      {
        t = not_null(i_135);
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
  ATerm p_135 = NULL,q_135 = NULL,r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL;
  s_135 = t;
  n_135 :
  if(match_cons(s_135, sym_LRule_1))
    {
      t_135 = ATgetArgument(s_135, 0);
      o_135 :
      if(match_cons(t_135, sym_Rule_3))
        {
          p_135 = ATgetArgument(t_135, 0);
          q_135 = ATgetArgument(t_135, 1);
          r_135 = ATgetArgument(t_135, 2);
          {
            t = not_null(p_135);
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
      if(match_cons(s_135, sym_Scope_2))
        {
          t_135 = ATgetArgument(s_135, 0);
          u_135 = ATgetArgument(s_135, 1);
          t = not_null(t_135);
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
  ATerm e_136 = NULL,f_136 = NULL;
  e_136 = t;
  d_136 :
  if(match_cons(e_136, sym_Var_1))
    {
      f_136 = ATgetArgument(e_136, 0);
      t = (ATerm) ATinsert(ATempty, not_null(f_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm k_136 = NULL,l_136 = NULL,m_136 = NULL;
  k_136 = t;
  j_136 :
  if(match_cons(k_136, sym__2))
    {
      l_136 = ATgetArgument(k_136, 0);
      m_136 = ATgetArgument(k_136, 1);
      {
        t = not_null(l_136);
        {
          ATerm q_136 (ATerm t)
          {
            ATerm v_28 = t;
            int w_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_136);
                LocalPopChoice(w_28);
              }
            else
              {
                t = v_28;
                {
                  ATerm x_28 = t;
                  int y_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 (ATerm t)
                      {
                        t = not_null(m_136);
                        return(t);
                      }
                      t = HdMember_1(t, o_5);
                      t = q_136(t);
                      LocalPopChoice(y_28);
                    }
                  else
                    {
                      t = x_28;
                      t = Cons_2(t, _id, q_136);
                    }
                }
              }
            return(t);
          }
          t = q_136(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm))
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_90(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm v_136 = NULL,w_136 = NULL,x_136 = NULL;
        v_136 = t;
        u_136 :
        if(((ATgetType(v_136) == AT_LIST) && ((ATermList) v_136 != ATempty)))
          {
            w_136 = ATgetFirst((ATermList) v_136);
            x_136 = (ATerm) ATgetNext((ATermList) v_136);
            {
              ATerm a_137 = NULL,c_137 = NULL;
              ATerm b_29;
              b_29 = t;
              {
                ATerm b_137 = NULL;
                t = not_null(w_136);
                {
                  t = b_91(t);
                  {
                    b_137 = t;
                    if(((a_137 != NULL) && (a_137 != b_137)))
                      _fail(b_137);
                    else
                      a_137 = b_137;
                  }
                }
              }
              t = b_29;
              {
                ATerm d_137 = NULL;
                t = not_null(x_136);
                {
                  t = foldr_3(t, z_90, a_91, b_91);
                  {
                    d_137 = t;
                    if(((c_137 != NULL) && (c_137 != d_137)))
                      _fail(d_137);
                    else
                      c_137 = d_137;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_137), not_null(c_137));
                  t = a_91(t);
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
ATerm crush_3 (ATerm t, ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm p_92 (ATerm))
{
  ATerm l_137 = NULL;
  ATerm n_137 = NULL;
  l_137 = t;
  {
    ATerm o_137 = NULL;
    ATerm q_137 = NULL,r_137 = NULL,s_137 = NULL;
    t = not_null(l_137);
    {
      o_137 = t;
      {
        t = SSL_explode_term(not_null(o_137));
        {
          q_137 = t;
          k_137 :
          if(match_cons(q_137, sym__2))
            {
              r_137 = ATgetArgument(q_137, 0);
              s_137 = ATgetArgument(q_137, 1);
              if(((n_137 != NULL) && (n_137 != s_137)))
                _fail(s_137);
              else
                n_137 = s_137;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_137);
      t = foldr_3(t, n_92, o_92, p_92);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL;
  z_137 = t;
  x_137 :
  if(match_cons(z_137, sym__2))
    {
      a_138 = ATgetArgument(z_137, 0);
      b_138 = ATgetArgument(z_137, 1);
      y_137 :
      if(((ATgetType(b_138) == AT_LIST) && ((ATermList) b_138 != ATempty)))
        {
          c_138 = ATgetFirst((ATermList) b_138);
          d_138 = (ATerm) ATgetNext((ATermList) b_138);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_138)), not_null(c_138)), not_null(d_138));
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
  ATerm s_138 = NULL,t_138 = NULL,u_138 = NULL,v_138 = NULL,w_138 = NULL;
  s_138 = t;
  q_138 :
  if(((ATgetType(s_138) == AT_LIST) && ((ATermList) s_138 != ATempty)))
    {
      t_138 = ATgetFirst((ATermList) s_138);
      w_138 = (ATerm) ATgetNext((ATermList) s_138);
      r_138 :
      if(match_cons(t_138, sym__2))
        {
          u_138 = ATgetArgument(t_138, 0);
          v_138 = ATgetArgument(t_138, 1);
          {
            ATerm a_139 = NULL,b_139 = NULL,h_139 = NULL,o_139 = NULL;
            ATerm c_29;
            c_29 = t;
            {
              ATerm c_139 = NULL;
              ATerm e_139 = NULL,f_139 = NULL,g_139 = NULL;
              t = not_null(v_138);
              {
                c_139 = t;
                {
                  t = SSL_explode_term(not_null(c_139));
                  {
                    e_139 = t;
                    l_138 :
                    if(match_cons(e_139, sym__2))
                      {
                        f_139 = ATgetArgument(e_139, 0);
                        g_139 = ATgetArgument(e_139, 1);
                        {
                          if(((a_139 != NULL) && (a_139 != f_139)))
                            _fail(f_139);
                          else
                            a_139 = f_139;
                          if(((b_139 != NULL) && (b_139 != g_139)))
                            _fail(g_139);
                          else
                            b_139 = g_139;
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
            t = c_29;
            {
              ATerm d_29;
              d_29 = t;
              {
                ATerm i_139 = NULL;
                ATerm l_139 = NULL,m_139 = NULL,n_139 = NULL;
                t = not_null(u_138);
                {
                  i_139 = t;
                  {
                    t = SSL_explode_term(not_null(i_139));
                    {
                      l_139 = t;
                      o_138 :
                      if(match_cons(l_139, sym__2))
                        {
                          m_139 = ATgetArgument(l_139, 0);
                          n_139 = ATgetArgument(l_139, 1);
                          {
                            if(((a_139 != NULL) && (a_139 != m_139)))
                              _fail(m_139);
                            else
                              a_139 = m_139;
                            if(((h_139 != NULL) && (h_139 != n_139)))
                              _fail(n_139);
                            else
                              h_139 = n_139;
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
              t = d_29;
              {
                ATerm p_139 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_139), not_null(b_139));
                {
                  t = zip_1(t, _id);
                  {
                    p_139 = t;
                    if(((o_139 != NULL) && (o_139 != p_139)))
                      _fail(p_139);
                    else
                      o_139 = p_139;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_139), not_null(w_138));
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
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL,d_140 = NULL;
  z_139 = t;
  x_139 :
  if(((ATgetType(z_139) == AT_LIST) && ((ATermList) z_139 != ATempty)))
    {
      a_140 = ATgetFirst((ATermList) z_139);
      d_140 = (ATerm) ATgetNext((ATermList) z_139);
      y_139 :
      if(match_cons(a_140, sym__2))
        {
          b_140 = ATgetArgument(a_140, 0);
          c_140 = ATgetArgument(a_140, 1);
          {
            ATerm f_140 = NULL;
            if(((b_140 != NULL) && (b_140 != c_140)))
              _fail(c_140);
            else
              b_140 = c_140;
            {
              if(((f_140 != NULL) && (f_140 != d_140)))
                _fail(d_140);
              else
                f_140 = d_140;
              t = not_null(f_140);
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
ATerm while_not_2 (ATerm t, ATerm f_103 (ATerm), ATerm g_103 (ATerm))
{
  ATerm h_140 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_103(t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        {
          t = g_103(t);
          t = h_140(t);
        }
      }
    return(t);
  }
  t = h_140(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm))
{
  t = i_103(t);
  t = while_not_2(t, j_103, k_103);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm c_92 (ATerm))
{
  ATerm l_140 = NULL,m_140 = NULL,n_140 = NULL;
  l_140 = t;
  k_140 :
  if(((ATgetType(l_140) == AT_LIST) && ((ATermList) l_140 != ATempty)))
    {
      m_140 = ATgetFirst((ATermList) l_140);
      n_140 = (ATerm) ATgetNext((ATermList) l_140);
      {
        t = c_92(t);
        {
          ATerm p_5 (ATerm t)
          {
            ATerm q_140 = NULL;
            q_140 = t;
            if(((m_140 != NULL) && (m_140 != q_140)))
              _fail(q_140);
            else
              m_140 = q_140;
            return(t);
          }
          t = fetch_1(t, p_5);
        }
        t = not_null(n_140);
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
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_140 = NULL,x_140 = NULL,y_140 = NULL;
      w_140 = t;
      u_140 :
      if(match_cons(w_140, sym__2))
        {
          x_140 = ATgetArgument(w_140, 0);
          y_140 = ATgetArgument(w_140, 1);
          {
            t = not_null(x_140);
            {
              ATerm e_141 (ATerm t)
              {
                ATerm i_29 = t;
                int j_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
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
                          ATerm q_5 (ATerm t)
                          {
                            t = not_null(y_140);
                            return(t);
                          }
                          t = HdMember_1(t, q_5);
                          t = e_141(t);
                          LocalPopChoice(l_29);
                        }
                      else
                        {
                          t = k_29;
                          t = Cons_2(t, _id, e_141);
                        }
                    }
                  }
                return(t);
              }
              t = e_141(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm b_141 = NULL;
          b_141 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_141));
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 (ATerm t)
              {
                ATerm o_29 = t;
                int p_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(p_29);
                  }
                else
                  {
                    t = o_29;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, u_5);
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, r_5, s_5, t_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t_80 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_141 (ATerm t)
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_80(t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        {
          ATerm s_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_141 = NULL;
              ATerm u_29;
              u_29 = t;
              {
                ATerm i_141 = NULL;
                t = s_80(t);
                {
                  i_141 = t;
                  if(((h_141 != NULL) && (h_141 != i_141)))
                    _fail(i_141);
                  else
                    h_141 = i_141;
                }
              }
              t = u_29;
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm x_5 (ATerm t)
                  {
                    t = not_null(h_141);
                    return(t);
                  }
                  t = split_2(t, j_141, x_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_80(t, v_5, j_141, w_5);
                {
                  ATerm y_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, y_5, union_0, _id);
                }
              }
              LocalPopChoice(t_29);
            }
          else
            {
              t = s_29;
              {
                ATerm z_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, z_5, union_0, j_141);
              }
            }
        }
      }
    return(t);
  }
  t = j_141(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_6, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm p_141 = NULL,q_141 = NULL,r_141 = NULL,s_141 = NULL,t_141 = NULL;
  p_141 = t;
  n_141 :
  if(match_cons(p_141, sym_LRule_1))
    {
      q_141 = ATgetArgument(p_141, 0);
      o_141 :
      if(match_cons(q_141, sym_Rule_3))
        {
          r_141 = ATgetArgument(q_141, 0);
          s_141 = ATgetArgument(q_141, 1);
          t_141 = ATgetArgument(q_141, 2);
          {
            ATerm x_141 = NULL;
            ATerm y_141 = NULL;
            t = not_null(r_141);
            {
              t = tvars_0(t);
              {
                y_141 = t;
                if(((x_141 != NULL) && (x_141 != y_141)))
                  _fail(y_141);
                else
                  x_141 = y_141;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_141), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_141), not_null(s_141), not_null(t_141))));
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
ATerm bottomup_1 (ATerm t, ATerm i_99 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    t = bottomup_1(t, i_99);
    return(t);
  }
  t = _all(t, b_6);
  t = i_99(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm x_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(y_29);
        }
      else
        {
          t = x_29;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, d_6);
    return(t);
  }
  t = bottomup_1(t, c_6);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL;
  d_142 = t;
  c_142 :
  if(match_cons(d_142, sym_Var_1))
    {
      e_142 = ATgetArgument(d_142, 0);
      t = not_null(e_142);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL,m_142 = NULL,n_142 = NULL,o_142 = NULL;
  k_142 = t;
  i_142 :
  if(match_cons(k_142, sym__2))
    {
      l_142 = ATgetArgument(k_142, 0);
      m_142 = ATgetArgument(k_142, 1);
      j_142 :
      if(((ATgetType(m_142) == AT_LIST) && ((ATermList) m_142 != ATempty)))
        {
          n_142 = ATgetFirst((ATermList) m_142);
          o_142 = (ATerm) ATgetNext((ATermList) m_142);
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_142), not_null(o_142));
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
  ATerm w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL,c_143 = NULL;
  w_142 = t;
  t_142 :
  if(match_cons(w_142, sym__2))
    {
      x_142 = ATgetArgument(w_142, 0);
      y_142 = ATgetArgument(w_142, 1);
      u_142 :
      if(((ATgetType(y_142) == AT_LIST) && ((ATermList) y_142 != ATempty)))
        {
          z_142 = ATgetFirst((ATermList) y_142);
          c_143 = (ATerm) ATgetNext((ATermList) y_142);
          v_142 :
          if(match_cons(z_142, sym__2))
            {
              a_143 = ATgetArgument(z_142, 0);
              b_143 = ATgetArgument(z_142, 1);
              {
                ATerm e_143 = NULL;
                if(((x_142 != NULL) && (x_142 != a_143)))
                  _fail(a_143);
                else
                  x_142 = a_143;
                {
                  if(((e_143 != NULL) && (e_143 != b_143)))
                    _fail(b_143);
                  else
                    e_143 = b_143;
                  t = not_null(e_143);
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
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm n_82 (ATerm), ATerm o_82 (ATerm))
{
  ATerm k_143 = NULL;
  ATerm m_143 = NULL,n_143 = NULL;
  k_143 = t;
  {
    ATerm o_143 = NULL;
    t = not_null(k_143);
    {
      ATerm p_143 = NULL;
      t = n_82(t);
      {
        o_143 = t;
        {
          if(((m_143 != NULL) && (m_143 != o_143)))
            _fail(o_143);
          else
            m_143 = o_143;
          {
            t = o_82(t);
            {
              p_143 = t;
              if(((n_143 != NULL) && (n_143 != p_143)))
                _fail(p_143);
              else
                n_143 = p_143;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_143), not_null(n_143));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm t_143 (ATerm t)
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_101(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = _all(t, t_143);
      }
    return(t);
  }
  t = t_143(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm w_143 = NULL,x_143 = NULL,y_143 = NULL;
  w_143 = t;
  v_143 :
  if(match_cons(w_143, sym__2))
    {
      x_143 = ATgetArgument(w_143, 0);
      y_143 = ATgetArgument(w_143, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_143)), not_null(x_143));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL,m_144 = NULL;
  g_144 = t;
  d_144 :
  if(match_cons(g_144, sym__2))
    {
      h_144 = ATgetArgument(g_144, 0);
      k_144 = ATgetArgument(g_144, 1);
      e_144 :
      if(((ATgetType(h_144) == AT_LIST) && ((ATermList) h_144 != ATempty)))
        {
          i_144 = ATgetFirst((ATermList) h_144);
          j_144 = (ATerm) ATgetNext((ATermList) h_144);
          f_144 :
          if(((ATgetType(k_144) == AT_LIST) && ((ATermList) k_144 != ATempty)))
            {
              l_144 = ATgetFirst((ATermList) k_144);
              m_144 = (ATerm) ATgetNext((ATermList) k_144);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_144), not_null(l_144)), (ATerm) ATmakeAppl(sym__2, not_null(j_144), not_null(m_144)));
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
  ATerm w_144 = NULL,x_144 = NULL,y_144 = NULL;
  w_144 = t;
  t_144 :
  if(match_cons(w_144, sym__2))
    {
      x_144 = ATgetArgument(w_144, 0);
      y_144 = ATgetArgument(w_144, 1);
      u_144 :
      if(((ATermList) x_144 == ATempty))
        {
          v_144 :
          if(((ATermList) y_144 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm a_145 (ATerm t)
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_94(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        {
          t = t_94(t);
          {
            t = _2(t, v_94, a_145);
            t = u_94(t);
          }
        }
      }
    return(t);
  }
  t = a_145(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm x_94 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, x_94);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm f_145 = NULL,g_145 = NULL,h_145 = NULL,i_145 = NULL;
  f_145 = t;
  e_145 :
  if(match_cons(f_145, sym__2))
    {
      g_145 = ATgetArgument(f_145, 0);
      h_145 = ATgetArgument(f_145, 1);
      {
        ATerm k_145 = NULL;
        if(((k_145 != NULL) && (k_145 != h_145)))
          _fail(h_145);
        else
          k_145 = h_145;
      }
    }
  else
    {
      if(match_cons(f_145, sym__3))
        {
          g_145 = ATgetArgument(f_145, 0);
          h_145 = ATgetArgument(f_145, 1);
          i_145 = ATgetArgument(f_145, 2);
          {
            ATerm q_145 = NULL;
            ATerm r_145 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_145), not_null(h_145));
            {
              t = zip_1(t, _id);
              {
                r_145 = t;
                if(((q_145 != NULL) && (q_145 != r_145)))
                  _fail(r_145);
                else
                  q_145 = r_145;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_145), not_null(i_145));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm p_82 (ATerm), ATerm q_82 (ATerm))
{
  ATerm x_145 = NULL,y_145 = NULL,z_145 = NULL;
  t = subs_args_0(t);
  {
    x_145 = t;
    w_145 :
    if(match_cons(x_145, sym__2))
      {
        y_145 = ATgetArgument(x_145, 0);
        z_145 = ATgetArgument(x_145, 1);
        {
          t = not_null(z_145);
          {
            ATerm e_6 (ATerm t)
            {
              ATerm f_6 (ATerm t)
              {
                t = not_null(y_145);
                return(t);
              }
              t = SubsVar_2(t, p_82, f_6);
              t = q_82(t);
              return(t);
            }
            t = alltd_1(t, e_6);
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
ATerm substitute_1 (ATerm t, ATerm r_82 (ATerm))
{
  t = substitute_2(t, r_82, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm g_146 = NULL,h_146 = NULL,i_146 = NULL,j_146 = NULL;
  g_146 = t;
  e_146 :
  if(match_cons(g_146, sym_OpDecl_2))
    {
      h_146 = ATgetArgument(g_146, 0);
      i_146 = ATgetArgument(g_146, 1);
      f_146 :
      if(match_cons(i_146, sym_ConstType_1))
        {
          j_146 = ATgetArgument(i_146, 0);
          t = not_null(h_146);
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
  ATerm o_146 = NULL,p_146 = NULL;
  o_146 = t;
  n_146 :
  if(match_cons(o_146, sym_Constructors_1))
    {
      p_146 = ATgetArgument(o_146, 0);
      {
        t = not_null(p_146);
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
  ATerm v_146 = NULL,w_146 = NULL,x_146 = NULL,y_146 = NULL;
  v_146 = t;
  t_146 :
  if(match_cons(v_146, sym_Overlay_3))
    {
      w_146 = ATgetArgument(v_146, 0);
      x_146 = ATgetArgument(v_146, 1);
      y_146 = ATgetArgument(v_146, 2);
      u_146 :
      if(((ATermList) x_146 == ATempty))
        {
          t = not_null(w_146);
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
  ATerm f_147 = NULL,g_147 = NULL;
  f_147 = t;
  e_147 :
  if(match_cons(f_147, sym_Overlays_1))
    {
      g_147 = ATgetArgument(f_147, 0);
      {
        t = not_null(g_147);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(f_147, sym_Signature_1))
        {
          g_147 = ATgetArgument(f_147, 0);
          {
            t = not_null(g_147);
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
ATerm filter_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              t = filter_1(t, d_90);
              return(t);
            }
            t = Cons_2(t, d_90, g_6);
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            {
              ATerm n_147 = NULL,o_147 = NULL,p_147 = NULL;
              n_147 = t;
              m_147 :
              if(((ATgetType(n_147) == AT_LIST) && ((ATermList) n_147 != ATempty)))
                {
                  o_147 = ATgetFirst((ATermList) n_147);
                  p_147 = (ATerm) ATgetNext((ATermList) n_147);
                  {
                    t = not_null(p_147);
                    t = filter_1(t, d_90);
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
  ATerm w_147 = NULL,c_148 = NULL;
  ATerm j_30;
  j_30 = t;
  {
    ATerm b_148 = NULL;
    t = const_names_0(t);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm x_147 = NULL,z_147 = NULL;
        ATerm k_30;
        k_30 = t;
        {
          ATerm y_147 = NULL;
          y_147 = t;
          if(((x_147 != NULL) && (x_147 != y_147)))
            _fail(y_147);
          else
            x_147 = y_147;
        }
        t = k_30;
        {
          ATerm a_148 = NULL;
          a_148 = t;
          if(((z_147 != NULL) && (z_147 != a_148)))
            _fail(a_148);
          else
            z_147 = a_148;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_147), (ATerm) ATmakeAppl(sym_Op_2, not_null(z_147), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, h_6);
      {
        b_148 = t;
        if(((w_147 != NULL) && (w_147 != b_148)))
          _fail(b_148);
        else
          w_147 = b_148;
      }
    }
  }
  t = j_30;
  {
    ATerm d_148 = NULL;
    d_148 = t;
    if(((c_148 != NULL) && (c_148 != d_148)))
      _fail(d_148);
    else
      c_148 = d_148;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_147), not_null(c_148));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm k_148 = NULL,l_148 = NULL,m_148 = NULL,n_148 = NULL;
  k_148 = t;
  j_148 :
  if(match_cons(k_148, sym__3))
    {
      l_148 = ATgetArgument(k_148, 0);
      m_148 = ATgetArgument(k_148, 1);
      n_148 = ATgetArgument(k_148, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(n_148))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(m_148))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(l_148))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm u_148 = NULL,v_148 = NULL,w_148 = NULL;
  u_148 = t;
  t_148 :
  if(match_cons(u_148, sym__2))
    {
      v_148 = ATgetArgument(u_148, 0);
      w_148 = ATgetArgument(u_148, 1);
      {
        t = not_null(v_148);
        {
          ATerm i_6 (ATerm t)
          {
            t = not_null(w_148);
            return(t);
          }
          t = at_end_1(t, i_6);
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
  ATerm h_149 = NULL,i_149 = NULL,j_149 = NULL,k_149 = NULL,l_149 = NULL,m_149 = NULL,n_149 = NULL,o_149 = NULL,p_149 = NULL;
  h_149 = t;
  e_149 :
  if(match_cons(h_149, sym__2))
    {
      i_149 = ATgetArgument(h_149, 0);
      m_149 = ATgetArgument(h_149, 1);
      f_149 :
      if(match_cons(i_149, sym__3))
        {
          j_149 = ATgetArgument(i_149, 0);
          k_149 = ATgetArgument(i_149, 1);
          l_149 = ATgetArgument(i_149, 2);
          g_149 :
          if(match_cons(m_149, sym__3))
            {
              n_149 = ATgetArgument(m_149, 0);
              o_149 = ATgetArgument(m_149, 1);
              p_149 = ATgetArgument(m_149, 2);
              {
                ATerm w_149 = NULL,y_149 = NULL,a_150 = NULL;
                ATerm l_30;
                l_30 = t;
                {
                  ATerm x_149 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_149), not_null(n_149));
                  {
                    t = conc_0(t);
                    {
                      x_149 = t;
                      if(((w_149 != NULL) && (w_149 != x_149)))
                        _fail(x_149);
                      else
                        w_149 = x_149;
                    }
                  }
                }
                t = l_30;
                {
                  ATerm m_30;
                  m_30 = t;
                  {
                    ATerm z_149 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_149), not_null(o_149));
                    {
                      t = conc_0(t);
                      {
                        z_149 = t;
                        if(((y_149 != NULL) && (y_149 != z_149)))
                          _fail(z_149);
                        else
                          y_149 = z_149;
                      }
                    }
                  }
                  t = m_30;
                  {
                    ATerm b_150 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_149), not_null(p_149));
                    {
                      t = conc_0(t);
                      {
                        b_150 = t;
                        if(((a_150 != NULL) && (a_150 != b_150)))
                          _fail(b_150);
                        else
                          a_150 = b_150;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(w_149), not_null(y_149), not_null(a_150));
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
ATerm NormBSIG_0 (ATerm t)
{
  ATerm j_150 = NULL,k_150 = NULL;
  j_150 = t;
  i_150 :
  if(match_cons(j_150, sym_Sorts_1))
    {
      k_150 = ATgetArgument(j_150, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(j_150, sym_Constructors_1))
        {
          k_150 = ATgetArgument(j_150, 0);
          t = not_null(k_150);
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
  ATerm v_150 = NULL,w_150 = NULL;
  v_150 = t;
  u_150 :
  if(match_cons(v_150, sym_Overlays_1))
    {
      w_150 = ATgetArgument(v_150, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(w_150), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(v_150, sym_Rules_1))
        {
          w_150 = ATgetArgument(v_150, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(w_150));
        }
      else
        {
          if(match_cons(v_150, sym_Strategies_1))
            {
              w_150 = ATgetArgument(v_150, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(w_150));
            }
          else
            {
              if(match_cons(v_150, sym_Signature_1))
                {
                  w_150 = ATgetArgument(v_150, 0);
                  {
                    ATerm b_151 = NULL;
                    ATerm c_151 = NULL;
                    t = not_null(w_150);
                    {
                      t = normalize_sigs_0(t);
                      {
                        c_151 = t;
                        if(((b_151 != NULL) && (b_151 != c_151)))
                          _fail(c_151);
                        else
                          b_151 = c_151;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(b_151), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm k_151 = NULL,l_151 = NULL;
  k_151 = t;
  j_151 :
  if(match_cons(k_151, sym_Specification_1))
    {
      l_151 = ATgetArgument(k_151, 0);
      t = not_null(l_151);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm h_99 (ATerm))
{
  t = h_99(t);
  {
    ATerm j_6 (ATerm t)
    {
      t = topdown_1(t, h_99);
      return(t);
    }
    t = _all(t, j_6);
  }
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm l_6 (ATerm t)
    {
      ATerm q_151 = NULL,r_151 = NULL;
      q_151 = t;
      p_151 :
      if(match_cons(q_151, sym_DefaultVarDec_1))
        {
          r_151 = ATgetArgument(q_151, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_151), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_15), term_n_15));
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, l_6);
    return(t);
  }
  t = topdown_1(t, k_6);
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
        ATerm m_6 (ATerm t)
        {
          t = term_l_25;
          return(t);
        }
        t = foldr_2(t, m_6, Combine_0);
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
    ATerm n_30;
    n_30 = t;
    t = spec_use_def_0(t);
    t = n_30;
    {
      t = ExpandOverlays_0(t);
      {
        t = CheckConstructors_0(t);
        {
          t = RulesToSdefs_0(t);
          {
            t = DesugarListMatching_0(t);
            {
              t = strename_0(t);
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm p_6 (ATerm t)
                    {
                      t = Strategies_1(t, desugar_spec_0);
                      return(t);
                    }
                    t = Cons_2(t, p_6, Nil_0);
                    return(t);
                  }
                  t = Cons_2(t, _id, o_6);
                  return(t);
                }
                t = Specification_1(t, n_6);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_67 (ATerm), ATerm s_67 (ATerm))
{
  ATerm a_152 = NULL,b_152 = NULL,c_152 = NULL;
  a_152 = t;
  z_151 :
  if(match_cons(a_152, sym__2))
    {
      b_152 = ATgetArgument(a_152, 0);
      c_152 = ATgetArgument(a_152, 1);
      {
        ATerm g_152 = NULL,i_152 = NULL;
        ATerm h_152 = NULL;
        t = SSLgetAnnotations(not_null(a_152));
        {
          h_152 = t;
          if(((g_152 != NULL) && (g_152 != h_152)))
            _fail(h_152);
          else
            g_152 = h_152;
        }
        {
          t = not_null(b_152);
          {
            ATerm k_152 = NULL;
            t = r_67(t);
            {
              i_152 = t;
              {
                t = not_null(c_152);
                {
                  ATerm m_152 = NULL;
                  t = s_67(t);
                  {
                    k_152 = t;
                    {
                      ATerm n_152 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_152), not_null(k_152)), not_null(g_152));
                      {
                        n_152 = t;
                        if(((m_152 != NULL) && (m_152 != n_152)))
                          _fail(n_152);
                        else
                          m_152 = n_152;
                      }
                      t = not_null(m_152);
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
  ATerm v_152 = NULL;
  ATerm o_30;
  o_30 = t;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm w_152 = NULL,x_152 = NULL;
      w_152 = t;
      u_152 :
      if(match_cons(w_152, sym_Program_1))
        {
          x_152 = ATgetArgument(w_152, 0);
          if(((v_152 != NULL) && (v_152 != x_152)))
            _fail(x_152);
          else
            v_152 = x_152;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, q_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_30), not_null(v_152)), term_p_30));
      {
        t = printnl_0(t);
        {
          t = term_x_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_30;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, term_r_30));
  {
    t = printnl_0(t);
    {
      t = term_x_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_153 = NULL;
  a_153 = t;
  t = SSL_TicksToSeconds(not_null(a_153));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_153 = NULL,g_153 = NULL,h_153 = NULL;
  f_153 = t;
  e_153 :
  if(match_cons(f_153, sym__2))
    {
      g_153 = ATgetArgument(f_153, 0);
      h_153 = ATgetArgument(f_153, 1);
      {
        ATerm s_30 = t;
        int t_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_153), not_null(h_153));
            LocalPopChoice(t_30);
          }
        else
          {
            t = s_30;
            t = SSL_addr(not_null(g_153), not_null(h_153));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_90 (ATerm), ATerm y_90 (ATerm))
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_90(t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm o_153 = NULL,p_153 = NULL,q_153 = NULL;
        o_153 = t;
        n_153 :
        if(((ATgetType(o_153) == AT_LIST) && ((ATermList) o_153 != ATempty)))
          {
            p_153 = ATgetFirst((ATermList) o_153);
            q_153 = (ATerm) ATgetNext((ATermList) o_153);
            {
              ATerm t_153 = NULL;
              ATerm u_153 = NULL;
              t = not_null(q_153);
              {
                t = foldr_2(t, x_90, y_90);
                {
                  u_153 = t;
                  if(((t_153 != NULL) && (t_153 != u_153)))
                    _fail(u_153);
                  else
                    t_153 = u_153;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_153), not_null(t_153));
                t = y_90(t);
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
ATerm crush_2 (ATerm t, ATerm l_92 (ATerm), ATerm m_92 (ATerm))
{
  ATerm b_154 = NULL;
  ATerm d_154 = NULL;
  b_154 = t;
  {
    ATerm e_154 = NULL;
    ATerm g_154 = NULL,h_154 = NULL,i_154 = NULL;
    t = not_null(b_154);
    {
      e_154 = t;
      {
        t = SSL_explode_term(not_null(e_154));
        {
          g_154 = t;
          a_154 :
          if(match_cons(g_154, sym__2))
            {
              h_154 = ATgetArgument(g_154, 0);
              i_154 = ATgetArgument(g_154, 1);
              if(((d_154 != NULL) && (d_154 != i_154)))
                _fail(i_154);
              else
                d_154 = i_154;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(d_154);
      t = foldr_2(t, l_92, m_92);
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
    ATerm r_6 (ATerm t)
    {
      t = term_t_21;
      return(t);
    }
    t = crush_2(t, r_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_154 = NULL,t_154 = NULL;
  ATerm s_6 (ATerm t)
  {
    ATerm z_154 = NULL;
    ATerm t_6 (ATerm t)
    {
      ATerm w_30 = t;
      if((PushChoice() == 0))
        {
          ATerm u_6 (ATerm t)
          {
            ATerm u_154 = NULL;
            u_154 = t;
            m_154 :
            if(!(match_cons(u_154, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_6);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_30;
        }
      return(t);
    }
    t = _2(t, t_6, _id);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm w_6 (ATerm t)
        {
          ATerm v_154 = NULL,w_154 = NULL;
          v_154 = t;
          o_154 :
          if(match_cons(v_154, sym_Runtime_1))
            {
              w_154 = ATgetArgument(v_154, 0);
              if(((s_154 != NULL) && (s_154 != w_154)))
                _fail(w_154);
              else
                s_154 = w_154;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_6);
        return(t);
      }
      t = _2(t, v_6, _id);
      {
        ATerm x_6 (ATerm t)
        {
          ATerm y_6 (ATerm t)
          {
            ATerm x_154 = NULL,y_154 = NULL;
            x_154 = t;
            q_154 :
            if(match_cons(x_154, sym_Program_1))
              {
                y_154 = ATgetArgument(x_154, 0);
                if(((t_154 != NULL) && (t_154 != y_154)))
                  _fail(y_154);
                else
                  t_154 = y_154;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, y_6);
          return(t);
        }
        t = _2(t, x_6, _id);
        {
          ATerm a_155 = NULL;
          t = run_time_0(t);
          {
            a_155 = t;
            if(((z_154 != NULL) && (z_154 != a_155)))
              _fail(a_155);
            else
              z_154 = a_155;
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_30), not_null(z_154)), term_x_30), not_null(t_154)));
            t = printnl_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, s_6);
  {
    t = term_t_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_155 = NULL,i_155 = NULL,j_155 = NULL;
  h_155 = t;
  g_155 :
  if(match_cons(h_155, sym__2))
    {
      i_155 = ATgetArgument(h_155, 0);
      j_155 = ATgetArgument(h_155, 1);
      t = SSL_WriteToTextFile(not_null(i_155), not_null(j_155));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_155 = NULL,q_155 = NULL,r_155 = NULL;
  p_155 = t;
  o_155 :
  if(match_cons(p_155, sym__2))
    {
      q_155 = ATgetArgument(p_155, 0);
      r_155 = ATgetArgument(p_155, 1);
      t = SSL_WriteToBinaryFile(not_null(q_155), not_null(r_155));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm z_155 = NULL;
  ATerm z_30;
  z_30 = t;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm a_31 = t;
      int b_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_7 (ATerm t)
          {
            ATerm a_156 = NULL,b_156 = NULL;
            a_156 = t;
            w_155 :
            if(match_cons(a_156, sym_Output_1))
              {
                b_156 = ATgetArgument(a_156, 0);
                if(((z_155 != NULL) && (z_155 != b_156)))
                  _fail(b_156);
                else
                  z_155 = b_156;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, a_7);
          LocalPopChoice(b_31);
        }
      else
        {
          t = a_31;
          {
            ATerm c_156 = NULL;
            t = term_c_31;
            {
              c_156 = t;
              if(((z_155 != NULL) && (z_155 != c_156)))
                _fail(c_156);
              else
                z_155 = c_156;
            }
          }
        }
      return(t);
    }
    t = _2(t, z_6, _id);
  }
  t = z_30;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm c_7 (ATerm t)
      {
        t = not_null(z_155);
        return(t);
      }
      t = split_2(t, c_7, _id);
      return(t);
    }
    t = _2(t, _id, b_7);
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_7 (ATerm t)
          {
            ATerm e_7 (ATerm t)
            {
              ATerm d_156 = NULL;
              d_156 = t;
              y_155 :
              if(!(match_cons(d_156, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, e_7);
            return(t);
          }
          t = _2(t, d_7, WriteToBinaryFile_0);
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm j_156 = NULL,l_156 = NULL,m_156 = NULL,n_156 = NULL;
  ATerm f_31;
  f_31 = t;
  t = dtime_0(t);
  t = f_31;
  {
    t = m_86(t);
    {
      ATerm g_31;
      g_31 = t;
      {
        ATerm k_156 = NULL;
        t = dtime_0(t);
        {
          k_156 = t;
          if(((j_156 != NULL) && (j_156 != k_156)))
            _fail(k_156);
          else
            j_156 = k_156;
        }
      }
      t = g_31;
      {
        l_156 = t;
        i_156 :
        if(match_cons(l_156, sym__2))
          {
            m_156 = ATgetArgument(l_156, 0);
            n_156 = ATgetArgument(l_156, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_156)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(j_156))), not_null(n_156));
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
  ATerm u_156 = NULL;
  u_156 = t;
  t = SSL_ReadFromFile(not_null(u_156));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_89 (ATerm), ATerm m_89 (ATerm))
{
  ATerm z_156 = NULL,b_157 = NULL;
  ATerm h_31;
  h_31 = t;
  {
    ATerm a_157 = NULL;
    t = l_89(t);
    {
      a_157 = t;
      if(((z_156 != NULL) && (z_156 != a_157)))
        _fail(a_157);
      else
        z_156 = a_157;
    }
  }
  t = h_31;
  {
    ATerm c_157 = NULL;
    t = m_89(t);
    {
      c_157 = t;
      if(((b_157 != NULL) && (b_157 != c_157)))
        _fail(c_157);
      else
        b_157 = c_157;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_156), not_null(b_157));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_157 = NULL;
  ATerm i_31;
  i_31 = t;
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_7 (ATerm t)
        {
          ATerm j_157 = NULL,k_157 = NULL;
          j_157 = t;
          g_157 :
          if(match_cons(j_157, sym_Input_1))
            {
              k_157 = ATgetArgument(j_157, 0);
              if(((i_157 != NULL) && (i_157 != k_157)))
                _fail(k_157);
              else
                i_157 = k_157;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, f_7);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm l_157 = NULL;
          t = term_l_31;
          {
            l_157 = t;
            if(((i_157 != NULL) && (i_157 != l_157)))
              _fail(l_157);
            else
              i_157 = l_157;
          }
        }
      }
  }
  t = i_31;
  {
    ATerm g_7 (ATerm t)
    {
      t = not_null(i_157);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, g_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_157 = NULL;
  s_157 = t;
  r_157 :
  if(match_cons(s_157, sym_Version_0))
    {
      ATerm u_157 = NULL,w_157 = NULL;
      ATerm m_31;
      m_31 = t;
      {
        ATerm v_157 = NULL;
        t = SSLgetAnnotations(not_null(s_157));
        {
          v_157 = t;
          if(((u_157 != NULL) && (u_157 != v_157)))
            _fail(v_157);
          else
            u_157 = v_157;
        }
      }
      t = m_31;
      {
        ATerm x_157 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_157));
        {
          x_157 = t;
          if(((w_157 != NULL) && (w_157 != x_157)))
            _fail(x_157);
          else
            w_157 = x_157;
        }
        t = not_null(w_157);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm h_7 (ATerm t)
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        {
          ATerm p_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_31);
            }
          else
            {
              t = p_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, h_7);
  t = k_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_158 = NULL;
  c_158 = t;
  t = SSL_table_create(not_null(c_158));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_158 = NULL;
  g_158 = t;
  {
    ATerm r_31;
    r_31 = t;
    {
      t = term_s_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_31, term_t_31, not_null(g_158));
          t = table_put_0(t);
        }
      }
    }
    t = r_31;
  }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm l_158 = NULL,m_158 = NULL,n_158 = NULL;
  l_158 = t;
  k_158 :
  if(match_cons(l_158, sym__2))
    {
      m_158 = ATgetArgument(l_158, 0);
      n_158 = ATgetArgument(l_158, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_31, not_null(m_158), not_null(n_158));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm w_158 = NULL,y_158 = NULL,z_158 = NULL,a_159 = NULL,b_159 = NULL;
  w_158 = t;
  u_158 :
  if(match_string(w_158, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(w_158) == AT_LIST) && ((ATermList) w_158 != ATempty)))
        {
          y_158 = ATgetFirst((ATermList) w_158);
          z_158 = (ATerm) ATgetNext((ATermList) w_158);
          v_158 :
          if(((ATgetType(z_158) == AT_LIST) && ((ATermList) z_158 != ATempty)))
            {
              a_159 = ATgetFirst((ATermList) z_158);
              b_159 = (ATerm) ATgetNext((ATermList) z_158);
              {
                ATerm f_159 = NULL;
                ATerm x_31;
                x_31 = t;
                {
                  t = not_null(y_158);
                  t = n_0(t);
                }
                t = x_31;
                {
                  ATerm g_159 = NULL;
                  t = not_null(a_159);
                  {
                    t = o_0(t);
                    {
                      g_159 = t;
                      if(((f_159 != NULL) && (f_159 != g_159)))
                        _fail(g_159);
                      else
                        f_159 = g_159;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_159)), not_null(f_159));
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
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_7 (ATerm t)
      {
        ATerm y_159 = NULL;
        y_159 = t;
        k_159 :
        if(!(match_string(y_159, "-S")))
          {
            if(!(match_string(y_159, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        t = term_h_32;
        t = set_config_0(t);
        t = term_i_32;
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        t = term_j_32;
        return(t);
      }
      t = Option_3(t, i_7, j_7, k_7);
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      {
        ATerm l_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_7 (ATerm t)
            {
              ATerm z_159 = NULL;
              z_159 = t;
              l_159 :
              if(!(match_string(z_159, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_7 (ATerm t)
            {
              t = term_o_32;
              t = set_config_0(t);
              t = term_p_32;
              return(t);
            }
            ATerm n_7 (ATerm t)
            {
              t = term_q_32;
              return(t);
            }
            t = Option_3(t, l_7, m_7, n_7);
            LocalPopChoice(m_32);
          }
        else
          {
            t = l_32;
            {
              ATerm r_32 = t;
              int s_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_7 (ATerm t)
                  {
                    ATerm a_160 = NULL;
                    a_160 = t;
                    m_159 :
                    if(!(match_string(a_160, "-v")))
                      {
                        if(!(match_string(a_160, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm p_7 (ATerm t)
                  {
                    t = term_u_32;
                    t = set_config_0(t);
                    t = term_v_32;
                    return(t);
                  }
                  ATerm q_7 (ATerm t)
                  {
                    t = term_w_32;
                    return(t);
                  }
                  t = Option_3(t, o_7, p_7, q_7);
                  LocalPopChoice(s_32);
                }
              else
                {
                  t = r_32;
                  {
                    ATerm x_32 = t;
                    int y_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_7 (ATerm t)
                        {
                          ATerm b_160 = NULL;
                          b_160 = t;
                          n_159 :
                          if(!(match_string(b_160, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm s_7 (ATerm t)
                        {
                          ATerm e_160 = NULL;
                          ATerm z_32;
                          z_32 = t;
                          {
                            ATerm c_160 = NULL;
                            ATerm d_160 = NULL;
                            d_160 = t;
                            if(((c_160 != NULL) && (c_160 != d_160)))
                              _fail(d_160);
                            else
                              c_160 = d_160;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_a_33, not_null(c_160));
                              t = set_config_0(t);
                            }
                          }
                          t = z_32;
                          {
                            ATerm f_160 = NULL;
                            f_160 = t;
                            if(((e_160 != NULL) && (e_160 != f_160)))
                              _fail(f_160);
                            else
                              e_160 = f_160;
                            t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(e_160));
                          }
                          return(t);
                        }
                        ATerm t_7 (ATerm t)
                        {
                          t = term_b_33;
                          return(t);
                        }
                        t = ArgOption_3(t, r_7, s_7, t_7);
                        LocalPopChoice(y_32);
                      }
                    else
                      {
                        t = x_32;
                        {
                          ATerm c_33 = t;
                          int d_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_7 (ATerm t)
                              {
                                ATerm g_160 = NULL;
                                g_160 = t;
                                q_159 :
                                if(!(match_string(g_160, "-i")))
                                  {
                                    if(!(match_string(g_160, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm v_7 (ATerm t)
                              {
                                ATerm j_160 = NULL;
                                ATerm e_33;
                                e_33 = t;
                                {
                                  ATerm h_160 = NULL;
                                  ATerm i_160 = NULL;
                                  i_160 = t;
                                  if(((h_160 != NULL) && (h_160 != i_160)))
                                    _fail(i_160);
                                  else
                                    h_160 = i_160;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_33, not_null(h_160));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_33;
                                {
                                  ATerm k_160 = NULL;
                                  k_160 = t;
                                  if(((j_160 != NULL) && (j_160 != k_160)))
                                    _fail(k_160);
                                  else
                                    j_160 = k_160;
                                  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_160));
                                }
                                return(t);
                              }
                              ATerm w_7 (ATerm t)
                              {
                                t = term_g_33;
                                return(t);
                              }
                              t = ArgOption_3(t, u_7, v_7, w_7);
                              LocalPopChoice(d_33);
                            }
                          else
                            {
                              t = c_33;
                              {
                                ATerm h_33 = t;
                                int i_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_7 (ATerm t)
                                    {
                                      ATerm l_160 = NULL;
                                      l_160 = t;
                                      t_159 :
                                      if(!(match_string(l_160, "-o")))
                                        {
                                          if(!(match_string(l_160, "--output")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm y_7 (ATerm t)
                                    {
                                      ATerm o_160 = NULL;
                                      ATerm j_33;
                                      j_33 = t;
                                      {
                                        ATerm m_160 = NULL;
                                        ATerm n_160 = NULL;
                                        n_160 = t;
                                        if(((m_160 != NULL) && (m_160 != n_160)))
                                          _fail(n_160);
                                        else
                                          m_160 = n_160;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_k_33, not_null(m_160));
                                          t = set_config_0(t);
                                        }
                                      }
                                      t = j_33;
                                      {
                                        ATerm p_160 = NULL;
                                        p_160 = t;
                                        if(((o_160 != NULL) && (o_160 != p_160)))
                                          _fail(p_160);
                                        else
                                          o_160 = p_160;
                                        t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_160));
                                      }
                                      return(t);
                                    }
                                    ATerm z_7 (ATerm t)
                                    {
                                      t = term_l_33;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, x_7, y_7, z_7);
                                    LocalPopChoice(i_33);
                                  }
                                else
                                  {
                                    t = h_33;
                                    {
                                      ATerm m_33 = t;
                                      int n_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_8 (ATerm t)
                                          {
                                            ATerm q_160 = NULL;
                                            q_160 = t;
                                            w_159 :
                                            if(!(match_string(q_160, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm b_8 (ATerm t)
                                          {
                                            t = term_p_33;
                                            t = set_config_0(t);
                                            t = term_q_33;
                                            return(t);
                                          }
                                          ATerm c_8 (ATerm t)
                                          {
                                            t = term_r_33;
                                            return(t);
                                          }
                                          t = Option_3(t, a_8, b_8, c_8);
                                          LocalPopChoice(n_33);
                                        }
                                      else
                                        {
                                          t = m_33;
                                          {
                                            ATerm d_8 (ATerm t)
                                            {
                                              ATerm r_160 = NULL;
                                              r_160 = t;
                                              x_159 :
                                              if(!(match_string(r_160, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm e_8 (ATerm t)
                                            {
                                              t = term_t_33;
                                              t = set_config_0(t);
                                              t = term_u_33;
                                              return(t);
                                            }
                                            ATerm f_8 (ATerm t)
                                            {
                                              t = term_v_33;
                                              return(t);
                                            }
                                            t = Option_3(t, d_8, e_8, f_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm z_160 = NULL;
  z_160 = t;
  t = SSL_table_destroy(not_null(z_160));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm d_161 = NULL;
  d_161 = t;
  t = SSL_exit(not_null(d_161));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_161 = NULL;
  i_161 = t;
  t = SSL_implode_string(not_null(i_161));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_96 (ATerm))
{
  ATerm l_161 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_161);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        {
          t = Nil_0(t);
          t = t_96(t);
        }
      }
    return(t);
  }
  t = l_161(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm o_161 = NULL,p_161 = NULL,q_161 = NULL;
        o_161 = t;
        n_161 :
        if(((ATgetType(o_161) == AT_LIST) && ((ATermList) o_161 != ATempty)))
          {
            p_161 = ATgetFirst((ATermList) o_161);
            q_161 = (ATerm) ATgetNext((ATermList) o_161);
            {
              t = not_null(p_161);
              {
                ATerm g_8 (ATerm t)
                {
                  t = not_null(q_161);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_8);
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
  ATerm w_161 = NULL;
  w_161 = t;
  t = SSL_explode_string(not_null(w_161));
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
ATerm long_description_1 (ATerm t, ATerm d_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_96 (ATerm))
{
  ATerm z_161 (ATerm t)
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = Cons_2(t, f_96, z_161);
      }
    return(t);
  }
  t = z_161(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm h_162 = NULL,i_162 = NULL,j_162 = NULL;
  j_162 = t;
  g_162 :
  if(((ATgetType(j_162) == AT_LIST) && ((ATermList) j_162 != ATempty)))
    {
      h_162 = ATgetFirst((ATermList) j_162);
      i_162 = (ATerm) ATgetNext((ATermList) j_162);
      {
        ATerm m_162 = NULL;
        t = not_null(i_162);
        {
          ATerm c_34;
          c_34 = t;
          {
            ATerm n_162 = NULL,p_162 = NULL,r_162 = NULL;
            ATerm d_34;
            d_34 = t;
            {
              ATerm o_162 = NULL;
              t = m_0(t);
              {
                o_162 = t;
                if(((n_162 != NULL) && (n_162 != o_162)))
                  _fail(o_162);
                else
                  n_162 = o_162;
              }
            }
            t = d_34;
            {
              ATerm q_162 = NULL;
              t = not_null(h_162);
              {
                t = l_0(t);
                {
                  q_162 = t;
                  if(((p_162 != NULL) && (p_162 != q_162)))
                    _fail(q_162);
                  else
                    p_162 = q_162;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_162)), not_null(p_162));
                {
                  r_162 = t;
                  if(((m_162 != NULL) && (m_162 != r_162)))
                    _fail(r_162);
                  else
                    m_162 = r_162;
                }
              }
            }
          }
          t = c_34;
          {
            ATerm h_8 (ATerm t)
            {
              t = not_null(m_162);
              return(t);
            }
            t = reverse_acc_2(t, l_0, h_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_162 == ATempty))
        {
          {
            t = term_g_19;
            t = m_0(t);
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
  ATerm i_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm c_163 = NULL,d_163 = NULL;
  c_163 = t;
  b_163 :
  if(match_cons(c_163, sym_Program_1))
    {
      d_163 = ATgetArgument(c_163, 0);
      {
        ATerm g_163 = NULL,i_163 = NULL;
        ATerm h_163 = NULL;
        t = SSLgetAnnotations(not_null(c_163));
        {
          h_163 = t;
          if(((g_163 != NULL) && (g_163 != h_163)))
            _fail(h_163);
          else
            g_163 = h_163;
        }
        {
          t = not_null(d_163);
          {
            ATerm k_163 = NULL;
            t = a_69(t);
            {
              i_163 = t;
              {
                ATerm l_163 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_163)), not_null(g_163));
                {
                  l_163 = t;
                  if(((k_163 != NULL) && (k_163 != l_163)))
                    _fail(l_163);
                  else
                    k_163 = l_163;
                }
                t = not_null(k_163);
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
  ATerm u_163 = NULL;
  ATerm j_8 (ATerm t)
  {
    ATerm k_8 (ATerm t)
    {
      ATerm v_163 = NULL;
      v_163 = t;
      if(((u_163 != NULL) && (u_163 != v_163)))
        _fail(v_163);
      else
        u_163 = v_163;
      return(t);
    }
    t = Program_1(t, k_8);
    return(t);
  }
  t = option_defined_1(t, j_8);
  {
    ATerm l_8 (ATerm t)
    {
      ATerm w_163 = NULL;
      ATerm x_163 = NULL;
      t = term_g_19;
      {
        ATerm m_8 (ATerm t)
        {
          t = not_null(u_163);
          return(t);
        }
        t = short_description_1(t, m_8);
        {
          t = concat_strings_0(t);
          {
            x_163 = t;
            if(((w_163 != NULL) && (w_163 != x_163)))
              _fail(x_163);
            else
              w_163 = x_163;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, not_null(w_163)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, term_e_34));
      {
        t = printnl_0(t);
        {
          t = term_h_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_8 (ATerm t)
                {
                  ATerm y_163 = NULL;
                  y_163 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_163)), term_i_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_8);
                {
                  ATerm o_8 (ATerm t)
                  {
                    ATerm b_164 = NULL;
                    ATerm c_164 = NULL;
                    t = term_g_19;
                    {
                      ATerm p_8 (ATerm t)
                      {
                        t = not_null(u_163);
                        return(t);
                      }
                      t = long_description_1(t, p_8);
                      {
                        t = concat_strings_0(t);
                        {
                          c_164 = t;
                          if(((b_164 != NULL) && (b_164 != c_164)))
                            _fail(c_164);
                          else
                            b_164 = c_164;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_164)), term_j_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_8);
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
ATerm Undefined_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm m_164 = NULL,n_164 = NULL;
  m_164 = t;
  l_164 :
  if(match_cons(m_164, sym_Undefined_1))
    {
      n_164 = ATgetArgument(m_164, 0);
      {
        ATerm q_164 = NULL,t_164 = NULL;
        ATerm r_164 = NULL;
        t = SSLgetAnnotations(not_null(m_164));
        {
          r_164 = t;
          if(((q_164 != NULL) && (q_164 != r_164)))
            _fail(r_164);
          else
            q_164 = r_164;
        }
        {
          t = not_null(n_164);
          {
            ATerm v_164 = NULL;
            t = b_69(t);
            {
              t_164 = t;
              {
                ATerm w_164 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_164)), not_null(q_164));
                {
                  w_164 = t;
                  if(((v_164 != NULL) && (v_164 != w_164)))
                    _fail(w_164);
                  else
                    v_164 = w_164;
                }
                t = not_null(v_164);
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
ATerm fetch_1 (ATerm t, ATerm n_96 (ATerm))
{
  ATerm b_165 (ATerm t)
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_96, _id);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = Cons_2(t, _id, b_165);
      }
    return(t);
  }
  t = b_165(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_85 (ATerm))
{
  t = fetch_1(t, b_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_165 = NULL;
  g_165 = t;
  f_165 :
  if(match_cons(g_165, sym_Help_0))
    {
      ATerm i_165 = NULL,k_165 = NULL;
      ATerm m_34;
      m_34 = t;
      {
        ATerm j_165 = NULL;
        t = SSLgetAnnotations(not_null(g_165));
        {
          j_165 = t;
          if(((i_165 != NULL) && (i_165 != j_165)))
            _fail(j_165);
          else
            i_165 = j_165;
        }
      }
      t = m_34;
      {
        ATerm l_165 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_165));
        {
          l_165 = t;
          if(((k_165 != NULL) && (k_165 != l_165)))
            _fail(l_165);
          else
            k_165 = l_165;
        }
        t = not_null(k_165);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_103 (ATerm))
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_103(t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_165 = NULL,s_165 = NULL,t_165 = NULL;
  r_165 = t;
  q_165 :
  if(match_cons(r_165, sym__2))
    {
      s_165 = ATgetArgument(r_165, 0);
      t_165 = ATgetArgument(r_165, 1);
      t = SSL_table_get(not_null(s_165), not_null(t_165));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_166 = NULL,b_166 = NULL,c_166 = NULL,d_166 = NULL;
  a_166 = t;
  z_165 :
  if(match_cons(a_166, sym__3))
    {
      b_166 = ATgetArgument(a_166, 0);
      c_166 = ATgetArgument(a_166, 1);
      d_166 = ATgetArgument(a_166, 2);
      {
        ATerm p_34;
        p_34 = t;
        {
          ATerm h_166 = NULL;
          ATerm i_166 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_166), not_null(c_166));
          {
            ATerm q_34 = t;
            int r_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_34);
              }
            else
              {
                t = q_34;
                t = (ATerm) ATempty;
              }
            {
              i_166 = t;
              if(((h_166 != NULL) && (h_166 != i_166)))
                _fail(i_166);
              else
                h_166 = i_166;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_166), not_null(c_166), (ATerm) ATinsert(CheckATermList(not_null(h_166)), not_null(d_166)));
            t = table_put_0(t);
          }
        }
        t = p_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm m_166 = NULL;
  ATerm n_166 = NULL;
  t = term_g_19;
  {
    t = h_84(t);
    {
      n_166 = t;
      if(((m_166 != NULL) && (m_166 != n_166)))
        _fail(n_166);
      else
        m_166 = n_166;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_34, term_g_34, not_null(m_166));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm t_166 = NULL,u_166 = NULL,v_166 = NULL;
  t_166 = t;
  s_166 :
  if(match_string(t_166, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(t_166) == AT_LIST) && ((ATermList) t_166 != ATempty)))
        {
          u_166 = ATgetFirst((ATermList) t_166);
          v_166 = (ATerm) ATgetNext((ATermList) t_166);
          {
            ATerm y_166 = NULL;
            ATerm s_34;
            s_34 = t;
            {
              t = not_null(u_166);
              t = a_0(t);
            }
            t = s_34;
            {
              ATerm z_166 = NULL;
              t = term_g_19;
              {
                t = b_0(t);
                {
                  z_166 = t;
                  if(((y_166 != NULL) && (y_166 != z_166)))
                    _fail(z_166);
                  else
                    y_166 = z_166;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_166)), not_null(y_166));
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
  ATerm q_8 (ATerm t)
  {
    ATerm f_167 = NULL;
    f_167 = t;
    e_167 :
    if(!(match_string(f_167, "--help")))
      {
        if(!(match_string(f_167, "-h")))
          {
            if(!(match_string(f_167, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = term_t_34;
    return(t);
  }
  ATerm s_8 (ATerm t)
  {
    t = term_u_34;
    return(t);
  }
  t = Option_3(t, q_8, r_8, s_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm i_167 = NULL,j_167 = NULL,k_167 = NULL;
  i_167 = t;
  h_167 :
  if(((ATgetType(i_167) == AT_LIST) && ((ATermList) i_167 != ATempty)))
    {
      j_167 = ATgetFirst((ATermList) i_167);
      k_167 = (ATerm) ATgetNext((ATermList) i_167);
      t = (ATerm) ATinsert(CheckATermList(not_null(k_167)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(j_167)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
{
  ATerm v_167 = NULL,w_167 = NULL,x_167 = NULL;
  v_167 = t;
  u_167 :
  if(((ATgetType(v_167) == AT_LIST) && ((ATermList) v_167 != ATempty)))
    {
      w_167 = ATgetFirst((ATermList) v_167);
      x_167 = (ATerm) ATgetNext((ATermList) v_167);
      {
        ATerm b_168 = NULL,d_168 = NULL;
        ATerm c_168 = NULL;
        t = SSLgetAnnotations(not_null(v_167));
        {
          c_168 = t;
          if(((b_168 != NULL) && (b_168 != c_168)))
            _fail(c_168);
          else
            b_168 = c_168;
        }
        {
          t = not_null(w_167);
          {
            ATerm g_168 = NULL;
            t = q_78(t);
            {
              d_168 = t;
              {
                t = not_null(x_167);
                {
                  ATerm i_168 = NULL;
                  t = r_78(t);
                  {
                    g_168 = t;
                    {
                      ATerm j_168 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_168)), not_null(d_168)), not_null(b_168));
                      {
                        j_168 = t;
                        if(((i_168 != NULL) && (i_168 != j_168)))
                          _fail(j_168);
                        else
                          i_168 = j_168;
                      }
                      t = not_null(i_168);
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
  ATerm t_168 = NULL;
  t_168 = t;
  s_168 :
  if(((ATermList) t_168 == ATempty))
    {
      {
        ATerm w_168 = NULL,y_168 = NULL;
        ATerm v_34;
        v_34 = t;
        {
          ATerm x_168 = NULL;
          t = SSLgetAnnotations(not_null(t_168));
          {
            x_168 = t;
            if(((w_168 != NULL) && (w_168 != x_168)))
              _fail(x_168);
            else
              w_168 = x_168;
          }
        }
        t = v_34;
        {
          ATerm z_168 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_168));
          {
            z_168 = t;
            if(((y_168 != NULL) && (y_168 != z_168)))
              _fail(z_168);
            else
              y_168 = z_168;
          }
          t = not_null(y_168);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_84 (ATerm))
{
  ATerm w_34;
  w_34 = t;
  {
    ATerm t_8 (ATerm t)
    {
      t = term_x_34;
      t = f_84(t);
      return(t);
    }
    t = try_1(t, t_8);
  }
  t = w_34;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm e_169 = NULL;
      e_169 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_169));
      return(t);
    }
    ATerm v_8 (ATerm t)
    {
      ATerm y_34 = t;
      int z_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_35 = t;
          int b_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_35);
            }
          else
            {
              t = a_35;
              {
                t = f_84(t);
                t = Cons_2(t, _id, v_8);
              }
            }
          LocalPopChoice(z_34);
        }
      else
        {
          t = y_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_8, v_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL;
  ATerm c_35;
  c_35 = t;
  {
    ATerm o_169 = NULL,p_169 = NULL,q_169 = NULL,r_169 = NULL;
    o_169 = t;
    k_169 :
    if(match_cons(o_169, sym__3))
      {
        p_169 = ATgetArgument(o_169, 0);
        q_169 = ATgetArgument(o_169, 1);
        r_169 = ATgetArgument(o_169, 2);
        {
          if(((l_169 != NULL) && (l_169 != p_169)))
            _fail(p_169);
          else
            l_169 = p_169;
          {
            if(((m_169 != NULL) && (m_169 != q_169)))
              _fail(q_169);
            else
              m_169 = q_169;
            {
              if(((n_169 != NULL) && (n_169 != r_169)))
                _fail(r_169);
              else
                n_169 = r_169;
              t = SSL_table_put(not_null(l_169), not_null(m_169), not_null(n_169));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm v_169 = NULL;
  ATerm d_35;
  d_35 = t;
  {
    t = term_e_35;
    t = table_put_0(t);
  }
  t = d_35;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_84(t);
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_8);
    {
      ATerm x_8 (ATerm t)
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_t_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            {
              ATerm y_8 (ATerm t)
              {
                ATerm z_8 (ATerm t)
                {
                  ATerm w_169 = NULL;
                  w_169 = t;
                  if(((v_169 != NULL) && (v_169 != w_169)))
                    _fail(w_169);
                  else
                    v_169 = w_169;
                  return(t);
                }
                t = Undefined_1(t, z_8);
                return(t);
              }
              t = option_defined_1(t, y_8);
              {
                ATerm j_35;
                j_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_169)), term_m_35));
                  t = printnl_0(t);
                }
                t = j_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_x_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, x_8);
      {
        ATerm n_35;
        n_35 = t;
        {
          t = term_f_34;
          t = table_destroy_0(t);
        }
        t = n_35;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm b_86 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_86(t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, a_9);
  {
    t = store_options_0(t);
    {
      ATerm q_35 = t;
      int r_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, b_86);
          LocalPopChoice(r_35);
        }
      else
        {
          t = q_35;
          {
            ATerm s_35 = t;
            int t_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, z_85);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(t_35);
              }
            else
              {
                t = s_35;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_85 (ATerm), ATerm v_85 (ATerm))
{
  t = iowrap_3(t, u_85, v_85, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm b_9 (ATerm t)
  {
    t = _2(t, _id, r_85);
    return(t);
  }
  t = iowrap_2(t, b_9, _fail);
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_170 = NULL,b_170 = NULL,c_170 = NULL;
  a_170 = t;
  z_169 :
  if(match_cons(a_170, sym__2))
    {
      b_170 = ATgetArgument(a_170, 0);
      c_170 = ATgetArgument(a_170, 1);
      {
        ATerm u_35;
        u_35 = t;
        t = SSL_printnl(not_null(b_170), not_null(c_170));
        t = u_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm v_35;
  v_35 = t;
  {
    ATerm h_170 = NULL;
    ATerm i_170 = NULL;
    i_170 = t;
    if(((h_170 != NULL) && (h_170 != i_170)))
      _fail(i_170);
    else
      h_170 = i_170;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, not_null(h_170)));
      t = printnl_0(t);
    }
  }
  t = v_35;
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = debug_0(t);
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = frontend_0(t);
  return(t);
}
