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
ATerm term_u_35;
ATerm term_o_35;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_j_32;
ATerm term_s_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_b_27;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_q_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_d_20;
ATerm term_t_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
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
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_o_11;
ATerm term_o_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
void init_constant_terms (void)
{
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Op_2, term_j_15, (ATerm) ATempty);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_k_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Var_1, term_r_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Var_1, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Anno_2, term_s_15, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Var_1, term_y_15);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Var_1, term_m_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Anno_2, term_c_16, term_u_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_15);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATempty);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_g_17, term_s_15, term_c_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_15);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Call_2, term_i_17, (ATerm) ATempty);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_j_17, term_v_15, term_u_16);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Var_1, term_n_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_18);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, term_w_21);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_15);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Op_2, term_i_27, (ATerm) ATempty);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATempty);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_28);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_28);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_h_21);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_21);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_z_18);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_z_18);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_z_18);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, (ATerm) ATempty);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm n_78 (ATerm), ATerm o_78 (ATerm));
ATerm Explode_2 (ATerm, ATerm s_74 (ATerm), ATerm t_74 (ATerm));
ATerm pat_td_1 (ATerm, ATerm b_79 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm v_95 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm x_75 (ATerm));
ATerm Specification_1 (ATerm, ATerm z_75 (ATerm));
ATerm spaste_1 (ATerm, ATerm n_79 (ATerm));
ATerm Rec_2 (ATerm, ATerm g_77 (ATerm), ATerm h_77 (ATerm));
ATerm Let_2 (ATerm, ATerm i_77 (ATerm), ATerm j_77 (ATerm));
ATerm sboundin_3 (ATerm, ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm q_79 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm f_77 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm h_82 (ATerm, ATerm (ATerm)), ATerm i_82 (ATerm), ATerm j_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_82 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm Con_3 (ATerm, ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm q_101 (ATerm));
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
ATerm copy_0 (ATerm);
ATerm CheckTuple_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm r_88 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm y_102 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_88 (ATerm));
ATerm restore_always_2 (ATerm, ATerm r_104 (ATerm), ATerm s_104 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm l_88 (ATerm));
ATerm scope_2 (ATerm, ATerm n_88 (ATerm), ATerm o_88 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm d_79 (ATerm), ATerm e_79 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm p_88 (ATerm));
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm m_80 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm n_76 (ATerm), ATerm o_76 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm j_79 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm z_81 (ATerm), ATerm a_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm f_82 (ATerm), ATerm g_82 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm t_81 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm t_98 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm y_98 (ATerm));
ATerm substitute_6 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm, ATerm (ATerm)), ATerm t_82 (ATerm), ATerm u_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_82 (ATerm, ATerm (ATerm)), ATerm w_82 (ATerm));
ATerm substitute_5 (ATerm, ATerm y_82 (ATerm), ATerm z_82 (ATerm, ATerm (ATerm)), ATerm a_83 (ATerm), ATerm b_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_83 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm k_80 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm l_80 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm));
ATerm Overlay_3 (ATerm, ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm i_95 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm g_79 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm y_77 (ATerm), ATerm z_77 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm));
ATerm BAM_3 (ATerm, ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm i_74 (ATerm));
ATerm BA_2 (ATerm, ATerm e_74 (ATerm), ATerm f_74 (ATerm));
ATerm AM_2 (ATerm, ATerm c_74 (ATerm), ATerm d_74 (ATerm));
ATerm MA_2 (ATerm, ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm Match_1 (ATerm, ATerm g_78 (ATerm));
ATerm Build_1 (ATerm, ATerm h_78 (ATerm));
ATerm constructs_1 (ATerm, ATerm f_79 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm v_75 (ATerm));
ATerm Signature_1 (ATerm, ATerm u_75 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm u_104 (ATerm));
ATerm one_dist_1 (ATerm, ATerm u_98 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm j_99 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm h_103 (ATerm), ATerm i_103 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_103 (ATerm));
ATerm listtd_1 (ATerm, ATerm c_98 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm n_75 (ATerm));
ATerm Scope_2 (ATerm, ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm tboundin_3 (ATerm, ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm));
ATerm crush_3 (ATerm, ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_103 (ATerm), ATerm z_103 (ATerm));
ATerm for_3 (ATerm, ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm));
ATerm HdMember_1 (ATerm, ATerm v_92 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm b_100 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm alltd_1 (ATerm, ATerm e_102 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm));
ATerm zip_1 (ATerm, ATerm q_95 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm));
ATerm substitute_1 (ATerm, ATerm q_82 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm w_90 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm a_100 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm p_67 (ATerm), ATerm q_67 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_85 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_91 (ATerm), ATerm r_91 (ATerm));
ATerm crush_2 (ATerm, ATerm e_93 (ATerm), ATerm f_93 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_85 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_87 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_90 (ATerm), ATerm f_90 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_97 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_84 (ATerm));
ATerm map_1 (ATerm, ATerm y_96 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_84 (ATerm));
ATerm Program_1 (ATerm, ATerm y_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_97 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_104 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_84 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_84 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_84 (ATerm));
ATerm iowrap_4 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm iowrap_3 (ATerm, ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm));
ATerm iowrap_2 (ATerm, ATerm h_86 (ATerm), ATerm i_86 (ATerm));
ATerm iowrap_1 (ATerm, ATerm e_86 (ATerm));
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_10)), not_null(j_10)), not_null(i_10)), not_null(h_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(e_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))))), (ATerm) ATmakeAppl(sym_Prim_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_10)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_11)), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)))))));
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
        ATerm d_9 = t;
        int e_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_12))))));
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm g_9 = t;
              int h_9 = stack_ptr;
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
                  LocalPopChoice(h_9);
                }
              else
                {
                  t = g_9;
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
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
        ATerm m_9 = t;
        int n_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_16)), not_null(d_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_16))));
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
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
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
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
ATerm Prim_2 (ATerm t, ATerm n_78 (ATerm), ATerm o_78 (ATerm))
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
            t = n_78(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm v_18 = NULL;
                  t = o_78(t);
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
ATerm Explode_2 (ATerm t, ATerm s_74 (ATerm), ATerm t_74 (ATerm))
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
            t = s_74(t);
            {
              q_19 = t;
              {
                t = not_null(k_19);
                {
                  ATerm u_19 = NULL;
                  t = t_74(t);
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
ATerm pat_td_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_79(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm t_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = pat_td_1(t, b_79);
                return(t);
              }
              t = fetch_1(t, z_0);
              return(t);
            }
            t = Op_2(t, _id, y_0);
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
                  ATerm a_1 (ATerm t)
                  {
                    t = pat_td_1(t, b_79);
                    return(t);
                  }
                  t = Explode_2(t, _id, a_1);
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
                        ATerm b_1 (ATerm t)
                        {
                          t = pat_td_1(t, b_79);
                          return(t);
                        }
                        t = Explode_2(t, b_1, _id);
                        LocalPopChoice(a_10);
                      }
                    else
                      {
                        t = y_9;
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = pat_td_1(t, b_79);
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
        ATerm f_10 = t;
        int g_10 = stack_ptr;
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
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
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
  ATerm p_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = p_10;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm v_95 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, v_95);
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
      ATerm n_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_11;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_o_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_21))));
    return(t);
  }
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Var_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_21(t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
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
            ATerm r_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_11;
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
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            {
              ATerm u_11 = t;
              int v_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(z_11);
                            }
                          else
                            {
                              t = y_11;
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
ATerm Strategies_1 (ATerm t, ATerm x_75 (ATerm))
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
            t = x_75(t);
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
ATerm Specification_1 (ATerm t, ATerm z_75 (ATerm))
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
            t = z_75(t);
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
ATerm spaste_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = split_2(t, _id, n_79);
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
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = split_2(t, _id, n_79);
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
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm p_1 (ATerm t)
              {
                t = n_79(t);
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
ATerm Rec_2 (ATerm t, ATerm g_77 (ATerm), ATerm h_77 (ATerm))
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
            t = g_77(t);
            {
              q_25 = t;
              {
                t = not_null(k_25);
                {
                  ATerm u_25 = NULL;
                  t = h_77(t);
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
ATerm Let_2 (ATerm t, ATerm i_77 (ATerm), ATerm j_77 (ATerm))
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
            t = i_77(t);
            {
              p_26 = t;
              {
                t = not_null(j_26);
                {
                  ATerm t_26 = NULL;
                  t = j_77(t);
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
ATerm sboundin_3 (ATerm t, ATerm o_79 (ATerm), ATerm p_79 (ATerm), ATerm q_79 (ATerm))
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, o_79, o_79);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, q_79, q_79, o_79);
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            t = Rec_2(t, q_79, o_79);
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
ATerm SVar_1 (ATerm t, ATerm f_77 (ATerm))
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
            t = f_77(t);
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
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm n_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(r_12);
            }
          else
            {
              t = n_12;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, s_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm h_82 (ATerm, ATerm (ATerm)), ATerm i_82 (ATerm), ATerm j_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_82 (ATerm, ATerm (ATerm)))
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
          ATerm b_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, h_82);
              LocalPopChoice(j_13);
            }
          else
            {
              t = b_13;
              {
                t = RnBinding_2(t, i_82, k_82);
                t = DistBinding_2(t, y_40, j_82);
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
  ATerm s_46 = NULL,t_46 = NULL;
  s_46 = t;
  r_46 :
  if(match_cons(s_46, sym_Build_1))
    {
      t_46 = ATgetArgument(s_46, 0);
      {
        ATerm v_46 = NULL,w_46 = NULL;
        ATerm o_47 = NULL;
        t = not_null(t_46);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
            x_46 = t;
            z_43 :
            if(match_cons(x_46, sym_Op_2))
              {
                y_46 = ATgetArgument(x_46, 0);
                z_46 = ATgetArgument(x_46, 1);
                a_44 :
                if(match_string(y_46, "Cons"))
                  {
                    b_44 :
                    if(((ATgetType(z_46) == AT_LIST) && ((ATermList) z_46 != ATempty)))
                      {
                        a_47 = ATgetFirst((ATermList) z_46);
                        b_47 = (ATerm) ATgetNext((ATermList) z_46);
                        c_44 :
                        if(((ATgetType(b_47) == AT_LIST) && ((ATermList) b_47 != ATempty)))
                          {
                            c_47 = ATgetFirst((ATermList) b_47);
                            n_47 = (ATerm) ATgetNext((ATermList) b_47);
                            d_44 :
                            if(match_cons(c_47, sym_Op_2))
                              {
                                d_47 = ATgetArgument(c_47, 0);
                                e_47 = ATgetArgument(c_47, 1);
                                e_44 :
                                if(match_string(d_47, "Cons"))
                                  {
                                    f_44 :
                                    if(((ATgetType(e_47) == AT_LIST) && ((ATermList) e_47 != ATempty)))
                                      {
                                        f_47 = ATgetFirst((ATermList) e_47);
                                        i_47 = (ATerm) ATgetNext((ATermList) e_47);
                                        g_44 :
                                        if(match_cons(f_47, sym_Var_1))
                                          {
                                            g_47 = ATgetArgument(f_47, 0);
                                            h_44 :
                                            if(match_cons(g_47, sym_ListVar_1))
                                              {
                                                h_47 = ATgetArgument(g_47, 0);
                                                i_44 :
                                                if(((ATgetType(i_47) == AT_LIST) && ((ATermList) i_47 != ATempty)))
                                                  {
                                                    j_47 = ATgetFirst((ATermList) i_47);
                                                    m_47 = (ATerm) ATgetNext((ATermList) i_47);
                                                    j_44 :
                                                    if(match_cons(j_47, sym_Op_2))
                                                      {
                                                        k_47 = ATgetArgument(j_47, 0);
                                                        l_47 = ATgetArgument(j_47, 1);
                                                        s_44 :
                                                        if(match_string(k_47, "Nil"))
                                                          {
                                                            t_44 :
                                                            if(((ATermList) l_47 == ATempty))
                                                              {
                                                                u_44 :
                                                                if(((ATermList) m_47 == ATempty))
                                                                  {
                                                                    v_44 :
                                                                    if(((ATermList) n_47 == ATempty))
                                                                      {
                                                                        {
                                                                          if(((t_46 != NULL) && (t_46 != a_47)))
                                                                            _fail(a_47);
                                                                          else
                                                                            t_46 = a_47;
                                                                          {
                                                                            if(((v_46 != NULL) && (v_46 != h_47)))
                                                                              _fail(h_47);
                                                                            else
                                                                              v_46 = h_47;
                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_46))), not_null(t_46)));
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
            o_47 = t;
            if(((w_46 != NULL) && (w_46 != o_47)))
              _fail(o_47);
            else
              w_46 = o_47;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(w_46));
      }
    }
  else
    {
      if(match_cons(s_46, sym_Match_1))
        {
          t_46 = ATgetArgument(s_46, 0);
          {
            ATerm u_13 = t;
            int v_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_47 = NULL,r_47 = NULL;
                ATerm l_48 = NULL;
                t = not_null(t_46);
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
                    s_47 = t;
                    a_45 :
                    if(match_cons(s_47, sym_Op_2))
                      {
                        t_47 = ATgetArgument(s_47, 0);
                        u_47 = ATgetArgument(s_47, 1);
                        d_45 :
                        if(match_string(t_47, "Cons"))
                          {
                            e_45 :
                            if(((ATgetType(u_47) == AT_LIST) && ((ATermList) u_47 != ATempty)))
                              {
                                v_47 = ATgetFirst((ATermList) u_47);
                                w_47 = (ATerm) ATgetNext((ATermList) u_47);
                                f_45 :
                                if(((ATgetType(w_47) == AT_LIST) && ((ATermList) w_47 != ATempty)))
                                  {
                                    x_47 = ATgetFirst((ATermList) w_47);
                                    i_48 = (ATerm) ATgetNext((ATermList) w_47);
                                    g_45 :
                                    if(match_cons(x_47, sym_Op_2))
                                      {
                                        y_47 = ATgetArgument(x_47, 0);
                                        z_47 = ATgetArgument(x_47, 1);
                                        h_45 :
                                        if(match_string(y_47, "Cons"))
                                          {
                                            i_45 :
                                            if(((ATgetType(z_47) == AT_LIST) && ((ATermList) z_47 != ATempty)))
                                              {
                                                a_48 = ATgetFirst((ATermList) z_47);
                                                d_48 = (ATerm) ATgetNext((ATermList) z_47);
                                                j_45 :
                                                if(match_cons(a_48, sym_Var_1))
                                                  {
                                                    b_48 = ATgetArgument(a_48, 0);
                                                    q_45 :
                                                    if(match_cons(b_48, sym_ListVar_1))
                                                      {
                                                        c_48 = ATgetArgument(b_48, 0);
                                                        r_45 :
                                                        if(((ATgetType(d_48) == AT_LIST) && ((ATermList) d_48 != ATempty)))
                                                          {
                                                            e_48 = ATgetFirst((ATermList) d_48);
                                                            h_48 = (ATerm) ATgetNext((ATermList) d_48);
                                                            y_45 :
                                                            if(match_cons(e_48, sym_Op_2))
                                                              {
                                                                f_48 = ATgetArgument(e_48, 0);
                                                                g_48 = ATgetArgument(e_48, 1);
                                                                z_45 :
                                                                if(match_string(f_48, "Nil"))
                                                                  {
                                                                    a_46 :
                                                                    if(((ATermList) g_48 == ATempty))
                                                                      {
                                                                        b_46 :
                                                                        if(((ATermList) h_48 == ATempty))
                                                                          {
                                                                            c_46 :
                                                                            if(((ATermList) i_48 == ATempty))
                                                                              {
                                                                                {
                                                                                  if(((t_46 != NULL) && (t_46 != v_47)))
                                                                                    _fail(v_47);
                                                                                  else
                                                                                    t_46 = v_47;
                                                                                  {
                                                                                    if(((q_47 != NULL) && (q_47 != c_48)))
                                                                                      _fail(c_48);
                                                                                    else
                                                                                      q_47 = c_48;
                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_47))), not_null(t_46)));
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
                    l_48 = t;
                    if(((r_47 != NULL) && (r_47 != l_48)))
                      _fail(l_48);
                    else
                      r_47 = l_48;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Match_1, not_null(r_47));
                LocalPopChoice(v_13);
              }
            else
              {
                t = u_13;
                {
                  ATerm n_48 = NULL,o_48 = NULL;
                  ATerm p_49 = NULL;
                  t = not_null(t_46);
                  {
                    ATerm x_1 (ATerm t)
                    {
                      ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,o_49 = NULL;
                      u_48 = t;
                      f_46 :
                      if(match_cons(u_48, sym_Op_2))
                        {
                          v_48 = ATgetArgument(u_48, 0);
                          w_48 = ATgetArgument(u_48, 1);
                          g_46 :
                          if(match_string(v_48, "Cons"))
                            {
                              i_46 :
                              if(((ATgetType(w_48) == AT_LIST) && ((ATermList) w_48 != ATempty)))
                                {
                                  x_48 = ATgetFirst((ATermList) w_48);
                                  a_49 = (ATerm) ATgetNext((ATermList) w_48);
                                  j_46 :
                                  if(match_cons(x_48, sym_Var_1))
                                    {
                                      y_48 = ATgetArgument(x_48, 0);
                                      k_46 :
                                      if(match_cons(y_48, sym_ListVar_1))
                                        {
                                          z_48 = ATgetArgument(y_48, 0);
                                          l_46 :
                                          if(((ATgetType(a_49) == AT_LIST) && ((ATermList) a_49 != ATempty)))
                                            {
                                              b_49 = ATgetFirst((ATermList) a_49);
                                              o_49 = (ATerm) ATgetNext((ATermList) a_49);
                                              m_46 :
                                              if(match_cons(b_49, sym_Op_2))
                                                {
                                                  c_49 = ATgetArgument(b_49, 0);
                                                  d_49 = ATgetArgument(b_49, 1);
                                                  n_46 :
                                                  if(match_string(c_49, "Nil"))
                                                    {
                                                      o_46 :
                                                      if(((ATermList) d_49 == ATempty))
                                                        {
                                                          p_46 :
                                                          if(((ATermList) o_49 == ATempty))
                                                            {
                                                              {
                                                                if(((n_48 != NULL) && (n_48 != z_48)))
                                                                  _fail(z_48);
                                                                else
                                                                  n_48 = z_48;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_48));
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
                      p_49 = t;
                      if(((o_48 != NULL) && (o_48 != p_49)))
                        _fail(p_49);
                      else
                        o_48 = p_49;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_48));
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
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,a_51 = NULL,d_51 = NULL,e_51 = NULL;
  d_51 = t;
  q_50 :
  if(match_cons(d_51, sym_InfixApp_3))
    {
      e_51 = ATgetArgument(d_51, 0);
      x_50 = ATgetArgument(d_51, 1);
      w_50 = ATgetArgument(d_51, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(x_50), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_50)), not_null(e_51))));
    }
  else
    {
      if(match_cons(d_51, sym_BAM_3))
        {
          e_51 = ATgetArgument(d_51, 0);
          x_50 = ATgetArgument(d_51, 1);
          w_50 = ATgetArgument(d_51, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(w_50))), not_null(e_51)), (ATerm) ATmakeAppl(sym_Build_1, not_null(x_50))));
        }
      else
        {
          if(match_cons(d_51, sym_AM_2))
            {
              e_51 = ATgetArgument(d_51, 0);
              x_50 = ATgetArgument(d_51, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_51), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_50)));
            }
          else
            {
              if(match_cons(d_51, sym_MA_2))
                {
                  e_51 = ATgetArgument(d_51, 0);
                  x_50 = ATgetArgument(d_51, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_51)), not_null(x_50));
                }
              else
                {
                  if(match_cons(d_51, sym_BA_2))
                    {
                      e_51 = ATgetArgument(d_51, 0);
                      x_50 = ATgetArgument(d_51, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_50)), not_null(e_51));
                    }
                  else
                    {
                      if(match_cons(d_51, sym_Lets_2))
                        {
                          e_51 = ATgetArgument(d_51, 0);
                          x_50 = ATgetArgument(d_51, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_51), not_null(x_50));
                        }
                      else
                        {
                          if(match_cons(d_51, sym_LChoices_1))
                            {
                              e_51 = ATgetArgument(d_51, 0);
                              r_50 :
                              if(((ATgetType(e_51) == AT_LIST) && ((ATermList) e_51 != ATempty)))
                                {
                                  y_50 = ATgetFirst((ATermList) e_51);
                                  a_51 = (ATerm) ATgetNext((ATermList) e_51);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(y_50), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_51)));
                                }
                              else
                                {
                                  if(((ATermList) e_51 == ATempty))
                                    {
                                      t = term_w_13;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(d_51, sym_Choices_1))
                                {
                                  e_51 = ATgetArgument(d_51, 0);
                                  s_50 :
                                  if(((ATgetType(e_51) == AT_LIST) && ((ATermList) e_51 != ATempty)))
                                    {
                                      y_50 = ATgetFirst((ATermList) e_51);
                                      a_51 = (ATerm) ATgetNext((ATermList) e_51);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(y_50), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_51)));
                                    }
                                  else
                                    {
                                      if(((ATermList) e_51 == ATempty))
                                        {
                                          t = term_w_13;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(d_51, sym_Seqs_1))
                                    {
                                      e_51 = ATgetArgument(d_51, 0);
                                      v_50 :
                                      if(((ATgetType(e_51) == AT_LIST) && ((ATermList) e_51 != ATempty)))
                                        {
                                          y_50 = ATgetFirst((ATermList) e_51);
                                          a_51 = (ATerm) ATgetNext((ATermList) e_51);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_50), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_51)));
                                        }
                                      else
                                        {
                                          if(((ATermList) e_51 == ATempty))
                                            {
                                              t = term_o_11;
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
  ATerm t_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym_Wld_0))
    {
      ATerm v_52 = NULL,x_52 = NULL;
      ATerm x_13;
      x_13 = t;
      {
        ATerm w_52 = NULL;
        t = SSLgetAnnotations(not_null(t_52));
        {
          w_52 = t;
          if(((v_52 != NULL) && (v_52 != w_52)))
            _fail(w_52);
          else
            v_52 = w_52;
        }
      }
      t = x_13;
      {
        ATerm y_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(v_52));
        {
          y_52 = t;
          if(((x_52 != NULL) && (x_52 != y_52)))
            _fail(y_52);
          else
            x_52 = y_52;
        }
        t = not_null(x_52);
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
  ATerm y_13 = t;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
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
      t = y_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym_App_2))
    {
      j_53 = ATgetArgument(i_53, 0);
      k_53 = ATgetArgument(i_53, 1);
      {
        ATerm o_53 = NULL,q_53 = NULL;
        ATerm p_53 = NULL;
        t = SSLgetAnnotations(not_null(i_53));
        {
          p_53 = t;
          if(((o_53 != NULL) && (o_53 != p_53)))
            _fail(p_53);
          else
            o_53 = p_53;
        }
        {
          t = not_null(j_53);
          {
            ATerm s_53 = NULL;
            t = m_74(t);
            {
              q_53 = t;
              {
                t = not_null(k_53);
                {
                  ATerm u_53 = NULL;
                  t = n_74(t);
                  {
                    s_53 = t;
                    {
                      ATerm v_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(q_53), not_null(s_53)), not_null(o_53));
                      {
                        v_53 = t;
                        if(((u_53 != NULL) && (u_53 != v_53)))
                          _fail(v_53);
                        else
                          u_53 = v_53;
                      }
                      t = not_null(u_53);
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
ATerm Con_3 (ATerm t, ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  i_54 = t;
  h_54 :
  if(match_cons(i_54, sym_Con_3))
    {
      j_54 = ATgetArgument(i_54, 0);
      k_54 = ATgetArgument(i_54, 1);
      l_54 = ATgetArgument(i_54, 2);
      {
        ATerm q_54 = NULL,s_54 = NULL;
        ATerm r_54 = NULL;
        t = SSLgetAnnotations(not_null(i_54));
        {
          r_54 = t;
          if(((q_54 != NULL) && (q_54 != r_54)))
            _fail(r_54);
          else
            q_54 = r_54;
        }
        {
          t = not_null(j_54);
          {
            ATerm u_54 = NULL;
            t = j_74(t);
            {
              s_54 = t;
              {
                t = not_null(k_54);
                {
                  ATerm w_54 = NULL;
                  t = k_74(t);
                  {
                    u_54 = t;
                    {
                      t = not_null(l_54);
                      {
                        ATerm y_54 = NULL;
                        t = l_74(t);
                        {
                          w_54 = t;
                          {
                            ATerm z_54 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(s_54), not_null(u_54), not_null(w_54)), not_null(q_54));
                            {
                              z_54 = t;
                              if(((y_54 != NULL) && (y_54 != z_54)))
                                _fail(z_54);
                              else
                                y_54 = z_54;
                            }
                            t = not_null(y_54);
                          }
                        }
                      }
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
  ATerm b_14 = t;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
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
      t = b_14;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
  k_55 = t;
  i_55 :
  if(match_cons(k_55, sym_SRule_1))
    {
      l_55 = ATgetArgument(k_55, 0);
      j_55 :
      if(match_cons(l_55, sym_StratRule_3))
        {
          m_55 = ATgetArgument(l_55, 0);
          n_55 = ATgetArgument(l_55, 1);
          o_55 = ATgetArgument(l_55, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_55)), (ATerm) ATmakeAppl(sym_Where_1, not_null(o_55))), not_null(m_55)));
        }
      else
        {
          if(match_cons(l_55, sym_Rule_3))
            {
              m_55 = ATgetArgument(l_55, 0);
              n_55 = ATgetArgument(l_55, 1);
              o_55 = ATgetArgument(l_55, 2);
              {
                t = not_null(m_55);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(n_55);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(n_55))), (ATerm) ATmakeAppl(sym_Where_1, not_null(o_55))), (ATerm) ATmakeAppl(sym_Match_1, not_null(m_55))));
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
ATerm oncetd_1 (ATerm t, ATerm q_101 (ATerm))
{
  ATerm x_55 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_101(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = _one(t, x_55);
      }
    return(t);
  }
  t = x_55(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  r_56 = t;
  p_56 :
  if(match_cons(r_56, sym_SRule_1))
    {
      s_56 = ATgetArgument(r_56, 0);
      q_56 :
      if(match_cons(s_56, sym_Rule_3))
        {
          t_56 = ATgetArgument(s_56, 0);
          u_56 = ATgetArgument(s_56, 1);
          v_56 = ATgetArgument(s_56, 2);
          {
            ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
            ATerm h_57 = NULL;
            ATerm r_57 = NULL;
            t = new_0(t);
            {
              h_57 = t;
              {
                if(((e_57 != NULL) && (e_57 != h_57)))
                  _fail(h_57);
                else
                  e_57 = h_57;
                {
                  t = not_null(t_56);
                  {
                    ATerm g_58 = NULL;
                    ATerm a_2 (ATerm t)
                    {
                      ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,p_57 = NULL,q_57 = NULL;
                      i_57 = t;
                      b_56 :
                      if(match_cons(i_57, sym_Con_3))
                        {
                          j_57 = ATgetArgument(i_57, 0);
                          p_57 = ATgetArgument(i_57, 1);
                          q_57 = ATgetArgument(i_57, 2);
                          c_56 :
                          if(match_cons(j_57, sym_Var_1))
                            {
                              k_57 = ATgetArgument(j_57, 0);
                              {
                                if(((d_57 != NULL) && (d_57 != k_57)))
                                  _fail(k_57);
                                else
                                  d_57 = k_57;
                                {
                                  if(((b_57 != NULL) && (b_57 != p_57)))
                                    _fail(p_57);
                                  else
                                    b_57 = p_57;
                                  {
                                    if(((z_56 != NULL) && (z_56 != q_57)))
                                      _fail(q_57);
                                    else
                                      z_56 = q_57;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_57));
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
                      r_57 = t;
                      {
                        if(((f_57 != NULL) && (f_57 != r_57)))
                          _fail(r_57);
                        else
                          f_57 = r_57;
                        {
                          t = not_null(u_56);
                          {
                            ATerm b_2 (ATerm t)
                            {
                              ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
                              z_57 = t;
                              f_56 :
                              if(match_cons(z_57, sym_Con_3))
                                {
                                  a_58 = ATgetArgument(z_57, 0);
                                  c_58 = ATgetArgument(z_57, 1);
                                  d_58 = ATgetArgument(z_57, 2);
                                  g_56 :
                                  if(match_cons(a_58, sym_Var_1))
                                    {
                                      b_58 = ATgetArgument(a_58, 0);
                                      h_56 :
                                      if(match_cons(d_58, sym_Call_2))
                                        {
                                          e_58 = ATgetArgument(d_58, 0);
                                          f_58 = ATgetArgument(d_58, 1);
                                          n_56 :
                                          if(((ATermList) f_58 == ATempty))
                                            {
                                              {
                                                if(((d_57 != NULL) && (d_57 != b_58)))
                                                  _fail(b_58);
                                                else
                                                  d_57 = b_58;
                                                {
                                                  if(((c_57 != NULL) && (c_57 != c_58)))
                                                    _fail(c_58);
                                                  else
                                                    c_57 = c_58;
                                                  {
                                                    if(((a_57 != NULL) && (a_57 != e_58)))
                                                      _fail(e_58);
                                                    else
                                                      a_57 = e_58;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_57));
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
                              g_58 = t;
                              if(((g_57 != NULL) && (g_57 != g_58)))
                                _fail(g_58);
                              else
                                g_57 = g_58;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_57)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_57), not_null(g_57), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_56), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(a_57), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_57), not_null(c_57), term_o_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_57)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_57)))))));
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
    ATerm g_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = g_14;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
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
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  c_59 :
  if(match_cons(h_59, sym_Scope_2))
    {
      i_59 = ATgetArgument(h_59, 0);
      j_59 = ATgetArgument(h_59, 1);
      {
        ATerm m_59 = NULL;
        ATerm q_59 = NULL;
        t = not_null(i_59);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm e_2 (ATerm t)
            {
              ATerm n_59 = NULL,o_59 = NULL;
              n_59 = t;
              w_58 :
              if(match_cons(n_59, sym_ListVar_1))
                {
                  o_59 = ATgetArgument(n_59, 0);
                  t = not_null(o_59);
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
            q_59 = t;
            if(((m_59 != NULL) && (m_59 != q_59)))
              _fail(q_59);
            else
              m_59 = q_59;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_59), not_null(j_59));
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
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, g_2);
    {
      ATerm h_2 (ATerm t)
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            {
              ATerm w_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ListMatch_0(t);
                  LocalPopChoice(a_15);
                }
              else
                {
                  t = w_14;
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
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  x_59 = t;
  w_59 :
  if(match_cons(x_59, sym_SDef_3))
    {
      y_59 = ATgetArgument(x_59, 0);
      z_59 = ATgetArgument(x_59, 1);
      a_60 = ATgetArgument(x_59, 2);
      {
        ATerm e_60 = NULL;
        ATerm f_60 = NULL;
        t = not_null(a_60);
        {
          t = tvars_0(t);
          {
            f_60 = t;
            if(((e_60 != NULL) && (e_60 != f_60)))
              _fail(f_60);
            else
              e_60 = f_60;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_59), not_null(z_59), (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_60), not_null(a_60)));
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
  ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym_RDef_3))
    {
      q_60 = ATgetArgument(p_60, 0);
      r_60 = ATgetArgument(p_60, 1);
      s_60 = ATgetArgument(p_60, 2);
      {
        ATerm e_61 = NULL;
        ATerm f_61 = NULL;
        t = not_null(s_60);
        {
          t = tvars_0(t);
          {
            f_61 = t;
            if(((e_61 != NULL) && (e_61 != f_61)))
              _fail(f_61);
            else
              e_61 = f_61;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(q_60), not_null(r_60), (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_61), (ATerm) ATmakeAppl(sym_SRule_1, not_null(s_60))));
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
  ATerm j_61 = NULL;
  j_61 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(j_61)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
  a_62 = t;
  x_61 :
  if(match_cons(a_62, sym_OpDecl_2))
    {
      b_62 = ATgetArgument(a_62, 0);
      c_62 = ATgetArgument(a_62, 1);
      y_61 :
      if(match_cons(c_62, sym_FunType_2))
        {
          d_62 = ATgetArgument(c_62, 0);
          z_61 = ATgetArgument(c_62, 1);
          {
            ATerm h_62 = NULL,i_62 = NULL,q_62 = NULL;
            ATerm h_15;
            h_15 = t;
            {
              ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
              t = not_null(d_62);
              {
                ATerm i_2 (ATerm t)
                {
                  ATerm j_62 = NULL,l_62 = NULL;
                  t = new_0(t);
                  {
                    ATerm i_15;
                    i_15 = t;
                    {
                      ATerm k_62 = NULL;
                      k_62 = t;
                      if(((j_62 != NULL) && (j_62 != k_62)))
                        _fail(k_62);
                      else
                        j_62 = k_62;
                    }
                    t = i_15;
                    {
                      ATerm m_62 = NULL;
                      m_62 = t;
                      if(((l_62 != NULL) && (l_62 != m_62)))
                        _fail(m_62);
                      else
                        l_62 = m_62;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_62), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15)), not_null(l_62));
                    }
                  }
                  return(t);
                }
                t = map_1(t, i_2);
                {
                  t = unzip_0(t);
                  {
                    n_62 = t;
                    v_61 :
                    if(match_cons(n_62, sym__2))
                      {
                        o_62 = ATgetArgument(n_62, 0);
                        p_62 = ATgetArgument(n_62, 1);
                        {
                          if(((h_62 != NULL) && (h_62 != o_62)))
                            _fail(o_62);
                          else
                            h_62 = o_62;
                          if(((i_62 != NULL) && (i_62 != p_62)))
                            _fail(p_62);
                          else
                            i_62 = p_62;
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
            t = h_15;
            {
              ATerm r_62 = NULL;
              t = not_null(i_62);
              {
                t = map_1(t, MkCall_0);
                {
                  r_62 = t;
                  if(((q_62 != NULL) && (q_62 != r_62)))
                    _fail(r_62);
                  else
                    q_62 = r_62;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_62), not_null(h_62), (ATerm) ATmakeAppl(sym_Cong_2, not_null(b_62), not_null(q_62)));
            }
          }
        }
      else
        {
          if(match_cons(c_62, sym_ConstType_1))
            {
              d_62 = ATgetArgument(c_62, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_62), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(b_62), (ATerm) ATempty));
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
  ATerm d_63 = NULL,e_63 = NULL;
  d_63 = t;
  c_63 :
  if(match_cons(d_63, sym_Constructors_1))
    {
      e_63 = ATgetArgument(d_63, 0);
      {
        t = not_null(e_63);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(d_63, sym_Sorts_1))
        {
          e_63 = ATgetArgument(d_63, 0);
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
  ATerm x_63 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,k_64 = NULL,l_64 = NULL;
  x_63 = t;
  r_63 :
  if(match_cons(x_63, sym_Specification_1))
    {
      b_64 = ATgetArgument(x_63, 0);
      s_63 :
      if(((ATgetType(b_64) == AT_LIST) && ((ATermList) b_64 != ATempty)))
        {
          c_64 = ATgetFirst((ATermList) b_64);
          e_64 = (ATerm) ATgetNext((ATermList) b_64);
          t_63 :
          if(match_cons(c_64, sym_Signature_1))
            {
              d_64 = ATgetArgument(c_64, 0);
              u_63 :
              if(((ATgetType(e_64) == AT_LIST) && ((ATermList) e_64 != ATempty)))
                {
                  f_64 = ATgetFirst((ATermList) e_64);
                  l_64 = (ATerm) ATgetNext((ATermList) e_64);
                  v_63 :
                  if(match_cons(f_64, sym_Strategies_1))
                    {
                      k_64 = ATgetArgument(f_64, 0);
                      w_63 :
                      if(((ATermList) l_64 == ATempty))
                        {
                          {
                            ATerm u_64 = NULL;
                            ATerm v_64 = NULL,x_64 = NULL,z_64 = NULL;
                            ATerm m_15;
                            m_15 = t;
                            {
                              ATerm w_64 = NULL;
                              t = not_null(d_64);
                              {
                                t = congdefs_0(t);
                                {
                                  w_64 = t;
                                  if(((v_64 != NULL) && (v_64 != w_64)))
                                    _fail(w_64);
                                  else
                                    v_64 = w_64;
                                }
                              }
                            }
                            t = m_15;
                            {
                              ATerm y_64 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(k_64)), (ATerm) ATmakeAppl(sym_RDef_3, term_n_15, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_q_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_o_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15))), (ATerm) ATmakeAppl(sym_Rule_3, term_w_15, term_e_17, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_k_17), term_h_17)))));
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  ATerm l_17 = t;
                                  int m_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(m_17);
                                    }
                                  else
                                    {
                                      t = l_17;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, j_2);
                                {
                                  y_64 = t;
                                  if(((x_64 != NULL) && (x_64 != y_64)))
                                    _fail(y_64);
                                  else
                                    x_64 = y_64;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_64), not_null(x_64));
                                {
                                  t = conc_0(t);
                                  {
                                    z_64 = t;
                                    if(((u_64 != NULL) && (u_64 != z_64)))
                                      _fail(z_64);
                                    else
                                      u_64 = z_64;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(u_64))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(d_64))));
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
  ATerm v_67 = NULL;
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  t = term_n_17;
  {
    ATerm k_2 (ATerm t)
    {
      t = term_o_17;
      return(t);
    }
    t = rewrite_1(t, k_2);
    {
      w_67 = t;
      o_67 :
      if(match_cons(w_67, sym_Defined_2))
        {
          x_67 = ATgetArgument(w_67, 0);
          y_67 = ATgetArgument(w_67, 1);
          u_67 :
          if(match_string(x_67, "e_0"))
            {
              if(((v_67 != NULL) && (v_67 != y_67)))
                _fail(y_67);
              else
                v_67 = y_67;
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
  t = not_null(v_67);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm b_68 = NULL;
  b_68 = t;
  t = SSL_int_to_string(not_null(b_68));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
  k_68 = t;
  j_68 :
  if(match_cons(k_68, sym_Op_2))
    {
      l_68 = ATgetArgument(k_68, 0);
      m_68 = ATgetArgument(k_68, 1);
      {
        ATerm p_68 = NULL,q_68 = NULL;
        ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL;
        t = term_n_17;
        {
          ATerm l_2 (ATerm t)
          {
            t = term_p_17;
            return(t);
          }
          t = rewrite_1(t, l_2);
          {
            r_68 = t;
            h_68 :
            if(match_cons(r_68, sym_Defined_3))
              {
                s_68 = ATgetArgument(r_68, 0);
                t_68 = ATgetArgument(r_68, 1);
                u_68 = ATgetArgument(r_68, 2);
                i_68 :
                if(match_string(s_68, "f_0"))
                  {
                    ATerm v_68 = NULL;
                    if(((q_68 != NULL) && (q_68 != t_68)))
                      _fail(t_68);
                    else
                      q_68 = t_68;
                    {
                      if(((p_68 != NULL) && (p_68 != u_68)))
                        _fail(u_68);
                      else
                        p_68 = u_68;
                      {
                        ATerm w_68 = NULL;
                        t = not_null(m_68);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              w_68 = t;
                              if(((v_68 != NULL) && (v_68 != w_68)))
                                _fail(w_68);
                              else
                                v_68 = w_68;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), not_null(v_68)), term_b_18), not_null(l_68)), term_a_18), term_z_17), not_null(q_68)), term_y_17), not_null(p_68)), term_r_17));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(l_68), not_null(m_68));
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
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym__2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(f_69), not_null(g_69));
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = SSL_subtr(not_null(f_69), not_null(g_69));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
    s_69 = t;
    l_69 :
    if(match_cons(s_69, sym__2))
      {
        t_69 = ATgetArgument(s_69, 0);
        u_69 = ATgetArgument(s_69, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(t_69), not_null(u_69), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
    x_69 = t;
    n_69 :
    if(match_cons(x_69, sym__3))
      {
        y_69 = ATgetArgument(x_69, 0);
        z_69 = ATgetArgument(x_69, 1);
        a_70 = ATgetArgument(x_69, 2);
        o_69 :
        if(match_int(y_69, 0))
          {
            t = not_null(a_70);
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
    ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
    d_70 = t;
    r_69 :
    if(match_cons(d_70, sym__3))
      {
        e_70 = ATgetArgument(d_70, 0);
        f_70 = ATgetArgument(d_70, 1);
        g_70 = ATgetArgument(d_70, 2);
        {
          ATerm k_70 = NULL;
          ATerm f_18;
          f_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_70), term_g_18);
            t = geq_0(t);
          }
          t = f_18;
          {
            ATerm l_70 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_70), term_g_18);
            {
              t = subt_0(t);
              {
                l_70 = t;
                if(((k_70 != NULL) && (k_70 != l_70)))
                  _fail(l_70);
                else
                  k_70 = l_70;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_70), not_null(f_70), (ATerm) ATinsert(CheckATermList(not_null(g_70)), not_null(f_70)));
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
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
  z_70 = t;
  x_70 :
  if(match_cons(z_70, sym_Op_2))
    {
      a_71 = ATgetArgument(z_70, 0);
      b_71 = ATgetArgument(z_70, 1);
      y_70 :
      if(match_string(a_71, ""))
        {
          ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
          ATerm h_18;
          h_18 = t;
          {
            ATerm h_71 = NULL;
            t = not_null(b_71);
            {
              ATerm i_71 = NULL;
              t = length_0(t);
              {
                h_71 = t;
                {
                  if(((e_71 != NULL) && (e_71 != h_71)))
                    _fail(h_71);
                  else
                    e_71 = h_71;
                  {
                    ATerm j_71 = NULL,l_71 = NULL;
                    t = term_c_9;
                    {
                      i_71 = t;
                      {
                        if(((d_71 != NULL) && (d_71 != i_71)))
                          _fail(i_71);
                        else
                          d_71 = i_71;
                        {
                          ATerm m_18;
                          m_18 = t;
                          {
                            ATerm k_71 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_71), term_o_18);
                            {
                              t = copy_0(t);
                              {
                                k_71 = t;
                                if(((j_71 != NULL) && (j_71 != k_71)))
                                  _fail(k_71);
                                else
                                  j_71 = k_71;
                              }
                            }
                          }
                          t = m_18;
                          {
                            ATerm m_71 = NULL,o_71 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, not_null(j_71), term_o_18));
                            {
                              l_71 = t;
                              {
                                if(((f_71 != NULL) && (f_71 != l_71)))
                                  _fail(l_71);
                                else
                                  f_71 = l_71;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm n_71 = NULL;
                                    ATerm s_18 = t;
                                    int u_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(u_18);
                                      }
                                    else
                                      {
                                        t = s_18;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      n_71 = t;
                                      if(((m_71 != NULL) && (m_71 != n_71)))
                                        _fail(n_71);
                                      else
                                        m_71 = n_71;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(m_71)), not_null(f_71));
                                      {
                                        o_71 = t;
                                        {
                                          if(((g_71 != NULL) && (g_71 != o_71)))
                                            _fail(o_71);
                                          else
                                            g_71 = o_71;
                                          {
                                            ATerm x_18;
                                            x_18 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATmakeAppl(sym_Defined_2, term_y_18, not_null(g_71)));
                                              {
                                                ATerm p_2 (ATerm t)
                                                {
                                                  t = term_o_17;
                                                  return(t);
                                                }
                                                t = assert_1(t, p_2);
                                              }
                                            }
                                            t = x_18;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = h_18;
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
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  y_71 = t;
  x_71 :
  if(((ATgetType(y_71) == AT_LIST) && ((ATermList) y_71 != ATempty)))
    {
      z_71 = ATgetFirst((ATermList) y_71);
      a_72 = (ATerm) ATgetNext((ATermList) y_71);
      t = not_null(z_71);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(match_cons(g_72, sym__2))
    {
      h_72 = ATgetArgument(g_72, 0);
      i_72 = ATgetArgument(g_72, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_72), not_null(i_72));
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
ATerm rewrite_1 (ATerm t, ATerm r_88 (ATerm))
{
  ATerm o_72 = NULL;
  ATerm q_72 = NULL;
  o_72 = t;
  {
    ATerm r_72 = NULL;
    t = term_z_18;
    {
      t = r_88(t);
      {
        r_72 = t;
        if(((q_72 != NULL) && (q_72 != r_72)))
          _fail(r_72);
        else
          q_72 = r_72;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_72), not_null(o_72));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  h_73 = t;
  g_73 :
  if(match_cons(h_73, sym_Op_2))
    {
      i_73 = ATgetArgument(h_73, 0);
      j_73 = ATgetArgument(h_73, 1);
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_73 = NULL;
            ATerm o_73 = NULL;
            t = not_null(j_73);
            {
              m_73 = t;
              {
                t = length_0(t);
                {
                  o_73 = t;
                  {
                    ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(i_73), not_null(o_73));
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = term_c_19;
                        return(t);
                      }
                      t = rewrite_1(t, q_2);
                      {
                        q_73 = t;
                        z_72 :
                        if(match_cons(q_73, sym_Defined_2))
                          {
                            r_73 = ATgetArgument(q_73, 0);
                            s_73 = ATgetArgument(q_73, 1);
                            a_73 :
                            if(match_string(r_73, "d_0"))
                              {
                                if(((i_73 != NULL) && (i_73 != s_73)))
                                  _fail(s_73);
                                else
                                  i_73 = s_73;
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(i_73), not_null(m_73));
                  }
                }
              }
            }
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            {
              ATerm v_73 = NULL;
              ATerm x_73 = NULL;
              t = not_null(j_73);
              {
                v_73 = t;
                {
                  t = length_0(t);
                  {
                    x_73 = t;
                    {
                      ATerm z_73 = NULL,o_74 = NULL,p_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(i_73), not_null(x_73));
                      {
                        ATerm r_2 (ATerm t)
                        {
                          t = term_c_19;
                          return(t);
                        }
                        t = rewrite_1(t, r_2);
                        {
                          z_73 = t;
                          e_73 :
                          if(match_cons(z_73, sym_Defined_2))
                            {
                              o_74 = ATgetArgument(z_73, 0);
                              p_74 = ATgetArgument(z_73, 1);
                              f_73 :
                              if(match_string(o_74, "c_0"))
                                {
                                  if(((i_73 != NULL) && (i_73 != p_74)))
                                    _fail(p_74);
                                  else
                                    i_73 = p_74;
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(i_73), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm y_102 (ATerm))
{
  ATerm a_75 (ATerm t)
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        {
          ATerm s_2 (ATerm t)
          {
            t = try_1(t, a_75);
            return(t);
          }
          t = _all(t, s_2);
        }
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = _some(t, a_75);
      }
    return(t);
  }
  t = a_75(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL;
  h_75 = t;
  g_75 :
  if(match_cons(h_75, sym__2))
    {
      i_75 = ATgetArgument(h_75, 0);
      j_75 = ATgetArgument(h_75, 1);
      {
        ATerm f_19;
        f_19 = t;
        {
          ATerm q_75 = NULL;
          ATerm w_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_75), not_null(j_75));
          {
            ATerm g_19 = t;
            int l_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(l_19);
              }
            else
              {
                t = g_19;
                t = (ATerm) ATempty;
              }
            {
              w_75 = t;
              if(((q_75 != NULL) && (q_75 != w_75)))
                _fail(w_75);
              else
                q_75 = w_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_75), not_null(j_75), not_null(q_75));
            t = table_put_0(t);
          }
        }
        t = f_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm i_76 = NULL;
    ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
    t = m_88(t);
    {
      i_76 = t;
      {
        if(((g_76 != NULL) && (g_76 != i_76)))
          _fail(i_76);
        else
          g_76 = i_76;
        {
          ATerm n_19 = t;
          int r_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_76), term_t_19);
              t = table_get_0(t);
              LocalPopChoice(r_19);
            }
          else
            {
              t = n_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_76 = t;
            e_76 :
            if(((ATgetType(j_76) == AT_LIST) && ((ATermList) j_76 != ATempty)))
              {
                k_76 = ATgetFirst((ATermList) j_76);
                l_76 = (ATerm) ATgetNext((ATermList) j_76);
                {
                  if(((h_76 != NULL) && (h_76 != k_76)))
                    _fail(k_76);
                  else
                    h_76 = k_76;
                  {
                    if(((f_76 != NULL) && (f_76 != l_76)))
                      _fail(l_76);
                    else
                      f_76 = l_76;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_76), term_t_19, not_null(f_76));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_76);
                          {
                            ATerm t_2 (ATerm t)
                            {
                              ATerm m_76 = NULL;
                              m_76 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_76), not_null(m_76));
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
  t = m_19;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_104 (ATerm), ATerm s_104 (ATerm))
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_104(t);
      t = s_104(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        t = s_104(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_88 (ATerm))
{
  ATerm v_76 = NULL;
  ATerm y_19;
  y_19 = t;
  {
    ATerm w_76 = NULL;
    ATerm x_76 = NULL;
    t = l_88(t);
    {
      w_76 = t;
      {
        if(((v_76 != NULL) && (v_76 != w_76)))
          _fail(w_76);
        else
          v_76 = w_76;
        {
          ATerm y_76 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_76), term_t_19);
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = (ATerm) ATempty;
              }
            {
              y_76 = t;
              if(((x_76 != NULL) && (x_76 != y_76)))
                _fail(y_76);
              else
                x_76 = y_76;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_76), term_t_19, (ATerm) ATinsert(CheckATermList(not_null(x_76)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_19;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm n_88 (ATerm), ATerm o_88 (ATerm))
{
  t = begin_scope_1(t, n_88);
  {
    ATerm u_2 (ATerm t)
    {
      t = end_scope_1(t, n_88);
      return(t);
    }
    t = restore_always_2(t, o_88, u_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm d_79 (ATerm), ATerm e_79 (ATerm))
{
  ATerm d_77 = NULL,e_77 = NULL;
  ATerm v_2 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm b_20;
    b_20 = t;
    {
      ATerm n_77 = NULL;
      ATerm o_77 = NULL;
      t = d_79(t);
      {
        n_77 = t;
        {
          if(((d_77 != NULL) && (d_77 != n_77)))
            _fail(n_77);
          else
            d_77 = n_77;
          {
            t = e_79(t);
            {
              o_77 = t;
              if(((e_77 != NULL) && (e_77 != o_77)))
                _fail(o_77);
              else
                e_77 = o_77;
            }
          }
        }
      }
    }
    t = b_20;
    {
      ATerm c_20;
      c_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATmakeAppl(sym_Defined_3, term_d_20, not_null(d_77), not_null(e_77)));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_p_17;
            return(t);
          }
          t = assert_1(t, x_2);
        }
      }
      t = c_20;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm g_20 = t;
          if((PushChoice() == 0))
            {
              ATerm h_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = h_20;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_20;
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
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
  u_77 = t;
  t_77 :
  if(match_cons(u_77, sym_SDef_3))
    {
      v_77 = ATgetArgument(u_77, 0);
      w_77 = ATgetArgument(u_77, 1);
      x_77 = ATgetArgument(u_77, 2);
      {
        t = not_null(x_77);
        {
          ATerm z_2 (ATerm t)
          {
            t = not_null(v_77);
            return(t);
          }
          ATerm a_3 (ATerm t)
          {
            t = term_o_20;
            return(t);
          }
          t = check_constructors_p__2(t, z_2, a_3);
        }
      }
    }
  else
    {
      if(match_cons(u_77, sym_RDef_3))
        {
          v_77 = ATgetArgument(u_77, 0);
          w_77 = ATgetArgument(u_77, 1);
          x_77 = ATgetArgument(u_77, 2);
          {
            t = not_null(x_77);
            {
              ATerm b_3 (ATerm t)
              {
                t = not_null(v_77);
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_v_20;
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
ATerm assert_1 (ATerm t, ATerm p_88 (ATerm))
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
  v_78 = t;
  u_78 :
  if(match_cons(v_78, sym__2))
    {
      w_78 = ATgetArgument(v_78, 0);
      x_78 = ATgetArgument(v_78, 1);
      {
        ATerm a_79 = NULL,i_79 = NULL,r_79 = NULL;
        ATerm e_21;
        e_21 = t;
        {
          ATerm s_79 = NULL;
          ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
          t = p_88(t);
          {
            s_79 = t;
            {
              if(((a_79 != NULL) && (a_79 != s_79)))
                _fail(s_79);
              else
                a_79 = s_79;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_79), not_null(w_78), not_null(x_78));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_21 = t;
                    int g_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_79), term_t_19);
                        t = table_get_0(t);
                        LocalPopChoice(g_21);
                      }
                    else
                      {
                        t = f_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_79 = t;
                      t_78 :
                      if(((ATgetType(t_79) == AT_LIST) && ((ATermList) t_79 != ATempty)))
                        {
                          u_79 = ATgetFirst((ATermList) t_79);
                          v_79 = (ATerm) ATgetNext((ATermList) t_79);
                          {
                            if(((i_79 != NULL) && (i_79 != u_79)))
                              _fail(u_79);
                            else
                              i_79 = u_79;
                            {
                              if(((r_79 != NULL) && (r_79 != v_79)))
                                _fail(v_79);
                              else
                                r_79 = v_79;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_79), term_t_19, (ATerm) ATinsert(CheckATermList(not_null(r_79)), (ATerm) ATinsert(CheckATermList(not_null(i_79)), not_null(w_78))));
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
        t = e_21;
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
    t = term_h_21;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_g_18;
    return(t);
  }
  t = foldr_3(t, d_3, add_0, e_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,n_80 = NULL;
  g_80 = t;
  d_80 :
  if(match_cons(g_80, sym_OpDecl_2))
    {
      h_80 = ATgetArgument(g_80, 0);
      i_80 = ATgetArgument(g_80, 1);
      e_80 :
      if(match_cons(i_80, sym_FunType_2))
        {
          n_80 = ATgetArgument(i_80, 0);
          f_80 = ATgetArgument(i_80, 1);
          {
            ATerm v_80 = NULL;
            ATerm i_21;
            i_21 = t;
            {
              ATerm w_80 = NULL;
              t = not_null(n_80);
              {
                t = length_0(t);
                {
                  w_80 = t;
                  if(((v_80 != NULL) && (v_80 != w_80)))
                    _fail(w_80);
                  else
                    v_80 = w_80;
                }
              }
            }
            t = i_21;
            {
              ATerm j_21;
              j_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(h_80), not_null(v_80)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_21, not_null(h_80)));
                {
                  ATerm f_3 (ATerm t)
                  {
                    t = term_c_19;
                    return(t);
                  }
                  t = assert_1(t, f_3);
                }
              }
              t = j_21;
            }
          }
        }
      else
        {
          if(match_cons(i_80, sym_ConstType_1))
            {
              n_80 = ATgetArgument(i_80, 0);
              {
                ATerm z_80 = NULL;
                ATerm l_21;
                l_21 = t;
                {
                  ATerm a_81 = NULL;
                  t = term_h_21;
                  {
                    a_81 = t;
                    if(((z_80 != NULL) && (z_80 != a_81)))
                      _fail(a_81);
                    else
                      z_80 = a_81;
                  }
                }
                t = l_21;
                {
                  ATerm m_21;
                  m_21 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(h_80), not_null(z_80)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_21, not_null(h_80)));
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = term_c_19;
                        return(t);
                      }
                      t = assert_1(t, g_3);
                    }
                  }
                  t = m_21;
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
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  v_81 = t;
  l_81 :
  if(match_cons(v_81, sym_Specification_1))
    {
      w_81 = ATgetArgument(v_81, 0);
      m_81 :
      if(((ATgetType(w_81) == AT_LIST) && ((ATermList) w_81 != ATempty)))
        {
          x_81 = ATgetFirst((ATermList) w_81);
          e_82 = (ATerm) ATgetNext((ATermList) w_81);
          n_81 :
          if(match_cons(x_81, sym_Signature_1))
            {
              y_81 = ATgetArgument(x_81, 0);
              o_81 :
              if(((ATgetType(y_81) == AT_LIST) && ((ATermList) y_81 != ATempty)))
                {
                  b_82 = ATgetFirst((ATermList) y_81);
                  d_82 = (ATerm) ATgetNext((ATermList) y_81);
                  p_81 :
                  if(match_cons(b_82, sym_Constructors_1))
                    {
                      c_82 = ATgetArgument(b_82, 0);
                      q_81 :
                      if(((ATermList) d_82 == ATempty))
                        {
                          r_81 :
                          if(((ATgetType(e_82) == AT_LIST) && ((ATermList) e_82 != ATempty)))
                            {
                              d_83 = ATgetFirst((ATermList) e_82);
                              f_83 = (ATerm) ATgetNext((ATermList) e_82);
                              s_81 :
                              if(match_cons(d_83, sym_Strategies_1))
                                {
                                  e_83 = ATgetArgument(d_83, 0);
                                  u_81 :
                                  if(((ATermList) f_83 == ATempty))
                                    {
                                      {
                                        ATerm i_83 = NULL,j_83 = NULL,n_83 = NULL;
                                        ATerm t_21;
                                        t_21 = t;
                                        {
                                          ATerm k_83 = NULL;
                                          ATerm l_83 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_82)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_18), term_o_18))), term_x_21);
                                          {
                                            k_83 = t;
                                            {
                                              if(((i_83 != NULL) && (i_83 != k_83)))
                                                _fail(k_83);
                                              else
                                                i_83 = k_83;
                                              {
                                                t = not_null(i_83);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(e_83);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        l_83 = t;
                                                        j_81 :
                                                        if(((ATermList) l_83 == ATempty))
                                                          {
                                                            {
                                                              ATerm m_83 = NULL;
                                                              ATerm y_21 = t;
                                                              int f_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(f_22);
                                                                }
                                                              else
                                                                {
                                                                  t = y_21;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                m_83 = t;
                                                                if(((j_83 != NULL) && (j_83 != m_83)))
                                                                  _fail(m_83);
                                                                else
                                                                  j_83 = m_83;
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
                                        t = t_21;
                                        {
                                          ATerm o_83 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_83), not_null(i_83));
                                          {
                                            t = conc_0(t);
                                            {
                                              o_83 = t;
                                              if(((n_83 != NULL) && (n_83 != o_83)))
                                                _fail(o_83);
                                              else
                                                n_83 = o_83;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(e_83))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(n_83))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm h_3 (ATerm t)
  {
    ATerm g_22;
    g_22 = t;
    {
      ATerm p_22 = t;
      if((PushChoice() == 0))
        {
          ATerm v_83 = NULL;
          t = m_80(t);
          {
            v_83 = t;
            u_83 :
            if(((ATermList) v_83 == ATempty))
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
          t = p_22;
        }
    }
    t = g_22;
    {
      ATerm i_3 (ATerm t)
      {
        ATerm j_3 (ATerm t)
        {
          t = ExpOverlay_1(t, m_80);
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
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL;
  l_84 = t;
  j_84 :
  if(match_cons(l_84, sym_BuildDefault_1))
    {
      m_84 = ATgetArgument(l_84, 0);
      t = term_o_11;
    }
  else
    {
      if(match_cons(l_84, sym_Real_1))
        {
          m_84 = ATgetArgument(l_84, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(m_84)));
        }
      else
        {
          if(match_cons(l_84, sym_Int_1))
            {
              m_84 = ATgetArgument(l_84, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(m_84)));
            }
          else
            {
              if(match_cons(l_84, sym_Str_1))
                {
                  m_84 = ATgetArgument(l_84, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_84)));
                }
              else
                {
                  if(match_cons(l_84, sym_Anno_2))
                    {
                      m_84 = ATgetArgument(l_84, 0);
                      k_84 = ATgetArgument(l_84, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_84)), not_null(m_84)));
                    }
                  else
                    {
                      if(match_cons(l_84, sym_Op_2))
                        {
                          m_84 = ATgetArgument(l_84, 0);
                          k_84 = ATgetArgument(l_84, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_84)), not_null(k_84));
                        }
                      else
                        {
                          if(match_cons(l_84, sym_Var_1))
                            {
                              m_84 = ATgetArgument(l_84, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_84)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm n_76 (ATerm), ATerm o_76 (ATerm))
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
  m_85 = t;
  l_85 :
  if(match_cons(m_85, sym_Op_2))
    {
      n_85 = ATgetArgument(m_85, 0);
      o_85 = ATgetArgument(m_85, 1);
      {
        ATerm s_85 = NULL,u_85 = NULL;
        ATerm t_85 = NULL;
        t = SSLgetAnnotations(not_null(m_85));
        {
          t_85 = t;
          if(((s_85 != NULL) && (s_85 != t_85)))
            _fail(t_85);
          else
            s_85 = t_85;
        }
        {
          t = not_null(n_85);
          {
            ATerm w_85 = NULL;
            t = n_76(t);
            {
              u_85 = t;
              {
                t = not_null(o_85);
                {
                  ATerm y_85 = NULL;
                  t = o_76(t);
                  {
                    w_85 = t;
                    {
                      ATerm z_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_85), not_null(w_85)), not_null(s_85));
                      {
                        z_85 = t;
                        if(((y_85 != NULL) && (y_85 != z_85)))
                          _fail(z_85);
                        else
                          y_85 = z_85;
                      }
                      t = not_null(y_85);
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
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL;
  v_86 = t;
  u_86 :
  if(match_cons(v_86, sym_Overlay_3))
    {
      w_86 = ATgetArgument(v_86, 0);
      x_86 = ATgetArgument(v_86, 1);
      y_86 = ATgetArgument(v_86, 2);
      {
        ATerm e_87 = NULL,i_87 = NULL;
        ATerm r_22;
        r_22 = t;
        {
          ATerm h_87 = NULL;
          t = not_null(x_86);
          {
            ATerm m_3 (ATerm t)
            {
              ATerm f_87 = NULL;
              ATerm g_87 = NULL;
              g_87 = t;
              if(((f_87 != NULL) && (f_87 != g_87)))
                _fail(g_87);
              else
                f_87 = g_87;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_87), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15));
              return(t);
            }
            t = map_1(t, m_3);
            {
              h_87 = t;
              if(((e_87 != NULL) && (e_87 != h_87)))
                _fail(h_87);
              else
                e_87 = h_87;
            }
          }
        }
        t = r_22;
        {
          ATerm j_87 = NULL;
          t = not_null(y_86);
          {
            t = trm_to_cong_0(t);
            {
              j_87 = t;
              if(((i_87 != NULL) && (i_87 != j_87)))
                _fail(j_87);
              else
                i_87 = j_87;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(w_86), not_null(e_87), not_null(i_87));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm j_79 (ATerm))
{
  t = Scope_2(t, j_79, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm y_87 = NULL,z_87 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym_Var_1))
    {
      z_87 = ATgetArgument(y_87, 0);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_88 = NULL,e_88 = NULL;
            ATerm d_88 = NULL;
            t = SSLgetAnnotations(not_null(y_87));
            {
              d_88 = t;
              if(((c_88 != NULL) && (c_88 != d_88)))
                _fail(d_88);
              else
                c_88 = d_88;
            }
            {
              t = not_null(z_87);
              {
                ATerm g_88 = NULL;
                t = s_0(t);
                {
                  e_88 = t;
                  {
                    ATerm h_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_88)), not_null(c_88));
                    {
                      h_88 = t;
                      if(((g_88 != NULL) && (g_88 != h_88)))
                        _fail(h_88);
                      else
                        g_88 = h_88;
                    }
                    t = not_null(g_88);
                  }
                }
              }
            }
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm k_88 = NULL,s_88 = NULL;
              ATerm q_88 = NULL;
              t = SSLgetAnnotations(not_null(y_87));
              {
                q_88 = t;
                if(((k_88 != NULL) && (k_88 != q_88)))
                  _fail(q_88);
                else
                  k_88 = q_88;
              }
              {
                t = not_null(z_87);
                {
                  ATerm u_88 = NULL;
                  t = s_0(t);
                  {
                    s_88 = t;
                    {
                      ATerm v_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_88)), not_null(k_88));
                      {
                        v_88 = t;
                        if(((u_88 != NULL) && (u_88 != v_88)))
                          _fail(v_88);
                        else
                          u_88 = v_88;
                      }
                      t = not_null(u_88);
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
ATerm DistBinding_2 (ATerm t, ATerm z_81 (ATerm), ATerm a_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL;
  i_89 = t;
  h_89 :
  if(match_cons(i_89, sym__3))
    {
      j_89 = ATgetArgument(i_89, 0);
      k_89 = ATgetArgument(i_89, 1);
      l_89 = ATgetArgument(i_89, 2);
      {
        t = not_null(j_89);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm p_89 = NULL;
            p_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_89), not_null(l_89));
              t = z_81(t);
            }
            return(t);
          }
          ATerm o_3 (ATerm t)
          {
            ATerm r_89 = NULL;
            r_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_89), not_null(k_89));
              t = z_81(t);
            }
            return(t);
          }
          t = a_82(t, n_3, o_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm f_82 (ATerm), ATerm g_82 (ATerm, ATerm (ATerm)))
{
  ATerm d_90 = NULL,g_90 = NULL,h_90 = NULL;
  d_90 = t;
  c_90 :
  if(match_cons(d_90, sym__2))
    {
      g_90 = ATgetArgument(d_90, 0);
      h_90 = ATgetArgument(d_90, 1);
      {
        ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,s_90 = NULL;
        ATerm u_22;
        u_22 = t;
        {
          ATerm n_90 = NULL;
          t = not_null(g_90);
          {
            ATerm o_90 = NULL;
            t = f_82(t);
            {
              n_90 = t;
              {
                if(((k_90 != NULL) && (k_90 != n_90)))
                  _fail(n_90);
                else
                  k_90 = n_90;
                {
                  ATerm p_90 = NULL,r_90 = NULL;
                  t = map_1(t, new_0);
                  {
                    o_90 = t;
                    {
                      if(((l_90 != NULL) && (l_90 != o_90)))
                        _fail(o_90);
                      else
                        l_90 = o_90;
                      {
                        ATerm q_90 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_90), not_null(l_90));
                        {
                          t = zip_1(t, _id);
                          {
                            q_90 = t;
                            if(((p_90 != NULL) && (p_90 != q_90)))
                              _fail(q_90);
                            else
                              p_90 = q_90;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_90), not_null(h_90));
                          {
                            t = conc_0(t);
                            {
                              r_90 = t;
                              if(((m_90 != NULL) && (m_90 != r_90)))
                                _fail(r_90);
                              else
                                m_90 = r_90;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = u_22;
        {
          ATerm t_90 = NULL;
          t = not_null(g_90);
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(l_90);
              return(t);
            }
            t = g_82(t, p_3);
            {
              t_90 = t;
              if(((s_90 != NULL) && (s_90 != t_90)))
                _fail(t_90);
              else
                s_90 = t_90;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(s_90), not_null(h_90), not_null(m_90));
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
  ATerm h_91 = NULL;
  ATerm j_91 = NULL,k_91 = NULL;
  h_91 = t;
  {
    ATerm l_91 = NULL;
    ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL,v_91 = NULL,w_91 = NULL;
    t = not_null(h_91);
    {
      l_91 = t;
      {
        t = SSL_explode_term(not_null(l_91));
        {
          n_91 = t;
          e_91 :
          if(match_cons(n_91, sym__2))
            {
              o_91 = ATgetArgument(n_91, 0);
              p_91 = ATgetArgument(n_91, 1);
              f_91 :
              if(match_string(o_91, ""))
                {
                  g_91 :
                  if(((ATgetType(p_91) == AT_LIST) && ((ATermList) p_91 != ATempty)))
                    {
                      v_91 = ATgetFirst((ATermList) p_91);
                      w_91 = (ATerm) ATgetNext((ATermList) p_91);
                      {
                        if(((k_91 != NULL) && (k_91 != v_91)))
                          _fail(v_91);
                        else
                          k_91 = v_91;
                        if(((j_91 != NULL) && (j_91 != w_91)))
                          _fail(w_91);
                        else
                          j_91 = w_91;
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
    t = not_null(k_91);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm t_81 (ATerm, ATerm (ATerm)))
{
  ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL;
  c_92 = t;
  b_92 :
  if(match_cons(c_92, sym__2))
    {
      d_92 = ATgetArgument(c_92, 0);
      e_92 = ATgetArgument(c_92, 1);
      {
        t = not_null(d_92);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm r_3 (ATerm t)
            {
              t = not_null(e_92);
              return(t);
            }
            t = split_2(t, _id, r_3);
            t = lookup_0(t);
            return(t);
          }
          t = t_81(t, q_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm t_98 (ATerm))
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  k_92 :
  if(match_cons(l_92, sym__2))
    {
      m_92 = ATgetArgument(l_92, 0);
      n_92 = ATgetArgument(l_92, 1);
      {
        t = not_null(m_92);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm r_92 = NULL;
            r_92 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_92), not_null(n_92));
              t = t_98(t);
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
ATerm env_alltd_1 (ATerm t, ATerm y_98 (ATerm))
{
  ATerm w_92 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_98(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = all_dist_1(t, w_92);
      }
    return(t);
  }
  t = w_92(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm, ATerm (ATerm)), ATerm t_82 (ATerm), ATerm u_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_82 (ATerm, ATerm (ATerm)), ATerm w_82 (ATerm))
{
  ATerm b_93 = NULL,c_93 = NULL,j_93 = NULL;
  t = subs_args_0(t);
  {
    b_93 = t;
    a_93 :
    if(match_cons(b_93, sym__2))
      {
        c_93 = ATgetArgument(b_93, 0);
        j_93 = ATgetArgument(b_93, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_93), (ATerm) ATempty);
          {
            ATerm n_93 (ATerm t)
            {
              ATerm t_3 (ATerm t)
              {
                ATerm d_23 = t;
                int g_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, s_82);
                    LocalPopChoice(g_23);
                  }
                else
                  {
                    t = d_23;
                    {
                      ATerm h_23 = t;
                      int i_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = not_null(c_93);
                              return(t);
                            }
                            t = SubsVar_2(t, r_82, u_3);
                            t = w_82(t);
                          }
                          LocalPopChoice(i_23);
                        }
                      else
                        {
                          t = h_23;
                          {
                            t = RnBinding_2(t, t_82, v_82);
                            t = DistBinding_2(t, n_93, u_82);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, t_3);
              return(t);
            }
            t = n_93(t);
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
ATerm substitute_5 (ATerm t, ATerm y_82 (ATerm), ATerm z_82 (ATerm, ATerm (ATerm)), ATerm a_83 (ATerm), ATerm b_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm c_83 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, y_82, z_82, a_83, b_83, c_83, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm o_93 (ATerm t, ATerm p_93 (ATerm))
  {
    t = Scope_2(t, p_93, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, o_93);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm k_80 (ATerm))
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL;
  x_93 = t;
  w_93 :
  if(match_cons(x_93, sym_Op_2))
    {
      y_93 = ATgetArgument(x_93, 0);
      z_93 = ATgetArgument(x_93, 1);
      {
        ATerm c_94 = NULL,d_94 = NULL;
        t = k_80(t);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm j_23;
            j_23 = t;
            {
              ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
              e_94 = t;
              v_93 :
              if(match_cons(e_94, sym_Overlay_3))
                {
                  f_94 = ATgetArgument(e_94, 0);
                  g_94 = ATgetArgument(e_94, 1);
                  h_94 = ATgetArgument(e_94, 2);
                  {
                    ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL,m_94 = NULL;
                    if(((y_93 != NULL) && (y_93 != f_94)))
                      _fail(f_94);
                    else
                      y_93 = f_94;
                    {
                      if(((i_94 != NULL) && (i_94 != g_94)))
                        _fail(g_94);
                      else
                        i_94 = g_94;
                      {
                        if(((j_94 != NULL) && (j_94 != h_94)))
                          _fail(h_94);
                        else
                          j_94 = h_94;
                        {
                          ATerm k_23;
                          k_23 = t;
                          {
                            ATerm l_94 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_94), not_null(z_93));
                            {
                              t = zip_1(t, _id);
                              {
                                l_94 = t;
                                if(((k_94 != NULL) && (k_94 != l_94)))
                                  _fail(l_94);
                                else
                                  k_94 = l_94;
                              }
                            }
                          }
                          t = k_23;
                          {
                            ATerm n_94 = NULL;
                            t = not_null(k_94);
                            {
                              m_94 = t;
                              {
                                if(((c_94 != NULL) && (c_94 != m_94)))
                                  _fail(m_94);
                                else
                                  c_94 = m_94;
                                {
                                  t = not_null(j_94);
                                  {
                                    n_94 = t;
                                    {
                                      if(((d_94 != NULL) && (d_94 != n_94)))
                                        _fail(n_94);
                                      else
                                        d_94 = n_94;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_94), not_null(j_94));
                                    }
                                  }
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
            t = j_23;
            return(t);
          }
          t = fetch_1(t, v_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_94), not_null(d_94));
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
ATerm exp_overlays1_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm l_23;
    l_23 = t;
    {
      ATerm m_23 = t;
      if((PushChoice() == 0))
        {
          ATerm u_94 = NULL;
          t = l_80(t);
          {
            u_94 = t;
            t_94 :
            if(((ATermList) u_94 == ATempty))
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
          t = m_23;
        }
    }
    t = l_23;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm y_3 (ATerm t)
        {
          t = ExpOverlay_1(t, l_80);
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
  ATerm j_95 = NULL,k_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL;
  j_95 = t;
  a_95 :
  if(match_cons(j_95, sym_Specification_1))
    {
      k_95 = ATgetArgument(j_95, 0);
      b_95 :
      if(((ATgetType(k_95) == AT_LIST) && ((ATermList) k_95 != ATempty)))
        {
          r_95 = ATgetFirst((ATermList) k_95);
          t_95 = (ATerm) ATgetNext((ATermList) k_95);
          c_95 :
          if(match_cons(r_95, sym_Signature_1))
            {
              s_95 = ATgetArgument(r_95, 0);
              d_95 :
              if(((ATgetType(t_95) == AT_LIST) && ((ATermList) t_95 != ATempty)))
                {
                  u_95 = ATgetFirst((ATermList) t_95);
                  x_95 = (ATerm) ATgetNext((ATermList) t_95);
                  e_95 :
                  if(match_cons(u_95, sym_Overlays_1))
                    {
                      w_95 = ATgetArgument(u_95, 0);
                      f_95 :
                      if(((ATgetType(x_95) == AT_LIST) && ((ATermList) x_95 != ATempty)))
                        {
                          y_95 = ATgetFirst((ATermList) x_95);
                          a_96 = (ATerm) ATgetNext((ATermList) x_95);
                          g_95 :
                          if(match_cons(y_95, sym_Strategies_1))
                            {
                              z_95 = ATgetArgument(y_95, 0);
                              h_95 :
                              if(((ATermList) a_96 == ATempty))
                                {
                                  {
                                    ATerm e_96 = NULL,g_96 = NULL;
                                    ATerm n_23;
                                    n_23 = t;
                                    {
                                      ATerm f_96 = NULL;
                                      t = not_null(w_95);
                                      {
                                        ATerm z_3 (ATerm t)
                                        {
                                          t = not_null(w_95);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, z_3);
                                        {
                                          f_96 = t;
                                          if(((e_96 != NULL) && (e_96 != f_96)))
                                            _fail(f_96);
                                          else
                                            e_96 = f_96;
                                        }
                                      }
                                    }
                                    t = n_23;
                                    {
                                      ATerm h_96 = NULL,j_96 = NULL,l_96 = NULL;
                                      ATerm r_23;
                                      r_23 = t;
                                      {
                                        ATerm i_96 = NULL;
                                        t = not_null(w_95);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            i_96 = t;
                                            if(((h_96 != NULL) && (h_96 != i_96)))
                                              _fail(i_96);
                                            else
                                              h_96 = i_96;
                                          }
                                        }
                                      }
                                      t = r_23;
                                      {
                                        ATerm k_96 = NULL;
                                        t = not_null(z_95);
                                        {
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = not_null(e_96);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, a_4);
                                          {
                                            k_96 = t;
                                            if(((j_96 != NULL) && (j_96 != k_96)))
                                              _fail(k_96);
                                            else
                                              j_96 = k_96;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_96), not_null(j_96));
                                          {
                                            t = conc_0(t);
                                            {
                                              l_96 = t;
                                              if(((g_96 != NULL) && (g_96 != l_96)))
                                                _fail(l_96);
                                              else
                                                g_96 = l_96;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_96))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(s_95))));
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
  ATerm s_23;
  s_23 = t;
  {
    ATerm s_96 = NULL;
    ATerm t_96 = NULL;
    t_96 = t;
    if(((s_96 != NULL) && (s_96 != t_96)))
      _fail(t_96);
    else
      s_96 = t_96;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(s_96));
      t = printnl_0(t);
    }
  }
  t = s_23;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm w_23;
  w_23 = t;
  {
    t = error_0(t);
    {
      t = term_g_18;
      t = exit_0(t);
    }
  }
  t = w_23;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL;
  b_97 = t;
  a_97 :
  if(match_cons(b_97, sym__3))
    {
      c_97 = ATgetArgument(b_97, 0);
      d_97 = ATgetArgument(b_97, 1);
      e_97 = ATgetArgument(b_97, 2);
      {
        ATerm k_97 = NULL,o_97 = NULL;
        ATerm z_23;
        z_23 = t;
        {
          ATerm l_97 = NULL;
          t = not_null(c_97);
          {
            t = MsgU_0(t);
            {
              l_97 = t;
              if(((k_97 != NULL) && (k_97 != l_97)))
                _fail(l_97);
              else
                k_97 = l_97;
            }
          }
        }
        t = z_23;
        {
          ATerm p_97 = NULL;
          t = not_null(e_97);
          {
            t = MsgE_0(t);
            {
              p_97 = t;
              if(((o_97 != NULL) && (o_97 != p_97)))
                _fail(p_97);
              else
                o_97 = p_97;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_97)), not_null(k_97));
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
  ATerm y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,e_98 = NULL;
  e_98 = t;
  w_97 :
  if(((ATgetType(e_98) == AT_LIST) && ((ATermList) e_98 != ATempty)))
    {
      a_98 = ATgetFirst((ATermList) e_98);
      b_98 = (ATerm) ATgetNext((ATermList) e_98);
      x_97 :
      if(((ATgetType(b_98) == AT_LIST) && ((ATermList) b_98 != ATempty)))
        {
          y_97 = ATgetFirst((ATermList) b_98);
          z_97 = (ATerm) ATgetNext((ATermList) b_98);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_97)), not_null(y_97)), not_null(a_98))), term_a_24);
        }
      else
        {
          if(((ATermList) b_98 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_24), not_null(a_98)), term_c_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) e_98 == ATempty))
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
  ATerm s_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,a_99 = NULL;
  a_99 = t;
  q_98 :
  if(((ATgetType(a_99) == AT_LIST) && ((ATermList) a_99 != ATempty)))
    {
      w_98 = ATgetFirst((ATermList) a_99);
      x_98 = (ATerm) ATgetNext((ATermList) a_99);
      r_98 :
      if(((ATgetType(x_98) == AT_LIST) && ((ATermList) x_98 != ATempty)))
        {
          s_98 = ATgetFirst((ATermList) x_98);
          v_98 = (ATerm) ATgetNext((ATermList) x_98);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_98)), not_null(s_98)), not_null(w_98))), term_a_24);
        }
      else
        {
          if(((ATermList) x_98 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), not_null(w_98)), term_c_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) a_99 == ATempty))
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
  ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
  o_99 = t;
  n_99 :
  if(match_cons(o_99, sym__3))
    {
      p_99 = ATgetArgument(o_99, 0);
      q_99 = ATgetArgument(o_99, 1);
      r_99 = ATgetArgument(o_99, 2);
      {
        ATerm v_99 = NULL,x_99 = NULL;
        ATerm g_24;
        g_24 = t;
        {
          ATerm w_99 = NULL;
          t = not_null(p_99);
          {
            t = MsgU_0(t);
            {
              w_99 = t;
              if(((v_99 != NULL) && (v_99 != w_99)))
                _fail(w_99);
              else
                v_99 = w_99;
            }
          }
        }
        t = g_24;
        {
          ATerm y_99 = NULL;
          t = not_null(r_99);
          {
            t = MsgE_0(t);
            {
              y_99 = t;
              if(((x_99 != NULL) && (x_99 != y_99)))
                _fail(y_99);
              else
                x_99 = y_99;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_99)), not_null(v_99));
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
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL;
  l_100 = t;
  k_100 :
  if(match_cons(l_100, sym_Overlay_3))
    {
      m_100 = ATgetArgument(l_100, 0);
      n_100 = ATgetArgument(l_100, 1);
      o_100 = ATgetArgument(l_100, 2);
      {
        ATerm s_100 = NULL;
        ATerm t_100 = NULL;
        t = not_null(o_100);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              t_100 = t;
              if(((s_100 != NULL) && (s_100 != t_100)))
                _fail(t_100);
              else
                s_100 = t_100;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_100)), term_q_24), not_null(m_100)), term_p_24);
      }
    }
  else
    {
      if(match_cons(l_100, sym_SDef_3))
        {
          m_100 = ATgetArgument(l_100, 0);
          n_100 = ATgetArgument(l_100, 1);
          o_100 = ATgetArgument(l_100, 2);
          {
            ATerm x_100 = NULL;
            ATerm y_100 = NULL;
            t = not_null(o_100);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  y_100 = t;
                  if(((x_100 != NULL) && (x_100 != y_100)))
                    _fail(y_100);
                  else
                    x_100 = y_100;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(x_100)), term_q_24), not_null(m_100)), term_r_24);
          }
        }
      else
        {
          if(match_cons(l_100, sym_RDef_3))
            {
              m_100 = ATgetArgument(l_100, 0);
              n_100 = ATgetArgument(l_100, 1);
              o_100 = ATgetArgument(l_100, 2);
              {
                ATerm c_101 = NULL;
                ATerm d_101 = NULL;
                t = not_null(o_100);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      d_101 = t;
                      if(((c_101 != NULL) && (c_101 != d_101)))
                        _fail(d_101);
                      else
                        c_101 = d_101;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(c_101)), term_q_24), not_null(m_100)), term_x_24);
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
ATerm _3 (ATerm t, ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm))
{
  ATerm t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL;
  t_101 = t;
  s_101 :
  if(match_cons(t_101, sym__3))
    {
      u_101 = ATgetArgument(t_101, 0);
      v_101 = ATgetArgument(t_101, 1);
      w_101 = ATgetArgument(t_101, 2);
      {
        ATerm b_102 = NULL,d_102 = NULL;
        ATerm c_102 = NULL;
        t = SSLgetAnnotations(not_null(t_101));
        {
          c_102 = t;
          if(((b_102 != NULL) && (b_102 != c_102)))
            _fail(c_102);
          else
            b_102 = c_102;
        }
        {
          t = not_null(u_101);
          {
            ATerm h_102 = NULL;
            t = r_67(t);
            {
              d_102 = t;
              {
                t = not_null(v_101);
                {
                  ATerm j_102 = NULL;
                  t = s_67(t);
                  {
                    h_102 = t;
                    {
                      t = not_null(w_101);
                      {
                        ATerm l_102 = NULL;
                        t = t_67(t);
                        {
                          j_102 = t;
                          {
                            ATerm m_102 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__3, not_null(d_102), not_null(h_102), not_null(j_102)), not_null(b_102));
                            {
                              m_102 = t;
                              if(((l_102 != NULL) && (l_102 != m_102)))
                                _fail(m_102);
                              else
                                l_102 = m_102;
                            }
                            t = not_null(l_102);
                          }
                        }
                      }
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
ATerm Overlay_3 (ATerm t, ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL;
  c_103 = t;
  b_103 :
  if(match_cons(c_103, sym_Overlay_3))
    {
      d_103 = ATgetArgument(c_103, 0);
      e_103 = ATgetArgument(c_103, 1);
      f_103 = ATgetArgument(c_103, 2);
      {
        ATerm o_103 = NULL,q_103 = NULL;
        ATerm p_103 = NULL;
        t = SSLgetAnnotations(not_null(c_103));
        {
          p_103 = t;
          if(((o_103 != NULL) && (o_103 != p_103)))
            _fail(p_103);
          else
            o_103 = p_103;
        }
        {
          t = not_null(d_103);
          {
            ATerm s_103 = NULL;
            t = r_75(t);
            {
              q_103 = t;
              {
                t = not_null(e_103);
                {
                  ATerm u_103 = NULL;
                  t = s_75(t);
                  {
                    s_103 = t;
                    {
                      t = not_null(f_103);
                      {
                        ATerm w_103 = NULL;
                        t = t_75(t);
                        {
                          u_103 = t;
                          {
                            ATerm x_103 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlay_3, not_null(q_103), not_null(s_103), not_null(u_103)), not_null(o_103));
                            {
                              x_103 = t;
                              if(((w_103 != NULL) && (w_103 != x_103)))
                                _fail(x_103);
                              else
                                w_103 = x_103;
                            }
                            t = not_null(w_103);
                          }
                        }
                      }
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
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL;
  w_104 = t;
  p_104 :
  if(match_cons(w_104, sym__2))
    {
      x_104 = ATgetArgument(w_104, 0);
      b_105 = ATgetArgument(w_104, 1);
      q_104 :
      if(match_cons(x_104, sym__3))
        {
          y_104 = ATgetArgument(x_104, 0);
          z_104 = ATgetArgument(x_104, 1);
          a_105 = ATgetArgument(x_104, 2);
          v_104 :
          if(match_cons(b_105, sym__3))
            {
              c_105 = ATgetArgument(b_105, 0);
              d_105 = ATgetArgument(b_105, 1);
              e_105 = ATgetArgument(b_105, 2);
              {
                ATerm l_105 = NULL,n_105 = NULL,p_105 = NULL;
                ATerm y_24;
                y_24 = t;
                {
                  ATerm m_105 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_104), not_null(c_105));
                  {
                    t = union_0(t);
                    {
                      m_105 = t;
                      if(((l_105 != NULL) && (l_105 != m_105)))
                        _fail(m_105);
                      else
                        l_105 = m_105;
                    }
                  }
                }
                t = y_24;
                {
                  ATerm z_24;
                  z_24 = t;
                  {
                    ATerm o_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_104), not_null(d_105));
                    {
                      t = union_0(t);
                      {
                        o_105 = t;
                        if(((n_105 != NULL) && (n_105 != o_105)))
                          _fail(o_105);
                        else
                          n_105 = o_105;
                      }
                    }
                  }
                  t = z_24;
                  {
                    ATerm q_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_105), not_null(e_105));
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
                    t = (ATerm) ATmakeAppl(sym__3, not_null(l_105), not_null(n_105), not_null(p_105));
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
  ATerm c_106 = NULL;
  ATerm e_106 = NULL,f_106 = NULL,g_106 = NULL;
  c_106 = t;
  {
    ATerm h_106 = NULL;
    ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL;
    t = not_null(c_106);
    {
      h_106 = t;
      {
        t = SSL_explode_term(not_null(h_106));
        {
          j_106 = t;
          y_105 :
          if(match_cons(j_106, sym__2))
            {
              k_106 = ATgetArgument(j_106, 0);
              l_106 = ATgetArgument(j_106, 1);
              z_105 :
              if(match_string(k_106, ""))
                {
                  a_106 :
                  if(((ATgetType(l_106) == AT_LIST) && ((ATermList) l_106 != ATempty)))
                    {
                      m_106 = ATgetFirst((ATermList) l_106);
                      n_106 = (ATerm) ATgetNext((ATermList) l_106);
                      b_106 :
                      if(((ATgetType(n_106) == AT_LIST) && ((ATermList) n_106 != ATempty)))
                        {
                          o_106 = ATgetFirst((ATermList) n_106);
                          p_106 = (ATerm) ATgetNext((ATermList) n_106);
                          {
                            if(((e_106 != NULL) && (e_106 != m_106)))
                              _fail(m_106);
                            else
                              e_106 = m_106;
                            {
                              if(((g_106 != NULL) && (g_106 != o_106)))
                                _fail(o_106);
                              else
                                g_106 = o_106;
                              if(((f_106 != NULL) && (f_106 != p_106)))
                                _fail(p_106);
                              else
                                f_106 = p_106;
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
    t = not_null(g_106);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm u_106 = NULL;
  u_106 = t;
  t = SSL_explode_term(not_null(u_106));
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
        t = (ATerm) ATinsert(ATempty, term_a_25);
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
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL,n_107 = NULL;
  f_107 = t;
  c_107 :
  if(match_cons(f_107, sym__2))
    {
      g_107 = ATgetArgument(f_107, 0);
      k_107 = ATgetArgument(f_107, 1);
      d_107 :
      if(match_cons(g_107, sym__3))
        {
          h_107 = ATgetArgument(g_107, 0);
          i_107 = ATgetArgument(g_107, 1);
          j_107 = ATgetArgument(g_107, 2);
          e_107 :
          if(match_cons(k_107, sym__3))
            {
              l_107 = ATgetArgument(k_107, 0);
              m_107 = ATgetArgument(k_107, 1);
              n_107 = ATgetArgument(k_107, 2);
              {
                ATerm u_107 = NULL,y_107 = NULL,a_108 = NULL;
                ATerm b_25;
                b_25 = t;
                {
                  ATerm v_107 = NULL,x_107 = NULL;
                  ATerm w_107 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_107), not_null(i_107));
                  {
                    t = diff_0(t);
                    {
                      w_107 = t;
                      if(((v_107 != NULL) && (v_107 != w_107)))
                        _fail(w_107);
                      else
                        v_107 = w_107;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_107), not_null(v_107));
                    {
                      t = union_0(t);
                      {
                        x_107 = t;
                        if(((u_107 != NULL) && (u_107 != x_107)))
                          _fail(x_107);
                        else
                          u_107 = x_107;
                      }
                    }
                  }
                }
                t = b_25;
                {
                  ATerm c_25;
                  c_25 = t;
                  {
                    ATerm z_107 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_107), not_null(m_107));
                    {
                      t = union_0(t);
                      {
                        z_107 = t;
                        if(((y_107 != NULL) && (y_107 != z_107)))
                          _fail(z_107);
                        else
                          y_107 = z_107;
                      }
                    }
                  }
                  t = c_25;
                  {
                    ATerm b_108 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_107), not_null(n_107));
                    {
                      t = union_0(t);
                      {
                        b_108 = t;
                        if(((a_108 != NULL) && (a_108 != b_108)))
                          _fail(b_108);
                        else
                          a_108 = b_108;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(u_107), not_null(y_107), not_null(a_108));
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
ATerm cart_1 (ATerm t, ATerm i_95 (ATerm))
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL;
  l_108 = t;
  k_108 :
  if(match_cons(l_108, sym__2))
    {
      m_108 = ATgetArgument(l_108, 0);
      n_108 = ATgetArgument(l_108, 1);
      {
        t = not_null(m_108);
        {
          ATerm d_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm e_4 (ATerm t)
          {
            ATerm q_108 = NULL;
            q_108 = t;
            {
              t = not_null(n_108);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm s_108 = NULL;
                  s_108 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_108), not_null(s_108));
                    t = i_95(t);
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
    t = (ATerm) ATinsert(ATempty, term_a_25);
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
ATerm JoinScope_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
  e_109 = t;
  d_109 :
  if(match_cons(e_109, sym__3))
    {
      f_109 = ATgetArgument(e_109, 0);
      g_109 = ATgetArgument(e_109, 1);
      h_109 = ATgetArgument(e_109, 2);
      {
        ATerm l_109 = NULL,p_109 = NULL;
        ATerm d_25;
        d_25 = t;
        {
          ATerm m_109 = NULL,o_109 = NULL;
          ATerm n_109 = NULL;
          t = term_z_18;
          {
            t = g_79(t);
            {
              n_109 = t;
              if(((m_109 != NULL) && (m_109 != n_109)))
                _fail(n_109);
              else
                m_109 = n_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_109), not_null(m_109));
            {
              t = diff_0(t);
              {
                o_109 = t;
                if(((l_109 != NULL) && (l_109 != o_109)))
                  _fail(o_109);
                else
                  l_109 = o_109;
              }
            }
          }
        }
        t = d_25;
        {
          ATerm q_109 = NULL,u_109 = NULL;
          ATerm r_109 = NULL,t_109 = NULL;
          ATerm s_109 = NULL;
          t = term_z_18;
          {
            t = g_79(t);
            {
              s_109 = t;
              if(((r_109 != NULL) && (r_109 != s_109)))
                _fail(s_109);
              else
                r_109 = s_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_109), not_null(r_109));
            {
              t = isect_0(t);
              {
                t_109 = t;
                if(((q_109 != NULL) && (q_109 != t_109)))
                  _fail(t_109);
                else
                  q_109 = t_109;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_109), not_null(h_109));
            {
              t = conc_0(t);
              {
                u_109 = t;
                if(((p_109 != NULL) && (p_109 != u_109)))
                  _fail(u_109);
                else
                  p_109 = u_109;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(f_109), not_null(l_109), not_null(p_109));
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
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL;
  q_110 = t;
  n_110 :
  if(match_cons(q_110, sym_Overlay_3))
    {
      r_110 = ATgetArgument(q_110, 0);
      p_110 = ATgetArgument(q_110, 1);
      o_110 = ATgetArgument(q_110, 2);
      {
        ATerm v_110 = NULL;
        ATerm w_110 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_110)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(p_110), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            w_110 = t;
            if(((v_110 != NULL) && (v_110 != w_110)))
              _fail(w_110);
            else
              v_110 = w_110;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(r_110), not_null(p_110), not_null(v_110));
      }
    }
  else
    {
      if(match_cons(q_110, sym_Scope_2))
        {
          r_110 = ATgetArgument(q_110, 0);
          p_110 = ATgetArgument(q_110, 1);
          {
            t = not_null(p_110);
            {
              ATerm i_4 (ATerm t)
              {
                ATerm j_4 (ATerm t)
                {
                  t = not_null(r_110);
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
          if(match_cons(q_110, sym_Cong_2))
            {
              r_110 = ATgetArgument(q_110, 0);
              p_110 = ATgetArgument(q_110, 1);
              {
                t = not_null(p_110);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(q_110, sym_BAM_3))
                {
                  r_110 = ATgetArgument(q_110, 0);
                  p_110 = ATgetArgument(q_110, 1);
                  o_110 = ATgetArgument(q_110, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(o_110)), not_null(r_110)), not_null(p_110));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(q_110, sym_BA_2))
                    {
                      r_110 = ATgetArgument(q_110, 0);
                      p_110 = ATgetArgument(q_110, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_110)), not_null(p_110));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(q_110, sym_AM_2))
                        {
                          r_110 = ATgetArgument(q_110, 0);
                          p_110 = ATgetArgument(q_110, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_110)), not_null(r_110));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(q_110, sym_MA_2))
                            {
                              r_110 = ATgetArgument(q_110, 0);
                              p_110 = ATgetArgument(q_110, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_110)), not_null(r_110));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(q_110, sym_StratRule_3))
                                {
                                  r_110 = ATgetArgument(q_110, 0);
                                  p_110 = ATgetArgument(q_110, 1);
                                  o_110 = ATgetArgument(q_110, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_110)), not_null(o_110)), not_null(r_110));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(q_110, sym_Rule_3))
                                    {
                                      r_110 = ATgetArgument(q_110, 0);
                                      p_110 = ATgetArgument(q_110, 1);
                                      o_110 = ATgetArgument(q_110, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_110)), not_null(o_110)), not_null(r_110));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(q_110, sym_Seq_2))
                                        {
                                          r_110 = ATgetArgument(q_110, 0);
                                          p_110 = ATgetArgument(q_110, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_110)), not_null(r_110));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(q_110, sym_Seqs_1))
                                            {
                                              r_110 = ATgetArgument(q_110, 0);
                                              {
                                                t = not_null(r_110);
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
ATerm Cong_2 (ATerm t, ATerm y_77 (ATerm), ATerm z_77 (ATerm))
{
  ATerm l_112 = NULL,m_112 = NULL,n_112 = NULL;
  l_112 = t;
  k_112 :
  if(match_cons(l_112, sym_Cong_2))
    {
      m_112 = ATgetArgument(l_112, 0);
      n_112 = ATgetArgument(l_112, 1);
      {
        ATerm r_112 = NULL,t_112 = NULL;
        ATerm s_112 = NULL;
        t = SSLgetAnnotations(not_null(l_112));
        {
          s_112 = t;
          if(((r_112 != NULL) && (r_112 != s_112)))
            _fail(s_112);
          else
            r_112 = s_112;
        }
        {
          t = not_null(m_112);
          {
            ATerm v_112 = NULL;
            t = y_77(t);
            {
              t_112 = t;
              {
                t = not_null(n_112);
                {
                  ATerm x_112 = NULL;
                  t = z_77(t);
                  {
                    v_112 = t;
                    {
                      ATerm y_112 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(t_112), not_null(v_112)), not_null(r_112));
                      {
                        y_112 = t;
                        if(((x_112 != NULL) && (x_112 != y_112)))
                          _fail(y_112);
                        else
                          x_112 = y_112;
                      }
                      t = not_null(x_112);
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
  ATerm f_113 = NULL;
  ATerm g_113 = NULL;
  t = tvars_0(t);
  {
    g_113 = t;
    if(((f_113 != NULL) && (f_113 != g_113)))
      _fail(g_113);
    else
      f_113 = g_113;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(f_113), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
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
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(j_113), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm c_75 (ATerm), ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL;
  t_113 = t;
  s_113 :
  if(match_cons(t_113, sym_Rule_3))
    {
      u_113 = ATgetArgument(t_113, 0);
      v_113 = ATgetArgument(t_113, 1);
      w_113 = ATgetArgument(t_113, 2);
      {
        ATerm b_114 = NULL,d_114 = NULL;
        ATerm c_114 = NULL;
        t = SSLgetAnnotations(not_null(t_113));
        {
          c_114 = t;
          if(((b_114 != NULL) && (b_114 != c_114)))
            _fail(c_114);
          else
            b_114 = c_114;
        }
        {
          t = not_null(u_113);
          {
            ATerm f_114 = NULL;
            t = c_75(t);
            {
              d_114 = t;
              {
                t = not_null(v_113);
                {
                  ATerm h_114 = NULL;
                  t = d_75(t);
                  {
                    f_114 = t;
                    {
                      t = not_null(w_113);
                      {
                        ATerm j_114 = NULL;
                        t = e_75(t);
                        {
                          h_114 = t;
                          {
                            ATerm k_114 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(d_114), not_null(f_114), not_null(h_114)), not_null(b_114));
                            {
                              k_114 = t;
                              if(((j_114 != NULL) && (j_114 != k_114)))
                                _fail(k_114);
                              else
                                j_114 = k_114;
                            }
                            t = not_null(j_114);
                          }
                        }
                      }
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
ATerm BAM_3 (ATerm t, ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm i_74 (ATerm))
{
  ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL;
  y_114 = t;
  x_114 :
  if(match_cons(y_114, sym_BAM_3))
    {
      z_114 = ATgetArgument(y_114, 0);
      a_115 = ATgetArgument(y_114, 1);
      b_115 = ATgetArgument(y_114, 2);
      {
        ATerm g_115 = NULL,i_115 = NULL;
        ATerm h_115 = NULL;
        t = SSLgetAnnotations(not_null(y_114));
        {
          h_115 = t;
          if(((g_115 != NULL) && (g_115 != h_115)))
            _fail(h_115);
          else
            g_115 = h_115;
        }
        {
          t = not_null(z_114);
          {
            ATerm k_115 = NULL;
            t = g_74(t);
            {
              i_115 = t;
              {
                t = not_null(a_115);
                {
                  ATerm m_115 = NULL;
                  t = h_74(t);
                  {
                    k_115 = t;
                    {
                      t = not_null(b_115);
                      {
                        ATerm o_115 = NULL;
                        t = i_74(t);
                        {
                          m_115 = t;
                          {
                            ATerm p_115 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BAM_3, not_null(i_115), not_null(k_115), not_null(m_115)), not_null(g_115));
                            {
                              p_115 = t;
                              if(((o_115 != NULL) && (o_115 != p_115)))
                                _fail(p_115);
                              else
                                o_115 = p_115;
                            }
                            t = not_null(o_115);
                          }
                        }
                      }
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
ATerm BA_2 (ATerm t, ATerm e_74 (ATerm), ATerm f_74 (ATerm))
{
  ATerm c_116 = NULL,d_116 = NULL,e_116 = NULL;
  c_116 = t;
  b_116 :
  if(match_cons(c_116, sym_BA_2))
    {
      d_116 = ATgetArgument(c_116, 0);
      e_116 = ATgetArgument(c_116, 1);
      {
        ATerm i_116 = NULL,k_116 = NULL;
        ATerm j_116 = NULL;
        t = SSLgetAnnotations(not_null(c_116));
        {
          j_116 = t;
          if(((i_116 != NULL) && (i_116 != j_116)))
            _fail(j_116);
          else
            i_116 = j_116;
        }
        {
          t = not_null(d_116);
          {
            ATerm m_116 = NULL;
            t = e_74(t);
            {
              k_116 = t;
              {
                t = not_null(e_116);
                {
                  ATerm o_116 = NULL;
                  t = f_74(t);
                  {
                    m_116 = t;
                    {
                      ATerm p_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BA_2, not_null(k_116), not_null(m_116)), not_null(i_116));
                      {
                        p_116 = t;
                        if(((o_116 != NULL) && (o_116 != p_116)))
                          _fail(p_116);
                        else
                          o_116 = p_116;
                      }
                      t = not_null(o_116);
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
ATerm AM_2 (ATerm t, ATerm c_74 (ATerm), ATerm d_74 (ATerm))
{
  ATerm b_117 = NULL,c_117 = NULL,d_117 = NULL;
  b_117 = t;
  a_117 :
  if(match_cons(b_117, sym_AM_2))
    {
      c_117 = ATgetArgument(b_117, 0);
      d_117 = ATgetArgument(b_117, 1);
      {
        ATerm h_117 = NULL,j_117 = NULL;
        ATerm i_117 = NULL;
        t = SSLgetAnnotations(not_null(b_117));
        {
          i_117 = t;
          if(((h_117 != NULL) && (h_117 != i_117)))
            _fail(i_117);
          else
            h_117 = i_117;
        }
        {
          t = not_null(c_117);
          {
            ATerm l_117 = NULL;
            t = c_74(t);
            {
              j_117 = t;
              {
                t = not_null(d_117);
                {
                  ATerm n_117 = NULL;
                  t = d_74(t);
                  {
                    l_117 = t;
                    {
                      ATerm o_117 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AM_2, not_null(j_117), not_null(l_117)), not_null(h_117));
                      {
                        o_117 = t;
                        if(((n_117 != NULL) && (n_117 != o_117)))
                          _fail(o_117);
                        else
                          n_117 = o_117;
                      }
                      t = not_null(n_117);
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
ATerm MA_2 (ATerm t, ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL;
  a_118 = t;
  z_117 :
  if(match_cons(a_118, sym_MA_2))
    {
      b_118 = ATgetArgument(a_118, 0);
      c_118 = ATgetArgument(a_118, 1);
      {
        ATerm g_118 = NULL,i_118 = NULL;
        ATerm h_118 = NULL;
        t = SSLgetAnnotations(not_null(a_118));
        {
          h_118 = t;
          if(((g_118 != NULL) && (g_118 != h_118)))
            _fail(h_118);
          else
            g_118 = h_118;
        }
        {
          t = not_null(b_118);
          {
            ATerm k_118 = NULL;
            t = a_74(t);
            {
              i_118 = t;
              {
                t = not_null(c_118);
                {
                  ATerm m_118 = NULL;
                  t = b_74(t);
                  {
                    k_118 = t;
                    {
                      ATerm n_118 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MA_2, not_null(i_118), not_null(k_118)), not_null(g_118));
                      {
                        n_118 = t;
                        if(((m_118 != NULL) && (m_118 != n_118)))
                          _fail(n_118);
                        else
                          m_118 = n_118;
                      }
                      t = not_null(m_118);
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
ATerm Match_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm y_118 = NULL,z_118 = NULL;
  y_118 = t;
  x_118 :
  if(match_cons(y_118, sym_Match_1))
    {
      z_118 = ATgetArgument(y_118, 0);
      {
        ATerm c_119 = NULL,e_119 = NULL;
        ATerm d_119 = NULL;
        t = SSLgetAnnotations(not_null(y_118));
        {
          d_119 = t;
          if(((c_119 != NULL) && (c_119 != d_119)))
            _fail(d_119);
          else
            c_119 = d_119;
        }
        {
          t = not_null(z_118);
          {
            ATerm g_119 = NULL;
            t = g_78(t);
            {
              e_119 = t;
              {
                ATerm h_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(e_119)), not_null(c_119));
                {
                  h_119 = t;
                  if(((g_119 != NULL) && (g_119 != h_119)))
                    _fail(h_119);
                  else
                    g_119 = h_119;
                }
                t = not_null(g_119);
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
ATerm Build_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm r_119 = NULL,s_119 = NULL;
  r_119 = t;
  q_119 :
  if(match_cons(r_119, sym_Build_1))
    {
      s_119 = ATgetArgument(r_119, 0);
      {
        ATerm v_119 = NULL,x_119 = NULL;
        ATerm w_119 = NULL;
        t = SSLgetAnnotations(not_null(r_119));
        {
          w_119 = t;
          if(((v_119 != NULL) && (v_119 != w_119)))
            _fail(w_119);
          else
            v_119 = w_119;
        }
        {
          t = not_null(s_119);
          {
            ATerm z_119 = NULL;
            t = h_78(t);
            {
              x_119 = t;
              {
                ATerm a_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_119)), not_null(v_119));
                {
                  a_120 = t;
                  if(((z_119 != NULL) && (z_119 != a_120)))
                    _fail(a_120);
                  else
                    z_119 = a_120;
                }
                t = not_null(z_119);
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
ATerm constructs_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm g_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(l_25);
          }
        else
          {
            t = g_25;
            {
              ATerm m_25 = t;
              int n_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, f_79);
                  LocalPopChoice(n_25);
                }
              else
                {
                  t = m_25;
                  {
                    ATerm r_25 = t;
                    int t_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, f_79, def_term_0);
                        LocalPopChoice(t_25);
                      }
                    else
                      {
                        t = r_25;
                        {
                          ATerm w_25 = t;
                          int x_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, f_79, use_term_0);
                              LocalPopChoice(x_25);
                            }
                          else
                            {
                              t = w_25;
                              {
                                ATerm y_25 = t;
                                int z_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, f_79, use_term_0, def_term_0);
                                    LocalPopChoice(z_25);
                                  }
                                else
                                  {
                                    t = y_25;
                                    {
                                      ATerm a_26 = t;
                                      int b_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, f_79);
                                          LocalPopChoice(b_26);
                                        }
                                      else
                                        {
                                          t = a_26;
                                          {
                                            ATerm c_26 = t;
                                            int d_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Rule_3(t, def_term_0, use_term_0, f_79);
                                                LocalPopChoice(d_26);
                                              }
                                            else
                                              {
                                                t = c_26;
                                                {
                                                  ATerm e_26 = t;
                                                  int f_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(f_26);
                                                    }
                                                  else
                                                    {
                                                      t = e_26;
                                                      {
                                                        ATerm k_4 (ATerm t)
                                                        {
                                                          t = map_1(t, f_79);
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
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      t = _all(t, use_def_0);
    }
  {
    ATerm m_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = m_26;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm), ATerm m_75 (ATerm))
{
  ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL;
  n_120 = t;
  m_120 :
  if(match_cons(n_120, sym_RDef_3))
    {
      o_120 = ATgetArgument(n_120, 0);
      p_120 = ATgetArgument(n_120, 1);
      q_120 = ATgetArgument(n_120, 2);
      {
        ATerm v_120 = NULL,x_120 = NULL;
        ATerm w_120 = NULL;
        t = SSLgetAnnotations(not_null(n_120));
        {
          w_120 = t;
          if(((v_120 != NULL) && (v_120 != w_120)))
            _fail(w_120);
          else
            v_120 = w_120;
        }
        {
          t = not_null(o_120);
          {
            ATerm z_120 = NULL;
            t = k_75(t);
            {
              x_120 = t;
              {
                t = not_null(p_120);
                {
                  ATerm b_121 = NULL;
                  t = l_75(t);
                  {
                    z_120 = t;
                    {
                      t = not_null(q_120);
                      {
                        ATerm d_121 = NULL;
                        t = m_75(t);
                        {
                          b_121 = t;
                          {
                            ATerm e_121 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(x_120), not_null(z_120), not_null(b_121)), not_null(v_120));
                            {
                              e_121 = t;
                              if(((d_121 != NULL) && (d_121 != e_121)))
                                _fail(e_121);
                              else
                                d_121 = e_121;
                            }
                            t = not_null(d_121);
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm k_77 (ATerm), ATerm l_77 (ATerm), ATerm m_77 (ATerm))
{
  ATerm s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL;
  s_121 = t;
  r_121 :
  if(match_cons(s_121, sym_SDef_3))
    {
      t_121 = ATgetArgument(s_121, 0);
      u_121 = ATgetArgument(s_121, 1);
      v_121 = ATgetArgument(s_121, 2);
      {
        ATerm a_122 = NULL,c_122 = NULL;
        ATerm b_122 = NULL;
        t = SSLgetAnnotations(not_null(s_121));
        {
          b_122 = t;
          if(((a_122 != NULL) && (a_122 != b_122)))
            _fail(b_122);
          else
            a_122 = b_122;
        }
        {
          t = not_null(t_121);
          {
            ATerm e_122 = NULL;
            t = k_77(t);
            {
              c_122 = t;
              {
                t = not_null(u_121);
                {
                  ATerm g_122 = NULL;
                  t = l_77(t);
                  {
                    e_122 = t;
                    {
                      t = not_null(v_121);
                      {
                        ATerm i_122 = NULL;
                        t = m_77(t);
                        {
                          g_122 = t;
                          {
                            ATerm j_122 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(c_122), not_null(e_122), not_null(g_122)), not_null(a_122));
                            {
                              j_122 = t;
                              if(((i_122 != NULL) && (i_122 != j_122)))
                                _fail(j_122);
                              else
                                i_122 = j_122;
                            }
                            t = not_null(i_122);
                          }
                        }
                      }
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
  ATerm s_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_4 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm w_26 = t;
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
              t = w_26;
            }
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, l_4);
      t = err_msg_0(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = s_26;
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm z_26 = t;
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
                    t = z_26;
                  }
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, n_4);
            t = err_msg_0(t);
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm a_27 = t;
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
                      t = a_27;
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
  ATerm r_122 = NULL;
  t = filter_1(t, check_0);
  {
    r_122 = t;
    q_122 :
    if(((ATermList) r_122 == ATempty))
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
ATerm Overlays_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm x_122 = NULL,y_122 = NULL;
  x_122 = t;
  w_122 :
  if(match_cons(x_122, sym_Overlays_1))
    {
      y_122 = ATgetArgument(x_122, 0);
      {
        ATerm b_123 = NULL,d_123 = NULL;
        ATerm c_123 = NULL;
        t = SSLgetAnnotations(not_null(x_122));
        {
          c_123 = t;
          if(((b_123 != NULL) && (b_123 != c_123)))
            _fail(c_123);
          else
            b_123 = c_123;
        }
        {
          t = not_null(y_122);
          {
            ATerm f_123 = NULL;
            t = v_75(t);
            {
              d_123 = t;
              {
                ATerm g_123 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(d_123)), not_null(b_123));
                {
                  g_123 = t;
                  if(((f_123 != NULL) && (f_123 != g_123)))
                    _fail(g_123);
                  else
                    f_123 = g_123;
                }
                t = not_null(f_123);
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
ATerm Signature_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm q_123 = NULL,r_123 = NULL;
  q_123 = t;
  p_123 :
  if(match_cons(q_123, sym_Signature_1))
    {
      r_123 = ATgetArgument(q_123, 0);
      {
        ATerm u_123 = NULL,w_123 = NULL;
        ATerm v_123 = NULL;
        t = SSLgetAnnotations(not_null(q_123));
        {
          v_123 = t;
          if(((u_123 != NULL) && (u_123 != v_123)))
            _fail(v_123);
          else
            u_123 = v_123;
        }
        {
          t = not_null(r_123);
          {
            ATerm y_123 = NULL;
            t = u_75(t);
            {
              w_123 = t;
              {
                ATerm z_123 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(w_123)), not_null(u_123));
                {
                  z_123 = t;
                  if(((y_123 != NULL) && (y_123 != z_123)))
                    _fail(z_123);
                  else
                    y_123 = z_123;
                }
                t = not_null(y_123);
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
  ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  i_124 = t;
  f_124 :
  if(match_cons(i_124, sym__2))
    {
      j_124 = ATgetArgument(i_124, 0);
      m_124 = ATgetArgument(i_124, 1);
      g_124 :
      if(match_cons(j_124, sym__2))
        {
          k_124 = ATgetArgument(j_124, 0);
          l_124 = ATgetArgument(j_124, 1);
          h_124 :
          if(match_cons(m_124, sym__2))
            {
              n_124 = ATgetArgument(m_124, 0);
              o_124 = ATgetArgument(m_124, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_124)), not_null(k_124)), (ATerm) ATinsert(CheckATermList(not_null(o_124)), not_null(l_124)));
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
  ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL;
  w_124 = t;
  v_124 :
  if(((ATgetType(w_124) == AT_LIST) && ((ATermList) w_124 != ATempty)))
    {
      x_124 = ATgetFirst((ATermList) w_124);
      y_124 = (ATerm) ATgetNext((ATermList) w_124);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_124), not_null(y_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm e_125 = NULL;
  e_125 = t;
  d_125 :
  if(((ATermList) e_125 == ATempty))
    {
      t = term_b_27;
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
    ATerm h_125 = NULL;
    h_125 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_125));
    return(t);
  }
  t = map_1(t, x_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL;
  m_125 = t;
  l_125 :
  if(((ATgetType(m_125) == AT_LIST) && ((ATermList) m_125 != ATempty)))
    {
      n_125 = ATgetFirst((ATermList) m_125);
      o_125 = (ATerm) ATgetNext((ATermList) m_125);
      t = not_null(o_125);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL;
  u_125 = t;
  t_125 :
  if(match_cons(u_125, sym__2))
    {
      v_125 = ATgetArgument(u_125, 0);
      w_125 = ATgetArgument(u_125, 1);
      {
        t = not_null(v_125);
        {
          ATerm a_126 (ATerm t)
          {
            ATerm c_27 = t;
            int d_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(d_27);
              }
            else
              {
                t = c_27;
                {
                  ATerm e_27 = t;
                  int f_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_27;
                      g_27 = t;
                      {
                        ATerm y_4 (ATerm t)
                        {
                          t = not_null(w_125);
                          return(t);
                        }
                        t = HdMember_1(t, y_4);
                      }
                      t = g_27;
                      t = Cons_2(t, _id, a_126);
                      LocalPopChoice(f_27);
                    }
                  else
                    {
                      t = e_27;
                      {
                        t = Tl_0(t);
                        t = a_126(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = a_126(t);
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
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL;
  d_126 = t;
  c_126 :
  if(match_cons(d_126, sym__2))
    {
      e_126 = ATgetArgument(d_126, 0);
      f_126 = ATgetArgument(d_126, 1);
      if(((e_126 != NULL) && (e_126 != f_126)))
        _fail(f_126);
      else
        e_126 = f_126;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL,j_127 = NULL,k_127 = NULL;
  ATerm s_128 (ATerm t)
  {
    ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL,e_128 = NULL;
    ATerm h_27;
    h_27 = t;
    {
      ATerm t_127 = NULL,v_127 = NULL,x_127 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_127), term_l_27);
      {
        ATerm m_27 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_27;
          }
        {
          ATerm n_27;
          n_27 = t;
          {
            ATerm u_127 = NULL;
            t = term_z_18;
            {
              t = q_0(t);
              {
                u_127 = t;
                if(((t_127 != NULL) && (t_127 != u_127)))
                  _fail(u_127);
                else
                  t_127 = u_127;
              }
            }
          }
          t = n_27;
          {
            ATerm w_127 = NULL;
            t = not_null(g_127);
            {
              t = tvars_0(t);
              {
                w_127 = t;
                if(((v_127 != NULL) && (v_127 != w_127)))
                  _fail(w_127);
                else
                  v_127 = w_127;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_127), not_null(v_127));
              {
                t = isect_0(t);
                {
                  ATerm y_127 = NULL,a_128 = NULL,c_128 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    x_127 = t;
                    {
                      if(((q_127 != NULL) && (q_127 != x_127)))
                        _fail(x_127);
                      else
                        q_127 = x_127;
                      {
                        ATerm o_27;
                        o_27 = t;
                        {
                          ATerm z_127 = NULL;
                          t = term_z_18;
                          {
                            t = q_0(t);
                            {
                              z_127 = t;
                              if(((y_127 != NULL) && (y_127 != z_127)))
                                _fail(z_127);
                              else
                                y_127 = z_127;
                            }
                          }
                        }
                        t = o_27;
                        {
                          ATerm b_128 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_127), not_null(k_127));
                          {
                            t = tvars_0(t);
                            {
                              b_128 = t;
                              if(((a_128 != NULL) && (a_128 != b_128)))
                                _fail(b_128);
                              else
                                a_128 = b_128;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_127), not_null(a_128));
                            {
                              t = isect_0(t);
                              {
                                ATerm d_128 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  c_128 = t;
                                  {
                                    if(((r_127 != NULL) && (r_127 != c_128)))
                                      _fail(c_128);
                                    else
                                      r_127 = c_128;
                                    {
                                      t = new_0(t);
                                      {
                                        d_128 = t;
                                        if(((s_127 != NULL) && (s_127 != d_128)))
                                          _fail(d_128);
                                        else
                                          s_127 = d_128;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = h_27;
    {
      ATerm f_128 = NULL;
      t = not_null(d_127);
      {
        t = r_0(t);
        {
          f_128 = t;
          if(((e_128 != NULL) && (e_128 != f_128)))
            _fail(f_128);
          else
            e_128 = f_128;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(e_128), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_q_27, (ATerm) ATinsert(CheckATermList(not_null(r_127)), (ATerm) ATmakeAppl(sym_Str_1, not_null(s_127))))), (ATerm) ATmakeAppl(sym_Op_2, term_p_27, not_null(q_127)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(d_127), not_null(e_127), (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_127), not_null(h_127), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_s_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_127))))), (ATerm)ATmakeAppl(sym_Op_2, term_p_27, not_null(q_127)), (ATerm) ATmakeAppl(sym_Op_2, term_q_27, (ATerm) ATinsert(CheckATermList(not_null(r_127)), (ATerm) ATmakeAppl(sym_Str_1, not_null(s_127))))), not_null(k_127)))));
    }
    return(t);
  }
  ATerm t_128 (ATerm t)
  {
    ATerm k_128 = NULL,q_128 = NULL;
    ATerm t_27;
    t_27 = t;
    {
      ATerm l_128 = NULL,n_128 = NULL,p_128 = NULL;
      ATerm u_27;
      u_27 = t;
      {
        ATerm m_128 = NULL;
        t = term_z_18;
        {
          t = q_0(t);
          {
            m_128 = t;
            if(((l_128 != NULL) && (l_128 != m_128)))
              _fail(m_128);
            else
              l_128 = m_128;
          }
        }
      }
      t = u_27;
      {
        ATerm o_128 = NULL;
        t = not_null(g_127);
        {
          t = tvars_0(t);
          {
            o_128 = t;
            if(((n_128 != NULL) && (n_128 != o_128)))
              _fail(o_128);
            else
              n_128 = o_128;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_128), not_null(n_128));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                p_128 = t;
                if(((k_128 != NULL) && (k_128 != p_128)))
                  _fail(p_128);
                else
                  k_128 = p_128;
              }
            }
          }
        }
      }
    }
    t = t_27;
    {
      ATerm r_128 = NULL;
      t = not_null(d_127);
      {
        t = r_0(t);
        {
          r_128 = t;
          if(((q_128 != NULL) && (q_128 != r_128)))
            _fail(r_128);
          else
            q_128 = r_128;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(q_128), (ATerm) ATmakeAppl(sym_Op_2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, term_l_27), (ATerm) ATmakeAppl(sym_Op_2, term_p_27, not_null(k_128)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(d_127), not_null(e_127), (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_127), term_v_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_s_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(d_127))))), (ATerm)ATmakeAppl(sym_Op_2, term_p_27, not_null(k_128)), term_l_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_127), term_w_13)))));
    }
    return(t);
  }
  c_127 = t;
  w_126 :
  if(match_cons(c_127, sym_RDef_3))
    {
      d_127 = ATgetArgument(c_127, 0);
      e_127 = ATgetArgument(c_127, 1);
      f_127 = ATgetArgument(c_127, 2);
      x_126 :
      if(match_cons(f_127, sym_Rule_3))
        {
          g_127 = ATgetArgument(f_127, 0);
          h_127 = ATgetArgument(f_127, 1);
          k_127 = ATgetArgument(f_127, 2);
          y_126 :
          if(match_cons(h_127, sym_Op_2))
            {
              i_127 = ATgetArgument(h_127, 0);
              j_127 = ATgetArgument(h_127, 1);
              z_126 :
              if(((ATermList) j_127 == ATempty))
                {
                  a_127 :
                  if(match_string(i_127, "Undefined"))
                    {
                      ATerm w_27 = t;
                      int x_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_128(t);
                          LocalPopChoice(x_27);
                        }
                      else
                        {
                          t = w_27;
                          t = t_128(t);
                        }
                    }
                  else
                    {
                      t = s_128(t);
                    }
                }
              else
                {
                  b_127 :
                  t = s_128(t);
                }
            }
          else
            {
              t = s_128(t);
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
  ATerm m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL;
  m_129 = t;
  k_129 :
  if(match_cons(m_129, sym__2))
    {
      n_129 = ATgetArgument(m_129, 0);
      p_129 = ATgetArgument(m_129, 1);
      l_129 :
      if(match_cons(n_129, sym_OverrideDynamicRules_1))
        {
          o_129 = ATgetArgument(n_129, 0);
          {
            t = not_null(o_129);
            {
              ATerm z_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  t = not_null(p_129);
                  return(t);
                }
                ATerm b_5 (ATerm t)
                {
                  ATerm s_129 = NULL;
                  s_129 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_129)))));
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
          if(match_cons(n_129, sym_DynamicRules_1))
            {
              o_129 = ATgetArgument(n_129, 0);
              {
                t = not_null(o_129);
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm d_5 (ATerm t)
                    {
                      t = not_null(p_129);
                      return(t);
                    }
                    ATerm e_5 (ATerm t)
                    {
                      ATerm w_129 = NULL;
                      w_129 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(w_129)))));
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
ATerm dist_scope_1 (ATerm t, ATerm u_104 (ATerm))
{
  ATerm h_130 = NULL,i_130 = NULL,j_130 = NULL,k_130 = NULL,l_130 = NULL;
  h_130 = t;
  f_130 :
  if(match_cons(h_130, sym__2))
    {
      i_130 = ATgetArgument(h_130, 0);
      l_130 = ATgetArgument(h_130, 1);
      g_130 :
      if(match_cons(i_130, sym_Scope_2))
        {
          j_130 = ATgetArgument(i_130, 0);
          k_130 = ATgetArgument(i_130, 1);
          {
            ATerm p_130 = NULL;
            ATerm q_130 = NULL,s_130 = NULL;
            ATerm r_130 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_130), not_null(l_130));
            {
              t = union_0(t);
              {
                r_130 = t;
                if(((q_130 != NULL) && (q_130 != r_130)))
                  _fail(r_130);
                else
                  q_130 = r_130;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_130), not_null(q_130));
              {
                t = u_104(t);
                {
                  s_130 = t;
                  if(((p_130 != NULL) && (p_130 != s_130)))
                    _fail(s_130);
                  else
                    p_130 = s_130;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_130), not_null(p_130));
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
ATerm one_dist_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL;
  z_130 = t;
  y_130 :
  if(match_cons(z_130, sym__2))
    {
      a_131 = ATgetArgument(z_130, 0);
      b_131 = ATgetArgument(z_130, 1);
      {
        t = not_null(a_131);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm e_131 = NULL;
            e_131 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_131), not_null(b_131));
              t = u_98(t);
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
ATerm env_oncetd_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm i_131 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_99(t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = one_dist_1(t, i_131);
      }
    return(t);
  }
  t = i_131(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm p_131 = NULL,q_131 = NULL,r_131 = NULL;
  p_131 = t;
  o_131 :
  if(((ATgetType(p_131) == AT_LIST) && ((ATermList) p_131 != ATempty)))
    {
      q_131 = ATgetFirst((ATermList) p_131);
      r_131 = (ATerm) ATgetNext((ATermList) p_131);
      {
        ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL;
        ATerm y_131 = NULL;
        t = not_null(q_131);
        {
          ATerm c_132 = NULL;
          t = tvars_0(t);
          {
            y_131 = t;
            {
              if(((w_131 != NULL) && (w_131 != y_131)))
                _fail(y_131);
              else
                w_131 = y_131;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_131), not_null(w_131));
                {
                  ATerm f_132 (ATerm t)
                  {
                    ATerm g_5 (ATerm t)
                    {
                      ATerm e_28 = t;
                      int f_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, f_132);
                          LocalPopChoice(f_28);
                        }
                      else
                        {
                          t = e_28;
                          {
                            ATerm z_131 = NULL,a_132 = NULL,b_132 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              z_131 = t;
                              m_131 :
                              if(match_cons(z_131, sym__2))
                                {
                                  a_132 = ATgetArgument(z_131, 0);
                                  b_132 = ATgetArgument(z_131, 1);
                                  {
                                    if(((v_131 != NULL) && (v_131 != a_132)))
                                      _fail(a_132);
                                    else
                                      v_131 = a_132;
                                    {
                                      if(((u_131 != NULL) && (u_131 != b_132)))
                                        _fail(b_132);
                                      else
                                        u_131 = b_132;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_131));
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
                  t = f_132(t);
                  {
                    c_132 = t;
                    if(((x_131 != NULL) && (x_131 != c_132)))
                      _fail(c_132);
                    else
                      x_131 = c_132;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_131)), not_null(x_131)), not_null(r_131));
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
ATerm repeat_2 (ATerm t, ATerm h_103 (ATerm), ATerm i_103 (ATerm))
{
  ATerm i_132 (ATerm t)
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_103(t);
        t = i_132(t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = i_103(t);
      }
    return(t);
  }
  t = i_132(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_103 (ATerm))
{
  t = repeat_2(t, k_103, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm c_98 (ATerm))
{
  ATerm j_132 (ATerm t)
  {
    t = c_98(t);
    {
      ATerm i_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(j_28);
        }
      else
        {
          t = i_28;
          t = Cons_2(t, _id, j_132);
        }
    }
    return(t);
  }
  t = j_132(t);
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
  ATerm o_132 = NULL,p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL;
  q_132 = t;
  m_132 :
  if(match_cons(q_132, sym_DynRuleScope_2))
    {
      r_132 = ATgetArgument(q_132, 0);
      s_132 = ATgetArgument(q_132, 1);
      n_132 :
      if(((ATgetType(r_132) == AT_LIST) && ((ATermList) r_132 != ATempty)))
        {
          o_132 = ATgetFirst((ATermList) r_132);
          p_132 = (ATerm) ATgetNext((ATermList) r_132);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_l_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(p_132), not_null(s_132))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(o_132)))));
        }
      else
        {
          if(((ATermList) r_132 == ATempty))
            {
              t = not_null(s_132);
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
  ATerm c_133 = NULL,d_133 = NULL;
  c_133 = t;
  b_133 :
  if(match_cons(c_133, sym_ScopeDefault_1))
    {
      d_133 = ATgetArgument(c_133, 0);
      {
        ATerm f_133 = NULL;
        ATerm g_133 = NULL;
        t = not_null(d_133);
        {
          t = tvars_0(t);
          {
            g_133 = t;
            if(((f_133 != NULL) && (f_133 != g_133)))
              _fail(g_133);
            else
              f_133 = g_133;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_133), not_null(d_133));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm o_133 = NULL,p_133 = NULL;
  o_133 = t;
  n_133 :
  if(match_cons(o_133, sym_DynamicRules_1))
    {
      p_133 = ATgetArgument(o_133, 0);
      {
        ATerm s_133 = NULL,u_133 = NULL;
        ATerm t_133 = NULL;
        t = SSLgetAnnotations(not_null(o_133));
        {
          t_133 = t;
          if(((s_133 != NULL) && (s_133 != t_133)))
            _fail(t_133);
          else
            s_133 = t_133;
        }
        {
          t = not_null(p_133);
          {
            ATerm w_133 = NULL;
            t = n_75(t);
            {
              u_133 = t;
              {
                ATerm x_133 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(u_133)), not_null(s_133));
                {
                  x_133 = t;
                  if(((w_133 != NULL) && (w_133 != x_133)))
                    _fail(x_133);
                  else
                    w_133 = x_133;
                }
                t = not_null(w_133);
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
ATerm Scope_2 (ATerm t, ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  ATerm i_134 = NULL,j_134 = NULL,k_134 = NULL;
  i_134 = t;
  h_134 :
  if(match_cons(i_134, sym_Scope_2))
    {
      j_134 = ATgetArgument(i_134, 0);
      k_134 = ATgetArgument(i_134, 1);
      {
        ATerm o_134 = NULL,q_134 = NULL;
        ATerm p_134 = NULL;
        t = SSLgetAnnotations(not_null(i_134));
        {
          p_134 = t;
          if(((o_134 != NULL) && (o_134 != p_134)))
            _fail(p_134);
          else
            o_134 = p_134;
        }
        {
          t = not_null(j_134);
          {
            ATerm s_134 = NULL;
            t = k_78(t);
            {
              q_134 = t;
              {
                t = not_null(k_134);
                {
                  ATerm u_134 = NULL;
                  t = l_78(t);
                  {
                    s_134 = t;
                    {
                      ATerm v_134 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(q_134), not_null(s_134)), not_null(o_134));
                      {
                        v_134 = t;
                        if(((u_134 != NULL) && (u_134 != v_134)))
                          _fail(v_134);
                        else
                          u_134 = v_134;
                      }
                      t = not_null(u_134);
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
ATerm tboundin_3 (ATerm t, ATerm k_79 (ATerm), ATerm l_79 (ATerm), ATerm m_79 (ATerm))
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, m_79, k_79);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = DynamicRules_1(t, k_79);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm d_135 = NULL,e_135 = NULL;
  d_135 = t;
  c_135 :
  if(match_cons(d_135, sym_DynamicRules_1))
    {
      e_135 = ATgetArgument(d_135, 0);
      {
        t = not_null(e_135);
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
  ATerm l_135 = NULL,m_135 = NULL,n_135 = NULL,o_135 = NULL,p_135 = NULL,q_135 = NULL;
  o_135 = t;
  j_135 :
  if(match_cons(o_135, sym_LRule_1))
    {
      p_135 = ATgetArgument(o_135, 0);
      k_135 :
      if(match_cons(p_135, sym_Rule_3))
        {
          l_135 = ATgetArgument(p_135, 0);
          m_135 = ATgetArgument(p_135, 1);
          n_135 = ATgetArgument(p_135, 2);
          {
            t = not_null(l_135);
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
      if(match_cons(o_135, sym_Scope_2))
        {
          p_135 = ATgetArgument(o_135, 0);
          q_135 = ATgetArgument(o_135, 1);
          t = not_null(p_135);
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
  ATerm a_136 = NULL,b_136 = NULL;
  a_136 = t;
  z_135 :
  if(match_cons(a_136, sym_Var_1))
    {
      b_136 = ATgetArgument(a_136, 0);
      t = (ATerm) ATinsert(ATempty, not_null(b_136));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm g_136 = NULL,h_136 = NULL,i_136 = NULL;
  g_136 = t;
  f_136 :
  if(match_cons(g_136, sym__2))
    {
      h_136 = ATgetArgument(g_136, 0);
      i_136 = ATgetArgument(g_136, 1);
      {
        t = not_null(h_136);
        {
          ATerm m_136 (ATerm t)
          {
            ATerm o_28 = t;
            int p_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(i_136);
                LocalPopChoice(p_28);
              }
            else
              {
                t = o_28;
                {
                  ATerm q_28 = t;
                  int r_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 (ATerm t)
                      {
                        t = not_null(i_136);
                        return(t);
                      }
                      t = HdMember_1(t, o_5);
                      t = m_136(t);
                      LocalPopChoice(r_28);
                    }
                  else
                    {
                      t = q_28;
                      t = Cons_2(t, _id, m_136);
                    }
                }
              }
            return(t);
          }
          t = m_136(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm))
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_91(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm r_136 = NULL,s_136 = NULL,t_136 = NULL;
        r_136 = t;
        q_136 :
        if(((ATgetType(r_136) == AT_LIST) && ((ATermList) r_136 != ATempty)))
          {
            s_136 = ATgetFirst((ATermList) r_136);
            t_136 = (ATerm) ATgetNext((ATermList) r_136);
            {
              ATerm w_136 = NULL,y_136 = NULL;
              ATerm u_28;
              u_28 = t;
              {
                ATerm x_136 = NULL;
                t = not_null(s_136);
                {
                  t = u_91(t);
                  {
                    x_136 = t;
                    if(((w_136 != NULL) && (w_136 != x_136)))
                      _fail(x_136);
                    else
                      w_136 = x_136;
                  }
                }
              }
              t = u_28;
              {
                ATerm z_136 = NULL;
                t = not_null(t_136);
                {
                  t = foldr_3(t, s_91, t_91, u_91);
                  {
                    z_136 = t;
                    if(((y_136 != NULL) && (y_136 != z_136)))
                      _fail(z_136);
                    else
                      y_136 = z_136;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_136), not_null(y_136));
                  t = t_91(t);
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
ATerm crush_3 (ATerm t, ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm h_137 = NULL;
  ATerm j_137 = NULL;
  h_137 = t;
  {
    ATerm k_137 = NULL;
    ATerm m_137 = NULL,n_137 = NULL,o_137 = NULL;
    t = not_null(h_137);
    {
      k_137 = t;
      {
        t = SSL_explode_term(not_null(k_137));
        {
          m_137 = t;
          g_137 :
          if(match_cons(m_137, sym__2))
            {
              n_137 = ATgetArgument(m_137, 0);
              o_137 = ATgetArgument(m_137, 1);
              if(((j_137 != NULL) && (j_137 != o_137)))
                _fail(o_137);
              else
                j_137 = o_137;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_137);
      t = foldr_3(t, g_93, h_93, i_93);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL,y_137 = NULL,z_137 = NULL;
  v_137 = t;
  t_137 :
  if(match_cons(v_137, sym__2))
    {
      w_137 = ATgetArgument(v_137, 0);
      x_137 = ATgetArgument(v_137, 1);
      u_137 :
      if(((ATgetType(x_137) == AT_LIST) && ((ATermList) x_137 != ATempty)))
        {
          y_137 = ATgetFirst((ATermList) x_137);
          z_137 = (ATerm) ATgetNext((ATermList) x_137);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_137)), not_null(y_137)), not_null(z_137));
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
  ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL;
  o_138 = t;
  m_138 :
  if(((ATgetType(o_138) == AT_LIST) && ((ATermList) o_138 != ATempty)))
    {
      p_138 = ATgetFirst((ATermList) o_138);
      s_138 = (ATerm) ATgetNext((ATermList) o_138);
      n_138 :
      if(match_cons(p_138, sym__2))
        {
          q_138 = ATgetArgument(p_138, 0);
          r_138 = ATgetArgument(p_138, 1);
          {
            ATerm w_138 = NULL,x_138 = NULL,d_139 = NULL,j_139 = NULL;
            ATerm v_28;
            v_28 = t;
            {
              ATerm y_138 = NULL;
              ATerm a_139 = NULL,b_139 = NULL,c_139 = NULL;
              t = not_null(r_138);
              {
                y_138 = t;
                {
                  t = SSL_explode_term(not_null(y_138));
                  {
                    a_139 = t;
                    h_138 :
                    if(match_cons(a_139, sym__2))
                      {
                        b_139 = ATgetArgument(a_139, 0);
                        c_139 = ATgetArgument(a_139, 1);
                        {
                          if(((w_138 != NULL) && (w_138 != b_139)))
                            _fail(b_139);
                          else
                            w_138 = b_139;
                          if(((x_138 != NULL) && (x_138 != c_139)))
                            _fail(c_139);
                          else
                            x_138 = c_139;
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
            t = v_28;
            {
              ATerm w_28;
              w_28 = t;
              {
                ATerm e_139 = NULL;
                ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL;
                t = not_null(q_138);
                {
                  e_139 = t;
                  {
                    t = SSL_explode_term(not_null(e_139));
                    {
                      g_139 = t;
                      k_138 :
                      if(match_cons(g_139, sym__2))
                        {
                          h_139 = ATgetArgument(g_139, 0);
                          i_139 = ATgetArgument(g_139, 1);
                          {
                            if(((w_138 != NULL) && (w_138 != h_139)))
                              _fail(h_139);
                            else
                              w_138 = h_139;
                            if(((d_139 != NULL) && (d_139 != i_139)))
                              _fail(i_139);
                            else
                              d_139 = i_139;
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
              t = w_28;
              {
                ATerm k_139 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_139), not_null(x_138));
                {
                  t = zip_1(t, _id);
                  {
                    k_139 = t;
                    if(((j_139 != NULL) && (j_139 != k_139)))
                      _fail(k_139);
                    else
                      j_139 = k_139;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_139), not_null(s_138));
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
  ATerm u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL,y_139 = NULL;
  u_139 = t;
  s_139 :
  if(((ATgetType(u_139) == AT_LIST) && ((ATermList) u_139 != ATempty)))
    {
      v_139 = ATgetFirst((ATermList) u_139);
      y_139 = (ATerm) ATgetNext((ATermList) u_139);
      t_139 :
      if(match_cons(v_139, sym__2))
        {
          w_139 = ATgetArgument(v_139, 0);
          x_139 = ATgetArgument(v_139, 1);
          {
            ATerm a_140 = NULL;
            if(((w_139 != NULL) && (w_139 != x_139)))
              _fail(x_139);
            else
              w_139 = x_139;
            {
              if(((a_140 != NULL) && (a_140 != y_139)))
                _fail(y_139);
              else
                a_140 = y_139;
              t = not_null(a_140);
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
ATerm while_not_2 (ATerm t, ATerm y_103 (ATerm), ATerm z_103 (ATerm))
{
  ATerm d_140 (ATerm t)
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_103(t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        {
          t = z_103(t);
          t = d_140(t);
        }
      }
    return(t);
  }
  t = d_140(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm))
{
  t = b_104(t);
  t = while_not_2(t, c_104, d_104);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm v_92 (ATerm))
{
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL;
  h_140 = t;
  g_140 :
  if(((ATgetType(h_140) == AT_LIST) && ((ATermList) h_140 != ATempty)))
    {
      i_140 = ATgetFirst((ATermList) h_140);
      j_140 = (ATerm) ATgetNext((ATermList) h_140);
      {
        t = v_92(t);
        {
          ATerm p_5 (ATerm t)
          {
            ATerm m_140 = NULL;
            m_140 = t;
            if(((i_140 != NULL) && (i_140 != m_140)))
              _fail(m_140);
            else
              i_140 = m_140;
            return(t);
          }
          t = fetch_1(t, p_5);
        }
        t = not_null(j_140);
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
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL;
      s_140 = t;
      q_140 :
      if(match_cons(s_140, sym__2))
        {
          t_140 = ATgetArgument(s_140, 0);
          u_140 = ATgetArgument(s_140, 1);
          {
            t = not_null(t_140);
            {
              ATerm a_141 (ATerm t)
              {
                ATerm b_29 = t;
                int c_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(c_29);
                  }
                else
                  {
                    t = b_29;
                    {
                      ATerm d_29 = t;
                      int e_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_5 (ATerm t)
                          {
                            t = not_null(u_140);
                            return(t);
                          }
                          t = HdMember_1(t, q_5);
                          t = a_141(t);
                          LocalPopChoice(e_29);
                        }
                      else
                        {
                          t = d_29;
                          t = Cons_2(t, _id, a_141);
                        }
                    }
                  }
                return(t);
              }
              t = a_141(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm r_5 (ATerm t)
        {
          ATerm x_140 = NULL;
          x_140 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_140));
          return(t);
        }
        ATerm s_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm t_5 (ATerm t)
        {
          ATerm f_29 = t;
          int g_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 (ATerm t)
              {
                ATerm h_29 = t;
                int i_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(i_29);
                  }
                else
                  {
                    t = h_29;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, u_5);
              LocalPopChoice(g_29);
            }
          else
            {
              t = f_29;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, r_5, s_5, t_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_141 (ATerm t)
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_80(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_141 = NULL;
              ATerm n_29;
              n_29 = t;
              {
                ATerm e_141 = NULL;
                t = r_80(t);
                {
                  e_141 = t;
                  if(((d_141 != NULL) && (d_141 != e_141)))
                    _fail(e_141);
                  else
                    d_141 = e_141;
                }
              }
              t = n_29;
              {
                ATerm v_5 (ATerm t)
                {
                  ATerm x_5 (ATerm t)
                  {
                    t = not_null(d_141);
                    return(t);
                  }
                  t = split_2(t, f_141, x_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = s_80(t, v_5, f_141, w_5);
                {
                  ATerm y_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, y_5, union_0, _id);
                }
              }
              LocalPopChoice(m_29);
            }
          else
            {
              t = l_29;
              {
                ATerm z_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, z_5, union_0, f_141);
              }
            }
        }
      }
    return(t);
  }
  t = f_141(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_6, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm l_141 = NULL,m_141 = NULL,n_141 = NULL,o_141 = NULL,p_141 = NULL;
  l_141 = t;
  j_141 :
  if(match_cons(l_141, sym_LRule_1))
    {
      m_141 = ATgetArgument(l_141, 0);
      k_141 :
      if(match_cons(m_141, sym_Rule_3))
        {
          n_141 = ATgetArgument(m_141, 0);
          o_141 = ATgetArgument(m_141, 1);
          p_141 = ATgetArgument(m_141, 2);
          {
            ATerm t_141 = NULL;
            ATerm u_141 = NULL;
            t = not_null(n_141);
            {
              t = tvars_0(t);
              {
                u_141 = t;
                if(((t_141 != NULL) && (t_141 != u_141)))
                  _fail(u_141);
                else
                  t_141 = u_141;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_141), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_141), not_null(o_141), not_null(p_141))));
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
ATerm bottomup_1 (ATerm t, ATerm b_100 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    t = bottomup_1(t, b_100);
    return(t);
  }
  t = _all(t, b_6);
  t = b_100(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
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
  ATerm z_141 = NULL,a_142 = NULL;
  z_141 = t;
  y_141 :
  if(match_cons(z_141, sym_Var_1))
    {
      a_142 = ATgetArgument(z_141, 0);
      t = not_null(a_142);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL,k_142 = NULL;
  g_142 = t;
  e_142 :
  if(match_cons(g_142, sym__2))
    {
      h_142 = ATgetArgument(g_142, 0);
      i_142 = ATgetArgument(g_142, 1);
      f_142 :
      if(((ATgetType(i_142) == AT_LIST) && ((ATermList) i_142 != ATempty)))
        {
          j_142 = ATgetFirst((ATermList) i_142);
          k_142 = (ATerm) ATgetNext((ATermList) i_142);
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_142), not_null(k_142));
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
  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL,y_142 = NULL;
  s_142 = t;
  p_142 :
  if(match_cons(s_142, sym__2))
    {
      t_142 = ATgetArgument(s_142, 0);
      u_142 = ATgetArgument(s_142, 1);
      q_142 :
      if(((ATgetType(u_142) == AT_LIST) && ((ATermList) u_142 != ATempty)))
        {
          v_142 = ATgetFirst((ATermList) u_142);
          y_142 = (ATerm) ATgetNext((ATermList) u_142);
          r_142 :
          if(match_cons(v_142, sym__2))
            {
              w_142 = ATgetArgument(v_142, 0);
              x_142 = ATgetArgument(v_142, 1);
              {
                ATerm a_143 = NULL;
                if(((t_142 != NULL) && (t_142 != w_142)))
                  _fail(w_142);
                else
                  t_142 = w_142;
                {
                  if(((a_143 != NULL) && (a_143 != x_142)))
                    _fail(x_142);
                  else
                    a_143 = x_142;
                  t = not_null(a_143);
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
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  ATerm g_143 = NULL;
  ATerm i_143 = NULL,j_143 = NULL;
  g_143 = t;
  {
    ATerm k_143 = NULL;
    t = not_null(g_143);
    {
      ATerm l_143 = NULL;
      t = m_82(t);
      {
        k_143 = t;
        {
          if(((i_143 != NULL) && (i_143 != k_143)))
            _fail(k_143);
          else
            i_143 = k_143;
          {
            t = n_82(t);
            {
              l_143 = t;
              if(((j_143 != NULL) && (j_143 != l_143)))
                _fail(l_143);
              else
                j_143 = l_143;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_143), not_null(j_143));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm e_102 (ATerm))
{
  ATerm p_143 (ATerm t)
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_102(t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = _all(t, p_143);
      }
    return(t);
  }
  t = p_143(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm s_143 = NULL,t_143 = NULL,u_143 = NULL;
  s_143 = t;
  r_143 :
  if(match_cons(s_143, sym__2))
    {
      t_143 = ATgetArgument(s_143, 0);
      u_143 = ATgetArgument(s_143, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_143)), not_null(t_143));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm c_144 = NULL,d_144 = NULL,e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL;
  c_144 = t;
  z_143 :
  if(match_cons(c_144, sym__2))
    {
      d_144 = ATgetArgument(c_144, 0);
      g_144 = ATgetArgument(c_144, 1);
      a_144 :
      if(((ATgetType(d_144) == AT_LIST) && ((ATermList) d_144 != ATempty)))
        {
          e_144 = ATgetFirst((ATermList) d_144);
          f_144 = (ATerm) ATgetNext((ATermList) d_144);
          b_144 :
          if(((ATgetType(g_144) == AT_LIST) && ((ATermList) g_144 != ATempty)))
            {
              h_144 = ATgetFirst((ATermList) g_144);
              i_144 = (ATerm) ATgetNext((ATermList) g_144);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_144), not_null(h_144)), (ATerm) ATmakeAppl(sym__2, not_null(f_144), not_null(i_144)));
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
  ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL;
  s_144 = t;
  p_144 :
  if(match_cons(s_144, sym__2))
    {
      t_144 = ATgetArgument(s_144, 0);
      u_144 = ATgetArgument(s_144, 1);
      q_144 :
      if(((ATermList) t_144 == ATempty))
        {
          r_144 :
          if(((ATermList) u_144 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm))
{
  ATerm w_144 (ATerm t)
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_95(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          t = m_95(t);
          {
            t = _2(t, o_95, w_144);
            t = n_95(t);
          }
        }
      }
    return(t);
  }
  t = w_144(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm q_95 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, q_95);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL,e_145 = NULL;
  b_145 = t;
  a_145 :
  if(match_cons(b_145, sym__2))
    {
      c_145 = ATgetArgument(b_145, 0);
      d_145 = ATgetArgument(b_145, 1);
      {
        ATerm g_145 = NULL;
        if(((g_145 != NULL) && (g_145 != d_145)))
          _fail(d_145);
        else
          g_145 = d_145;
      }
    }
  else
    {
      if(match_cons(b_145, sym__3))
        {
          c_145 = ATgetArgument(b_145, 0);
          d_145 = ATgetArgument(b_145, 1);
          e_145 = ATgetArgument(b_145, 2);
          {
            ATerm m_145 = NULL;
            ATerm n_145 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_145), not_null(d_145));
            {
              t = zip_1(t, _id);
              {
                n_145 = t;
                if(((m_145 != NULL) && (m_145 != n_145)))
                  _fail(n_145);
                else
                  m_145 = n_145;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_145), not_null(e_145));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm))
{
  ATerm t_145 = NULL,u_145 = NULL,v_145 = NULL;
  t = subs_args_0(t);
  {
    t_145 = t;
    s_145 :
    if(match_cons(t_145, sym__2))
      {
        u_145 = ATgetArgument(t_145, 0);
        v_145 = ATgetArgument(t_145, 1);
        {
          t = not_null(v_145);
          {
            ATerm e_6 (ATerm t)
            {
              ATerm f_6 (ATerm t)
              {
                t = not_null(u_145);
                return(t);
              }
              t = SubsVar_2(t, o_82, f_6);
              t = p_82(t);
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
ATerm substitute_1 (ATerm t, ATerm q_82 (ATerm))
{
  t = substitute_2(t, q_82, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm c_146 = NULL,d_146 = NULL,e_146 = NULL,f_146 = NULL;
  c_146 = t;
  a_146 :
  if(match_cons(c_146, sym_OpDecl_2))
    {
      d_146 = ATgetArgument(c_146, 0);
      e_146 = ATgetArgument(c_146, 1);
      b_146 :
      if(match_cons(e_146, sym_ConstType_1))
        {
          f_146 = ATgetArgument(e_146, 0);
          t = not_null(d_146);
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
  ATerm k_146 = NULL,l_146 = NULL;
  k_146 = t;
  j_146 :
  if(match_cons(k_146, sym_Constructors_1))
    {
      l_146 = ATgetArgument(k_146, 0);
      {
        t = not_null(l_146);
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
  ATerm r_146 = NULL,s_146 = NULL,t_146 = NULL,u_146 = NULL;
  r_146 = t;
  p_146 :
  if(match_cons(r_146, sym_Overlay_3))
    {
      s_146 = ATgetArgument(r_146, 0);
      t_146 = ATgetArgument(r_146, 1);
      u_146 = ATgetArgument(r_146, 2);
      q_146 :
      if(((ATermList) t_146 == ATempty))
        {
          t = not_null(s_146);
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
  ATerm b_147 = NULL,c_147 = NULL;
  b_147 = t;
  a_147 :
  if(match_cons(b_147, sym_Overlays_1))
    {
      c_147 = ATgetArgument(b_147, 0);
      {
        t = not_null(c_147);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(b_147, sym_Signature_1))
        {
          c_147 = ATgetArgument(b_147, 0);
          {
            t = not_null(c_147);
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
ATerm filter_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              t = filter_1(t, w_90);
              return(t);
            }
            t = Cons_2(t, w_90, g_6);
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            {
              ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL;
              j_147 = t;
              i_147 :
              if(((ATgetType(j_147) == AT_LIST) && ((ATermList) j_147 != ATempty)))
                {
                  k_147 = ATgetFirst((ATermList) j_147);
                  l_147 = (ATerm) ATgetNext((ATermList) j_147);
                  {
                    t = not_null(l_147);
                    t = filter_1(t, w_90);
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
  ATerm s_147 = NULL,y_147 = NULL;
  ATerm c_30;
  c_30 = t;
  {
    ATerm x_147 = NULL;
    t = const_names_0(t);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm t_147 = NULL,v_147 = NULL;
        ATerm d_30;
        d_30 = t;
        {
          ATerm u_147 = NULL;
          u_147 = t;
          if(((t_147 != NULL) && (t_147 != u_147)))
            _fail(u_147);
          else
            t_147 = u_147;
        }
        t = d_30;
        {
          ATerm w_147 = NULL;
          w_147 = t;
          if(((v_147 != NULL) && (v_147 != w_147)))
            _fail(w_147);
          else
            v_147 = w_147;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_147), (ATerm) ATmakeAppl(sym_Op_2, not_null(v_147), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, h_6);
      {
        x_147 = t;
        if(((s_147 != NULL) && (s_147 != x_147)))
          _fail(x_147);
        else
          s_147 = x_147;
      }
    }
  }
  t = c_30;
  {
    ATerm z_147 = NULL;
    z_147 = t;
    if(((y_147 != NULL) && (y_147 != z_147)))
      _fail(z_147);
    else
      y_147 = z_147;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_147), not_null(y_147));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm g_148 = NULL,h_148 = NULL,i_148 = NULL,j_148 = NULL;
  g_148 = t;
  f_148 :
  if(match_cons(g_148, sym__3))
    {
      h_148 = ATgetArgument(g_148, 0);
      i_148 = ATgetArgument(g_148, 1);
      j_148 = ATgetArgument(g_148, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_148))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(i_148))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(h_148))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm v_148 = NULL,w_148 = NULL,x_148 = NULL,y_148 = NULL,z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL;
  v_148 = t;
  s_148 :
  if(match_cons(v_148, sym__2))
    {
      w_148 = ATgetArgument(v_148, 0);
      a_149 = ATgetArgument(v_148, 1);
      t_148 :
      if(match_cons(w_148, sym__3))
        {
          x_148 = ATgetArgument(w_148, 0);
          y_148 = ATgetArgument(w_148, 1);
          z_148 = ATgetArgument(w_148, 2);
          u_148 :
          if(match_cons(a_149, sym__3))
            {
              b_149 = ATgetArgument(a_149, 0);
              c_149 = ATgetArgument(a_149, 1);
              d_149 = ATgetArgument(a_149, 2);
              {
                ATerm k_149 = NULL,m_149 = NULL,o_149 = NULL;
                ATerm e_30;
                e_30 = t;
                {
                  ATerm l_149 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_148), not_null(b_149));
                  {
                    t = conc_0(t);
                    {
                      l_149 = t;
                      if(((k_149 != NULL) && (k_149 != l_149)))
                        _fail(l_149);
                      else
                        k_149 = l_149;
                    }
                  }
                }
                t = e_30;
                {
                  ATerm f_30;
                  f_30 = t;
                  {
                    ATerm n_149 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_148), not_null(c_149));
                    {
                      t = conc_0(t);
                      {
                        n_149 = t;
                        if(((m_149 != NULL) && (m_149 != n_149)))
                          _fail(n_149);
                        else
                          m_149 = n_149;
                      }
                    }
                  }
                  t = f_30;
                  {
                    ATerm p_149 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_148), not_null(d_149));
                    {
                      t = conc_0(t);
                      {
                        p_149 = t;
                        if(((o_149 != NULL) && (o_149 != p_149)))
                          _fail(p_149);
                        else
                          o_149 = p_149;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(k_149), not_null(m_149), not_null(o_149));
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
  ATerm x_149 = NULL,y_149 = NULL;
  x_149 = t;
  w_149 :
  if(match_cons(x_149, sym_Sorts_1))
    {
      y_149 = ATgetArgument(x_149, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(x_149, sym_Constructors_1))
        {
          y_149 = ATgetArgument(x_149, 0);
          t = not_null(y_149);
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
  ATerm j_150 = NULL,k_150 = NULL;
  j_150 = t;
  i_150 :
  if(match_cons(j_150, sym_Overlays_1))
    {
      k_150 = ATgetArgument(j_150, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(k_150), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(j_150, sym_Rules_1))
        {
          k_150 = ATgetArgument(j_150, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(k_150));
        }
      else
        {
          if(match_cons(j_150, sym_Strategies_1))
            {
              k_150 = ATgetArgument(j_150, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(k_150));
            }
          else
            {
              if(match_cons(j_150, sym_Signature_1))
                {
                  k_150 = ATgetArgument(j_150, 0);
                  {
                    ATerm p_150 = NULL;
                    ATerm q_150 = NULL;
                    t = not_null(k_150);
                    {
                      t = normalize_sigs_0(t);
                      {
                        q_150 = t;
                        if(((p_150 != NULL) && (p_150 != q_150)))
                          _fail(q_150);
                        else
                          p_150 = q_150;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(p_150), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm y_150 = NULL,z_150 = NULL;
  y_150 = t;
  x_150 :
  if(match_cons(y_150, sym_Specification_1))
    {
      z_150 = ATgetArgument(y_150, 0);
      t = not_null(z_150);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_100 (ATerm))
{
  t = a_100(t);
  {
    ATerm i_6 (ATerm t)
    {
      t = topdown_1(t, a_100);
      return(t);
    }
    t = _all(t, i_6);
  }
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      ATerm e_151 = NULL,f_151 = NULL;
      e_151 = t;
      d_151 :
      if(match_cons(e_151, sym_DefaultVarDec_1))
        {
          f_151 = ATgetArgument(e_151, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_151), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15));
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, k_6);
    return(t);
  }
  t = topdown_1(t, j_6);
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
        ATerm l_6 (ATerm t)
        {
          t = term_a_25;
          return(t);
        }
        t = foldr_2(t, l_6, Combine_0);
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
    ATerm g_30;
    g_30 = t;
    t = spec_use_def_0(t);
    t = g_30;
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
                ATerm m_6 (ATerm t)
                {
                  ATerm n_6 (ATerm t)
                  {
                    ATerm o_6 (ATerm t)
                    {
                      t = Strategies_1(t, desugar_spec_0);
                      return(t);
                    }
                    t = Cons_2(t, o_6, Nil_0);
                    return(t);
                  }
                  t = Cons_2(t, _id, n_6);
                  return(t);
                }
                t = Specification_1(t, m_6);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_67 (ATerm), ATerm q_67 (ATerm))
{
  ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL;
  o_151 = t;
  n_151 :
  if(match_cons(o_151, sym__2))
    {
      p_151 = ATgetArgument(o_151, 0);
      q_151 = ATgetArgument(o_151, 1);
      {
        ATerm u_151 = NULL,w_151 = NULL;
        ATerm v_151 = NULL;
        t = SSLgetAnnotations(not_null(o_151));
        {
          v_151 = t;
          if(((u_151 != NULL) && (u_151 != v_151)))
            _fail(v_151);
          else
            u_151 = v_151;
        }
        {
          t = not_null(p_151);
          {
            ATerm y_151 = NULL;
            t = p_67(t);
            {
              w_151 = t;
              {
                t = not_null(q_151);
                {
                  ATerm a_152 = NULL;
                  t = q_67(t);
                  {
                    y_151 = t;
                    {
                      ATerm b_152 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_151), not_null(y_151)), not_null(u_151));
                      {
                        b_152 = t;
                        if(((a_152 != NULL) && (a_152 != b_152)))
                          _fail(b_152);
                        else
                          a_152 = b_152;
                      }
                      t = not_null(a_152);
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
  ATerm j_152 = NULL;
  ATerm h_30;
  h_30 = t;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm k_152 = NULL,l_152 = NULL;
      k_152 = t;
      i_152 :
      if(match_cons(k_152, sym_Program_1))
        {
          l_152 = ATgetArgument(k_152, 0);
          if(((j_152 != NULL) && (j_152 != l_152)))
            _fail(l_152);
          else
            j_152 = l_152;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_30), not_null(j_152)), term_i_30));
      {
        t = printnl_0(t);
        {
          t = term_g_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = h_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_152 = NULL,q_152 = NULL,r_152 = NULL;
  p_152 = t;
  o_152 :
  if(match_cons(p_152, sym__2))
    {
      q_152 = ATgetArgument(p_152, 0);
      r_152 = ATgetArgument(p_152, 1);
      {
        ATerm k_30;
        k_30 = t;
        t = SSL_printnl(not_null(q_152), not_null(r_152));
        t = k_30;
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
  ATerm x_152 = NULL,y_152 = NULL,z_152 = NULL;
  x_152 = t;
  w_152 :
  if(match_cons(x_152, sym__2))
    {
      y_152 = ATgetArgument(x_152, 0);
      z_152 = ATgetArgument(x_152, 1);
      {
        t = not_null(y_152);
        {
          ATerm q_6 (ATerm t)
          {
            t = not_null(z_152);
            return(t);
          }
          t = at_end_1(t, q_6);
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
ATerm debug_1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm l_30;
  l_30 = t;
  {
    ATerm f_153 = NULL,h_153 = NULL;
    ATerm m_30;
    m_30 = t;
    {
      ATerm g_153 = NULL;
      t = t_87(t);
      {
        g_153 = t;
        if(((f_153 != NULL) && (f_153 != g_153)))
          _fail(g_153);
        else
          f_153 = g_153;
      }
    }
    t = m_30;
    {
      ATerm i_153 = NULL;
      i_153 = t;
      if(((h_153 != NULL) && (h_153 != i_153)))
        _fail(i_153);
      else
        h_153 = i_153;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_153)), not_null(f_153)));
        t = printnl_0(t);
      }
    }
  }
  t = l_30;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_153 = NULL;
  m_153 = t;
  t = SSL_is_string(not_null(m_153));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_6);
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            {
              ATerm v_153 = NULL,w_153 = NULL,x_153 = NULL;
              v_153 = t;
              u_153 :
              if(match_cons(v_153, sym_Path_1))
                {
                  w_153 = ATgetArgument(v_153, 0);
                  t = not_null(w_153);
                }
              else
                {
                  if(match_cons(v_153, sym_Var_1))
                    {
                      w_153 = ATgetArgument(v_153, 0);
                      {
                        t = not_null(w_153);
                        {
                          ATerm r_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = r_30;
                              {
                                ATerm s_6 (ATerm t)
                                {
                                  t = term_t_30;
                                  return(t);
                                }
                                t = debug_1(t, s_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_153, sym_Prefix_2))
                        {
                          w_153 = ATgetArgument(v_153, 0);
                          x_153 = ATgetArgument(v_153, 1);
                          {
                            ATerm c_154 = NULL,e_154 = NULL;
                            ATerm u_30;
                            u_30 = t;
                            {
                              ATerm d_154 = NULL;
                              t = not_null(w_153);
                              {
                                t = eval_config_0(t);
                                {
                                  d_154 = t;
                                  if(((c_154 != NULL) && (c_154 != d_154)))
                                    _fail(d_154);
                                  else
                                    c_154 = d_154;
                                }
                              }
                            }
                            t = u_30;
                            {
                              ATerm f_154 = NULL;
                              t = not_null(x_153);
                              {
                                t = eval_config_0(t);
                                {
                                  f_154 = t;
                                  if(((e_154 != NULL) && (e_154 != f_154)))
                                    _fail(f_154);
                                  else
                                    e_154 = f_154;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_154), not_null(e_154));
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
  ATerm n_154 = NULL;
  n_154 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_30, not_null(n_154));
    {
      t = table_get_0(t);
      {
        ATerm t_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_30;
            w_30 = t;
            {
              ATerm p_154 = NULL;
              ATerm q_154 = NULL;
              q_154 = t;
              if(((p_154 != NULL) && (p_154 != q_154)))
                _fail(q_154);
              else
                p_154 = q_154;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_30, not_null(n_154), not_null(p_154));
                t = table_put_0(t);
              }
            }
            t = w_30;
          }
          return(t);
        }
        t = try_1(t, t_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm x_30;
    x_30 = t;
    {
      ATerm u_154 = NULL;
      ATerm v_154 = NULL;
      t = term_y_30;
      {
        t = get_config_0(t);
        {
          v_154 = t;
          if(((u_154 != NULL) && (u_154 != v_154)))
            _fail(v_154);
          else
            u_154 = v_154;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_154), term_z_30);
        t = geq_0(t);
      }
    }
    t = x_30;
    t = d_85(t);
    return(t);
  }
  t = try_1(t, u_6);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, term_a_31));
  {
    t = printnl_0(t);
    {
      t = term_g_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_154 = NULL;
  y_154 = t;
  t = SSL_TicksToSeconds(not_null(y_154));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_155 = NULL,e_155 = NULL,f_155 = NULL;
  d_155 = t;
  c_155 :
  if(match_cons(d_155, sym__2))
    {
      e_155 = ATgetArgument(d_155, 0);
      f_155 = ATgetArgument(d_155, 1);
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_155), not_null(f_155));
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = SSL_addr(not_null(e_155), not_null(f_155));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_91 (ATerm), ATerm r_91 (ATerm))
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_91(t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        ATerm m_155 = NULL,n_155 = NULL,o_155 = NULL;
        m_155 = t;
        l_155 :
        if(((ATgetType(m_155) == AT_LIST) && ((ATermList) m_155 != ATempty)))
          {
            n_155 = ATgetFirst((ATermList) m_155);
            o_155 = (ATerm) ATgetNext((ATermList) m_155);
            {
              ATerm r_155 = NULL;
              ATerm s_155 = NULL;
              t = not_null(o_155);
              {
                t = foldr_2(t, q_91, r_91);
                {
                  s_155 = t;
                  if(((r_155 != NULL) && (r_155 != s_155)))
                    _fail(s_155);
                  else
                    r_155 = s_155;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_155), not_null(r_155));
                t = r_91(t);
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
ATerm crush_2 (ATerm t, ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  ATerm a_156 = NULL;
  ATerm c_156 = NULL;
  a_156 = t;
  {
    ATerm d_156 = NULL;
    ATerm f_156 = NULL,g_156 = NULL,h_156 = NULL;
    t = not_null(a_156);
    {
      d_156 = t;
      {
        t = SSL_explode_term(not_null(d_156));
        {
          f_156 = t;
          z_155 :
          if(match_cons(f_156, sym__2))
            {
              g_156 = ATgetArgument(f_156, 0);
              h_156 = ATgetArgument(f_156, 1);
              if(((c_156 != NULL) && (c_156 != h_156)))
                _fail(h_156);
              else
                c_156 = h_156;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_156);
      t = foldr_2(t, e_93, f_93);
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
    ATerm v_6 (ATerm t)
    {
      t = term_h_21;
      return(t);
    }
    t = crush_2(t, v_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_156 = NULL,o_156 = NULL,p_156 = NULL;
  n_156 = t;
  m_156 :
  if(match_cons(n_156, sym__2))
    {
      o_156 = ATgetArgument(n_156, 0);
      p_156 = ATgetArgument(n_156, 1);
      {
        ATerm f_31;
        f_31 = t;
        {
          ATerm g_31 = t;
          int h_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_156), not_null(p_156));
              LocalPopChoice(h_31);
            }
          else
            {
              t = g_31;
              t = SSL_gtr(not_null(o_156), not_null(p_156));
            }
        }
        t = f_31;
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
  ATerm v_156 = NULL;
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_156 = NULL,x_156 = NULL,y_156 = NULL;
      w_156 = t;
      u_156 :
      if(match_cons(w_156, sym__2))
        {
          x_156 = ATgetArgument(w_156, 0);
          y_156 = ATgetArgument(w_156, 1);
          {
            if(((v_156 != NULL) && (v_156 != x_156)))
              _fail(x_156);
            else
              v_156 = x_156;
            if(((v_156 != NULL) && (v_156 != y_156)))
              _fail(y_156);
            else
              v_156 = y_156;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_85 (ATerm))
{
  ATerm w_6 (ATerm t)
  {
    ATerm k_31;
    k_31 = t;
    {
      ATerm b_157 = NULL;
      ATerm c_157 = NULL;
      t = term_y_30;
      {
        t = get_config_0(t);
        {
          c_157 = t;
          if(((b_157 != NULL) && (b_157 != c_157)))
            _fail(c_157);
          else
            b_157 = c_157;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_157), term_g_18);
        t = geq_0(t);
      }
    }
    t = k_31;
    t = c_85(t);
    return(t);
  }
  t = try_1(t, w_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_6 (ATerm t)
  {
    ATerm g_157 = NULL,j_157 = NULL;
    ATerm l_31;
    l_31 = t;
    {
      ATerm h_157 = NULL;
      t = run_time_0(t);
      {
        h_157 = t;
        if(((g_157 != NULL) && (g_157 != h_157)))
          _fail(h_157);
        else
          g_157 = h_157;
      }
    }
    t = l_31;
    {
      ATerm k_157 = NULL;
      t = term_m_31;
      {
        t = get_config_0(t);
        {
          k_157 = t;
          if(((j_157 != NULL) && (j_157 != k_157)))
            _fail(k_157);
          else
            j_157 = k_157;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_31), not_null(g_157)), term_n_31), not_null(j_157)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_6);
  {
    t = term_h_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_157 = NULL,q_157 = NULL,r_157 = NULL;
  p_157 = t;
  o_157 :
  if(match_cons(p_157, sym__2))
    {
      q_157 = ATgetArgument(p_157, 0);
      r_157 = ATgetArgument(p_157, 1);
      t = SSL_WriteToTextFile(not_null(q_157), not_null(r_157));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_157 = NULL,y_157 = NULL,z_157 = NULL;
  x_157 = t;
  w_157 :
  if(match_cons(x_157, sym__2))
    {
      y_157 = ATgetArgument(x_157, 0);
      z_157 = ATgetArgument(x_157, 1);
      t = SSL_WriteToBinaryFile(not_null(y_157), not_null(z_157));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm h_158 = NULL;
  ATerm p_31;
  p_31 = t;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm q_31 = t;
      int r_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_6 (ATerm t)
          {
            ATerm i_158 = NULL,j_158 = NULL;
            i_158 = t;
            e_158 :
            if(match_cons(i_158, sym_Output_1))
              {
                j_158 = ATgetArgument(i_158, 0);
                if(((h_158 != NULL) && (h_158 != j_158)))
                  _fail(j_158);
                else
                  h_158 = j_158;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_6);
          LocalPopChoice(r_31);
        }
      else
        {
          t = q_31;
          {
            ATerm k_158 = NULL;
            t = term_s_31;
            {
              k_158 = t;
              if(((h_158 != NULL) && (h_158 != k_158)))
                _fail(k_158);
              else
                h_158 = k_158;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_6, _id);
  }
  t = p_31;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm b_7 (ATerm t)
      {
        t = not_null(h_158);
        return(t);
      }
      t = split_2(t, b_7, _id);
      return(t);
    }
    t = _2(t, _id, a_7);
    {
      ATerm t_31 = t;
      int w_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_7 (ATerm t)
          {
            ATerm d_7 (ATerm t)
            {
              ATerm l_158 = NULL;
              l_158 = t;
              g_158 :
              if(!(match_cons(l_158, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, d_7);
            return(t);
          }
          t = _2(t, c_7, WriteToBinaryFile_0);
          LocalPopChoice(w_31);
        }
      else
        {
          t = t_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm r_158 = NULL,t_158 = NULL,u_158 = NULL,v_158 = NULL;
  ATerm x_31;
  x_31 = t;
  t = dtime_0(t);
  t = x_31;
  {
    t = d_87(t);
    {
      ATerm y_31;
      y_31 = t;
      {
        ATerm s_158 = NULL;
        t = dtime_0(t);
        {
          s_158 = t;
          if(((r_158 != NULL) && (r_158 != s_158)))
            _fail(s_158);
          else
            r_158 = s_158;
        }
      }
      t = y_31;
      {
        t_158 = t;
        q_158 :
        if(match_cons(t_158, sym__2))
          {
            u_158 = ATgetArgument(t_158, 0);
            v_158 = ATgetArgument(t_158, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_158)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(r_158))), not_null(v_158));
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
  ATerm b_159 = NULL;
  b_159 = t;
  t = SSL_ReadFromFile(not_null(b_159));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_90 (ATerm), ATerm f_90 (ATerm))
{
  ATerm g_159 = NULL,i_159 = NULL;
  ATerm z_31;
  z_31 = t;
  {
    ATerm h_159 = NULL;
    t = e_90(t);
    {
      h_159 = t;
      if(((g_159 != NULL) && (g_159 != h_159)))
        _fail(h_159);
      else
        g_159 = h_159;
    }
  }
  t = z_31;
  {
    ATerm j_159 = NULL;
    t = f_90(t);
    {
      j_159 = t;
      if(((i_159 != NULL) && (i_159 != j_159)))
        _fail(j_159);
      else
        i_159 = j_159;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_159), not_null(i_159));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_159 = NULL;
  ATerm a_32;
  a_32 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 (ATerm t)
        {
          ATerm r_159 = NULL,s_159 = NULL;
          r_159 = t;
          n_159 :
          if(match_cons(r_159, sym_Input_1))
            {
              s_159 = ATgetArgument(r_159, 0);
              if(((p_159 != NULL) && (p_159 != s_159)))
                _fail(s_159);
              else
                p_159 = s_159;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_7);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        {
          ATerm t_159 = NULL;
          t = term_j_32;
          {
            t_159 = t;
            if(((p_159 != NULL) && (p_159 != t_159)))
              _fail(t_159);
            else
              p_159 = t_159;
          }
        }
      }
  }
  t = a_32;
  {
    ATerm f_7 (ATerm t)
    {
      t = not_null(p_159);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, f_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_160 = NULL;
  a_160 = t;
  z_159 :
  if(match_cons(a_160, sym_Version_0))
    {
      ATerm c_160 = NULL,e_160 = NULL;
      ATerm l_32;
      l_32 = t;
      {
        ATerm d_160 = NULL;
        t = SSLgetAnnotations(not_null(a_160));
        {
          d_160 = t;
          if(((c_160 != NULL) && (c_160 != d_160)))
            _fail(d_160);
          else
            c_160 = d_160;
        }
      }
      t = l_32;
      {
        ATerm f_160 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_160));
        {
          f_160 = t;
          if(((e_160 != NULL) && (e_160 != f_160)))
            _fail(f_160);
          else
            e_160 = f_160;
        }
        t = not_null(e_160);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm g_7 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        {
          ATerm o_32 = t;
          int p_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_32);
            }
          else
            {
              t = o_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_7);
  t = b_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_160 = NULL;
  k_160 = t;
  t = SSL_table_create(not_null(k_160));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_160 = NULL;
  o_160 = t;
  {
    ATerm q_32;
    q_32 = t;
    {
      t = term_r_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_32, term_s_32, not_null(o_160));
          t = table_put_0(t);
        }
      }
    }
    t = q_32;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_160 = NULL;
  s_160 = t;
  t = SSL_string_to_int(not_null(s_160));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm a_161 = NULL,b_161 = NULL,c_161 = NULL,d_161 = NULL,e_161 = NULL;
  a_161 = t;
  y_160 :
  if(match_string(a_161, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(a_161) == AT_LIST) && ((ATermList) a_161 != ATempty)))
        {
          b_161 = ATgetFirst((ATermList) a_161);
          c_161 = (ATerm) ATgetNext((ATermList) a_161);
          z_160 :
          if(((ATgetType(c_161) == AT_LIST) && ((ATermList) c_161 != ATempty)))
            {
              d_161 = ATgetFirst((ATermList) c_161);
              e_161 = (ATerm) ATgetNext((ATermList) c_161);
              {
                ATerm i_161 = NULL;
                ATerm t_32;
                t_32 = t;
                {
                  t = not_null(b_161);
                  t = n_0(t);
                }
                t = t_32;
                {
                  ATerm j_161 = NULL;
                  t = not_null(d_161);
                  {
                    t = o_0(t);
                    {
                      j_161 = t;
                      if(((i_161 != NULL) && (i_161 != j_161)))
                        _fail(j_161);
                      else
                        i_161 = j_161;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_161)), not_null(i_161));
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
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 (ATerm t)
      {
        ATerm b_162 = NULL;
        b_162 = t;
        n_161 :
        if(!(match_string(b_162, "-i")))
          {
            if(!(match_string(b_162, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_7 (ATerm t)
      {
        ATerm e_162 = NULL;
        ATerm w_32;
        w_32 = t;
        {
          ATerm c_162 = NULL;
          ATerm d_162 = NULL;
          d_162 = t;
          if(((c_162 != NULL) && (c_162 != d_162)))
            _fail(d_162);
          else
            c_162 = d_162;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_32, not_null(c_162));
            t = set_config_0(t);
          }
        }
        t = w_32;
        {
          ATerm f_162 = NULL;
          f_162 = t;
          if(((e_162 != NULL) && (e_162 != f_162)))
            _fail(f_162);
          else
            e_162 = f_162;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_162));
        }
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        t = term_y_32;
        return(t);
      }
      t = ArgOption_3(t, h_7, i_7, j_7);
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_7 (ATerm t)
            {
              ATerm g_162 = NULL;
              g_162 = t;
              q_161 :
              if(!(match_string(g_162, "-o")))
                {
                  if(!(match_string(g_162, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm l_7 (ATerm t)
            {
              ATerm j_162 = NULL;
              ATerm b_33;
              b_33 = t;
              {
                ATerm h_162 = NULL;
                ATerm i_162 = NULL;
                i_162 = t;
                if(((h_162 != NULL) && (h_162 != i_162)))
                  _fail(i_162);
                else
                  h_162 = i_162;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_33, not_null(h_162));
                  t = set_config_0(t);
                }
              }
              t = b_33;
              {
                ATerm k_162 = NULL;
                k_162 = t;
                if(((j_162 != NULL) && (j_162 != k_162)))
                  _fail(k_162);
                else
                  j_162 = k_162;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(j_162));
              }
              return(t);
            }
            ATerm m_7 (ATerm t)
            {
              t = term_d_33;
              return(t);
            }
            t = ArgOption_3(t, k_7, l_7, m_7);
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm e_33 = t;
              int f_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_7 (ATerm t)
                  {
                    ATerm l_162 = NULL;
                    l_162 = t;
                    t_161 :
                    if(!(match_string(l_162, "-S")))
                      {
                        if(!(match_string(l_162, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm o_7 (ATerm t)
                  {
                    t = term_g_33;
                    t = set_config_0(t);
                    t = term_h_33;
                    return(t);
                  }
                  ATerm p_7 (ATerm t)
                  {
                    t = term_i_33;
                    return(t);
                  }
                  t = Option_3(t, n_7, o_7, p_7);
                  LocalPopChoice(f_33);
                }
              else
                {
                  t = e_33;
                  {
                    ATerm j_33 = t;
                    int k_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_7 (ATerm t)
                        {
                          ATerm m_162 = NULL;
                          m_162 = t;
                          u_161 :
                          if(!(match_string(m_162, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm r_7 (ATerm t)
                        {
                          ATerm p_162 = NULL;
                          ATerm l_33;
                          l_33 = t;
                          {
                            ATerm n_162 = NULL;
                            ATerm o_162 = NULL;
                            t = string_to_int_0(t);
                            {
                              o_162 = t;
                              if(((n_162 != NULL) && (n_162 != o_162)))
                                _fail(o_162);
                              else
                                n_162 = o_162;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_30, not_null(n_162));
                              t = set_config_0(t);
                            }
                          }
                          t = l_33;
                          {
                            ATerm q_162 = NULL;
                            q_162 = t;
                            if(((p_162 != NULL) && (p_162 != q_162)))
                              _fail(q_162);
                            else
                              p_162 = q_162;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_162));
                          }
                          return(t);
                        }
                        ATerm s_7 (ATerm t)
                        {
                          t = term_m_33;
                          return(t);
                        }
                        t = ArgOption_3(t, q_7, r_7, s_7);
                        LocalPopChoice(k_33);
                      }
                    else
                      {
                        t = j_33;
                        {
                          ATerm n_33 = t;
                          int o_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_7 (ATerm t)
                              {
                                ATerm r_162 = NULL;
                                r_162 = t;
                                x_161 :
                                if(!(match_string(r_162, "-v")))
                                  {
                                    if(!(match_string(r_162, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm u_7 (ATerm t)
                              {
                                t = term_q_33;
                                t = set_config_0(t);
                                t = term_r_33;
                                return(t);
                              }
                              ATerm v_7 (ATerm t)
                              {
                                t = term_s_33;
                                return(t);
                              }
                              t = Option_3(t, t_7, u_7, v_7);
                              LocalPopChoice(o_33);
                            }
                          else
                            {
                              t = n_33;
                              {
                                ATerm t_33 = t;
                                int u_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_7 (ATerm t)
                                    {
                                      ATerm s_162 = NULL;
                                      s_162 = t;
                                      y_161 :
                                      if(!(match_string(s_162, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm x_7 (ATerm t)
                                    {
                                      t = term_w_33;
                                      t = set_config_0(t);
                                      t = term_x_33;
                                      return(t);
                                    }
                                    ATerm y_7 (ATerm t)
                                    {
                                      t = term_y_33;
                                      return(t);
                                    }
                                    t = Option_3(t, w_7, x_7, y_7);
                                    LocalPopChoice(u_33);
                                  }
                                else
                                  {
                                    t = t_33;
                                    {
                                      ATerm z_7 (ATerm t)
                                      {
                                        ATerm t_162 = NULL;
                                        t_162 = t;
                                        z_161 :
                                        if(!(match_string(t_162, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm a_8 (ATerm t)
                                      {
                                        t = term_a_34;
                                        t = set_config_0(t);
                                        t = term_b_34;
                                        return(t);
                                      }
                                      ATerm b_8 (ATerm t)
                                      {
                                        t = term_c_34;
                                        return(t);
                                      }
                                      t = Option_3(t, z_7, a_8, b_8);
                                    }
                                  }
                              }
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
  ATerm c_163 = NULL;
  c_163 = t;
  t = SSL_table_destroy(not_null(c_163));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_163 = NULL;
  g_163 = t;
  t = SSL_exit(not_null(g_163));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm k_163 = NULL;
  k_163 = t;
  t = SSL_implode_string(not_null(k_163));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm n_163 (ATerm t)
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_163);
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        {
          t = Nil_0(t);
          t = m_97(t);
        }
      }
    return(t);
  }
  t = n_163(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm q_163 = NULL,r_163 = NULL,s_163 = NULL;
        q_163 = t;
        p_163 :
        if(((ATgetType(q_163) == AT_LIST) && ((ATermList) q_163 != ATempty)))
          {
            r_163 = ATgetFirst((ATermList) q_163);
            s_163 = (ATerm) ATgetNext((ATermList) q_163);
            {
              t = not_null(r_163);
              {
                ATerm c_8 (ATerm t)
                {
                  t = not_null(s_163);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_8);
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
  ATerm y_163 = NULL;
  y_163 = t;
  t = SSL_explode_string(not_null(y_163));
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
ATerm long_description_1 (ATerm t, ATerm c_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_96 (ATerm))
{
  ATerm b_164 (ATerm t)
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = Cons_2(t, y_96, b_164);
      }
    return(t);
  }
  t = b_164(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm i_164 = NULL,j_164 = NULL,k_164 = NULL;
  k_164 = t;
  h_164 :
  if(((ATgetType(k_164) == AT_LIST) && ((ATermList) k_164 != ATempty)))
    {
      i_164 = ATgetFirst((ATermList) k_164);
      j_164 = (ATerm) ATgetNext((ATermList) k_164);
      {
        ATerm n_164 = NULL;
        t = not_null(j_164);
        {
          ATerm j_34;
          j_34 = t;
          {
            ATerm o_164 = NULL,q_164 = NULL,t_164 = NULL;
            ATerm k_34;
            k_34 = t;
            {
              ATerm p_164 = NULL;
              t = m_0(t);
              {
                p_164 = t;
                if(((o_164 != NULL) && (o_164 != p_164)))
                  _fail(p_164);
                else
                  o_164 = p_164;
              }
            }
            t = k_34;
            {
              ATerm r_164 = NULL;
              t = not_null(i_164);
              {
                t = l_0(t);
                {
                  r_164 = t;
                  if(((q_164 != NULL) && (q_164 != r_164)))
                    _fail(r_164);
                  else
                    q_164 = r_164;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_164)), not_null(q_164));
                {
                  t_164 = t;
                  if(((n_164 != NULL) && (n_164 != t_164)))
                    _fail(t_164);
                  else
                    n_164 = t_164;
                }
              }
            }
          }
          t = j_34;
          {
            ATerm d_8 (ATerm t)
            {
              t = not_null(n_164);
              return(t);
            }
            t = reverse_acc_2(t, l_0, d_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) k_164 == ATempty))
        {
          {
            t = term_z_18;
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
  ATerm e_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_84 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_68 (ATerm))
{
  ATerm e_165 = NULL,f_165 = NULL;
  e_165 = t;
  d_165 :
  if(match_cons(e_165, sym_Program_1))
    {
      f_165 = ATgetArgument(e_165, 0);
      {
        ATerm i_165 = NULL,k_165 = NULL;
        ATerm j_165 = NULL;
        t = SSLgetAnnotations(not_null(e_165));
        {
          j_165 = t;
          if(((i_165 != NULL) && (i_165 != j_165)))
            _fail(j_165);
          else
            i_165 = j_165;
        }
        {
          t = not_null(f_165);
          {
            ATerm n_165 = NULL;
            t = y_68(t);
            {
              k_165 = t;
              {
                ATerm o_165 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_165)), not_null(i_165));
                {
                  o_165 = t;
                  if(((n_165 != NULL) && (n_165 != o_165)))
                    _fail(o_165);
                  else
                    n_165 = o_165;
                }
                t = not_null(n_165);
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
  ATerm x_165 = NULL;
  ATerm f_8 (ATerm t)
  {
    ATerm g_8 (ATerm t)
    {
      ATerm y_165 = NULL;
      y_165 = t;
      if(((x_165 != NULL) && (x_165 != y_165)))
        _fail(y_165);
      else
        x_165 = y_165;
      return(t);
    }
    t = Program_1(t, g_8);
    return(t);
  }
  t = option_defined_1(t, f_8);
  {
    ATerm h_8 (ATerm t)
    {
      ATerm z_165 = NULL;
      ATerm a_166 = NULL;
      t = term_z_18;
      {
        ATerm i_8 (ATerm t)
        {
          t = not_null(x_165);
          return(t);
        }
        t = short_description_1(t, i_8);
        {
          t = concat_strings_0(t);
          {
            a_166 = t;
            if(((z_165 != NULL) && (z_165 != a_166)))
              _fail(a_166);
            else
              z_165 = a_166;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, not_null(z_165)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, term_l_34));
      {
        t = printnl_0(t);
        {
          t = term_o_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm b_166 = NULL;
                  b_166 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_166)), term_p_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_8);
                {
                  ATerm k_8 (ATerm t)
                  {
                    ATerm d_166 = NULL;
                    ATerm e_166 = NULL;
                    t = term_z_18;
                    {
                      ATerm l_8 (ATerm t)
                      {
                        t = not_null(x_165);
                        return(t);
                      }
                      t = long_description_1(t, l_8);
                      {
                        t = concat_strings_0(t);
                        {
                          e_166 = t;
                          if(((d_166 != NULL) && (d_166 != e_166)))
                            _fail(e_166);
                          else
                            d_166 = e_166;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_166)), term_q_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_8);
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
ATerm Undefined_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm o_166 = NULL,p_166 = NULL;
  o_166 = t;
  n_166 :
  if(match_cons(o_166, sym_Undefined_1))
    {
      p_166 = ATgetArgument(o_166, 0);
      {
        ATerm s_166 = NULL,u_166 = NULL;
        ATerm t_166 = NULL;
        t = SSLgetAnnotations(not_null(o_166));
        {
          t_166 = t;
          if(((s_166 != NULL) && (s_166 != t_166)))
            _fail(t_166);
          else
            s_166 = t_166;
        }
        {
          t = not_null(p_166);
          {
            ATerm w_166 = NULL;
            t = z_68(t);
            {
              u_166 = t;
              {
                ATerm x_166 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_166)), not_null(s_166));
                {
                  x_166 = t;
                  if(((w_166 != NULL) && (w_166 != x_166)))
                    _fail(x_166);
                  else
                    w_166 = x_166;
                }
                t = not_null(w_166);
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
ATerm fetch_1 (ATerm t, ATerm g_97 (ATerm))
{
  ATerm c_167 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_97, _id);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = Cons_2(t, _id, c_167);
      }
    return(t);
  }
  t = c_167(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_85 (ATerm))
{
  t = fetch_1(t, a_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_167 = NULL;
  h_167 = t;
  g_167 :
  if(match_cons(h_167, sym_Help_0))
    {
      ATerm j_167 = NULL,l_167 = NULL;
      ATerm t_34;
      t_34 = t;
      {
        ATerm k_167 = NULL;
        t = SSLgetAnnotations(not_null(h_167));
        {
          k_167 = t;
          if(((j_167 != NULL) && (j_167 != k_167)))
            _fail(k_167);
          else
            j_167 = k_167;
        }
      }
      t = t_34;
      {
        ATerm m_167 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_167));
        {
          m_167 = t;
          if(((l_167 != NULL) && (l_167 != m_167)))
            _fail(m_167);
          else
            l_167 = m_167;
        }
        t = not_null(l_167);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_104 (ATerm))
{
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_104(t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_167 = NULL,u_167 = NULL,v_167 = NULL;
  s_167 = t;
  r_167 :
  if(match_cons(s_167, sym__2))
    {
      u_167 = ATgetArgument(s_167, 0);
      v_167 = ATgetArgument(s_167, 1);
      t = SSL_table_get(not_null(u_167), not_null(v_167));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_168 = NULL,d_168 = NULL,e_168 = NULL,f_168 = NULL;
  c_168 = t;
  b_168 :
  if(match_cons(c_168, sym__3))
    {
      d_168 = ATgetArgument(c_168, 0);
      e_168 = ATgetArgument(c_168, 1);
      f_168 = ATgetArgument(c_168, 2);
      {
        ATerm w_34;
        w_34 = t;
        {
          ATerm j_168 = NULL;
          ATerm k_168 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_168), not_null(e_168));
          {
            ATerm x_34 = t;
            int y_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_34);
              }
            else
              {
                t = x_34;
                t = (ATerm) ATempty;
              }
            {
              k_168 = t;
              if(((j_168 != NULL) && (j_168 != k_168)))
                _fail(k_168);
              else
                j_168 = k_168;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_168), not_null(e_168), (ATerm) ATinsert(CheckATermList(not_null(j_168)), not_null(f_168)));
            t = table_put_0(t);
          }
        }
        t = w_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm p_168 = NULL;
  ATerm q_168 = NULL;
  t = term_z_18;
  {
    t = g_84(t);
    {
      q_168 = t;
      if(((p_168 != NULL) && (p_168 != q_168)))
        _fail(q_168);
      else
        p_168 = q_168;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_34, term_n_34, not_null(p_168));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm w_168 = NULL,y_168 = NULL,z_168 = NULL;
  w_168 = t;
  v_168 :
  if(match_string(w_168, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(w_168) == AT_LIST) && ((ATermList) w_168 != ATempty)))
        {
          y_168 = ATgetFirst((ATermList) w_168);
          z_168 = (ATerm) ATgetNext((ATermList) w_168);
          {
            ATerm c_169 = NULL;
            ATerm z_34;
            z_34 = t;
            {
              t = not_null(y_168);
              t = a_0(t);
            }
            t = z_34;
            {
              ATerm d_169 = NULL;
              t = term_z_18;
              {
                t = b_0(t);
                {
                  d_169 = t;
                  if(((c_169 != NULL) && (c_169 != d_169)))
                    _fail(d_169);
                  else
                    c_169 = d_169;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_168)), not_null(c_169));
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
  ATerm m_8 (ATerm t)
  {
    ATerm i_169 = NULL;
    i_169 = t;
    h_169 :
    if(!(match_string(i_169, "--help")))
      {
        if(!(match_string(i_169, "-h")))
          {
            if(!(match_string(i_169, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm n_8 (ATerm t)
  {
    t = term_a_35;
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    t = term_b_35;
    return(t);
  }
  t = Option_3(t, m_8, n_8, o_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL;
  l_169 = t;
  k_169 :
  if(((ATgetType(l_169) == AT_LIST) && ((ATermList) l_169 != ATempty)))
    {
      m_169 = ATgetFirst((ATermList) l_169);
      n_169 = (ATerm) ATgetNext((ATermList) l_169);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_169)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_169)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm y_169 = NULL,z_169 = NULL,b_170 = NULL;
  y_169 = t;
  x_169 :
  if(((ATgetType(y_169) == AT_LIST) && ((ATermList) y_169 != ATempty)))
    {
      z_169 = ATgetFirst((ATermList) y_169);
      b_170 = (ATerm) ATgetNext((ATermList) y_169);
      {
        ATerm f_170 = NULL,h_170 = NULL;
        ATerm g_170 = NULL;
        t = SSLgetAnnotations(not_null(y_169));
        {
          g_170 = t;
          if(((f_170 != NULL) && (f_170 != g_170)))
            _fail(g_170);
          else
            f_170 = g_170;
        }
        {
          t = not_null(z_169);
          {
            ATerm j_170 = NULL;
            t = p_78(t);
            {
              h_170 = t;
              {
                t = not_null(b_170);
                {
                  ATerm l_170 = NULL;
                  t = q_78(t);
                  {
                    j_170 = t;
                    {
                      ATerm n_170 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_170)), not_null(h_170)), not_null(f_170));
                      {
                        n_170 = t;
                        if(((l_170 != NULL) && (l_170 != n_170)))
                          _fail(n_170);
                        else
                          l_170 = n_170;
                      }
                      t = not_null(l_170);
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
  ATerm x_170 = NULL;
  x_170 = t;
  w_170 :
  if(((ATermList) x_170 == ATempty))
    {
      {
        ATerm z_170 = NULL,b_171 = NULL;
        ATerm c_35;
        c_35 = t;
        {
          ATerm a_171 = NULL;
          t = SSLgetAnnotations(not_null(x_170));
          {
            a_171 = t;
            if(((z_170 != NULL) && (z_170 != a_171)))
              _fail(a_171);
            else
              z_170 = a_171;
          }
        }
        t = c_35;
        {
          ATerm c_171 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_170));
          {
            c_171 = t;
            if(((b_171 != NULL) && (b_171 != c_171)))
              _fail(c_171);
            else
              b_171 = c_171;
          }
          t = not_null(b_171);
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
  ATerm j_171 = NULL,l_171 = NULL,m_171 = NULL;
  j_171 = t;
  i_171 :
  if(match_cons(j_171, sym__2))
    {
      l_171 = ATgetArgument(j_171, 0);
      m_171 = ATgetArgument(j_171, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_30, not_null(l_171), not_null(m_171));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm d_35;
  d_35 = t;
  {
    ATerm p_8 (ATerm t)
    {
      t = term_e_35;
      t = e_84(t);
      return(t);
    }
    t = try_1(t, p_8);
  }
  t = d_35;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm u_171 = NULL;
      ATerm f_35;
      f_35 = t;
      {
        ATerm s_171 = NULL;
        ATerm t_171 = NULL;
        t_171 = t;
        if(((s_171 != NULL) && (s_171 != t_171)))
          _fail(t_171);
        else
          s_171 = t_171;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_31, not_null(s_171));
          t = set_config_0(t);
        }
      }
      t = f_35;
      {
        ATerm v_171 = NULL;
        v_171 = t;
        if(((u_171 != NULL) && (u_171 != v_171)))
          _fail(v_171);
        else
          u_171 = v_171;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_171));
      }
      return(t);
    }
    ATerm r_8 (ATerm t)
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(j_35);
            }
          else
            {
              t = i_35;
              {
                t = e_84(t);
                t = Cons_2(t, _id, r_8);
              }
            }
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, q_8, r_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_172 = NULL,c_172 = NULL,d_172 = NULL;
  ATerm m_35;
  m_35 = t;
  {
    ATerm e_172 = NULL,g_172 = NULL,h_172 = NULL,i_172 = NULL;
    e_172 = t;
    a_172 :
    if(match_cons(e_172, sym__3))
      {
        g_172 = ATgetArgument(e_172, 0);
        h_172 = ATgetArgument(e_172, 1);
        i_172 = ATgetArgument(e_172, 2);
        {
          if(((b_172 != NULL) && (b_172 != g_172)))
            _fail(g_172);
          else
            b_172 = g_172;
          {
            if(((c_172 != NULL) && (c_172 != h_172)))
              _fail(h_172);
            else
              c_172 = h_172;
            {
              if(((d_172 != NULL) && (d_172 != i_172)))
                _fail(i_172);
              else
                d_172 = i_172;
              t = SSL_table_put(not_null(b_172), not_null(c_172), not_null(d_172));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm l_172 = NULL;
  ATerm n_35;
  n_35 = t;
  {
    t = term_o_35;
    t = table_put_0(t);
  }
  t = n_35;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm p_35 = t;
      int q_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_84(t);
          LocalPopChoice(q_35);
        }
      else
        {
          t = p_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_8);
    {
      ATerm t_8 (ATerm t)
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_h_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            {
              ATerm u_8 (ATerm t)
              {
                ATerm v_8 (ATerm t)
                {
                  ATerm m_172 = NULL;
                  m_172 = t;
                  if(((l_172 != NULL) && (l_172 != m_172)))
                    _fail(m_172);
                  else
                    l_172 = m_172;
                  return(t);
                }
                t = Undefined_1(t, v_8);
                return(t);
              }
              t = option_defined_1(t, u_8);
              {
                ATerm t_35;
                t_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_172)), term_u_35));
                  t = printnl_0(t);
                }
                t = t_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_8);
      {
        ATerm v_35;
        v_35 = t;
        {
          t = term_m_34;
          t = table_destroy_0(t);
        }
        t = v_35;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_86(t);
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, w_8);
  {
    t = store_options_0(t);
    {
      t = s_86(t);
      {
        ATerm y_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_86);
            LocalPopChoice(z_35);
          }
        else
          {
            t = y_35;
            {
              ATerm a_36 = t;
              int b_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, p_86);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(b_36);
                }
              else
                {
                  t = a_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    ATerm y_8 (ATerm t)
    {
      ATerm c_36;
      c_36 = t;
      {
        ATerm p_172 = NULL;
        ATerm q_172 = NULL;
        t = term_m_31;
        {
          t = get_config_0(t);
          {
            q_172 = t;
            if(((p_172 != NULL) && (p_172 != q_172)))
              _fail(q_172);
            else
              p_172 = q_172;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, not_null(p_172)));
          t = printnl_0(t);
        }
      }
      t = c_36;
      return(t);
    }
    t = if_verbose2_1(t, y_8);
    return(t);
  }
  t = iowrap_4(t, j_86, k_86, l_86, x_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm h_86 (ATerm), ATerm i_86 (ATerm))
{
  t = iowrap_3(t, h_86, i_86, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm z_8 (ATerm t)
  {
    t = _2(t, _id, e_86);
    return(t);
  }
  t = iowrap_2(t, z_8, _fail);
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
