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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
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
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
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
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_CUT_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
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
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  init_constant_terms();
}
ATerm term_e_31;
ATerm term_v_30;
ATerm term_m_30;
ATerm term_k_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_m_25;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_i_23;
ATerm term_u_22;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_y_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_v_18;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_h_10;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_a_9;
ATerm term_l_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_q_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Op_2, term_r_11, (ATerm) ATempty);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_n_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_n_19);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_19);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_o_15);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_o_15);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_o_15);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_i_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_o_15);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__3, term_h_29, term_i_29, (ATerm) ATempty);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm MissingDef_0 (ATerm);
ATerm MissingDefMod_0 (ATerm);
ATerm MissingDefs_0 (ATerm);
ATerm NoMissingDefs_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm giving_up_0 (ATerm);
ATerm error_0 (ATerm);
ATerm DefinitionExists_0 (ATerm);
ATerm Rec_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm SDef_3 (ATerm, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm));
ATerm Let_2 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm));
ATerm sboundin_3 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_98 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm y_85 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm d_83 (ATerm), ATerm e_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm f_83 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm k_73 (ATerm), ATerm l_73 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm));
ATerm Prim_2 (ATerm, ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm Explode_2 (ATerm, ATerm j_75 (ATerm), ATerm k_75 (ATerm));
ATerm Op_2 (ATerm, ATerm x_73 (ATerm), ATerm y_73 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_111 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm x_88 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm k_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_99 (ATerm), ATerm v_99 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_99 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm d_75 (ATerm), ATerm e_75 (ATerm));
ATerm Con_3 (ATerm, ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm b_72 (ATerm), ATerm c_72 (ATerm));
ATerm oncetd_1 (ATerm, ATerm k_85 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm u_83 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm d_88 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm c_95 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm v_88 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm diff_1 (ATerm, ATerm s_93 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm));
ATerm zip_1 (ATerm, ATerm s_88 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_100 (ATerm), ATerm m_100 (ATerm));
ATerm for_3 (ATerm, ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm n_111 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_94 (ATerm), ATerm b_94 (ATerm));
ATerm union_1 (ATerm, ATerm w_93 (ATerm));
ATerm union_0 (ATerm);
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm p_111 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm));
ATerm length_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm needed_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm c_74 (ATerm));
ATerm Cons_2 (ATerm, ATerm r_71 (ATerm), ATerm s_71 (ATerm));
ATerm Specification_1 (ATerm, ATerm e_74 (ATerm));
ATerm _2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_90 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_103 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_106 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_104 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_87 (ATerm), ATerm o_87 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm crush_2 (ATerm, ATerm l_93 (ATerm), ATerm m_93 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_106 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_104 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_108 (ATerm));
ATerm map_1 (ATerm, ATerm b_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm e_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_108 (ATerm));
ATerm Program_1 (ATerm, ATerm f_77 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm s_103 (ATerm));
ATerm Undefined_1 (ATerm, ATerm g_77 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_90 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_107 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_86 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_108 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_108 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_108 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm));
ATerm iowrap_4 (ATerm, ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm));
ATerm iowrap_2 (ATerm, ATerm i_105 (ATerm), ATerm j_105 (ATerm));
ATerm iowrap_1 (ATerm, ATerm f_105 (ATerm));
ATerm extract_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  h_3 :
  if(((ATgetType(i_3) == AT_LIST) && ATisEmpty(i_3)))
    {
      {
        ATerm k_4 = NULL,m_4 = NULL;
        ATerm e_6;
        e_6 = t;
        {
          ATerm l_4 = NULL;
          t = SSLgetAnnotations(not_null(i_3));
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        t = e_6;
        {
          ATerm o_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            o_5 = t;
            if(((m_4 != NULL) && (m_4 != o_5)))
              _fail(o_5);
            else
              m_4 = o_5;
          }
          t = not_null(m_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  k_6 = t;
  g_6 :
  if(match_cons(k_6, sym__2))
    {
      l_6 = ATgetArgument(k_6, 0);
      m_6 = ATgetArgument(k_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_6), not_null(m_6)), term_h_6), not_null(l_6)), term_f_6);
        t = error_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
  t_6 = t;
  r_6 :
  if(match_cons(t_6, sym__2))
    {
      u_6 = ATgetArgument(t_6, 0);
      x_6 = ATgetArgument(t_6, 1);
      s_6 :
      if(match_cons(u_6, sym_Mod_2))
        {
          v_6 = ATgetArgument(u_6, 0);
          w_6 = ATgetArgument(u_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_6), not_null(x_6)), term_h_6), not_null(w_6)), term_j_6), not_null(v_6)), term_f_6);
            t = error_0(t);
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
ATerm MissingDefs_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  f_7 = t;
  d_7 :
  if(match_cons(f_7, sym__2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      e_7 :
      if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
        {
          i_7 = ATgetFirst((ATermList) h_7);
          j_7 = (ATerm) ATgetNext((ATermList) h_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(j_7)), not_null(i_7));
            {
              ATerm l_0 (ATerm t)
              {
                ATerm n_6 = t;
                int o_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(o_6);
                  }
                else
                  {
                    t = n_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, l_0);
            }
            t = not_null(g_7);
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
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  p_7 :
  if(match_cons(r_7, sym__2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      q_7 :
      if(((ATgetType(t_7) == AT_LIST) && ATisEmpty(t_7)))
        {
          t = not_null(s_7);
        }
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
ATerm fatal_error_0 (ATerm t)
{
  ATerm p_6;
  p_6 = t;
  {
    t = error_0(t);
    {
      t = term_q_6;
      t = exit_0(t);
    }
  }
  t = p_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_y_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_6;
  z_6 = t;
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    y_7 = t;
    if(((x_7 != NULL) && (x_7 != y_7)))
      _fail(y_7);
    else
      x_7 = y_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, not_null(x_7));
      t = printnl_0(t);
    }
  }
  t = z_6;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  j_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      k_8 :
      if(match_int(n_8, 0))
        {
          ATerm b_7 = t;
          int c_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
              t = not_null(m_8);
              {
                t = Arities_0(t);
                {
                  p_8 = t;
                  e_8 :
                  if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
                    {
                      q_8 = ATgetFirst((ATermList) p_8);
                      r_8 = (ATerm) ATgetNext((ATermList) p_8);
                      f_8 :
                      if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                        {
                          s_8 = ATgetFirst((ATermList) r_8);
                          t_8 = (ATerm) ATgetNext((ATermList) r_8);
                          {
                            ATerm k_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm m_0 (ATerm t)
                                {
                                  ATerm u_8 = NULL;
                                  u_8 = t;
                                  d_8 :
                                  if(!(match_int(u_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, m_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = k_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_8)), term_l_7);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
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
              LocalPopChoice(c_7);
            }
          else
            {
              t = b_7;
              {
                ATerm w_8 = NULL;
                ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
                t = not_null(m_8);
                {
                  t = Arities_0(t);
                  {
                    x_8 = t;
                    h_8 :
                    if(((ATgetType(x_8) == AT_LIST) && !(ATisEmpty(x_8))))
                      {
                        y_8 = ATgetFirst((ATermList) x_8);
                        z_8 = (ATerm) ATgetNext((ATermList) x_8);
                        i_8 :
                        if(((ATgetType(z_8) == AT_LIST) && ATisEmpty(z_8)))
                          {
                            {
                              if(((w_8 != NULL) && (w_8 != y_8)))
                                _fail(y_8);
                              else
                                w_8 = y_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
                                t = Definitions_0(t);
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(w_8));
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
ATerm Rec_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
  k_9 = t;
  j_9 :
  if(match_cons(k_9, sym_Rec_2))
    {
      l_9 = ATgetArgument(k_9, 0);
      m_9 = ATgetArgument(k_9, 1);
      {
        ATerm q_9 = NULL,s_9 = NULL;
        ATerm r_9 = NULL;
        t = SSLgetAnnotations(not_null(k_9));
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
        {
          t = not_null(l_9);
          {
            ATerm u_9 = NULL;
            t = d_73(t);
            {
              s_9 = t;
              {
                t = not_null(m_9);
                {
                  ATerm w_9 = NULL;
                  t = e_73(t);
                  {
                    u_9 = t;
                    {
                      ATerm x_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(s_9), not_null(u_9)), not_null(q_9));
                      {
                        x_9 = t;
                        if(((w_9 != NULL) && (w_9 != x_9)))
                          _fail(x_9);
                        else
                          w_9 = x_9;
                      }
                      t = not_null(w_9);
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
ATerm SDef_3 (ATerm t, ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_SDef_3))
    {
      l_10 = ATgetArgument(k_10, 0);
      m_10 = ATgetArgument(k_10, 1);
      n_10 = ATgetArgument(k_10, 2);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(k_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(l_10);
          {
            ATerm w_10 = NULL;
            t = h_73(t);
            {
              u_10 = t;
              {
                t = not_null(m_10);
                {
                  ATerm y_10 = NULL;
                  t = i_73(t);
                  {
                    w_10 = t;
                    {
                      t = not_null(n_10);
                      {
                        ATerm a_11 = NULL;
                        t = j_73(t);
                        {
                          y_10 = t;
                          {
                            ATerm b_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(u_10), not_null(w_10), not_null(y_10)), not_null(s_10));
                            {
                              b_11 = t;
                              if(((a_11 != NULL) && (a_11 != b_11)))
                                _fail(b_11);
                              else
                                a_11 = b_11;
                            }
                            t = not_null(a_11);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm))
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  n_11 :
  if(match_cons(o_11, sym_Let_2))
    {
      p_11 = ATgetArgument(o_11, 0);
      q_11 = ATgetArgument(o_11, 1);
      {
        ATerm u_11 = NULL,w_11 = NULL;
        ATerm v_11 = NULL;
        t = SSLgetAnnotations(not_null(o_11));
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
        {
          t = not_null(p_11);
          {
            ATerm y_11 = NULL;
            t = f_73(t);
            {
              w_11 = t;
              {
                t = not_null(q_11);
                {
                  ATerm a_12 = NULL;
                  t = g_73(t);
                  {
                    y_11 = t;
                    {
                      ATerm b_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(w_11), not_null(y_11)), not_null(u_11));
                      {
                        b_12 = t;
                        if(((a_12 != NULL) && (a_12 != b_12)))
                          _fail(b_12);
                        else
                          a_12 = b_12;
                      }
                      t = not_null(a_12);
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
ATerm sboundin_3 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm b_83 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, z_82, z_82);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      {
        ATerm o_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, b_83, b_83, z_82);
            LocalPopChoice(u_7);
          }
        else
          {
            t = o_7;
            t = Rec_2(t, b_83, z_82);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Rec_2))
    {
      k_12 = ATgetArgument(j_12, 0);
      l_12 = ATgetArgument(j_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(k_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_SDef_3))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      w_12 = ATgetArgument(t_12, 2);
      {
        t = not_null(v_12);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
            a_13 = t;
            r_12 :
            if(match_cons(a_13, sym_VarDec_2))
              {
                b_13 = ATgetArgument(a_13, 0);
                c_13 = ATgetArgument(a_13, 1);
                t = not_null(b_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_0);
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
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Let_2))
    {
      l_13 = ATgetArgument(k_13, 0);
      m_13 = ATgetArgument(k_13, 1);
      {
        t = not_null(l_13);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
            p_13 = t;
            i_13 :
            if(match_cons(p_13, sym_SDef_3))
              {
                q_13 = ATgetArgument(p_13, 0);
                r_13 = ATgetArgument(p_13, 1);
                s_13 = ATgetArgument(p_13, 2);
                t = not_null(q_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm n_93 (ATerm), ATerm o_93 (ATerm), ATerm p_93 (ATerm))
{
  ATerm c_14 = NULL;
  ATerm e_14 = NULL;
  c_14 = t;
  {
    ATerm f_14 = NULL;
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = not_null(c_14);
    {
      f_14 = t;
      {
        t = SSL_explode_term(not_null(f_14));
        {
          h_14 = t;
          b_14 :
          if(match_cons(h_14, sym__2))
            {
              i_14 = ATgetArgument(h_14, 0);
              j_14 = ATgetArgument(h_14, 1);
              if(((e_14 != NULL) && (e_14 != j_14)))
                _fail(j_14);
              else
                e_14 = j_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_14);
      t = foldr_3(t, n_93, o_93, p_93);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_98 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm v_7 = t;
      int w_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_97(t);
          LocalPopChoice(w_7);
        }
      else
        {
          t = v_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm z_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL;
          ATerm b_8;
          b_8 = t;
          {
            ATerm p_14 = NULL;
            t = y_97(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
          }
          t = b_8;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(o_14);
                return(t);
              }
              t = split_2(t, q_14, t_0);
              t = diff_1(t, a_98);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = z_97(t, r_0, q_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(a_8);
        }
      else
        {
          t = z_7;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, q_14);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
    z_14 = t;
    u_14 :
    if(match_cons(z_14, sym_Call_2))
      {
        a_15 = ATgetArgument(z_14, 0);
        c_15 = ATgetArgument(z_14, 1);
        v_14 :
        if(match_cons(a_15, sym_SVar_1))
          {
            b_15 = ATgetArgument(a_15, 0);
            {
              ATerm f_15 = NULL;
              ATerm g_15 = NULL;
              t = not_null(c_15);
              {
                t = length_0(t);
                {
                  g_15 = t;
                  if(((f_15 != NULL) && (f_15 != g_15)))
                    _fail(g_15);
                  else
                    f_15 = g_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(f_15)));
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
  ATerm x_0 (ATerm t)
  {
    ATerm c_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = c_8;
        {
          ATerm o_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(v_8);
            }
          else
            {
              t = o_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
    h_15 = t;
    x_14 :
    if(match_cons(h_15, sym__2))
      {
        i_15 = ATgetArgument(h_15, 0);
        l_15 = ATgetArgument(h_15, 1);
        y_14 :
        if(match_cons(i_15, sym__2))
          {
            j_15 = ATgetArgument(i_15, 0);
            k_15 = ATgetArgument(i_15, 1);
            if(((j_15 != NULL) && (j_15 != l_15)))
              _fail(l_15);
            else
              j_15 = l_15;
          }
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
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  {
    ATerm c_16 = NULL;
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
    t = not_null(x_15);
    {
      c_16 = t;
      {
        t = SSL_explode_term(not_null(c_16));
        {
          e_16 = t;
          t_15 :
          if(match_cons(e_16, sym__2))
            {
              f_16 = ATgetArgument(e_16, 0);
              g_16 = ATgetArgument(e_16, 1);
              u_15 :
              if(match_string(f_16, ""))
                {
                  v_15 :
                  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                    {
                      h_16 = ATgetFirst((ATermList) g_16);
                      i_16 = (ATerm) ATgetNext((ATermList) g_16);
                      w_15 :
                      if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
                        {
                          j_16 = ATgetFirst((ATermList) i_16);
                          k_16 = (ATerm) ATgetNext((ATermList) i_16);
                          {
                            if(((z_15 != NULL) && (z_15 != h_16)))
                              _fail(h_16);
                            else
                              z_15 = h_16;
                            {
                              if(((b_16 != NULL) && (b_16 != j_16)))
                                _fail(j_16);
                              else
                                b_16 = j_16;
                              if(((a_16 != NULL) && (a_16 != k_16)))
                                _fail(k_16);
                              else
                                a_16 = k_16;
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
    t = not_null(b_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_a_9;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm q_16 = NULL,s_16 = NULL;
    ATerm b_9;
    b_9 = t;
    {
      ATerm r_16 = NULL;
      t = Fst_0(t);
      {
        r_16 = t;
        if(((q_16 != NULL) && (q_16 != r_16)))
          _fail(r_16);
        else
          q_16 = r_16;
      }
    }
    t = b_9;
    {
      ATerm t_16 = NULL;
      t = Snd_0(t);
      {
        t_16 = t;
        if(((s_16 != NULL) && (s_16 != t_16)))
          _fail(t_16);
        else
          s_16 = t_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(q_16), not_null(s_16));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  a_17 = t;
  x_16 :
  if(match_cons(a_17, sym_Call_2))
    {
      b_17 = ATgetArgument(a_17, 0);
      d_17 = ATgetArgument(a_17, 1);
      y_16 :
      if(match_cons(b_17, sym_SVar_1))
        {
          c_17 = ATgetArgument(b_17, 0);
          z_16 :
          if(((ATgetType(d_17) == AT_LIST) && ATisEmpty(d_17)))
            {
              t = not_null(c_17);
            }
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
ATerm Look2_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(match_cons(j_17, sym__2))
    {
      k_17 = ATgetArgument(j_17, 0);
      l_17 = ATgetArgument(j_17, 1);
      i_17 :
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          n_17 = (ATerm) ATgetNext((ATermList) l_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), not_null(n_17));
        }
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
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  v_17 = t;
  s_17 :
  if(match_cons(v_17, sym__2))
    {
      w_17 = ATgetArgument(v_17, 0);
      x_17 = ATgetArgument(v_17, 1);
      t_17 :
      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
        {
          y_17 = ATgetFirst((ATermList) x_17);
          b_18 = (ATerm) ATgetNext((ATermList) x_17);
          u_17 :
          if(match_cons(y_17, sym__2))
            {
              z_17 = ATgetArgument(y_17, 0);
              a_18 = ATgetArgument(y_17, 1);
              {
                ATerm d_18 = NULL;
                if(((w_17 != NULL) && (w_17 != z_17)))
                  _fail(z_17);
                else
                  w_17 = z_17;
                {
                  if(((d_18 != NULL) && (d_18 != a_18)))
                    _fail(a_18);
                  else
                    d_18 = a_18;
                  t = not_null(d_18);
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
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  ATerm j_18 = NULL;
  ATerm l_18 = NULL,m_18 = NULL;
  j_18 = t;
  {
    ATerm n_18 = NULL;
    t = not_null(j_18);
    {
      ATerm o_18 = NULL;
      t = s_83(t);
      {
        n_18 = t;
        {
          if(((l_18 != NULL) && (l_18 != n_18)))
            _fail(n_18);
          else
            l_18 = n_18;
          {
            t = t_83(t);
            {
              o_18 = t;
              if(((m_18 != NULL) && (m_18 != o_18)))
                _fail(o_18);
              else
                m_18 = o_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(m_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm s_18 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_85(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = _all(t, s_18);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym__2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm c_19 = NULL;
        if(((c_19 != NULL) && (c_19 != z_18)))
          _fail(z_18);
        else
          c_19 = z_18;
      }
    }
  else
    {
      if(match_cons(x_18, sym__3))
        {
          y_18 = ATgetArgument(x_18, 0);
          z_18 = ATgetArgument(x_18, 1);
          a_19 = ATgetArgument(x_18, 2);
          {
            ATerm i_19 = NULL;
            ATerm j_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(z_18));
            {
              t = zip_1(t, _id);
              {
                j_19 = t;
                if(((i_19 != NULL) && (i_19 != j_19)))
                  _fail(j_19);
                else
                  i_19 = j_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_19), not_null(a_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm d_83 (ATerm), ATerm e_83 (ATerm))
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = subs_args_0(t);
  {
    p_19 = t;
    o_19 :
    if(match_cons(p_19, sym__2))
      {
        q_19 = ATgetArgument(p_19, 0);
        r_19 = ATgetArgument(p_19, 1);
        {
          t = not_null(r_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(q_19);
                return(t);
              }
              t = SubsVar_2(t, d_83, c_1);
              t = e_83(t);
              return(t);
            }
            t = alltd_1(t, b_1);
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
ATerm substitute_1 (ATerm t, ATerm f_83 (ATerm))
{
  t = substitute_2(t, f_83, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm k_73 (ATerm), ATerm l_73 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_VarDec_2))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      {
        ATerm h_20 = NULL,j_20 = NULL;
        ATerm i_20 = NULL;
        t = SSLgetAnnotations(not_null(b_20));
        {
          i_20 = t;
          if(((h_20 != NULL) && (h_20 != i_20)))
            _fail(i_20);
          else
            h_20 = i_20;
        }
        {
          t = not_null(c_20);
          {
            ATerm l_20 = NULL;
            t = k_73(t);
            {
              j_20 = t;
              {
                t = not_null(d_20);
                {
                  ATerm n_20 = NULL;
                  t = l_73(t);
                  {
                    l_20 = t;
                    {
                      ATerm o_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(j_20), not_null(l_20)), not_null(h_20));
                      {
                        o_20 = t;
                        if(((n_20 != NULL) && (n_20 != o_20)))
                          _fail(o_20);
                        else
                          n_20 = o_20;
                      }
                      t = not_null(n_20);
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
  i_21 = t;
  g_21 :
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      n_21 = (ATerm) ATgetNext((ATermList) i_21);
      h_21 :
      if(match_cons(j_21, sym_SDef_3))
        {
          k_21 = ATgetArgument(j_21, 0);
          l_21 = ATgetArgument(j_21, 1);
          m_21 = ATgetArgument(j_21, 2);
          {
            ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,p_22 = NULL;
            ATerm g_9;
            g_9 = t;
            {
              ATerm v_21 = NULL;
              t = not_null(l_21);
              {
                ATerm b_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  v_21 = t;
                  {
                    if(((s_21 != NULL) && (s_21 != v_21)))
                      _fail(v_21);
                    else
                      s_21 = v_21;
                    {
                      t = not_null(s_21);
                      {
                        ATerm o_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
                          w_21 = t;
                          x_20 :
                          if(match_cons(w_21, sym_VarDec_2))
                            {
                              x_21 = ATgetArgument(w_21, 0);
                              y_21 = ATgetArgument(w_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_21)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          b_22 = t;
                          {
                            if(((t_21 != NULL) && (t_21 != b_22)))
                              _fail(b_22);
                            else
                              t_21 = b_22;
                            {
                              t = not_null(i_21);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                  c_22 = t;
                                  d_21 :
                                  if(match_cons(c_22, sym_SDef_3))
                                    {
                                      d_22 = ATgetArgument(c_22, 0);
                                      e_22 = ATgetArgument(c_22, 1);
                                      f_22 = ATgetArgument(c_22, 2);
                                      {
                                        ATerm i_22 = NULL;
                                        ATerm n_22 = NULL;
                                        t = not_null(e_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
                                            j_22 = t;
                                            b_21 :
                                            if(match_cons(j_22, sym_VarDec_2))
                                              {
                                                k_22 = ATgetArgument(j_22, 0);
                                                l_22 = ATgetArgument(j_22, 1);
                                                t = not_null(k_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            n_22 = t;
                                            if(((i_22 != NULL) && (i_22 != n_22)))
                                              _fail(n_22);
                                            else
                                              i_22 = n_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(i_22), not_null(t_21), not_null(f_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  o_22 = t;
                                  if(((u_21 != NULL) && (u_21 != o_22)))
                                    _fail(o_22);
                                  else
                                    u_21 = o_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = g_9;
            {
              ATerm q_22 = NULL;
              t = not_null(u_21);
              {
                t = choices_0(t);
                {
                  q_22 = t;
                  if(((p_22 != NULL) && (p_22 != q_22)))
                    _fail(q_22);
                  else
                    p_22 = q_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_21), not_null(s_21), not_null(p_22));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  b_23 :
  if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
    {
      e_23 = ATgetFirst((ATermList) d_23);
      f_23 = (ATerm) ATgetNext((ATermList) d_23);
      c_23 :
      if(((ATgetType(f_23) == AT_LIST) && ATisEmpty(f_23)))
        {
          t = not_null(e_23);
        }
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
ATerm joindefs_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_cons(m_23, sym__2))
    {
      n_23 = ATgetArgument(m_23, 0);
      q_23 = ATgetArgument(m_23, 1);
      l_23 :
      if(match_cons(n_23, sym__2))
        {
          o_23 = ATgetArgument(n_23, 0);
          p_23 = ATgetArgument(n_23, 1);
          {
            ATerm u_23 = NULL;
            ATerm v_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(p_23));
            {
              t = Definitions_0(t);
              {
                v_23 = t;
                if(((u_23 != NULL) && (u_23 != v_23)))
                  _fail(v_23);
                else
                  u_23 = v_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(q_23));
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
ATerm Expl_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  q_24 = t;
  o_24 :
  if(match_cons(q_24, sym_ExplodeCong_2))
    {
      r_24 = ATgetArgument(q_24, 0);
      p_24 = ATgetArgument(q_24, 1);
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
        ATerm y_24 = NULL;
        ATerm z_24 = NULL;
        t = new_0(t);
        {
          y_24 = t;
          {
            if(((u_24 != NULL) && (u_24 != y_24)))
              _fail(y_24);
            else
              u_24 = y_24;
            {
              ATerm a_25 = NULL;
              t = new_0(t);
              {
                z_24 = t;
                {
                  if(((v_24 != NULL) && (v_24 != z_24)))
                    _fail(z_24);
                  else
                    v_24 = z_24;
                  {
                    ATerm b_25 = NULL;
                    t = new_0(t);
                    {
                      a_25 = t;
                      {
                        if(((w_24 != NULL) && (w_24 != a_25)))
                          _fail(a_25);
                        else
                          w_24 = a_25;
                        {
                          t = new_0(t);
                          {
                            b_25 = t;
                            if(((x_24 != NULL) && (x_24 != b_25)))
                              _fail(b_25);
                            else
                              x_24 = b_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_24)), not_null(w_24)), not_null(v_24)), not_null(u_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_24)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(r_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(w_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))))), (ATerm) ATmakeAppl(sym_Prim_2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_24))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_24)))))));
      }
    }
  else
    {
      if(match_cons(q_24, sym_Build_1))
        {
          r_24 = ATgetArgument(q_24, 0);
          {
            ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
            ATerm h_25 = NULL;
            ATerm l_25 = NULL;
            t = new_0(t);
            {
              h_25 = t;
              {
                if(((f_25 != NULL) && (f_25 != h_25)))
                  _fail(h_25);
                else
                  f_25 = h_25;
                {
                  t = not_null(r_24);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
                      i_25 = t;
                      h_24 :
                      if(match_cons(i_25, sym_Explode_2))
                        {
                          j_25 = ATgetArgument(i_25, 0);
                          k_25 = ATgetArgument(i_25, 1);
                          {
                            if(((d_25 != NULL) && (d_25 != j_25)))
                              _fail(j_25);
                            else
                              d_25 = j_25;
                            {
                              if(((e_25 != NULL) && (e_25 != k_25)))
                                _fail(k_25);
                              else
                                e_25 = k_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      l_25 = t;
                      if(((g_25 != NULL) && (g_25 != l_25)))
                        _fail(l_25);
                      else
                        g_25 = l_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_n_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), not_null(d_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_25)))));
          }
        }
      else
        {
          if(match_cons(q_24, sym_Match_1))
            {
              r_24 = ATgetArgument(q_24, 0);
              {
                ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                ATerm s_25 = NULL;
                ATerm t_25 = NULL;
                t = new_0(t);
                {
                  s_25 = t;
                  {
                    if(((p_25 != NULL) && (p_25 != s_25)))
                      _fail(s_25);
                    else
                      p_25 = s_25;
                    {
                      ATerm x_25 = NULL;
                      t = new_0(t);
                      {
                        t_25 = t;
                        {
                          if(((q_25 != NULL) && (q_25 != t_25)))
                            _fail(t_25);
                          else
                            q_25 = t_25;
                          {
                            t = not_null(r_24);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
                                u_25 = t;
                                m_24 :
                                if(match_cons(u_25, sym_Explode_2))
                                  {
                                    v_25 = ATgetArgument(u_25, 0);
                                    w_25 = ATgetArgument(u_25, 1);
                                    {
                                      if(((n_25 != NULL) && (n_25 != v_25)))
                                        _fail(v_25);
                                      else
                                        n_25 = v_25;
                                      {
                                        if(((o_25 != NULL) && (o_25 != w_25)))
                                          _fail(w_25);
                                        else
                                          o_25 = w_25;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_25));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                x_25 = t;
                                if(((r_25 != NULL) && (r_25 != x_25)))
                                  _fail(x_25);
                                else
                                  r_25 = x_25;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_o_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_25)), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_25)), not_null(n_25)))))));
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
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_Match_1))
    {
      d_27 = ATgetArgument(c_27, 0);
      {
        ATerm t_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
            ATerm j_27 = NULL;
            ATerm n_27 = NULL;
            t = new_0(t);
            {
              j_27 = t;
              {
                if(((h_27 != NULL) && (h_27 != j_27)))
                  _fail(j_27);
                else
                  h_27 = j_27;
                {
                  t = not_null(d_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
                      k_27 = t;
                      r_26 :
                      if(match_cons(k_27, sym_Anno_2))
                        {
                          l_27 = ATgetArgument(k_27, 0);
                          m_27 = ATgetArgument(k_27, 1);
                          {
                            if(((f_27 != NULL) && (f_27 != l_27)))
                              _fail(l_27);
                            else
                              f_27 = l_27;
                            {
                              if(((g_27 != NULL) && (g_27 != m_27)))
                                _fail(m_27);
                              else
                                g_27 = m_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_27)), not_null(f_27));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      n_27 = t;
                      if(((i_27 != NULL) && (i_27 != n_27)))
                        _fail(n_27);
                      else
                        i_27 = n_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_27))))));
            LocalPopChoice(v_9);
          }
        else
          {
            t = t_9;
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                  ATerm s_27 = NULL;
                  ATerm v_27 = NULL;
                  t = new_0(t);
                  {
                    s_27 = t;
                    {
                      if(((q_27 != NULL) && (q_27 != s_27)))
                        _fail(s_27);
                      else
                        q_27 = s_27;
                      {
                        t = not_null(d_27);
                        {
                          ATerm k_1 (ATerm t)
                          {
                            ATerm t_27 = NULL,u_27 = NULL;
                            t_27 = t;
                            v_26 :
                            if(match_cons(t_27, sym_RootApp_1))
                              {
                                u_27 = ATgetArgument(t_27, 0);
                                {
                                  if(((p_27 != NULL) && (p_27 != u_27)))
                                    _fail(u_27);
                                  else
                                    p_27 = u_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, k_1);
                          {
                            v_27 = t;
                            if(((r_27 != NULL) && (r_27 != v_27)))
                              _fail(v_27);
                            else
                              r_27 = v_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_27))), not_null(p_27))));
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
                  {
                    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
                    ATerm b_28 = NULL;
                    ATerm f_28 = NULL;
                    t = new_0(t);
                    {
                      b_28 = t;
                      {
                        if(((z_27 != NULL) && (z_27 != b_28)))
                          _fail(b_28);
                        else
                          z_27 = b_28;
                        {
                          t = not_null(d_27);
                          {
                            ATerm l_1 (ATerm t)
                            {
                              ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
                              c_28 = t;
                              z_26 :
                              if(match_cons(c_28, sym_App_2))
                                {
                                  d_28 = ATgetArgument(c_28, 0);
                                  e_28 = ATgetArgument(c_28, 1);
                                  {
                                    if(((y_27 != NULL) && (y_27 != d_28)))
                                      _fail(d_28);
                                    else
                                      y_27 = d_28;
                                    {
                                      if(((x_27 != NULL) && (x_27 != e_28)))
                                        _fail(e_28);
                                      else
                                        x_27 = e_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, l_1);
                            {
                              f_28 = t;
                              if(((a_28 != NULL) && (a_28 != f_28)))
                                _fail(f_28);
                              else
                                a_28 = f_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_27))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_27)), not_null(y_27)))));
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,c_29 = NULL;
  w_28 = t;
  u_28 :
  if(match_cons(w_28, sym_Match_1))
    {
      x_28 = ATgetArgument(w_28, 0);
      v_28 :
      if(match_cons(x_28, sym_RootApp_1))
        {
          y_28 = ATgetArgument(x_28, 0);
          t = not_null(y_28);
        }
      else
        {
          if(match_cons(x_28, sym_App_2))
            {
              y_28 = ATgetArgument(x_28, 0);
              c_29 = ATgetArgument(x_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_28), not_null(c_29));
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
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym_Match_1))
    {
      a_30 = ATgetArgument(z_29, 0);
      {
        ATerm d_30 = NULL,e_30 = NULL;
        ATerm t_30 = NULL;
        t = not_null(a_30);
        {
          ATerm m_1 (ATerm t)
          {
            ATerm f_30 = NULL,i_30 = NULL,j_30 = NULL;
            f_30 = t;
            k_29 :
            if(match_cons(f_30, sym_RootApp_1))
              {
                i_30 = ATgetArgument(f_30, 0);
                l_29 :
                if(match_cons(i_30, sym_Match_1))
                  {
                    j_30 = ATgetArgument(i_30, 0);
                    {
                      if(((d_30 != NULL) && (d_30 != j_30)))
                        _fail(j_30);
                      else
                        d_30 = j_30;
                      t = not_null(d_30);
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
          t = pat_td_1(t, m_1);
          {
            t_30 = t;
            if(((e_30 != NULL) && (e_30 != t_30)))
              _fail(t_30);
            else
              e_30 = t_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(e_30));
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
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm s_31 = NULL,v_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym_Build_1))
    {
      v_31 = ATgetArgument(s_31, 0);
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
            ATerm b_32 = NULL;
            ATerm f_32 = NULL;
            t = new_0(t);
            {
              b_32 = t;
              {
                if(((z_31 != NULL) && (z_31 != b_32)))
                  _fail(b_32);
                else
                  z_31 = b_32;
                {
                  t = not_null(v_31);
                  {
                    ATerm n_1 (ATerm t)
                    {
                      ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
                      c_32 = t;
                      c_31 :
                      if(match_cons(c_32, sym_Anno_2))
                        {
                          d_32 = ATgetArgument(c_32, 0);
                          e_32 = ATgetArgument(c_32, 1);
                          {
                            if(((x_31 != NULL) && (x_31 != d_32)))
                              _fail(d_32);
                            else
                              x_31 = d_32;
                            {
                              if(((y_31 != NULL) && (y_31 != e_32)))
                                _fail(e_32);
                              else
                                y_31 = e_32;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_31));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, n_1);
                    {
                      f_32 = t;
                      if(((a_32 != NULL) && (a_32 != f_32)))
                        _fail(f_32);
                      else
                        a_32 = f_32;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_31)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_31)), not_null(x_31))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_31))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_32))));
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            {
              ATerm i_10 = t;
              int o_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
                  ATerm k_32 = NULL;
                  ATerm n_32 = NULL;
                  t = new_0(t);
                  {
                    k_32 = t;
                    {
                      if(((i_32 != NULL) && (i_32 != k_32)))
                        _fail(k_32);
                      else
                        i_32 = k_32;
                      {
                        t = not_null(v_31);
                        {
                          ATerm o_1 (ATerm t)
                          {
                            ATerm l_32 = NULL,m_32 = NULL;
                            l_32 = t;
                            g_31 :
                            if(match_cons(l_32, sym_RootApp_1))
                              {
                                m_32 = ATgetArgument(l_32, 0);
                                {
                                  if(((h_32 != NULL) && (h_32 != m_32)))
                                    _fail(m_32);
                                  else
                                    h_32 = m_32;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_32));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, o_1);
                          {
                            n_32 = t;
                            if(((j_32 != NULL) && (j_32 != n_32)))
                              _fail(n_32);
                            else
                              j_32 = n_32;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_32))));
                  LocalPopChoice(o_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
                    ATerm t_32 = NULL;
                    ATerm x_32 = NULL;
                    t = new_0(t);
                    {
                      t_32 = t;
                      {
                        if(((r_32 != NULL) && (r_32 != t_32)))
                          _fail(t_32);
                        else
                          r_32 = t_32;
                        {
                          t = not_null(v_31);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
                              u_32 = t;
                              p_31 :
                              if(match_cons(u_32, sym_App_2))
                                {
                                  v_32 = ATgetArgument(u_32, 0);
                                  w_32 = ATgetArgument(u_32, 1);
                                  {
                                    if(((p_32 != NULL) && (p_32 != v_32)))
                                      _fail(v_32);
                                    else
                                      p_32 = v_32;
                                    {
                                      if(((q_32 != NULL) && (q_32 != w_32)))
                                        _fail(w_32);
                                      else
                                        q_32 = w_32;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_32));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, p_1);
                            {
                              x_32 = t;
                              if(((s_32 != NULL) && (s_32 != x_32)))
                                _fail(x_32);
                              else
                                s_32 = x_32;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(p_32), not_null(q_32), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_32)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_32))));
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
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  s_33 = t;
  m_33 :
  if(match_cons(s_33, sym_Build_1))
    {
      t_33 = ATgetArgument(s_33, 0);
      n_33 :
      if(match_cons(t_33, sym_RootApp_1))
        {
          u_33 = ATgetArgument(t_33, 0);
          t = not_null(u_33);
        }
      else
        {
          if(match_cons(t_33, sym_App_2))
            {
              u_33 = ATgetArgument(t_33, 0);
              v_33 = ATgetArgument(t_33, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_33)), not_null(u_33));
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
ATerm As_2 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm))
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym_As_2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      {
        ATerm v_34 = NULL,x_34 = NULL;
        ATerm w_34 = NULL;
        t = SSLgetAnnotations(not_null(p_34));
        {
          w_34 = t;
          if(((v_34 != NULL) && (v_34 != w_34)))
            _fail(w_34);
          else
            v_34 = w_34;
        }
        {
          t = not_null(q_34);
          {
            ATerm z_34 = NULL;
            t = n_75(t);
            {
              x_34 = t;
              {
                t = not_null(r_34);
                {
                  ATerm g_35 = NULL;
                  t = o_75(t);
                  {
                    z_34 = t;
                    {
                      ATerm h_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(x_34), not_null(z_34)), not_null(v_34));
                      {
                        h_35 = t;
                        if(((g_35 != NULL) && (g_35 != h_35)))
                          _fail(h_35);
                        else
                          g_35 = h_35;
                      }
                      t = not_null(g_35);
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
ATerm Prim_2 (ATerm t, ATerm t_71 (ATerm), ATerm u_71 (ATerm))
{
  ATerm t_35 = NULL,c_36 = NULL,d_36 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym_Prim_2))
    {
      c_36 = ATgetArgument(t_35, 0);
      d_36 = ATgetArgument(t_35, 1);
      {
        ATerm h_36 = NULL,j_36 = NULL;
        ATerm i_36 = NULL;
        t = SSLgetAnnotations(not_null(t_35));
        {
          i_36 = t;
          if(((h_36 != NULL) && (h_36 != i_36)))
            _fail(i_36);
          else
            h_36 = i_36;
        }
        {
          t = not_null(c_36);
          {
            ATerm l_36 = NULL;
            t = t_71(t);
            {
              j_36 = t;
              {
                t = not_null(d_36);
                {
                  ATerm n_36 = NULL;
                  t = u_71(t);
                  {
                    l_36 = t;
                    {
                      ATerm o_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(j_36), not_null(l_36)), not_null(h_36));
                      {
                        o_36 = t;
                        if(((n_36 != NULL) && (n_36 != o_36)))
                          _fail(o_36);
                        else
                          n_36 = o_36;
                      }
                      t = not_null(n_36);
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
ATerm Explode_2 (ATerm t, ATerm j_75 (ATerm), ATerm k_75 (ATerm))
{
  ATerm j_37 = NULL,k_37 = NULL,p_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Explode_2))
    {
      k_37 = ATgetArgument(j_37, 0);
      p_37 = ATgetArgument(j_37, 1);
      {
        ATerm x_37 = NULL,z_37 = NULL;
        ATerm y_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          y_37 = t;
          if(((x_37 != NULL) && (x_37 != y_37)))
            _fail(y_37);
          else
            x_37 = y_37;
        }
        {
          t = not_null(k_37);
          {
            ATerm b_38 = NULL;
            t = j_75(t);
            {
              z_37 = t;
              {
                t = not_null(p_37);
                {
                  ATerm d_38 = NULL;
                  t = k_75(t);
                  {
                    b_38 = t;
                    {
                      ATerm e_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(z_37), not_null(b_38)), not_null(x_37));
                      {
                        e_38 = t;
                        if(((d_38 != NULL) && (d_38 != e_38)))
                          _fail(e_38);
                        else
                          d_38 = e_38;
                      }
                      t = not_null(d_38);
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
ATerm Op_2 (ATerm t, ATerm x_73 (ATerm), ATerm y_73 (ATerm))
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym_Op_2))
    {
      y_38 = ATgetArgument(x_38, 0);
      z_38 = ATgetArgument(x_38, 1);
      {
        ATerm d_39 = NULL,f_39 = NULL;
        ATerm e_39 = NULL;
        t = SSLgetAnnotations(not_null(x_38));
        {
          e_39 = t;
          if(((d_39 != NULL) && (d_39 != e_39)))
            _fail(e_39);
          else
            d_39 = e_39;
        }
        {
          t = not_null(y_38);
          {
            ATerm h_39 = NULL;
            t = x_73(t);
            {
              f_39 = t;
              {
                t = not_null(z_38);
                {
                  ATerm j_39 = NULL;
                  t = y_73(t);
                  {
                    h_39 = t;
                    {
                      ATerm k_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(f_39), not_null(h_39)), not_null(d_39));
                      {
                        k_39 = t;
                        if(((j_39 != NULL) && (j_39 != k_39)))
                          _fail(k_39);
                        else
                          j_39 = k_39;
                      }
                      t = not_null(j_39);
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
ATerm pat_td_1 (ATerm t, ATerm r_111 (ATerm))
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_111(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                t = pat_td_1(t, r_111);
                return(t);
              }
              t = fetch_1(t, r_1);
              return(t);
            }
            t = Op_2(t, _id, q_1);
            LocalPopChoice(v_10);
          }
        else
          {
            t = r_10;
            {
              ATerm x_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = pat_td_1(t, r_111);
                    return(t);
                  }
                  t = Explode_2(t, _id, s_1);
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = x_10;
                  {
                    ATerm c_11 = t;
                    int d_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_111);
                          return(t);
                        }
                        t = Explode_2(t, t_1, _id);
                        LocalPopChoice(d_11);
                      }
                    else
                      {
                        t = c_11;
                        {
                          ATerm e_11 = t;
                          int f_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_1 (ATerm t)
                              {
                                ATerm v_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_111);
                                  return(t);
                                }
                                t = fetch_1(t, v_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, u_1);
                              LocalPopChoice(f_11);
                            }
                          else
                            {
                              t = e_11;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_111);
                                  return(t);
                                }
                                t = As_2(t, _id, w_1);
                              }
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  b_40 = t;
  a_40 :
  if(match_cons(b_40, sym_Build_1))
    {
      c_40 = ATgetArgument(b_40, 0);
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_40 = NULL,f_40 = NULL;
            ATerm j_40 = NULL;
            t = not_null(c_40);
            {
              ATerm x_1 (ATerm t)
              {
                ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
                g_40 = t;
                t_39 :
                if(match_cons(g_40, sym_RootApp_1))
                  {
                    h_40 = ATgetArgument(g_40, 0);
                    u_39 :
                    if(match_cons(h_40, sym_Build_1))
                      {
                        i_40 = ATgetArgument(h_40, 0);
                        {
                          if(((e_40 != NULL) && (e_40 != i_40)))
                            _fail(i_40);
                          else
                            e_40 = i_40;
                          t = not_null(e_40);
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
              t = pat_td_1(t, x_1);
              {
                j_40 = t;
                if(((f_40 != NULL) && (f_40 != j_40)))
                  _fail(j_40);
                else
                  f_40 = j_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_40));
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
              ATerm t_40 = NULL;
              t = not_null(c_40);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,s_40 = NULL;
                  o_40 = t;
                  x_39 :
                  if(match_cons(o_40, sym_App_2))
                    {
                      p_40 = ATgetArgument(o_40, 0);
                      s_40 = ATgetArgument(o_40, 1);
                      y_39 :
                      if(match_cons(p_40, sym_Build_1))
                        {
                          q_40 = ATgetArgument(p_40, 0);
                          {
                            if(((m_40 != NULL) && (m_40 != q_40)))
                              _fail(q_40);
                            else
                              m_40 = q_40;
                            {
                              if(((l_40 != NULL) && (l_40 != s_40)))
                                _fail(s_40);
                              else
                                l_40 = s_40;
                              t = not_null(m_40);
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
                t = pat_td_1(t, y_1);
                {
                  t_40 = t;
                  if(((n_40 != NULL) && (n_40 != t_40)))
                    _fail(t_40);
                  else
                    n_40 = t_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(n_40));
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
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  n_41 :
  if(match_cons(u_41, sym_Lets_2))
    {
      v_41 = ATgetArgument(u_41, 0);
      w_41 = ATgetArgument(u_41, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_41), not_null(w_41));
    }
  else
    {
      if(match_cons(u_41, sym_LChoices_1))
        {
          v_41 = ATgetArgument(u_41, 0);
          o_41 :
          if(((ATgetType(v_41) == AT_LIST) && !(ATisEmpty(v_41))))
            {
              r_41 = ATgetFirst((ATermList) v_41);
              s_41 = (ATerm) ATgetNext((ATermList) v_41);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(s_41)));
            }
          else
            {
              if(((ATgetType(v_41) == AT_LIST) && ATisEmpty(v_41)))
                {
                  t = term_a_9;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(u_41, sym_Choices_1))
            {
              v_41 = ATgetArgument(u_41, 0);
              p_41 :
              if(((ATgetType(v_41) == AT_LIST) && !(ATisEmpty(v_41))))
                {
                  r_41 = ATgetFirst((ATermList) v_41);
                  s_41 = (ATerm) ATgetNext((ATermList) v_41);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(s_41)));
                }
              else
                {
                  if(((ATgetType(v_41) == AT_LIST) && ATisEmpty(v_41)))
                    {
                      t = term_a_9;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(u_41, sym_Seqs_1))
                {
                  v_41 = ATgetArgument(u_41, 0);
                  q_41 :
                  if(((ATgetType(v_41) == AT_LIST) && !(ATisEmpty(v_41))))
                    {
                      r_41 = ATgetFirst((ATermList) v_41);
                      s_41 = (ATerm) ATgetNext((ATermList) v_41);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_41)));
                    }
                  else
                    {
                      if(((ATgetType(v_41) == AT_LIST) && ATisEmpty(v_41)))
                        {
                          t = term_m_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(u_41, sym_DefaultVarDec_1))
                    {
                      v_41 = ATgetArgument(u_41, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(v_41), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11));
                    }
                  else
                    {
                      if(match_cons(u_41, sym_InfixApp_3))
                        {
                          v_41 = ATgetArgument(u_41, 0);
                          w_41 = ATgetArgument(u_41, 1);
                          t_41 = ATgetArgument(u_41, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_41), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), not_null(v_41))));
                        }
                      else
                        {
                          if(match_cons(u_41, sym_BAM_3))
                            {
                              v_41 = ATgetArgument(u_41, 0);
                              w_41 = ATgetArgument(u_41, 1);
                              t_41 = ATgetArgument(u_41, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(t_41))), not_null(v_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_41))));
                            }
                          else
                            {
                              if(match_cons(u_41, sym_AM_2))
                                {
                                  v_41 = ATgetArgument(u_41, 0);
                                  w_41 = ATgetArgument(u_41, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_41)));
                                }
                              else
                                {
                                  if(match_cons(u_41, sym_MA_2))
                                    {
                                      v_41 = ATgetArgument(u_41, 0);
                                      w_41 = ATgetArgument(u_41, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_41)), not_null(w_41));
                                    }
                                  else
                                    {
                                      if(match_cons(u_41, sym_BA_2))
                                        {
                                          v_41 = ATgetArgument(u_41, 0);
                                          w_41 = ATgetArgument(u_41, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_41)), not_null(v_41));
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
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
  j_43 = t;
  g_43 :
  if(match_cons(j_43, sym__2))
    {
      k_43 = ATgetArgument(j_43, 0);
      n_43 = ATgetArgument(j_43, 1);
      h_43 :
      if(match_cons(k_43, sym__2))
        {
          l_43 = ATgetArgument(k_43, 0);
          m_43 = ATgetArgument(k_43, 1);
          i_43 :
          if(match_cons(n_43, sym__2))
            {
              o_43 = ATgetArgument(n_43, 0);
              p_43 = ATgetArgument(n_43, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_43)), not_null(l_43)), (ATerm) ATinsert(CheckATermList(not_null(p_43)), not_null(m_43)));
            }
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
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  w_43 :
  if(((ATgetType(x_43) == AT_LIST) && !(ATisEmpty(x_43))))
    {
      y_43 = ATgetFirst((ATermList) x_43);
      z_43 = (ATerm) ATgetNext((ATermList) x_43);
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_43), not_null(z_43));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  e_44 :
  if(((ATgetType(f_44) == AT_LIST) && ATisEmpty(f_44)))
    {
      t = term_x_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm x_88 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, x_88);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  ATerm u_44 (ATerm t)
  {
    ATerm o_44 = NULL;
    ATerm s_44 = NULL;
    t = not_null(l_44);
    {
      ATerm z_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_11;
        }
      {
        t = new_0(t);
        {
          s_44 = t;
          if(((o_44 != NULL) && (o_44 != s_44)))
            _fail(s_44);
          else
            o_44 = s_44;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(o_44)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_44)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_44))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_44))));
    return(t);
  }
  ATerm v_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_m_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_44))));
    return(t);
  }
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym_Var_1))
    {
      m_44 = ATgetArgument(l_44, 0);
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_44(t);
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            t = v_44(t);
          }
      }
    }
  else
    {
      t = u_44(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm g_45 = NULL,h_45 = NULL;
  g_45 = t;
  f_45 :
  if(match_cons(g_45, sym_Var_1))
    {
      h_45 = ATgetArgument(g_45, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_47 = NULL,p_48 = NULL;
            ATerm o_48 = NULL;
            t = SSLgetAnnotations(not_null(g_45));
            {
              o_48 = t;
              if(((j_47 != NULL) && (j_47 != o_48)))
                _fail(o_48);
              else
                j_47 = o_48;
            }
            {
              t = not_null(h_45);
              {
                ATerm r_48 = NULL;
                t = k_0(t);
                {
                  p_48 = t;
                  {
                    ATerm s_48 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_48)), not_null(j_47));
                    {
                      s_48 = t;
                      if(((r_48 != NULL) && (r_48 != s_48)))
                        _fail(s_48);
                      else
                        r_48 = s_48;
                    }
                    t = not_null(r_48);
                  }
                }
              }
            }
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm v_48 = NULL,x_48 = NULL;
              ATerm w_48 = NULL;
              t = SSLgetAnnotations(not_null(g_45));
              {
                w_48 = t;
                if(((v_48 != NULL) && (v_48 != w_48)))
                  _fail(w_48);
                else
                  v_48 = w_48;
              }
              {
                t = not_null(h_45);
                {
                  ATerm z_48 = NULL;
                  t = k_0(t);
                  {
                    x_48 = t;
                    {
                      ATerm a_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_48)), not_null(v_48));
                      {
                        a_49 = t;
                        if(((z_48 != NULL) && (z_48 != a_49)))
                          _fail(a_49);
                        else
                          z_48 = a_49;
                      }
                      t = not_null(z_48);
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
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  n_49 :
  if(match_cons(o_49, sym_Prim_2))
    {
      p_49 = ATgetArgument(o_49, 0);
      q_49 = ATgetArgument(o_49, 1);
      {
        ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
        ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,b_50 = NULL;
        t = not_null(q_49);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm g_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_12;
              }
            return(t);
          }
          t = fetch_1(t, z_1);
          {
            t = not_null(q_49);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm a_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, a_2);
                {
                  w_49 = t;
                  l_49 :
                  if(match_cons(w_49, sym__2))
                    {
                      x_49 = ATgetArgument(w_49, 0);
                      y_49 = ATgetArgument(w_49, 1);
                      m_49 :
                      if(match_cons(y_49, sym__2))
                        {
                          z_49 = ATgetArgument(y_49, 0);
                          b_50 = ATgetArgument(y_49, 1);
                          {
                            if(((t_49 != NULL) && (t_49 != x_49)))
                              _fail(x_49);
                            else
                              t_49 = x_49;
                            {
                              if(((u_49 != NULL) && (u_49 != z_49)))
                                _fail(z_49);
                              else
                                u_49 = z_49;
                              if(((v_49 != NULL) && (v_49 != b_50)))
                                _fail(b_50);
                              else
                                v_49 = b_50;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(u_49)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(p_49), not_null(v_49))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm u_99 (ATerm), ATerm v_99 (ATerm))
{
  ATerm e_50 (ATerm t)
  {
    ATerm h_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_99(t);
        t = e_50(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = h_12;
        t = v_99(t);
      }
    return(t);
  }
  t = e_50(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_99 (ATerm))
{
  t = repeat_2(t, x_99, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  k_50 :
  if(match_cons(n_50, sym_Wld_0))
    {
      ATerm p_50 = NULL,r_50 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm q_50 = NULL;
        t = SSLgetAnnotations(not_null(n_50));
        {
          q_50 = t;
          if(((p_50 != NULL) && (p_50 != q_50)))
            _fail(q_50);
          else
            p_50 = q_50;
        }
      }
      t = n_12;
      {
        ATerm s_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(p_50));
        {
          s_50 = t;
          if(((r_50 != NULL) && (r_50 != s_50)))
            _fail(s_50);
          else
            r_50 = s_50;
        }
        t = not_null(r_50);
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
  ATerm o_12 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, b_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  b_51 :
  if(match_cons(c_51, sym_App_2))
    {
      d_51 = ATgetArgument(c_51, 0);
      e_51 = ATgetArgument(c_51, 1);
      {
        ATerm k_51 = NULL,n_51 = NULL;
        ATerm m_51 = NULL;
        t = SSLgetAnnotations(not_null(c_51));
        {
          m_51 = t;
          if(((k_51 != NULL) && (k_51 != m_51)))
            _fail(m_51);
          else
            k_51 = m_51;
        }
        {
          t = not_null(d_51);
          {
            ATerm p_51 = NULL;
            t = d_75(t);
            {
              n_51 = t;
              {
                t = not_null(e_51);
                {
                  ATerm r_51 = NULL;
                  t = e_75(t);
                  {
                    p_51 = t;
                    {
                      ATerm s_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(n_51), not_null(p_51)), not_null(k_51));
                      {
                        s_51 = t;
                        if(((r_51 != NULL) && (r_51 != s_51)))
                          _fail(s_51);
                        else
                          r_51 = s_51;
                      }
                      t = not_null(r_51);
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
ATerm Con_3 (ATerm t, ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  ATerm h_52 = NULL,i_52 = NULL,o_52 = NULL,q_52 = NULL;
  h_52 = t;
  g_52 :
  if(match_cons(h_52, sym_Con_3))
    {
      i_52 = ATgetArgument(h_52, 0);
      o_52 = ATgetArgument(h_52, 1);
      q_52 = ATgetArgument(h_52, 2);
      {
        ATerm v_52 = NULL,x_52 = NULL;
        ATerm w_52 = NULL;
        t = SSLgetAnnotations(not_null(h_52));
        {
          w_52 = t;
          if(((v_52 != NULL) && (v_52 != w_52)))
            _fail(w_52);
          else
            v_52 = w_52;
        }
        {
          t = not_null(i_52);
          {
            ATerm z_52 = NULL;
            t = a_75(t);
            {
              x_52 = t;
              {
                t = not_null(o_52);
                {
                  ATerm b_53 = NULL;
                  t = b_75(t);
                  {
                    z_52 = t;
                    {
                      t = not_null(q_52);
                      {
                        ATerm d_53 = NULL;
                        t = c_75(t);
                        {
                          b_53 = t;
                          {
                            ATerm e_53 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(x_52), not_null(z_52), not_null(b_53)), not_null(v_52));
                            {
                              e_53 = t;
                              if(((d_53 != NULL) && (d_53 != e_53)))
                                _fail(e_53);
                              else
                                d_53 = e_53;
                            }
                            t = not_null(d_53);
                          }
                        }
                      }
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
  ATerm x_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  p_53 = t;
  n_53 :
  if(match_cons(p_53, sym_SRule_1))
    {
      q_53 = ATgetArgument(p_53, 0);
      o_53 :
      if(match_cons(q_53, sym_StratRule_3))
        {
          r_53 = ATgetArgument(q_53, 0);
          s_53 = ATgetArgument(q_53, 1);
          t_53 = ATgetArgument(q_53, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_53)), (ATerm) ATmakeAppl(sym_Where_1, not_null(t_53))), not_null(r_53)));
        }
      else
        {
          if(match_cons(q_53, sym_Rule_3))
            {
              r_53 = ATgetArgument(q_53, 0);
              s_53 = ATgetArgument(q_53, 1);
              t_53 = ATgetArgument(q_53, 2);
              {
                t = not_null(r_53);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(s_53);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(s_53))), (ATerm) ATmakeAppl(sym_Where_1, not_null(t_53))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_53))));
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
ATerm Scope_2 (ATerm t, ATerm b_72 (ATerm), ATerm c_72 (ATerm))
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
  i_54 = t;
  h_54 :
  if(match_cons(i_54, sym_Scope_2))
    {
      j_54 = ATgetArgument(i_54, 0);
      k_54 = ATgetArgument(i_54, 1);
      {
        ATerm o_54 = NULL,x_54 = NULL;
        ATerm p_54 = NULL;
        t = SSLgetAnnotations(not_null(i_54));
        {
          p_54 = t;
          if(((o_54 != NULL) && (o_54 != p_54)))
            _fail(p_54);
          else
            o_54 = p_54;
        }
        {
          t = not_null(j_54);
          {
            ATerm z_54 = NULL;
            t = b_72(t);
            {
              x_54 = t;
              {
                t = not_null(k_54);
                {
                  ATerm d_55 = NULL;
                  t = c_72(t);
                  {
                    z_54 = t;
                    {
                      ATerm e_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_54), not_null(z_54)), not_null(o_54));
                      {
                        e_55 = t;
                        if(((d_55 != NULL) && (d_55 != e_55)))
                          _fail(e_55);
                        else
                          d_55 = e_55;
                      }
                      t = not_null(d_55);
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
ATerm oncetd_1 (ATerm t, ATerm k_85 (ATerm))
{
  ATerm p_55 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_85(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = _one(t, p_55);
      }
    return(t);
  }
  t = p_55(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  j_56 = t;
  c_56 :
  if(match_cons(j_56, sym_SRule_1))
    {
      k_56 = ATgetArgument(j_56, 0);
      d_56 :
      if(match_cons(k_56, sym_Rule_3))
        {
          l_56 = ATgetArgument(k_56, 0);
          m_56 = ATgetArgument(k_56, 1);
          n_56 = ATgetArgument(k_56, 2);
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
                  t = not_null(l_56);
                  {
                    ATerm s_57 = NULL;
                    ATerm d_2 (ATerm t)
                    {
                      ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
                      e_57 = t;
                      t_55 :
                      if(match_cons(e_57, sym_Con_3))
                        {
                          f_57 = ATgetArgument(e_57, 0);
                          h_57 = ATgetArgument(e_57, 1);
                          i_57 = ATgetArgument(e_57, 2);
                          u_55 :
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
                    t = oncetd_1(t, d_2);
                    {
                      j_57 = t;
                      {
                        if(((b_57 != NULL) && (b_57 != j_57)))
                          _fail(j_57);
                        else
                          b_57 = j_57;
                        {
                          t = not_null(m_56);
                          {
                            ATerm e_2 (ATerm t)
                            {
                              ATerm k_57 = NULL,l_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL;
                              k_57 = t;
                              x_55 :
                              if(match_cons(k_57, sym_Con_3))
                                {
                                  l_57 = ATgetArgument(k_57, 0);
                                  o_57 = ATgetArgument(k_57, 1);
                                  p_57 = ATgetArgument(k_57, 2);
                                  y_55 :
                                  if(match_cons(l_57, sym_Var_1))
                                    {
                                      n_57 = ATgetArgument(l_57, 0);
                                      z_55 :
                                      if(match_cons(p_57, sym_Call_2))
                                        {
                                          q_57 = ATgetArgument(p_57, 0);
                                          r_57 = ATgetArgument(p_57, 1);
                                          a_56 :
                                          if(((ATgetType(r_57) == AT_LIST) && ATisEmpty(r_57)))
                                            {
                                              {
                                                if(((z_56 != NULL) && (z_56 != n_57)))
                                                  _fail(n_57);
                                                else
                                                  z_56 = n_57;
                                                {
                                                  if(((y_56 != NULL) && (y_56 != o_57)))
                                                    _fail(o_57);
                                                  else
                                                    y_56 = o_57;
                                                  {
                                                    if(((w_56 != NULL) && (w_56 != q_57)))
                                                      _fail(q_57);
                                                    else
                                                      w_56 = q_57;
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
                            t = oncetd_1(t, e_2);
                            {
                              s_57 = t;
                              if(((c_57 != NULL) && (c_57 != s_57)))
                                _fail(s_57);
                              else
                                c_57 = s_57;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_57)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_57), not_null(c_57), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_56), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(w_56), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_56), not_null(y_56), term_m_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_56)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_57)))))));
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
  ATerm f_2 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        {
          ATerm h_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(n_13);
            }
          else
            {
              t = h_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm u_83 (ATerm))
{
  t = u_83(t);
  {
    ATerm g_2 (ATerm t)
    {
      t = topdown_1(t, u_83);
      return(t);
    }
    t = _all(t, g_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm o_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(t_13);
          }
        else
          {
            t = o_13;
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = Bapp_0(t);
                        LocalPopChoice(x_13);
                      }
                    else
                      {
                        t = w_13;
                        {
                          ATerm y_13 = t;
                          int z_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(z_13);
                            }
                          else
                            {
                              t = y_13;
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
      t = repeat_1(t, i_2);
    }
    return(t);
  }
  t = topdown_1(t, h_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm e_58 = NULL;
  e_58 = t;
  d_58 :
  if(match_cons(e_58, sym__0))
    {
      ATerm g_58 = NULL,l_58 = NULL;
      ATerm a_14;
      a_14 = t;
      {
        ATerm h_58 = NULL;
        t = SSLgetAnnotations(not_null(e_58));
        {
          h_58 = t;
          if(((g_58 != NULL) && (g_58 != h_58)))
            _fail(h_58);
          else
            g_58 = h_58;
        }
      }
      t = a_14;
      {
        ATerm m_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(g_58));
        {
          m_58 = t;
          if(((l_58 != NULL) && (l_58 != m_58)))
            _fail(m_58);
          else
            l_58 = m_58;
        }
        t = not_null(l_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm a_59 = NULL;
  ATerm c_59 = NULL,d_59 = NULL,l_59 = NULL,n_59 = NULL;
  a_59 = t;
  {
    ATerm d_14;
    d_14 = t;
    {
      ATerm e_59 = NULL;
      ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL;
      t = not_null(a_59);
      {
        e_59 = t;
        {
          t = SSL_explode_term(not_null(e_59));
          {
            g_59 = t;
            v_58 :
            if(match_cons(g_59, sym__2))
              {
                h_59 = ATgetArgument(g_59, 0);
                i_59 = ATgetArgument(g_59, 1);
                w_58 :
                if(match_string(h_59, ""))
                  {
                    x_58 :
                    if(((ATgetType(i_59) == AT_LIST) && !(ATisEmpty(i_59))))
                      {
                        j_59 = ATgetFirst((ATermList) i_59);
                        k_59 = (ATerm) ATgetNext((ATermList) i_59);
                        {
                          if(((c_59 != NULL) && (c_59 != j_59)))
                            _fail(j_59);
                          else
                            c_59 = j_59;
                          if(((d_59 != NULL) && (d_59 != k_59)))
                            _fail(k_59);
                          else
                            d_59 = k_59;
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
    }
    t = d_14;
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm m_59 = NULL;
        t = term_p_9;
        {
          m_59 = t;
          if(((l_59 != NULL) && (l_59 != m_59)))
            _fail(m_59);
          else
            l_59 = m_59;
        }
      }
      t = g_14;
      {
        t = SSL_mkterm(not_null(l_59), not_null(d_59));
        {
          n_59 = t;
          t = not_null(n_59);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_60 = NULL;
  ATerm j_60 = NULL,k_60 = NULL;
  h_60 = t;
  {
    ATerm l_60 = NULL;
    ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
    t = not_null(h_60);
    {
      l_60 = t;
      {
        t = SSL_explode_term(not_null(l_60));
        {
          n_60 = t;
          e_60 :
          if(match_cons(n_60, sym__2))
            {
              o_60 = ATgetArgument(n_60, 0);
              p_60 = ATgetArgument(n_60, 1);
              f_60 :
              if(match_string(o_60, ""))
                {
                  g_60 :
                  if(((ATgetType(p_60) == AT_LIST) && !(ATisEmpty(p_60))))
                    {
                      q_60 = ATgetFirst((ATermList) p_60);
                      r_60 = (ATerm) ATgetNext((ATermList) p_60);
                      {
                        if(((k_60 != NULL) && (k_60 != q_60)))
                          _fail(q_60);
                        else
                          k_60 = q_60;
                        if(((j_60 != NULL) && (j_60 != r_60)))
                          _fail(r_60);
                        else
                          j_60 = r_60;
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
    t = not_null(k_60);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm o_61 = NULL,t_61 = NULL,v_61 = NULL;
  ATerm x_61 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_61 = NULL,m_61 = NULL;
        ATerm m_14;
        m_14 = t;
        {
          ATerm l_61 = NULL;
          t = map_1(t, Thd_0);
          {
            t = d_88(t);
            {
              l_61 = t;
              if(((k_61 != NULL) && (k_61 != l_61)))
                _fail(l_61);
              else
                k_61 = l_61;
            }
          }
        }
        t = m_14;
        {
          ATerm n_61 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = x_61(t);
            {
              n_61 = t;
              if(((m_61 != NULL) && (m_61 != n_61)))
                _fail(n_61);
              else
                m_61 = n_61;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(m_61)), not_null(k_61));
        }
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = x_61(t);
  {
    ATerm n_14;
    n_14 = t;
    {
      ATerm p_61 = NULL;
      p_61 = t;
      if(((o_61 != NULL) && (o_61 != p_61)))
        _fail(p_61);
      else
        o_61 = p_61;
    }
    t = n_14;
    {
      ATerm r_14;
      r_14 = t;
      {
        ATerm u_61 = NULL;
        t = term_p_9;
        {
          u_61 = t;
          if(((t_61 != NULL) && (t_61 != u_61)))
            _fail(u_61);
          else
            t_61 = u_61;
        }
      }
      t = r_14;
      {
        t = SSL_mkterm(not_null(t_61), not_null(o_61));
        {
          v_61 = t;
          t = not_null(v_61);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm g_63 = NULL;
  ATerm i_63 = NULL,v_63 = NULL,w_63 = NULL;
  g_63 = t;
  {
    ATerm x_63 = NULL;
    ATerm y_63 = NULL;
    t = new_0(t);
    {
      x_63 = t;
      {
        if(((i_63 != NULL) && (i_63 != x_63)))
          _fail(x_63);
        else
          i_63 = x_63;
        {
          ATerm z_63 = NULL;
          t = new_0(t);
          {
            y_63 = t;
            {
              if(((v_63 != NULL) && (v_63 != y_63)))
                _fail(y_63);
              else
                v_63 = y_63;
              {
                t = new_0(t);
                {
                  z_63 = t;
                  if(((w_63 != NULL) && (w_63 != z_63)))
                    _fail(z_63);
                  else
                    w_63 = z_63;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_63)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_63)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_63)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_63))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(i_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11)), not_null(v_63), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_63)), not_null(w_63), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_63)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym__2))
    {
      h_64 = ATgetArgument(g_64, 0);
      i_64 = ATgetArgument(g_64, 1);
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_64), not_null(i_64));
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            t = SSL_subtr(not_null(h_64), not_null(i_64));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm c_95 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    ATerm s_65 = NULL,o_68 = NULL,p_68 = NULL;
    s_65 = t;
    k_65 :
    if(match_cons(s_65, sym__2))
      {
        o_68 = ATgetArgument(s_65, 0);
        p_68 = ATgetArgument(s_65, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(o_68), not_null(p_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
    s_68 = t;
    m_65 :
    if(match_cons(s_68, sym__3))
      {
        t_68 = ATgetArgument(s_68, 0);
        u_68 = ATgetArgument(s_68, 1);
        v_68 = ATgetArgument(s_68, 2);
        n_65 :
        if(match_int(t_68, 0))
          {
            t = not_null(v_68);
          }
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
  ATerm l_2 (ATerm t)
  {
    ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
    y_68 = t;
    r_65 :
    if(match_cons(y_68, sym__3))
      {
        z_68 = ATgetArgument(y_68, 0);
        a_69 = ATgetArgument(y_68, 1);
        b_69 = ATgetArgument(y_68, 2);
        {
          ATerm f_69 = NULL,h_69 = NULL;
          ATerm w_14;
          w_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_68), term_q_6);
            t = geq_0(t);
          }
          t = w_14;
          {
            ATerm d_15;
            d_15 = t;
            {
              ATerm g_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_68), term_q_6);
              {
                t = subt_0(t);
                {
                  g_69 = t;
                  if(((f_69 != NULL) && (f_69 != g_69)))
                    _fail(g_69);
                  else
                    f_69 = g_69;
                }
              }
            }
            t = d_15;
            {
              ATerm i_69 = NULL;
              t = not_null(a_69);
              {
                t = c_95(t);
                {
                  i_69 = t;
                  if(((h_69 != NULL) && (h_69 != i_69)))
                    _fail(i_69);
                  else
                    h_69 = i_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(f_69), not_null(a_69), (ATerm) ATinsert(CheckATermList(not_null(b_69)), not_null(h_69)));
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
  t = for_3(t, j_2, k_2, l_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
  t_69 = t;
  s_69 :
  if(match_cons(t_69, sym__2))
    {
      u_69 = ATgetArgument(t_69, 0);
      v_69 = ATgetArgument(t_69, 1);
      {
        ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
        ATerm b_70 = NULL;
        ATerm c_70 = NULL;
        t = new_0(t);
        {
          b_70 = t;
          {
            if(((y_69 != NULL) && (y_69 != b_70)))
              _fail(b_70);
            else
              y_69 = b_70;
            {
              ATerm d_70 = NULL;
              t = new_0(t);
              {
                c_70 = t;
                {
                  if(((z_69 != NULL) && (z_69 != c_70)))
                    _fail(c_70);
                  else
                    z_69 = c_70;
                  {
                    t = new_0(t);
                    {
                      d_70 = t;
                      if(((a_70 != NULL) && (a_70 != d_70)))
                        _fail(d_70);
                      else
                        a_70 = d_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_70))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_11), term_t_11)), not_null(z_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_69)), not_null(a_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_70)));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
  n_70 = t;
  l_70 :
  if(match_cons(n_70, sym__2))
    {
      o_70 = ATgetArgument(n_70, 0);
      p_70 = ATgetArgument(n_70, 1);
      m_70 :
      if(((ATgetType(p_70) == AT_LIST) && ATisEmpty(p_70)))
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
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm v_88 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, v_88);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
  t_70 = t;
  s_70 :
  if(((ATgetType(t_70) == AT_LIST) && !(ATisEmpty(t_70))))
    {
      u_70 = ATgetFirst((ATermList) t_70);
      v_70 = (ATerm) ATgetNext((ATermList) t_70);
      t = not_null(v_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL;
  c_71 = t;
  a_71 :
  if(((ATgetType(c_71) == AT_LIST) && !(ATisEmpty(c_71))))
    {
      d_71 = ATgetFirst((ATermList) c_71);
      e_71 = (ATerm) ATgetNext((ATermList) c_71);
      b_71 :
      if(((ATgetType(e_71) == AT_LIST) && ATisEmpty(e_71)))
        {
          t = not_null(d_71);
        }
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
ATerm last_0 (ATerm t)
{
  ATerm e_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = e_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
  ATerm t_74 (ATerm t)
  {
    ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,r_73 = NULL;
    ATerm n_15;
    n_15 = t;
    {
      ATerm v_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL;
      ATerm w_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_72), term_q_6);
      {
        t = add_0(t);
        {
          w_72 = t;
          if(((v_72 != NULL) && (v_72 != w_72)))
            _fail(w_72);
          else
            v_72 = w_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_72), term_o_15);
        {
          t = copy_1(t, new_0);
          {
            x_72 = t;
            q_71 :
            if(((ATgetType(x_72) == AT_LIST) && !(ATisEmpty(x_72))))
              {
                y_72 = ATgetFirst((ATermList) x_72);
                z_72 = (ATerm) ATgetNext((ATermList) x_72);
                {
                  ATerm a_73 = NULL;
                  if(((n_72 != NULL) && (n_72 != y_72)))
                    _fail(y_72);
                  else
                    n_72 = y_72;
                  {
                    if(((o_72 != NULL) && (o_72 != z_72)))
                      _fail(z_72);
                    else
                      o_72 = z_72;
                    {
                      t = not_null(o_72);
                      {
                        ATerm b_73 = NULL,c_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL;
                        t = last_0(t);
                        {
                          a_73 = t;
                          {
                            if(((m_72 != NULL) && (m_72 != a_73)))
                              _fail(a_73);
                            else
                              m_72 = a_73;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_72)), not_null(n_72)), not_null(o_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    b_73 = t;
                                    p_71 :
                                    if(match_cons(b_73, sym__6))
                                      {
                                        c_73 = ATgetArgument(b_73, 0);
                                        m_73 = ATgetArgument(b_73, 1);
                                        n_73 = ATgetArgument(b_73, 2);
                                        o_73 = ATgetArgument(b_73, 3);
                                        p_73 = ATgetArgument(b_73, 4);
                                        q_73 = ATgetArgument(b_73, 5);
                                        {
                                          if(((p_72 != NULL) && (p_72 != c_73)))
                                            _fail(c_73);
                                          else
                                            p_72 = c_73;
                                          {
                                            if(((q_72 != NULL) && (q_72 != m_73)))
                                              _fail(m_73);
                                            else
                                              q_72 = m_73;
                                            {
                                              if(((r_72 != NULL) && (r_72 != n_73)))
                                                _fail(n_73);
                                              else
                                                r_72 = n_73;
                                              {
                                                if(((s_72 != NULL) && (s_72 != o_73)))
                                                  _fail(o_73);
                                                else
                                                  s_72 = o_73;
                                                {
                                                  if(((t_72 != NULL) && (t_72 != p_73)))
                                                    _fail(p_73);
                                                  else
                                                    t_72 = p_73;
                                                  if(((u_72 != NULL) && (u_72 != q_73)))
                                                    _fail(q_73);
                                                  else
                                                    u_72 = q_73;
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
    t = n_15;
    {
      ATerm s_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_72)), not_null(r_72)), not_null(o_72));
      {
        t = concat_0(t);
        {
          s_73 = t;
          if(((r_73 != NULL) && (r_73 != s_73)))
            _fail(s_73);
          else
            r_73 = s_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_72), term_p_15), not_null(q_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(r_73)), not_null(n_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_72), not_null(s_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_72), not_null(u_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(p_72))))));
    }
    return(t);
  }
  ATerm u_74 (ATerm t)
  {
    ATerm u_73 = NULL;
    ATerm v_73 = NULL;
    t = new_0(t);
    {
      v_73 = t;
      if(((u_73 != NULL) && (u_73 != v_73)))
        _fail(v_73);
      else
        u_73 = v_73;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_72), term_p_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_72), (ATerm) ATempty))), term_m_11))));
    return(t);
  }
  ATerm v_74 (ATerm t)
  {
    ATerm a_74 = NULL,b_74 = NULL,d_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,r_74 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm j_74 = NULL;
      ATerm k_74 = NULL,l_74 = NULL,m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL;
      t = new_0(t);
      {
        j_74 = t;
        {
          if(((a_74 != NULL) && (a_74 != j_74)))
            _fail(j_74);
          else
            a_74 = j_74;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_74)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  k_74 = t;
                  z_71 :
                  if(match_cons(k_74, sym__6))
                    {
                      l_74 = ATgetArgument(k_74, 0);
                      m_74 = ATgetArgument(k_74, 1);
                      n_74 = ATgetArgument(k_74, 2);
                      o_74 = ATgetArgument(k_74, 3);
                      p_74 = ATgetArgument(k_74, 4);
                      q_74 = ATgetArgument(k_74, 5);
                      {
                        if(((b_74 != NULL) && (b_74 != l_74)))
                          _fail(l_74);
                        else
                          b_74 = l_74;
                        {
                          if(((d_74 != NULL) && (d_74 != m_74)))
                            _fail(m_74);
                          else
                            d_74 = m_74;
                          {
                            if(((f_74 != NULL) && (f_74 != n_74)))
                              _fail(n_74);
                            else
                              f_74 = n_74;
                            {
                              if(((g_74 != NULL) && (g_74 != o_74)))
                                _fail(o_74);
                              else
                                g_74 = o_74;
                              {
                                if(((h_74 != NULL) && (h_74 != p_74)))
                                  _fail(p_74);
                                else
                                  h_74 = p_74;
                                if(((i_74 != NULL) && (i_74 != q_74)))
                                  _fail(q_74);
                                else
                                  i_74 = q_74;
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
      }
    }
    t = q_15;
    {
      ATerm s_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_74), not_null(h_74));
      {
        t = conc_0(t);
        {
          s_74 = t;
          if(((r_74 != NULL) && (r_74 != s_74)))
            _fail(s_74);
          else
            r_74 = s_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(h_72), term_r_15), not_null(d_74), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(r_74)), not_null(a_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(h_72), not_null(g_74)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(h_72), not_null(i_74)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_74))))));
    }
    return(t);
  }
  g_72 = t;
  d_72 :
  if(match_cons(g_72, sym__3))
    {
      h_72 = ATgetArgument(g_72, 0);
      i_72 = ATgetArgument(g_72, 1);
      j_72 = ATgetArgument(g_72, 2);
      e_72 :
      if(match_string(i_72, "T"))
        {
          f_72 :
          if(match_int(j_72, 0))
            {
              ATerm s_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_74(t);
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = s_15;
                  t = u_74(t);
                }
            }
          else
            {
              t = t_74(t);
            }
        }
      else
        {
          if(match_string(i_72, "D"))
            {
              t = v_74(t);
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
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
  t_75 = t;
  q_75 :
  if(match_cons(t_75, sym__2))
    {
      u_75 = ATgetArgument(t_75, 0);
      z_75 = ATgetArgument(t_75, 1);
      r_75 :
      if(match_cons(u_75, sym__2))
        {
          v_75 = ATgetArgument(u_75, 0);
          y_75 = ATgetArgument(u_75, 1);
          s_75 :
          if(match_cons(v_75, sym_Mod_2))
            {
              w_75 = ATgetArgument(v_75, 0);
              x_75 = ATgetArgument(v_75, 1);
              {
                ATerm e_76 = NULL;
                ATerm f_76 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(w_75), not_null(x_75), not_null(y_75));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      f_76 = t;
                      if(((e_76 != NULL) && (e_76 != f_76)))
                        _fail(f_76);
                      else
                        e_76 = f_76;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_76), not_null(z_75));
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
ATerm get_definition_0 (ATerm t)
{
  ATerm d_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = d_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  l_76 = t;
  j_76 :
  if(match_cons(l_76, sym__5))
    {
      m_76 = ATgetArgument(l_76, 0);
      p_76 = ATgetArgument(l_76, 1);
      q_76 = ATgetArgument(l_76, 2);
      r_76 = ATgetArgument(l_76, 3);
      s_76 = ATgetArgument(l_76, 4);
      k_76 :
      if(((ATgetType(m_76) == AT_LIST) && !(ATisEmpty(m_76))))
        {
          n_76 = ATgetFirst((ATermList) m_76);
          o_76 = (ATerm) ATgetNext((ATermList) m_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(o_76), not_null(p_76), not_null(q_76), not_null(r_76), (ATerm) ATinsert(CheckATermList(not_null(s_76)), not_null(n_76)));
        }
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
ATerm diff_1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  b_77 :
  if(match_cons(c_77, sym__2))
    {
      d_77 = ATgetArgument(c_77, 0);
      e_77 = ATgetArgument(c_77, 1);
      {
        t = not_null(d_77);
        {
          ATerm k_77 (ATerm t)
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                {
                  ATerm o_16 = t;
                  int p_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = not_null(e_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_93, m_2);
                      t = k_77(t);
                      LocalPopChoice(p_16);
                    }
                  else
                    {
                      t = o_16;
                      t = Cons_2(t, _id, k_77);
                    }
                }
              }
            return(t);
          }
          t = k_77(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL;
  o_77 = t;
  m_77 :
  if(match_cons(o_77, sym__2))
    {
      p_77 = ATgetArgument(o_77, 0);
      q_77 = ATgetArgument(o_77, 1);
      n_77 :
      if(((ATgetType(q_77) == AT_LIST) && !(ATisEmpty(q_77))))
        {
          r_77 = ATgetFirst((ATermList) q_77);
          s_77 = (ATerm) ATgetNext((ATermList) q_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_77)), not_null(r_77)), not_null(s_77));
        }
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
ATerm Zip3_0 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL;
  z_77 = t;
  y_77 :
  if(match_cons(z_77, sym__2))
    {
      a_78 = ATgetArgument(z_77, 0);
      b_78 = ATgetArgument(z_77, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(b_78)), not_null(a_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  j_78 = t;
  g_78 :
  if(match_cons(j_78, sym__2))
    {
      k_78 = ATgetArgument(j_78, 0);
      n_78 = ATgetArgument(j_78, 1);
      h_78 :
      if(((ATgetType(k_78) == AT_LIST) && !(ATisEmpty(k_78))))
        {
          l_78 = ATgetFirst((ATermList) k_78);
          m_78 = (ATerm) ATgetNext((ATermList) k_78);
          i_78 :
          if(((ATgetType(n_78) == AT_LIST) && !(ATisEmpty(n_78))))
            {
              o_78 = ATgetFirst((ATermList) n_78);
              p_78 = (ATerm) ATgetNext((ATermList) n_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_78), not_null(o_78)), (ATerm) ATmakeAppl(sym__2, not_null(m_78), not_null(p_78)));
            }
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
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  z_78 = t;
  w_78 :
  if(match_cons(z_78, sym__2))
    {
      a_79 = ATgetArgument(z_78, 0);
      b_79 = ATgetArgument(z_78, 1);
      x_78 :
      if(((ATgetType(a_79) == AT_LIST) && ATisEmpty(a_79)))
        {
          y_78 :
          if(((ATgetType(b_79) == AT_LIST) && ATisEmpty(b_79)))
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
ATerm genzip_4 (ATerm t, ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm))
{
  ATerm d_79 (ATerm t)
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_88(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        {
          t = o_88(t);
          {
            t = _2(t, q_88, d_79);
            t = p_88(t);
          }
        }
      }
    return(t);
  }
  t = d_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_88 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_88);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
  o_79 = t;
  m_79 :
  if(((ATgetType(o_79) == AT_LIST) && !(ATisEmpty(o_79))))
    {
      p_79 = ATgetFirst((ATermList) o_79);
      s_79 = (ATerm) ATgetNext((ATermList) o_79);
      n_79 :
      if(match_cons(p_79, sym__2))
        {
          q_79 = ATgetArgument(p_79, 0);
          r_79 = ATgetArgument(p_79, 1);
          {
            ATerm w_79 = NULL,x_79 = NULL,d_80 = NULL,j_80 = NULL;
            ATerm w_16;
            w_16 = t;
            {
              ATerm y_79 = NULL;
              ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
              t = not_null(r_79);
              {
                y_79 = t;
                {
                  t = SSL_explode_term(not_null(y_79));
                  {
                    a_80 = t;
                    h_79 :
                    if(match_cons(a_80, sym__2))
                      {
                        b_80 = ATgetArgument(a_80, 0);
                        c_80 = ATgetArgument(a_80, 1);
                        {
                          if(((w_79 != NULL) && (w_79 != b_80)))
                            _fail(b_80);
                          else
                            w_79 = b_80;
                          if(((x_79 != NULL) && (x_79 != c_80)))
                            _fail(c_80);
                          else
                            x_79 = c_80;
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
            t = w_16;
            {
              ATerm e_17;
              e_17 = t;
              {
                ATerm e_80 = NULL;
                ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL;
                t = not_null(q_79);
                {
                  e_80 = t;
                  {
                    t = SSL_explode_term(not_null(e_80));
                    {
                      g_80 = t;
                      k_79 :
                      if(match_cons(g_80, sym__2))
                        {
                          h_80 = ATgetArgument(g_80, 0);
                          i_80 = ATgetArgument(g_80, 1);
                          {
                            if(((w_79 != NULL) && (w_79 != h_80)))
                              _fail(h_80);
                            else
                              w_79 = h_80;
                            if(((d_80 != NULL) && (d_80 != i_80)))
                              _fail(i_80);
                            else
                              d_80 = i_80;
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
              t = e_17;
              {
                ATerm k_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_80), not_null(x_79));
                {
                  t = zip_1(t, _id);
                  {
                    k_80 = t;
                    if(((j_80 != NULL) && (j_80 != k_80)))
                      _fail(k_80);
                    else
                      j_80 = k_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_80), not_null(s_79));
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
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL;
  u_80 = t;
  s_80 :
  if(((ATgetType(u_80) == AT_LIST) && !(ATisEmpty(u_80))))
    {
      v_80 = ATgetFirst((ATermList) u_80);
      y_80 = (ATerm) ATgetNext((ATermList) u_80);
      t_80 :
      if(match_cons(v_80, sym__2))
        {
          w_80 = ATgetArgument(v_80, 0);
          x_80 = ATgetArgument(v_80, 1);
          {
            ATerm a_81 = NULL;
            if(((w_80 != NULL) && (w_80 != x_80)))
              _fail(x_80);
            else
              w_80 = x_80;
            {
              if(((a_81 != NULL) && (a_81 != y_80)))
                _fail(y_80);
              else
                a_81 = y_80;
              t = not_null(a_81);
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
ATerm diff_0 (ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        ATerm d_81 = NULL;
        d_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(d_81));
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              ATerm q_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = q_17;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, q_2);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, n_2, o_2, p_2);
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm))
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL;
  q_81 = t;
  o_81 :
  if(match_cons(q_81, sym__5))
    {
      r_81 = ATgetArgument(q_81, 0);
      u_81 = ATgetArgument(q_81, 1);
      v_81 = ATgetArgument(q_81, 2);
      w_81 = ATgetArgument(q_81, 3);
      x_81 = ATgetArgument(q_81, 4);
      p_81 :
      if(((ATgetType(r_81) == AT_LIST) && !(ATisEmpty(r_81))))
        {
          s_81 = ATgetFirst((ATermList) r_81);
          t_81 = (ATerm) ATgetNext((ATermList) r_81);
          {
            ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,n_82 = NULL,p_82 = NULL,r_82 = NULL;
            ATerm c_18;
            c_18 = t;
            {
              ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_81), not_null(v_81));
              {
                t = e_111(t);
                {
                  i_82 = t;
                  k_81 :
                  if(match_cons(i_82, sym__2))
                    {
                      j_82 = ATgetArgument(i_82, 0);
                      k_82 = ATgetArgument(i_82, 1);
                      {
                        ATerm l_82 = NULL;
                        if(((f_82 != NULL) && (f_82 != j_82)))
                          _fail(j_82);
                        else
                          f_82 = j_82;
                        {
                          if(((e_82 != NULL) && (e_82 != k_82)))
                            _fail(k_82);
                          else
                            e_82 = k_82;
                          {
                            t = not_null(f_82);
                            {
                              ATerm m_82 = NULL;
                              t = f_111(t);
                              {
                                l_82 = t;
                                {
                                  if(((g_82 != NULL) && (g_82 != l_82)))
                                    _fail(l_82);
                                  else
                                    g_82 = l_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_82), not_null(u_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        m_82 = t;
                                        if(((h_82 != NULL) && (h_82 != m_82)))
                                          _fail(m_82);
                                        else
                                          h_82 = m_82;
                                      }
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
              }
            }
            t = c_18;
            {
              ATerm e_18;
              e_18 = t;
              {
                ATerm o_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_82), not_null(t_81));
                {
                  t = conc_0(t);
                  {
                    o_82 = t;
                    if(((n_82 != NULL) && (n_82 != o_82)))
                      _fail(o_82);
                    else
                      n_82 = o_82;
                  }
                }
              }
              t = e_18;
              {
                ATerm f_18;
                f_18 = t;
                {
                  ATerm q_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_82), not_null(u_81));
                  {
                    t = conc_0(t);
                    {
                      q_82 = t;
                      if(((p_82 != NULL) && (p_82 != q_82)))
                        _fail(q_82);
                      else
                        p_82 = q_82;
                    }
                  }
                }
                t = f_18;
                {
                  ATerm s_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_81), not_null(f_82), not_null(w_81));
                  {
                    t = g_111(t);
                    {
                      s_82 = t;
                      if(((r_82 != NULL) && (r_82 != s_82)))
                        _fail(s_82);
                      else
                        r_82 = s_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(n_82), not_null(p_82), not_null(e_82), not_null(r_82), not_null(x_81));
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
ATerm GnExit_0 (ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL;
  j_83 = t;
  h_83 :
  if(match_cons(j_83, sym__5))
    {
      k_83 = ATgetArgument(j_83, 0);
      l_83 = ATgetArgument(j_83, 1);
      m_83 = ATgetArgument(j_83, 2);
      n_83 = ATgetArgument(j_83, 3);
      o_83 = ATgetArgument(j_83, 4);
      i_83 :
      if(((ATgetType(k_83) == AT_LIST) && ATisEmpty(k_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_83), not_null(o_83));
        }
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL;
  z_83 = t;
  y_83 :
  if(match_cons(z_83, sym__3))
    {
      a_84 = ATgetArgument(z_83, 0);
      b_84 = ATgetArgument(z_83, 1);
      c_84 = ATgetArgument(z_83, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(a_84), not_null(a_84), not_null(b_84), not_null(c_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_100 (ATerm), ATerm m_100 (ATerm))
{
  ATerm h_84 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          t = m_100(t);
          t = h_84(t);
        }
      }
    return(t);
  }
  t = h_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm))
{
  t = o_100(t);
  t = while_not_2(t, p_100, q_100);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm p_110 (ATerm), ATerm q_110 (ATerm), ATerm r_110 (ATerm))
{
  ATerm r_2 (ATerm t)
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, p_110, q_110, r_110);
        LocalPopChoice(k_18);
      }
    else
      {
        t = i_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, r_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm u_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, u_2);
    }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
    k_84 = t;
    j_84 :
    if(match_cons(k_84, sym__3))
      {
        l_84 = ATgetArgument(k_84, 0);
        m_84 = ATgetArgument(k_84, 1);
        n_84 = ATgetArgument(k_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(n_84)), not_null(m_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, s_2, t_2);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_q_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_111 (ATerm))
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL;
  w_84 = t;
  v_84 :
  if(match_cons(w_84, sym__2))
    {
      x_84 = ATgetArgument(w_84, 0);
      y_84 = ATgetArgument(w_84, 1);
      {
        ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
        ATerm r_18;
        r_18 = t;
        {
          ATerm e_85 = NULL;
          ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
          t = n_111(t);
          {
            e_85 = t;
            {
              if(((b_85 != NULL) && (b_85 != e_85)))
                _fail(e_85);
              else
                b_85 = e_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(b_85), not_null(x_84), not_null(y_84));
                {
                  t = table_push_0(t);
                  {
                    ATerm t_18 = t;
                    int u_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_85), term_v_18);
                        t = table_get_0(t);
                        LocalPopChoice(u_18);
                      }
                    else
                      {
                        t = t_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      f_85 = t;
                      u_84 :
                      if(((ATgetType(f_85) == AT_LIST) && !(ATisEmpty(f_85))))
                        {
                          g_85 = ATgetFirst((ATermList) f_85);
                          h_85 = (ATerm) ATgetNext((ATermList) f_85);
                          {
                            if(((c_85 != NULL) && (c_85 != g_85)))
                              _fail(g_85);
                            else
                              c_85 = g_85;
                            {
                              if(((d_85 != NULL) && (d_85 != h_85)))
                                _fail(h_85);
                              else
                                d_85 = h_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(b_85), term_v_18, (ATerm) ATinsert(CheckATermList(not_null(d_85)), (ATerm) ATinsert(CheckATermList(not_null(c_85)), not_null(x_84))));
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
        t = r_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
  p_85 = t;
  o_85 :
  if(match_cons(p_85, sym__2))
    {
      q_85 = ATgetArgument(p_85, 0);
      r_85 = ATgetArgument(p_85, 1);
      if(((q_85 != NULL) && (q_85 != r_85)))
        _fail(r_85);
      else
        q_85 = r_85;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_94 (ATerm), ATerm b_94 (ATerm))
{
  ATerm x_85 = NULL,a_86 = NULL,b_86 = NULL;
  x_85 = t;
  w_85 :
  if(((ATgetType(x_85) == AT_LIST) && !(ATisEmpty(x_85))))
    {
      a_86 = ATgetFirst((ATermList) x_85);
      b_86 = (ATerm) ATgetNext((ATermList) x_85);
      {
        t = b_94(t);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm e_86 = NULL;
            e_86 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_86), not_null(e_86));
              t = a_94(t);
            }
            return(t);
          }
          t = fetch_1(t, v_2);
        }
        t = not_null(b_86);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_93 (ATerm))
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL;
  k_86 = t;
  j_86 :
  if(match_cons(k_86, sym__2))
    {
      l_86 = ATgetArgument(k_86, 0);
      m_86 = ATgetArgument(k_86, 1);
      {
        t = not_null(l_86);
        {
          ATerm q_86 (ATerm t)
          {
            ATerm b_19 = t;
            int d_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(m_86);
                LocalPopChoice(d_19);
              }
            else
              {
                t = b_19;
                {
                  ATerm e_19 = t;
                  int f_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = not_null(m_86);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_93, w_2);
                      t = q_86(t);
                      LocalPopChoice(f_19);
                    }
                  else
                    {
                      t = e_19;
                      t = Cons_2(t, _id, q_86);
                    }
                }
              }
            return(t);
          }
          t = q_86(t);
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
ATerm Arities_0 (ATerm t)
{
  ATerm v_86 = NULL;
  ATerm z_86 = NULL;
  v_86 = t;
  {
    ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
    t = not_null(v_86);
    {
      ATerm x_2 (ATerm t)
      {
        t = term_g_19;
        return(t);
      }
      t = rewrite_1(t, x_2);
      {
        a_87 = t;
        t_86 :
        if(match_cons(a_87, sym_Defined_2))
          {
            b_87 = ATgetArgument(a_87, 0);
            c_87 = ATgetArgument(a_87, 1);
            u_86 :
            if(match_string(b_87, "f_0"))
              {
                if(((z_86 != NULL) && (z_86 != c_87)))
                  _fail(c_87);
                else
                  z_86 = c_87;
              }
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
    t = not_null(z_86);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
  h_87 = t;
  g_87 :
  if(((ATgetType(h_87) == AT_LIST) && !(ATisEmpty(h_87))))
    {
      i_87 = ATgetFirst((ATermList) h_87);
      j_87 = (ATerm) ATgetNext((ATermList) h_87);
      t = not_null(i_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL;
  r_87 = t;
  q_87 :
  if(match_cons(r_87, sym__2))
    {
      s_87 = ATgetArgument(r_87, 0);
      t_87 = ATgetArgument(r_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_87), not_null(t_87));
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
ATerm rewrite_1 (ATerm t, ATerm p_111 (ATerm))
{
  ATerm z_87 = NULL;
  ATerm b_88 = NULL;
  z_87 = t;
  {
    ATerm c_88 = NULL;
    t = term_o_15;
    {
      t = p_111(t);
      {
        c_88 = t;
        if(((b_88 != NULL) && (b_88 != c_88)))
          _fail(c_88);
        else
          b_88 = c_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_88), not_null(z_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm m_88 = NULL,t_88 = NULL,u_88 = NULL;
  m_88 = t;
  l_88 :
  if(match_cons(m_88, sym__2))
    {
      t_88 = ATgetArgument(m_88, 0);
      u_88 = ATgetArgument(m_88, 1);
      {
        ATerm a_89 = NULL,b_89 = NULL;
        ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL;
        t = not_null(m_88);
        {
          ATerm y_2 (ATerm t)
          {
            t = term_h_19;
            return(t);
          }
          t = rewrite_1(t, y_2);
          {
            c_89 = t;
            j_88 :
            if(match_cons(c_89, sym_Defined_3))
              {
                d_89 = ATgetArgument(c_89, 0);
                e_89 = ATgetArgument(c_89, 1);
                f_89 = ATgetArgument(c_89, 2);
                k_88 :
                if(match_string(d_89, "d_0"))
                  {
                    if(((a_89 != NULL) && (a_89 != e_89)))
                      _fail(e_89);
                    else
                      a_89 = e_89;
                    if(((b_89 != NULL) && (b_89 != f_89)))
                      _fail(f_89);
                    else
                      b_89 = f_89;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(b_89)), not_null(a_89));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm r_94 (ATerm))
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_94(t);
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL;
        m_89 = t;
        l_89 :
        if(((ATgetType(m_89) == AT_LIST) && !(ATisEmpty(m_89))))
          {
            n_89 = ATgetFirst((ATermList) m_89);
            o_89 = (ATerm) ATgetNext((ATermList) m_89);
            {
              ATerm r_89 = NULL,t_89 = NULL;
              ATerm m_19;
              m_19 = t;
              {
                ATerm s_89 = NULL;
                t = not_null(n_89);
                {
                  t = r_94(t);
                  {
                    s_89 = t;
                    if(((r_89 != NULL) && (r_89 != s_89)))
                      _fail(s_89);
                    else
                      r_89 = s_89;
                  }
                }
              }
              t = m_19;
              {
                ATerm u_89 = NULL;
                t = not_null(o_89);
                {
                  t = foldr_3(t, p_94, q_94, r_94);
                  {
                    u_89 = t;
                    if(((t_89 != NULL) && (t_89 != u_89)))
                      _fail(u_89);
                    else
                      t_89 = u_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_89), not_null(t_89));
                  t = q_94(t);
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
  ATerm z_2 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_q_6;
    return(t);
  }
  t = foldr_3(t, z_2, add_0, a_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,m_90 = NULL;
    h_90 = t;
    g_90 :
    if(match_cons(h_90, sym_SDef_3))
      {
        i_90 = ATgetArgument(h_90, 0);
        j_90 = ATgetArgument(h_90, 1);
        m_90 = ATgetArgument(h_90, 2);
        {
          ATerm t_90 = NULL,u_90 = NULL,v_90 = NULL;
          ATerm s_19;
          s_19 = t;
          {
            ATerm w_90 = NULL;
            t = not_null(j_90);
            {
              ATerm x_90 = NULL;
              t = length_0(t);
              {
                w_90 = t;
                {
                  if(((u_90 != NULL) && (u_90 != w_90)))
                    _fail(w_90);
                  else
                    u_90 = w_90;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_90), not_null(u_90));
                    {
                      ATerm y_90 = NULL,a_91 = NULL;
                      ATerm t_19 = t;
                      int u_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(u_19);
                        }
                      else
                        {
                          t = t_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        x_90 = t;
                        {
                          if(((t_90 != NULL) && (t_90 != x_90)))
                            _fail(x_90);
                          else
                            t_90 = x_90;
                          {
                            ATerm z_90 = NULL;
                            t = not_null(i_90);
                            {
                              ATerm v_19 = t;
                              int w_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(w_19);
                                }
                              else
                                {
                                  t = v_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                z_90 = t;
                                if(((y_90 != NULL) && (y_90 != z_90)))
                                  _fail(z_90);
                                else
                                  y_90 = z_90;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(u_90)), not_null(y_90));
                              {
                                t = union_0(t);
                                {
                                  a_91 = t;
                                  {
                                    if(((v_90 != NULL) && (v_90 != a_91)))
                                      _fail(a_91);
                                    else
                                      v_90 = a_91;
                                    {
                                      ATerm x_19;
                                      x_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_90), not_null(u_90)), (ATerm) ATmakeAppl(sym_Defined_3, term_y_19, not_null(h_90), not_null(t_90)));
                                        {
                                          ATerm c_3 (ATerm t)
                                          {
                                            t = term_h_19;
                                            return(t);
                                          }
                                          t = assert_1(t, c_3);
                                        }
                                      }
                                      t = x_19;
                                      {
                                        ATerm z_19;
                                        z_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_90), (ATerm) ATmakeAppl(sym_Defined_2, term_e_20, not_null(v_90)));
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = term_g_19;
                                              return(t);
                                            }
                                            t = assert_1(t, d_3);
                                          }
                                        }
                                        t = z_19;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = s_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, b_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm h_91 = NULL;
  ATerm i_91 = NULL;
  t = sort_defs_0(t);
  {
    i_91 = t;
    if(((h_91 != NULL) && (h_91 != i_91)))
      _fail(i_91);
    else
      h_91 = i_91;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_g_20), not_null(h_91), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm p_91 = NULL,q_91 = NULL;
  p_91 = t;
  o_91 :
  if(match_cons(p_91, sym_Strategies_1))
    {
      q_91 = ATgetArgument(p_91, 0);
      {
        ATerm t_91 = NULL,v_91 = NULL;
        ATerm u_91 = NULL;
        t = SSLgetAnnotations(not_null(p_91));
        {
          u_91 = t;
          if(((t_91 != NULL) && (t_91 != u_91)))
            _fail(u_91);
          else
            t_91 = u_91;
        }
        {
          t = not_null(q_91);
          {
            ATerm x_91 = NULL;
            t = c_74(t);
            {
              v_91 = t;
              {
                ATerm y_91 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(v_91)), not_null(t_91));
                {
                  y_91 = t;
                  if(((x_91 != NULL) && (x_91 != y_91)))
                    _fail(y_91);
                  else
                    x_91 = y_91;
                }
                t = not_null(x_91);
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
ATerm Cons_2 (ATerm t, ATerm r_71 (ATerm), ATerm s_71 (ATerm))
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
  j_92 = t;
  i_92 :
  if(((ATgetType(j_92) == AT_LIST) && !(ATisEmpty(j_92))))
    {
      k_92 = ATgetFirst((ATermList) j_92);
      l_92 = (ATerm) ATgetNext((ATermList) j_92);
      {
        ATerm p_92 = NULL,r_92 = NULL;
        ATerm q_92 = NULL;
        t = SSLgetAnnotations(not_null(j_92));
        {
          q_92 = t;
          if(((p_92 != NULL) && (p_92 != q_92)))
            _fail(q_92);
          else
            p_92 = q_92;
        }
        {
          t = not_null(k_92);
          {
            ATerm t_92 = NULL;
            t = r_71(t);
            {
              r_92 = t;
              {
                t = not_null(l_92);
                {
                  ATerm v_92 = NULL;
                  t = s_71(t);
                  {
                    t_92 = t;
                    {
                      ATerm w_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_92)), not_null(r_92)), not_null(p_92));
                      {
                        w_92 = t;
                        if(((v_92 != NULL) && (v_92 != w_92)))
                          _fail(w_92);
                        else
                          v_92 = w_92;
                      }
                      t = not_null(v_92);
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
ATerm Specification_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm h_93 = NULL,i_93 = NULL;
  h_93 = t;
  g_93 :
  if(match_cons(h_93, sym_Specification_1))
    {
      i_93 = ATgetArgument(h_93, 0);
      {
        ATerm q_93 = NULL,u_93 = NULL;
        ATerm r_93 = NULL;
        t = SSLgetAnnotations(not_null(h_93));
        {
          r_93 = t;
          if(((q_93 != NULL) && (q_93 != r_93)))
            _fail(r_93);
          else
            q_93 = r_93;
        }
        {
          t = not_null(i_93);
          {
            ATerm y_93 = NULL;
            t = e_74(t);
            {
              u_93 = t;
              {
                ATerm z_93 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(u_93)), not_null(q_93));
                {
                  z_93 = t;
                  if(((y_93 != NULL) && (y_93 != z_93)))
                    _fail(z_93);
                  else
                    y_93 = z_93;
                }
                t = not_null(y_93);
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
ATerm _2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
  s_94 = t;
  m_94 :
  if(match_cons(s_94, sym__2))
    {
      t_94 = ATgetArgument(s_94, 0);
      u_94 = ATgetArgument(s_94, 1);
      {
        ATerm y_94 = NULL,a_95 = NULL;
        ATerm z_94 = NULL;
        t = SSLgetAnnotations(not_null(s_94));
        {
          z_94 = t;
          if(((y_94 != NULL) && (y_94 != z_94)))
            _fail(z_94);
          else
            y_94 = z_94;
        }
        {
          t = not_null(t_94);
          {
            ATerm e_95 = NULL;
            t = i_70(t);
            {
              a_95 = t;
              {
                t = not_null(u_94);
                {
                  ATerm g_95 = NULL;
                  t = j_70(t);
                  {
                    e_95 = t;
                    {
                      ATerm h_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(a_95), not_null(e_95)), not_null(y_94));
                      {
                        h_95 = t;
                        if(((g_95 != NULL) && (g_95 != h_95)))
                          _fail(h_95);
                        else
                          g_95 = h_95;
                      }
                      t = not_null(g_95);
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
  ATerm p_95 = NULL;
  ATerm k_20;
  k_20 = t;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm q_95 = NULL,r_95 = NULL;
      q_95 = t;
      o_95 :
      if(match_cons(q_95, sym_Program_1))
        {
          r_95 = ATgetArgument(q_95, 0);
          if(((p_95 != NULL) && (p_95 != r_95)))
            _fail(r_95);
          else
            p_95 = r_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_20), not_null(p_95)), term_m_20));
      {
        t = printnl_0(t);
        {
          t = term_q_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
  v_95 = t;
  u_95 :
  if(match_cons(v_95, sym__2))
    {
      w_95 = ATgetArgument(v_95, 0);
      x_95 = ATgetArgument(v_95, 1);
      {
        ATerm q_20;
        q_20 = t;
        t = SSL_printnl(not_null(w_95), not_null(x_95));
        t = q_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm c_96 = NULL;
  c_96 = t;
  t = SSL_implode_string(not_null(c_96));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL;
        h_96 = t;
        g_96 :
        if(((ATgetType(h_96) == AT_LIST) && !(ATisEmpty(h_96))))
          {
            i_96 = ATgetFirst((ATermList) h_96);
            j_96 = (ATerm) ATgetNext((ATermList) h_96);
            {
              t = not_null(i_96);
              {
                ATerm f_3 (ATerm t)
                {
                  t = not_null(j_96);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_3);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm t_96 = NULL;
  ATerm v_96 = NULL;
  t_96 = t;
  {
    ATerm w_96 = NULL;
    ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL;
    t = not_null(t_96);
    {
      w_96 = t;
      {
        t = SSL_explode_term(not_null(w_96));
        {
          y_96 = t;
          r_96 :
          if(match_cons(y_96, sym__2))
            {
              z_96 = ATgetArgument(y_96, 0);
              a_97 = ATgetArgument(y_96, 1);
              s_96 :
              if(match_string(z_96, ""))
                {
                  if(((v_96 != NULL) && (v_96 != a_97)))
                    _fail(a_97);
                  else
                    v_96 = a_97;
                }
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
    {
      t = not_null(v_96);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_90 (ATerm))
{
  ATerm e_97 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_97);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        {
          t = Nil_0(t);
          t = q_90(t);
        }
      }
    return(t);
  }
  t = e_97(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL;
  h_97 = t;
  g_97 :
  if(match_cons(h_97, sym__2))
    {
      i_97 = ATgetArgument(h_97, 0);
      j_97 = ATgetArgument(h_97, 1);
      {
        t = not_null(i_97);
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(j_97);
            return(t);
          }
          t = at_end_1(t, g_3);
        }
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
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_97 = NULL;
  o_97 = t;
  t = SSL_explode_string(not_null(o_97));
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
ATerm debug_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm y_20;
  y_20 = t;
  {
    ATerm t_97 = NULL,v_97 = NULL;
    ATerm z_20;
    z_20 = t;
    {
      ATerm u_97 = NULL;
      t = r_103(t);
      {
        u_97 = t;
        if(((t_97 != NULL) && (t_97 != u_97)))
          _fail(u_97);
        else
          t_97 = u_97;
      }
    }
    t = z_20;
    {
      ATerm w_97 = NULL;
      w_97 = t;
      if(((v_97 != NULL) && (v_97 != w_97)))
        _fail(w_97);
      else
        v_97 = w_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_97)), not_null(t_97)));
        t = printnl_0(t);
      }
    }
  }
  t = y_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_98 = NULL;
  f_98 = t;
  t = SSL_is_string(not_null(f_98));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = a_21;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_3);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
              o_98 = t;
              n_98 :
              if(match_cons(o_98, sym_Path_1))
                {
                  p_98 = ATgetArgument(o_98, 0);
                  t = not_null(p_98);
                }
              else
                {
                  if(match_cons(o_98, sym_Var_1))
                    {
                      p_98 = ATgetArgument(o_98, 0);
                      {
                        t = not_null(p_98);
                        {
                          ATerm o_21 = t;
                          int p_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_21);
                            }
                          else
                            {
                              t = o_21;
                              {
                                ATerm k_3 (ATerm t)
                                {
                                  t = term_q_21;
                                  return(t);
                                }
                                t = debug_1(t, k_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_98, sym_Prefix_2))
                        {
                          p_98 = ATgetArgument(o_98, 0);
                          q_98 = ATgetArgument(o_98, 1);
                          {
                            ATerm v_98 = NULL,x_98 = NULL;
                            ATerm r_21;
                            r_21 = t;
                            {
                              ATerm w_98 = NULL;
                              t = not_null(p_98);
                              {
                                t = eval_config_0(t);
                                {
                                  w_98 = t;
                                  if(((v_98 != NULL) && (v_98 != w_98)))
                                    _fail(w_98);
                                  else
                                    v_98 = w_98;
                                }
                              }
                            }
                            t = r_21;
                            {
                              ATerm y_98 = NULL;
                              t = not_null(q_98);
                              {
                                t = eval_config_0(t);
                                {
                                  y_98 = t;
                                  if(((x_98 != NULL) && (x_98 != y_98)))
                                    _fail(y_98);
                                  else
                                    x_98 = y_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_98), not_null(x_98));
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
  ATerm g_99 = NULL;
  g_99 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_21, not_null(g_99));
    {
      t = table_get_0(t);
      {
        ATerm l_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_22;
            a_22 = t;
            {
              ATerm i_99 = NULL;
              ATerm j_99 = NULL;
              j_99 = t;
              if(((i_99 != NULL) && (i_99 != j_99)))
                _fail(j_99);
              else
                i_99 = j_99;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_21, not_null(g_99), not_null(i_99));
                t = table_put_0(t);
              }
            }
            t = a_22;
          }
          return(t);
        }
        t = try_1(t, l_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_106 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm g_22;
    g_22 = t;
    {
      ATerm n_99 = NULL;
      ATerm o_99 = NULL;
      t = term_h_22;
      {
        t = get_config_0(t);
        {
          o_99 = t;
          if(((n_99 != NULL) && (n_99 != o_99)))
            _fail(o_99);
          else
            n_99 = o_99;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_99), term_m_22);
        t = geq_0(t);
      }
    }
    t = g_22;
    t = o_106(t);
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,y_99 = NULL;
  s_99 = t;
  r_99 :
  if(match_cons(s_99, sym__2))
    {
      t_99 = ATgetArgument(s_99, 0);
      y_99 = ATgetArgument(s_99, 1);
      t = SSL_WriteToTextFile(not_null(t_99), not_null(y_99));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
  e_100 = t;
  d_100 :
  if(match_cons(e_100, sym__2))
    {
      f_100 = ATgetArgument(e_100, 0);
      g_100 = ATgetArgument(e_100, 1);
      t = SSL_WriteToBinaryFile(not_null(f_100), not_null(g_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_100 = NULL;
  ATerm r_22;
  r_22 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm v_100 = NULL,w_100 = NULL;
            v_100 = t;
            r_100 :
            if(match_cons(v_100, sym_Output_1))
              {
                w_100 = ATgetArgument(v_100, 0);
                if(((u_100 != NULL) && (u_100 != w_100)))
                  _fail(w_100);
                else
                  u_100 = w_100;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_3);
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          {
            ATerm x_100 = NULL;
            t = term_u_22;
            {
              x_100 = t;
              if(((u_100 != NULL) && (u_100 != x_100)))
                _fail(x_100);
              else
                u_100 = x_100;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_3, _id);
  }
  t = r_22;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(u_100);
        return(t);
      }
      t = split_2(t, q_3, _id);
      return(t);
    }
    t = _2(t, _id, p_3);
    {
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm y_100 = NULL;
              y_100 = t;
              t_100 :
              if(!(match_cons(y_100, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, s_3);
            return(t);
          }
          t = _2(t, r_3, WriteToBinaryFile_0);
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_104 (ATerm))
{
  ATerm e_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL;
  ATerm x_22;
  x_22 = t;
  t = dtime_0(t);
  t = x_22;
  {
    t = v_104(t);
    {
      ATerm y_22;
      y_22 = t;
      {
        ATerm f_101 = NULL;
        t = dtime_0(t);
        {
          f_101 = t;
          if(((e_101 != NULL) && (e_101 != f_101)))
            _fail(f_101);
          else
            e_101 = f_101;
        }
      }
      t = y_22;
      {
        g_101 = t;
        d_101 :
        if(match_cons(g_101, sym__2))
          {
            h_101 = ATgetArgument(g_101, 0);
            i_101 = ATgetArgument(g_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(e_101))), not_null(i_101));
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
  ATerm o_101 = NULL;
  o_101 = t;
  t = SSL_ReadFromFile(not_null(o_101));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_87 (ATerm), ATerm o_87 (ATerm))
{
  ATerm t_101 = NULL,v_101 = NULL;
  ATerm z_22;
  z_22 = t;
  {
    ATerm u_101 = NULL;
    t = n_87(t);
    {
      u_101 = t;
      if(((t_101 != NULL) && (t_101 != u_101)))
        _fail(u_101);
      else
        t_101 = u_101;
    }
  }
  t = z_22;
  {
    ATerm w_101 = NULL;
    t = o_87(t);
    {
      w_101 = t;
      if(((v_101 != NULL) && (v_101 != w_101)))
        _fail(w_101);
      else
        v_101 = w_101;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_101), not_null(v_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm c_102 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          ATerm d_102 = NULL,e_102 = NULL;
          d_102 = t;
          a_102 :
          if(match_cons(d_102, sym_Input_1))
            {
              e_102 = ATgetArgument(d_102, 0);
              if(((c_102 != NULL) && (c_102 != e_102)))
                _fail(e_102);
              else
                c_102 = e_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, t_3);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm f_102 = NULL;
          t = term_i_23;
          {
            f_102 = t;
            if(((c_102 != NULL) && (c_102 != f_102)))
              _fail(f_102);
            else
              c_102 = f_102;
          }
        }
      }
  }
  t = a_23;
  {
    ATerm u_3 (ATerm t)
    {
      t = not_null(c_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  t = SSL_string_to_int(not_null(j_102));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL;
  r_102 = t;
  p_102 :
  if(match_string(r_102, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(r_102) == AT_LIST) && !(ATisEmpty(r_102))))
        {
          s_102 = ATgetFirst((ATermList) r_102);
          t_102 = (ATerm) ATgetNext((ATermList) r_102);
          q_102 :
          if(((ATgetType(t_102) == AT_LIST) && !(ATisEmpty(t_102))))
            {
              u_102 = ATgetFirst((ATermList) t_102);
              v_102 = (ATerm) ATgetNext((ATermList) t_102);
              {
                ATerm z_102 = NULL;
                ATerm j_23;
                j_23 = t;
                {
                  t = not_null(s_102);
                  t = h_0(t);
                }
                t = j_23;
                {
                  ATerm a_103 = NULL;
                  t = not_null(u_102);
                  {
                    t = i_0(t);
                    {
                      a_103 = t;
                      if(((z_102 != NULL) && (z_102 != a_103)))
                        _fail(a_103);
                      else
                        z_102 = a_103;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_102)), not_null(z_102));
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
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm v_103 = NULL;
        v_103 = t;
        e_103 :
        if(!(match_string(v_103, "-i")))
          {
            if(!(match_string(v_103, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        ATerm y_103 = NULL;
        ATerm t_23;
        t_23 = t;
        {
          ATerm w_103 = NULL;
          ATerm x_103 = NULL;
          x_103 = t;
          if(((w_103 != NULL) && (w_103 != x_103)))
            _fail(x_103);
          else
            w_103 = x_103;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_w_23, not_null(w_103));
            t = set_config_0(t);
          }
        }
        t = t_23;
        {
          ATerm z_103 = NULL;
          z_103 = t;
          if(((y_103 != NULL) && (y_103 != z_103)))
            _fail(z_103);
          else
            y_103 = z_103;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_103));
        }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_x_23;
        return(t);
      }
      t = ArgOption_3(t, v_3, w_3, x_3);
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm a_104 = NULL;
              a_104 = t;
              h_103 :
              if(!(match_string(a_104, "-o")))
                {
                  if(!(match_string(a_104, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm d_104 = NULL;
              ATerm a_24;
              a_24 = t;
              {
                ATerm b_104 = NULL;
                ATerm c_104 = NULL;
                c_104 = t;
                if(((b_104 != NULL) && (b_104 != c_104)))
                  _fail(c_104);
                else
                  b_104 = c_104;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(b_104));
                  t = set_config_0(t);
                }
              }
              t = a_24;
              {
                ATerm e_104 = NULL;
                e_104 = t;
                if(((d_104 != NULL) && (d_104 != e_104)))
                  _fail(e_104);
                else
                  d_104 = e_104;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_104));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_c_24;
              return(t);
            }
            t = ArgOption_3(t, y_3, z_3, a_4);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm d_24 = t;
              int e_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm f_104 = NULL;
                    f_104 = t;
                    k_103 :
                    if(!(match_string(f_104, "-S")))
                      {
                        if(!(match_string(f_104, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_4 (ATerm t)
                  {
                    t = term_f_24;
                    t = set_config_0(t);
                    t = term_g_24;
                    return(t);
                  }
                  ATerm d_4 (ATerm t)
                  {
                    t = term_i_24;
                    return(t);
                  }
                  t = Option_3(t, b_4, c_4, d_4);
                  LocalPopChoice(e_24);
                }
              else
                {
                  t = d_24;
                  {
                    ATerm j_24 = t;
                    int k_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_4 (ATerm t)
                        {
                          ATerm g_104 = NULL;
                          g_104 = t;
                          l_103 :
                          if(!(match_string(g_104, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          ATerm j_104 = NULL;
                          ATerm l_24;
                          l_24 = t;
                          {
                            ATerm h_104 = NULL;
                            ATerm i_104 = NULL;
                            t = string_to_int_0(t);
                            {
                              i_104 = t;
                              if(((h_104 != NULL) && (h_104 != i_104)))
                                _fail(i_104);
                              else
                                h_104 = i_104;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_22, not_null(h_104));
                              t = set_config_0(t);
                            }
                          }
                          t = l_24;
                          {
                            ATerm k_104 = NULL;
                            k_104 = t;
                            if(((j_104 != NULL) && (j_104 != k_104)))
                              _fail(k_104);
                            else
                              j_104 = k_104;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_104));
                          }
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = term_n_24;
                          return(t);
                        }
                        t = ArgOption_3(t, e_4, f_4, g_4);
                        LocalPopChoice(k_24);
                      }
                    else
                      {
                        t = j_24;
                        {
                          ATerm s_24 = t;
                          int t_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_4 (ATerm t)
                              {
                                ATerm l_104 = NULL;
                                l_104 = t;
                                o_103 :
                                if(!(match_string(l_104, "-k")))
                                  {
                                    if(!(match_string(l_104, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                ATerm c_25;
                                c_25 = t;
                                {
                                  ATerm m_104 = NULL;
                                  ATerm n_104 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    n_104 = t;
                                    if(((m_104 != NULL) && (m_104 != n_104)))
                                      _fail(n_104);
                                    else
                                      m_104 = n_104;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_m_25, not_null(m_104));
                                    t = set_config_0(t);
                                  }
                                }
                                t = c_25;
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                t = term_y_25;
                                return(t);
                              }
                              t = ArgOption_3(t, h_4, i_4, j_4);
                              LocalPopChoice(t_24);
                            }
                          else
                            {
                              t = s_24;
                              {
                                ATerm z_25 = t;
                                int a_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_4 (ATerm t)
                                    {
                                      ATerm o_104 = NULL;
                                      o_104 = t;
                                      q_103 :
                                      if(!(match_string(o_104, "-v")))
                                        {
                                          if(!(match_string(o_104, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_4 (ATerm t)
                                    {
                                      t = term_c_26;
                                      t = set_config_0(t);
                                      t = term_d_26;
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      t = term_e_26;
                                      return(t);
                                    }
                                    t = Option_3(t, n_4, o_4, p_4);
                                    LocalPopChoice(a_26);
                                  }
                                else
                                  {
                                    t = z_25;
                                    {
                                      ATerm f_26 = t;
                                      int g_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_4 (ATerm t)
                                          {
                                            ATerm p_104 = NULL;
                                            p_104 = t;
                                            t_103 :
                                            if(!(match_string(p_104, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_4 (ATerm t)
                                          {
                                            t = term_i_26;
                                            t = set_config_0(t);
                                            t = term_j_26;
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = term_k_26;
                                            return(t);
                                          }
                                          t = Option_3(t, q_4, r_4, s_4);
                                          LocalPopChoice(g_26);
                                        }
                                      else
                                        {
                                          t = f_26;
                                          {
                                            ATerm t_4 (ATerm t)
                                            {
                                              ATerm q_104 = NULL;
                                              q_104 = t;
                                              u_103 :
                                              if(!(match_string(q_104, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_4 (ATerm t)
                                            {
                                              t = term_m_26;
                                              t = set_config_0(t);
                                              t = term_n_26;
                                              return(t);
                                            }
                                            ATerm v_4 (ATerm t)
                                            {
                                              t = term_o_26;
                                              return(t);
                                            }
                                            t = Option_3(t, t_4, u_4, v_4);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, term_p_26));
  {
    t = printnl_0(t);
    {
      t = term_q_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm g_105 = NULL;
  g_105 = t;
  t = SSL_TicksToSeconds(not_null(g_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_105 = NULL,v_105 = NULL,w_105 = NULL;
  u_105 = t;
  p_105 :
  if(match_cons(u_105, sym__2))
    {
      v_105 = ATgetArgument(u_105, 0);
      w_105 = ATgetArgument(u_105, 1);
      {
        ATerm q_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_105), not_null(w_105));
            LocalPopChoice(s_26);
          }
        else
          {
            t = q_26;
            t = SSL_addr(not_null(v_105), not_null(w_105));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_94(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm d_106 = NULL,e_106 = NULL,f_106 = NULL;
        d_106 = t;
        c_106 :
        if(((ATgetType(d_106) == AT_LIST) && !(ATisEmpty(d_106))))
          {
            e_106 = ATgetFirst((ATermList) d_106);
            f_106 = (ATerm) ATgetNext((ATermList) d_106);
            {
              ATerm i_106 = NULL;
              ATerm j_106 = NULL;
              t = not_null(f_106);
              {
                t = foldr_2(t, n_94, o_94);
                {
                  j_106 = t;
                  if(((i_106 != NULL) && (i_106 != j_106)))
                    _fail(j_106);
                  else
                    i_106 = j_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_106), not_null(i_106));
                t = o_94(t);
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
ATerm crush_2 (ATerm t, ATerm l_93 (ATerm), ATerm m_93 (ATerm))
{
  ATerm s_106 = NULL;
  ATerm u_106 = NULL;
  s_106 = t;
  {
    ATerm v_106 = NULL;
    ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
    t = not_null(s_106);
    {
      v_106 = t;
      {
        t = SSL_explode_term(not_null(v_106));
        {
          x_106 = t;
          r_106 :
          if(match_cons(x_106, sym__2))
            {
              y_106 = ATgetArgument(x_106, 0);
              z_106 = ATgetArgument(x_106, 1);
              if(((u_106 != NULL) && (u_106 != z_106)))
                _fail(z_106);
              else
                u_106 = z_106;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_106);
      t = foldr_2(t, l_93, m_93);
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
    ATerm w_4 (ATerm t)
    {
      t = term_n_19;
      return(t);
    }
    t = crush_2(t, w_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
  f_107 = t;
  e_107 :
  if(match_cons(f_107, sym__2))
    {
      g_107 = ATgetArgument(f_107, 0);
      h_107 = ATgetArgument(f_107, 1);
      {
        ATerm w_26;
        w_26 = t;
        {
          ATerm x_26 = t;
          int y_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_107), not_null(h_107));
              LocalPopChoice(y_26);
            }
          else
            {
              t = x_26;
              t = SSL_gtr(not_null(g_107), not_null(h_107));
            }
        }
        t = w_26;
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
  ATerm n_107 = NULL;
  ATerm a_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_107 = NULL,p_107 = NULL,r_107 = NULL;
      o_107 = t;
      m_107 :
      if(match_cons(o_107, sym__2))
        {
          p_107 = ATgetArgument(o_107, 0);
          r_107 = ATgetArgument(o_107, 1);
          {
            if(((n_107 != NULL) && (n_107 != p_107)))
              _fail(p_107);
            else
              n_107 = p_107;
            if(((n_107 != NULL) && (n_107 != r_107)))
              _fail(r_107);
            else
              n_107 = r_107;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_27);
    }
  else
    {
      t = a_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    ATerm o_27;
    o_27 = t;
    {
      ATerm u_107 = NULL;
      ATerm v_107 = NULL;
      t = term_h_22;
      {
        t = get_config_0(t);
        {
          v_107 = t;
          if(((u_107 != NULL) && (u_107 != v_107)))
            _fail(v_107);
          else
            u_107 = v_107;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_107), term_q_6);
        t = geq_0(t);
      }
    }
    t = o_27;
    t = n_106(t);
    return(t);
  }
  t = try_1(t, x_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_107 = NULL,b_108 = NULL;
    ATerm w_27;
    w_27 = t;
    {
      ATerm a_108 = NULL;
      t = run_time_0(t);
      {
        a_108 = t;
        if(((z_107 != NULL) && (z_107 != a_108)))
          _fail(a_108);
        else
          z_107 = a_108;
      }
    }
    t = w_27;
    {
      ATerm c_108 = NULL;
      t = term_g_28;
      {
        t = get_config_0(t);
        {
          c_108 = t;
          if(((b_108 != NULL) && (b_108 != c_108)))
            _fail(c_108);
          else
            b_108 = c_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_28), not_null(z_107)), term_h_28), not_null(b_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_4);
  {
    t = term_n_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_108 = NULL;
  j_108 = t;
  i_108 :
  if(match_cons(j_108, sym_Version_0))
    {
      ATerm l_108 = NULL,n_108 = NULL;
      ATerm j_28;
      j_28 = t;
      {
        ATerm m_108 = NULL;
        t = SSLgetAnnotations(not_null(j_108));
        {
          m_108 = t;
          if(((l_108 != NULL) && (l_108 != m_108)))
            _fail(m_108);
          else
            l_108 = m_108;
        }
      }
      t = j_28;
      {
        ATerm o_108 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_108));
        {
          o_108 = t;
          if(((n_108 != NULL) && (n_108 != o_108)))
            _fail(o_108);
          else
            n_108 = o_108;
        }
        t = not_null(n_108);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_104 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        {
          ATerm m_28 = t;
          int n_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_28);
            }
          else
            {
              t = m_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_4);
  t = t_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_108 = NULL;
  z_108 = t;
  t = SSL_table_create(not_null(z_108));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_109 = NULL;
  d_109 = t;
  {
    ATerm o_28;
    o_28 = t;
    {
      t = term_p_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_28, term_q_28, not_null(d_109));
          t = table_put_0(t);
        }
      }
    }
    t = o_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_109 = NULL;
  h_109 = t;
  t = SSL_table_destroy(not_null(h_109));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_109 = NULL;
  l_109 = t;
  t = SSL_exit(not_null(l_109));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL;
  p_109 = t;
  o_109 :
  if(((ATgetType(p_109) == AT_LIST) && ATisEmpty(p_109)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_109) == AT_LIST) && !(ATisEmpty(p_109))))
        {
          q_109 = ATgetFirst((ATermList) p_109);
          r_109 = (ATerm) ATgetNext((ATermList) p_109);
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
ATerm echo_0 (ATerm t)
{
  ATerm r_28;
  r_28 = t;
  {
    ATerm u_109 = NULL;
    ATerm x_109 = NULL;
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        {
          ATerm v_109 = NULL;
          ATerm w_109 = NULL;
          w_109 = t;
          if(((v_109 != NULL) && (v_109 != w_109)))
            _fail(w_109);
          else
            v_109 = w_109;
          t = (ATerm) ATinsert(ATempty, not_null(v_109));
        }
      }
    {
      x_109 = t;
      if(((u_109 != NULL) && (u_109 != x_109)))
        _fail(x_109);
      else
        u_109 = x_109;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_22, not_null(u_109));
      t = printnl_0(t);
    }
  }
  t = r_28;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm a_110 (ATerm t)
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = Cons_2(t, b_90, a_110);
      }
    return(t);
  }
  t = a_110(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm e_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL;
  j_110 = t;
  g_110 :
  if(((ATgetType(j_110) == AT_LIST) && !(ATisEmpty(j_110))))
    {
      h_110 = ATgetFirst((ATermList) j_110);
      i_110 = (ATerm) ATgetNext((ATermList) j_110);
      {
        ATerm m_110 = NULL;
        t = not_null(i_110);
        {
          ATerm b_29;
          b_29 = t;
          {
            ATerm n_110 = NULL,s_110 = NULL,u_110 = NULL;
            ATerm d_29;
            d_29 = t;
            {
              ATerm o_110 = NULL;
              t = g_0(t);
              {
                o_110 = t;
                if(((n_110 != NULL) && (n_110 != o_110)))
                  _fail(o_110);
                else
                  n_110 = o_110;
              }
            }
            t = d_29;
            {
              ATerm t_110 = NULL;
              t = not_null(h_110);
              {
                t = e_0(t);
                {
                  t_110 = t;
                  if(((s_110 != NULL) && (s_110 != t_110)))
                    _fail(t_110);
                  else
                    s_110 = t_110;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_110)), not_null(s_110));
                {
                  u_110 = t;
                  if(((m_110 != NULL) && (m_110 != u_110)))
                    _fail(u_110);
                  else
                    m_110 = u_110;
                }
              }
            }
          }
          t = b_29;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(m_110);
              return(t);
            }
            t = reverse_acc_2(t, e_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_110) == AT_LIST) && ATisEmpty(j_110)))
        {
          {
            t = term_o_15;
            t = g_0(t);
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm i_111 = NULL,j_111 = NULL;
  i_111 = t;
  h_111 :
  if(match_cons(i_111, sym_Program_1))
    {
      j_111 = ATgetArgument(i_111, 0);
      {
        ATerm m_111 = NULL,s_111 = NULL;
        ATerm o_111 = NULL;
        t = SSLgetAnnotations(not_null(i_111));
        {
          o_111 = t;
          if(((m_111 != NULL) && (m_111 != o_111)))
            _fail(o_111);
          else
            m_111 = o_111;
        }
        {
          t = not_null(j_111);
          {
            ATerm u_111 = NULL;
            t = f_77(t);
            {
              s_111 = t;
              {
                ATerm v_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_111)), not_null(m_111));
                {
                  v_111 = t;
                  if(((u_111 != NULL) && (u_111 != v_111)))
                    _fail(v_111);
                  else
                    u_111 = v_111;
                }
                t = not_null(u_111);
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
  ATerm e_112 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_112 = NULL;
      t = term_g_28;
      {
        t = get_config_0(t);
        {
          f_112 = t;
          if(((e_112 != NULL) && (e_112 != f_112)))
            _fail(f_112);
          else
            e_112 = f_112;
        }
      }
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            ATerm g_112 = NULL;
            g_112 = t;
            if(((e_112 != NULL) && (e_112 != g_112)))
              _fail(g_112);
            else
              e_112 = g_112;
            return(t);
          }
          t = Program_1(t, d_5);
          return(t);
        }
        t = option_defined_1(t, c_5);
      }
    }
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_5 (ATerm t)
      {
        t = not_null(e_112);
        return(t);
      }
      t = short_description_1(t, f_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = term_g_29;
      {
        t = echo_0(t);
        {
          t = term_j_29;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm h_112 = NULL;
                  ATerm i_112 = NULL;
                  i_112 = t;
                  if(((h_112 != NULL) && (h_112 != i_112)))
                    _fail(i_112);
                  else
                    h_112 = i_112;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_112)), term_m_29);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm j_112 = NULL;
                    ATerm k_112 = NULL;
                    ATerm i_5 (ATerm t)
                    {
                      t = not_null(e_112);
                      return(t);
                    }
                    t = long_description_1(t, i_5);
                    {
                      k_112 = t;
                      if(((j_112 != NULL) && (j_112 != k_112)))
                        _fail(k_112);
                      else
                        j_112 = k_112;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_112)), term_n_29);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm o_29;
  o_29 = t;
  {
    ATerm q_112 = NULL;
    ATerm r_112 = NULL;
    r_112 = t;
    if(((q_112 != NULL) && (q_112 != r_112)))
      _fail(r_112);
    else
      q_112 = r_112;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, not_null(q_112)));
      t = printnl_0(t);
    }
  }
  t = o_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm p_29;
  p_29 = t;
  {
    t = s_103(t);
    t = debug_0(t);
  }
  t = p_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm y_112 = NULL,z_112 = NULL;
  y_112 = t;
  x_112 :
  if(match_cons(y_112, sym_Undefined_1))
    {
      z_112 = ATgetArgument(y_112, 0);
      {
        ATerm c_113 = NULL,e_113 = NULL;
        ATerm d_113 = NULL;
        t = SSLgetAnnotations(not_null(y_112));
        {
          d_113 = t;
          if(((c_113 != NULL) && (c_113 != d_113)))
            _fail(d_113);
          else
            c_113 = d_113;
        }
        {
          t = not_null(z_112);
          {
            ATerm g_113 = NULL;
            t = g_77(t);
            {
              e_113 = t;
              {
                ATerm h_113 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_113)), not_null(c_113));
                {
                  h_113 = t;
                  if(((g_113 != NULL) && (g_113 != h_113)))
                    _fail(h_113);
                  else
                    g_113 = h_113;
                }
                t = not_null(g_113);
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
ATerm fetch_1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm m_113 (ATerm t)
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_90, _id);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = Cons_2(t, _id, m_113);
      }
    return(t);
  }
  t = m_113(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_107 (ATerm))
{
  t = fetch_1(t, q_107);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_113 = NULL;
  r_113 = t;
  q_113 :
  if(match_cons(r_113, sym_Help_0))
    {
      ATerm t_113 = NULL,v_113 = NULL;
      ATerm s_29;
      s_29 = t;
      {
        ATerm u_113 = NULL;
        t = SSLgetAnnotations(not_null(r_113));
        {
          u_113 = t;
          if(((t_113 != NULL) && (t_113 != u_113)))
            _fail(u_113);
          else
            t_113 = u_113;
        }
      }
      t = s_29;
      {
        ATerm w_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_113));
        {
          w_113 = t;
          if(((v_113 != NULL) && (v_113 != w_113)))
            _fail(w_113);
          else
            v_113 = w_113;
        }
        t = not_null(v_113);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_86(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL;
  c_114 = t;
  b_114 :
  if(match_cons(c_114, sym__2))
    {
      d_114 = ATgetArgument(c_114, 0);
      e_114 = ATgetArgument(c_114, 1);
      t = SSL_table_get(not_null(d_114), not_null(e_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_114 = NULL,m_114 = NULL,n_114 = NULL,o_114 = NULL;
  l_114 = t;
  k_114 :
  if(match_cons(l_114, sym__3))
    {
      m_114 = ATgetArgument(l_114, 0);
      n_114 = ATgetArgument(l_114, 1);
      o_114 = ATgetArgument(l_114, 2);
      {
        ATerm v_29;
        v_29 = t;
        {
          ATerm s_114 = NULL;
          ATerm t_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_114), not_null(n_114));
          {
            ATerm w_29 = t;
            int x_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_29);
              }
            else
              {
                t = w_29;
                t = (ATerm) ATempty;
              }
            {
              t_114 = t;
              if(((s_114 != NULL) && (s_114 != t_114)))
                _fail(t_114);
              else
                s_114 = t_114;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_114), not_null(n_114), (ATerm) ATinsert(CheckATermList(not_null(s_114)), not_null(o_114)));
            t = table_put_0(t);
          }
        }
        t = v_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_108 (ATerm))
{
  ATerm x_114 = NULL;
  ATerm y_114 = NULL;
  t = term_o_15;
  {
    t = v_108(t);
    {
      y_114 = t;
      if(((x_114 != NULL) && (x_114 != y_114)))
        _fail(y_114);
      else
        x_114 = y_114;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_29, term_i_29, not_null(x_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
  e_115 = t;
  d_115 :
  if(match_string(e_115, "register-usage-info"))
    {
      t = register_usage_1(t, c_0);
    }
  else
    {
      if(((ATgetType(e_115) == AT_LIST) && !(ATisEmpty(e_115))))
        {
          f_115 = ATgetFirst((ATermList) e_115);
          g_115 = (ATerm) ATgetNext((ATermList) e_115);
          {
            ATerm j_115 = NULL;
            ATerm b_30;
            b_30 = t;
            {
              t = not_null(f_115);
              t = a_0(t);
            }
            t = b_30;
            {
              ATerm k_115 = NULL;
              t = term_o_15;
              {
                t = b_0(t);
                {
                  k_115 = t;
                  if(((j_115 != NULL) && (j_115 != k_115)))
                    _fail(k_115);
                  else
                    j_115 = k_115;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_115)), not_null(j_115));
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
  ATerm j_5 (ATerm t)
  {
    ATerm p_115 = NULL;
    p_115 = t;
    o_115 :
    if(!(match_string(p_115, "--help")))
      {
        if(!(match_string(p_115, "-h")))
          {
            if(!(match_string(p_115, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_g_30;
    {
      t = set_config_0(t);
      t = term_h_30;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_k_30;
    return(t);
  }
  t = Option_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL;
  s_115 = t;
  r_115 :
  if(((ATgetType(s_115) == AT_LIST) && !(ATisEmpty(s_115))))
    {
      t_115 = ATgetFirst((ATermList) s_115);
      u_115 = (ATerm) ATgetNext((ATermList) s_115);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_115)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_115)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL;
  a_116 = t;
  z_115 :
  if(match_cons(a_116, sym__2))
    {
      b_116 = ATgetArgument(a_116, 0);
      c_116 = ATgetArgument(a_116, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_21, not_null(b_116), not_null(c_116));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_108 (ATerm))
{
  ATerm l_30;
  l_30 = t;
  {
    ATerm m_5 (ATerm t)
    {
      t = term_m_30;
      t = t_108(t);
      return(t);
    }
    t = try_1(t, m_5);
  }
  t = l_30;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm k_116 = NULL;
      ATerm n_30;
      n_30 = t;
      {
        ATerm i_116 = NULL;
        ATerm j_116 = NULL;
        j_116 = t;
        if(((i_116 != NULL) && (i_116 != j_116)))
          _fail(j_116);
        else
          i_116 = j_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_28, not_null(i_116));
          t = set_config_0(t);
        }
      }
      t = n_30;
      {
        ATerm l_116 = NULL;
        l_116 = t;
        if(((k_116 != NULL) && (k_116 != l_116)))
          _fail(l_116);
        else
          k_116 = l_116;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_116));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm o_30 = t;
      int p_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              {
                t = t_108(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          LocalPopChoice(p_30);
        }
      else
        {
          t = o_30;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL;
  ATerm s_30;
  s_30 = t;
  {
    ATerm u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL;
    u_116 = t;
    q_116 :
    if(match_cons(u_116, sym__3))
      {
        v_116 = ATgetArgument(u_116, 0);
        w_116 = ATgetArgument(u_116, 1);
        x_116 = ATgetArgument(u_116, 2);
        {
          if(((r_116 != NULL) && (r_116 != v_116)))
            _fail(v_116);
          else
            r_116 = v_116;
          {
            if(((s_116 != NULL) && (s_116 != w_116)))
              _fail(w_116);
            else
              s_116 = w_116;
            {
              if(((t_116 != NULL) && (t_116 != x_116)))
                _fail(x_116);
              else
                t_116 = x_116;
              t = SSL_table_put(not_null(r_116), not_null(s_116), not_null(t_116));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_30;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm a_117 = NULL;
  ATerm u_30;
  u_30 = t;
  {
    t = term_v_30;
    t = table_put_0(t);
  }
  t = u_30;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm w_30 = t;
      int x_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_108(t);
          LocalPopChoice(x_30);
        }
      else
        {
          t = w_30;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_31;
            a_31 = t;
            {
              ATerm b_31 = t;
              int d_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_c_30;
                  t = get_config_0(t);
                  LocalPopChoice(d_31);
                }
              else
                {
                  t = b_31;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = a_31;
            {
              t = system_usage_0(t);
              {
                t = term_n_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm b_117 = NULL;
                  b_117 = t;
                  if(((a_117 != NULL) && (a_117 != b_117)))
                    _fail(b_117);
                  else
                    a_117 = b_117;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_117)), term_e_31);
                  return(t);
                }
                t = say_1(t, u_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_q_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_5);
      {
        ATerm f_31;
        f_31 = t;
        {
          t = term_h_29;
          t = table_destroy_0(t);
        }
        t = f_31;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm))
{
  t = parse_options_1(t, z_104);
  {
    t = store_options_0(t);
    {
      t = b_105(t);
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_105);
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm j_31 = t;
              int k_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_105(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_31);
                }
              else
                {
                  t = j_31;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_105(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_5, s_105, t_105, w_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      ATerm n_31;
      n_31 = t;
      {
        ATerm e_117 = NULL;
        ATerm f_117 = NULL;
        t = term_g_28;
        {
          t = get_config_0(t);
          {
            f_117 = t;
            if(((e_117 != NULL) && (e_117 != f_117)))
              _fail(f_117);
            else
              e_117 = f_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_7, (ATerm) ATinsert(ATempty, not_null(e_117)));
          t = printnl_0(t);
        }
      }
      t = n_31;
      return(t);
    }
    t = if_verbose2_1(t, y_5);
    return(t);
  }
  t = iowrap_4(t, k_105, l_105, m_105, x_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm))
{
  t = iowrap_3(t, i_105, j_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    t = _2(t, _id, f_105);
    return(t);
  }
  t = iowrap_2(t, z_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_6 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, d_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, c_6);
      return(t);
    }
    t = Specification_1(t, b_6);
    return(t);
  }
  t = iowrap_1(t, a_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
