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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_CUT_0;
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
Symbol sym_SRDef_3;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_f_22;
ATerm term_b_22;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_v_20;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_x_14;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_a_12;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_e_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_s_4;
ATerm term_o_4;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_4);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_Var_1, term_w_4);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_Match_1, term_x_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_Build_1, term_x_4);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym_Var_1, term_k_5);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Var_1, term_m_5);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Var_1, term_q_5);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_Var_1, term_p_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_a_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Var_1, term_l_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Build_1, term_o_5);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Call_2, term_q_6, (ATerm) ATempty);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Build_1, term_x_5);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Match_1, term_m_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Str_1, term_a_7);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Var_1, term_x_6);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Str_1, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Var_1, term_l_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Call_2, term_w_7, (ATerm) ATempty);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Match_1, term_p_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_7, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_4, term_z_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Call_2, term_m_8, (ATerm) ATempty);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_x_7, term_n_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_r_8, term_y_4);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_8, term_y_4);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_x_7, term_x_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Var_1, term_c_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Match_1, term_s_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Str_1, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Build_1, term_s_9);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_10, term_x_7);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_App_2, term_x_7, term_s_9);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Match_1, term_c_7);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Var_1, term_r_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_o_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm test12_0 (ATerm);
ATerm test11_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm h_58 (ATerm));
ATerm test10_0 (ATerm);
ATerm test9_0 (ATerm);
ATerm test8_0 (ATerm);
ATerm test7_0 (ATerm);
ATerm test6_0 (ATerm);
ATerm test5_0 (ATerm);
ATerm test4_0 (ATerm);
ATerm test3_0 (ATerm);
ATerm apply_test_3 (ATerm, ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm h_63 (ATerm));
ATerm test2_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm z_82 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm));
ATerm lchoice_1 (ATerm, ATerm y_82 (ATerm));
ATerm LChoice_2 (ATerm, ATerm h_54 (ATerm), ATerm i_54 (ATerm));
ATerm try_1 (ATerm, ATerm v_73 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm v_82 (ATerm), ATerm w_82 (ATerm));
ATerm choice_1 (ATerm, ATerm x_82 (ATerm));
ATerm Choice_2 (ATerm, ATerm f_54 (ATerm), ATerm g_54 (ATerm));
ATerm error_0 (ATerm);
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_61 (ATerm));
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm));
ATerm RootApp_1 (ATerm, ATerm x_56 (ATerm));
ATerm App_2 (ATerm, ATerm v_56 (ATerm), ATerm w_56 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm y_61 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm c_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm s_55 (ATerm));
ATerm Build_1 (ATerm, ATerm t_55 (ATerm));
ATerm VarScope_1 (ATerm, ATerm u_82 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_61 (ATerm));
ATerm DefineUnbound_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm z_57 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_55 (ATerm), ATerm x_55 (ATerm));
ATerm tboundin_3 (ATerm, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm n_80 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm crush_3 (ATerm, ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm));
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm x_78 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm l_80 (ATerm), ATerm m_80 (ATerm));
ATerm diff_1 (ATerm, ATerm q_80 (ATerm));
ATerm diff_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm free_vars_3 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm map_1 (ATerm, ATerm o_78 (ATerm));
ATerm end_scope_1 (ATerm, ATerm u_61 (ATerm));
ATerm restore_always_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm t_61 (ATerm));
ATerm scope_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm));
ATerm def_use_def_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_58 (ATerm), ATerm n_58 (ATerm));
ATerm filter_1 (ATerm, ATerm l_68 (ATerm));
ATerm defs_use_def_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm j_58 (ATerm));
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm));
ATerm apply_and_fail_4 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm s_63 (ATerm));
ATerm apply_and_fail_3 (ATerm, ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm o_63 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm o_47 (ATerm), ATerm p_47 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_62 (ATerm));
ATerm test_suite_2 (ATerm, ATerm v_62 (ATerm), ATerm w_62 (ATerm));
ATerm use_def_test_0 (ATerm);
ATerm main_0 (ATerm);
ATerm test12_0 (ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = term_n_4;
    return(t);
  }
  ATerm d_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, term_o_4, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_v_4, (ATerm) ATinsert(ATempty, term_y_4)), (ATerm)ATmakeAppl(sym_Call_2, term_v_4, (ATerm) ATinsert(ATempty, term_z_4)), term_a_5));
    return(t);
  }
  t = apply_test_3(t, a_0, def_use_def_0, d_0);
  return(t);
}
ATerm test11_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_b_5;
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_o_5), term_l_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_x_5), term_w_5)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_o_5), term_l_5))), term_w_5))))));
    return(t);
  }
  t = apply_test_3(t, e_0, def_use_def_0, f_0);
  {
    ATerm l_0 (ATerm t)
    {
      t = term_y_5;
      return(t);
    }
    ATerm m_0 (ATerm t)
    {
      t = Strategies_1(t, defs_use_def_0);
      return(t);
    }
    ATerm n_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_z_5, (ATerm)ATinsert(ATempty, term_b_6), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_o_5), term_l_5)), (ATerm)ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_m_6), term_l_5))), term_w_5)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_x_5), term_w_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_r_6, (ATerm) ATmakeAppl(sym_Op_2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, term_w_5), term_l_5)))), term_t_6))))), term_u_6))))));
      return(t);
    }
    t = apply_test_3(t, l_0, m_0, n_0);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm l_4 = NULL,m_4 = NULL;
  l_4 = t;
  k_4 :
  if(match_cons(l_4, sym_Overlays_1))
    {
      m_4 = ATgetArgument(l_4, 0);
      {
        ATerm p_4 = NULL,r_4 = NULL;
        ATerm q_4 = NULL;
        t = SSLgetAnnotations(not_null(l_4));
        {
          q_4 = t;
          if(((p_4 != NULL) && (p_4 != q_4)))
            _fail(q_4);
          else
            p_4 = q_4;
        }
        {
          t = not_null(m_4);
          {
            ATerm t_4 = NULL;
            t = h_58(t);
            {
              r_4 = t;
              {
                ATerm u_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(r_4)), not_null(p_4));
                {
                  u_4 = t;
                  if(((t_4 != NULL) && (t_4 != u_4)))
                    _fail(u_4);
                  else
                    t_4 = u_4;
                }
                t = not_null(t_4);
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
ATerm test10_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = Overlays_1(t, defs_use_def_0);
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_m_5, (ATerm)ATinsert(ATinsert(ATempty, term_x_6), term_w_4), (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), term_k_7), term_x_4)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_w_6, (ATerm)ATinsert(ATinsert(ATempty, term_x_6), term_w_4), (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_b_7), term_x_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, o_0, p_0, q_0);
  return(t);
}
ATerm test9_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = term_r_7;
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_8)));
    return(t);
  }
  t = apply_test_3(t, r_0, def_use_def_0, s_0);
  {
    ATerm t_0 (ATerm t)
    {
      t = term_b_8;
      return(t);
    }
    ATerm u_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_5)));
      return(t);
    }
    t = apply_and_fail_3(t, t_0, def_use_def_0, u_0);
  }
  return(t);
}
ATerm test8_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_c_8;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_8));
    return(t);
  }
  t = apply_test_3(t, v_0, def_use_def_0, w_0);
  {
    ATerm x_0 (ATerm t)
    {
      t = term_d_8;
      return(t);
    }
    ATerm y_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_RDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_5));
      return(t);
    }
    t = apply_and_fail_3(t, x_0, def_use_def_0, y_0);
  }
  return(t);
}
ATerm test7_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4))))));
    return(t);
  }
  t = apply_test_3(t, z_0, def_use_def_0, a_1);
  {
    ATerm b_1 (ATerm t)
    {
      t = term_f_8;
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, b_1, def_use_def_0, c_1);
    {
      ATerm d_1 (ATerm t)
      {
        t = term_f_8;
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))))));
        return(t);
      }
      t = apply_and_fail_3(t, d_1, def_use_def_0, e_1);
    }
  }
  return(t);
}
ATerm test6_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_g_8;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_x_4)))));
    return(t);
  }
  t = apply_test_3(t, f_1, def_use_def_0, g_1);
  {
    ATerm h_1 (ATerm t)
    {
      t = term_w_8;
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_y_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_x_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, h_1, def_use_def_0, i_1);
  }
  return(t);
}
ATerm test5_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4)))));
    return(t);
  }
  t = apply_test_3(t, j_1, def_use_def_0, k_1);
  {
    ATerm l_1 (ATerm t)
    {
      t = term_a_9;
      return(t);
    }
    ATerm m_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, l_1, def_use_def_0, m_1);
  }
  return(t);
}
ATerm test4_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_b_9;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_c_9), term_c_10))), term_a_10)))));
    return(t);
  }
  t = apply_and_fail_3(t, n_1, def_use_def_0, o_1);
  {
    ATerm p_1 (ATerm t)
    {
      t = term_i_10;
      return(t);
    }
    ATerm q_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_t_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_j_10), term_a_10)))));
      return(t);
    }
    t = apply_test_3(t, p_1, def_use_def_0, q_1);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_n_10;
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_c_9), term_c_10))), term_a_10))));
        return(t);
      }
      t = apply_and_fail_3(t, r_1, def_use_def_0, s_1);
    }
  }
  return(t);
}
ATerm test3_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_6), (ATerm) ATmakeAppl(sym_Seq_2, term_p_10, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_x_4)))))));
    return(t);
  }
  t = apply_test_3(t, t_1, def_use_def_0, u_1);
  {
    ATerm v_1 (ATerm t)
    {
      t = term_q_10;
      return(t);
    }
    ATerm w_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_6), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_t_10), term_x_4))), term_c_7))))));
      return(t);
    }
    t = apply_and_fail_3(t, v_1, def_use_def_0, w_1);
  }
  return(t);
}
ATerm apply_test_3 (ATerm t, ATerm f_63 (ATerm), ATerm g_63 (ATerm), ATerm h_63 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_63(t);
        t = g_63(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          t = term_x_10;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, f_63, x_1);
  return(t);
}
ATerm test2_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_y_10;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_x_4)))));
    return(t);
  }
  t = apply_test_3(t, y_1, def_use_def_0, z_1);
  {
    ATerm a_2 (ATerm t)
    {
      t = term_z_10;
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_t_10), term_x_4))), term_c_7)))));
      return(t);
    }
    t = apply_and_fail_3(t, a_2, def_use_def_0, b_2);
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  c_5 :
  if(((ATermList) d_5 == ATempty))
    {
      {
        ATerm f_5 = NULL,h_5 = NULL;
        ATerm b_11;
        b_11 = t;
        {
          ATerm g_5 = NULL;
          t = SSLgetAnnotations(not_null(d_5));
          {
            g_5 = t;
            if(((f_5 != NULL) && (f_5 != g_5)))
              _fail(g_5);
            else
              f_5 = g_5;
          }
        }
        t = b_11;
        {
          ATerm i_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_5));
          {
            i_5 = t;
            if(((h_5 != NULL) && (h_5 != i_5)))
              _fail(i_5);
            else
              h_5 = i_5;
          }
          t = not_null(h_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineBound_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm n_5 = NULL;
    n_5 = t;
    {
      ATerm c_11;
      c_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(n_5)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_11, not_null(n_5)));
        {
          ATerm d_2 (ATerm t)
          {
            t = term_e_11;
            return(t);
          }
          t = assert_1(t, d_2);
        }
      }
      t = c_11;
    }
    return(t);
  }
  t = map_1(t, c_2);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym_Overlay_3))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      v_5 = ATgetArgument(s_5, 2);
      {
        ATerm f_11;
        f_11 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATmakeAppl(sym_Defined_2, term_j_11, not_null(t_5)));
          {
            ATerm e_2 (ATerm t)
            {
              t = term_m_11;
              return(t);
            }
            t = assert_1(t, e_2);
            {
              t = not_null(u_5);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(v_5);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = f_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  e_6 = t;
  c_6 :
  if(match_cons(e_6, sym_RDef_3))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      h_6 = ATgetArgument(e_6, 2);
      d_6 :
      if(match_cons(h_6, sym_StratRule_3))
        {
          i_6 = ATgetArgument(h_6, 0);
          j_6 = ATgetArgument(h_6, 1);
          k_6 = ATgetArgument(h_6, 2);
          {
            ATerm n_11;
            n_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATmakeAppl(sym_Defined_2, term_o_11, not_null(f_6)));
              {
                ATerm f_2 (ATerm t)
                {
                  t = term_m_11;
                  return(t);
                }
                t = assert_1(t, f_2);
                {
                  t = not_null(i_6);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(j_6);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(k_6);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = n_11;
          }
        }
      else
        {
          if(match_cons(h_6, sym_Rule_3))
            {
              i_6 = ATgetArgument(h_6, 0);
              j_6 = ATgetArgument(h_6, 1);
              k_6 = ATgetArgument(h_6, 2);
              {
                ATerm p_11;
                p_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATmakeAppl(sym_Defined_2, term_q_11, not_null(f_6)));
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_m_11;
                      return(t);
                    }
                    t = assert_1(t, g_2);
                    {
                      t = not_null(i_6);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(k_6);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(j_6);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = p_11;
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
ATerm guardedlchoice_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, z_82, z_82, _id);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, z_82);
    return(t);
  }
  t = abstract_choice_2(t, h_2, i_2);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm l_54 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_GuardedLChoice_3))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      h_7 = ATgetArgument(e_7, 2);
      {
        ATerm m_7 = NULL,o_7 = NULL;
        ATerm n_7 = NULL;
        t = SSLgetAnnotations(not_null(e_7));
        {
          n_7 = t;
          if(((m_7 != NULL) && (m_7 != n_7)))
            _fail(n_7);
          else
            m_7 = n_7;
        }
        {
          t = not_null(f_7);
          {
            ATerm q_7 = NULL;
            t = j_54(t);
            {
              o_7 = t;
              {
                t = not_null(g_7);
                {
                  ATerm s_7 = NULL;
                  t = k_54(t);
                  {
                    q_7 = t;
                    {
                      t = not_null(h_7);
                      {
                        ATerm u_7 = NULL;
                        t = l_54(t);
                        {
                          s_7 = t;
                          {
                            ATerm v_7 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(o_7), not_null(q_7), not_null(s_7)), not_null(m_7));
                            {
                              v_7 = t;
                              if(((u_7 != NULL) && (u_7 != v_7)))
                                _fail(v_7);
                              else
                                u_7 = v_7;
                            }
                            t = not_null(u_7);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm y_82 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    t = LChoice_2(t, y_82, _id);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = LChoice_2(t, _id, y_82);
    return(t);
  }
  t = abstract_choice_2(t, j_2, k_2);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm h_54 (ATerm), ATerm i_54 (ATerm))
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_LChoice_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      {
        ATerm o_8 = NULL,q_8 = NULL;
        ATerm p_8 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          p_8 = t;
          if(((o_8 != NULL) && (o_8 != p_8)))
            _fail(p_8);
          else
            o_8 = p_8;
        }
        {
          t = not_null(j_8);
          {
            ATerm s_8 = NULL;
            t = h_54(t);
            {
              q_8 = t;
              {
                t = not_null(k_8);
                {
                  ATerm u_8 = NULL;
                  t = i_54(t);
                  {
                    s_8 = t;
                    {
                      ATerm v_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_8), not_null(s_8)), not_null(o_8));
                      {
                        v_8 = t;
                        if(((u_8 != NULL) && (u_8 != v_8)))
                          _fail(v_8);
                        else
                          u_8 = v_8;
                      }
                      t = not_null(u_8);
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
ATerm try_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_73(t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
      }
    }
  return(t);
}
ATerm isect_Bound_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
      l_9 = t;
      f_9 :
      if(match_cons(l_9, sym__2))
        {
          m_9 = ATgetArgument(l_9, 0);
          n_9 = ATgetArgument(l_9, 1);
          g_9 :
          if(((ATgetType(n_9) == AT_LIST) && ((ATermList) n_9 != ATempty)))
            {
              o_9 = ATgetFirst((ATermList) n_9);
              r_9 = (ATerm) ATgetNext((ATermList) n_9);
              h_9 :
              if(match_cons(o_9, sym_Defined_2))
                {
                  p_9 = ATgetArgument(o_9, 0);
                  q_9 = ATgetArgument(o_9, 1);
                  i_9 :
                  if(!(match_cons(m_9, sym_Scopes_0)))
                    {
                      ATerm x_11 = t;
                      int y_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_11;
                          z_11 = t;
                          {
                            ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(m_9));
                            {
                              t = table_get_0(t);
                              {
                                u_9 = t;
                                d_9 :
                                if(((ATgetType(u_9) == AT_LIST) && ((ATermList) u_9 != ATempty)))
                                  {
                                    v_9 = ATgetFirst((ATermList) u_9);
                                    y_9 = (ATerm) ATgetNext((ATermList) u_9);
                                    e_9 :
                                    if(match_cons(v_9, sym_Defined_2))
                                      {
                                        w_9 = ATgetArgument(v_9, 0);
                                        x_9 = ATgetArgument(v_9, 1);
                                        if(((q_9 != NULL) && (q_9 != x_9)))
                                          _fail(x_9);
                                        else
                                          q_9 = x_9;
                                      }
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
                          t = z_11;
                          LocalPopChoice(y_11);
                        }
                      else
                        {
                          t = x_11;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), (ATerm) ATinsert(ATempty, term_a_12));
                        }
                    }
                }
              else
                {
                  j_9 :
                  if(!(match_cons(m_9, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              k_9 :
              if(!(match_cons(m_9, sym_Scopes_0)))
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
    t = try_1(t, m_2);
    return(t);
  }
  t = map_1(t, l_2);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  f_10 = t;
  e_10 :
  if(match_cons(f_10, sym__2))
    {
      g_10 = ATgetArgument(f_10, 0);
      h_10 = ATgetArgument(f_10, 1);
      {
        t = not_null(h_10);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
            k_10 = t;
            d_10 :
            if(match_cons(k_10, sym__2))
              {
                l_10 = ATgetArgument(k_10, 0);
                m_10 = ATgetArgument(k_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_10), not_null(l_10), not_null(m_10));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_table_destroy(not_null(s_10));
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  {
    ATerm b_12;
    b_12 = t;
    {
      t = term_e_11;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_11, not_null(w_10));
          t = table_putlist_0(t);
        }
      }
    }
    t = b_12;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm a_11 = NULL;
  a_11 = t;
  t = SSL_table_keys(not_null(a_11));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm g_11 = NULL;
  g_11 = t;
  {
    t = table_keys_0(t);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm i_11 = NULL;
        ATerm k_11 = NULL;
        i_11 = t;
        {
          ATerm l_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(i_11));
          {
            t = table_get_0(t);
            {
              l_11 = t;
              if(((k_11 != NULL) && (k_11 != l_11)))
                _fail(l_11);
              else
                k_11 = l_11;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), not_null(k_11));
        }
        return(t);
      }
      t = map_1(t, o_2);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_e_11;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm v_82 (ATerm), ATerm w_82 (ATerm))
{
  ATerm r_11 = NULL,t_11 = NULL;
  ATerm g_12;
  g_12 = t;
  {
    ATerm s_11 = NULL;
    t = save_Bound_0(t);
    {
      s_11 = t;
      if(((r_11 != NULL) && (r_11 != s_11)))
        _fail(s_11);
      else
        r_11 = s_11;
    }
  }
  t = g_12;
  {
    t = v_82(t);
    {
      ATerm h_12;
      h_12 = t;
      {
        ATerm u_11 = NULL;
        t = save_Bound_0(t);
        {
          u_11 = t;
          {
            if(((t_11 != NULL) && (t_11 != u_11)))
              _fail(u_11);
            else
              t_11 = u_11;
            {
              t = not_null(r_11);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = h_12;
      {
        t = w_82(t);
        {
          ATerm i_12;
          i_12 = t;
          {
            t = not_null(t_11);
            t = isect_Bound_0(t);
          }
          t = i_12;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm x_82 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    t = Choice_2(t, x_82, _id);
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = Choice_2(t, _id, x_82);
    return(t);
  }
  t = abstract_choice_2(t, p_2, q_2);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm f_54 (ATerm), ATerm g_54 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_Choice_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      {
        ATerm j_12 = NULL,l_12 = NULL;
        ATerm k_12 = NULL;
        t = SSLgetAnnotations(not_null(d_12));
        {
          k_12 = t;
          if(((j_12 != NULL) && (j_12 != k_12)))
            _fail(k_12);
          else
            j_12 = k_12;
        }
        {
          t = not_null(e_12);
          {
            ATerm n_12 = NULL;
            t = f_54(t);
            {
              l_12 = t;
              {
                t = not_null(f_12);
                {
                  ATerm p_12 = NULL;
                  t = g_54(t);
                  {
                    n_12 = t;
                    {
                      ATerm q_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(l_12), not_null(n_12)), not_null(j_12));
                      {
                        q_12 = t;
                        if(((p_12 != NULL) && (p_12 != q_12)))
                          _fail(q_12);
                        else
                          p_12 = q_12;
                      }
                      t = not_null(p_12);
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
ATerm error_0 (ATerm t)
{
  ATerm m_12;
  m_12 = t;
  {
    ATerm x_12 = NULL;
    ATerm y_12 = NULL;
    y_12 = t;
    if(((x_12 != NULL) && (x_12 != y_12)))
      _fail(y_12);
    else
      x_12 = y_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_12, not_null(x_12));
      t = printnl_0(t);
    }
  }
  t = m_12;
  return(t);
}
ATerm Context_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL;
        ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
        t = term_h_11;
        {
          ATerm r_2 (ATerm t)
          {
            t = term_m_11;
            return(t);
          }
          t = rewrite_1(t, r_2);
          {
            t_13 = t;
            f_13 :
            if(match_cons(t_13, sym_Defined_2))
              {
                u_13 = ATgetArgument(t_13, 0);
                v_13 = ATgetArgument(t_13, 1);
                g_13 :
                if(match_string(u_13, "i_0"))
                  {
                    if(((s_13 != NULL) && (s_13 != v_13)))
                      _fail(v_13);
                    else
                      s_13 = v_13;
                  }
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_u_12), not_null(s_13)), term_t_12);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_13 = NULL;
              ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
              t = term_h_11;
              {
                ATerm s_2 (ATerm t)
                {
                  t = term_m_11;
                  return(t);
                }
                t = rewrite_1(t, s_2);
                {
                  y_13 = t;
                  i_13 :
                  if(match_cons(y_13, sym_Defined_2))
                    {
                      z_13 = ATgetArgument(y_13, 0);
                      a_14 = ATgetArgument(y_13, 1);
                      j_13 :
                      if(match_string(z_13, "h_0"))
                        {
                          if(((x_13 != NULL) && (x_13 != a_14)))
                            _fail(a_14);
                          else
                            x_13 = a_14;
                        }
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_u_12), not_null(x_13)), term_z_12);
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
              {
                ATerm a_13 = t;
                int b_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_14 = NULL;
                    ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
                    t = term_h_11;
                    {
                      ATerm t_2 (ATerm t)
                      {
                        t = term_m_11;
                        return(t);
                      }
                      t = rewrite_1(t, t_2);
                      {
                        d_14 = t;
                        l_13 :
                        if(match_cons(d_14, sym_Defined_2))
                          {
                            e_14 = ATgetArgument(d_14, 0);
                            f_14 = ATgetArgument(d_14, 1);
                            m_13 :
                            if(match_string(e_14, "g_0"))
                              {
                                if(((c_14 != NULL) && (c_14 != f_14)))
                                  _fail(f_14);
                                else
                                  c_14 = f_14;
                              }
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_u_12), not_null(c_14)), term_z_12);
                    LocalPopChoice(b_13);
                  }
                else
                  {
                    t = a_13;
                    {
                      ATerm h_14 = NULL;
                      ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
                      t = term_h_11;
                      {
                        ATerm u_2 (ATerm t)
                        {
                          t = term_m_11;
                          return(t);
                        }
                        t = rewrite_1(t, u_2);
                        {
                          i_14 = t;
                          o_13 :
                          if(match_cons(i_14, sym_Defined_2))
                            {
                              j_14 = ATgetArgument(i_14, 0);
                              k_14 = ATgetArgument(i_14, 1);
                              p_13 :
                              if(match_string(j_14, "b_0"))
                                {
                                  if(((h_14 != NULL) && (h_14 != k_14)))
                                    _fail(k_14);
                                  else
                                    h_14 = k_14;
                                }
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_13)), term_u_12), not_null(h_14)), term_c_13);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Unbound_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_Var_1))
    {
      w_14 = ATgetArgument(v_14, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_13), not_null(w_14)), term_d_13);
        {
          t = Context_0(t);
          t = error_0(t);
        }
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
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(((ATgetType(b_15) == AT_LIST) && ((ATermList) b_15 != ATempty)))
    {
      c_15 = ATgetFirst((ATermList) b_15);
      d_15 = (ATerm) ATgetNext((ATermList) b_15);
      t = not_null(c_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym__2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), not_null(l_15));
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
ATerm rewrite_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm r_15 = NULL;
  ATerm t_15 = NULL;
  r_15 = t;
  {
    ATerm u_15 = NULL;
    t = term_h_13;
    {
      t = z_61(t);
      {
        u_15 = t;
        if(((t_15 != NULL) && (t_15 != u_15)))
          _fail(u_15);
        else
          t_15 = u_15;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(r_15));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_Var_1))
    {
      k_16 = ATgetArgument(j_16, 0);
      {
        ATerm k_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(k_16));
            {
              ATerm v_2 (ATerm t)
              {
                t = term_e_11;
                return(t);
              }
              t = rewrite_1(t, v_2);
              {
                m_16 = t;
                b_16 :
                if(match_cons(m_16, sym_Defined_2))
                  {
                    n_16 = ATgetArgument(m_16, 0);
                    o_16 = ATgetArgument(m_16, 1);
                    c_16 :
                    if(match_string(n_16, "k_0"))
                      {
                        if(((k_16 != NULL) && (k_16 != o_16)))
                          _fail(o_16);
                        else
                          k_16 = o_16;
                      }
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_16));
            LocalPopChoice(n_13);
          }
        else
          {
            t = k_13;
            {
              ATerm r_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_16 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(k_16));
                  {
                    ATerm w_2 (ATerm t)
                    {
                      t = term_e_11;
                      return(t);
                    }
                    t = rewrite_1(t, w_2);
                    {
                      q_16 = t;
                      e_16 :
                      if(match_cons(q_16, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_h_13;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = r_13;
                  {
                    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(k_16));
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = term_e_11;
                        return(t);
                      }
                      t = rewrite_1(t, x_2);
                      {
                        s_16 = t;
                        g_16 :
                        if(match_cons(s_16, sym_Defined_2))
                          {
                            t_16 = ATgetArgument(s_16, 0);
                            u_16 = ATgetArgument(s_16, 1);
                            h_16 :
                            if(match_string(t_16, "j_0"))
                              {
                                if(((k_16 != NULL) && (k_16 != u_16)))
                                  _fail(u_16);
                                else
                                  k_16 = u_16;
                              }
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_16));
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
ATerm use_vars_0 (ATerm t)
{
  ATerm b_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(g_14);
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = b_14;
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(o_14);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = n_14;
            {
              ATerm p_14 = t;
              int q_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(q_14);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = p_14;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm n_57 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_Rule_3))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      l_17 = ATgetArgument(i_17, 2);
      {
        ATerm q_17 = NULL,s_17 = NULL;
        ATerm r_17 = NULL;
        t = SSLgetAnnotations(not_null(i_17));
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
        {
          t = not_null(j_17);
          {
            ATerm u_17 = NULL;
            t = l_57(t);
            {
              s_17 = t;
              {
                t = not_null(k_17);
                {
                  ATerm w_17 = NULL;
                  t = m_57(t);
                  {
                    u_17 = t;
                    {
                      t = not_null(l_17);
                      {
                        ATerm y_17 = NULL;
                        t = n_57(t);
                        {
                          w_17 = t;
                          {
                            ATerm z_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(s_17), not_null(u_17), not_null(w_17)), not_null(q_17));
                            {
                              z_17 = t;
                              if(((y_17 != NULL) && (y_17 != z_17)))
                                _fail(z_17);
                              else
                                y_17 = z_17;
                            }
                            t = not_null(y_17);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm x_56 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym_RootApp_1))
    {
      m_18 = ATgetArgument(l_18, 0);
      {
        ATerm p_18 = NULL,r_18 = NULL;
        ATerm q_18 = NULL;
        t = SSLgetAnnotations(not_null(l_18));
        {
          q_18 = t;
          if(((p_18 != NULL) && (p_18 != q_18)))
            _fail(q_18);
          else
            p_18 = q_18;
        }
        {
          t = not_null(m_18);
          {
            ATerm t_18 = NULL;
            t = x_56(t);
            {
              r_18 = t;
              {
                ATerm u_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(r_18)), not_null(p_18));
                {
                  u_18 = t;
                  if(((t_18 != NULL) && (t_18 != u_18)))
                    _fail(u_18);
                  else
                    t_18 = u_18;
                }
                t = not_null(t_18);
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
ATerm App_2 (ATerm t, ATerm v_56 (ATerm), ATerm w_56 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_App_2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      {
        ATerm l_19 = NULL,n_19 = NULL;
        ATerm m_19 = NULL;
        t = SSLgetAnnotations(not_null(f_19));
        {
          m_19 = t;
          if(((l_19 != NULL) && (l_19 != m_19)))
            _fail(m_19);
          else
            l_19 = m_19;
        }
        {
          t = not_null(g_19);
          {
            ATerm p_19 = NULL;
            t = v_56(t);
            {
              n_19 = t;
              {
                t = not_null(h_19);
                {
                  ATerm r_19 = NULL;
                  t = w_56(t);
                  {
                    p_19 = t;
                    {
                      ATerm s_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(n_19), not_null(p_19)), not_null(l_19));
                      {
                        s_19 = t;
                        if(((r_19 != NULL) && (r_19 != s_19)))
                          _fail(s_19);
                        else
                          r_19 = s_19;
                      }
                      t = not_null(r_19);
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
ATerm table_replace_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym__3))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      f_20 = ATgetArgument(c_20, 2);
      {
        ATerm j_20 = NULL;
        ATerm r_14;
        r_14 = t;
        {
          ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(e_20));
          {
            t = table_get_0(t);
            {
              k_20 = t;
              a_20 :
              if(((ATgetType(k_20) == AT_LIST) && ((ATermList) k_20 != ATempty)))
                {
                  l_20 = ATgetFirst((ATermList) k_20);
                  m_20 = (ATerm) ATgetNext((ATermList) k_20);
                  {
                    if(((j_20 != NULL) && (j_20 != m_20)))
                      _fail(m_20);
                    else
                      j_20 = m_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_20), not_null(e_20), (ATerm) ATinsert(CheckATermList(not_null(j_20)), not_null(f_20)));
                      t = table_put_0(t);
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
        t = r_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm y_61 (ATerm))
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      {
        ATerm x_20 = NULL;
        ATerm s_14;
        s_14 = t;
        {
          ATerm y_20 = NULL;
          t = y_61(t);
          {
            y_20 = t;
            {
              if(((x_20 != NULL) && (x_20 != y_20)))
                _fail(y_20);
              else
                x_20 = y_20;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_20), not_null(t_20), not_null(u_20));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = s_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym_Var_1))
    {
      e_21 = ATgetArgument(d_21, 0);
      {
        ATerm t_14;
        t_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(e_21)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_14, not_null(e_21)));
          {
            ATerm y_2 (ATerm t)
            {
              t = term_e_11;
              return(t);
            }
            t = override_key_1(t, y_2);
          }
        }
        t = t_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Var_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_21 = NULL,w_21 = NULL;
            ATerm v_21 = NULL;
            t = SSLgetAnnotations(not_null(q_21));
            {
              v_21 = t;
              if(((u_21 != NULL) && (u_21 != v_21)))
                _fail(v_21);
              else
                u_21 = v_21;
            }
            {
              t = not_null(r_21);
              {
                ATerm y_21 = NULL;
                t = c_0(t);
                {
                  w_21 = t;
                  {
                    ATerm z_21 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_21)), not_null(u_21));
                    {
                      z_21 = t;
                      if(((y_21 != NULL) && (y_21 != z_21)))
                        _fail(z_21);
                      else
                        y_21 = z_21;
                    }
                    t = not_null(y_21);
                  }
                }
              }
            }
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            {
              ATerm c_22 = NULL,e_22 = NULL;
              ATerm d_22 = NULL;
              t = SSLgetAnnotations(not_null(q_21));
              {
                d_22 = t;
                if(((c_22 != NULL) && (c_22 != d_22)))
                  _fail(d_22);
                else
                  c_22 = d_22;
              }
              {
                t = not_null(r_21);
                {
                  ATerm g_22 = NULL;
                  t = c_0(t);
                  {
                    e_22 = t;
                    {
                      ATerm h_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_22)), not_null(c_22));
                      {
                        h_22 = t;
                        if(((g_22 != NULL) && (g_22 != h_22)))
                          _fail(h_22);
                        else
                          g_22 = h_22;
                      }
                      t = not_null(g_22);
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
ATerm bind_vars_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(f_15);
      t = Binding_0(t);
    }
  else
    {
      t = e_15;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(h_15);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = g_15;
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(n_15);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = m_15;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm s_55 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym_Match_1))
    {
      w_22 = ATgetArgument(v_22, 0);
      {
        ATerm z_22 = NULL,b_23 = NULL;
        ATerm a_23 = NULL;
        t = SSLgetAnnotations(not_null(v_22));
        {
          a_23 = t;
          if(((z_22 != NULL) && (z_22 != a_23)))
            _fail(a_23);
          else
            z_22 = a_23;
        }
        {
          t = not_null(w_22);
          {
            ATerm d_23 = NULL;
            t = s_55(t);
            {
              b_23 = t;
              {
                ATerm e_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(b_23)), not_null(z_22));
                {
                  e_23 = t;
                  if(((d_23 != NULL) && (d_23 != e_23)))
                    _fail(e_23);
                  else
                    d_23 = e_23;
                }
                t = not_null(d_23);
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
ATerm Build_1 (ATerm t, ATerm t_55 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym_Build_1))
    {
      p_23 = ATgetArgument(o_23, 0);
      {
        ATerm s_23 = NULL,u_23 = NULL;
        ATerm t_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          t_23 = t;
          if(((s_23 != NULL) && (s_23 != t_23)))
            _fail(t_23);
          else
            s_23 = t_23;
        }
        {
          t = not_null(p_23);
          {
            ATerm w_23 = NULL;
            t = t_55(t);
            {
              u_23 = t;
              {
                ATerm x_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(u_23)), not_null(s_23));
                {
                  x_23 = t;
                  if(((w_23 != NULL) && (w_23 != x_23)))
                    _fail(x_23);
                  else
                    w_23 = x_23;
                }
                t = not_null(w_23);
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
ATerm VarScope_1 (ATerm t, ATerm u_82 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    t = term_e_11;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, u_82);
    return(t);
  }
  t = scope_2(t, z_2, a_3);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(p_15);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = o_15;
      {
        ATerm q_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(s_15);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = q_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(w_15);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = v_15;
                  {
                    ATerm x_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(y_15);
                        {
                          t = Rule_3(t, bind_vars_0, _id, _id);
                          {
                            t = Rule_3(t, _id, _id, unbound_vars_0);
                            t = Rule_3(t, _id, use_vars_0, _id);
                          }
                        }
                      }
                    else
                      {
                        t = x_15;
                        {
                          ATerm z_15 = t;
                          int a_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(a_16);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = z_15;
                              {
                                ATerm d_16 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(f_16);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = d_16;
                                    {
                                      ATerm l_16 = t;
                                      int p_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(p_16);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = l_16;
                                          t = _all(t, unbound_vars_0);
                                        }
                                    }
                                  }
                              }
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
ATerm sdef_ud_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym_SDef_3))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      h_24 = ATgetArgument(e_24, 2);
      {
        ATerm r_16;
        r_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_11, (ATerm) ATmakeAppl(sym_Defined_2, term_v_16, not_null(f_24)));
          {
            ATerm b_3 (ATerm t)
            {
              t = term_m_11;
              return(t);
            }
            t = assert_1(t, b_3);
            {
              t = not_null(h_24);
              t = unbound_vars_0(t);
            }
          }
        }
        t = r_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL,f_25 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym__3))
    {
      x_24 = ATgetArgument(v_24, 0);
      y_24 = ATgetArgument(v_24, 1);
      f_25 = ATgetArgument(v_24, 2);
      {
        ATerm w_16;
        w_16 = t;
        {
          ATerm j_25 = NULL;
          ATerm k_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_24), not_null(y_24));
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                t = (ATerm) ATempty;
              }
            {
              k_25 = t;
              if(((j_25 != NULL) && (j_25 != k_25)))
                _fail(k_25);
              else
                j_25 = k_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_24), not_null(y_24), (ATerm) ATinsert(CheckATermList(not_null(j_25)), not_null(f_25)));
            t = table_put_0(t);
          }
        }
        t = w_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym__2))
    {
      e_26 = ATgetArgument(d_26, 0);
      f_26 = ATgetArgument(d_26, 1);
      {
        ATerm i_26 = NULL,x_26 = NULL,a_27 = NULL;
        ATerm z_16;
        z_16 = t;
        {
          ATerm b_27 = NULL;
          ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
          t = x_61(t);
          {
            b_27 = t;
            {
              if(((i_26 != NULL) && (i_26 != b_27)))
                _fail(b_27);
              else
                i_26 = b_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_26), not_null(e_26), not_null(f_26));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_17 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_26), term_c_17);
                        t = table_get_0(t);
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = a_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_27 = t;
                      b_26 :
                      if(((ATgetType(c_27) == AT_LIST) && ((ATermList) c_27 != ATempty)))
                        {
                          d_27 = ATgetFirst((ATermList) c_27);
                          e_27 = (ATerm) ATgetNext((ATermList) c_27);
                          {
                            if(((x_26 != NULL) && (x_26 != d_27)))
                              _fail(d_27);
                            else
                              x_26 = d_27;
                            {
                              if(((a_27 != NULL) && (a_27 != e_27)))
                                _fail(e_27);
                              else
                                a_27 = e_27;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_26), term_c_17, (ATerm) ATinsert(CheckATermList(not_null(a_27)), (ATerm) ATinsert(CheckATermList(not_null(x_26)), not_null(e_26))));
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
        t = z_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineUnbound_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm j_27 = NULL;
    j_27 = t;
    {
      ATerm d_17;
      d_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(j_27)), term_a_12);
        {
          ATerm d_3 (ATerm t)
          {
            t = term_e_11;
            return(t);
          }
          t = assert_1(t, d_3);
        }
      }
      t = d_17;
    }
    return(t);
  }
  t = map_1(t, c_3);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_DynamicRules_1))
    {
      s_27 = ATgetArgument(r_27, 0);
      {
        ATerm v_27 = NULL,x_27 = NULL;
        ATerm w_27 = NULL;
        t = SSLgetAnnotations(not_null(r_27));
        {
          w_27 = t;
          if(((v_27 != NULL) && (v_27 != w_27)))
            _fail(w_27);
          else
            v_27 = w_27;
        }
        {
          t = not_null(s_27);
          {
            ATerm z_27 = NULL;
            t = z_57(t);
            {
              x_27 = t;
              {
                ATerm a_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(x_27)), not_null(v_27));
                {
                  a_28 = t;
                  if(((z_27 != NULL) && (z_27 != a_28)))
                    _fail(a_28);
                  else
                    z_27 = a_28;
                }
                t = not_null(z_27);
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
ATerm Scope_2 (ATerm t, ATerm w_55 (ATerm), ATerm x_55 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym_Scope_2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm r_28 = NULL,t_28 = NULL;
        ATerm s_28 = NULL;
        t = SSLgetAnnotations(not_null(l_28));
        {
          s_28 = t;
          if(((r_28 != NULL) && (r_28 != s_28)))
            _fail(s_28);
          else
            r_28 = s_28;
        }
        {
          t = not_null(m_28);
          {
            ATerm v_28 = NULL;
            t = w_55(t);
            {
              t_28 = t;
              {
                t = not_null(n_28);
                {
                  ATerm x_28 = NULL;
                  t = x_55(t);
                  {
                    v_28 = t;
                    {
                      ATerm y_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(t_28), not_null(v_28)), not_null(r_28));
                      {
                        y_28 = t;
                        if(((x_28 != NULL) && (x_28 != y_28)))
                          _fail(y_28);
                        else
                          x_28 = y_28;
                      }
                      t = not_null(x_28);
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
ATerm tboundin_3 (ATerm t, ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, p_71, n_71);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = DynamicRules_1(t, n_71);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  g_29 = t;
  f_29 :
  if(match_cons(g_29, sym_DynamicRules_1))
    {
      h_29 = ATgetArgument(g_29, 0);
      {
        t = not_null(h_29);
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
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,w_29 = NULL,x_29 = NULL;
  t_29 = t;
  o_29 :
  if(match_cons(t_29, sym_LRule_1))
    {
      w_29 = ATgetArgument(t_29, 0);
      p_29 :
      if(match_cons(w_29, sym_Rule_3))
        {
          q_29 = ATgetArgument(w_29, 0);
          r_29 = ATgetArgument(w_29, 1);
          s_29 = ATgetArgument(w_29, 2);
          {
            t = not_null(q_29);
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
      if(match_cons(t_29, sym_Scope_2))
        {
          w_29 = ATgetArgument(t_29, 0);
          x_29 = ATgetArgument(t_29, 1);
          t = not_null(w_29);
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
  ATerm h_30 = NULL,i_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Var_1))
    {
      i_30 = ATgetArgument(h_30, 0);
      t = (ATerm) ATinsert(ATempty, not_null(i_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym__2))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      {
        t = not_null(o_30);
        {
          ATerm t_30 (ATerm t)
          {
            ATerm g_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(p_30);
                LocalPopChoice(m_17);
              }
            else
              {
                t = g_17;
                {
                  ATerm n_17 = t;
                  int o_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(p_30);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_80, e_3);
                      t = t_30(t);
                      LocalPopChoice(o_17);
                    }
                  else
                    {
                      t = n_17;
                      t = Cons_2(t, _id, t_30);
                    }
                }
              }
            return(t);
          }
          t = t_30(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm p_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_69(t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = p_17;
      {
        ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
        y_30 = t;
        x_30 :
        if(((ATgetType(y_30) == AT_LIST) && ((ATermList) y_30 != ATempty)))
          {
            z_30 = ATgetFirst((ATermList) y_30);
            a_31 = (ATerm) ATgetNext((ATermList) y_30);
            {
              ATerm d_31 = NULL,f_31 = NULL;
              ATerm v_17;
              v_17 = t;
              {
                ATerm e_31 = NULL;
                t = not_null(z_30);
                {
                  t = j_69(t);
                  {
                    e_31 = t;
                    if(((d_31 != NULL) && (d_31 != e_31)))
                      _fail(e_31);
                    else
                      d_31 = e_31;
                  }
                }
              }
              t = v_17;
              {
                ATerm g_31 = NULL;
                t = not_null(a_31);
                {
                  t = foldr_3(t, h_69, i_69, j_69);
                  {
                    g_31 = t;
                    if(((f_31 != NULL) && (f_31 != g_31)))
                      _fail(g_31);
                    else
                      f_31 = g_31;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_31), not_null(f_31));
                  t = i_69(t);
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
ATerm crush_3 (ATerm t, ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm))
{
  ATerm o_31 = NULL;
  ATerm q_31 = NULL;
  o_31 = t;
  {
    ATerm r_31 = NULL;
    ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
    t = not_null(o_31);
    {
      r_31 = t;
      {
        t = SSL_explode_term(not_null(r_31));
        {
          t_31 = t;
          n_31 :
          if(match_cons(t_31, sym__2))
            {
              u_31 = ATgetArgument(t_31, 0);
              v_31 = ATgetArgument(t_31, 1);
              if(((q_31 != NULL) && (q_31 != v_31)))
                _fail(v_31);
              else
                q_31 = v_31;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_31);
      t = foldr_3(t, y_80, z_80, a_81);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  a_32 :
  if(match_cons(b_32, sym__2))
    {
      c_32 = ATgetArgument(b_32, 0);
      d_32 = ATgetArgument(b_32, 1);
      if(((c_32 != NULL) && (c_32 != d_32)))
        _fail(d_32);
      else
        c_32 = d_32;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm g_32 (ATerm t)
  {
    ATerm x_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_78, _id);
        LocalPopChoice(a_18);
      }
    else
      {
        t = x_17;
        t = Cons_2(t, _id, g_32);
      }
    return(t);
  }
  t = g_32(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm l_80 (ATerm), ATerm m_80 (ATerm))
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  j_32 :
  if(((ATgetType(k_32) == AT_LIST) && ((ATermList) k_32 != ATempty)))
    {
      l_32 = ATgetFirst((ATermList) k_32);
      m_32 = (ATerm) ATgetNext((ATermList) k_32);
      {
        t = m_80(t);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm p_32 = NULL;
            p_32 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_32), not_null(p_32));
              t = l_80(t);
            }
            return(t);
          }
          t = fetch_1(t, f_3);
        }
        t = not_null(m_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym__2))
    {
      w_32 = ATgetArgument(v_32, 0);
      x_32 = ATgetArgument(v_32, 1);
      {
        t = not_null(w_32);
        {
          ATerm b_33 (ATerm t)
          {
            ATerm b_18 = t;
            int c_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(c_18);
              }
            else
              {
                t = b_18;
                {
                  ATerm d_18 = t;
                  int e_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(x_32);
                        return(t);
                      }
                      t = HdMember_p__2(t, q_80, g_3);
                      t = b_33(t);
                      LocalPopChoice(e_18);
                    }
                  else
                    {
                      t = d_18;
                      t = Cons_2(t, _id, b_33);
                    }
                }
              }
            return(t);
          }
          t = b_33(t);
        }
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
  t = diff_1(t, eq_0);
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm e_33 = NULL,g_33 = NULL;
  ATerm f_18;
  f_18 = t;
  {
    ATerm f_33 = NULL;
    t = w_77(t);
    {
      f_33 = t;
      if(((e_33 != NULL) && (e_33 != f_33)))
        _fail(f_33);
      else
        e_33 = f_33;
    }
  }
  t = f_18;
  {
    ATerm h_33 = NULL;
    t = x_77(t);
    {
      h_33 = t;
      if(((g_33 != NULL) && (g_33 != h_33)))
        _fail(h_33);
      else
        g_33 = h_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(g_33));
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm), ATerm e_66 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_33 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_66(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_33 = NULL;
              ATerm n_18;
              n_18 = t;
              {
                ATerm m_33 = NULL;
                t = d_66(t);
                {
                  m_33 = t;
                  if(((l_33 != NULL) && (l_33 != m_33)))
                    _fail(m_33);
                  else
                    l_33 = m_33;
                }
              }
              t = n_18;
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    t = not_null(l_33);
                    return(t);
                  }
                  t = split_2(t, n_33, j_3);
                  t = diff_0(t);
                  return(t);
                }
                ATerm i_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = e_66(t, h_3, n_33, i_3);
                {
                  ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, k_3, union_0, _id);
                }
              }
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm l_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, l_3, union_0, n_33);
              }
            }
        }
      }
    return(t);
  }
  t = n_33(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm o_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = o_18;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, m_3, tboundin_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  q_33 :
  if(((ATgetType(s_33) == AT_LIST) && ((ATermList) s_33 != ATempty)))
    {
      t_33 = ATgetFirst((ATermList) s_33);
      u_33 = (ATerm) ATgetNext((ATermList) s_33);
      t = not_null(u_33);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym__2))
    {
      c_34 = ATgetArgument(b_34, 0);
      d_34 = ATgetArgument(b_34, 1);
      {
        ATerm v_18;
        v_18 = t;
        {
          ATerm g_34 = NULL;
          ATerm h_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_34), not_null(d_34));
          {
            ATerm w_18 = t;
            int x_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_18);
              }
            else
              {
                t = w_18;
                t = (ATerm) ATempty;
              }
            {
              h_34 = t;
              if(((g_34 != NULL) && (g_34 != h_34)))
                _fail(h_34);
              else
                g_34 = h_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_34), not_null(d_34), not_null(g_34));
            t = table_put_0(t);
          }
        }
        t = v_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm k_34 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = Cons_2(t, o_78, k_34);
      }
    return(t);
  }
  t = k_34(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm s_34 = NULL;
    ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
    t = u_61(t);
    {
      s_34 = t;
      {
        if(((q_34 != NULL) && (q_34 != s_34)))
          _fail(s_34);
        else
          q_34 = s_34;
        {
          ATerm b_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_34), term_c_17);
              t = table_get_0(t);
              LocalPopChoice(c_19);
            }
          else
            {
              t = b_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            t_34 = t;
            o_34 :
            if(((ATgetType(t_34) == AT_LIST) && ((ATermList) t_34 != ATempty)))
              {
                u_34 = ATgetFirst((ATermList) t_34);
                v_34 = (ATerm) ATgetNext((ATermList) t_34);
                {
                  if(((r_34 != NULL) && (r_34 != u_34)))
                    _fail(u_34);
                  else
                    r_34 = u_34;
                  {
                    if(((p_34 != NULL) && (p_34 != v_34)))
                      _fail(v_34);
                    else
                      p_34 = v_34;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(q_34), term_c_17, not_null(p_34));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_34);
                          {
                            ATerm n_3 (ATerm t)
                            {
                              ATerm w_34 = NULL;
                              w_34 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_34), not_null(w_34));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_3);
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
  t = a_19;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm d_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_74(t);
      t = j_74(t);
      LocalPopChoice(i_19);
    }
  else
    {
      t = d_19;
      {
        t = j_74(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
    g_35 = t;
    c_35 :
    if(match_cons(g_35, sym__3))
      {
        h_35 = ATgetArgument(g_35, 0);
        i_35 = ATgetArgument(g_35, 1);
        j_35 = ATgetArgument(g_35, 2);
        {
          if(((d_35 != NULL) && (d_35 != h_35)))
            _fail(h_35);
          else
            d_35 = h_35;
          {
            if(((e_35 != NULL) && (e_35 != i_35)))
              _fail(i_35);
            else
              e_35 = i_35;
            {
              if(((f_35 != NULL) && (f_35 != j_35)))
                _fail(j_35);
              else
                f_35 = j_35;
              t = SSL_table_put(not_null(d_35), not_null(e_35), not_null(f_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_19;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym__2))
    {
      o_35 = ATgetArgument(n_35, 0);
      p_35 = ATgetArgument(n_35, 1);
      t = SSL_table_get(not_null(o_35), not_null(p_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm v_35 = NULL;
  ATerm k_19;
  k_19 = t;
  {
    ATerm w_35 = NULL;
    ATerm x_35 = NULL;
    t = t_61(t);
    {
      w_35 = t;
      {
        if(((v_35 != NULL) && (v_35 != w_35)))
          _fail(w_35);
        else
          v_35 = w_35;
        {
          ATerm a_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), term_c_17);
          {
            ATerm o_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_19);
              }
            else
              {
                t = o_19;
                t = (ATerm) ATempty;
              }
            {
              a_36 = t;
              if(((x_35 != NULL) && (x_35 != a_36)))
                _fail(a_36);
              else
                x_35 = a_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_35), term_c_17, (ATerm) ATinsert(CheckATermList(not_null(x_35)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_19;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm))
{
  t = begin_scope_1(t, v_61);
  {
    ATerm o_3 (ATerm t)
    {
      t = end_scope_1(t, v_61);
      return(t);
    }
    t = restore_always_2(t, w_61, o_3);
  }
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_m_11;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      t = term_e_11;
      return(t);
    }
    ATerm s_3 (ATerm t)
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_19;
          v_19 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = v_19;
          t = sdef_ud_0(t);
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, r_3, s_3);
    return(t);
  }
  t = scope_2(t, p_3, q_3);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_58 (ATerm), ATerm n_58 (ATerm))
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(((ATgetType(j_36) == AT_LIST) && ((ATermList) j_36 != ATempty)))
    {
      k_36 = ATgetFirst((ATermList) j_36);
      l_36 = (ATerm) ATgetNext((ATermList) j_36);
      {
        ATerm p_36 = NULL,r_36 = NULL;
        ATerm q_36 = NULL;
        t = SSLgetAnnotations(not_null(j_36));
        {
          q_36 = t;
          if(((p_36 != NULL) && (p_36 != q_36)))
            _fail(q_36);
          else
            p_36 = q_36;
        }
        {
          t = not_null(k_36);
          {
            ATerm t_36 = NULL;
            t = m_58(t);
            {
              r_36 = t;
              {
                t = not_null(l_36);
                {
                  ATerm v_36 = NULL;
                  t = n_58(t);
                  {
                    t_36 = t;
                    {
                      ATerm w_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_36)), not_null(r_36)), not_null(p_36));
                      {
                        w_36 = t;
                        if(((v_36 != NULL) && (v_36 != w_36)))
                          _fail(w_36);
                        else
                          v_36 = w_36;
                      }
                      t = not_null(v_36);
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
ATerm filter_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 (ATerm t)
            {
              t = filter_1(t, l_68);
              return(t);
            }
            t = Cons_2(t, l_68, t_3);
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
              e_37 = t;
              d_37 :
              if(((ATgetType(e_37) == AT_LIST) && ((ATermList) e_37 != ATempty)))
                {
                  f_37 = ATgetFirst((ATermList) e_37);
                  g_37 = (ATerm) ATgetNext((ATermList) e_37);
                  {
                    t = not_null(g_37);
                    t = filter_1(t, l_68);
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
ATerm defs_use_def_0 (ATerm t)
{
  ATerm i_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = i_20;
      {
        ATerm o_20;
        o_20 = t;
        {
          ATerm u_3 (ATerm t)
          {
            ATerm p_20 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_20;
              }
            return(t);
          }
          t = filter_1(t, u_3);
          t = Nil_0(t);
        }
        t = o_20;
      }
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm o_37 = NULL,p_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym_Strategies_1))
    {
      p_37 = ATgetArgument(o_37, 0);
      {
        ATerm s_37 = NULL,u_37 = NULL;
        ATerm t_37 = NULL;
        t = SSLgetAnnotations(not_null(o_37));
        {
          t_37 = t;
          if(((s_37 != NULL) && (s_37 != t_37)))
            _fail(t_37);
          else
            s_37 = t_37;
        }
        {
          t = not_null(p_37);
          {
            ATerm w_37 = NULL;
            t = j_58(t);
            {
              u_37 = t;
              {
                ATerm x_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(u_37)), not_null(s_37));
                {
                  x_37 = t;
                  if(((w_37 != NULL) && (w_37 != x_37)))
                    _fail(x_37);
                  else
                    w_37 = x_37;
                }
                t = not_null(w_37);
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
ATerm debug_0 (ATerm t)
{
  ATerm q_20;
  q_20 = t;
  {
    ATerm d_38 = NULL;
    ATerm e_38 = NULL;
    e_38 = t;
    if(((d_38 != NULL) && (d_38 != e_38)))
      _fail(e_38);
    else
      d_38 = e_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_12, (ATerm) ATinsert(ATempty, not_null(d_38)));
      t = printnl_0(t);
    }
  }
  t = q_20;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm i_38 = NULL;
    i_38 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), term_v_20);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, v_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  m_38 :
  if(match_cons(s_38, sym__2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      {
        ATerm w_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_38), not_null(u_38));
            LocalPopChoice(z_20);
          }
        else
          {
            t = w_20;
            t = SSL_addr(not_null(t_38), not_null(u_38));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm z_38 = NULL;
    z_38 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_38), term_v_20);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, w_3, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  ATerm a_21;
  a_21 = t;
  {
    t = x_62(t);
    t = debug_0(t);
  }
  t = a_21;
  {
    ATerm b_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21;
        g_21 = t;
        t = y_62(t);
        t = g_21;
        t = record_success_0(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = b_21;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_and_fail_4 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm s_63 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_63(t);
        {
          ATerm j_21 = t;
          if((PushChoice() == 0))
            {
              t = q_63(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_21;
            }
        }
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          t = term_k_21;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, p_63, x_3);
  return(t);
}
ATerm apply_and_fail_3 (ATerm t, ATerm m_63 (ATerm), ATerm n_63 (ATerm), ATerm o_63 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  t = apply_and_fail_4(t, m_63, n_63, o_63, y_3);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_l_21;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = Strategies_1(t, defs_use_def_0);
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_l_8, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_x_4)))))), (ATerm) ATmakeAppl(sym_SDef_3, term_t_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)))))), (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7))), term_x_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm e_39 = NULL;
    e_39 = t;
    c_39 :
    if(!(match_int(e_39, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, c_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm o_47 (ATerm), ATerm p_47 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym__2))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      {
        ATerm r_39 = NULL,t_39 = NULL;
        ATerm s_39 = NULL;
        t = SSLgetAnnotations(not_null(l_39));
        {
          s_39 = t;
          if(((r_39 != NULL) && (r_39 != s_39)))
            _fail(s_39);
          else
            r_39 = s_39;
        }
        {
          t = not_null(m_39);
          {
            ATerm v_39 = NULL;
            t = o_47(t);
            {
              t_39 = t;
              {
                t = not_null(n_39);
                {
                  ATerm x_39 = NULL;
                  t = p_47(t);
                  {
                    v_39 = t;
                    {
                      ATerm y_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_39), not_null(v_39)), not_null(r_39));
                      {
                        y_39 = t;
                        if(((x_39 != NULL) && (x_39 != y_39)))
                          _fail(y_39);
                        else
                          x_39 = y_39;
                      }
                      t = not_null(x_39);
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
ATerm report_test_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      t = term_m_21;
      return(t);
    }
    t = debug_1(t, f_4);
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      t = term_n_21;
      return(t);
    }
    t = debug_1(t, g_4);
    return(t);
  }
  t = _2(t, d_4, e_4);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym__2))
    {
      h_40 = ATgetArgument(g_40, 0);
      i_40 = ATgetArgument(g_40, 1);
      {
        ATerm t_21;
        t_21 = t;
        t = SSL_printnl(not_null(h_40), not_null(i_40));
        t = t_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_62 (ATerm))
{
  ATerm x_21;
  x_21 = t;
  {
    ATerm o_40 = NULL,q_40 = NULL;
    ATerm a_22;
    a_22 = t;
    {
      ATerm p_40 = NULL;
      t = f_62(t);
      {
        p_40 = t;
        if(((o_40 != NULL) && (o_40 != p_40)))
          _fail(p_40);
        else
          o_40 = p_40;
      }
    }
    t = a_22;
    {
      ATerm r_40 = NULL;
      r_40 = t;
      if(((q_40 != NULL) && (q_40 != r_40)))
        _fail(r_40);
      else
        q_40 = r_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_40)), not_null(o_40)));
        t = printnl_0(t);
      }
    }
  }
  t = x_21;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm v_62 (ATerm), ATerm w_62 (ATerm))
{
  t = v_62(t);
  {
    ATerm h_4 (ATerm t)
    {
      t = term_b_22;
      return(t);
    }
    t = debug_1(t, h_4);
    {
      t = init_record_0(t);
      {
        t = w_62(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm use_def_test_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = term_f_22;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = test1_0(t);
    {
      t = test2_0(t);
      {
        t = test3_0(t);
        {
          t = test4_0(t);
          {
            t = test5_0(t);
            {
              t = test6_0(t);
              {
                t = test7_0(t);
                {
                  t = test8_0(t);
                  {
                    t = test9_0(t);
                    {
                      t = test10_0(t);
                      {
                        t = test11_0(t);
                        t = test12_0(t);
                      }
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
  t = test_suite_2(t, i_4, j_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = use_def_test_0(t);
  return(t);
}
