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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_p_16;
ATerm term_b_16;
ATerm term_r_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_z_9;
ATerm term_m_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_p_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_a_8;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_b_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(sym_Op_2, term_a_5, (ATerm) ATempty);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_5);
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym_Call_2, term_j_5, (ATerm) ATempty);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_Var_1, term_t_5);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_p_8);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_l_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_l_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_l_12);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_k_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__3, term_j_14, term_k_14, (ATerm) ATempty);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm new_0 (ATerm);
ATerm EvalPrimitive_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm o_71 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm crush_3 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm collect_om_1 (ATerm, ATerm q_72 (ATerm));
ATerm collect_1 (ATerm, ATerm s_72 (ATerm));
ATerm get_primitives_0 (ATerm);
ATerm _2 (ATerm, ATerm o_47 (ATerm), ATerm p_47 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_66 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_63 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm crush_2 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_63 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_65 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_65 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_76 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_62 (ATerm));
ATerm map_1 (ATerm, ATerm u_75 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_62 (ATerm));
ATerm Program_1 (ATerm, ATerm z_53 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_54 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_84 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_58 (ATerm), ATerm u_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_62 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_62 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm k_65 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_64 (ATerm));
ATerm main_0 (ATerm);
ATerm Snd_0 (ATerm t)
{
  ATerm t_1 = NULL;
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL;
  t_1 = t;
  {
    ATerm b_2 = NULL;
    ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
    t = not_null(t_1);
    {
      b_2 = t;
      {
        t = SSL_explode_term(not_null(b_2));
        {
          d_2 = t;
          f_1 :
          if(match_cons(d_2, sym__2))
            {
              e_2 = ATgetArgument(d_2, 0);
              f_2 = ATgetArgument(d_2, 1);
              g_1 :
              if(match_string(e_2, ""))
                {
                  h_1 :
                  if(((ATgetType(f_2) == AT_LIST) && ((ATermList) f_2 != ATempty)))
                    {
                      g_2 = ATgetFirst((ATermList) f_2);
                      h_2 = (ATerm) ATgetNext((ATermList) f_2);
                      s_1 :
                      if(((ATgetType(h_2) == AT_LIST) && ((ATermList) h_2 != ATempty)))
                        {
                          i_2 = ATgetFirst((ATermList) h_2);
                          j_2 = (ATerm) ATgetNext((ATermList) h_2);
                          {
                            if(((y_1 != NULL) && (y_1 != g_2)))
                              _fail(g_2);
                            else
                              y_1 = g_2;
                            {
                              if(((a_2 != NULL) && (a_2 != i_2)))
                                _fail(i_2);
                              else
                                a_2 = i_2;
                              if(((z_1 != NULL) && (z_1 != j_2)))
                                _fail(j_2);
                              else
                                z_1 = j_2;
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
    t = not_null(a_2);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_2 = NULL;
  ATerm v_2 = NULL,w_2 = NULL;
  t_2 = t;
  {
    ATerm x_2 = NULL;
    ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
    t = not_null(t_2);
    {
      x_2 = t;
      {
        t = SSL_explode_term(not_null(x_2));
        {
          z_2 = t;
          q_2 :
          if(match_cons(z_2, sym__2))
            {
              a_3 = ATgetArgument(z_2, 0);
              b_3 = ATgetArgument(z_2, 1);
              r_2 :
              if(match_string(a_3, ""))
                {
                  s_2 :
                  if(((ATgetType(b_3) == AT_LIST) && ((ATermList) b_3 != ATempty)))
                    {
                      c_3 = ATgetFirst((ATermList) b_3);
                      d_3 = (ATerm) ATgetNext((ATermList) b_3);
                      {
                        if(((w_2 != NULL) && (w_2 != c_3)))
                          _fail(c_3);
                        else
                          w_2 = c_3;
                        if(((v_2 != NULL) && (v_2 != d_3)))
                          _fail(d_3);
                        else
                          v_2 = d_3;
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
    t = not_null(w_2);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm EvalPrimitive_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
  q_3 = t;
  p_3 :
  if(match_cons(q_3, sym_Prim_2))
    {
      r_3 = ATgetArgument(q_3, 0);
      s_3 = ATgetArgument(q_3, 1);
      {
        ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
        ATerm a_4 = NULL;
        t = not_null(s_3);
        {
          ATerm f_4 = NULL;
          ATerm c_0 (ATerm t)
          {
            ATerm y_3 = NULL;
            ATerm z_3 = NULL;
            t = new_0(t);
            {
              z_3 = t;
              if(((y_3 != NULL) && (y_3 != z_3)))
                _fail(z_3);
              else
                y_3 = z_3;
            }
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_3));
            return(t);
          }
          t = map_1(t, c_0);
          {
            a_4 = t;
            {
              if(((w_3 != NULL) && (w_3 != a_4)))
                _fail(a_4);
              else
                w_3 = a_4;
              {
                t = not_null(w_3);
                {
                  ATerm i_4 = NULL;
                  ATerm d_0 (ATerm t)
                  {
                    t = term_b_5;
                    return(t);
                  }
                  ATerm g_0 (ATerm t)
                  {
                    ATerm b_4 = NULL,d_4 = NULL;
                    ATerm c_5;
                    c_5 = t;
                    {
                      ATerm c_4 = NULL;
                      t = Fst_0(t);
                      {
                        c_4 = t;
                        if(((b_4 != NULL) && (b_4 != c_4)))
                          _fail(c_4);
                        else
                          b_4 = c_4;
                      }
                    }
                    t = c_5;
                    {
                      ATerm e_4 = NULL;
                      t = Snd_0(t);
                      {
                        e_4 = t;
                        if(((d_4 != NULL) && (d_4 != e_4)))
                          _fail(e_4);
                        else
                          d_4 = e_4;
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_h_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_4)), not_null(b_4)));
                    }
                    return(t);
                  }
                  t = foldr_2(t, d_0, g_0);
                  {
                    f_4 = t;
                    {
                      if(((v_3 != NULL) && (v_3 != f_4)))
                        _fail(f_4);
                      else
                        v_3 = f_4;
                      {
                        t = not_null(w_3);
                        {
                          ATerm h_0 (ATerm t)
                          {
                            ATerm g_4 = NULL;
                            ATerm h_4 = NULL;
                            h_4 = t;
                            if(((g_4 != NULL) && (g_4 != h_4)))
                              _fail(h_4);
                            else
                              g_4 = h_4;
                            t = (ATerm) ATmakeAppl(sym_App_2, term_l_5, not_null(g_4));
                            return(t);
                          }
                          t = map_1(t, h_0);
                          {
                            i_4 = t;
                            if(((x_3 != NULL) && (x_3 != i_4)))
                              _fail(i_4);
                            else
                              x_3 = i_4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, term_m_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_n_5, (ATerm) ATinsert(ATinsert(ATempty, term_y_5), (ATerm) ATmakeAppl(sym_Op_2, term_s_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_3)), (ATerm) ATmakeAppl(sym_Str_1, not_null(r_3)))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, not_null(r_3), not_null(x_3)), term_y_5), term_z_5));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm o_71 (ATerm))
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  u_4 = t;
  t_4 :
  if(((ATgetType(u_4) == AT_LIST) && ((ATermList) u_4 != ATempty)))
    {
      v_4 = ATgetFirst((ATermList) u_4);
      w_4 = (ATerm) ATgetNext((ATermList) u_4);
      {
        t = o_71(t);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm z_4 = NULL;
            z_4 = t;
            if(((v_4 != NULL) && (v_4 != z_4)))
              _fail(z_4);
            else
              v_4 = z_4;
            return(t);
          }
          t = fetch_1(t, m_0);
        }
        t = not_null(w_4);
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
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      {
        t = not_null(f_5);
        {
          ATerm k_5 (ATerm t)
          {
            ATerm a_6 = t;
            int b_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_5);
                LocalPopChoice(b_6);
              }
            else
              {
                t = a_6;
                {
                  ATerm c_6 = t;
                  int d_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_0 (ATerm t)
                      {
                        t = not_null(g_5);
                        return(t);
                      }
                      t = HdMember_1(t, n_0);
                      t = k_5(t);
                      LocalPopChoice(d_6);
                    }
                  else
                    {
                      t = c_6;
                      t = Cons_2(t, _id, k_5);
                    }
                }
              }
            return(t);
          }
          t = k_5(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm g_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_70(t);
      LocalPopChoice(j_6);
    }
  else
    {
      t = g_6;
      {
        ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
        p_5 = t;
        o_5 :
        if(((ATgetType(p_5) == AT_LIST) && ((ATermList) p_5 != ATempty)))
          {
            q_5 = ATgetFirst((ATermList) p_5);
            r_5 = (ATerm) ATgetNext((ATermList) p_5);
            {
              ATerm u_5 = NULL,w_5 = NULL;
              ATerm n_6;
              n_6 = t;
              {
                ATerm v_5 = NULL;
                t = not_null(q_5);
                {
                  t = m_70(t);
                  {
                    v_5 = t;
                    if(((u_5 != NULL) && (u_5 != v_5)))
                      _fail(v_5);
                    else
                      u_5 = v_5;
                  }
                }
              }
              t = n_6;
              {
                ATerm x_5 = NULL;
                t = not_null(r_5);
                {
                  t = foldr_3(t, k_70, l_70, m_70);
                  {
                    x_5 = t;
                    if(((w_5 != NULL) && (w_5 != x_5)))
                      _fail(x_5);
                    else
                      w_5 = x_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_5), not_null(w_5));
                  t = l_70(t);
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
ATerm crush_3 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm f_6 = NULL;
  ATerm h_6 = NULL;
  f_6 = t;
  {
    ATerm i_6 = NULL;
    ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
    t = not_null(f_6);
    {
      i_6 = t;
      {
        t = SSL_explode_term(not_null(i_6));
        {
          k_6 = t;
          e_6 :
          if(match_cons(k_6, sym__2))
            {
              l_6 = ATgetArgument(k_6, 0);
              m_6 = ATgetArgument(k_6, 1);
              if(((h_6 != NULL) && (h_6 != m_6)))
                _fail(m_6);
              else
                h_6 = m_6;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_6);
      t = foldr_3(t, z_71, a_72, b_72);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm t_6 (ATerm t)
  {
    ATerm o_6 = t;
    int p_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL;
        ATerm s_6 = NULL;
        t = q_72(t);
        {
          s_6 = t;
          if(((r_6 != NULL) && (r_6 != s_6)))
            _fail(s_6);
          else
            r_6 = s_6;
        }
        t = (ATerm) ATinsert(ATempty, not_null(r_6));
        LocalPopChoice(p_6);
      }
    else
      {
        t = o_6;
        {
          ATerm o_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, o_0, union_0, t_6);
        }
      }
    return(t);
  }
  t = t_6(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm s_72 (ATerm))
{
  t = collect_om_1(t, s_72);
  return(t);
}
ATerm get_primitives_0 (ATerm t)
{
  t = collect_1(t, EvalPrimitive_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm o_47 (ATerm), ATerm p_47 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym__2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm h_7 = NULL,j_7 = NULL;
        ATerm i_7 = NULL;
        t = SSLgetAnnotations(not_null(b_7));
        {
          i_7 = t;
          if(((h_7 != NULL) && (h_7 != i_7)))
            _fail(i_7);
          else
            h_7 = i_7;
        }
        {
          t = not_null(c_7);
          {
            ATerm l_7 = NULL;
            t = o_47(t);
            {
              j_7 = t;
              {
                t = not_null(d_7);
                {
                  ATerm n_7 = NULL;
                  t = p_47(t);
                  {
                    l_7 = t;
                    {
                      ATerm o_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_7), not_null(l_7)), not_null(h_7));
                      {
                        o_7 = t;
                        if(((n_7 != NULL) && (n_7 != o_7)))
                          _fail(o_7);
                        else
                          n_7 = o_7;
                      }
                      t = not_null(n_7);
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
  ATerm w_7 = NULL;
  ATerm q_6;
  q_6 = t;
  {
    ATerm p_0 (ATerm t)
    {
      ATerm x_7 = NULL,y_7 = NULL;
      x_7 = t;
      v_7 :
      if(match_cons(x_7, sym_Program_1))
        {
          y_7 = ATgetArgument(x_7, 0);
          if(((w_7 != NULL) && (w_7 != y_7)))
            _fail(y_7);
          else
            w_7 = y_7;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_6), not_null(w_7)), term_v_6));
      {
        t = printnl_0(t);
        {
          t = term_x_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      {
        ATerm y_6;
        y_6 = t;
        t = SSL_printnl(not_null(d_8), not_null(e_8));
        t = y_6;
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
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      {
        t = not_null(l_8);
        {
          ATerm q_0 (ATerm t)
          {
            t = not_null(m_8);
            return(t);
          }
          t = at_end_1(t, q_0);
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
ATerm debug_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm z_6;
  z_6 = t;
  {
    ATerm s_8 = NULL,u_8 = NULL;
    ATerm e_7;
    e_7 = t;
    {
      ATerm t_8 = NULL;
      t = l_66(t);
      {
        t_8 = t;
        if(((s_8 != NULL) && (s_8 != t_8)))
          _fail(t_8);
        else
          s_8 = t_8;
      }
    }
    t = e_7;
    {
      ATerm v_8 = NULL;
      v_8 = t;
      if(((u_8 != NULL) && (u_8 != v_8)))
        _fail(v_8);
      else
        u_8 = v_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_8)), not_null(s_8)));
        t = printnl_0(t);
      }
    }
  }
  t = z_6;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = SSL_is_string(not_null(z_8));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
        ATerm k_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, r_0);
            LocalPopChoice(m_7);
          }
        else
          {
            t = k_7;
            {
              ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
              i_9 = t;
              h_9 :
              if(match_cons(i_9, sym_Path_1))
                {
                  j_9 = ATgetArgument(i_9, 0);
                  t = not_null(j_9);
                }
              else
                {
                  if(match_cons(i_9, sym_Var_1))
                    {
                      j_9 = ATgetArgument(i_9, 0);
                      {
                        t = not_null(j_9);
                        {
                          ATerm p_7 = t;
                          int q_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_7);
                            }
                          else
                            {
                              t = p_7;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  t = term_r_7;
                                  return(t);
                                }
                                t = debug_1(t, s_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_9, sym_Prefix_2))
                        {
                          j_9 = ATgetArgument(i_9, 0);
                          k_9 = ATgetArgument(i_9, 1);
                          {
                            ATerm p_9 = NULL,r_9 = NULL;
                            ATerm s_7;
                            s_7 = t;
                            {
                              ATerm q_9 = NULL;
                              t = not_null(j_9);
                              {
                                t = eval_config_0(t);
                                {
                                  q_9 = t;
                                  if(((p_9 != NULL) && (p_9 != q_9)))
                                    _fail(q_9);
                                  else
                                    p_9 = q_9;
                                }
                              }
                            }
                            t = s_7;
                            {
                              ATerm s_9 = NULL;
                              t = not_null(k_9);
                              {
                                t = eval_config_0(t);
                                {
                                  s_9 = t;
                                  if(((r_9 != NULL) && (r_9 != s_9)))
                                    _fail(s_9);
                                  else
                                    r_9 = s_9;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(r_9));
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
  ATerm a_10 = NULL;
  a_10 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(a_10));
    {
      t = table_get_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_7;
            u_7 = t;
            {
              ATerm c_10 = NULL;
              ATerm d_10 = NULL;
              d_10 = t;
              if(((c_10 != NULL) && (c_10 != d_10)))
                _fail(d_10);
              else
                c_10 = d_10;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_7, not_null(a_10), not_null(c_10));
                t = table_put_0(t);
              }
            }
            t = u_7;
          }
          return(t);
        }
        t = try_1(t, t_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_63 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    ATerm z_7;
    z_7 = t;
    {
      ATerm h_10 = NULL;
      ATerm i_10 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          i_10 = t;
          if(((h_10 != NULL) && (h_10 != i_10)))
            _fail(i_10);
          else
            h_10 = i_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), term_f_8);
        t = geq_0(t);
      }
    }
    t = z_7;
    t = v_63(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_g_8));
  {
    t = printnl_0(t);
    {
      t = term_x_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  t = SSL_TicksToSeconds(not_null(l_10));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
  q_10 = t;
  p_10 :
  if(match_cons(q_10, sym__2))
    {
      r_10 = ATgetArgument(q_10, 0);
      s_10 = ATgetArgument(q_10, 1);
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_10), not_null(s_10));
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            t = SSL_addr(not_null(r_10), not_null(s_10));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_70(t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
        z_10 = t;
        y_10 :
        if(((ATgetType(z_10) == AT_LIST) && ((ATermList) z_10 != ATempty)))
          {
            a_11 = ATgetFirst((ATermList) z_10);
            b_11 = (ATerm) ATgetNext((ATermList) z_10);
            {
              ATerm e_11 = NULL;
              ATerm f_11 = NULL;
              t = not_null(b_11);
              {
                t = foldr_2(t, i_70, j_70);
                {
                  f_11 = t;
                  if(((e_11 != NULL) && (e_11 != f_11)))
                    _fail(f_11);
                  else
                    e_11 = f_11;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(e_11));
                t = j_70(t);
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
ATerm crush_2 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm))
{
  ATerm m_11 = NULL;
  ATerm o_11 = NULL;
  m_11 = t;
  {
    ATerm p_11 = NULL;
    ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
    t = not_null(m_11);
    {
      p_11 = t;
      {
        t = SSL_explode_term(not_null(p_11));
        {
          r_11 = t;
          l_11 :
          if(match_cons(r_11, sym__2))
            {
              s_11 = ATgetArgument(r_11, 0);
              t_11 = ATgetArgument(r_11, 1);
              if(((o_11 != NULL) && (o_11 != t_11)))
                _fail(t_11);
              else
                o_11 = t_11;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_11);
      t = foldr_2(t, x_71, y_71);
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
    ATerm v_0 (ATerm t)
    {
      t = term_p_8;
      return(t);
    }
    t = crush_2(t, v_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym__2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        ATerm q_8;
        q_8 = t;
        {
          ATerm r_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_12), not_null(b_12));
              LocalPopChoice(w_8);
            }
          else
            {
              t = r_8;
              t = SSL_gtr(not_null(a_12), not_null(b_12));
            }
        }
        t = q_8;
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
  ATerm h_12 = NULL;
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
      i_12 = t;
      g_12 :
      if(match_cons(i_12, sym__2))
        {
          j_12 = ATgetArgument(i_12, 0);
          k_12 = ATgetArgument(i_12, 1);
          {
            if(((h_12 != NULL) && (h_12 != j_12)))
              _fail(j_12);
            else
              h_12 = j_12;
            if(((h_12 != NULL) && (h_12 != k_12)))
              _fail(k_12);
            else
              h_12 = k_12;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_63 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm a_9;
    a_9 = t;
    {
      ATerm n_12 = NULL;
      ATerm o_12 = NULL;
      t = term_a_8;
      {
        t = get_config_0(t);
        {
          o_12 = t;
          if(((n_12 != NULL) && (n_12 != o_12)))
            _fail(o_12);
          else
            n_12 = o_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), term_x_6);
        t = geq_0(t);
      }
    }
    t = a_9;
    t = u_63(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm s_12 = NULL,u_12 = NULL;
    ATerm b_9;
    b_9 = t;
    {
      ATerm t_12 = NULL;
      t = run_time_0(t);
      {
        t_12 = t;
        if(((s_12 != NULL) && (s_12 != t_12)))
          _fail(t_12);
        else
          s_12 = t_12;
      }
    }
    t = b_9;
    {
      ATerm v_12 = NULL;
      t = term_c_9;
      {
        t = get_config_0(t);
        {
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_9), not_null(s_12)), term_d_9), not_null(u_12)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_0);
  {
    t = term_p_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      t = SSL_WriteToTextFile(not_null(b_13), not_null(c_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym__2))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      t = SSL_WriteToBinaryFile(not_null(j_13), not_null(k_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm f_9;
  f_9 = t;
  {
    ATerm y_0 (ATerm t)
    {
      ATerm g_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_0 (ATerm t)
          {
            ATerm t_13 = NULL,u_13 = NULL;
            t_13 = t;
            p_13 :
            if(match_cons(t_13, sym_Output_1))
              {
                u_13 = ATgetArgument(t_13, 0);
                if(((s_13 != NULL) && (s_13 != u_13)))
                  _fail(u_13);
                else
                  s_13 = u_13;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_0);
          LocalPopChoice(l_9);
        }
      else
        {
          t = g_9;
          {
            ATerm v_13 = NULL;
            t = term_m_9;
            {
              v_13 = t;
              if(((s_13 != NULL) && (s_13 != v_13)))
                _fail(v_13);
              else
                s_13 = v_13;
            }
          }
        }
      return(t);
    }
    t = _2(t, y_0, _id);
  }
  t = f_9;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(s_13);
        return(t);
      }
      t = split_2(t, b_1, _id);
      return(t);
    }
    t = _2(t, _id, a_1);
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm w_13 = NULL;
              w_13 = t;
              r_13 :
              if(!(match_cons(w_13, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, d_1);
            return(t);
          }
          t = _2(t, c_1, WriteToBinaryFile_0);
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm c_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  ATerm t_9;
  t_9 = t;
  t = dtime_0(t);
  t = t_9;
  {
    t = v_65(t);
    {
      ATerm u_9;
      u_9 = t;
      {
        ATerm d_14 = NULL;
        t = dtime_0(t);
        {
          d_14 = t;
          if(((c_14 != NULL) && (c_14 != d_14)))
            _fail(d_14);
          else
            c_14 = d_14;
        }
      }
      t = u_9;
      {
        e_14 = t;
        b_14 :
        if(match_cons(e_14, sym__2))
          {
            f_14 = ATgetArgument(e_14, 0);
            g_14 = ATgetArgument(e_14, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_14)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_14))), not_null(g_14));
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
  ATerm m_14 = NULL;
  m_14 = t;
  t = SSL_ReadFromFile(not_null(m_14));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm r_14 = NULL,t_14 = NULL;
  ATerm v_9;
  v_9 = t;
  {
    ATerm s_14 = NULL;
    t = w_68(t);
    {
      s_14 = t;
      if(((r_14 != NULL) && (r_14 != s_14)))
        _fail(s_14);
      else
        r_14 = s_14;
    }
  }
  t = v_9;
  {
    ATerm u_14 = NULL;
    t = x_68(t);
    {
      u_14 = t;
      if(((t_14 != NULL) && (t_14 != u_14)))
        _fail(u_14);
      else
        t_14 = u_14;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(t_14));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm w_9;
  w_9 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          ATerm b_15 = NULL,c_15 = NULL;
          b_15 = t;
          y_14 :
          if(match_cons(b_15, sym_Input_1))
            {
              c_15 = ATgetArgument(b_15, 0);
              if(((a_15 != NULL) && (a_15 != c_15)))
                _fail(c_15);
              else
                a_15 = c_15;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, e_1);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          ATerm d_15 = NULL;
          t = term_z_9;
          {
            d_15 = t;
            if(((a_15 != NULL) && (a_15 != d_15)))
              _fail(d_15);
            else
              a_15 = d_15;
          }
        }
      }
  }
  t = w_9;
  {
    ATerm i_1 (ATerm t)
    {
      t = not_null(a_15);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_Version_0))
    {
      ATerm m_15 = NULL,o_15 = NULL;
      ATerm b_10;
      b_10 = t;
      {
        ATerm n_15 = NULL;
        t = SSLgetAnnotations(not_null(k_15));
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
      }
      t = b_10;
      {
        ATerm p_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        t = not_null(o_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm g_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_10);
            }
          else
            {
              t = g_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, j_1);
  t = t_65(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = SSL_table_create(not_null(u_15));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_15 = NULL;
  y_15 = t;
  {
    ATerm k_10;
    k_10 = t;
    {
      t = term_m_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_10, term_n_10, not_null(y_15));
          t = table_put_0(t);
        }
      }
    }
    t = k_10;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  t = SSL_string_to_int(not_null(c_16));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  k_16 = t;
  i_16 :
  if(match_string(k_16, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(k_16) == AT_LIST) && ((ATermList) k_16 != ATempty)))
        {
          l_16 = ATgetFirst((ATermList) k_16);
          m_16 = (ATerm) ATgetNext((ATermList) k_16);
          j_16 :
          if(((ATgetType(m_16) == AT_LIST) && ((ATermList) m_16 != ATempty)))
            {
              n_16 = ATgetFirst((ATermList) m_16);
              o_16 = (ATerm) ATgetNext((ATermList) m_16);
              {
                ATerm s_16 = NULL;
                ATerm o_10;
                o_10 = t;
                {
                  t = not_null(l_16);
                  t = j_0(t);
                }
                t = o_10;
                {
                  ATerm t_16 = NULL;
                  t = not_null(n_16);
                  {
                    t = k_0(t);
                    {
                      t_16 = t;
                      if(((s_16 != NULL) && (s_16 != t_16)))
                        _fail(t_16);
                      else
                        s_16 = t_16;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_16)), not_null(s_16));
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
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm k_17 = NULL;
        k_17 = t;
        x_16 :
        if(!(match_string(k_17, "-i")))
          {
            if(!(match_string(k_17, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm n_17 = NULL;
        ATerm v_10;
        v_10 = t;
        {
          ATerm l_17 = NULL;
          ATerm m_17 = NULL;
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(l_17));
            t = set_config_0(t);
          }
        }
        t = v_10;
        {
          ATerm o_17 = NULL;
          o_17 = t;
          if(((n_17 != NULL) && (n_17 != o_17)))
            _fail(o_17);
          else
            n_17 = o_17;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_17));
        }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_x_10;
        return(t);
      }
      t = ArgOption_3(t, k_1, l_1, m_1);
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm p_17 = NULL;
              p_17 = t;
              a_17 :
              if(!(match_string(p_17, "-o")))
                {
                  if(!(match_string(p_17, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm s_17 = NULL;
              ATerm g_11;
              g_11 = t;
              {
                ATerm q_17 = NULL;
                ATerm r_17 = NULL;
                r_17 = t;
                if(((q_17 != NULL) && (q_17 != r_17)))
                  _fail(r_17);
                else
                  q_17 = r_17;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_11, not_null(q_17));
                  t = set_config_0(t);
                }
              }
              t = g_11;
              {
                ATerm t_17 = NULL;
                t_17 = t;
                if(((s_17 != NULL) && (s_17 != t_17)))
                  _fail(t_17);
                else
                  s_17 = t_17;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_17));
              }
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              t = term_i_11;
              return(t);
            }
            t = ArgOption_3(t, n_1, o_1, p_1);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm j_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    ATerm u_17 = NULL;
                    u_17 = t;
                    d_17 :
                    if(!(match_string(u_17, "-S")))
                      {
                        if(!(match_string(u_17, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_n_11;
                    t = set_config_0(t);
                    t = term_q_11;
                    return(t);
                  }
                  ATerm u_1 (ATerm t)
                  {
                    t = term_u_11;
                    return(t);
                  }
                  t = Option_3(t, q_1, r_1, u_1);
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = j_11;
                  {
                    ATerm v_11 = t;
                    int w_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          ATerm v_17 = NULL;
                          v_17 = t;
                          e_17 :
                          if(!(match_string(v_17, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          ATerm y_17 = NULL;
                          ATerm x_11;
                          x_11 = t;
                          {
                            ATerm w_17 = NULL;
                            ATerm x_17 = NULL;
                            t = string_to_int_0(t);
                            {
                              x_17 = t;
                              if(((w_17 != NULL) && (w_17 != x_17)))
                                _fail(x_17);
                              else
                                w_17 = x_17;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_a_8, not_null(w_17));
                              t = set_config_0(t);
                            }
                          }
                          t = x_11;
                          {
                            ATerm z_17 = NULL;
                            z_17 = t;
                            if(((y_17 != NULL) && (y_17 != z_17)))
                              _fail(z_17);
                            else
                              y_17 = z_17;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(y_17));
                          }
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          t = term_c_12;
                          return(t);
                        }
                        t = ArgOption_3(t, v_1, w_1, x_1);
                        LocalPopChoice(w_11);
                      }
                    else
                      {
                        t = v_11;
                        {
                          ATerm d_12 = t;
                          int e_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 (ATerm t)
                              {
                                ATerm a_18 = NULL;
                                a_18 = t;
                                h_17 :
                                if(!(match_string(a_18, "-v")))
                                  {
                                    if(!(match_string(a_18, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm k_2 (ATerm t)
                              {
                                t = term_m_12;
                                t = set_config_0(t);
                                t = term_p_12;
                                return(t);
                              }
                              ATerm l_2 (ATerm t)
                              {
                                t = term_q_12;
                                return(t);
                              }
                              t = Option_3(t, c_2, k_2, l_2);
                              LocalPopChoice(e_12);
                            }
                          else
                            {
                              t = d_12;
                              {
                                ATerm r_12 = t;
                                int w_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_2 (ATerm t)
                                    {
                                      ATerm b_18 = NULL;
                                      b_18 = t;
                                      i_17 :
                                      if(!(match_string(b_18, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_2 (ATerm t)
                                    {
                                      t = term_y_12;
                                      t = set_config_0(t);
                                      t = term_d_13;
                                      return(t);
                                    }
                                    ATerm o_2 (ATerm t)
                                    {
                                      t = term_e_13;
                                      return(t);
                                    }
                                    t = Option_3(t, m_2, n_2, o_2);
                                    LocalPopChoice(w_12);
                                  }
                                else
                                  {
                                    t = r_12;
                                    {
                                      ATerm p_2 (ATerm t)
                                      {
                                        ATerm c_18 = NULL;
                                        c_18 = t;
                                        j_17 :
                                        if(!(match_string(c_18, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm u_2 (ATerm t)
                                      {
                                        t = term_g_13;
                                        t = set_config_0(t);
                                        t = term_l_13;
                                        return(t);
                                      }
                                      ATerm y_2 (ATerm t)
                                      {
                                        t = term_m_13;
                                        return(t);
                                      }
                                      t = Option_3(t, p_2, u_2, y_2);
                                    }
                                  }
                              }
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
  ATerm k_18 = NULL;
  k_18 = t;
  t = SSL_table_destroy(not_null(k_18));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  t = SSL_exit(not_null(o_18));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm s_18 = NULL;
  s_18 = t;
  t = SSL_implode_string(not_null(s_18));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm v_18 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, v_18);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          t = Nil_0(t);
          t = i_76(t);
        }
      }
    return(t);
  }
  t = v_18(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = q_13;
      {
        ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
        y_18 = t;
        x_18 :
        if(((ATgetType(y_18) == AT_LIST) && ((ATermList) y_18 != ATempty)))
          {
            z_18 = ATgetFirst((ATermList) y_18);
            a_19 = (ATerm) ATgetNext((ATermList) y_18);
            {
              t = not_null(z_18);
              {
                ATerm e_3 (ATerm t)
                {
                  t = not_null(a_19);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_3);
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
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_explode_string(not_null(g_19));
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
ATerm long_description_1 (ATerm t, ATerm u_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm j_19 (ATerm t)
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        t = Cons_2(t, u_75, j_19);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  s_19 = t;
  p_19 :
  if(((ATgetType(s_19) == AT_LIST) && ((ATermList) s_19 != ATempty)))
    {
      q_19 = ATgetFirst((ATermList) s_19);
      r_19 = (ATerm) ATgetNext((ATermList) s_19);
      {
        ATerm v_19 = NULL;
        t = not_null(r_19);
        {
          ATerm a_14;
          a_14 = t;
          {
            ATerm w_19 = NULL,y_19 = NULL,a_20 = NULL;
            ATerm h_14;
            h_14 = t;
            {
              ATerm x_19 = NULL;
              t = i_0(t);
              {
                x_19 = t;
                if(((w_19 != NULL) && (w_19 != x_19)))
                  _fail(x_19);
                else
                  w_19 = x_19;
              }
            }
            t = h_14;
            {
              ATerm z_19 = NULL;
              t = not_null(q_19);
              {
                t = f_0(t);
                {
                  z_19 = t;
                  if(((y_19 != NULL) && (y_19 != z_19)))
                    _fail(z_19);
                  else
                    y_19 = z_19;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_19)), not_null(y_19));
                {
                  a_20 = t;
                  if(((v_19 != NULL) && (v_19 != a_20)))
                    _fail(a_20);
                  else
                    v_19 = a_20;
                }
              }
            }
          }
          t = a_14;
          {
            ATerm f_3 (ATerm t)
            {
              t = not_null(v_19);
              return(t);
            }
            t = reverse_acc_2(t, f_0, f_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) s_19 == ATempty))
        {
          {
            t = term_l_12;
            t = i_0(t);
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
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, g_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_62 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_53 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_Program_1))
    {
      m_20 = ATgetArgument(l_20, 0);
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(l_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        {
          t = not_null(m_20);
          {
            ATerm t_20 = NULL;
            t = z_53(t);
            {
              r_20 = t;
              {
                ATerm u_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_20)), not_null(p_20));
                {
                  u_20 = t;
                  if(((t_20 != NULL) && (t_20 != u_20)))
                    _fail(u_20);
                  else
                    t_20 = u_20;
                }
                t = not_null(t_20);
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
  ATerm d_21 = NULL;
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      ATerm e_21 = NULL;
      e_21 = t;
      if(((d_21 != NULL) && (d_21 != e_21)))
        _fail(e_21);
      else
        d_21 = e_21;
      return(t);
    }
    t = Program_1(t, i_3);
    return(t);
  }
  t = option_defined_1(t, h_3);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm f_21 = NULL;
      ATerm g_21 = NULL;
      t = term_l_12;
      {
        ATerm k_3 (ATerm t)
        {
          t = not_null(d_21);
          return(t);
        }
        t = short_description_1(t, k_3);
        {
          t = concat_strings_0(t);
          {
            g_21 = t;
            if(((f_21 != NULL) && (f_21 != g_21)))
              _fail(g_21);
            else
              f_21 = g_21;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(f_21)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, j_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, term_i_14));
      {
        t = printnl_0(t);
        {
          t = term_l_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm h_21 = NULL;
                  h_21 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_21)), term_n_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_3);
                {
                  ATerm m_3 (ATerm t)
                  {
                    ATerm j_21 = NULL;
                    ATerm k_21 = NULL;
                    t = term_l_12;
                    {
                      ATerm n_3 (ATerm t)
                      {
                        t = not_null(d_21);
                        return(t);
                      }
                      t = long_description_1(t, n_3);
                      {
                        t = concat_strings_0(t);
                        {
                          k_21 = t;
                          if(((j_21 != NULL) && (j_21 != k_21)))
                            _fail(k_21);
                          else
                            j_21 = k_21;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_21)), term_o_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_3);
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
ATerm Undefined_1 (ATerm t, ATerm a_54 (ATerm))
{
  ATerm u_21 = NULL,v_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym_Undefined_1))
    {
      v_21 = ATgetArgument(u_21, 0);
      {
        ATerm y_21 = NULL,a_22 = NULL;
        ATerm z_21 = NULL;
        t = SSLgetAnnotations(not_null(u_21));
        {
          z_21 = t;
          if(((y_21 != NULL) && (y_21 != z_21)))
            _fail(z_21);
          else
            y_21 = z_21;
        }
        {
          t = not_null(v_21);
          {
            ATerm c_22 = NULL;
            t = a_54(t);
            {
              a_22 = t;
              {
                ATerm d_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_22)), not_null(y_21));
                {
                  d_22 = t;
                  if(((c_22 != NULL) && (c_22 != d_22)))
                    _fail(d_22);
                  else
                    c_22 = d_22;
                }
                t = not_null(c_22);
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
ATerm fetch_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm i_22 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_76, _id);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = Cons_2(t, _id, i_22);
      }
    return(t);
  }
  t = i_22(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_63 (ATerm))
{
  t = fetch_1(t, s_63);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_Help_0))
    {
      ATerm p_22 = NULL,r_22 = NULL;
      ATerm v_14;
      v_14 = t;
      {
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
      }
      t = v_14;
      {
        ATerm s_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(p_22));
        {
          s_22 = t;
          if(((r_22 != NULL) && (r_22 != s_22)))
            _fail(s_22);
          else
            r_22 = s_22;
        }
        t = not_null(r_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_84 (ATerm))
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_84(t);
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym__2))
    {
      g_23 = ATgetArgument(f_23, 0);
      h_23 = ATgetArgument(f_23, 1);
      t = SSL_table_get(not_null(g_23), not_null(h_23));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym__3))
    {
      s_23 = ATgetArgument(o_23, 0);
      t_23 = ATgetArgument(o_23, 1);
      u_23 = ATgetArgument(o_23, 2);
      {
        ATerm z_14;
        z_14 = t;
        {
          ATerm y_23 = NULL;
          ATerm z_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(t_23));
          {
            ATerm e_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_15);
              }
            else
              {
                t = e_15;
                t = (ATerm) ATempty;
              }
            {
              z_23 = t;
              if(((y_23 != NULL) && (y_23 != z_23)))
                _fail(z_23);
              else
                y_23 = z_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_23), not_null(t_23), (ATerm) ATinsert(CheckATermList(not_null(y_23)), not_null(u_23)));
            t = table_put_0(t);
          }
        }
        t = z_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm d_24 = NULL;
  ATerm e_24 = NULL;
  t = term_l_12;
  {
    t = y_62(t);
    {
      e_24 = t;
      if(((d_24 != NULL) && (d_24 != e_24)))
        _fail(e_24);
      else
        d_24 = e_24;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_14, term_k_14, not_null(d_24));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  j_24 :
  if(match_string(l_24, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(l_24) == AT_LIST) && ((ATermList) l_24 != ATempty)))
        {
          m_24 = ATgetFirst((ATermList) l_24);
          n_24 = (ATerm) ATgetNext((ATermList) l_24);
          {
            ATerm q_24 = NULL;
            ATerm g_15;
            g_15 = t;
            {
              t = not_null(m_24);
              t = a_0(t);
            }
            t = g_15;
            {
              ATerm r_24 = NULL;
              t = term_l_12;
              {
                t = b_0(t);
                {
                  r_24 = t;
                  if(((q_24 != NULL) && (q_24 != r_24)))
                    _fail(r_24);
                  else
                    q_24 = r_24;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_24)), not_null(q_24));
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
  ATerm o_3 (ATerm t)
  {
    ATerm w_24 = NULL;
    w_24 = t;
    v_24 :
    if(!(match_string(w_24, "--help")))
      {
        if(!(match_string(w_24, "-h")))
          {
            if(!(match_string(w_24, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_h_15;
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_i_15;
    return(t);
  }
  t = Option_3(t, o_3, t_3, u_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  y_24 :
  if(((ATgetType(z_24) == AT_LIST) && ((ATermList) z_24 != ATempty)))
    {
      a_25 = ATgetFirst((ATermList) z_24);
      b_25 = (ATerm) ATgetNext((ATermList) z_24);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_25)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_25)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_58 (ATerm), ATerm u_58 (ATerm))
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  k_25 :
  if(((ATgetType(l_25) == AT_LIST) && ((ATermList) l_25 != ATempty)))
    {
      m_25 = ATgetFirst((ATermList) l_25);
      n_25 = (ATerm) ATgetNext((ATermList) l_25);
      {
        ATerm r_25 = NULL,t_25 = NULL;
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(l_25));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        {
          t = not_null(m_25);
          {
            ATerm v_25 = NULL;
            t = t_58(t);
            {
              t_25 = t;
              {
                t = not_null(n_25);
                {
                  ATerm f_26 = NULL;
                  t = u_58(t);
                  {
                    v_25 = t;
                    {
                      ATerm g_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(v_25)), not_null(t_25)), not_null(r_25));
                      {
                        g_26 = t;
                        if(((f_26 != NULL) && (f_26 != g_26)))
                          _fail(g_26);
                        else
                          f_26 = g_26;
                      }
                      t = not_null(f_26);
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
  ATerm s_26 = NULL;
  s_26 = t;
  r_26 :
  if(((ATermList) s_26 == ATempty))
    {
      {
        ATerm w_26 = NULL,y_26 = NULL;
        ATerm l_15;
        l_15 = t;
        {
          ATerm x_26 = NULL;
          t = SSLgetAnnotations(not_null(s_26));
          {
            x_26 = t;
            if(((w_26 != NULL) && (w_26 != x_26)))
              _fail(x_26);
            else
              w_26 = x_26;
          }
        }
        t = l_15;
        {
          ATerm z_26 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_26));
          {
            z_26 = t;
            if(((y_26 != NULL) && (y_26 != z_26)))
              _fail(z_26);
            else
              y_26 = z_26;
          }
          t = not_null(y_26);
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
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym__2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_7, not_null(s_27), not_null(t_27));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm q_15;
  q_15 = t;
  {
    ATerm j_4 (ATerm t)
    {
      t = term_r_15;
      t = w_62(t);
      return(t);
    }
    t = try_1(t, j_4);
  }
  t = q_15;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm c_28 = NULL;
      ATerm s_15;
      s_15 = t;
      {
        ATerm a_28 = NULL;
        ATerm b_28 = NULL;
        b_28 = t;
        if(((a_28 != NULL) && (a_28 != b_28)))
          _fail(b_28);
        else
          a_28 = b_28;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(a_28));
          t = set_config_0(t);
        }
      }
      t = s_15;
      {
        ATerm d_28 = NULL;
        d_28 = t;
        if(((c_28 != NULL) && (c_28 != d_28)))
          _fail(d_28);
        else
          c_28 = d_28;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_28));
      }
      return(t);
    }
    ATerm l_4 (ATerm t)
    {
      ATerm t_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_15);
            }
          else
            {
              t = w_15;
              {
                t = w_62(t);
                t = Cons_2(t, _id, l_4);
              }
            }
          LocalPopChoice(v_15);
        }
      else
        {
          t = t_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_4, l_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
    m_28 = t;
    i_28 :
    if(match_cons(m_28, sym__3))
      {
        n_28 = ATgetArgument(m_28, 0);
        o_28 = ATgetArgument(m_28, 1);
        p_28 = ATgetArgument(m_28, 2);
        {
          if(((j_28 != NULL) && (j_28 != n_28)))
            _fail(n_28);
          else
            j_28 = n_28;
          {
            if(((k_28 != NULL) && (k_28 != o_28)))
              _fail(o_28);
            else
              k_28 = o_28;
            {
              if(((l_28 != NULL) && (l_28 != p_28)))
                _fail(p_28);
              else
                l_28 = p_28;
              t = SSL_table_put(not_null(j_28), not_null(k_28), not_null(l_28));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm s_28 = NULL;
  ATerm a_16;
  a_16 = t;
  {
    t = term_b_16;
    t = table_put_0(t);
  }
  t = a_16;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_62(t);
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_4);
    {
      ATerm n_4 (ATerm t)
      {
        ATerm f_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_p_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(g_16);
          }
        else
          {
            t = f_16;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm p_4 (ATerm t)
                {
                  ATerm t_28 = NULL;
                  t_28 = t;
                  if(((s_28 != NULL) && (s_28 != t_28)))
                    _fail(t_28);
                  else
                    s_28 = t_28;
                  return(t);
                }
                t = Undefined_1(t, p_4);
                return(t);
              }
              t = option_defined_1(t, o_4);
              {
                ATerm h_16;
                h_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_28)), term_p_16));
                  t = printnl_0(t);
                }
                t = h_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_x_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_4);
      {
        ATerm q_16;
        q_16 = t;
        {
          t = term_j_14;
          t = table_destroy_0(t);
        }
        t = q_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_65 (ATerm), ATerm i_65 (ATerm), ATerm j_65 (ATerm), ATerm k_65 (ATerm))
{
  ATerm q_4 (ATerm t)
  {
    ATerm r_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_65(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = r_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_4);
  {
    t = store_options_0(t);
    {
      t = k_65(t);
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_65);
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, h_65);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm), ATerm d_65 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm b_17;
      b_17 = t;
      {
        ATerm w_28 = NULL;
        ATerm x_28 = NULL;
        t = term_c_9;
        {
          t = get_config_0(t);
          {
            x_28 = t;
            if(((w_28 != NULL) && (w_28 != x_28)))
              _fail(x_28);
            else
              w_28 = x_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(w_28)));
          t = printnl_0(t);
        }
      }
      t = b_17;
      return(t);
    }
    t = if_verbose2_1(t, s_4);
    return(t);
  }
  t = iowrap_4(t, b_65, c_65, d_65, r_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  t = iowrap_3(t, z_64, a_65, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    t = _2(t, _id, w_64);
    return(t);
  }
  t = iowrap_2(t, x_4, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm a_29 = NULL;
    t = get_primitives_0(t);
    {
      a_29 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, not_null(a_29))));
    }
    return(t);
  }
  t = iowrap_1(t, y_4);
  return(t);
}
