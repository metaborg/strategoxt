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
ATerm term_f_28;
ATerm term_w_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_c_25;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
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
ATerm term_c_15;
ATerm term_b_15;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
void init_constant_terms (void)
{
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Wld_0);
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
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATinsert(ATempty, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
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
  term_j_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_i_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATinsert(ATempty, term_h_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_k_16, term_h_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATinsert(CheckATermList(term_k_16), term_h_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_n_16, term_h_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATinsert(CheckATermList(term_n_16), term_h_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_q_16, term_h_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATinsert(CheckATermList(term_q_16), term_h_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_t_16, term_h_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATinsert(CheckATermList(term_t_16), term_h_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_FunType_2, term_w_16, term_h_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATinsert(CheckATermList(term_w_16), term_h_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_FunType_2, term_z_16, term_h_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATinsert(CheckATermList(term_z_16), term_h_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_FunType_2, term_c_17, term_h_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATinsert(CheckATermList(term_c_17), term_h_16);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_FunType_2, term_f_17, term_h_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_n_11, term_g_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATinsert(ATempty, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATinsert(ATempty, term_g_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATinsert(ATempty, term_p_18);
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
  term_s_20 = (ATerm) ATmakeAppl(sym_Op_2, term_n_11, (ATerm) ATempty);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_20);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_21);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATinsert(ATempty, term_h_24);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATinsert(ATempty, term_j_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_k_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATinsert(ATempty, term_o_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATinsert(ATempty, term_c_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_d_27);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_f_27, term_g_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__3, term_f_27, term_g_27, (ATerm) ATempty);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Explode_2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm pat_td_1 (ATerm, ATerm s_56 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm l_52 (ATerm), ATerm m_52 (ATerm));
ATerm Con_3 (ATerm, ATerm i_52 (ATerm), ATerm j_52 (ATerm), ATerm k_52 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_76 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm t_53 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_53 (ATerm));
ATerm spaste_1 (ATerm, ATerm e_57 (ATerm));
ATerm Rec_2 (ATerm, ATerm z_54 (ATerm), ATerm a_55 (ATerm));
ATerm Let_2 (ATerm, ATerm b_55 (ATerm), ATerm c_55 (ATerm));
ATerm sboundin_3 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm h_57 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm y_54 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm y_59 (ATerm, ATerm (ATerm)), ATerm z_59 (ATerm), ATerm a_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_60 (ATerm, ATerm (ATerm)));
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
ATerm rewrite_1 (ATerm, ATerm p_63 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm c_78 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm k_63 (ATerm));
ATerm restore_always_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm j_63 (ATerm));
ATerm scope_2 (ATerm, ATerm l_63 (ATerm), ATerm m_63 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm n_63 (ATerm));
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm d_58 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm a_57 (ATerm));
ATerm Var_1 (ATerm, ATerm f_54 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm q_59 (ATerm), ATerm r_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm k_59 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm z_73 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm e_74 (ATerm));
ATerm substitute_6 (ATerm, ATerm i_60 (ATerm), ATerm j_60 (ATerm, ATerm (ATerm)), ATerm k_60 (ATerm), ATerm l_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_60 (ATerm, ATerm (ATerm)), ATerm n_60 (ATerm));
ATerm substitute_5 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm, ATerm (ATerm)), ATerm r_60 (ATerm), ATerm s_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_60 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm b_58 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm c_58 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm));
ATerm Overlay_3 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm), ATerm p_53 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm u_70 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm x_56 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm r_55 (ATerm), ATerm s_55 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm));
ATerm BAM_3 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm BA_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm AM_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm MA_2 (ATerm, ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm Match_1 (ATerm, ATerm z_55 (ATerm));
ATerm Build_1 (ATerm, ATerm a_56 (ATerm));
ATerm constructs_1 (ATerm, ATerm w_56 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm g_53 (ATerm), ATerm h_53 (ATerm), ATerm i_53 (ATerm));
ATerm SDef_3 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm r_53 (ATerm));
ATerm Signature_1 (ATerm, ATerm q_53 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm y_79 (ATerm));
ATerm one_dist_1 (ATerm, ATerm a_74 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm p_74 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm repeat_1 (ATerm, ATerm o_78 (ATerm));
ATerm listtd_1 (ATerm, ATerm l_73 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm j_53 (ATerm));
ATerm Scope_2 (ATerm, ATerm d_56 (ATerm), ATerm e_56 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm));
ATerm crush_3 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm for_3 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm HdMember_1 (ATerm, ATerm n_68 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm j_58 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm e_75 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm d_60 (ATerm), ATerm e_60 (ATerm));
ATerm alltd_1 (ATerm, ATerm i_77 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm zip_1 (ATerm, ATerm b_71 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm substitute_1 (ATerm, ATerm h_60 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm p_66 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_67 (ATerm), ATerm k_67 (ATerm));
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm c_75 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm v_45 (ATerm), ATerm w_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_63 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_65 (ATerm), ATerm y_65 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_63 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_72 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_61 (ATerm));
ATerm map_1 (ATerm, ATerm j_72 (ATerm));
ATerm reverse_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_61 (ATerm));
ATerm Program_1 (ATerm, ATerm e_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_62 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_61 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_61 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_61 (ATerm));
ATerm iowrap_3 (ATerm, ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm));
ATerm iowrap_2 (ATerm, ATerm p_62 (ATerm), ATerm q_62 (ATerm));
ATerm iowrap_1 (ATerm, ATerm m_62 (ATerm));
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_5)), not_null(w_5)), not_null(v_5)), not_null(u_5)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_5)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_5))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_5), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_5)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_5))))), (ATerm) ATmakeAppl(sym_Prim_2, term_l_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_5))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_5)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_6)), not_null(d_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_6))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_6)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_6)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_6)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_6))), (ATerm) ATmakeAppl(sym_Prim_2, term_m_11, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_6)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_6)), (ATerm) ATmakeAppl(sym_Op_2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_6)), not_null(n_6)))))));
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
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_Match_1))
    {
      x_7 = ATgetArgument(w_7, 0);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
            ATerm c_8 = NULL;
            ATerm f_8 = NULL;
            t = new_0(t);
            {
              c_8 = t;
              {
                if(((a_8 != NULL) && (a_8 != c_8)))
                  _fail(c_8);
                else
                  a_8 = c_8;
                {
                  t = not_null(x_7);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm d_8 = NULL,e_8 = NULL;
                      d_8 = t;
                      q_7 :
                      if(match_cons(d_8, sym_RootApp_1))
                        {
                          e_8 = ATgetArgument(d_8, 0);
                          {
                            if(((z_7 != NULL) && (z_7 != e_8)))
                              _fail(e_8);
                            else
                              z_7 = e_8;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_8));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, f_0);
                    {
                      f_8 = t;
                      if(((b_8 != NULL) && (b_8 != f_8)))
                        _fail(f_8);
                      else
                        b_8 = f_8;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(b_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_8))), not_null(z_7))));
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
              ATerm n_8 = NULL;
              t = not_null(x_7);
              {
                ATerm i_0 (ATerm t)
                {
                  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
                  k_8 = t;
                  t_7 :
                  if(match_cons(k_8, sym_App_2))
                    {
                      l_8 = ATgetArgument(k_8, 0);
                      m_8 = ATgetArgument(k_8, 1);
                      {
                        if(((h_8 != NULL) && (h_8 != l_8)))
                          _fail(l_8);
                        else
                          h_8 = l_8;
                        {
                          if(((i_8 != NULL) && (i_8 != m_8)))
                            _fail(m_8);
                          else
                            i_8 = m_8;
                          t = term_q_11;
                        }
                      }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = pat_td_1(t, i_0);
                {
                  n_8 = t;
                  if(((j_8 != NULL) && (j_8 != n_8)))
                    _fail(n_8);
                  else
                    j_8 = n_8;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_8)), (ATerm) ATmakeAppl(sym_BA_2, not_null(h_8), not_null(i_8)));
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  x_8 :
  if(match_cons(z_8, sym_Match_1))
    {
      a_9 = ATgetArgument(z_8, 0);
      y_8 :
      if(match_cons(a_9, sym_RootApp_1))
        {
          b_9 = ATgetArgument(a_9, 0);
          t = not_null(b_9);
        }
      else
        {
          if(match_cons(a_9, sym_App_2))
            {
              b_9 = ATgetArgument(a_9, 0);
              c_9 = ATgetArgument(a_9, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(b_9), not_null(c_9));
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
  ATerm o_9 = NULL,p_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Match_1))
    {
      p_9 = ATgetArgument(o_9, 0);
      {
        ATerm r_9 = NULL,s_9 = NULL;
        ATerm w_9 = NULL;
        t = not_null(p_9);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
            t_9 = t;
            k_9 :
            if(match_cons(t_9, sym_RootApp_1))
              {
                u_9 = ATgetArgument(t_9, 0);
                l_9 :
                if(match_cons(u_9, sym_Match_1))
                  {
                    v_9 = ATgetArgument(u_9, 0);
                    {
                      if(((r_9 != NULL) && (r_9 != v_9)))
                        _fail(v_9);
                      else
                        r_9 = v_9;
                      t = not_null(r_9);
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
            w_9 = t;
            if(((s_9 != NULL) && (s_9 != w_9)))
              _fail(w_9);
            else
              s_9 = w_9;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(s_9));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_Build_1))
    {
      m_10 = ATgetArgument(l_10, 0);
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
            ATerm r_10 = NULL;
            ATerm u_10 = NULL;
            t = new_0(t);
            {
              r_10 = t;
              {
                if(((p_10 != NULL) && (p_10 != r_10)))
                  _fail(r_10);
                else
                  p_10 = r_10;
                {
                  t = not_null(m_10);
                  {
                    ATerm r_0 (ATerm t)
                    {
                      ATerm s_10 = NULL,t_10 = NULL;
                      s_10 = t;
                      e_10 :
                      if(match_cons(s_10, sym_RootApp_1))
                        {
                          t_10 = ATgetArgument(s_10, 0);
                          {
                            if(((o_10 != NULL) && (o_10 != t_10)))
                              _fail(t_10);
                            else
                              o_10 = t_10;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_10));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, r_0);
                    {
                      u_10 = t;
                      if(((q_10 != NULL) && (q_10 != u_10)))
                        _fail(u_10);
                      else
                        q_10 = u_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_10), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_10))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_10))));
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,h_11 = NULL;
              ATerm i_11 = NULL;
              ATerm c_14 = NULL;
              t = new_0(t);
              {
                i_11 = t;
                {
                  if(((y_10 != NULL) && (y_10 != i_11)))
                    _fail(i_11);
                  else
                    y_10 = i_11;
                  {
                    t = not_null(m_10);
                    {
                      ATerm s_0 (ATerm t)
                      {
                        ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
                        z_13 = t;
                        i_10 :
                        if(match_cons(z_13, sym_App_2))
                          {
                            a_14 = ATgetArgument(z_13, 0);
                            b_14 = ATgetArgument(z_13, 1);
                            {
                              if(((w_10 != NULL) && (w_10 != a_14)))
                                _fail(a_14);
                              else
                                w_10 = a_14;
                              {
                                if(((x_10 != NULL) && (x_10 != b_14)))
                                  _fail(b_14);
                                else
                                  x_10 = b_14;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_10));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, s_0);
                      {
                        c_14 = t;
                        if(((h_11 != NULL) && (h_11 != c_14)))
                          _fail(c_14);
                        else
                          h_11 = c_14;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_10), not_null(x_10), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_10)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_11))));
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
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,k_17 = NULL;
  f_15 = t;
  d_15 :
  if(match_cons(f_15, sym_Build_1))
    {
      g_15 = ATgetArgument(f_15, 0);
      e_15 :
      if(match_cons(g_15, sym_RootApp_1))
        {
          h_15 = ATgetArgument(g_15, 0);
          t = not_null(h_15);
        }
      else
        {
          if(match_cons(g_15, sym_App_2))
            {
              h_15 = ATgetArgument(g_15, 0);
              k_17 = ATgetArgument(g_15, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_17)), not_null(h_15));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm n_19 = NULL,u_20 = NULL,v_20 = NULL;
  n_19 = t;
  m_19 :
  if(match_cons(n_19, sym_Explode_2))
    {
      u_20 = ATgetArgument(n_19, 0);
      v_20 = ATgetArgument(n_19, 1);
      {
        ATerm f_21 = NULL;
        t = not_null(u_20);
        {
          ATerm h_21 = NULL;
          t = r_52(t);
          {
            f_21 = t;
            {
              t = not_null(v_20);
              {
                t = s_52(t);
                {
                  h_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(f_21), not_null(h_21));
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
ATerm pat_td_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_56(t);
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
                t = pat_td_1(t, s_56);
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
                    t = pat_td_1(t, s_56);
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
                      t = pat_td_1(t, s_56);
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
  ATerm h_22 = NULL,i_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym_Build_1))
    {
      i_22 = ATgetArgument(h_22, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_22 = NULL,l_22 = NULL;
            ATerm r_22 = NULL;
            t = not_null(i_22);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm m_22 = NULL,p_22 = NULL,q_22 = NULL;
                m_22 = t;
                z_21 :
                if(match_cons(m_22, sym_RootApp_1))
                  {
                    p_22 = ATgetArgument(m_22, 0);
                    a_22 :
                    if(match_cons(p_22, sym_Build_1))
                      {
                        q_22 = ATgetArgument(p_22, 0);
                        {
                          if(((k_22 != NULL) && (k_22 != q_22)))
                            _fail(q_22);
                          else
                            k_22 = q_22;
                          t = not_null(k_22);
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
                r_22 = t;
                if(((l_22 != NULL) && (l_22 != r_22)))
                  _fail(r_22);
                else
                  l_22 = r_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_22));
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
              ATerm e_24 = NULL;
              t = not_null(i_22);
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,e_23 = NULL;
                  w_22 = t;
                  d_22 :
                  if(match_cons(w_22, sym_App_2))
                    {
                      x_22 = ATgetArgument(w_22, 0);
                      e_23 = ATgetArgument(w_22, 1);
                      e_22 :
                      if(match_cons(x_22, sym_Build_1))
                        {
                          y_22 = ATgetArgument(x_22, 0);
                          {
                            if(((u_22 != NULL) && (u_22 != y_22)))
                              _fail(y_22);
                            else
                              u_22 = y_22;
                            {
                              if(((t_22 != NULL) && (t_22 != e_23)))
                                _fail(e_23);
                              else
                                t_22 = e_23;
                              t = not_null(u_22);
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
                  e_24 = t;
                  if(((v_22 != NULL) && (v_22 != e_24)))
                    _fail(e_24);
                  else
                    v_22 = e_24;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(v_22));
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
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  n_25 = t;
  e_25 :
  if(match_cons(n_25, sym_InfixApp_3))
    {
      o_25 = ATgetArgument(n_25, 0);
      k_25 = ATgetArgument(n_25, 1);
      j_25 = ATgetArgument(n_25, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(k_25), (ATerm) ATmakeAppl(sym_Op_2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_25)), not_null(o_25))));
    }
  else
    {
      if(match_cons(n_25, sym_BAM_3))
        {
          o_25 = ATgetArgument(n_25, 0);
          k_25 = ATgetArgument(n_25, 1);
          j_25 = ATgetArgument(n_25, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(j_25))), not_null(o_25)), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_25))));
        }
      else
        {
          if(match_cons(n_25, sym_AM_2))
            {
              o_25 = ATgetArgument(n_25, 0);
              k_25 = ATgetArgument(n_25, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_25), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_25)));
            }
          else
            {
              if(match_cons(n_25, sym_MA_2))
                {
                  o_25 = ATgetArgument(n_25, 0);
                  k_25 = ATgetArgument(n_25, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_25)), not_null(k_25));
                }
              else
                {
                  if(match_cons(n_25, sym_BA_2))
                    {
                      o_25 = ATgetArgument(n_25, 0);
                      k_25 = ATgetArgument(n_25, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_25)), not_null(o_25));
                    }
                  else
                    {
                      if(match_cons(n_25, sym_Lets_2))
                        {
                          o_25 = ATgetArgument(n_25, 0);
                          k_25 = ATgetArgument(n_25, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(o_25), not_null(k_25));
                        }
                      else
                        {
                          if(match_cons(n_25, sym_LChoices_1))
                            {
                              o_25 = ATgetArgument(n_25, 0);
                              f_25 :
                              if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
                                {
                                  l_25 = ATgetFirst((ATermList) o_25);
                                  m_25 = (ATerm) ATgetNext((ATermList) o_25);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_25), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_25)));
                                }
                              else
                                {
                                  if(((ATermList) o_25 == ATempty))
                                    {
                                      t = term_b_12;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(n_25, sym_Choices_1))
                                {
                                  o_25 = ATgetArgument(n_25, 0);
                                  g_25 :
                                  if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
                                    {
                                      l_25 = ATgetFirst((ATermList) o_25);
                                      m_25 = (ATerm) ATgetNext((ATermList) o_25);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_25), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_25)));
                                    }
                                  else
                                    {
                                      if(((ATermList) o_25 == ATempty))
                                        {
                                          t = term_b_12;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(n_25, sym_Seqs_1))
                                    {
                                      o_25 = ATgetArgument(n_25, 0);
                                      h_25 :
                                      if(((ATgetType(o_25) == AT_LIST) && ((ATermList) o_25 != ATempty)))
                                        {
                                          l_25 = ATgetFirst((ATermList) o_25);
                                          m_25 = (ATerm) ATgetNext((ATermList) o_25);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_25), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_25)));
                                        }
                                      else
                                        {
                                          if(((ATermList) o_25 == ATempty))
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
  ATerm b_28 = NULL;
  b_28 = t;
  a_28 :
  if(!(match_cons(b_28, sym_Wld_0)))
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
ATerm App_2 (ATerm t, ATerm l_52 (ATerm), ATerm m_52 (ATerm))
{
  ATerm i_28 = NULL,j_28 = NULL,p_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym_App_2))
    {
      j_28 = ATgetArgument(i_28, 0);
      p_28 = ATgetArgument(i_28, 1);
      {
        ATerm s_28 = NULL;
        t = not_null(j_28);
        {
          ATerm u_28 = NULL;
          t = l_52(t);
          {
            s_28 = t;
            {
              t = not_null(p_28);
              {
                t = m_52(t);
                {
                  u_28 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_28), not_null(u_28));
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
ATerm Con_3 (ATerm t, ATerm i_52 (ATerm), ATerm j_52 (ATerm), ATerm k_52 (ATerm))
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_Con_3))
    {
      h_29 = ATgetArgument(g_29, 0);
      i_29 = ATgetArgument(g_29, 1);
      j_29 = ATgetArgument(g_29, 2);
      {
        ATerm n_29 = NULL;
        t = not_null(h_29);
        {
          ATerm p_29 = NULL;
          t = i_52(t);
          {
            n_29 = t;
            {
              t = not_null(i_29);
              {
                ATerm r_29 = NULL;
                t = j_52(t);
                {
                  p_29 = t;
                  {
                    t = not_null(j_29);
                    {
                      t = k_52(t);
                      {
                        r_29 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(n_29), not_null(p_29), not_null(r_29));
                      }
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
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  b_30 = t;
  z_29 :
  if(match_cons(b_30, sym_SRule_1))
    {
      c_30 = ATgetArgument(b_30, 0);
      a_30 :
      if(match_cons(c_30, sym_StratRule_3))
        {
          d_30 = ATgetArgument(c_30, 0);
          e_30 = ATgetArgument(c_30, 1);
          f_30 = ATgetArgument(c_30, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_30)), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_30))), not_null(d_30)));
        }
      else
        {
          if(match_cons(c_30, sym_Rule_3))
            {
              d_30 = ATgetArgument(c_30, 0);
              e_30 = ATgetArgument(c_30, 1);
              f_30 = ATgetArgument(c_30, 2);
              {
                t = not_null(d_30);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(e_30);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(e_30))), (ATerm) ATmakeAppl(sym_Where_1, not_null(f_30))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_30))));
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
ATerm oncetd_1 (ATerm t, ATerm u_76 (ATerm))
{
  ATerm p_30 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_76(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = _one(t, p_30);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,k_31 = NULL,l_31 = NULL;
  f_31 = t;
  d_31 :
  if(match_cons(f_31, sym_SRule_1))
    {
      g_31 = ATgetArgument(f_31, 0);
      e_31 :
      if(match_cons(g_31, sym_Rule_3))
        {
          h_31 = ATgetArgument(g_31, 0);
          k_31 = ATgetArgument(g_31, 1);
          l_31 = ATgetArgument(g_31, 2);
          {
            ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
            ATerm x_31 = NULL;
            ATerm d_32 = NULL;
            t = new_0(t);
            {
              x_31 = t;
              {
                if(((u_31 != NULL) && (u_31 != x_31)))
                  _fail(x_31);
                else
                  u_31 = x_31;
                {
                  t = not_null(h_31);
                  {
                    ATerm l_32 = NULL;
                    ATerm b_1 (ATerm t)
                    {
                      ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
                      y_31 = t;
                      t_30 :
                      if(match_cons(y_31, sym_Con_3))
                        {
                          z_31 = ATgetArgument(y_31, 0);
                          b_32 = ATgetArgument(y_31, 1);
                          c_32 = ATgetArgument(y_31, 2);
                          u_30 :
                          if(match_cons(z_31, sym_Var_1))
                            {
                              a_32 = ATgetArgument(z_31, 0);
                              {
                                if(((t_31 != NULL) && (t_31 != a_32)))
                                  _fail(a_32);
                                else
                                  t_31 = a_32;
                                {
                                  if(((r_31 != NULL) && (r_31 != b_32)))
                                    _fail(b_32);
                                  else
                                    r_31 = b_32;
                                  {
                                    if(((p_31 != NULL) && (p_31 != c_32)))
                                      _fail(c_32);
                                    else
                                      p_31 = c_32;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_31));
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
                      d_32 = t;
                      {
                        if(((v_31 != NULL) && (v_31 != d_32)))
                          _fail(d_32);
                        else
                          v_31 = d_32;
                        {
                          t = not_null(k_31);
                          {
                            ATerm c_1 (ATerm t)
                            {
                              ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL;
                              e_32 = t;
                              y_30 :
                              if(match_cons(e_32, sym_Con_3))
                                {
                                  f_32 = ATgetArgument(e_32, 0);
                                  h_32 = ATgetArgument(e_32, 1);
                                  i_32 = ATgetArgument(e_32, 2);
                                  z_30 :
                                  if(match_cons(f_32, sym_Var_1))
                                    {
                                      g_32 = ATgetArgument(f_32, 0);
                                      a_31 :
                                      if(match_cons(i_32, sym_Call_2))
                                        {
                                          j_32 = ATgetArgument(i_32, 0);
                                          k_32 = ATgetArgument(i_32, 1);
                                          b_31 :
                                          if(((ATermList) k_32 == ATempty))
                                            {
                                              {
                                                if(((t_31 != NULL) && (t_31 != g_32)))
                                                  _fail(g_32);
                                                else
                                                  t_31 = g_32;
                                                {
                                                  if(((s_31 != NULL) && (s_31 != h_32)))
                                                    _fail(h_32);
                                                  else
                                                    s_31 = h_32;
                                                  {
                                                    if(((q_31 != NULL) && (q_31 != j_32)))
                                                      _fail(j_32);
                                                    else
                                                      q_31 = j_32;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_31));
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
                              l_32 = t;
                              if(((w_31 != NULL) && (w_31 != l_32)))
                                _fail(l_32);
                              else
                                w_31 = l_32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_31)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_31), not_null(w_31), (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_31), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(q_31), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_31), not_null(s_31), term_c_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_31)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_31)))))));
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
ATerm Strategies_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_Strategies_1))
    {
      x_32 = ATgetArgument(w_32, 0);
      {
        ATerm z_32 = NULL;
        t = not_null(x_32);
        {
          t = t_53(t);
          {
            z_32 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(z_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm g_33 = NULL,h_33 = NULL;
  g_33 = t;
  f_33 :
  if(match_cons(g_33, sym_Specification_1))
    {
      h_33 = ATgetArgument(g_33, 0);
      {
        ATerm j_33 = NULL;
        t = not_null(h_33);
        {
          t = v_53(t);
          {
            j_33 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(j_33));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_1 (ATerm t)
      {
        t = split_2(t, _id, e_57);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
            t_33 = t;
            o_33 :
            if(match_cons(t_33, sym__2))
              {
                u_33 = ATgetArgument(t_33, 0);
                y_33 = ATgetArgument(t_33, 1);
                p_33 :
                if(match_cons(u_33, sym_SDef_3))
                  {
                    v_33 = ATgetArgument(u_33, 0);
                    w_33 = ATgetArgument(u_33, 1);
                    x_33 = ATgetArgument(u_33, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_33), not_null(w_33), not_null(x_33));
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
              t = split_2(t, _id, e_57);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
                  c_34 = t;
                  r_33 :
                  if(match_cons(c_34, sym__2))
                    {
                      d_34 = ATgetArgument(c_34, 0);
                      g_34 = ATgetArgument(c_34, 1);
                      s_33 :
                      if(match_cons(d_34, sym_VarDec_2))
                        {
                          e_34 = ATgetArgument(d_34, 0);
                          f_34 = ATgetArgument(d_34, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_34), not_null(f_34));
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
                t = e_57(t);
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
ATerm Rec_2 (ATerm t, ATerm z_54 (ATerm), ATerm a_55 (ATerm))
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  p_34 :
  if(match_cons(q_34, sym_Rec_2))
    {
      r_34 = ATgetArgument(q_34, 0);
      s_34 = ATgetArgument(q_34, 1);
      {
        ATerm v_34 = NULL;
        t = not_null(r_34);
        {
          ATerm x_34 = NULL;
          t = z_54(t);
          {
            v_34 = t;
            {
              t = not_null(s_34);
              {
                t = a_55(t);
                {
                  x_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(v_34), not_null(x_34));
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
ATerm Let_2 (ATerm t, ATerm b_55 (ATerm), ATerm c_55 (ATerm))
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  k_35 :
  if(match_cons(l_35, sym_Let_2))
    {
      m_35 = ATgetArgument(l_35, 0);
      n_35 = ATgetArgument(l_35, 1);
      {
        ATerm q_35 = NULL;
        t = not_null(m_35);
        {
          ATerm s_35 = NULL;
          t = b_55(t);
          {
            q_35 = t;
            {
              t = not_null(n_35);
              {
                t = c_55(t);
                {
                  s_35 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_35), not_null(s_35));
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
ATerm sboundin_3 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm h_57 (ATerm))
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, f_57, f_57);
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
            t = SDef_3(t, h_57, h_57, f_57);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = Rec_2(t, h_57, f_57);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  y_35 :
  if(match_cons(z_35, sym_Rec_2))
    {
      a_36 = ATgetArgument(z_35, 0);
      b_36 = ATgetArgument(z_35, 1);
      t = (ATerm) ATinsert(ATempty, not_null(a_36));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym_SDef_3))
    {
      o_36 = ATgetArgument(n_36, 0);
      p_36 = ATgetArgument(n_36, 1);
      q_36 = ATgetArgument(n_36, 2);
      {
        t = not_null(p_36);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
            u_36 = t;
            l_36 :
            if(match_cons(u_36, sym_VarDec_2))
              {
                v_36 = ATgetArgument(u_36, 0);
                w_36 = ATgetArgument(u_36, 1);
                t = not_null(v_36);
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
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  h_37 :
  if(match_cons(k_37, sym_Let_2))
    {
      l_37 = ATgetArgument(k_37, 0);
      m_37 = ATgetArgument(k_37, 1);
      {
        t = not_null(l_37);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm v_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
            v_37 = t;
            g_37 :
            if(match_cons(v_37, sym_SDef_3))
              {
                x_37 = ATgetArgument(v_37, 0);
                y_37 = ATgetArgument(v_37, 1);
                z_37 = ATgetArgument(v_37, 2);
                t = not_null(x_37);
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
ATerm SVar_1 (ATerm t, ATerm y_54 (ATerm))
{
  ATerm i_38 = NULL,j_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym_SVar_1))
    {
      j_38 = ATgetArgument(i_38, 0);
      {
        ATerm l_38 = NULL;
        t = not_null(j_38);
        {
          t = y_54(t);
          {
            l_38 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(l_38));
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
ATerm rename_4 (ATerm t, ATerm y_59 (ATerm, ATerm (ATerm)), ATerm z_59 (ATerm), ATerm a_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_60 (ATerm, ATerm (ATerm)))
{
  ATerm q_38 = NULL;
  q_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_38), (ATerm) ATempty);
    {
      ATerm t_38 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, y_59);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              {
                t = RnBinding_2(t, z_59, b_60);
                t = DistBinding_2(t, t_38, a_60);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, p_1);
        return(t);
      }
      t = t_38(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm u_38 (ATerm t, ATerm v_38 (ATerm))
  {
    t = Scope_2(t, v_38, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, u_38);
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
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_SDef_3))
    {
      e_39 = ATgetArgument(d_39, 0);
      f_39 = ATgetArgument(d_39, 1);
      g_39 = ATgetArgument(d_39, 2);
      {
        ATerm s_39 = NULL;
        ATerm t_39 = NULL;
        t = not_null(g_39);
        {
          t = tvars_0(t);
          {
            t_39 = t;
            if(((s_39 != NULL) && (s_39 != t_39)))
              _fail(t_39);
            else
              s_39 = t_39;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_39), not_null(f_39), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_39), not_null(g_39)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RDtoSD_0 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym_RDef_3))
    {
      e_40 = ATgetArgument(d_40, 0);
      f_40 = ATgetArgument(d_40, 1);
      g_40 = ATgetArgument(d_40, 2);
      {
        ATerm k_40 = NULL;
        ATerm l_40 = NULL;
        t = not_null(g_40);
        {
          t = tvars_0(t);
          {
            l_40 = t;
            if(((k_40 != NULL) && (k_40 != l_40)))
              _fail(l_40);
            else
              k_40 = l_40;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_40), not_null(f_40), (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_40), (ATerm) ATmakeAppl(sym_SRule_1, not_null(g_40))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MkCall_0 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_40)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  c_41 = t;
  z_40 :
  if(match_cons(c_41, sym_OpDecl_2))
    {
      d_41 = ATgetArgument(c_41, 0);
      e_41 = ATgetArgument(c_41, 1);
      a_41 :
      if(match_cons(e_41, sym_FunType_2))
        {
          f_41 = ATgetArgument(e_41, 0);
          b_41 = ATgetArgument(e_41, 1);
          {
            ATerm j_41 = NULL,k_41 = NULL,w_41 = NULL;
            ATerm r_13;
            r_13 = t;
            {
              ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
              t = not_null(f_41);
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm l_41 = NULL,n_41 = NULL;
                  t = new_0(t);
                  {
                    ATerm s_13;
                    s_13 = t;
                    {
                      ATerm m_41 = NULL;
                      m_41 = t;
                      if(((l_41 != NULL) && (l_41 != m_41)))
                        _fail(m_41);
                      else
                        l_41 = m_41;
                    }
                    t = s_13;
                    {
                      ATerm o_41 = NULL;
                      o_41 = t;
                      if(((n_41 != NULL) && (n_41 != o_41)))
                        _fail(o_41);
                      else
                        n_41 = o_41;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(l_41), term_x_13), not_null(n_41));
                    }
                  }
                  return(t);
                }
                t = map_1(t, q_1);
                {
                  t = unzip_0(t);
                  {
                    p_41 = t;
                    x_40 :
                    if(match_cons(p_41, sym__2))
                      {
                        q_41 = ATgetArgument(p_41, 0);
                        r_41 = ATgetArgument(p_41, 1);
                        {
                          if(((j_41 != NULL) && (j_41 != q_41)))
                            _fail(q_41);
                          else
                            j_41 = q_41;
                          if(((k_41 != NULL) && (k_41 != r_41)))
                            _fail(r_41);
                          else
                            k_41 = r_41;
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
              ATerm x_41 = NULL;
              t = not_null(k_41);
              {
                t = map_1(t, MkCall_0);
                {
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_41), not_null(j_41), (ATerm) ATmakeAppl(sym_Cong_2, not_null(d_41), not_null(w_41)));
            }
          }
        }
      else
        {
          if(match_cons(e_41, sym_ConstType_1))
            {
              f_41 = ATgetArgument(e_41, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_41), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(d_41), (ATerm) ATempty));
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
  ATerm l_42 = NULL,m_42 = NULL;
  l_42 = t;
  k_42 :
  if(match_cons(l_42, sym_Constructors_1))
    {
      m_42 = ATgetArgument(l_42, 0);
      {
        t = not_null(m_42);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(l_42, sym_Sorts_1))
        {
          m_42 = ATgetArgument(l_42, 0);
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
  ATerm u_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  u_45 = t;
  f_43 :
  if(match_cons(u_45, sym_Specification_1))
    {
      a_46 = ATgetArgument(u_45, 0);
      g_43 :
      if(((ATgetType(a_46) == AT_LIST) && ((ATermList) a_46 != ATempty)))
        {
          b_46 = ATgetFirst((ATermList) a_46);
          d_46 = (ATerm) ATgetNext((ATermList) a_46);
          h_43 :
          if(match_cons(b_46, sym_Signature_1))
            {
              c_46 = ATgetArgument(b_46, 0);
              g_44 :
              if(((ATgetType(d_46) == AT_LIST) && ((ATermList) d_46 != ATempty)))
                {
                  e_46 = ATgetFirst((ATermList) d_46);
                  g_46 = (ATerm) ATgetNext((ATermList) d_46);
                  h_44 :
                  if(match_cons(e_46, sym_Strategies_1))
                    {
                      f_46 = ATgetArgument(e_46, 0);
                      i_44 :
                      if(((ATermList) g_46 == ATempty))
                        {
                          {
                            ATerm j_46 = NULL;
                            ATerm k_46 = NULL,m_46 = NULL,o_46 = NULL;
                            ATerm y_13;
                            y_13 = t;
                            {
                              ATerm l_46 = NULL;
                              t = not_null(c_46);
                              {
                                t = congdefs_0(t);
                                {
                                  l_46 = t;
                                  if(((k_46 != NULL) && (k_46 != l_46)))
                                    _fail(l_46);
                                  else
                                    k_46 = l_46;
                                }
                              }
                            }
                            t = y_13;
                            {
                              ATerm n_46 = NULL;
                              t = not_null(f_46);
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  ATerm d_14 = t;
                                  int e_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(e_14);
                                    }
                                  else
                                    {
                                      t = d_14;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, r_1);
                                {
                                  n_46 = t;
                                  if(((m_46 != NULL) && (m_46 != n_46)))
                                    _fail(n_46);
                                  else
                                    m_46 = n_46;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_46), not_null(m_46));
                                {
                                  t = conc_0(t);
                                  {
                                    o_46 = t;
                                    if(((j_46 != NULL) && (j_46 != o_46)))
                                      _fail(o_46);
                                    else
                                      j_46 = o_46;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_46))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(c_46))));
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
  ATerm u_46 = NULL;
  u_46 = t;
  t = SSL_int_to_string(not_null(u_46));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm d_47 = NULL,g_47 = NULL,h_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_cons(d_47, sym_Op_2))
    {
      g_47 = ATgetArgument(d_47, 0);
      h_47 = ATgetArgument(d_47, 1);
      {
        ATerm k_47 = NULL,l_47 = NULL;
        ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL;
        t = term_f_14;
        {
          ATerm s_1 (ATerm t)
          {
            t = term_g_14;
            return(t);
          }
          t = rewrite_1(t, s_1);
          {
            m_47 = t;
            a_47 :
            if(match_cons(m_47, sym_Defined_3))
              {
                n_47 = ATgetArgument(m_47, 0);
                o_47 = ATgetArgument(m_47, 1);
                p_47 = ATgetArgument(m_47, 2);
                b_47 :
                if(match_string(n_47, "h_0"))
                  {
                    ATerm q_47 = NULL;
                    if(((l_47 != NULL) && (l_47 != o_47)))
                      _fail(o_47);
                    else
                      l_47 = o_47;
                    {
                      if(((k_47 != NULL) && (k_47 != p_47)))
                        _fail(p_47);
                      else
                        k_47 = p_47;
                      {
                        ATerm r_47 = NULL;
                        t = not_null(h_47);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              r_47 = t;
                              if(((q_47 != NULL) && (q_47 != r_47)))
                                _fail(r_47);
                              else
                                q_47 = r_47;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_o_14), not_null(q_47)), term_m_14), not_null(g_47)), term_l_14), term_k_14), not_null(l_47)), term_j_14), not_null(k_47)), term_i_14));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_47), not_null(h_47));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(((ATgetType(x_47) == AT_LIST) && ((ATermList) x_47 != ATempty)))
    {
      y_47 = ATgetFirst((ATermList) x_47);
      z_47 = (ATerm) ATgetNext((ATermList) x_47);
      t = not_null(y_47);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  e_48 :
  if(match_cons(f_48, sym__2))
    {
      g_48 = ATgetArgument(f_48, 0);
      h_48 = ATgetArgument(f_48, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_48), not_null(h_48));
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
ATerm rewrite_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm n_48 = NULL;
  ATerm p_48 = NULL;
  n_48 = t;
  {
    ATerm q_48 = NULL;
    t = term_p_14;
    {
      t = p_63(t);
      {
        q_48 = t;
        if(((p_48 != NULL) && (p_48 != q_48)))
          _fail(q_48);
        else
          p_48 = q_48;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_48), not_null(n_48));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  f_49 :
  if(match_cons(g_49, sym_Op_2))
    {
      h_49 = ATgetArgument(g_49, 0);
      i_49 = ATgetArgument(g_49, 1);
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_49 = NULL;
            ATerm n_49 = NULL;
            t = not_null(i_49);
            {
              l_49 = t;
              {
                t = length_0(t);
                {
                  n_49 = t;
                  {
                    ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_49), not_null(n_49));
                    {
                      ATerm t_1 (ATerm t)
                      {
                        t = term_s_14;
                        return(t);
                      }
                      t = rewrite_1(t, t_1);
                      {
                        p_49 = t;
                        y_48 :
                        if(match_cons(p_49, sym_Defined_2))
                          {
                            q_49 = ATgetArgument(p_49, 0);
                            r_49 = ATgetArgument(p_49, 1);
                            z_48 :
                            if(match_string(q_49, "d_0"))
                              {
                                if(((h_49 != NULL) && (h_49 != r_49)))
                                  _fail(r_49);
                                else
                                  h_49 = r_49;
                              }
                            else
                              _fail(t);
                          }
                        else
                          _fail(t);
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_49), not_null(l_49));
                  }
                }
              }
            }
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm u_49 = NULL;
              ATerm w_49 = NULL;
              t = not_null(i_49);
              {
                u_49 = t;
                {
                  t = length_0(t);
                  {
                    w_49 = t;
                    {
                      ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_49), not_null(w_49));
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = term_s_14;
                          return(t);
                        }
                        t = rewrite_1(t, u_1);
                        {
                          y_49 = t;
                          d_49 :
                          if(match_cons(y_49, sym_Defined_2))
                            {
                              z_49 = ATgetArgument(y_49, 0);
                              a_50 = ATgetArgument(y_49, 1);
                              e_49 :
                              if(match_string(z_49, "c_0"))
                                {
                                  if(((h_49 != NULL) && (h_49 != a_50)))
                                    _fail(a_50);
                                  else
                                    h_49 = a_50;
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_49), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm j_50 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_78(t);
        {
          ATerm v_1 (ATerm t)
          {
            t = try_1(t, j_50);
            return(t);
          }
          t = _all(t, v_1);
        }
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = _some(t, j_50);
      }
    return(t);
  }
  t = j_50(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  m_50 :
  if(match_cons(n_50, sym__2))
    {
      o_50 = ATgetArgument(n_50, 0);
      p_50 = ATgetArgument(n_50, 1);
      {
        ATerm v_14;
        v_14 = t;
        {
          ATerm s_50 = NULL;
          ATerm t_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_50), not_null(p_50));
          {
            ATerm w_14 = t;
            int x_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_14);
              }
            else
              {
                t = w_14;
                t = (ATerm) ATempty;
              }
            {
              t_50 = t;
              if(((s_50 != NULL) && (s_50 != t_50)))
                _fail(t_50);
              else
                s_50 = t_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_50), not_null(p_50), not_null(s_50));
            t = table_put_0(t);
          }
        }
        t = v_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  ATerm y_14;
  y_14 = t;
  {
    ATerm d_51 = NULL;
    ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
    t = k_63(t);
    {
      d_51 = t;
      {
        if(((b_51 != NULL) && (b_51 != d_51)))
          _fail(d_51);
        else
          b_51 = d_51;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), term_b_15);
              t = table_get_0(t);
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = term_c_15;
            }
          {
            e_51 = t;
            z_50 :
            if(((ATgetType(e_51) == AT_LIST) && ((ATermList) e_51 != ATempty)))
              {
                f_51 = ATgetFirst((ATermList) e_51);
                g_51 = (ATerm) ATgetNext((ATermList) e_51);
                {
                  if(((c_51 != NULL) && (c_51 != f_51)))
                    _fail(f_51);
                  else
                    c_51 = f_51;
                  {
                    if(((a_51 != NULL) && (a_51 != g_51)))
                      _fail(g_51);
                    else
                      a_51 = g_51;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_51), term_b_15, not_null(a_51));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(c_51);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              ATerm h_51 = NULL;
                              h_51 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), not_null(h_51));
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
  t = y_14;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_79(t);
      t = w_79(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        t = w_79(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm j_63 (ATerm))
{
  ATerm o_51 = NULL;
  ATerm k_15;
  k_15 = t;
  {
    ATerm p_51 = NULL;
    ATerm q_51 = NULL;
    t = j_63(t);
    {
      p_51 = t;
      {
        if(((o_51 != NULL) && (o_51 != p_51)))
          _fail(p_51);
        else
          o_51 = p_51;
        {
          ATerm r_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_51), term_b_15);
          {
            ATerm l_15 = t;
            int m_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_15);
              }
            else
              {
                t = l_15;
                t = (ATerm) ATempty;
              }
            {
              r_51 = t;
              if(((q_51 != NULL) && (q_51 != r_51)))
                _fail(r_51);
              else
                q_51 = r_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_51), term_b_15, (ATerm) ATinsert(CheckATermList(not_null(q_51)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_15;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm l_63 (ATerm), ATerm m_63 (ATerm))
{
  t = begin_scope_1(t, l_63);
  {
    ATerm x_1 (ATerm t)
    {
      t = end_scope_1(t, l_63);
      return(t);
    }
    t = restore_always_2(t, m_63, x_1);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm w_51 = NULL,x_51 = NULL;
  ATerm y_1 (ATerm t)
  {
    t = term_g_14;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm n_15;
    n_15 = t;
    {
      ATerm y_51 = NULL;
      ATerm n_52 = NULL;
      t = u_56(t);
      {
        y_51 = t;
        {
          if(((w_51 != NULL) && (w_51 != y_51)))
            _fail(y_51);
          else
            w_51 = y_51;
          {
            t = v_56(t);
            {
              n_52 = t;
              if(((x_51 != NULL) && (x_51 != n_52)))
                _fail(n_52);
              else
                x_51 = n_52;
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
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATmakeAppl(sym_Defined_3, term_p_15, not_null(w_51), not_null(x_51)));
        {
          ATerm a_2 (ATerm t)
          {
            t = term_g_14;
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
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,b_53 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym_SDef_3))
    {
      w_52 = ATgetArgument(v_52, 0);
      x_52 = ATgetArgument(v_52, 1);
      b_53 = ATgetArgument(v_52, 2);
      {
        t = not_null(b_53);
        {
          ATerm c_2 (ATerm t)
          {
            t = not_null(w_52);
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
      if(match_cons(v_52, sym_RDef_3))
        {
          w_52 = ATgetArgument(v_52, 0);
          x_52 = ATgetArgument(v_52, 1);
          b_53 = ATgetArgument(v_52, 2);
          {
            t = not_null(b_53);
            {
              ATerm e_2 (ATerm t)
              {
                t = not_null(w_52);
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
ATerm assert_1 (ATerm t, ATerm n_63 (ATerm))
{
  ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
  a_54 = t;
  z_53 :
  if(match_cons(a_54, sym__2))
    {
      b_54 = ATgetArgument(a_54, 0);
      c_54 = ATgetArgument(a_54, 1);
      {
        ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
        ATerm t_15;
        t_15 = t;
        {
          ATerm l_54 = NULL;
          ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
          t = n_63(t);
          {
            l_54 = t;
            {
              if(((g_54 != NULL) && (g_54 != l_54)))
                _fail(l_54);
              else
                g_54 = l_54;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_54), not_null(b_54), not_null(c_54));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_54), term_b_15);
                        t = table_get_0(t);
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = u_15;
                        t = term_c_15;
                      }
                    {
                      m_54 = t;
                      y_53 :
                      if(((ATgetType(m_54) == AT_LIST) && ((ATermList) m_54 != ATempty)))
                        {
                          n_54 = ATgetFirst((ATermList) m_54);
                          o_54 = (ATerm) ATgetNext((ATermList) m_54);
                          {
                            if(((h_54 != NULL) && (h_54 != n_54)))
                              _fail(n_54);
                            else
                              h_54 = n_54;
                            {
                              if(((i_54 != NULL) && (i_54 != o_54)))
                                _fail(o_54);
                              else
                                i_54 = o_54;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(g_54), term_b_15, (ATerm) ATinsert(CheckATermList(not_null(i_54)), (ATerm) ATinsert(CheckATermList(not_null(h_54)), not_null(b_54))));
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
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  u_54 = t;
  t_54 :
  if(match_cons(u_54, sym__2))
    {
      v_54 = ATgetArgument(u_54, 0);
      w_54 = ATgetArgument(u_54, 1);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_54), not_null(w_54));
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = SSL_addr(not_null(v_54), not_null(w_54));
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
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,t_55 = NULL,u_55 = NULL;
  p_55 = t;
  m_55 :
  if(match_cons(p_55, sym_OpDecl_2))
    {
      q_55 = ATgetArgument(p_55, 0);
      t_55 = ATgetArgument(p_55, 1);
      n_55 :
      if(match_cons(t_55, sym_FunType_2))
        {
          u_55 = ATgetArgument(t_55, 0);
          o_55 = ATgetArgument(t_55, 1);
          {
            ATerm y_55 = NULL;
            ATerm a_16;
            a_16 = t;
            {
              ATerm b_56 = NULL;
              t = not_null(u_55);
              {
                t = length_0(t);
                {
                  b_56 = t;
                  if(((y_55 != NULL) && (y_55 != b_56)))
                    _fail(b_56);
                  else
                    y_55 = b_56;
                }
              }
            }
            t = a_16;
            {
              ATerm b_16;
              b_16 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(q_55), not_null(y_55)), (ATerm) ATmakeAppl(sym_Defined_2, term_c_16, not_null(q_55)));
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = term_s_14;
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
          if(match_cons(t_55, sym_ConstType_1))
            {
              u_55 = ATgetArgument(t_55, 0);
              {
                ATerm g_56 = NULL;
                ATerm d_16;
                d_16 = t;
                {
                  ATerm h_56 = NULL;
                  t = term_y_15;
                  {
                    h_56 = t;
                    if(((g_56 != NULL) && (g_56 != h_56)))
                      _fail(h_56);
                    else
                      g_56 = h_56;
                  }
                }
                t = d_16;
                {
                  ATerm e_16;
                  e_16 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(q_55), not_null(g_56)), (ATerm) ATmakeAppl(sym_Defined_2, term_f_16, not_null(q_55)));
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = term_s_14;
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
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL;
  p_57 = t;
  r_56 :
  if(match_cons(p_57, sym_Specification_1))
    {
      q_57 = ATgetArgument(p_57, 0);
      z_56 :
      if(((ATgetType(q_57) == AT_LIST) && ((ATermList) q_57 != ATempty)))
        {
          r_57 = ATgetFirst((ATermList) q_57);
          w_57 = (ATerm) ATgetNext((ATermList) q_57);
          i_57 :
          if(match_cons(r_57, sym_Signature_1))
            {
              s_57 = ATgetArgument(r_57, 0);
              j_57 :
              if(((ATgetType(s_57) == AT_LIST) && ((ATermList) s_57 != ATempty)))
                {
                  t_57 = ATgetFirst((ATermList) s_57);
                  v_57 = (ATerm) ATgetNext((ATermList) s_57);
                  k_57 :
                  if(match_cons(t_57, sym_Constructors_1))
                    {
                      u_57 = ATgetArgument(t_57, 0);
                      l_57 :
                      if(((ATermList) v_57 == ATempty))
                        {
                          m_57 :
                          if(((ATgetType(w_57) == AT_LIST) && ((ATermList) w_57 != ATempty)))
                            {
                              x_57 = ATgetFirst((ATermList) w_57);
                              z_57 = (ATerm) ATgetNext((ATermList) w_57);
                              n_57 :
                              if(match_cons(x_57, sym_Strategies_1))
                                {
                                  y_57 = ATgetArgument(x_57, 0);
                                  o_57 :
                                  if(((ATermList) z_57 == ATempty))
                                    {
                                      {
                                        ATerm g_58 = NULL;
                                        ATerm l_58 = NULL;
                                        ATerm m_58 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_57)), term_h_17), term_e_17), term_b_17), term_y_16), term_v_16), term_s_16), term_p_16), term_m_16), term_j_16);
                                        {
                                          l_58 = t;
                                          {
                                            if(((g_58 != NULL) && (g_58 != l_58)))
                                              _fail(l_58);
                                            else
                                              g_58 = l_58;
                                            {
                                              t = not_null(g_58);
                                              {
                                                t = map_1(t, GenerateCheckRule_0);
                                                {
                                                  t = not_null(y_57);
                                                  {
                                                    t = filter_1(t, check_constructors_0);
                                                    {
                                                      m_58 = t;
                                                      q_56 :
                                                      if(((ATermList) m_58 == ATempty))
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
                                        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(y_57))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(g_58))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm i_17;
    i_17 = t;
    {
      ATerm j_17 = t;
      if((PushChoice() == 0))
        {
          ATerm q_58 = NULL;
          t = d_58(t);
          {
            q_58 = t;
            p_58 :
            if(((ATermList) q_58 == ATempty))
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
          t = ExpOverlay_1(t, d_58);
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
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  z_58 = t;
  x_58 :
  if(match_cons(z_58, sym_BuildDefault_1))
    {
      a_59 = ATgetArgument(z_58, 0);
      t = term_c_12;
    }
  else
    {
      if(match_cons(z_58, sym_Real_1))
        {
          a_59 = ATgetArgument(z_58, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(a_59)));
        }
      else
        {
          if(match_cons(z_58, sym_Int_1))
            {
              a_59 = ATgetArgument(z_58, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(a_59)));
            }
          else
            {
              if(match_cons(z_58, sym_Str_1))
                {
                  a_59 = ATgetArgument(z_58, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(a_59)));
                }
              else
                {
                  if(match_cons(z_58, sym_Op_2))
                    {
                      a_59 = ATgetArgument(z_58, 0);
                      y_58 = ATgetArgument(z_58, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_59)), not_null(y_58));
                    }
                  else
                    {
                      if(match_cons(z_58, sym_Var_1))
                        {
                          a_59 = ATgetArgument(z_58, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_59)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm))
{
  ATerm v_59 = NULL,u_60 = NULL,v_60 = NULL;
  v_59 = t;
  u_59 :
  if(match_cons(v_59, sym_Op_2))
    {
      u_60 = ATgetArgument(v_59, 0);
      v_60 = ATgetArgument(v_59, 1);
      {
        ATerm y_60 = NULL;
        t = not_null(u_60);
        {
          ATerm a_61 = NULL;
          t = j_54(t);
          {
            y_60 = t;
            {
              t = not_null(v_60);
              {
                t = k_54(t);
                {
                  a_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_60), not_null(a_61));
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
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  r_61 = t;
  k_61 :
  if(match_cons(r_61, sym_Overlay_3))
    {
      s_61 = ATgetArgument(r_61, 0);
      t_61 = ATgetArgument(r_61, 1);
      u_61 = ATgetArgument(r_61, 2);
      {
        ATerm y_61 = NULL,c_62 = NULL;
        ATerm l_17;
        l_17 = t;
        {
          ATerm b_62 = NULL;
          t = not_null(t_61);
          {
            ATerm p_2 (ATerm t)
            {
              ATerm z_61 = NULL;
              ATerm a_62 = NULL;
              a_62 = t;
              if(((z_61 != NULL) && (z_61 != a_62)))
                _fail(a_62);
              else
                z_61 = a_62;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_61), term_x_13);
              return(t);
            }
            t = map_1(t, p_2);
            {
              b_62 = t;
              if(((y_61 != NULL) && (y_61 != b_62)))
                _fail(b_62);
              else
                y_61 = b_62;
            }
          }
        }
        t = l_17;
        {
          ATerm d_62 = NULL;
          t = not_null(u_61);
          {
            t = trm_to_cong_0(t);
            {
              d_62 = t;
              if(((c_62 != NULL) && (c_62 != d_62)))
                _fail(d_62);
              else
                c_62 = d_62;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(s_61), not_null(y_61), not_null(c_62));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm a_57 (ATerm))
{
  t = Scope_2(t, a_57, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm f_54 (ATerm))
{
  ATerm n_62 = NULL,o_62 = NULL;
  n_62 = t;
  l_62 :
  if(match_cons(n_62, sym_Var_1))
    {
      o_62 = ATgetArgument(n_62, 0);
      {
        ATerm s_62 = NULL;
        t = not_null(o_62);
        {
          t = f_54(t);
          {
            s_62 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_62));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm q_59 (ATerm), ATerm r_59 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_63 = NULL,e_63 = NULL,h_63 = NULL,i_63 = NULL;
  d_63 = t;
  c_63 :
  if(match_cons(d_63, sym__3))
    {
      e_63 = ATgetArgument(d_63, 0);
      h_63 = ATgetArgument(d_63, 1);
      i_63 = ATgetArgument(d_63, 2);
      {
        t = not_null(e_63);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm s_63 = NULL;
            s_63 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_63), not_null(i_63));
              t = q_59(t);
            }
            return(t);
          }
          ATerm r_2 (ATerm t)
          {
            ATerm u_63 = NULL;
            u_63 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_63), not_null(h_63));
              t = q_59(t);
            }
            return(t);
          }
          t = r_59(t, q_2, r_2, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm, ATerm (ATerm)))
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym__2))
    {
      h_64 = ATgetArgument(g_64, 0);
      i_64 = ATgetArgument(g_64, 1);
      {
        ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,t_64 = NULL;
        ATerm m_17;
        m_17 = t;
        {
          ATerm o_64 = NULL;
          t = not_null(h_64);
          {
            ATerm p_64 = NULL;
            t = w_59(t);
            {
              o_64 = t;
              {
                if(((l_64 != NULL) && (l_64 != o_64)))
                  _fail(o_64);
                else
                  l_64 = o_64;
                {
                  ATerm q_64 = NULL,s_64 = NULL;
                  t = map_1(t, new_0);
                  {
                    p_64 = t;
                    {
                      if(((m_64 != NULL) && (m_64 != p_64)))
                        _fail(p_64);
                      else
                        m_64 = p_64;
                      {
                        ATerm r_64 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_64), not_null(m_64));
                        {
                          t = zip_1(t, _id);
                          {
                            r_64 = t;
                            if(((q_64 != NULL) && (q_64 != r_64)))
                              _fail(r_64);
                            else
                              q_64 = r_64;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), not_null(i_64));
                          {
                            t = conc_0(t);
                            {
                              s_64 = t;
                              if(((n_64 != NULL) && (n_64 != s_64)))
                                _fail(s_64);
                              else
                                n_64 = s_64;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = m_17;
        {
          ATerm u_64 = NULL;
          t = not_null(h_64);
          {
            ATerm s_2 (ATerm t)
            {
              t = not_null(m_64);
              return(t);
            }
            t = x_59(t, s_2);
            {
              u_64 = t;
              if(((t_64 != NULL) && (t_64 != u_64)))
                _fail(u_64);
              else
                t_64 = u_64;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(t_64), not_null(i_64), not_null(n_64));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_65 = NULL;
  ATerm j_65 = NULL,k_65 = NULL;
  h_65 = t;
  {
    ATerm l_65 = NULL;
    ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
    t = not_null(h_65);
    {
      l_65 = t;
      {
        t = SSL_explode_term(not_null(l_65));
        {
          n_65 = t;
          e_65 :
          if(match_cons(n_65, sym__2))
            {
              o_65 = ATgetArgument(n_65, 0);
              p_65 = ATgetArgument(n_65, 1);
              f_65 :
              if(match_string(o_65, ""))
                {
                  g_65 :
                  if(((ATgetType(p_65) == AT_LIST) && ((ATermList) p_65 != ATempty)))
                    {
                      q_65 = ATgetFirst((ATermList) p_65);
                      r_65 = (ATerm) ATgetNext((ATermList) p_65);
                      {
                        if(((k_65 != NULL) && (k_65 != q_65)))
                          _fail(q_65);
                        else
                          k_65 = q_65;
                        if(((j_65 != NULL) && (j_65 != r_65)))
                          _fail(r_65);
                        else
                          j_65 = r_65;
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
    t = not_null(k_65);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm k_59 (ATerm, ATerm (ATerm)))
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  w_65 :
  if(match_cons(z_65, sym__2))
    {
      a_66 = ATgetArgument(z_65, 0);
      b_66 = ATgetArgument(z_65, 1);
      {
        t = not_null(a_66);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              t = not_null(b_66);
              return(t);
            }
            t = split_2(t, _id, u_2);
            t = lookup_0(t);
            return(t);
          }
          t = k_59(t, t_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
  i_66 = t;
  h_66 :
  if(match_cons(i_66, sym__2))
    {
      j_66 = ATgetArgument(i_66, 0);
      k_66 = ATgetArgument(i_66, 1);
      {
        t = not_null(j_66);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm n_66 = NULL;
            n_66 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_66), not_null(k_66));
              t = z_73(t);
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
ATerm env_alltd_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm s_66 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_74(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = all_dist_1(t, s_66);
      }
    return(t);
  }
  t = s_66(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm i_60 (ATerm), ATerm j_60 (ATerm, ATerm (ATerm)), ATerm k_60 (ATerm), ATerm l_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_60 (ATerm, ATerm (ATerm)), ATerm n_60 (ATerm))
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  t = subs_args_0(t);
  {
    v_66 = t;
    u_66 :
    if(match_cons(v_66, sym__2))
      {
        w_66 = ATgetArgument(v_66, 0);
        x_66 = ATgetArgument(v_66, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_66), (ATerm) ATempty);
          {
            ATerm b_67 (ATerm t)
            {
              ATerm w_2 (ATerm t)
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, j_60);
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    {
                      ATerm r_17 = t;
                      int s_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm x_2 (ATerm t)
                            {
                              t = not_null(w_66);
                              return(t);
                            }
                            t = SubsVar_2(t, i_60, x_2);
                            t = n_60(t);
                          }
                          LocalPopChoice(s_17);
                        }
                      else
                        {
                          t = r_17;
                          {
                            t = RnBinding_2(t, k_60, m_60);
                            t = DistBinding_2(t, b_67, l_60);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, w_2);
              return(t);
            }
            t = b_67(t);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_5 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm, ATerm (ATerm)), ATerm r_60 (ATerm), ATerm s_60 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm t_60 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, p_60, q_60, r_60, s_60, t_60, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm c_67 (ATerm t, ATerm d_67 (ATerm))
  {
    t = Scope_2(t, d_67, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, c_67);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
  q_67 = t;
  p_67 :
  if(match_cons(q_67, sym_Op_2))
    {
      r_67 = ATgetArgument(q_67, 0);
      s_67 = ATgetArgument(q_67, 1);
      {
        ATerm v_67 = NULL,w_67 = NULL;
        t = b_58(t);
        {
          ATerm y_2 (ATerm t)
          {
            ATerm t_17;
            t_17 = t;
            {
              ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
              x_67 = t;
              o_67 :
              if(match_cons(x_67, sym_Overlay_3))
                {
                  y_67 = ATgetArgument(x_67, 0);
                  z_67 = ATgetArgument(x_67, 1);
                  a_68 = ATgetArgument(x_67, 2);
                  {
                    ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,f_68 = NULL;
                    if(((r_67 != NULL) && (r_67 != y_67)))
                      _fail(y_67);
                    else
                      r_67 = y_67;
                    {
                      if(((b_68 != NULL) && (b_68 != z_67)))
                        _fail(z_67);
                      else
                        b_68 = z_67;
                      {
                        if(((c_68 != NULL) && (c_68 != a_68)))
                          _fail(a_68);
                        else
                          c_68 = a_68;
                        {
                          ATerm u_17;
                          u_17 = t;
                          {
                            ATerm e_68 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_68), not_null(s_67));
                            {
                              t = zip_1(t, _id);
                              {
                                e_68 = t;
                                if(((d_68 != NULL) && (d_68 != e_68)))
                                  _fail(e_68);
                                else
                                  d_68 = e_68;
                              }
                            }
                          }
                          t = u_17;
                          {
                            ATerm g_68 = NULL;
                            t = not_null(d_68);
                            {
                              f_68 = t;
                              {
                                if(((v_67 != NULL) && (v_67 != f_68)))
                                  _fail(f_68);
                                else
                                  v_67 = f_68;
                                {
                                  t = not_null(c_68);
                                  {
                                    g_68 = t;
                                    {
                                      if(((w_67 != NULL) && (w_67 != g_68)))
                                        _fail(g_68);
                                      else
                                        w_67 = g_68;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_68), not_null(c_68));
                                    }
                                  }
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
            t = t_17;
            return(t);
          }
          t = fetch_1(t, y_2);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_67), not_null(w_67));
          t = tsubstitute_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm exp_overlays1_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm v_17;
    v_17 = t;
    {
      ATerm w_17 = t;
      if((PushChoice() == 0))
        {
          ATerm p_68 = NULL;
          t = c_58(t);
          {
            p_68 = t;
            o_68 :
            if(((ATermList) p_68 == ATempty))
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
        t = w_17;
    }
    t = v_17;
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          t = ExpOverlay_1(t, c_58);
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
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  j_69 = t;
  b_69 :
  if(match_cons(j_69, sym_Specification_1))
    {
      k_69 = ATgetArgument(j_69, 0);
      c_69 :
      if(((ATgetType(k_69) == AT_LIST) && ((ATermList) k_69 != ATempty)))
        {
          l_69 = ATgetFirst((ATermList) k_69);
          n_69 = (ATerm) ATgetNext((ATermList) k_69);
          d_69 :
          if(match_cons(l_69, sym_Signature_1))
            {
              m_69 = ATgetArgument(l_69, 0);
              e_69 :
              if(((ATgetType(n_69) == AT_LIST) && ((ATermList) n_69 != ATempty)))
                {
                  o_69 = ATgetFirst((ATermList) n_69);
                  q_69 = (ATerm) ATgetNext((ATermList) n_69);
                  f_69 :
                  if(match_cons(o_69, sym_Overlays_1))
                    {
                      p_69 = ATgetArgument(o_69, 0);
                      g_69 :
                      if(((ATgetType(q_69) == AT_LIST) && ((ATermList) q_69 != ATempty)))
                        {
                          r_69 = ATgetFirst((ATermList) q_69);
                          t_69 = (ATerm) ATgetNext((ATermList) q_69);
                          h_69 :
                          if(match_cons(r_69, sym_Strategies_1))
                            {
                              s_69 = ATgetArgument(r_69, 0);
                              i_69 :
                              if(((ATermList) t_69 == ATempty))
                                {
                                  {
                                    ATerm x_69 = NULL,z_69 = NULL;
                                    ATerm x_17;
                                    x_17 = t;
                                    {
                                      ATerm y_69 = NULL;
                                      t = not_null(p_69);
                                      {
                                        ATerm c_3 (ATerm t)
                                        {
                                          t = not_null(p_69);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, c_3);
                                        {
                                          y_69 = t;
                                          if(((x_69 != NULL) && (x_69 != y_69)))
                                            _fail(y_69);
                                          else
                                            x_69 = y_69;
                                        }
                                      }
                                    }
                                    t = x_17;
                                    {
                                      ATerm a_70 = NULL,c_70 = NULL,e_70 = NULL;
                                      ATerm y_17;
                                      y_17 = t;
                                      {
                                        ATerm b_70 = NULL;
                                        t = not_null(p_69);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            b_70 = t;
                                            if(((a_70 != NULL) && (a_70 != b_70)))
                                              _fail(b_70);
                                            else
                                              a_70 = b_70;
                                          }
                                        }
                                      }
                                      t = y_17;
                                      {
                                        ATerm d_70 = NULL;
                                        t = not_null(s_69);
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            t = not_null(x_69);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, d_3);
                                          {
                                            d_70 = t;
                                            if(((c_70 != NULL) && (c_70 != d_70)))
                                              _fail(d_70);
                                            else
                                              c_70 = d_70;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_70), not_null(c_70));
                                          {
                                            t = conc_0(t);
                                            {
                                              e_70 = t;
                                              if(((z_69 != NULL) && (z_69 != e_70)))
                                                _fail(e_70);
                                              else
                                                z_69 = e_70;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(z_69))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(m_69))));
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
  ATerm z_17;
  z_17 = t;
  {
    ATerm l_70 = NULL;
    ATerm m_70 = NULL;
    m_70 = t;
    if(((l_70 != NULL) && (l_70 != m_70)))
      _fail(m_70);
    else
      l_70 = m_70;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_14, not_null(l_70));
      t = printnl_0(t);
    }
  }
  t = z_17;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_18;
  a_18 = t;
  {
    t = error_0(t);
    {
      t = term_z_15;
      t = exit_0(t);
    }
  }
  t = a_18;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,v_70 = NULL,c_71 = NULL;
  s_70 = t;
  r_70 :
  if(match_cons(s_70, sym__3))
    {
      t_70 = ATgetArgument(s_70, 0);
      v_70 = ATgetArgument(s_70, 1);
      c_71 = ATgetArgument(s_70, 2);
      {
        ATerm g_71 = NULL,i_71 = NULL;
        ATerm b_18;
        b_18 = t;
        {
          ATerm h_71 = NULL;
          t = not_null(t_70);
          {
            t = MsgU_0(t);
            {
              h_71 = t;
              if(((g_71 != NULL) && (g_71 != h_71)))
                _fail(h_71);
              else
                g_71 = h_71;
            }
          }
        }
        t = b_18;
        {
          ATerm j_71 = NULL;
          t = not_null(c_71);
          {
            t = MsgE_0(t);
            {
              j_71 = t;
              if(((i_71 != NULL) && (i_71 != j_71)))
                _fail(j_71);
              else
                i_71 = j_71;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_71)), not_null(g_71));
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
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
  w_71 = t;
  q_71 :
  if(((ATgetType(w_71) == AT_LIST) && ((ATermList) w_71 != ATempty)))
    {
      u_71 = ATgetFirst((ATermList) w_71);
      v_71 = (ATerm) ATgetNext((ATermList) w_71);
      r_71 :
      if(((ATgetType(v_71) == AT_LIST) && ((ATermList) v_71 != ATempty)))
        {
          s_71 = ATgetFirst((ATermList) v_71);
          t_71 = (ATerm) ATgetNext((ATermList) v_71);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(term_e_18), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_71)), not_null(s_71)), not_null(u_71))), term_c_18);
        }
      else
        {
          if(((ATermList) v_71 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(term_e_18), not_null(u_71)), term_f_18);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) w_71 == ATempty))
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
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  p_72 = t;
  h_72 :
  if(((ATgetType(p_72) == AT_LIST) && ((ATermList) p_72 != ATempty)))
    {
      n_72 = ATgetFirst((ATermList) p_72);
      o_72 = (ATerm) ATgetNext((ATermList) p_72);
      i_72 :
      if(((ATgetType(o_72) == AT_LIST) && ((ATermList) o_72 != ATempty)))
        {
          l_72 = ATgetFirst((ATermList) o_72);
          m_72 = (ATerm) ATgetNext((ATermList) o_72);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(term_h_18), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_72)), not_null(l_72)), not_null(n_72))), term_c_18);
        }
      else
        {
          if(((ATermList) o_72 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(term_h_18), not_null(n_72)), term_f_18);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(((ATermList) p_72 == ATempty))
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
  ATerm f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL;
  f_73 = t;
  e_73 :
  if(match_cons(f_73, sym__3))
    {
      g_73 = ATgetArgument(f_73, 0);
      h_73 = ATgetArgument(f_73, 1);
      i_73 = ATgetArgument(f_73, 2);
      {
        ATerm o_73 = NULL,q_73 = NULL;
        ATerm i_18;
        i_18 = t;
        {
          ATerm p_73 = NULL;
          t = not_null(g_73);
          {
            t = MsgU_0(t);
            {
              p_73 = t;
              if(((o_73 != NULL) && (o_73 != p_73)))
                _fail(p_73);
              else
                o_73 = p_73;
            }
          }
        }
        t = i_18;
        {
          ATerm r_73 = NULL;
          t = not_null(i_73);
          {
            t = MsgE_0(t);
            {
              r_73 = t;
              if(((q_73 != NULL) && (q_73 != r_73)))
                _fail(r_73);
              else
                q_73 = r_73;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_73)), not_null(o_73));
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
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL;
  h_74 = t;
  g_74 :
  if(match_cons(h_74, sym_Overlay_3))
    {
      i_74 = ATgetArgument(h_74, 0);
      j_74 = ATgetArgument(h_74, 1);
      k_74 = ATgetArgument(h_74, 2);
      {
        ATerm o_74 = NULL;
        ATerm r_74 = NULL;
        t = not_null(k_74);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              r_74 = t;
              if(((o_74 != NULL) && (o_74 != r_74)))
                _fail(r_74);
              else
                o_74 = r_74;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(o_74)), term_k_18), not_null(i_74)), term_j_18);
      }
    }
  else
    {
      if(match_cons(h_74, sym_SDef_3))
        {
          i_74 = ATgetArgument(h_74, 0);
          j_74 = ATgetArgument(h_74, 1);
          k_74 = ATgetArgument(h_74, 2);
          {
            ATerm v_74 = NULL;
            ATerm w_74 = NULL;
            t = not_null(k_74);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  w_74 = t;
                  if(((v_74 != NULL) && (v_74 != w_74)))
                    _fail(w_74);
                  else
                    v_74 = w_74;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_74)), term_k_18), not_null(i_74)), term_l_18);
          }
        }
      else
        {
          if(match_cons(h_74, sym_RDef_3))
            {
              i_74 = ATgetArgument(h_74, 0);
              j_74 = ATgetArgument(h_74, 1);
              k_74 = ATgetArgument(h_74, 2);
              {
                ATerm a_75 = NULL;
                ATerm b_75 = NULL;
                t = not_null(k_74);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      b_75 = t;
                      if(((a_75 != NULL) && (a_75 != b_75)))
                        _fail(b_75);
                      else
                        a_75 = b_75;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(a_75)), term_k_18), not_null(i_74)), term_m_18);
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
ATerm _3 (ATerm t, ATerm x_45 (ATerm), ATerm y_45 (ATerm), ATerm z_45 (ATerm))
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
  r_75 = t;
  q_75 :
  if(match_cons(r_75, sym__3))
    {
      s_75 = ATgetArgument(r_75, 0);
      t_75 = ATgetArgument(r_75, 1);
      u_75 = ATgetArgument(r_75, 2);
      {
        ATerm y_75 = NULL;
        t = not_null(s_75);
        {
          ATerm a_76 = NULL;
          t = x_45(t);
          {
            y_75 = t;
            {
              t = not_null(t_75);
              {
                ATerm c_76 = NULL;
                t = y_45(t);
                {
                  a_76 = t;
                  {
                    t = not_null(u_75);
                    {
                      t = z_45(t);
                      {
                        c_76 = t;
                        t = (ATerm) ATmakeAppl(sym__3, not_null(y_75), not_null(a_76), not_null(c_76));
                      }
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
ATerm Overlay_3 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm), ATerm p_53 (ATerm))
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  n_76 = t;
  m_76 :
  if(match_cons(n_76, sym_Overlay_3))
    {
      o_76 = ATgetArgument(n_76, 0);
      p_76 = ATgetArgument(n_76, 1);
      q_76 = ATgetArgument(n_76, 2);
      {
        ATerm w_76 = NULL;
        t = not_null(o_76);
        {
          ATerm y_76 = NULL;
          t = n_53(t);
          {
            w_76 = t;
            {
              t = not_null(p_76);
              {
                ATerm a_77 = NULL;
                t = o_53(t);
                {
                  y_76 = t;
                  {
                    t = not_null(q_76);
                    {
                      t = p_53(t);
                      {
                        a_77 = t;
                        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(w_76), not_null(y_76), not_null(a_77));
                      }
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
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
  p_77 = t;
  m_77 :
  if(match_cons(p_77, sym__2))
    {
      q_77 = ATgetArgument(p_77, 0);
      u_77 = ATgetArgument(p_77, 1);
      n_77 :
      if(match_cons(q_77, sym__3))
        {
          r_77 = ATgetArgument(q_77, 0);
          s_77 = ATgetArgument(q_77, 1);
          t_77 = ATgetArgument(q_77, 2);
          o_77 :
          if(match_cons(u_77, sym__3))
            {
              v_77 = ATgetArgument(u_77, 0);
              w_77 = ATgetArgument(u_77, 1);
              x_77 = ATgetArgument(u_77, 2);
              {
                ATerm g_78 = NULL,i_78 = NULL,k_78 = NULL;
                ATerm n_18;
                n_18 = t;
                {
                  ATerm h_78 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_77), not_null(v_77));
                  {
                    t = union_0(t);
                    {
                      h_78 = t;
                      if(((g_78 != NULL) && (g_78 != h_78)))
                        _fail(h_78);
                      else
                        g_78 = h_78;
                    }
                  }
                }
                t = n_18;
                {
                  ATerm o_18;
                  o_18 = t;
                  {
                    ATerm j_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_77), not_null(w_77));
                    {
                      t = union_0(t);
                      {
                        j_78 = t;
                        if(((i_78 != NULL) && (i_78 != j_78)))
                          _fail(j_78);
                        else
                          i_78 = j_78;
                      }
                    }
                  }
                  t = o_18;
                  {
                    ATerm p_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_77), not_null(x_77));
                    {
                      t = union_0(t);
                      {
                        p_78 = t;
                        if(((k_78 != NULL) && (k_78 != p_78)))
                          _fail(p_78);
                        else
                          k_78 = p_78;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(g_78), not_null(i_78), not_null(k_78));
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
  ATerm b_79 = NULL;
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  b_79 = t;
  {
    ATerm n_79 = NULL;
    ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,z_79 = NULL;
    t = not_null(b_79);
    {
      n_79 = t;
      {
        t = SSL_explode_term(not_null(n_79));
        {
          p_79 = t;
          x_78 :
          if(match_cons(p_79, sym__2))
            {
              q_79 = ATgetArgument(p_79, 0);
              r_79 = ATgetArgument(p_79, 1);
              y_78 :
              if(match_string(q_79, ""))
                {
                  z_78 :
                  if(((ATgetType(r_79) == AT_LIST) && ((ATermList) r_79 != ATempty)))
                    {
                      s_79 = ATgetFirst((ATermList) r_79);
                      t_79 = (ATerm) ATgetNext((ATermList) r_79);
                      a_79 :
                      if(((ATgetType(t_79) == AT_LIST) && ((ATermList) t_79 != ATempty)))
                        {
                          u_79 = ATgetFirst((ATermList) t_79);
                          z_79 = (ATerm) ATgetNext((ATermList) t_79);
                          {
                            if(((k_79 != NULL) && (k_79 != s_79)))
                              _fail(s_79);
                            else
                              k_79 = s_79;
                            {
                              if(((m_79 != NULL) && (m_79 != u_79)))
                                _fail(u_79);
                              else
                                m_79 = u_79;
                              if(((l_79 != NULL) && (l_79 != z_79)))
                                _fail(z_79);
                              else
                                l_79 = z_79;
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
    t = not_null(m_79);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm e_80 = NULL;
  e_80 = t;
  t = SSL_explode_term(not_null(e_80));
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
        t = term_q_18;
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
  ATerm p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL;
  p_80 = t;
  m_80 :
  if(match_cons(p_80, sym__2))
    {
      q_80 = ATgetArgument(p_80, 0);
      u_80 = ATgetArgument(p_80, 1);
      n_80 :
      if(match_cons(q_80, sym__3))
        {
          r_80 = ATgetArgument(q_80, 0);
          s_80 = ATgetArgument(q_80, 1);
          t_80 = ATgetArgument(q_80, 2);
          o_80 :
          if(match_cons(u_80, sym__3))
            {
              v_80 = ATgetArgument(u_80, 0);
              w_80 = ATgetArgument(u_80, 1);
              x_80 = ATgetArgument(u_80, 2);
              {
                ATerm e_81 = NULL,i_81 = NULL,k_81 = NULL;
                ATerm r_18;
                r_18 = t;
                {
                  ATerm f_81 = NULL,h_81 = NULL;
                  ATerm g_81 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_80), not_null(s_80));
                  {
                    t = diff_0(t);
                    {
                      g_81 = t;
                      if(((f_81 != NULL) && (f_81 != g_81)))
                        _fail(g_81);
                      else
                        f_81 = g_81;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_80), not_null(f_81));
                    {
                      t = union_0(t);
                      {
                        h_81 = t;
                        if(((e_81 != NULL) && (e_81 != h_81)))
                          _fail(h_81);
                        else
                          e_81 = h_81;
                      }
                    }
                  }
                }
                t = r_18;
                {
                  ATerm s_18;
                  s_18 = t;
                  {
                    ATerm j_81 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_80), not_null(w_80));
                    {
                      t = union_0(t);
                      {
                        j_81 = t;
                        if(((i_81 != NULL) && (i_81 != j_81)))
                          _fail(j_81);
                        else
                          i_81 = j_81;
                      }
                    }
                  }
                  t = s_18;
                  {
                    ATerm l_81 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_80), not_null(x_80));
                    {
                      t = union_0(t);
                      {
                        l_81 = t;
                        if(((k_81 != NULL) && (k_81 != l_81)))
                          _fail(l_81);
                        else
                          k_81 = l_81;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(e_81), not_null(i_81), not_null(k_81));
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
ATerm cart_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
  v_81 = t;
  u_81 :
  if(match_cons(v_81, sym__2))
    {
      w_81 = ATgetArgument(v_81, 0);
      x_81 = ATgetArgument(v_81, 1);
      {
        t = not_null(w_81);
        {
          ATerm g_3 (ATerm t)
          {
            ATerm a_82 = NULL;
            a_82 = t;
            {
              t = not_null(x_81);
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm c_82 = NULL;
                  c_82 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_82), not_null(c_82));
                    t = u_70(t);
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
    t = term_q_18;
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
ATerm JoinScope_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
  o_82 = t;
  n_82 :
  if(match_cons(o_82, sym__3))
    {
      p_82 = ATgetArgument(o_82, 0);
      q_82 = ATgetArgument(o_82, 1);
      r_82 = ATgetArgument(o_82, 2);
      {
        ATerm v_82 = NULL,z_82 = NULL;
        ATerm t_18;
        t_18 = t;
        {
          ATerm w_82 = NULL,y_82 = NULL;
          ATerm x_82 = NULL;
          t = term_p_14;
          {
            t = x_56(t);
            {
              x_82 = t;
              if(((w_82 != NULL) && (w_82 != x_82)))
                _fail(x_82);
              else
                w_82 = x_82;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_82), not_null(w_82));
            {
              t = diff_0(t);
              {
                y_82 = t;
                if(((v_82 != NULL) && (v_82 != y_82)))
                  _fail(y_82);
                else
                  v_82 = y_82;
              }
            }
          }
        }
        t = t_18;
        {
          ATerm a_83 = NULL,e_83 = NULL;
          ATerm b_83 = NULL,d_83 = NULL;
          ATerm c_83 = NULL;
          t = term_p_14;
          {
            t = x_56(t);
            {
              c_83 = t;
              if(((b_83 != NULL) && (b_83 != c_83)))
                _fail(c_83);
              else
                b_83 = c_83;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_82), not_null(b_83));
            {
              t = isect_0(t);
              {
                d_83 = t;
                if(((a_83 != NULL) && (a_83 != d_83)))
                  _fail(d_83);
                else
                  a_83 = d_83;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_83), not_null(r_82));
            {
              t = conc_0(t);
              {
                e_83 = t;
                if(((z_82 != NULL) && (z_82 != e_83)))
                  _fail(e_83);
                else
                  z_82 = e_83;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(p_82), not_null(v_82), not_null(z_82));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UDjoin_0 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL;
  a_84 = t;
  x_83 :
  if(match_cons(a_84, sym_Overlay_3))
    {
      b_84 = ATgetArgument(a_84, 0);
      z_83 = ATgetArgument(a_84, 1);
      y_83 = ATgetArgument(a_84, 2);
      {
        ATerm f_84 = NULL;
        ATerm g_84 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_83)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(z_83), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            g_84 = t;
            if(((f_84 != NULL) && (f_84 != g_84)))
              _fail(g_84);
            else
              f_84 = g_84;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(b_84), not_null(z_83), not_null(f_84));
      }
    }
  else
    {
      if(match_cons(a_84, sym_Scope_2))
        {
          b_84 = ATgetArgument(a_84, 0);
          z_83 = ATgetArgument(a_84, 1);
          {
            t = not_null(z_83);
            {
              ATerm l_3 (ATerm t)
              {
                ATerm m_3 (ATerm t)
                {
                  t = not_null(b_84);
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
          if(match_cons(a_84, sym_Cong_2))
            {
              b_84 = ATgetArgument(a_84, 0);
              z_83 = ATgetArgument(a_84, 1);
              {
                t = not_null(z_83);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(a_84, sym_BAM_3))
                {
                  b_84 = ATgetArgument(a_84, 0);
                  z_83 = ATgetArgument(a_84, 1);
                  y_83 = ATgetArgument(a_84, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_83)), not_null(b_84)), not_null(z_83));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(a_84, sym_BA_2))
                    {
                      b_84 = ATgetArgument(a_84, 0);
                      z_83 = ATgetArgument(a_84, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_84)), not_null(z_83));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(a_84, sym_AM_2))
                        {
                          b_84 = ATgetArgument(a_84, 0);
                          z_83 = ATgetArgument(a_84, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(b_84));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(a_84, sym_MA_2))
                            {
                              b_84 = ATgetArgument(a_84, 0);
                              z_83 = ATgetArgument(a_84, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(b_84));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(a_84, sym_StratRule_3))
                                {
                                  b_84 = ATgetArgument(a_84, 0);
                                  z_83 = ATgetArgument(a_84, 1);
                                  y_83 = ATgetArgument(a_84, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(y_83)), not_null(b_84));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(a_84, sym_Rule_3))
                                    {
                                      b_84 = ATgetArgument(a_84, 0);
                                      z_83 = ATgetArgument(a_84, 1);
                                      y_83 = ATgetArgument(a_84, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(y_83)), not_null(b_84));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(a_84, sym_Seq_2))
                                        {
                                          b_84 = ATgetArgument(a_84, 0);
                                          z_83 = ATgetArgument(a_84, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_83)), not_null(b_84));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(a_84, sym_Seqs_1))
                                            {
                                              b_84 = ATgetArgument(a_84, 0);
                                              {
                                                t = not_null(b_84);
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
ATerm Cong_2 (ATerm t, ATerm r_55 (ATerm), ATerm s_55 (ATerm))
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym_Cong_2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      {
        ATerm y_85 = NULL;
        t = not_null(u_85);
        {
          ATerm a_86 = NULL;
          t = r_55(t);
          {
            y_85 = t;
            {
              t = not_null(v_85);
              {
                t = s_55(t);
                {
                  a_86 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(y_85), not_null(a_86));
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
  ATerm g_86 = NULL;
  ATerm h_86 = NULL;
  t = tvars_0(t);
  {
    h_86 = t;
    if(((g_86 != NULL) && (g_86 != h_86)))
      _fail(h_86);
    else
      g_86 = h_86;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(g_86), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm k_86 = NULL;
  ATerm l_86 = NULL;
  t = tvars_0(t);
  {
    l_86 = t;
    if(((k_86 != NULL) && (k_86 != l_86)))
      _fail(l_86);
    else
      k_86 = l_86;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(k_86), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm), ATerm a_53 (ATerm))
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL;
  s_86 = t;
  r_86 :
  if(match_cons(s_86, sym_Rule_3))
    {
      t_86 = ATgetArgument(s_86, 0);
      u_86 = ATgetArgument(s_86, 1);
      v_86 = ATgetArgument(s_86, 2);
      {
        ATerm z_86 = NULL;
        t = not_null(t_86);
        {
          ATerm b_87 = NULL;
          t = y_52(t);
          {
            z_86 = t;
            {
              t = not_null(u_86);
              {
                ATerm d_87 = NULL;
                t = z_52(t);
                {
                  b_87 = t;
                  {
                    t = not_null(v_86);
                    {
                      t = a_53(t);
                      {
                        d_87 = t;
                        t = (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_86), not_null(b_87), not_null(d_87));
                      }
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
ATerm BAM_3 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
  o_87 = t;
  n_87 :
  if(match_cons(o_87, sym_BAM_3))
    {
      p_87 = ATgetArgument(o_87, 0);
      q_87 = ATgetArgument(o_87, 1);
      r_87 = ATgetArgument(o_87, 2);
      {
        ATerm v_87 = NULL;
        t = not_null(p_87);
        {
          ATerm x_87 = NULL;
          t = f_52(t);
          {
            v_87 = t;
            {
              t = not_null(q_87);
              {
                ATerm z_87 = NULL;
                t = g_52(t);
                {
                  x_87 = t;
                  {
                    t = not_null(r_87);
                    {
                      t = h_52(t);
                      {
                        z_87 = t;
                        t = (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_87), not_null(x_87), not_null(z_87));
                      }
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
ATerm BA_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL;
  j_88 = t;
  i_88 :
  if(match_cons(j_88, sym_BA_2))
    {
      k_88 = ATgetArgument(j_88, 0);
      l_88 = ATgetArgument(j_88, 1);
      {
        ATerm o_88 = NULL;
        t = not_null(k_88);
        {
          ATerm q_88 = NULL;
          t = d_52(t);
          {
            o_88 = t;
            {
              t = not_null(l_88);
              {
                t = e_52(t);
                {
                  q_88 = t;
                  t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_88), not_null(q_88));
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
ATerm AM_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
  z_88 = t;
  y_88 :
  if(match_cons(z_88, sym_AM_2))
    {
      a_89 = ATgetArgument(z_88, 0);
      b_89 = ATgetArgument(z_88, 1);
      {
        ATerm e_89 = NULL;
        t = not_null(a_89);
        {
          ATerm g_89 = NULL;
          t = b_52(t);
          {
            e_89 = t;
            {
              t = not_null(b_89);
              {
                t = c_52(t);
                {
                  g_89 = t;
                  t = (ATerm) ATmakeAppl(sym_AM_2, not_null(e_89), not_null(g_89));
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
ATerm MA_2 (ATerm t, ATerm z_51 (ATerm), ATerm a_52 (ATerm))
{
  ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL;
  p_89 = t;
  o_89 :
  if(match_cons(p_89, sym_MA_2))
    {
      q_89 = ATgetArgument(p_89, 0);
      r_89 = ATgetArgument(p_89, 1);
      {
        ATerm u_89 = NULL;
        t = not_null(q_89);
        {
          ATerm w_89 = NULL;
          t = z_51(t);
          {
            u_89 = t;
            {
              t = not_null(r_89);
              {
                t = a_52(t);
                {
                  w_89 = t;
                  t = (ATerm) ATmakeAppl(sym_MA_2, not_null(u_89), not_null(w_89));
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
ATerm Match_1 (ATerm t, ATerm z_55 (ATerm))
{
  ATerm e_90 = NULL,f_90 = NULL;
  e_90 = t;
  d_90 :
  if(match_cons(e_90, sym_Match_1))
    {
      f_90 = ATgetArgument(e_90, 0);
      {
        ATerm h_90 = NULL;
        t = not_null(f_90);
        {
          t = z_55(t);
          {
            h_90 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(h_90));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm a_56 (ATerm))
{
  ATerm o_90 = NULL,p_90 = NULL;
  o_90 = t;
  n_90 :
  if(match_cons(o_90, sym_Build_1))
    {
      p_90 = ATgetArgument(o_90, 0);
      {
        ATerm s_90 = NULL;
        t = not_null(p_90);
        {
          t = a_56(t);
          {
            s_90 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_90));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm constructs_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            {
              ATerm y_18 = t;
              int z_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, w_56);
                  LocalPopChoice(z_18);
                }
              else
                {
                  t = y_18;
                  {
                    ATerm a_19 = t;
                    int b_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, w_56, def_term_0);
                        LocalPopChoice(b_19);
                      }
                    else
                      {
                        t = a_19;
                        {
                          ATerm c_19 = t;
                          int d_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, w_56, use_term_0);
                              LocalPopChoice(d_19);
                            }
                          else
                            {
                              t = c_19;
                              {
                                ATerm e_19 = t;
                                int f_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, w_56, use_term_0, def_term_0);
                                    LocalPopChoice(f_19);
                                  }
                                else
                                  {
                                    t = e_19;
                                    {
                                      ATerm g_19 = t;
                                      int h_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Scope_2(t, _id, w_56);
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
                                                t = Rule_3(t, def_term_0, use_term_0, w_56);
                                                LocalPopChoice(j_19);
                                              }
                                            else
                                              {
                                                t = i_19;
                                                {
                                                  ATerm k_19 = t;
                                                  int l_19 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(l_19);
                                                    }
                                                  else
                                                    {
                                                      t = k_19;
                                                      {
                                                        ATerm n_3 (ATerm t)
                                                        {
                                                          t = map_1(t, w_56);
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
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      t = _all(t, use_def_0);
    }
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm g_53 (ATerm), ATerm h_53 (ATerm), ATerm i_53 (ATerm))
{
  ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
  c_91 = t;
  b_91 :
  if(match_cons(c_91, sym_RDef_3))
    {
      d_91 = ATgetArgument(c_91, 0);
      e_91 = ATgetArgument(c_91, 1);
      f_91 = ATgetArgument(c_91, 2);
      {
        ATerm j_91 = NULL;
        t = not_null(d_91);
        {
          ATerm l_91 = NULL;
          t = g_53(t);
          {
            j_91 = t;
            {
              t = not_null(e_91);
              {
                ATerm n_91 = NULL;
                t = h_53(t);
                {
                  l_91 = t;
                  {
                    t = not_null(f_91);
                    {
                      t = i_53(t);
                      {
                        n_91 = t;
                        t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(j_91), not_null(l_91), not_null(n_91));
                      }
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
ATerm SDef_3 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm), ATerm f_55 (ATerm))
{
  ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL;
  z_91 = t;
  y_91 :
  if(match_cons(z_91, sym_SDef_3))
    {
      a_92 = ATgetArgument(z_91, 0);
      b_92 = ATgetArgument(z_91, 1);
      c_92 = ATgetArgument(z_91, 2);
      {
        ATerm g_92 = NULL;
        t = not_null(a_92);
        {
          ATerm i_92 = NULL;
          t = d_55(t);
          {
            g_92 = t;
            {
              t = not_null(b_92);
              {
                ATerm k_92 = NULL;
                t = e_55(t);
                {
                  i_92 = t;
                  {
                    t = not_null(c_92);
                    {
                      t = f_55(t);
                      {
                        k_92 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(g_92), not_null(i_92), not_null(k_92));
                      }
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
  ATerm s_92 = NULL;
  t = filter_1(t, check_0);
  {
    s_92 = t;
    q_92 :
    if(((ATermList) s_92 == ATempty))
      {
        {
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm r_53 (ATerm))
{
  ATerm w_92 = NULL,x_92 = NULL;
  w_92 = t;
  v_92 :
  if(match_cons(w_92, sym_Overlays_1))
    {
      x_92 = ATgetArgument(w_92, 0);
      {
        ATerm z_92 = NULL;
        t = not_null(x_92);
        {
          t = r_53(t);
          {
            z_92 = t;
            t = (ATerm) ATmakeAppl(sym_Overlays_1, not_null(z_92));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm g_93 = NULL,h_93 = NULL;
  g_93 = t;
  f_93 :
  if(match_cons(g_93, sym_Signature_1))
    {
      h_93 = ATgetArgument(g_93, 0);
      {
        ATerm j_93 = NULL;
        t = not_null(h_93);
        {
          t = q_53(t);
          {
            j_93 = t;
            t = (ATerm) ATmakeAppl(sym_Signature_1, not_null(j_93));
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
  ATerm r_93 = NULL,s_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL;
  r_93 = t;
  o_93 :
  if(match_cons(r_93, sym__2))
    {
      s_93 = ATgetArgument(r_93, 0);
      w_93 = ATgetArgument(r_93, 1);
      p_93 :
      if(match_cons(s_93, sym__2))
        {
          u_93 = ATgetArgument(s_93, 0);
          v_93 = ATgetArgument(s_93, 1);
          q_93 :
          if(match_cons(w_93, sym__2))
            {
              x_93 = ATgetArgument(w_93, 0);
              y_93 = ATgetArgument(w_93, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_93)), not_null(u_93)), (ATerm) ATinsert(CheckATermList(not_null(y_93)), not_null(v_93)));
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
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL;
  g_94 = t;
  f_94 :
  if(((ATgetType(g_94) == AT_LIST) && ((ATermList) g_94 != ATempty)))
    {
      h_94 = ATgetFirst((ATermList) g_94);
      i_94 = (ATerm) ATgetNext((ATermList) g_94);
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_94), not_null(i_94));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm o_94 = NULL;
  o_94 = t;
  n_94 :
  if(((ATermList) o_94 == ATempty))
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
    ATerm r_94 = NULL;
    r_94 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_94));
    return(t);
  }
  t = map_1(t, a_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,z_94 = NULL;
  w_94 = t;
  v_94 :
  if(((ATgetType(w_94) == AT_LIST) && ((ATermList) w_94 != ATempty)))
    {
      x_94 = ATgetFirst((ATermList) w_94);
      z_94 = (ATerm) ATgetNext((ATermList) w_94);
      t = not_null(z_94);
    }
  else
    _fail(t);
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL;
  f_95 = t;
  e_95 :
  if(match_cons(f_95, sym__2))
    {
      g_95 = ATgetArgument(f_95, 0);
      h_95 = ATgetArgument(f_95, 1);
      {
        t = not_null(g_95);
        {
          ATerm l_95 (ATerm t)
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
                          t = not_null(h_95);
                          return(t);
                        }
                        t = HdMember_1(t, b_4);
                      }
                      t = e_20;
                      t = Cons_2(t, _id, l_95);
                      LocalPopChoice(d_20);
                    }
                  else
                    {
                      t = c_20;
                      {
                        t = Tl_0(t);
                        t = l_95(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = l_95(t);
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
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL;
  o_95 = t;
  n_95 :
  if(match_cons(o_95, sym__2))
    {
      p_95 = ATgetArgument(o_95, 0);
      q_95 = ATgetArgument(o_95, 1);
      if(((p_95 != NULL) && (p_95 != q_95)))
        _fail(q_95);
      else
        p_95 = q_95;
    }
  else
    _fail(t);
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,w_96 = NULL,x_96 = NULL;
  ATerm g_98 (ATerm t)
  {
    ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,r_97 = NULL;
    ATerm f_20;
    f_20 = t;
    {
      ATerm g_97 = NULL,i_97 = NULL,k_97 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), term_h_20);
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
            ATerm h_97 = NULL;
            t = term_p_14;
            {
              t = o_0(t);
              {
                h_97 = t;
                if(((g_97 != NULL) && (g_97 != h_97)))
                  _fail(h_97);
                else
                  g_97 = h_97;
              }
            }
          }
          t = j_20;
          {
            ATerm j_97 = NULL;
            t = not_null(s_96);
            {
              t = tvars_0(t);
              {
                j_97 = t;
                if(((i_97 != NULL) && (i_97 != j_97)))
                  _fail(j_97);
                else
                  i_97 = j_97;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_97), not_null(i_97));
              {
                t = isect_0(t);
                {
                  ATerm l_97 = NULL,n_97 = NULL,p_97 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    k_97 = t;
                    {
                      if(((d_97 != NULL) && (d_97 != k_97)))
                        _fail(k_97);
                      else
                        d_97 = k_97;
                      {
                        ATerm k_20;
                        k_20 = t;
                        {
                          ATerm m_97 = NULL;
                          t = term_p_14;
                          {
                            t = o_0(t);
                            {
                              m_97 = t;
                              if(((l_97 != NULL) && (l_97 != m_97)))
                                _fail(m_97);
                              else
                                l_97 = m_97;
                            }
                          }
                        }
                        t = k_20;
                        {
                          ATerm o_97 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(t_96), not_null(x_96));
                          {
                            t = tvars_0(t);
                            {
                              o_97 = t;
                              if(((n_97 != NULL) && (n_97 != o_97)))
                                _fail(o_97);
                              else
                                n_97 = o_97;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_97), not_null(n_97));
                            {
                              t = isect_0(t);
                              {
                                ATerm q_97 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  p_97 = t;
                                  {
                                    if(((e_97 != NULL) && (e_97 != p_97)))
                                      _fail(p_97);
                                    else
                                      e_97 = p_97;
                                    {
                                      t = new_0(t);
                                      {
                                        q_97 = t;
                                        if(((f_97 != NULL) && (f_97 != q_97)))
                                          _fail(q_97);
                                        else
                                          f_97 = q_97;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
      ATerm s_97 = NULL;
      t = not_null(p_96);
      {
        t = p_0(t);
        {
          s_97 = t;
          if(((r_97 != NULL) && (r_97 != s_97)))
            _fail(s_97);
          else
            r_97 = s_97;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(r_97), (ATerm) ATmakeAppl(sym_Op_2, term_n_11, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(CheckATermList(not_null(e_97)), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_97))))), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, not_null(d_97)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(p_96), not_null(q_96), (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_96), not_null(t_96), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_o_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_96))))), (ATerm)ATmakeAppl(sym_Op_2, term_l_20, not_null(d_97)), (ATerm) ATmakeAppl(sym_Op_2, term_m_20, (ATerm) ATinsert(CheckATermList(not_null(e_97)), (ATerm) ATmakeAppl(sym_Str_1, not_null(f_97))))), not_null(x_96)))));
    }
    return(t);
  }
  ATerm h_98 (ATerm t)
  {
    ATerm y_97 = NULL,e_98 = NULL;
    ATerm p_20;
    p_20 = t;
    {
      ATerm z_97 = NULL,b_98 = NULL,d_98 = NULL;
      ATerm q_20;
      q_20 = t;
      {
        ATerm a_98 = NULL;
        t = term_p_14;
        {
          t = o_0(t);
          {
            a_98 = t;
            if(((z_97 != NULL) && (z_97 != a_98)))
              _fail(a_98);
            else
              z_97 = a_98;
          }
        }
      }
      t = q_20;
      {
        ATerm c_98 = NULL;
        t = not_null(s_96);
        {
          t = tvars_0(t);
          {
            c_98 = t;
            if(((b_98 != NULL) && (b_98 != c_98)))
              _fail(c_98);
            else
              b_98 = c_98;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_97), not_null(b_98));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                d_98 = t;
                if(((y_97 != NULL) && (y_97 != d_98)))
                  _fail(d_98);
                else
                  y_97 = d_98;
              }
            }
          }
        }
      }
    }
    t = p_20;
    {
      ATerm f_98 = NULL;
      t = not_null(p_96);
      {
        t = p_0(t);
        {
          f_98 = t;
          if(((e_98 != NULL) && (e_98 != f_98)))
            _fail(f_98);
          else
            e_98 = f_98;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(e_98), (ATerm) ATmakeAppl(sym_Op_2, term_n_11, (ATerm) ATinsert(CheckATermList(term_r_20), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, not_null(y_97)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(p_96), not_null(q_96), (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_96), term_s_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_o_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_96))))), (ATerm)ATmakeAppl(sym_Op_2, term_l_20, not_null(y_97)), term_h_20), (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_96), term_b_12)))));
    }
    return(t);
  }
  o_96 = t;
  i_96 :
  if(match_cons(o_96, sym_RDef_3))
    {
      p_96 = ATgetArgument(o_96, 0);
      q_96 = ATgetArgument(o_96, 1);
      r_96 = ATgetArgument(o_96, 2);
      j_96 :
      if(match_cons(r_96, sym_Rule_3))
        {
          s_96 = ATgetArgument(r_96, 0);
          t_96 = ATgetArgument(r_96, 1);
          x_96 = ATgetArgument(r_96, 2);
          k_96 :
          if(match_cons(t_96, sym_Op_2))
            {
              u_96 = ATgetArgument(t_96, 0);
              w_96 = ATgetArgument(t_96, 1);
              l_96 :
              if(((ATermList) w_96 == ATempty))
                {
                  m_96 :
                  if(match_string(u_96, "Undefined"))
                    {
                      ATerm t_20 = t;
                      int w_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_98(t);
                          LocalPopChoice(w_20);
                        }
                      else
                        {
                          t = t_20;
                          t = h_98(t);
                        }
                    }
                  else
                    t = g_98(t);
                }
              else
                {
                  n_96 :
                  t = g_98(t);
                }
            }
          else
            t = g_98(t);
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
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL;
  b_99 = t;
  z_98 :
  if(match_cons(b_99, sym__2))
    {
      c_99 = ATgetArgument(b_99, 0);
      e_99 = ATgetArgument(b_99, 1);
      a_99 :
      if(match_cons(c_99, sym_OverrideDynamicRules_1))
        {
          d_99 = ATgetArgument(c_99, 0);
          {
            t = not_null(d_99);
            {
              ATerm c_4 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  t = not_null(e_99);
                  return(t);
                }
                ATerm e_4 (ATerm t)
                {
                  ATerm h_99 = NULL;
                  h_99 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(h_99)))));
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
          if(match_cons(c_99, sym_DynamicRules_1))
            {
              d_99 = ATgetArgument(c_99, 0);
              {
                t = not_null(d_99);
                {
                  ATerm f_4 (ATerm t)
                  {
                    ATerm g_4 (ATerm t)
                    {
                      t = not_null(e_99);
                      return(t);
                    }
                    ATerm h_4 (ATerm t)
                    {
                      ATerm l_99 = NULL;
                      l_99 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_a_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_99)))));
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
ATerm dist_scope_1 (ATerm t, ATerm y_79 (ATerm))
{
  ATerm w_99 = NULL,x_99 = NULL,y_99 = NULL,z_99 = NULL,a_100 = NULL;
  w_99 = t;
  u_99 :
  if(match_cons(w_99, sym__2))
    {
      x_99 = ATgetArgument(w_99, 0);
      a_100 = ATgetArgument(w_99, 1);
      v_99 :
      if(match_cons(x_99, sym_Scope_2))
        {
          y_99 = ATgetArgument(x_99, 0);
          z_99 = ATgetArgument(x_99, 1);
          {
            ATerm e_100 = NULL;
            ATerm f_100 = NULL,h_100 = NULL;
            ATerm g_100 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_99), not_null(a_100));
            {
              t = union_0(t);
              {
                g_100 = t;
                if(((f_100 != NULL) && (f_100 != g_100)))
                  _fail(g_100);
                else
                  f_100 = g_100;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_99), not_null(f_100));
              {
                t = y_79(t);
                {
                  h_100 = t;
                  if(((e_100 != NULL) && (e_100 != h_100)))
                    _fail(h_100);
                  else
                    e_100 = h_100;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_99), not_null(e_100));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm one_dist_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
  o_100 = t;
  n_100 :
  if(match_cons(o_100, sym__2))
    {
      p_100 = ATgetArgument(o_100, 0);
      q_100 = ATgetArgument(o_100, 1);
      {
        t = not_null(p_100);
        {
          ATerm i_4 (ATerm t)
          {
            ATerm t_100 = NULL;
            t_100 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_100), not_null(q_100));
              t = a_74(t);
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
ATerm env_oncetd_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm x_100 (ATerm t)
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_74(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = one_dist_1(t, x_100);
      }
    return(t);
  }
  t = x_100(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm e_101 = NULL,h_101 = NULL,i_101 = NULL;
  e_101 = t;
  d_101 :
  if(((ATgetType(e_101) == AT_LIST) && ((ATermList) e_101 != ATempty)))
    {
      h_101 = ATgetFirst((ATermList) e_101);
      i_101 = (ATerm) ATgetNext((ATermList) e_101);
      {
        ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
        ATerm p_101 = NULL;
        t = not_null(h_101);
        {
          ATerm t_101 = NULL;
          t = tvars_0(t);
          {
            p_101 = t;
            {
              if(((n_101 != NULL) && (n_101 != p_101)))
                _fail(p_101);
              else
                n_101 = p_101;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_101), not_null(n_101));
                {
                  ATerm w_101 (ATerm t)
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm d_21 = t;
                      int e_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, w_101);
                          LocalPopChoice(e_21);
                        }
                      else
                        {
                          t = d_21;
                          {
                            ATerm q_101 = NULL,r_101 = NULL,s_101 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              q_101 = t;
                              b_101 :
                              if(match_cons(q_101, sym__2))
                                {
                                  r_101 = ATgetArgument(q_101, 0);
                                  s_101 = ATgetArgument(q_101, 1);
                                  {
                                    if(((m_101 != NULL) && (m_101 != r_101)))
                                      _fail(r_101);
                                    else
                                      m_101 = r_101;
                                    {
                                      if(((l_101 != NULL) && (l_101 != s_101)))
                                        _fail(s_101);
                                      else
                                        l_101 = s_101;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_101));
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
                  t = w_101(t);
                  {
                    t_101 = t;
                    if(((o_101 != NULL) && (o_101 != t_101)))
                      _fail(t_101);
                    else
                      o_101 = t_101;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_101)), not_null(o_101)), not_null(i_101));
          t = conc_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm z_101 (ATerm t)
  {
    ATerm g_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_78(t);
        t = z_101(t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = g_21;
        t = m_78(t);
      }
    return(t);
  }
  t = z_101(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm o_78 (ATerm))
{
  t = repeat_2(t, o_78, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm a_102 (ATerm t)
  {
    t = l_73(t);
    {
      ATerm j_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(k_21);
        }
      else
        {
          t = j_21;
          t = Cons_2(t, _id, a_102);
        }
    }
    return(t);
  }
  t = a_102(t);
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
  ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL;
  h_102 = t;
  d_102 :
  if(match_cons(h_102, sym_DynRuleScope_2))
    {
      i_102 = ATgetArgument(h_102, 0);
      j_102 = ATgetArgument(h_102, 1);
      e_102 :
      if(((ATgetType(i_102) == AT_LIST) && ((ATermList) i_102 != ATempty)))
        {
          f_102 = ATgetFirst((ATermList) i_102);
          g_102 = (ATerm) ATgetNext((ATermList) i_102);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(g_102), not_null(j_102))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_102)))));
        }
      else
        {
          if(((ATermList) i_102 == ATempty))
            {
              t = not_null(j_102);
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
  ATerm t_102 = NULL,u_102 = NULL;
  t_102 = t;
  s_102 :
  if(match_cons(t_102, sym_ScopeDefault_1))
    {
      u_102 = ATgetArgument(t_102, 0);
      {
        ATerm w_102 = NULL;
        ATerm x_102 = NULL;
        t = not_null(u_102);
        {
          t = tvars_0(t);
          {
            x_102 = t;
            if(((w_102 != NULL) && (w_102 != x_102)))
              _fail(x_102);
            else
              w_102 = x_102;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_102), not_null(u_102));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm j_53 (ATerm))
{
  ATerm d_103 = NULL,e_103 = NULL;
  d_103 = t;
  c_103 :
  if(match_cons(d_103, sym_DynamicRules_1))
    {
      e_103 = ATgetArgument(d_103, 0);
      {
        ATerm g_103 = NULL;
        t = not_null(e_103);
        {
          t = j_53(t);
          {
            g_103 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(g_103));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm d_56 (ATerm), ATerm e_56 (ATerm))
{
  ATerm o_103 = NULL,p_103 = NULL,q_103 = NULL;
  o_103 = t;
  n_103 :
  if(match_cons(o_103, sym_Scope_2))
    {
      p_103 = ATgetArgument(o_103, 0);
      q_103 = ATgetArgument(o_103, 1);
      {
        ATerm t_103 = NULL;
        t = not_null(p_103);
        {
          ATerm v_103 = NULL;
          t = d_56(t);
          {
            t_103 = t;
            {
              t = not_null(q_103);
              {
                t = e_56(t);
                {
                  v_103 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_103), not_null(v_103));
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
ATerm tboundin_3 (ATerm t, ATerm b_57 (ATerm), ATerm c_57 (ATerm), ATerm d_57 (ATerm))
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, d_57, b_57);
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      t = DynamicRules_1(t, b_57);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL;
  c_104 = t;
  b_104 :
  if(match_cons(c_104, sym_DynamicRules_1))
    {
      d_104 = ATgetArgument(c_104, 0);
      {
        t = not_null(d_104);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  i_104 :
  if(match_cons(n_104, sym_LRule_1))
    {
      o_104 = ATgetArgument(n_104, 0);
      j_104 :
      if(match_cons(o_104, sym_Rule_3))
        {
          k_104 = ATgetArgument(o_104, 0);
          l_104 = ATgetArgument(o_104, 1);
          m_104 = ATgetArgument(o_104, 2);
          {
            t = not_null(k_104);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(n_104, sym_Scope_2))
        {
          o_104 = ATgetArgument(n_104, 0);
          p_104 = ATgetArgument(n_104, 1);
          t = not_null(o_104);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL;
  z_104 = t;
  y_104 :
  if(match_cons(z_104, sym_Var_1))
    {
      a_105 = ATgetArgument(z_104, 0);
      t = (ATerm) ATinsert(ATempty, not_null(a_105));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm f_105 = NULL,g_105 = NULL,h_105 = NULL;
  f_105 = t;
  e_105 :
  if(match_cons(f_105, sym__2))
    {
      g_105 = ATgetArgument(f_105, 0);
      h_105 = ATgetArgument(f_105, 1);
      {
        t = not_null(g_105);
        {
          ATerm l_105 (ATerm t)
          {
            ATerm p_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_105);
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
                        t = not_null(h_105);
                        return(t);
                      }
                      t = HdMember_1(t, r_4);
                      t = l_105(t);
                      LocalPopChoice(s_21);
                    }
                  else
                    {
                      t = r_21;
                      t = Cons_2(t, _id, l_105);
                    }
                }
              }
            return(t);
          }
          t = l_105(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm))
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_67(t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL;
        q_105 = t;
        p_105 :
        if(((ATgetType(q_105) == AT_LIST) && ((ATermList) q_105 != ATempty)))
          {
            r_105 = ATgetFirst((ATermList) q_105);
            s_105 = (ATerm) ATgetNext((ATermList) q_105);
            {
              ATerm v_105 = NULL,x_105 = NULL;
              ATerm v_21;
              v_21 = t;
              {
                ATerm w_105 = NULL;
                t = not_null(r_105);
                {
                  t = n_67(t);
                  {
                    w_105 = t;
                    if(((v_105 != NULL) && (v_105 != w_105)))
                      _fail(w_105);
                    else
                      v_105 = w_105;
                  }
                }
              }
              t = v_21;
              {
                ATerm y_105 = NULL;
                t = not_null(s_105);
                {
                  t = foldr_3(t, l_67, m_67, n_67);
                  {
                    y_105 = t;
                    if(((x_105 != NULL) && (x_105 != y_105)))
                      _fail(y_105);
                    else
                      x_105 = y_105;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_105), not_null(x_105));
                  t = m_67(t);
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
ATerm crush_3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm g_106 = NULL;
  ATerm j_106 = NULL;
  g_106 = t;
  {
    ATerm k_106 = NULL;
    ATerm m_106 = NULL,n_106 = NULL,o_106 = NULL;
    t = not_null(g_106);
    {
      k_106 = t;
      {
        t = SSL_explode_term(not_null(k_106));
        {
          m_106 = t;
          f_106 :
          if(match_cons(m_106, sym__2))
            {
              n_106 = ATgetArgument(m_106, 0);
              o_106 = ATgetArgument(m_106, 1);
              if(((j_106 != NULL) && (j_106 != o_106)))
                _fail(o_106);
              else
                j_106 = o_106;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(j_106);
      t = foldr_3(t, y_68, z_68, a_69);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL;
  v_106 = t;
  t_106 :
  if(match_cons(v_106, sym__2))
    {
      w_106 = ATgetArgument(v_106, 0);
      x_106 = ATgetArgument(v_106, 1);
      u_106 :
      if(((ATgetType(x_106) == AT_LIST) && ((ATermList) x_106 != ATempty)))
        {
          y_106 = ATgetFirst((ATermList) x_106);
          z_106 = (ATerm) ATgetNext((ATermList) x_106);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_106)), not_null(y_106)), not_null(z_106));
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
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL;
  o_107 = t;
  m_107 :
  if(((ATgetType(o_107) == AT_LIST) && ((ATermList) o_107 != ATempty)))
    {
      p_107 = ATgetFirst((ATermList) o_107);
      s_107 = (ATerm) ATgetNext((ATermList) o_107);
      n_107 :
      if(match_cons(p_107, sym__2))
        {
          q_107 = ATgetArgument(p_107, 0);
          r_107 = ATgetArgument(p_107, 1);
          {
            ATerm x_107 = NULL,y_107 = NULL,e_108 = NULL,k_108 = NULL;
            ATerm w_21;
            w_21 = t;
            {
              ATerm z_107 = NULL;
              ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL;
              t = not_null(r_107);
              {
                z_107 = t;
                {
                  t = SSL_explode_term(not_null(z_107));
                  {
                    b_108 = t;
                    h_107 :
                    if(match_cons(b_108, sym__2))
                      {
                        c_108 = ATgetArgument(b_108, 0);
                        d_108 = ATgetArgument(b_108, 1);
                        {
                          if(((x_107 != NULL) && (x_107 != c_108)))
                            _fail(c_108);
                          else
                            x_107 = c_108;
                          if(((y_107 != NULL) && (y_107 != d_108)))
                            _fail(d_108);
                          else
                            y_107 = d_108;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = w_21;
            {
              ATerm x_21;
              x_21 = t;
              {
                ATerm f_108 = NULL;
                ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
                t = not_null(q_107);
                {
                  f_108 = t;
                  {
                    t = SSL_explode_term(not_null(f_108));
                    {
                      h_108 = t;
                      k_107 :
                      if(match_cons(h_108, sym__2))
                        {
                          i_108 = ATgetArgument(h_108, 0);
                          j_108 = ATgetArgument(h_108, 1);
                          {
                            if(((x_107 != NULL) && (x_107 != i_108)))
                              _fail(i_108);
                            else
                              x_107 = i_108;
                            if(((e_108 != NULL) && (e_108 != j_108)))
                              _fail(j_108);
                            else
                              e_108 = j_108;
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
                ATerm l_108 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_108), not_null(y_107));
                {
                  t = zip_1(t, _id);
                  {
                    l_108 = t;
                    if(((k_108 != NULL) && (k_108 != l_108)))
                      _fail(l_108);
                    else
                      k_108 = l_108;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_108), not_null(s_107));
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
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL,z_108 = NULL;
  v_108 = t;
  t_108 :
  if(((ATgetType(v_108) == AT_LIST) && ((ATermList) v_108 != ATempty)))
    {
      w_108 = ATgetFirst((ATermList) v_108);
      z_108 = (ATerm) ATgetNext((ATermList) v_108);
      u_108 :
      if(match_cons(w_108, sym__2))
        {
          x_108 = ATgetArgument(w_108, 0);
          y_108 = ATgetArgument(w_108, 1);
          {
            ATerm b_109 = NULL;
            if(((x_108 != NULL) && (x_108 != y_108)))
              _fail(y_108);
            else
              x_108 = y_108;
            {
              if(((b_109 != NULL) && (b_109 != z_108)))
                _fail(z_108);
              else
                b_109 = z_108;
              t = not_null(b_109);
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
ATerm while_not_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  ATerm d_109 (ATerm t)
  {
    ATerm y_21 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_79(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = y_21;
        {
          t = d_79(t);
          t = d_109(t);
        }
      }
    return(t);
  }
  t = d_109(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  t = f_79(t);
  t = while_not_2(t, g_79, h_79);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
  h_109 = t;
  g_109 :
  if(((ATgetType(h_109) == AT_LIST) && ((ATermList) h_109 != ATempty)))
    {
      i_109 = ATgetFirst((ATermList) h_109);
      j_109 = (ATerm) ATgetNext((ATermList) h_109);
      {
        t = n_68(t);
        {
          ATerm s_4 (ATerm t)
          {
            ATerm m_109 = NULL;
            m_109 = t;
            if(((i_109 != NULL) && (i_109 != m_109)))
              _fail(m_109);
            else
              i_109 = m_109;
            return(t);
          }
          t = fetch_1(t, s_4);
        }
        t = not_null(j_109);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm c_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
      s_109 = t;
      q_109 :
      if(match_cons(s_109, sym__2))
        {
          t_109 = ATgetArgument(s_109, 0);
          u_109 = ATgetArgument(s_109, 1);
          {
            t = not_null(t_109);
            {
              ATerm a_110 (ATerm t)
              {
                ATerm j_22 = t;
                int n_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(n_22);
                  }
                else
                  {
                    t = j_22;
                    {
                      ATerm o_22 = t;
                      int s_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_4 (ATerm t)
                          {
                            t = not_null(u_109);
                            return(t);
                          }
                          t = HdMember_1(t, t_4);
                          t = a_110(t);
                          LocalPopChoice(s_22);
                        }
                      else
                        {
                          t = o_22;
                          t = Cons_2(t, _id, a_110);
                        }
                    }
                  }
                return(t);
              }
              t = a_110(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = c_22;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm x_109 = NULL;
          x_109 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(x_109));
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 (ATerm t)
              {
                ATerm b_23 = t;
                int c_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(c_23);
                  }
                else
                  {
                    t = b_23;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, x_4);
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, u_4, v_4, w_4);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm j_58 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm f_110 (ATerm t)
  {
    ATerm d_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_58(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = d_23;
        {
          ATerm g_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_110 = NULL;
              ATerm i_23;
              i_23 = t;
              {
                ATerm e_110 = NULL;
                t = i_58(t);
                {
                  e_110 = t;
                  if(((d_110 != NULL) && (d_110 != e_110)))
                    _fail(e_110);
                  else
                    d_110 = e_110;
                }
              }
              t = i_23;
              {
                ATerm y_4 (ATerm t)
                {
                  ATerm a_5 (ATerm t)
                  {
                    t = not_null(d_110);
                    return(t);
                  }
                  t = split_2(t, f_110, a_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = j_58(t, y_4, f_110, z_4);
                {
                  ATerm b_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_5, union_0, _id);
                }
              }
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
              {
                ATerm c_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_5, union_0, f_110);
              }
            }
        }
      }
    return(t);
  }
  t = f_110(t);
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
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL;
  l_110 = t;
  j_110 :
  if(match_cons(l_110, sym_LRule_1))
    {
      m_110 = ATgetArgument(l_110, 0);
      k_110 :
      if(match_cons(m_110, sym_Rule_3))
        {
          n_110 = ATgetArgument(m_110, 0);
          o_110 = ATgetArgument(m_110, 1);
          p_110 = ATgetArgument(m_110, 2);
          {
            ATerm t_110 = NULL;
            ATerm u_110 = NULL;
            t = not_null(n_110);
            {
              t = tvars_0(t);
              {
                u_110 = t;
                if(((t_110 != NULL) && (t_110 != u_110)))
                  _fail(u_110);
                else
                  t_110 = u_110;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_110), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_110), not_null(o_110), not_null(p_110))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm x_110 (ATerm t)
  {
    t = _all(t, x_110);
    t = e_75(t);
    return(t);
  }
  t = x_110(t);
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
  ATerm a_111 = NULL,b_111 = NULL;
  a_111 = t;
  z_110 :
  if(match_cons(a_111, sym_Var_1))
    {
      b_111 = ATgetArgument(a_111, 0);
      t = not_null(b_111);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL,l_111 = NULL;
  h_111 = t;
  f_111 :
  if(match_cons(h_111, sym__2))
    {
      i_111 = ATgetArgument(h_111, 0);
      j_111 = ATgetArgument(h_111, 1);
      g_111 :
      if(((ATgetType(j_111) == AT_LIST) && ((ATermList) j_111 != ATempty)))
        {
          k_111 = ATgetFirst((ATermList) j_111);
          l_111 = (ATerm) ATgetNext((ATermList) j_111);
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_111), not_null(l_111));
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
  ATerm t_111 = NULL,u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL;
  t_111 = t;
  q_111 :
  if(match_cons(t_111, sym__2))
    {
      u_111 = ATgetArgument(t_111, 0);
      v_111 = ATgetArgument(t_111, 1);
      r_111 :
      if(((ATgetType(v_111) == AT_LIST) && ((ATermList) v_111 != ATempty)))
        {
          w_111 = ATgetFirst((ATermList) v_111);
          z_111 = (ATerm) ATgetNext((ATermList) v_111);
          s_111 :
          if(match_cons(w_111, sym__2))
            {
              x_111 = ATgetArgument(w_111, 0);
              y_111 = ATgetArgument(w_111, 1);
              {
                ATerm b_112 = NULL;
                if(((u_111 != NULL) && (u_111 != x_111)))
                  _fail(x_111);
                else
                  u_111 = x_111;
                {
                  if(((b_112 != NULL) && (b_112 != y_111)))
                    _fail(y_111);
                  else
                    b_112 = y_111;
                  t = not_null(b_112);
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
ATerm SubsVar_2 (ATerm t, ATerm d_60 (ATerm), ATerm e_60 (ATerm))
{
  ATerm i_112 = NULL;
  ATerm k_112 = NULL,l_112 = NULL;
  i_112 = t;
  {
    ATerm m_112 = NULL;
    t = not_null(i_112);
    {
      ATerm n_112 = NULL;
      t = d_60(t);
      {
        m_112 = t;
        {
          if(((k_112 != NULL) && (k_112 != m_112)))
            _fail(m_112);
          else
            k_112 = m_112;
          {
            t = e_60(t);
            {
              n_112 = t;
              if(((l_112 != NULL) && (l_112 != n_112)))
                _fail(n_112);
              else
                l_112 = n_112;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_112), not_null(l_112));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm r_112 (ATerm t)
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_77(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = _all(t, r_112);
      }
    return(t);
  }
  t = r_112(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm v_112 = NULL,w_112 = NULL,x_112 = NULL;
  v_112 = t;
  u_112 :
  if(match_cons(v_112, sym__2))
    {
      w_112 = ATgetArgument(v_112, 0);
      x_112 = ATgetArgument(v_112, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_112)), not_null(w_112));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL;
  f_113 = t;
  c_113 :
  if(match_cons(f_113, sym__2))
    {
      g_113 = ATgetArgument(f_113, 0);
      j_113 = ATgetArgument(f_113, 1);
      d_113 :
      if(((ATgetType(g_113) == AT_LIST) && ((ATermList) g_113 != ATempty)))
        {
          h_113 = ATgetFirst((ATermList) g_113);
          i_113 = (ATerm) ATgetNext((ATermList) g_113);
          e_113 :
          if(((ATgetType(j_113) == AT_LIST) && ((ATermList) j_113 != ATempty)))
            {
              k_113 = ATgetFirst((ATermList) j_113);
              l_113 = (ATerm) ATgetNext((ATermList) j_113);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_113), not_null(k_113)), (ATerm) ATmakeAppl(sym__2, not_null(i_113), not_null(l_113)));
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
  ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL;
  v_113 = t;
  s_113 :
  if(match_cons(v_113, sym__2))
    {
      w_113 = ATgetArgument(v_113, 0);
      x_113 = ATgetArgument(v_113, 1);
      t_113 :
      if(((ATermList) w_113 == ATempty))
        {
          u_113 :
          if(((ATermList) x_113 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm z_113 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_70(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          t = x_70(t);
          {
            t = _2(t, z_70, z_113);
            t = y_70(t);
          }
        }
      }
    return(t);
  }
  t = z_113(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_71 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_71);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL;
  e_114 = t;
  d_114 :
  if(match_cons(e_114, sym__2))
    {
      f_114 = ATgetArgument(e_114, 0);
      g_114 = ATgetArgument(e_114, 1);
      {
        ATerm k_114 = NULL;
        if(((k_114 != NULL) && (k_114 != g_114)))
          _fail(g_114);
        else
          k_114 = g_114;
      }
    }
  else
    {
      if(match_cons(e_114, sym__3))
        {
          f_114 = ATgetArgument(e_114, 0);
          g_114 = ATgetArgument(e_114, 1);
          h_114 = ATgetArgument(e_114, 2);
          {
            ATerm q_114 = NULL;
            ATerm r_114 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_114), not_null(g_114));
            {
              t = zip_1(t, _id);
              {
                r_114 = t;
                if(((q_114 != NULL) && (q_114 != r_114)))
                  _fail(r_114);
                else
                  q_114 = r_114;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_114), not_null(h_114));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL;
  t = subs_args_0(t);
  {
    y_114 = t;
    x_114 :
    if(match_cons(y_114, sym__2))
      {
        z_114 = ATgetArgument(y_114, 0);
        a_115 = ATgetArgument(y_114, 1);
        {
          t = not_null(a_115);
          {
            ATerm g_5 (ATerm t)
            {
              ATerm i_5 (ATerm t)
              {
                t = not_null(z_114);
                return(t);
              }
              t = SubsVar_2(t, f_60, i_5);
              t = g_60(t);
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
ATerm substitute_1 (ATerm t, ATerm h_60 (ATerm))
{
  t = substitute_2(t, h_60, _id);
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
  ATerm r_115 = NULL,s_115 = NULL;
  r_115 = t;
  q_115 :
  if(match_cons(r_115, sym_Constructors_1))
    {
      s_115 = ATgetArgument(r_115, 0);
      {
        t = not_null(s_115);
        t = filter_1(t, OpName_0);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm OLName_0 (ATerm t)
{
  ATerm z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL;
  z_115 = t;
  w_115 :
  if(match_cons(z_115, sym_Overlay_3))
    {
      a_116 = ATgetArgument(z_115, 0);
      b_116 = ATgetArgument(z_115, 1);
      c_116 = ATgetArgument(z_115, 2);
      y_115 :
      if(((ATermList) b_116 == ATempty))
        {
          t = not_null(a_116);
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
  ATerm k_116 = NULL,l_116 = NULL;
  k_116 = t;
  j_116 :
  if(match_cons(k_116, sym_Overlays_1))
    {
      l_116 = ATgetArgument(k_116, 0);
      {
        t = not_null(l_116);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(k_116, sym_Signature_1))
        {
          l_116 = ATgetArgument(k_116, 0);
          {
            t = not_null(l_116);
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
ATerm filter_1 (ATerm t, ATerm p_66 (ATerm))
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
              t = filter_1(t, p_66);
              return(t);
            }
            t = Cons_2(t, p_66, j_5);
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            {
              ATerm s_116 = NULL,t_116 = NULL,v_116 = NULL;
              s_116 = t;
              r_116 :
              if(((ATgetType(s_116) == AT_LIST) && ((ATermList) s_116 != ATempty)))
                {
                  t_116 = ATgetFirst((ATermList) s_116);
                  v_116 = (ATerm) ATgetNext((ATermList) s_116);
                  {
                    t = not_null(v_116);
                    t = filter_1(t, p_66);
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
  ATerm d_117 = NULL,j_117 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm i_117 = NULL;
    t = const_names_0(t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm e_117 = NULL,g_117 = NULL;
        ATerm y_23;
        y_23 = t;
        {
          ATerm f_117 = NULL;
          f_117 = t;
          if(((e_117 != NULL) && (e_117 != f_117)))
            _fail(f_117);
          else
            e_117 = f_117;
        }
        t = y_23;
        {
          ATerm h_117 = NULL;
          h_117 = t;
          if(((g_117 != NULL) && (g_117 != h_117)))
            _fail(h_117);
          else
            g_117 = h_117;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_117), (ATerm) ATmakeAppl(sym_Op_2, not_null(g_117), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, k_5);
      {
        i_117 = t;
        if(((d_117 != NULL) && (d_117 != i_117)))
          _fail(i_117);
        else
          d_117 = i_117;
      }
    }
  }
  t = x_23;
  {
    ATerm l_117 = NULL;
    l_117 = t;
    if(((j_117 != NULL) && (j_117 != l_117)))
      _fail(l_117);
    else
      j_117 = l_117;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_117), not_null(j_117));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL;
  t_117 = t;
  r_117 :
  if(match_cons(t_117, sym__3))
    {
      u_117 = ATgetArgument(t_117, 0);
      v_117 = ATgetArgument(t_117, 1);
      w_117 = ATgetArgument(t_117, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(w_117))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(v_117))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(u_117))))));
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL,f_118 = NULL;
  d_118 = t;
  c_118 :
  if(match_cons(d_118, sym__2))
    {
      e_118 = ATgetArgument(d_118, 0);
      f_118 = ATgetArgument(d_118, 1);
      {
        t = not_null(e_118);
        {
          ATerm l_5 (ATerm t)
          {
            t = not_null(f_118);
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
  ATerm q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL;
  q_118 = t;
  n_118 :
  if(match_cons(q_118, sym__2))
    {
      r_118 = ATgetArgument(q_118, 0);
      v_118 = ATgetArgument(q_118, 1);
      o_118 :
      if(match_cons(r_118, sym__3))
        {
          s_118 = ATgetArgument(r_118, 0);
          t_118 = ATgetArgument(r_118, 1);
          u_118 = ATgetArgument(r_118, 2);
          p_118 :
          if(match_cons(v_118, sym__3))
            {
              w_118 = ATgetArgument(v_118, 0);
              x_118 = ATgetArgument(v_118, 1);
              y_118 = ATgetArgument(v_118, 2);
              {
                ATerm f_119 = NULL,h_119 = NULL,j_119 = NULL;
                ATerm z_23;
                z_23 = t;
                {
                  ATerm g_119 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_118), not_null(w_118));
                  {
                    t = conc_0(t);
                    {
                      g_119 = t;
                      if(((f_119 != NULL) && (f_119 != g_119)))
                        _fail(g_119);
                      else
                        f_119 = g_119;
                    }
                  }
                }
                t = z_23;
                {
                  ATerm a_24;
                  a_24 = t;
                  {
                    ATerm i_119 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_118), not_null(x_118));
                    {
                      t = conc_0(t);
                      {
                        i_119 = t;
                        if(((h_119 != NULL) && (h_119 != i_119)))
                          _fail(i_119);
                        else
                          h_119 = i_119;
                      }
                    }
                  }
                  t = a_24;
                  {
                    ATerm k_119 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_118), not_null(y_118));
                    {
                      t = conc_0(t);
                      {
                        k_119 = t;
                        if(((j_119 != NULL) && (j_119 != k_119)))
                          _fail(k_119);
                        else
                          j_119 = k_119;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(f_119), not_null(h_119), not_null(j_119));
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
ATerm foldr_2 (ATerm t, ATerm j_67 (ATerm), ATerm k_67 (ATerm))
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_67(t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
      {
        ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
        s_119 = t;
        r_119 :
        if(((ATgetType(s_119) == AT_LIST) && ((ATermList) s_119 != ATempty)))
          {
            t_119 = ATgetFirst((ATermList) s_119);
            u_119 = (ATerm) ATgetNext((ATermList) s_119);
            {
              ATerm x_119 = NULL;
              ATerm y_119 = NULL;
              t = not_null(u_119);
              {
                t = foldr_2(t, j_67, k_67);
                {
                  y_119 = t;
                  if(((x_119 != NULL) && (x_119 != y_119)))
                    _fail(y_119);
                  else
                    x_119 = y_119;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_119), not_null(x_119));
                t = k_67(t);
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
  ATerm e_120 = NULL,f_120 = NULL;
  e_120 = t;
  d_120 :
  if(match_cons(e_120, sym_Sorts_1))
    {
      f_120 = ATgetArgument(e_120, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(e_120, sym_Constructors_1))
        {
          f_120 = ATgetArgument(e_120, 0);
          t = not_null(f_120);
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
  ATerm q_120 = NULL,r_120 = NULL;
  q_120 = t;
  p_120 :
  if(match_cons(q_120, sym_Overlays_1))
    {
      r_120 = ATgetArgument(q_120, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(r_120), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(q_120, sym_Rules_1))
        {
          r_120 = ATgetArgument(q_120, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(r_120));
        }
      else
        {
          if(match_cons(q_120, sym_Strategies_1))
            {
              r_120 = ATgetArgument(q_120, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(r_120));
            }
          else
            {
              if(match_cons(q_120, sym_Signature_1))
                {
                  r_120 = ATgetArgument(q_120, 0);
                  {
                    ATerm w_120 = NULL;
                    ATerm x_120 = NULL;
                    t = not_null(r_120);
                    {
                      t = normalize_sigs_0(t);
                      {
                        x_120 = t;
                        if(((w_120 != NULL) && (w_120 != x_120)))
                          _fail(x_120);
                        else
                          w_120 = x_120;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(w_120), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm g_121 = NULL,h_121 = NULL;
  g_121 = t;
  e_121 :
  if(match_cons(g_121, sym_Specification_1))
    {
      h_121 = ATgetArgument(g_121, 0);
      t = not_null(h_121);
    }
  else
    _fail(t);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm k_121 (ATerm t)
  {
    t = c_75(t);
    t = _all(t, k_121);
    return(t);
  }
  t = k_121(t);
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm n_121 = NULL,o_121 = NULL;
      n_121 = t;
      m_121 :
      if(match_cons(n_121, sym_DefaultVarDec_1))
        {
          o_121 = ATgetArgument(n_121, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_121), term_x_13);
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
          t = term_p_18;
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
ATerm _2 (ATerm t, ATerm v_45 (ATerm), ATerm w_45 (ATerm))
{
  ATerm x_121 = NULL,y_121 = NULL,z_121 = NULL;
  x_121 = t;
  v_121 :
  if(match_cons(x_121, sym__2))
    {
      y_121 = ATgetArgument(x_121, 0);
      z_121 = ATgetArgument(x_121, 1);
      {
        ATerm c_122 = NULL;
        t = not_null(y_121);
        {
          ATerm e_122 = NULL;
          t = v_45(t);
          {
            c_122 = t;
            {
              t = not_null(z_121);
              {
                t = w_45(t);
                {
                  e_122 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_122), not_null(e_122));
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
  ATerm n_122 = NULL;
  ATerm f_24;
  f_24 = t;
  {
    ATerm z_6 (ATerm t)
    {
      ATerm p_122 = NULL,q_122 = NULL;
      p_122 = t;
      l_122 :
      if(match_cons(p_122, sym_Program_1))
        {
          q_122 = ATgetArgument(p_122, 0);
          if(((n_122 != NULL) && (n_122 != q_122)))
            _fail(q_122);
          else
            n_122 = q_122;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, z_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(CheckATermList(term_i_24), not_null(n_122)), term_g_24));
      {
        t = printnl_0(t);
        {
          t = term_z_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_24;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_l_24;
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
  ATerm x_122 = NULL,y_122 = NULL;
  ATerm a_7 (ATerm t)
  {
    ATerm b_7 (ATerm t)
    {
      ATerm m_24 = t;
      if((PushChoice() == 0))
        {
          ATerm c_7 (ATerm t)
          {
            ATerm z_122 = NULL;
            z_122 = t;
            s_122 :
            if(!(match_cons(z_122, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, c_7);
          PopChoice();
          _fail(t);
        }
      else
        t = m_24;
      return(t);
    }
    t = _2(t, b_7, _id);
    {
      ATerm d_7 (ATerm t)
      {
        ATerm e_7 (ATerm t)
        {
          ATerm a_123 = NULL,b_123 = NULL;
          a_123 = t;
          u_122 :
          if(match_cons(a_123, sym_Runtime_1))
            {
              b_123 = ATgetArgument(a_123, 0);
              if(((y_122 != NULL) && (y_122 != b_123)))
                _fail(b_123);
              else
                y_122 = b_123;
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
            ATerm c_123 = NULL,d_123 = NULL;
            c_123 = t;
            w_122 :
            if(match_cons(c_123, sym_Program_1))
              {
                d_123 = ATgetArgument(c_123, 0);
                if(((x_122 != NULL) && (x_122 != d_123)))
                  _fail(d_123);
                else
                  x_122 = d_123;
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
          t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_p_24), not_null(y_122)), term_n_24), not_null(x_122)));
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
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL;
  i_123 = t;
  h_123 :
  if(match_cons(i_123, sym__2))
    {
      j_123 = ATgetArgument(i_123, 0);
      k_123 = ATgetArgument(i_123, 1);
      t = SSL_WriteToTextFile(not_null(j_123), not_null(k_123));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_123 = NULL,r_123 = NULL,s_123 = NULL;
  q_123 = t;
  p_123 :
  if(match_cons(q_123, sym__2))
    {
      r_123 = ATgetArgument(q_123, 0);
      s_123 = ATgetArgument(q_123, 1);
      t = SSL_WriteToBinaryFile(not_null(r_123), not_null(s_123));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_124 = NULL;
  ATerm q_24;
  q_24 = t;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm r_24 = t;
      int s_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_7 (ATerm t)
          {
            ATerm b_124 = NULL,c_124 = NULL;
            b_124 = t;
            x_123 :
            if(match_cons(b_124, sym_Output_1))
              {
                c_124 = ATgetArgument(b_124, 0);
                if(((a_124 != NULL) && (a_124 != c_124)))
                  _fail(c_124);
                else
                  a_124 = c_124;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, i_7);
          LocalPopChoice(s_24);
        }
      else
        {
          t = r_24;
          {
            ATerm d_124 = NULL;
            t = term_t_24;
            {
              d_124 = t;
              if(((a_124 != NULL) && (a_124 != d_124)))
                _fail(d_124);
              else
                a_124 = d_124;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_7, _id);
  }
  t = q_24;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm k_7 (ATerm t)
      {
        t = not_null(a_124);
        return(t);
      }
      t = split_2(t, k_7, _id);
      return(t);
    }
    t = _2(t, _id, j_7);
    {
      ATerm u_24 = t;
      int v_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_7 (ATerm t)
          {
            ATerm m_7 (ATerm t)
            {
              ATerm e_124 = NULL;
              e_124 = t;
              z_123 :
              if(!(match_cons(e_124, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, m_7);
            return(t);
          }
          t = _2(t, l_7, WriteToBinaryFile_0);
          LocalPopChoice(v_24);
        }
      else
        {
          t = u_24;
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
ATerm apply_strategy_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm k_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  ATerm w_24;
  w_24 = t;
  t = dtime_0(t);
  t = w_24;
  {
    t = g_63(t);
    {
      ATerm x_24;
      x_24 = t;
      {
        ATerm l_124 = NULL;
        t = dtime_0(t);
        {
          l_124 = t;
          if(((k_124 != NULL) && (k_124 != l_124)))
            _fail(l_124);
          else
            k_124 = l_124;
        }
      }
      t = x_24;
      {
        m_124 = t;
        j_124 :
        if(match_cons(m_124, sym__2))
          {
            n_124 = ATgetArgument(m_124, 0);
            o_124 = ATgetArgument(m_124, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_124)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_124))), not_null(o_124));
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
  ATerm u_124 = NULL;
  u_124 = t;
  t = SSL_ReadFromFile(not_null(u_124));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_65 (ATerm), ATerm y_65 (ATerm))
{
  ATerm z_124 = NULL,b_125 = NULL;
  ATerm y_24;
  y_24 = t;
  {
    ATerm a_125 = NULL;
    t = x_65(t);
    {
      a_125 = t;
      if(((z_124 != NULL) && (z_124 != a_125)))
        _fail(a_125);
      else
        z_124 = a_125;
    }
  }
  t = y_24;
  {
    ATerm c_125 = NULL;
    t = y_65(t);
    {
      c_125 = t;
      if(((b_125 != NULL) && (b_125 != c_125)))
        _fail(c_125);
      else
        b_125 = c_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_124), not_null(b_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_125 = NULL;
  ATerm z_24;
  z_24 = t;
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 (ATerm t)
        {
          ATerm j_125 = NULL,k_125 = NULL;
          j_125 = t;
          g_125 :
          if(match_cons(j_125, sym_Input_1))
            {
              k_125 = ATgetArgument(j_125, 0);
              if(((i_125 != NULL) && (i_125 != k_125)))
                _fail(k_125);
              else
                i_125 = k_125;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, n_7);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          ATerm l_125 = NULL;
          t = term_c_25;
          {
            l_125 = t;
            if(((i_125 != NULL) && (i_125 != l_125)))
              _fail(l_125);
            else
              i_125 = l_125;
          }
        }
      }
  }
  t = z_24;
  {
    ATerm o_7 (ATerm t)
    {
      t = not_null(i_125);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_125 = NULL;
  p_125 = t;
  o_125 :
  if(!(match_cons(p_125, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm p_7 (ATerm t)
  {
    ATerm d_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_25);
      }
    else
      {
        t = d_25;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_7);
  t = f_63(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_125 = NULL;
  r_125 = t;
  t = SSL_table_create(not_null(r_125));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_125 = NULL;
  v_125 = t;
  {
    ATerm r_25;
    r_25 = t;
    {
      t = term_s_25;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_25, term_t_25, not_null(v_125));
          t = table_put_0(t);
        }
      }
    }
    t = r_25;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL,h_126 = NULL,i_126 = NULL;
  d_126 = t;
  b_126 :
  if(match_string(d_126, "register-usage-info"))
    t = register_usage_1(t, n_0);
  else
    {
      if(((ATgetType(d_126) == AT_LIST) && ((ATermList) d_126 != ATempty)))
        {
          e_126 = ATgetFirst((ATermList) d_126);
          f_126 = (ATerm) ATgetNext((ATermList) d_126);
          c_126 :
          if(((ATgetType(f_126) == AT_LIST) && ((ATermList) f_126 != ATempty)))
            {
              h_126 = ATgetFirst((ATermList) f_126);
              i_126 = (ATerm) ATgetNext((ATermList) f_126);
              {
                ATerm m_126 = NULL;
                ATerm u_25;
                u_25 = t;
                {
                  t = not_null(e_126);
                  t = l_0(t);
                }
                t = u_25;
                {
                  ATerm n_126 = NULL;
                  t = not_null(h_126);
                  {
                    t = m_0(t);
                    {
                      n_126 = t;
                      if(((m_126 != NULL) && (m_126 != n_126)))
                        _fail(n_126);
                      else
                        m_126 = n_126;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_126)), not_null(m_126));
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
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 (ATerm t)
      {
        ATerm e_127 = NULL;
        e_127 = t;
        s_126 :
        if(!(match_string(e_127, "-S")))
          {
            if(!(match_string(e_127, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = term_x_25;
        return(t);
      }
      ATerm u_7 (ATerm t)
      {
        t = term_y_25;
        return(t);
      }
      t = Option_3(t, r_7, s_7, u_7);
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              ATerm f_127 = NULL;
              f_127 = t;
              t_126 :
              if(!(match_string(f_127, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm g_8 (ATerm t)
            {
              t = term_b_26;
              return(t);
            }
            ATerm o_8 (ATerm t)
            {
              t = term_c_26;
              return(t);
            }
            t = Option_3(t, y_7, g_8, o_8);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              ATerm d_26 = t;
              int e_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_8 (ATerm t)
                  {
                    ATerm g_127 = NULL;
                    g_127 = t;
                    u_126 :
                    if(!(match_string(g_127, "-v")))
                      {
                        if(!(match_string(g_127, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm q_8 (ATerm t)
                  {
                    t = term_f_26;
                    return(t);
                  }
                  ATerm r_8 (ATerm t)
                  {
                    t = term_g_26;
                    return(t);
                  }
                  t = Option_3(t, p_8, q_8, r_8);
                  LocalPopChoice(e_26);
                }
              else
                {
                  t = d_26;
                  {
                    ATerm h_26 = t;
                    int i_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_8 (ATerm t)
                        {
                          ATerm h_127 = NULL;
                          h_127 = t;
                          v_126 :
                          if(!(match_string(h_127, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm t_8 (ATerm t)
                        {
                          ATerm i_127 = NULL;
                          ATerm j_127 = NULL;
                          j_127 = t;
                          if(((i_127 != NULL) && (i_127 != j_127)))
                            _fail(j_127);
                          else
                            i_127 = j_127;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(i_127));
                          return(t);
                        }
                        ATerm u_8 (ATerm t)
                        {
                          t = term_j_26;
                          return(t);
                        }
                        t = ArgOption_3(t, s_8, t_8, u_8);
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
                              ATerm v_8 (ATerm t)
                              {
                                ATerm k_127 = NULL;
                                k_127 = t;
                                x_126 :
                                if(!(match_string(k_127, "-i")))
                                  {
                                    if(!(match_string(k_127, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_8 (ATerm t)
                              {
                                ATerm m_127 = NULL;
                                ATerm n_127 = NULL;
                                n_127 = t;
                                if(((m_127 != NULL) && (m_127 != n_127)))
                                  _fail(n_127);
                                else
                                  m_127 = n_127;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_127));
                                return(t);
                              }
                              ATerm d_9 (ATerm t)
                              {
                                t = term_m_26;
                                return(t);
                              }
                              t = ArgOption_3(t, v_8, w_8, d_9);
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
                                    ATerm e_9 (ATerm t)
                                    {
                                      ATerm o_127 = NULL;
                                      o_127 = t;
                                      z_126 :
                                      if(!(match_string(o_127, "-o")))
                                        {
                                          if(!(match_string(o_127, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_9 (ATerm t)
                                    {
                                      ATerm p_127 = NULL;
                                      ATerm q_127 = NULL;
                                      q_127 = t;
                                      if(((p_127 != NULL) && (p_127 != q_127)))
                                        _fail(q_127);
                                      else
                                        p_127 = q_127;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_127));
                                      return(t);
                                    }
                                    ATerm g_9 (ATerm t)
                                    {
                                      t = term_p_26;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_9, f_9, g_9);
                                    LocalPopChoice(o_26);
                                  }
                                else
                                  {
                                    t = n_26;
                                    {
                                      ATerm q_26 = t;
                                      int r_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_9 (ATerm t)
                                          {
                                            ATerm r_127 = NULL;
                                            r_127 = t;
                                            b_127 :
                                            if(!(match_string(r_127, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm i_9 (ATerm t)
                                          {
                                            t = term_s_26;
                                            return(t);
                                          }
                                          ATerm j_9 (ATerm t)
                                          {
                                            t = term_t_26;
                                            return(t);
                                          }
                                          t = Option_3(t, h_9, i_9, j_9);
                                          LocalPopChoice(r_26);
                                        }
                                      else
                                        {
                                          t = q_26;
                                          {
                                            ATerm m_9 (ATerm t)
                                            {
                                              ATerm s_127 = NULL;
                                              s_127 = t;
                                              c_127 :
                                              if(!(match_string(s_127, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_9 (ATerm t)
                                            {
                                              t = term_u_26;
                                              return(t);
                                            }
                                            ATerm x_9 (ATerm t)
                                            {
                                              t = term_v_26;
                                              return(t);
                                            }
                                            t = Option_3(t, m_9, q_9, x_9);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm x_127 = NULL;
  x_127 = t;
  t = SSL_table_destroy(not_null(x_127));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_128 = NULL;
  c_128 = t;
  t = SSL_exit(not_null(c_128));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_128 = NULL;
  g_128 = t;
  t = SSL_implode_string(not_null(g_128));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm j_128 (ATerm t)
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_128);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        {
          t = Nil_0(t);
          t = x_72(t);
        }
      }
    return(t);
  }
  t = j_128(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL;
        m_128 = t;
        l_128 :
        if(((ATgetType(m_128) == AT_LIST) && ((ATermList) m_128 != ATempty)))
          {
            n_128 = ATgetFirst((ATermList) m_128);
            o_128 = (ATerm) ATgetNext((ATermList) m_128);
            {
              t = not_null(n_128);
              {
                ATerm y_9 (ATerm t)
                {
                  t = not_null(o_128);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_9);
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
  ATerm v_128 = NULL;
  v_128 = t;
  t = SSL_explode_string(not_null(v_128));
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
ATerm long_description_1 (ATerm t, ATerm m_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm j_72 (ATerm))
{
  ATerm y_128 (ATerm t)
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        t = Cons_2(t, j_72, y_128);
      }
    return(t);
  }
  t = y_128(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm d_129 = NULL,f_129 = NULL,g_129 = NULL;
  g_129 = t;
  c_129 :
  if(((ATgetType(g_129) == AT_LIST) && ((ATermList) g_129 != ATempty)))
    {
      d_129 = ATgetFirst((ATermList) g_129);
      f_129 = (ATerm) ATgetNext((ATermList) g_129);
      {
        t = not_null(f_129);
        {
          ATerm z_9 (ATerm t)
          {
            ATerm j_129 = NULL;
            ATerm k_129 = NULL;
            t = k_0(t);
            {
              k_129 = t;
              if(((j_129 != NULL) && (j_129 != k_129)))
                _fail(k_129);
              else
                j_129 = k_129;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(j_129)), not_null(d_129));
            return(t);
          }
          t = reverse_1(t, z_9);
        }
      }
    }
  else
    {
      if(((ATermList) g_129 == ATempty))
        {
          {
            t = term_p_14;
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
  ATerm a_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, a_10);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_61 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_47 (ATerm))
{
  ATerm r_129 = NULL,s_129 = NULL;
  r_129 = t;
  q_129 :
  if(match_cons(r_129, sym_Program_1))
    {
      s_129 = ATgetArgument(r_129, 0);
      {
        ATerm u_129 = NULL;
        t = not_null(s_129);
        {
          t = e_47(t);
          {
            u_129 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_129));
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
  ATerm c_130 = NULL;
  ATerm b_10 (ATerm t)
  {
    ATerm c_10 (ATerm t)
    {
      ATerm d_130 = NULL;
      d_130 = t;
      if(((c_130 != NULL) && (c_130 != d_130)))
        _fail(d_130);
      else
        c_130 = d_130;
      return(t);
    }
    t = Program_1(t, c_10);
    return(t);
  }
  t = option_defined_1(t, b_10);
  {
    ATerm d_10 (ATerm t)
    {
      ATerm e_130 = NULL;
      ATerm f_130 = NULL;
      t = term_p_14;
      {
        ATerm f_10 (ATerm t)
        {
          t = not_null(c_130);
          return(t);
        }
        t = short_description_1(t, f_10);
        {
          t = concat_strings_0(t);
          {
            f_130 = t;
            if(((e_130 != NULL) && (e_130 != f_130)))
              _fail(f_130);
            else
              e_130 = f_130;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATempty, not_null(e_130)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_10);
    {
      t = term_e_27;
      {
        t = printnl_0(t);
        {
          t = term_h_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_10 (ATerm t)
                {
                  ATerm g_130 = NULL;
                  g_130 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_130)), term_i_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_10);
                {
                  ATerm h_10 (ATerm t)
                  {
                    ATerm i_130 = NULL;
                    ATerm j_130 = NULL;
                    t = term_p_14;
                    {
                      ATerm j_10 (ATerm t)
                      {
                        t = not_null(c_130);
                        return(t);
                      }
                      t = long_description_1(t, j_10);
                      {
                        t = concat_strings_0(t);
                        {
                          j_130 = t;
                          if(((i_130 != NULL) && (i_130 != j_130)))
                            _fail(j_130);
                          else
                            i_130 = j_130;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_130)), term_j_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_10);
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
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL;
  q_130 = t;
  p_130 :
  if(match_cons(q_130, sym__2))
    {
      r_130 = ATgetArgument(q_130, 0);
      s_130 = ATgetArgument(q_130, 1);
      {
        ATerm k_27;
        k_27 = t;
        t = SSL_printnl(not_null(r_130), not_null(s_130));
        t = k_27;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_47 (ATerm))
{
  ATerm z_130 = NULL,a_131 = NULL;
  z_130 = t;
  y_130 :
  if(match_cons(z_130, sym_Undefined_1))
    {
      a_131 = ATgetArgument(z_130, 0);
      {
        ATerm c_131 = NULL;
        t = not_null(a_131);
        {
          t = f_47(t);
          {
            c_131 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_131));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm g_131 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_72, _id);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = Cons_2(t, _id, g_131);
      }
    return(t);
  }
  t = g_131(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_62 (ATerm))
{
  t = fetch_1(t, k_62);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_131 = NULL;
  i_131 = t;
  h_131 :
  if(!(match_cons(i_131, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_79(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL;
  l_131 = t;
  k_131 :
  if(match_cons(l_131, sym__2))
    {
      m_131 = ATgetArgument(l_131, 0);
      n_131 = ATgetArgument(l_131, 1);
      t = SSL_table_get(not_null(m_131), not_null(n_131));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL;
  u_131 = t;
  t_131 :
  if(match_cons(u_131, sym__3))
    {
      v_131 = ATgetArgument(u_131, 0);
      w_131 = ATgetArgument(u_131, 1);
      x_131 = ATgetArgument(u_131, 2);
      {
        ATerm p_27;
        p_27 = t;
        {
          ATerm b_132 = NULL;
          ATerm c_132 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_131), not_null(w_131));
          {
            ATerm q_27 = t;
            int r_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_27);
              }
            else
              {
                t = q_27;
                t = (ATerm) ATempty;
              }
            {
              c_132 = t;
              if(((b_132 != NULL) && (b_132 != c_132)))
                _fail(c_132);
              else
                b_132 = c_132;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_131), not_null(w_131), (ATerm) ATinsert(CheckATermList(not_null(b_132)), not_null(x_131)));
            t = table_put_0(t);
          }
        }
        t = p_27;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm g_132 = NULL;
  ATerm h_132 = NULL;
  t = term_p_14;
  {
    t = q_61(t);
    {
      h_132 = t;
      if(((g_132 != NULL) && (g_132 != h_132)))
        _fail(h_132);
      else
        g_132 = h_132;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_27, term_g_27, not_null(g_132));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm n_132 = NULL,o_132 = NULL,p_132 = NULL;
  n_132 = t;
  m_132 :
  if(match_string(n_132, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(n_132) == AT_LIST) && ((ATermList) n_132 != ATempty)))
        {
          o_132 = ATgetFirst((ATermList) n_132);
          p_132 = (ATerm) ATgetNext((ATermList) n_132);
          {
            ATerm s_132 = NULL;
            ATerm s_27;
            s_27 = t;
            {
              t = not_null(o_132);
              t = a_0(t);
            }
            t = s_27;
            {
              ATerm t_132 = NULL;
              t = term_p_14;
              {
                t = g_0(t);
                {
                  t_132 = t;
                  if(((s_132 != NULL) && (s_132 != t_132)))
                    _fail(t_132);
                  else
                    s_132 = t_132;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_132)), not_null(s_132));
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
  ATerm n_10 (ATerm t)
  {
    ATerm y_132 = NULL;
    y_132 = t;
    x_132 :
    if(!(match_string(y_132, "--help")))
      {
        if(!(match_string(y_132, "-h")))
          {
            if(!(match_string(y_132, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm v_10 (ATerm t)
  {
    t = term_t_27;
    return(t);
  }
  ATerm z_10 (ATerm t)
  {
    t = term_u_27;
    return(t);
  }
  t = Option_3(t, n_10, v_10, z_10);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL;
  b_133 = t;
  a_133 :
  if(((ATgetType(b_133) == AT_LIST) && ((ATermList) b_133 != ATempty)))
    {
      c_133 = ATgetFirst((ATermList) b_133);
      d_133 = (ATerm) ATgetNext((ATermList) b_133);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_133)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_133)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL;
  l_133 = t;
  k_133 :
  if(((ATgetType(l_133) == AT_LIST) && ((ATermList) l_133 != ATempty)))
    {
      m_133 = ATgetFirst((ATermList) l_133);
      n_133 = (ATerm) ATgetNext((ATermList) l_133);
      {
        ATerm q_133 = NULL;
        t = not_null(m_133);
        {
          ATerm s_133 = NULL;
          t = i_56(t);
          {
            q_133 = t;
            {
              t = not_null(n_133);
              {
                t = j_56(t);
                {
                  s_133 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_133)), not_null(q_133));
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
  ATerm y_133 = NULL;
  y_133 = t;
  x_133 :
  if(((ATermList) y_133 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm v_27;
  v_27 = t;
  {
    ATerm a_11 (ATerm t)
    {
      t = term_w_27;
      t = o_61(t);
      return(t);
    }
    t = try_1(t, a_11);
  }
  t = v_27;
  {
    ATerm b_11 (ATerm t)
    {
      ATerm a_134 = NULL;
      a_134 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_134));
      return(t);
    }
    ATerm c_11 (ATerm t)
    {
      ATerm x_27 = t;
      int y_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_27 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_28);
            }
          else
            {
              t = z_27;
              {
                t = o_61(t);
                t = Cons_2(t, _id, c_11);
              }
            }
          LocalPopChoice(y_27);
        }
      else
        {
          t = x_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_11, c_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    ATerm j_134 = NULL,k_134 = NULL,l_134 = NULL,m_134 = NULL;
    j_134 = t;
    f_134 :
    if(match_cons(j_134, sym__3))
      {
        k_134 = ATgetArgument(j_134, 0);
        l_134 = ATgetArgument(j_134, 1);
        m_134 = ATgetArgument(j_134, 2);
        {
          if(((g_134 != NULL) && (g_134 != k_134)))
            _fail(k_134);
          else
            g_134 = k_134;
          {
            if(((h_134 != NULL) && (h_134 != l_134)))
              _fail(l_134);
            else
              h_134 = l_134;
            {
              if(((i_134 != NULL) && (i_134 != m_134)))
                _fail(m_134);
              else
                i_134 = m_134;
              t = SSL_table_put(not_null(g_134), not_null(h_134), not_null(i_134));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = d_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_61 (ATerm))
{
  ATerm p_134 = NULL;
  ATerm e_28;
  e_28 = t;
  {
    t = term_f_28;
    t = table_put_0(t);
  }
  t = e_28;
  {
    ATerm d_11 (ATerm t)
    {
      ATerm g_28 = t;
      int k_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_61(t);
          LocalPopChoice(k_28);
        }
      else
        {
          t = g_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_11);
    {
      ATerm e_11 (ATerm t)
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
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
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
              ATerm f_11 (ATerm t)
              {
                ATerm g_11 (ATerm t)
                {
                  ATerm q_134 = NULL;
                  q_134 = t;
                  if(((p_134 != NULL) && (p_134 != q_134)))
                    _fail(q_134);
                  else
                    p_134 = q_134;
                  return(t);
                }
                t = Undefined_1(t, g_11);
                return(t);
              }
              t = option_defined_1(t, f_11);
              {
                ATerm n_28;
                n_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_134)), term_o_28));
                  t = printnl_0(t);
                }
                t = n_28;
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
      t = try_1(t, e_11);
      {
        ATerm q_28;
        q_28 = t;
        {
          t = term_f_27;
          t = table_destroy_0(t);
        }
        t = q_28;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm u_62 (ATerm), ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  ATerm j_11 (ATerm t)
  {
    ATerm r_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_62(t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = r_28;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, j_11);
  {
    t = store_options_0(t);
    {
      ATerm v_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, w_62);
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
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, u_62);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(y_28);
              }
            else
              {
                t = x_28;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm p_62 (ATerm), ATerm q_62 (ATerm))
{
  t = iowrap_3(t, p_62, q_62, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm k_11 (ATerm t)
  {
    t = _2(t, _id, m_62);
    return(t);
  }
  t = iowrap_2(t, k_11, _fail);
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
