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
ATerm term_f_33;
ATerm term_s_31;
ATerm term_j_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_b_29;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_a_28;
ATerm term_s_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_q_25;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_j_24;
ATerm term_a_24;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_l_19;
ATerm term_r_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_z_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_y_7;
ATerm term_r_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
void init_constant_terms (void)
{
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Op_2, term_h_11, (ATerm) ATempty);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_b_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_b_20);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_20);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_x_14);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_b_27, term_x_14);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_x_14);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_h_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_x_14);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__3, term_g_30, term_h_30, (ATerm) ATempty);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Var_1 (ATerm, ATerm p_0 (ATerm));
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
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
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
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
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
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
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
        ATerm y_5;
        y_5 = t;
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
        t = y_5;
        {
          ATerm p_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(k_4));
          {
            p_5 = t;
            if(((m_4 != NULL) && (m_4 != p_5)))
              _fail(p_5);
            else
              m_4 = p_5;
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      p_6 = ATgetArgument(n_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_6), not_null(p_6)), term_a_6), not_null(o_6)), term_z_5);
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
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  x_6 = t;
  v_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      b_7 = ATgetArgument(x_6, 1);
      w_6 :
      if(match_cons(y_6, sym_Mod_2))
        {
          z_6 = ATgetArgument(y_6, 0);
          a_7 = ATgetArgument(y_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_6), not_null(b_7)), term_a_6), not_null(a_7)), term_c_6), not_null(z_6)), term_z_5);
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
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
  j_7 = t;
  h_7 :
  if(match_cons(j_7, sym__2))
    {
      k_7 = ATgetArgument(j_7, 0);
      l_7 = ATgetArgument(j_7, 1);
      i_7 :
      if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
        {
          m_7 = ATgetFirst((ATermList) l_7);
          n_7 = (ATerm) ATgetNext((ATermList) l_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(n_7)), not_null(m_7));
            {
              ATerm c_0 (ATerm t)
              {
                ATerm d_6 = t;
                int e_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(e_6);
                  }
                else
                  {
                    t = d_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, c_0);
            }
            t = not_null(k_7);
          }
        }
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
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  t_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      u_7 :
      if(((ATgetType(x_7) == AT_LIST) && ATisEmpty(x_7)))
        {
          t = not_null(w_7);
        }
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
  ATerm f_6;
  f_6 = t;
  {
    t = error_0(t);
    {
      t = term_g_6;
      t = exit_0(t);
    }
  }
  t = f_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm i_6;
  i_6 = t;
  {
    ATerm b_8 = NULL;
    ATerm c_8 = NULL;
    c_8 = t;
    if(((b_8 != NULL) && (b_8 != c_8)))
      _fail(c_8);
    else
      b_8 = c_8;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(b_8));
      t = printnl_0(t);
    }
  }
  t = i_6;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  n_8 :
  if(match_cons(p_8, sym__2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      o_8 :
      if(match_int(r_8, 0))
        {
          ATerm k_6 = t;
          int l_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
              t = not_null(q_8);
              {
                t = Arities_0(t);
                {
                  t_8 = t;
                  i_8 :
                  if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
                    {
                      u_8 = ATgetFirst((ATermList) t_8);
                      v_8 = (ATerm) ATgetNext((ATermList) t_8);
                      j_8 :
                      if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
                        {
                          w_8 = ATgetFirst((ATermList) v_8);
                          x_8 = (ATerm) ATgetNext((ATermList) v_8);
                          {
                            ATerm q_6 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm e_0 (ATerm t)
                                {
                                  ATerm y_8 = NULL;
                                  y_8 = t;
                                  h_8 :
                                  if(!(match_int(y_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, e_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = q_6;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_8)), term_r_6);
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
              LocalPopChoice(l_6);
            }
          else
            {
              t = k_6;
              {
                ATerm a_9 = NULL;
                ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
                t = not_null(q_8);
                {
                  t = Arities_0(t);
                  {
                    b_9 = t;
                    l_8 :
                    if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
                      {
                        c_9 = ATgetFirst((ATermList) b_9);
                        d_9 = (ATerm) ATgetNext((ATermList) b_9);
                        m_8 :
                        if(((ATgetType(d_9) == AT_LIST) && ATisEmpty(d_9)))
                          {
                            {
                              if(((a_9 != NULL) && (a_9 != c_9)))
                                _fail(c_9);
                              else
                                a_9 = c_9;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(a_9));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(a_9));
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
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym_Rec_2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm u_9 = NULL,w_9 = NULL;
        ATerm v_9 = NULL;
        t = SSLgetAnnotations(not_null(o_9));
        {
          v_9 = t;
          if(((u_9 != NULL) && (u_9 != v_9)))
            _fail(v_9);
          else
            u_9 = v_9;
        }
        {
          t = not_null(p_9);
          {
            ATerm y_9 = NULL;
            t = d_73(t);
            {
              w_9 = t;
              {
                t = not_null(q_9);
                {
                  ATerm a_10 = NULL;
                  t = e_73(t);
                  {
                    y_9 = t;
                    {
                      ATerm b_10 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(w_9), not_null(y_9)), not_null(u_9));
                      {
                        b_10 = t;
                        if(((a_10 != NULL) && (a_10 != b_10)))
                          _fail(b_10);
                        else
                          a_10 = b_10;
                      }
                      t = not_null(a_10);
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
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_SDef_3))
    {
      p_10 = ATgetArgument(o_10, 0);
      q_10 = ATgetArgument(o_10, 1);
      r_10 = ATgetArgument(o_10, 2);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm a_11 = NULL;
            t = h_73(t);
            {
              y_10 = t;
              {
                t = not_null(q_10);
                {
                  ATerm c_11 = NULL;
                  t = i_73(t);
                  {
                    a_11 = t;
                    {
                      t = not_null(r_10);
                      {
                        ATerm e_11 = NULL;
                        t = j_73(t);
                        {
                          c_11 = t;
                          {
                            ATerm f_11 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_10), not_null(a_11), not_null(c_11)), not_null(w_10));
                            {
                              f_11 = t;
                              if(((e_11 != NULL) && (e_11 != f_11)))
                                _fail(f_11);
                              else
                                e_11 = f_11;
                            }
                            t = not_null(e_11);
                          }
                        }
                      }
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
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Let_2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      {
        ATerm y_11 = NULL,a_12 = NULL;
        ATerm z_11 = NULL;
        t = SSLgetAnnotations(not_null(s_11));
        {
          z_11 = t;
          if(((y_11 != NULL) && (y_11 != z_11)))
            _fail(z_11);
          else
            y_11 = z_11;
        }
        {
          t = not_null(t_11);
          {
            ATerm c_12 = NULL;
            t = f_73(t);
            {
              a_12 = t;
              {
                t = not_null(u_11);
                {
                  ATerm e_12 = NULL;
                  t = g_73(t);
                  {
                    c_12 = t;
                    {
                      ATerm f_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(a_12), not_null(c_12)), not_null(y_11));
                      {
                        f_12 = t;
                        if(((e_12 != NULL) && (e_12 != f_12)))
                          _fail(f_12);
                        else
                          e_12 = f_12;
                      }
                      t = not_null(e_12);
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
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, z_82, z_82);
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm u_6 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, b_83, b_83, z_82);
            LocalPopChoice(c_7);
          }
        else
          {
            t = u_6;
            t = Rec_2(t, b_83, z_82);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_Rec_2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(o_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_SDef_3))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      a_13 = ATgetArgument(x_12, 2);
      {
        t = not_null(z_12);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
            e_13 = t;
            v_12 :
            if(match_cons(e_13, sym_VarDec_2))
              {
                f_13 = ATgetArgument(e_13, 0);
                g_13 = ATgetArgument(e_13, 1);
                t = not_null(f_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_0);
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
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  n_13 :
  if(match_cons(o_13, sym_Let_2))
    {
      p_13 = ATgetArgument(o_13, 0);
      q_13 = ATgetArgument(o_13, 1);
      {
        t = not_null(p_13);
        {
          ATerm j_0 (ATerm t)
          {
            ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
            t_13 = t;
            m_13 :
            if(match_cons(t_13, sym_SDef_3))
              {
                u_13 = ATgetArgument(t_13, 0);
                v_13 = ATgetArgument(t_13, 1);
                w_13 = ATgetArgument(t_13, 2);
                t = not_null(u_13);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, j_0);
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
      t = foldr_3(t, n_93, o_93, p_93);
    }
  }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm z_97 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_98 (ATerm))
{
  ATerm u_14 (ATerm t)
  {
    ATerm m_0 (ATerm t)
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_97(t);
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm f_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_14 = NULL;
          ATerm o_7;
          o_7 = t;
          {
            ATerm t_14 = NULL;
            t = y_97(t);
            {
              t_14 = t;
              if(((s_14 != NULL) && (s_14 != t_14)))
                _fail(t_14);
              else
                s_14 = t_14;
            }
          }
          t = o_7;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(s_14);
                return(t);
              }
              t = split_2(t, u_14, t_0);
              t = diff_1(t, a_98);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = z_97(t, r_0, u_14, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm v_0 (ATerm t)
              {
                t = union_1(t, eq_0);
                return(t);
              }
              t = crush_3(t, u_0, v_0, _id);
            }
          }
          LocalPopChoice(g_7);
        }
      else
        {
          t = f_7;
          {
            ATerm w_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm x_0 (ATerm t)
            {
              t = union_1(t, eq_0);
              return(t);
            }
            t = crush_3(t, w_0, x_0, u_14);
          }
        }
      return(t);
    }
    t = split_2(t, m_0, q_0);
    t = union_1(t, eq_0);
    return(t);
  }
  t = u_14(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
    d_15 = t;
    y_14 :
    if(match_cons(d_15, sym_Call_2))
      {
        e_15 = ATgetArgument(d_15, 0);
        g_15 = ATgetArgument(d_15, 1);
        z_14 :
        if(match_cons(e_15, sym_SVar_1))
          {
            f_15 = ATgetArgument(e_15, 0);
            {
              ATerm j_15 = NULL;
              ATerm k_15 = NULL;
              t = not_null(g_15);
              {
                t = length_0(t);
                {
                  k_15 = t;
                  if(((j_15 != NULL) && (j_15 != k_15)))
                    _fail(k_15);
                  else
                    j_15 = k_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(j_15)));
            }
          }
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
  ATerm z_0 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
    l_15 = t;
    b_15 :
    if(match_cons(l_15, sym__2))
      {
        m_15 = ATgetArgument(l_15, 0);
        p_15 = ATgetArgument(l_15, 1);
        c_15 :
        if(match_cons(m_15, sym__2))
          {
            n_15 = ATgetArgument(m_15, 0);
            o_15 = ATgetArgument(m_15, 1);
            if(((n_15 != NULL) && (n_15 != p_15)))
              _fail(p_15);
            else
              n_15 = p_15;
          }
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
  t = free_vars2_4(t, y_0, z_0, sboundin_3, a_1);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm b_16 = NULL;
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
  b_16 = t;
  {
    ATerm g_16 = NULL;
    ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
    t = not_null(b_16);
    {
      g_16 = t;
      {
        t = SSL_explode_term(not_null(g_16));
        {
          i_16 = t;
          x_15 :
          if(match_cons(i_16, sym__2))
            {
              j_16 = ATgetArgument(i_16, 0);
              k_16 = ATgetArgument(i_16, 1);
              y_15 :
              if(match_string(j_16, ""))
                {
                  z_15 :
                  if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
                    {
                      l_16 = ATgetFirst((ATermList) k_16);
                      m_16 = (ATerm) ATgetNext((ATermList) k_16);
                      a_16 :
                      if(((ATgetType(m_16) == AT_LIST) && !(ATisEmpty(m_16))))
                        {
                          n_16 = ATgetFirst((ATermList) m_16);
                          o_16 = (ATerm) ATgetNext((ATermList) m_16);
                          {
                            if(((d_16 != NULL) && (d_16 != l_16)))
                              _fail(l_16);
                            else
                              d_16 = l_16;
                            {
                              if(((f_16 != NULL) && (f_16 != n_16)))
                                _fail(n_16);
                              else
                                f_16 = n_16;
                              if(((e_16 != NULL) && (e_16 != o_16)))
                                _fail(o_16);
                              else
                                e_16 = o_16;
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
    t = not_null(f_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_y_7;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm u_16 = NULL,w_16 = NULL;
    ATerm z_7;
    z_7 = t;
    {
      ATerm v_16 = NULL;
      t = Fst_0(t);
      {
        v_16 = t;
        if(((u_16 != NULL) && (u_16 != v_16)))
          _fail(v_16);
        else
          u_16 = v_16;
      }
    }
    t = z_7;
    {
      ATerm x_16 = NULL;
      t = Snd_0(t);
      {
        x_16 = t;
        if(((w_16 != NULL) && (w_16 != x_16)))
          _fail(x_16);
        else
          w_16 = x_16;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_16), not_null(w_16));
    }
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
  e_17 = t;
  b_17 :
  if(match_cons(e_17, sym_Call_2))
    {
      f_17 = ATgetArgument(e_17, 0);
      h_17 = ATgetArgument(e_17, 1);
      c_17 :
      if(match_cons(f_17, sym_SVar_1))
        {
          g_17 = ATgetArgument(f_17, 0);
          d_17 :
          if(((ATgetType(h_17) == AT_LIST) && ATisEmpty(h_17)))
            {
              t = not_null(g_17);
            }
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  n_17 = t;
  l_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      m_17 :
      if(((ATgetType(p_17) == AT_LIST) && !(ATisEmpty(p_17))))
        {
          q_17 = ATgetFirst((ATermList) p_17);
          r_17 = (ATerm) ATgetNext((ATermList) p_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(r_17));
        }
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  z_17 = t;
  w_17 :
  if(match_cons(z_17, sym__2))
    {
      a_18 = ATgetArgument(z_17, 0);
      b_18 = ATgetArgument(z_17, 1);
      x_17 :
      if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
        {
          c_18 = ATgetFirst((ATermList) b_18);
          f_18 = (ATerm) ATgetNext((ATermList) b_18);
          y_17 :
          if(match_cons(c_18, sym__2))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              {
                ATerm h_18 = NULL;
                if(((a_18 != NULL) && (a_18 != d_18)))
                  _fail(d_18);
                else
                  a_18 = d_18;
                {
                  if(((h_18 != NULL) && (h_18 != e_18)))
                    _fail(e_18);
                  else
                    h_18 = e_18;
                  t = not_null(h_18);
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
  ATerm a_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(d_8);
    }
  else
    {
      t = a_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  ATerm n_18 = NULL;
  ATerm p_18 = NULL,q_18 = NULL;
  n_18 = t;
  {
    ATerm r_18 = NULL;
    t = not_null(n_18);
    {
      ATerm s_18 = NULL;
      t = s_83(t);
      {
        r_18 = t;
        {
          if(((p_18 != NULL) && (p_18 != r_18)))
            _fail(r_18);
          else
            p_18 = r_18;
          {
            t = t_83(t);
            {
              s_18 = t;
              if(((q_18 != NULL) && (q_18 != s_18)))
                _fail(s_18);
              else
                q_18 = s_18;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(q_18));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm w_18 (ATerm t)
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_85(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = _all(t, w_18);
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm g_19 = NULL;
        if(((g_19 != NULL) && (g_19 != d_19)))
          _fail(d_19);
        else
          g_19 = d_19;
      }
    }
  else
    {
      if(match_cons(b_19, sym__3))
        {
          c_19 = ATgetArgument(b_19, 0);
          d_19 = ATgetArgument(b_19, 1);
          e_19 = ATgetArgument(b_19, 2);
          {
            ATerm m_19 = NULL;
            ATerm n_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_19), not_null(d_19));
            {
              t = zip_1(t, _id);
              {
                n_19 = t;
                if(((m_19 != NULL) && (m_19 != n_19)))
                  _fail(n_19);
                else
                  m_19 = n_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(e_19));
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
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t = subs_args_0(t);
  {
    t_19 = t;
    s_19 :
    if(match_cons(t_19, sym__2))
      {
        u_19 = ATgetArgument(t_19, 0);
        v_19 = ATgetArgument(t_19, 1);
        {
          t = not_null(v_19);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(u_19);
                return(t);
              }
              t = SubsVar_2(t, d_83, e_1);
              t = e_83(t);
              return(t);
            }
            t = alltd_1(t, d_1);
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
  t = substitute_2(t, IsSVar_0, _id);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm k_73 (ATerm), ATerm l_73 (ATerm))
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym_VarDec_2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      {
        ATerm l_20 = NULL,n_20 = NULL;
        ATerm m_20 = NULL;
        t = SSLgetAnnotations(not_null(f_20));
        {
          m_20 = t;
          if(((l_20 != NULL) && (l_20 != m_20)))
            _fail(m_20);
          else
            l_20 = m_20;
        }
        {
          t = not_null(g_20);
          {
            ATerm p_20 = NULL;
            t = k_73(t);
            {
              n_20 = t;
              {
                t = not_null(h_20);
                {
                  ATerm r_20 = NULL;
                  t = l_73(t);
                  {
                    p_20 = t;
                    {
                      ATerm s_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(n_20), not_null(p_20)), not_null(l_20));
                      {
                        s_20 = t;
                        if(((r_20 != NULL) && (r_20 != s_20)))
                          _fail(s_20);
                        else
                          r_20 = s_20;
                      }
                      t = not_null(r_20);
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
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  m_21 = t;
  k_21 :
  if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
    {
      n_21 = ATgetFirst((ATermList) m_21);
      r_21 = (ATerm) ATgetNext((ATermList) m_21);
      l_21 :
      if(match_cons(n_21, sym_SDef_3))
        {
          o_21 = ATgetArgument(n_21, 0);
          p_21 = ATgetArgument(n_21, 1);
          q_21 = ATgetArgument(n_21, 2);
          {
            ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,t_22 = NULL;
            ATerm g_8;
            g_8 = t;
            {
              ATerm z_21 = NULL;
              t = not_null(p_21);
              {
                ATerm f_22 = NULL;
                ATerm f_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, f_1);
                {
                  z_21 = t;
                  {
                    if(((w_21 != NULL) && (w_21 != z_21)))
                      _fail(z_21);
                    else
                      w_21 = z_21;
                    {
                      t = not_null(w_21);
                      {
                        ATerm s_22 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
                          a_22 = t;
                          b_21 :
                          if(match_cons(a_22, sym_VarDec_2))
                            {
                              b_22 = ATgetArgument(a_22, 0);
                              c_22 = ATgetArgument(a_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, g_1);
                        {
                          f_22 = t;
                          {
                            if(((x_21 != NULL) && (x_21 != f_22)))
                              _fail(f_22);
                            else
                              x_21 = f_22;
                            {
                              t = not_null(m_21);
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
                                  g_22 = t;
                                  h_21 :
                                  if(match_cons(g_22, sym_SDef_3))
                                    {
                                      h_22 = ATgetArgument(g_22, 0);
                                      i_22 = ATgetArgument(g_22, 1);
                                      j_22 = ATgetArgument(g_22, 2);
                                      {
                                        ATerm m_22 = NULL;
                                        ATerm r_22 = NULL;
                                        t = not_null(i_22);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
                                            n_22 = t;
                                            f_21 :
                                            if(match_cons(n_22, sym_VarDec_2))
                                              {
                                                o_22 = ATgetArgument(n_22, 0);
                                                p_22 = ATgetArgument(n_22, 1);
                                                t = not_null(o_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            r_22 = t;
                                            if(((m_22 != NULL) && (m_22 != r_22)))
                                              _fail(r_22);
                                            else
                                              m_22 = r_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(m_22), not_null(x_21), not_null(j_22));
                                          t = substitute_2(t, IsSVar_0, _id);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, h_1);
                                {
                                  s_22 = t;
                                  if(((y_21 != NULL) && (y_21 != s_22)))
                                    _fail(s_22);
                                  else
                                    y_21 = s_22;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = g_8;
            {
              ATerm u_22 = NULL;
              t = not_null(y_21);
              {
                t = choices_0(t);
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(o_21), not_null(w_21), not_null(t_22));
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
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  f_23 :
  if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
    {
      i_23 = ATgetFirst((ATermList) h_23);
      j_23 = (ATerm) ATgetNext((ATermList) h_23);
      g_23 :
      if(((ATgetType(j_23) == AT_LIST) && ATisEmpty(j_23)))
        {
          t = not_null(i_23);
        }
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
  ATerm k_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = k_8;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  q_23 = t;
  o_23 :
  if(match_cons(q_23, sym__2))
    {
      r_23 = ATgetArgument(q_23, 0);
      u_23 = ATgetArgument(q_23, 1);
      p_23 :
      if(match_cons(r_23, sym__2))
        {
          s_23 = ATgetArgument(r_23, 0);
          t_23 = ATgetArgument(r_23, 1);
          {
            ATerm y_23 = NULL;
            ATerm z_23 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_23), not_null(t_23));
            {
              t = Definitions_0(t);
              {
                z_23 = t;
                if(((y_23 != NULL) && (y_23 != z_23)))
                  _fail(z_23);
                else
                  y_23 = z_23;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), not_null(u_23));
          }
        }
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
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  u_24 = t;
  s_24 :
  if(match_cons(u_24, sym_ExplodeCong_2))
    {
      v_24 = ATgetArgument(u_24, 0);
      t_24 = ATgetArgument(u_24, 1);
      {
        ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
        ATerm c_25 = NULL;
        ATerm d_25 = NULL;
        t = new_0(t);
        {
          c_25 = t;
          {
            if(((y_24 != NULL) && (y_24 != c_25)))
              _fail(c_25);
            else
              y_24 = c_25;
            {
              ATerm e_25 = NULL;
              t = new_0(t);
              {
                d_25 = t;
                {
                  if(((z_24 != NULL) && (z_24 != d_25)))
                    _fail(d_25);
                  else
                    z_24 = d_25;
                  {
                    ATerm f_25 = NULL;
                    t = new_0(t);
                    {
                      e_25 = t;
                      {
                        if(((a_25 != NULL) && (a_25 != e_25)))
                          _fail(e_25);
                        else
                          a_25 = e_25;
                        {
                          t = new_0(t);
                          {
                            f_25 = t;
                            if(((b_25 != NULL) && (b_25 != f_25)))
                              _fail(f_25);
                            else
                              b_25 = f_25;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_25)), not_null(a_25)), not_null(z_24)), not_null(y_24)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(v_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_24)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_24), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_24)))))));
      }
    }
  else
    {
      if(match_cons(u_24, sym_Build_1))
        {
          v_24 = ATgetArgument(u_24, 0);
          {
            ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
            ATerm l_25 = NULL;
            ATerm p_25 = NULL;
            t = new_0(t);
            {
              l_25 = t;
              {
                if(((j_25 != NULL) && (j_25 != l_25)))
                  _fail(l_25);
                else
                  j_25 = l_25;
                {
                  t = not_null(v_24);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
                      m_25 = t;
                      l_24 :
                      if(match_cons(m_25, sym_Explode_2))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          o_25 = ATgetArgument(m_25, 1);
                          {
                            if(((h_25 != NULL) && (h_25 != n_25)))
                              _fail(n_25);
                            else
                              h_25 = n_25;
                            {
                              if(((i_25 != NULL) && (i_25 != o_25)))
                                _fail(o_25);
                              else
                                i_25 = o_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25));
                            }
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
                      p_25 = t;
                      if(((k_25 != NULL) && (k_25 != p_25)))
                        _fail(p_25);
                      else
                        k_25 = p_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_25)))));
          }
        }
      else
        {
          if(match_cons(u_24, sym_Match_1))
            {
              v_24 = ATgetArgument(u_24, 0);
              {
                ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
                ATerm w_25 = NULL;
                ATerm x_25 = NULL;
                t = new_0(t);
                {
                  w_25 = t;
                  {
                    if(((t_25 != NULL) && (t_25 != w_25)))
                      _fail(w_25);
                    else
                      t_25 = w_25;
                    {
                      ATerm b_26 = NULL;
                      t = new_0(t);
                      {
                        x_25 = t;
                        {
                          if(((u_25 != NULL) && (u_25 != x_25)))
                            _fail(x_25);
                          else
                            u_25 = x_25;
                          {
                            t = not_null(v_24);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
                                y_25 = t;
                                q_24 :
                                if(match_cons(y_25, sym_Explode_2))
                                  {
                                    z_25 = ATgetArgument(y_25, 0);
                                    a_26 = ATgetArgument(y_25, 1);
                                    {
                                      if(((r_25 != NULL) && (r_25 != z_25)))
                                        _fail(z_25);
                                      else
                                        r_25 = z_25;
                                      {
                                        if(((s_25 != NULL) && (s_25 != a_26)))
                                          _fail(a_26);
                                        else
                                          s_25 = a_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25));
                                      }
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
                                b_26 = t;
                                if(((v_25 != NULL) && (v_25 != b_26)))
                                  _fail(b_26);
                                else
                                  v_25 = b_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_25)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25))), (ATerm) ATmakeAppl(sym_Prim_2, term_e_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_25)), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25)))))));
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
  ATerm g_27 = NULL,h_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_Match_1))
    {
      h_27 = ATgetArgument(g_27, 0);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
            ATerm n_27 = NULL;
            ATerm r_27 = NULL;
            t = new_0(t);
            {
              n_27 = t;
              {
                if(((l_27 != NULL) && (l_27 != n_27)))
                  _fail(n_27);
                else
                  l_27 = n_27;
                {
                  t = not_null(h_27);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
                      o_27 = t;
                      v_26 :
                      if(match_cons(o_27, sym_Anno_2))
                        {
                          p_27 = ATgetArgument(o_27, 0);
                          q_27 = ATgetArgument(o_27, 1);
                          {
                            if(((j_27 != NULL) && (j_27 != p_27)))
                              _fail(p_27);
                            else
                              j_27 = p_27;
                            {
                              if(((k_27 != NULL) && (k_27 != q_27)))
                                _fail(q_27);
                              else
                                k_27 = q_27;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(l_27)), not_null(j_27));
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
                      r_27 = t;
                      if(((m_27 != NULL) && (m_27 != r_27)))
                        _fail(r_27);
                      else
                        m_27 = r_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_27)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_i_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_27)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(k_27))))));
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
                  ATerm w_27 = NULL;
                  ATerm z_27 = NULL;
                  t = new_0(t);
                  {
                    w_27 = t;
                    {
                      if(((u_27 != NULL) && (u_27 != w_27)))
                        _fail(w_27);
                      else
                        u_27 = w_27;
                      {
                        t = not_null(h_27);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm x_27 = NULL,y_27 = NULL;
                            x_27 = t;
                            z_26 :
                            if(match_cons(x_27, sym_RootApp_1))
                              {
                                y_27 = ATgetArgument(x_27, 0);
                                {
                                  if(((t_27 != NULL) && (t_27 != y_27)))
                                    _fail(y_27);
                                  else
                                    t_27 = y_27;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27));
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
                            z_27 = t;
                            if(((v_27 != NULL) && (v_27 != z_27)))
                              _fail(z_27);
                            else
                              v_27 = z_27;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_27))), not_null(t_27))));
                  LocalPopChoice(k_9);
                }
              else
                {
                  t = j_9;
                  {
                    ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
                    ATerm f_28 = NULL;
                    ATerm j_28 = NULL;
                    t = new_0(t);
                    {
                      f_28 = t;
                      {
                        if(((d_28 != NULL) && (d_28 != f_28)))
                          _fail(f_28);
                        else
                          d_28 = f_28;
                        {
                          t = not_null(h_27);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
                              g_28 = t;
                              d_27 :
                              if(match_cons(g_28, sym_App_2))
                                {
                                  h_28 = ATgetArgument(g_28, 0);
                                  i_28 = ATgetArgument(g_28, 1);
                                  {
                                    if(((c_28 != NULL) && (c_28 != h_28)))
                                      _fail(h_28);
                                    else
                                      c_28 = h_28;
                                    {
                                      if(((b_28 != NULL) && (b_28 != i_28)))
                                        _fail(i_28);
                                      else
                                        b_28 = i_28;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_28));
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
                              j_28 = t;
                              if(((e_28 != NULL) && (e_28 != j_28)))
                                _fail(j_28);
                              else
                                e_28 = j_28;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_28)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_28))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_28)), not_null(c_28)))));
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
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  d_29 = t;
  y_28 :
  if(match_cons(d_29, sym_Match_1))
    {
      e_29 = ATgetArgument(d_29, 0);
      c_29 :
      if(match_cons(e_29, sym_RootApp_1))
        {
          f_29 = ATgetArgument(e_29, 0);
          t = not_null(f_29);
        }
      else
        {
          if(match_cons(e_29, sym_App_2))
            {
              f_29 = ATgetArgument(e_29, 0);
              g_29 = ATgetArgument(e_29, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(f_29), not_null(g_29));
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
  ATerm e_30 = NULL,f_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_Match_1))
    {
      f_30 = ATgetArgument(e_30, 0);
      {
        ATerm j_30 = NULL,t_30 = NULL;
        ATerm x_30 = NULL;
        t = not_null(f_30);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
            u_30 = t;
            z_29 :
            if(match_cons(u_30, sym_RootApp_1))
              {
                v_30 = ATgetArgument(u_30, 0);
                a_30 :
                if(match_cons(v_30, sym_Match_1))
                  {
                    w_30 = ATgetArgument(v_30, 0);
                    {
                      if(((j_30 != NULL) && (j_30 != w_30)))
                        _fail(w_30);
                      else
                        j_30 = w_30;
                      t = not_null(j_30);
                    }
                  }
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
          t = pat_td_1(t, o_1);
          {
            x_30 = t;
            if(((t_30 != NULL) && (t_30 != x_30)))
              _fail(x_30);
            else
              t_30 = x_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_30));
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_Build_1))
    {
      z_31 = ATgetArgument(y_31, 0);
      {
        ATerm t_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
            ATerm f_32 = NULL;
            ATerm j_32 = NULL;
            t = new_0(t);
            {
              f_32 = t;
              {
                if(((d_32 != NULL) && (d_32 != f_32)))
                  _fail(f_32);
                else
                  d_32 = f_32;
                {
                  t = not_null(z_31);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
                      g_32 = t;
                      g_31 :
                      if(match_cons(g_32, sym_Anno_2))
                        {
                          h_32 = ATgetArgument(g_32, 0);
                          i_32 = ATgetArgument(g_32, 1);
                          {
                            if(((b_32 != NULL) && (b_32 != h_32)))
                              _fail(h_32);
                            else
                              b_32 = h_32;
                            {
                              if(((c_32 != NULL) && (c_32 != i_32)))
                                _fail(i_32);
                              else
                                c_32 = i_32;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_32));
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
                      j_32 = t;
                      if(((e_32 != NULL) && (e_32 != j_32)))
                        _fail(j_32);
                      else
                        e_32 = j_32;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_32)), not_null(b_32))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_32))));
            LocalPopChoice(x_9);
          }
        else
          {
            t = t_9;
            {
              ATerm c_10 = t;
              int d_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
                  ATerm o_32 = NULL;
                  ATerm r_32 = NULL;
                  t = new_0(t);
                  {
                    o_32 = t;
                    {
                      if(((m_32 != NULL) && (m_32 != o_32)))
                        _fail(o_32);
                      else
                        m_32 = o_32;
                      {
                        t = not_null(z_31);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm p_32 = NULL,q_32 = NULL;
                            p_32 = t;
                            p_31 :
                            if(match_cons(p_32, sym_RootApp_1))
                              {
                                q_32 = ATgetArgument(p_32, 0);
                                {
                                  if(((l_32 != NULL) && (l_32 != q_32)))
                                    _fail(q_32);
                                  else
                                    l_32 = q_32;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, q_1);
                          {
                            r_32 = t;
                            if(((n_32 != NULL) && (n_32 != r_32)))
                              _fail(r_32);
                            else
                              n_32 = r_32;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_32), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_32))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_32))));
                  LocalPopChoice(d_10);
                }
              else
                {
                  t = c_10;
                  {
                    ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
                    ATerm x_32 = NULL;
                    ATerm b_33 = NULL;
                    t = new_0(t);
                    {
                      x_32 = t;
                      {
                        if(((v_32 != NULL) && (v_32 != x_32)))
                          _fail(x_32);
                        else
                          v_32 = x_32;
                        {
                          t = not_null(z_31);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
                              y_32 = t;
                              v_31 :
                              if(match_cons(y_32, sym_App_2))
                                {
                                  z_32 = ATgetArgument(y_32, 0);
                                  a_33 = ATgetArgument(y_32, 1);
                                  {
                                    if(((t_32 != NULL) && (t_32 != z_32)))
                                      _fail(z_32);
                                    else
                                      t_32 = z_32;
                                    {
                                      if(((u_32 != NULL) && (u_32 != a_33)))
                                        _fail(a_33);
                                      else
                                        u_32 = a_33;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, r_1);
                            {
                              b_33 = t;
                              if(((w_32 != NULL) && (w_32 != b_33)))
                                _fail(b_33);
                              else
                                w_32 = b_33;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(t_32), not_null(u_32), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_32)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_32))));
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
  ATerm w_33 = NULL,x_33 = NULL,g_34 = NULL,h_34 = NULL;
  w_33 = t;
  u_33 :
  if(match_cons(w_33, sym_Build_1))
    {
      x_33 = ATgetArgument(w_33, 0);
      v_33 :
      if(match_cons(x_33, sym_RootApp_1))
        {
          g_34 = ATgetArgument(x_33, 0);
          t = not_null(g_34);
        }
      else
        {
          if(match_cons(x_33, sym_App_2))
            {
              g_34 = ATgetArgument(x_33, 0);
              h_34 = ATgetArgument(x_33, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_34)), not_null(g_34));
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
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_As_2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      {
        ATerm z_34 = NULL,g_35 = NULL;
        ATerm a_35 = NULL;
        t = SSLgetAnnotations(not_null(t_34));
        {
          a_35 = t;
          if(((z_34 != NULL) && (z_34 != a_35)))
            _fail(a_35);
          else
            z_34 = a_35;
        }
        {
          t = not_null(u_34);
          {
            ATerm i_35 = NULL;
            t = n_75(t);
            {
              g_35 = t;
              {
                t = not_null(v_34);
                {
                  ATerm k_35 = NULL;
                  t = o_75(t);
                  {
                    i_35 = t;
                    {
                      ATerm l_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(g_35), not_null(i_35)), not_null(z_34));
                      {
                        l_35 = t;
                        if(((k_35 != NULL) && (k_35 != l_35)))
                          _fail(l_35);
                        else
                          k_35 = l_35;
                      }
                      t = not_null(k_35);
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
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym_Prim_2))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      {
        ATerm l_36 = NULL,n_36 = NULL;
        ATerm m_36 = NULL;
        t = SSLgetAnnotations(not_null(f_36));
        {
          m_36 = t;
          if(((l_36 != NULL) && (l_36 != m_36)))
            _fail(m_36);
          else
            l_36 = m_36;
        }
        {
          t = not_null(g_36);
          {
            ATerm r_36 = NULL;
            t = t_71(t);
            {
              n_36 = t;
              {
                t = not_null(h_36);
                {
                  ATerm x_36 = NULL;
                  t = u_71(t);
                  {
                    r_36 = t;
                    {
                      ATerm y_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(n_36), not_null(r_36)), not_null(l_36));
                      {
                        y_36 = t;
                        if(((x_36 != NULL) && (x_36 != y_36)))
                          _fail(y_36);
                        else
                          x_36 = y_36;
                      }
                      t = not_null(x_36);
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
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  v_37 = t;
  q_37 :
  if(match_cons(v_37, sym_Explode_2))
    {
      w_37 = ATgetArgument(v_37, 0);
      x_37 = ATgetArgument(v_37, 1);
      {
        ATerm b_38 = NULL,d_38 = NULL;
        ATerm c_38 = NULL;
        t = SSLgetAnnotations(not_null(v_37));
        {
          c_38 = t;
          if(((b_38 != NULL) && (b_38 != c_38)))
            _fail(c_38);
          else
            b_38 = c_38;
        }
        {
          t = not_null(w_37);
          {
            ATerm m_38 = NULL;
            t = j_75(t);
            {
              d_38 = t;
              {
                t = not_null(x_37);
                {
                  ATerm o_38 = NULL;
                  t = k_75(t);
                  {
                    m_38 = t;
                    {
                      ATerm p_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(d_38), not_null(m_38)), not_null(b_38));
                      {
                        p_38 = t;
                        if(((o_38 != NULL) && (o_38 != p_38)))
                          _fail(p_38);
                        else
                          o_38 = p_38;
                      }
                      t = not_null(o_38);
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
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym_Op_2))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      {
        ATerm h_39 = NULL,j_39 = NULL;
        ATerm i_39 = NULL;
        t = SSLgetAnnotations(not_null(b_39));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
        {
          t = not_null(c_39);
          {
            ATerm l_39 = NULL;
            t = x_73(t);
            {
              j_39 = t;
              {
                t = not_null(d_39);
                {
                  ATerm n_39 = NULL;
                  t = y_73(t);
                  {
                    l_39 = t;
                    {
                      ATerm o_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(j_39), not_null(l_39)), not_null(h_39));
                      {
                        o_39 = t;
                        if(((n_39 != NULL) && (n_39 != o_39)))
                          _fail(o_39);
                        else
                          n_39 = o_39;
                      }
                      t = not_null(n_39);
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
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_111(t);
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, r_111);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, r_111);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
                  {
                    ATerm k_10 = t;
                    int l_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_111);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(l_10);
                      }
                    else
                      {
                        t = k_10;
                        {
                          ATerm m_10 = t;
                          int s_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_1 (ATerm t)
                              {
                                ATerm x_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_111);
                                  return(t);
                                }
                                t = fetch_1(t, x_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, w_1);
                              LocalPopChoice(s_10);
                            }
                          else
                            {
                              t = m_10;
                              {
                                ATerm y_1 (ATerm t)
                                {
                                  t = pat_td_1(t, r_111);
                                  return(t);
                                }
                                t = As_2(t, _id, y_1);
                              }
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
  ATerm f_40 = NULL,g_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym_Build_1))
    {
      g_40 = ATgetArgument(f_40, 0);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_40 = NULL,j_40 = NULL;
            ATerm n_40 = NULL;
            t = not_null(g_40);
            {
              ATerm z_1 (ATerm t)
              {
                ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
                k_40 = t;
                x_39 :
                if(match_cons(k_40, sym_RootApp_1))
                  {
                    l_40 = ATgetArgument(k_40, 0);
                    y_39 :
                    if(match_cons(l_40, sym_Build_1))
                      {
                        m_40 = ATgetArgument(l_40, 0);
                        {
                          if(((i_40 != NULL) && (i_40 != m_40)))
                            _fail(m_40);
                          else
                            i_40 = m_40;
                          t = not_null(i_40);
                        }
                      }
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
              t = pat_td_1(t, z_1);
              {
                n_40 = t;
                if(((j_40 != NULL) && (j_40 != n_40)))
                  _fail(n_40);
                else
                  j_40 = n_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_40));
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm p_40 = NULL,q_40 = NULL,s_40 = NULL;
              ATerm x_40 = NULL;
              t = not_null(g_40);
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
                  t_40 = t;
                  b_40 :
                  if(match_cons(t_40, sym_App_2))
                    {
                      u_40 = ATgetArgument(t_40, 0);
                      w_40 = ATgetArgument(t_40, 1);
                      c_40 :
                      if(match_cons(u_40, sym_Build_1))
                        {
                          v_40 = ATgetArgument(u_40, 0);
                          {
                            if(((q_40 != NULL) && (q_40 != v_40)))
                              _fail(v_40);
                            else
                              q_40 = v_40;
                            {
                              if(((p_40 != NULL) && (p_40 != w_40)))
                                _fail(w_40);
                              else
                                p_40 = w_40;
                              t = not_null(q_40);
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
                t = pat_td_1(t, a_2);
                {
                  x_40 = t;
                  if(((s_40 != NULL) && (s_40 != x_40)))
                    _fail(x_40);
                  else
                    s_40 = x_40;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_40));
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
  ATerm v_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = v_10;
      {
        ATerm b_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(d_11);
          }
        else
          {
            t = b_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  y_41 = t;
  r_41 :
  if(match_cons(y_41, sym_Lets_2))
    {
      z_41 = ATgetArgument(y_41, 0);
      a_42 = ATgetArgument(y_41, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(z_41), not_null(a_42));
    }
  else
    {
      if(match_cons(y_41, sym_LChoices_1))
        {
          z_41 = ATgetArgument(y_41, 0);
          s_41 :
          if(((ATgetType(z_41) == AT_LIST) && !(ATisEmpty(z_41))))
            {
              v_41 = ATgetFirst((ATermList) z_41);
              w_41 = (ATerm) ATgetNext((ATermList) z_41);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_41), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(w_41)));
            }
          else
            {
              if(((ATgetType(z_41) == AT_LIST) && ATisEmpty(z_41)))
                {
                  t = term_y_7;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(y_41, sym_Choices_1))
            {
              z_41 = ATgetArgument(y_41, 0);
              t_41 :
              if(((ATgetType(z_41) == AT_LIST) && !(ATisEmpty(z_41))))
                {
                  v_41 = ATgetFirst((ATermList) z_41);
                  w_41 = (ATerm) ATgetNext((ATermList) z_41);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_41), (ATerm) ATmakeAppl(sym_Choices_1, not_null(w_41)));
                }
              else
                {
                  if(((ATgetType(z_41) == AT_LIST) && ATisEmpty(z_41)))
                    {
                      t = term_y_7;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(y_41, sym_Seqs_1))
                {
                  z_41 = ATgetArgument(y_41, 0);
                  u_41 :
                  if(((ATgetType(z_41) == AT_LIST) && !(ATisEmpty(z_41))))
                    {
                      v_41 = ATgetFirst((ATermList) z_41);
                      w_41 = (ATerm) ATgetNext((ATermList) z_41);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_41), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_41)));
                    }
                  else
                    {
                      if(((ATgetType(z_41) == AT_LIST) && ATisEmpty(z_41)))
                        {
                          t = term_g_11;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(y_41, sym_DefaultVarDec_1))
                    {
                      z_41 = ATgetArgument(y_41, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_41), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11));
                    }
                  else
                    {
                      if(match_cons(y_41, sym_InfixApp_3))
                        {
                          z_41 = ATgetArgument(y_41, 0);
                          a_42 = ATgetArgument(y_41, 1);
                          x_41 = ATgetArgument(y_41, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(a_42), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_41)), not_null(z_41))));
                        }
                      else
                        {
                          if(match_cons(y_41, sym_BAM_3))
                            {
                              z_41 = ATgetArgument(y_41, 0);
                              a_42 = ATgetArgument(y_41, 1);
                              x_41 = ATgetArgument(y_41, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(x_41))), not_null(z_41)), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_42))));
                            }
                          else
                            {
                              if(match_cons(y_41, sym_AM_2))
                                {
                                  z_41 = ATgetArgument(y_41, 0);
                                  a_42 = ATgetArgument(y_41, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_41), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_42)));
                                }
                              else
                                {
                                  if(match_cons(y_41, sym_MA_2))
                                    {
                                      z_41 = ATgetArgument(y_41, 0);
                                      a_42 = ATgetArgument(y_41, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_41)), not_null(a_42));
                                    }
                                  else
                                    {
                                      if(match_cons(y_41, sym_BA_2))
                                        {
                                          z_41 = ATgetArgument(y_41, 0);
                                          a_42 = ATgetArgument(y_41, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_42)), not_null(z_41));
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
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  n_43 = t;
  k_43 :
  if(match_cons(n_43, sym__2))
    {
      o_43 = ATgetArgument(n_43, 0);
      r_43 = ATgetArgument(n_43, 1);
      l_43 :
      if(match_cons(o_43, sym__2))
        {
          p_43 = ATgetArgument(o_43, 0);
          q_43 = ATgetArgument(o_43, 1);
          m_43 :
          if(match_cons(r_43, sym__2))
            {
              s_43 = ATgetArgument(r_43, 0);
              t_43 = ATgetArgument(r_43, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_43)), not_null(p_43)), (ATerm) ATinsert(CheckATermList(not_null(t_43)), not_null(q_43)));
            }
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
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(((ATgetType(b_44) == AT_LIST) && !(ATisEmpty(b_44))))
    {
      c_44 = ATgetFirst((ATermList) b_44);
      d_44 = (ATerm) ATgetNext((ATermList) b_44);
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_44), not_null(d_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  i_44 :
  if(((ATgetType(j_44) == AT_LIST) && ATisEmpty(j_44)))
    {
      t = term_k_11;
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
  ATerm s_44 = NULL,t_44 = NULL;
  ATerm y_44 (ATerm t)
  {
    ATerm v_44 = NULL;
    ATerm w_44 = NULL;
    t = not_null(s_44);
    {
      ATerm l_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = l_11;
        }
      {
        t = new_0(t);
        {
          w_44 = t;
          if(((v_44 != NULL) && (v_44 != w_44)))
            _fail(w_44);
          else
            v_44 = w_44;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(v_44)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_44)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_44))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_44))));
    return(t);
  }
  ATerm z_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_g_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_44))));
    return(t);
  }
  s_44 = t;
  o_44 :
  if(match_cons(s_44, sym_Var_1))
    {
      t_44 = ATgetArgument(s_44, 0);
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_44(t);
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            t = z_44(t);
          }
      }
    }
  else
    {
      t = y_44(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm j_47 = NULL,o_48 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym_Var_1))
    {
      o_48 = ATgetArgument(j_47, 0);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_48 = NULL,t_48 = NULL;
            ATerm s_48 = NULL;
            t = SSLgetAnnotations(not_null(j_47));
            {
              s_48 = t;
              if(((r_48 != NULL) && (r_48 != s_48)))
                _fail(s_48);
              else
                r_48 = s_48;
            }
            {
              t = not_null(o_48);
              {
                ATerm v_48 = NULL;
                t = p_0(t);
                {
                  t_48 = t;
                  {
                    ATerm w_48 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_48)), not_null(r_48));
                    {
                      w_48 = t;
                      if(((v_48 != NULL) && (v_48 != w_48)))
                        _fail(w_48);
                      else
                        v_48 = w_48;
                    }
                    t = not_null(v_48);
                  }
                }
              }
            }
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm z_48 = NULL,b_49 = NULL;
              ATerm a_49 = NULL;
              t = SSLgetAnnotations(not_null(j_47));
              {
                a_49 = t;
                if(((z_48 != NULL) && (z_48 != a_49)))
                  _fail(a_49);
                else
                  z_48 = a_49;
              }
              {
                t = not_null(o_48);
                {
                  ATerm d_49 = NULL;
                  t = p_0(t);
                  {
                    b_49 = t;
                    {
                      ATerm e_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_49)), not_null(z_48));
                      {
                        e_49 = t;
                        if(((d_49 != NULL) && (d_49 != e_49)))
                          _fail(e_49);
                        else
                          d_49 = e_49;
                      }
                      t = not_null(d_49);
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
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym_Prim_2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      {
        ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
        ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,h_50 = NULL;
        t = not_null(u_49);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm q_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_11;
              }
            return(t);
          }
          t = fetch_1(t, b_2);
          {
            t = not_null(u_49);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm c_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, c_2);
                {
                  b_50 = t;
                  p_49 :
                  if(match_cons(b_50, sym__2))
                    {
                      c_50 = ATgetArgument(b_50, 0);
                      d_50 = ATgetArgument(b_50, 1);
                      q_49 :
                      if(match_cons(d_50, sym__2))
                        {
                          e_50 = ATgetArgument(d_50, 0);
                          h_50 = ATgetArgument(d_50, 1);
                          {
                            if(((x_49 != NULL) && (x_49 != c_50)))
                              _fail(c_50);
                            else
                              x_49 = c_50;
                            {
                              if(((y_49 != NULL) && (y_49 != e_50)))
                                _fail(e_50);
                              else
                                y_49 = e_50;
                              if(((z_49 != NULL) && (z_49 != h_50)))
                                _fail(h_50);
                              else
                                z_49 = h_50;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(y_49)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(t_49), not_null(z_49))));
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
  ATerm k_50 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_99(t);
        t = k_50(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = v_99(t);
      }
    return(t);
  }
  t = k_50(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_99 (ATerm))
{
  t = repeat_2(t, x_99, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  q_50 :
  if(match_cons(r_50, sym_Wld_0))
    {
      ATerm t_50 = NULL,v_50 = NULL;
      ATerm x_11;
      x_11 = t;
      {
        ATerm u_50 = NULL;
        t = SSLgetAnnotations(not_null(r_50));
        {
          u_50 = t;
          if(((t_50 != NULL) && (t_50 != u_50)))
            _fail(u_50);
          else
            t_50 = u_50;
        }
      }
      t = x_11;
      {
        ATerm w_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(t_50));
        {
          w_50 = t;
          if(((v_50 != NULL) && (v_50 != w_50)))
            _fail(w_50);
          else
            v_50 = w_50;
        }
        t = not_null(v_50);
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
  ATerm b_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm d_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(g_12);
          }
        else
          {
            t = d_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm d_75 (ATerm), ATerm e_75 (ATerm))
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  h_51 :
  if(match_cons(i_51, sym_App_2))
    {
      j_51 = ATgetArgument(i_51, 0);
      k_51 = ATgetArgument(i_51, 1);
      {
        ATerm p_51 = NULL,r_51 = NULL;
        ATerm q_51 = NULL;
        t = SSLgetAnnotations(not_null(i_51));
        {
          q_51 = t;
          if(((p_51 != NULL) && (p_51 != q_51)))
            _fail(q_51);
          else
            p_51 = q_51;
        }
        {
          t = not_null(j_51);
          {
            ATerm t_51 = NULL;
            t = d_75(t);
            {
              r_51 = t;
              {
                t = not_null(k_51);
                {
                  ATerm v_51 = NULL;
                  t = e_75(t);
                  {
                    t_51 = t;
                    {
                      ATerm w_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(r_51), not_null(t_51)), not_null(p_51));
                      {
                        w_51 = t;
                        if(((v_51 != NULL) && (v_51 != w_51)))
                          _fail(w_51);
                        else
                          v_51 = w_51;
                      }
                      t = not_null(v_51);
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
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  r_52 = t;
  q_52 :
  if(match_cons(r_52, sym_Con_3))
    {
      s_52 = ATgetArgument(r_52, 0);
      t_52 = ATgetArgument(r_52, 1);
      u_52 = ATgetArgument(r_52, 2);
      {
        ATerm z_52 = NULL,b_53 = NULL;
        ATerm a_53 = NULL;
        t = SSLgetAnnotations(not_null(r_52));
        {
          a_53 = t;
          if(((z_52 != NULL) && (z_52 != a_53)))
            _fail(a_53);
          else
            z_52 = a_53;
        }
        {
          t = not_null(s_52);
          {
            ATerm d_53 = NULL;
            t = a_75(t);
            {
              b_53 = t;
              {
                t = not_null(t_52);
                {
                  ATerm f_53 = NULL;
                  t = b_75(t);
                  {
                    d_53 = t;
                    {
                      t = not_null(u_52);
                      {
                        ATerm h_53 = NULL;
                        t = c_75(t);
                        {
                          f_53 = t;
                          {
                            ATerm i_53 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(b_53), not_null(d_53), not_null(f_53)), not_null(z_52));
                            {
                              i_53 = t;
                              if(((h_53 != NULL) && (h_53 != i_53)))
                                _fail(i_53);
                              else
                                h_53 = i_53;
                            }
                            t = not_null(h_53);
                          }
                        }
                      }
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
  ATerm h_12 = t;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, e_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL;
  t_53 = t;
  r_53 :
  if(match_cons(t_53, sym_SRule_1))
    {
      u_53 = ATgetArgument(t_53, 0);
      s_53 :
      if(match_cons(u_53, sym_StratRule_3))
        {
          v_53 = ATgetArgument(u_53, 0);
          w_53 = ATgetArgument(u_53, 1);
          x_53 = ATgetArgument(u_53, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_53)), (ATerm) ATmakeAppl(sym_Where_1, not_null(x_53))), not_null(v_53)));
        }
      else
        {
          if(match_cons(u_53, sym_Rule_3))
            {
              v_53 = ATgetArgument(u_53, 0);
              w_53 = ATgetArgument(u_53, 1);
              x_53 = ATgetArgument(u_53, 2);
              {
                t = not_null(v_53);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(w_53);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(w_53))), (ATerm) ATmakeAppl(sym_Where_1, not_null(x_53))), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_53))));
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
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
  m_54 = t;
  l_54 :
  if(match_cons(m_54, sym_Scope_2))
    {
      n_54 = ATgetArgument(m_54, 0);
      o_54 = ATgetArgument(m_54, 1);
      {
        ATerm z_54 = NULL,d_55 = NULL;
        ATerm a_55 = NULL;
        t = SSLgetAnnotations(not_null(m_54));
        {
          a_55 = t;
          if(((z_54 != NULL) && (z_54 != a_55)))
            _fail(a_55);
          else
            z_54 = a_55;
        }
        {
          t = not_null(n_54);
          {
            ATerm f_55 = NULL;
            t = b_72(t);
            {
              d_55 = t;
              {
                t = not_null(o_54);
                {
                  ATerm h_55 = NULL;
                  t = c_72(t);
                  {
                    f_55 = t;
                    {
                      ATerm i_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(d_55), not_null(f_55)), not_null(z_54));
                      {
                        i_55 = t;
                        if(((h_55 != NULL) && (h_55 != i_55)))
                          _fail(i_55);
                        else
                          h_55 = i_55;
                      }
                      t = not_null(h_55);
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
  ATerm t_55 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_85(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = _one(t, t_55);
      }
    return(t);
  }
  t = t_55(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,v_56 = NULL;
  n_56 = t;
  l_56 :
  if(match_cons(n_56, sym_SRule_1))
    {
      o_56 = ATgetArgument(n_56, 0);
      m_56 :
      if(match_cons(o_56, sym_Rule_3))
        {
          p_56 = ATgetArgument(o_56, 0);
          q_56 = ATgetArgument(o_56, 1);
          v_56 = ATgetArgument(o_56, 2);
          {
            ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
            ATerm h_57 = NULL;
            ATerm o_57 = NULL;
            t = new_0(t);
            {
              h_57 = t;
              {
                if(((e_57 != NULL) && (e_57 != h_57)))
                  _fail(h_57);
                else
                  e_57 = h_57;
                {
                  t = not_null(p_56);
                  {
                    ATerm w_57 = NULL;
                    ATerm f_2 (ATerm t)
                    {
                      ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,n_57 = NULL;
                      i_57 = t;
                      x_55 :
                      if(match_cons(i_57, sym_Con_3))
                        {
                          j_57 = ATgetArgument(i_57, 0);
                          l_57 = ATgetArgument(i_57, 1);
                          n_57 = ATgetArgument(i_57, 2);
                          y_55 :
                          if(match_cons(j_57, sym_Var_1))
                            {
                              k_57 = ATgetArgument(j_57, 0);
                              {
                                if(((d_57 != NULL) && (d_57 != k_57)))
                                  _fail(k_57);
                                else
                                  d_57 = k_57;
                                {
                                  if(((b_57 != NULL) && (b_57 != l_57)))
                                    _fail(l_57);
                                  else
                                    b_57 = l_57;
                                  {
                                    if(((z_56 != NULL) && (z_56 != n_57)))
                                      _fail(n_57);
                                    else
                                      z_56 = n_57;
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
                    t = oncetd_1(t, f_2);
                    {
                      o_57 = t;
                      {
                        if(((f_57 != NULL) && (f_57 != o_57)))
                          _fail(o_57);
                        else
                          f_57 = o_57;
                        {
                          t = not_null(q_56);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
                              p_57 = t;
                              b_56 :
                              if(match_cons(p_57, sym_Con_3))
                                {
                                  q_57 = ATgetArgument(p_57, 0);
                                  s_57 = ATgetArgument(p_57, 1);
                                  t_57 = ATgetArgument(p_57, 2);
                                  c_56 :
                                  if(match_cons(q_57, sym_Var_1))
                                    {
                                      r_57 = ATgetArgument(q_57, 0);
                                      d_56 :
                                      if(match_cons(t_57, sym_Call_2))
                                        {
                                          u_57 = ATgetArgument(t_57, 0);
                                          v_57 = ATgetArgument(t_57, 1);
                                          j_56 :
                                          if(((ATgetType(v_57) == AT_LIST) && ATisEmpty(v_57)))
                                            {
                                              {
                                                if(((d_57 != NULL) && (d_57 != r_57)))
                                                  _fail(r_57);
                                                else
                                                  d_57 = r_57;
                                                {
                                                  if(((c_57 != NULL) && (c_57 != s_57)))
                                                    _fail(s_57);
                                                  else
                                                    c_57 = s_57;
                                                  {
                                                    if(((a_57 != NULL) && (a_57 != u_57)))
                                                      _fail(u_57);
                                                    else
                                                      a_57 = u_57;
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
                            t = oncetd_1(t, g_2);
                            {
                              w_57 = t;
                              if(((g_57 != NULL) && (g_57 != w_57)))
                                _fail(w_57);
                              else
                                g_57 = w_57;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_57)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_57), not_null(g_57), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_56), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(a_57), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_57), not_null(c_57), term_g_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_57)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_57)))))));
          }
        }
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
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          {
            ATerm u_12 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(b_13);
              }
            else
              {
                t = u_12;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm u_83 (ATerm))
{
  t = u_83(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, u_83);
      return(t);
    }
    t = _all(t, h_2);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
        }
      }
    {
      ATerm j_2 (ATerm t)
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
                  LocalPopChoice(k_13);
                }
              else
                {
                  t = j_13;
                  {
                    ATerm l_13 = t;
                    int r_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(r_13);
                      }
                    else
                      {
                        t = l_13;
                        {
                          ATerm s_13 = t;
                          int x_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(x_13);
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
      t = repeat_2(t, j_2, _id);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm l_58 = NULL;
  l_58 = t;
  h_58 :
  if(match_cons(l_58, sym__0))
    {
      ATerm n_58 = NULL,p_58 = NULL;
      ATerm y_13;
      y_13 = t;
      {
        ATerm o_58 = NULL;
        t = SSLgetAnnotations(not_null(l_58));
        {
          o_58 = t;
          if(((n_58 != NULL) && (n_58 != o_58)))
            _fail(o_58);
          else
            n_58 = o_58;
        }
      }
      t = y_13;
      {
        ATerm q_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(n_58));
        {
          q_58 = t;
          if(((p_58 != NULL) && (p_58 != q_58)))
            _fail(q_58);
          else
            p_58 = q_58;
        }
        t = not_null(p_58);
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
  ATerm e_59 = NULL;
  ATerm g_59 = NULL,h_59 = NULL,p_59 = NULL,r_59 = NULL;
  e_59 = t;
  {
    ATerm z_13;
    z_13 = t;
    {
      ATerm i_59 = NULL;
      ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL;
      t = not_null(e_59);
      {
        i_59 = t;
        {
          t = SSL_explode_term(not_null(i_59));
          {
            k_59 = t;
            z_58 :
            if(match_cons(k_59, sym__2))
              {
                l_59 = ATgetArgument(k_59, 0);
                m_59 = ATgetArgument(k_59, 1);
                a_59 :
                if(match_string(l_59, ""))
                  {
                    b_59 :
                    if(((ATgetType(m_59) == AT_LIST) && !(ATisEmpty(m_59))))
                      {
                        n_59 = ATgetFirst((ATermList) m_59);
                        o_59 = (ATerm) ATgetNext((ATermList) m_59);
                        {
                          if(((g_59 != NULL) && (g_59 != n_59)))
                            _fail(n_59);
                          else
                            g_59 = n_59;
                          if(((h_59 != NULL) && (h_59 != o_59)))
                            _fail(o_59);
                          else
                            h_59 = o_59;
                        }
                      }
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
    t = z_13;
    {
      ATerm a_14;
      a_14 = t;
      {
        ATerm q_59 = NULL;
        t = term_f_9;
        {
          q_59 = t;
          if(((p_59 != NULL) && (p_59 != q_59)))
            _fail(q_59);
          else
            p_59 = q_59;
        }
      }
      t = a_14;
      {
        t = SSL_mkterm(not_null(p_59), not_null(h_59));
        {
          r_59 = t;
          t = not_null(r_59);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm l_60 = NULL;
  ATerm n_60 = NULL,o_60 = NULL;
  l_60 = t;
  {
    ATerm p_60 = NULL;
    ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
    t = not_null(l_60);
    {
      p_60 = t;
      {
        t = SSL_explode_term(not_null(p_60));
        {
          r_60 = t;
          i_60 :
          if(match_cons(r_60, sym__2))
            {
              s_60 = ATgetArgument(r_60, 0);
              t_60 = ATgetArgument(r_60, 1);
              j_60 :
              if(match_string(s_60, ""))
                {
                  k_60 :
                  if(((ATgetType(t_60) == AT_LIST) && !(ATisEmpty(t_60))))
                    {
                      u_60 = ATgetFirst((ATermList) t_60);
                      v_60 = (ATerm) ATgetNext((ATermList) t_60);
                      {
                        if(((o_60 != NULL) && (o_60 != u_60)))
                          _fail(u_60);
                        else
                          o_60 = u_60;
                        if(((n_60 != NULL) && (n_60 != v_60)))
                          _fail(v_60);
                        else
                          n_60 = v_60;
                      }
                    }
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
    t = not_null(o_60);
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
  ATerm v_61 = NULL,x_61 = NULL,z_61 = NULL;
  ATerm b_62 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_61 = NULL,t_61 = NULL;
        ATerm d_14;
        d_14 = t;
        {
          ATerm p_61 = NULL;
          t = map_1(t, Fst_0);
          {
            t = d_88(t);
            {
              p_61 = t;
              if(((o_61 != NULL) && (o_61 != p_61)))
                _fail(p_61);
              else
                o_61 = p_61;
            }
          }
        }
        t = d_14;
        {
          ATerm u_61 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = b_62(t);
            {
              u_61 = t;
              if(((t_61 != NULL) && (t_61 != u_61)))
                _fail(u_61);
              else
                t_61 = u_61;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(t_61)), not_null(o_61));
        }
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = b_62(t);
  {
    ATerm e_14;
    e_14 = t;
    {
      ATerm w_61 = NULL;
      w_61 = t;
      if(((v_61 != NULL) && (v_61 != w_61)))
        _fail(w_61);
      else
        v_61 = w_61;
    }
    t = e_14;
    {
      ATerm h_14;
      h_14 = t;
      {
        ATerm y_61 = NULL;
        t = term_f_9;
        {
          y_61 = t;
          if(((x_61 != NULL) && (x_61 != y_61)))
            _fail(y_61);
          else
            x_61 = y_61;
        }
      }
      t = h_14;
      {
        t = SSL_mkterm(not_null(x_61), not_null(v_61));
        {
          z_61 = t;
          t = not_null(z_61);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm w_63 = NULL;
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL;
  w_63 = t;
  {
    ATerm b_64 = NULL;
    ATerm c_64 = NULL;
    t = new_0(t);
    {
      b_64 = t;
      {
        if(((y_63 != NULL) && (y_63 != b_64)))
          _fail(b_64);
        else
          y_63 = b_64;
        {
          ATerm d_64 = NULL;
          t = new_0(t);
          {
            c_64 = t;
            {
              if(((z_63 != NULL) && (z_63 != c_64)))
                _fail(c_64);
              else
                z_63 = c_64;
              {
                t = new_0(t);
                {
                  d_64 = t;
                  if(((a_64 != NULL) && (a_64 != d_64)))
                    _fail(d_64);
                  else
                    a_64 = d_64;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_63)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_63)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_63)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_64))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_63), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11)), not_null(z_63), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_63)), not_null(a_64), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_64)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,j_65 = NULL;
  k_64 = t;
  j_64 :
  if(match_cons(k_64, sym__2))
    {
      l_64 = ATgetArgument(k_64, 0);
      j_65 = ATgetArgument(k_64, 1);
      {
        ATerm k_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(l_64), not_null(j_65));
            LocalPopChoice(o_14);
          }
        else
          {
            t = k_14;
            t = SSL_subtr(not_null(l_64), not_null(j_65));
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
  ATerm k_2 (ATerm t)
  {
    ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL;
    r_68 = t;
    o_65 :
    if(match_cons(r_68, sym__2))
      {
        s_68 = ATgetArgument(r_68, 0);
        t_68 = ATgetArgument(r_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_68), not_null(t_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL;
    w_68 = t;
    q_65 :
    if(match_cons(w_68, sym__3))
      {
        x_68 = ATgetArgument(w_68, 0);
        y_68 = ATgetArgument(w_68, 1);
        z_68 = ATgetArgument(w_68, 2);
        r_65 :
        if(match_int(x_68, 0))
          {
            t = not_null(z_68);
          }
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
  ATerm m_2 (ATerm t)
  {
    ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
    c_69 = t;
    q_68 :
    if(match_cons(c_69, sym__3))
      {
        d_69 = ATgetArgument(c_69, 0);
        e_69 = ATgetArgument(c_69, 1);
        f_69 = ATgetArgument(c_69, 2);
        {
          ATerm j_69 = NULL,l_69 = NULL;
          ATerm p_14;
          p_14 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), term_g_6);
            t = geq_0(t);
          }
          t = p_14;
          {
            ATerm q_14;
            q_14 = t;
            {
              ATerm k_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_69), term_g_6);
              {
                t = subt_0(t);
                {
                  k_69 = t;
                  if(((j_69 != NULL) && (j_69 != k_69)))
                    _fail(k_69);
                  else
                    j_69 = k_69;
                }
              }
            }
            t = q_14;
            {
              ATerm m_69 = NULL;
              t = not_null(e_69);
              {
                t = c_95(t);
                {
                  m_69 = t;
                  if(((l_69 != NULL) && (l_69 != m_69)))
                    _fail(m_69);
                  else
                    l_69 = m_69;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(j_69), not_null(e_69), (ATerm) ATinsert(CheckATermList(not_null(f_69)), not_null(l_69)));
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
  t = for_3(t, k_2, l_2, m_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  x_69 = t;
  w_69 :
  if(match_cons(x_69, sym__2))
    {
      y_69 = ATgetArgument(x_69, 0);
      z_69 = ATgetArgument(x_69, 1);
      {
        ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
        ATerm f_70 = NULL;
        ATerm g_70 = NULL;
        t = new_0(t);
        {
          f_70 = t;
          {
            if(((c_70 != NULL) && (c_70 != f_70)))
              _fail(f_70);
            else
              c_70 = f_70;
            {
              ATerm h_70 = NULL;
              t = new_0(t);
              {
                g_70 = t;
                {
                  if(((d_70 != NULL) && (d_70 != g_70)))
                    _fail(g_70);
                  else
                    d_70 = g_70;
                  {
                    t = new_0(t);
                    {
                      h_70 = t;
                      if(((e_70 != NULL) && (e_70 != h_70)))
                        _fail(h_70);
                      else
                        e_70 = h_70;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_70)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_70)))), (ATerm) ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_70))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_70), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_11), term_j_11)), not_null(d_70), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_70)), not_null(e_70), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_70)));
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
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
  r_70 = t;
  p_70 :
  if(match_cons(r_70, sym__2))
    {
      s_70 = ATgetArgument(r_70, 0);
      t_70 = ATgetArgument(r_70, 1);
      q_70 :
      if(((ATgetType(t_70) == AT_LIST) && ATisEmpty(t_70)))
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
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  x_70 = t;
  w_70 :
  if(((ATgetType(x_70) == AT_LIST) && !(ATisEmpty(x_70))))
    {
      y_70 = ATgetFirst((ATermList) x_70);
      z_70 = (ATerm) ATgetNext((ATermList) x_70);
      t = not_null(z_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  e_71 :
  if(((ATgetType(g_71) == AT_LIST) && !(ATisEmpty(g_71))))
    {
      h_71 = ATgetFirst((ATermList) g_71);
      i_71 = (ATerm) ATgetNext((ATermList) g_71);
      f_71 :
      if(((ATgetType(i_71) == AT_LIST) && ATisEmpty(i_71)))
        {
          t = not_null(h_71);
        }
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
  ATerm r_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = r_14;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
  ATerm x_74 (ATerm t)
  {
    ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,v_73 = NULL;
    ATerm w_14;
    w_14 = t;
    {
      ATerm z_72 = NULL,b_73 = NULL,c_73 = NULL,m_73 = NULL;
      ATerm a_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_72), term_g_6);
      {
        t = add_0(t);
        {
          a_73 = t;
          if(((z_72 != NULL) && (z_72 != a_73)))
            _fail(a_73);
          else
            z_72 = a_73;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_72), term_x_14);
        {
          t = copy_1(t, new_0);
          {
            b_73 = t;
            y_71 :
            if(((ATgetType(b_73) == AT_LIST) && !(ATisEmpty(b_73))))
              {
                c_73 = ATgetFirst((ATermList) b_73);
                m_73 = (ATerm) ATgetNext((ATermList) b_73);
                {
                  ATerm n_73 = NULL;
                  if(((r_72 != NULL) && (r_72 != c_73)))
                    _fail(c_73);
                  else
                    r_72 = c_73;
                  {
                    if(((s_72 != NULL) && (s_72 != m_73)))
                      _fail(m_73);
                    else
                      s_72 = m_73;
                    {
                      t = not_null(s_72);
                      {
                        ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL;
                        t = last_0(t);
                        {
                          n_73 = t;
                          {
                            if(((q_72 != NULL) && (q_72 != n_73)))
                              _fail(n_73);
                            else
                              q_72 = n_73;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_72)), not_null(r_72)), not_null(s_72));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    o_73 = t;
                                    x_71 :
                                    if(match_cons(o_73, sym__6))
                                      {
                                        p_73 = ATgetArgument(o_73, 0);
                                        q_73 = ATgetArgument(o_73, 1);
                                        r_73 = ATgetArgument(o_73, 2);
                                        s_73 = ATgetArgument(o_73, 3);
                                        t_73 = ATgetArgument(o_73, 4);
                                        u_73 = ATgetArgument(o_73, 5);
                                        {
                                          if(((t_72 != NULL) && (t_72 != p_73)))
                                            _fail(p_73);
                                          else
                                            t_72 = p_73;
                                          {
                                            if(((u_72 != NULL) && (u_72 != q_73)))
                                              _fail(q_73);
                                            else
                                              u_72 = q_73;
                                            {
                                              if(((v_72 != NULL) && (v_72 != r_73)))
                                                _fail(r_73);
                                              else
                                                v_72 = r_73;
                                              {
                                                if(((w_72 != NULL) && (w_72 != s_73)))
                                                  _fail(s_73);
                                                else
                                                  w_72 = s_73;
                                                {
                                                  if(((x_72 != NULL) && (x_72 != t_73)))
                                                    _fail(t_73);
                                                  else
                                                    x_72 = t_73;
                                                  if(((y_72 != NULL) && (y_72 != u_73)))
                                                    _fail(u_73);
                                                  else
                                                    y_72 = u_73;
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
    t = w_14;
    {
      ATerm w_73 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_72)), not_null(v_72)), not_null(s_72));
      {
        t = concat_0(t);
        {
          w_73 = t;
          if(((v_73 != NULL) && (v_73 != w_73)))
            _fail(w_73);
          else
            v_73 = w_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_72), term_a_15), not_null(u_72), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_73)), not_null(r_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_72), not_null(w_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_72), not_null(y_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_72))))));
    }
    return(t);
  }
  ATerm y_74 (ATerm t)
  {
    ATerm a_74 = NULL;
    ATerm b_74 = NULL;
    t = new_0(t);
    {
      b_74 = t;
      if(((a_74 != NULL) && (a_74 != b_74)))
        _fail(b_74);
      else
        a_74 = b_74;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_72), term_a_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_72), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_72), (ATerm) ATempty))), term_g_11))));
    return(t);
  }
  ATerm z_74 (ATerm t)
  {
    ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,v_74 = NULL;
    ATerm h_15;
    h_15 = t;
    {
      ATerm n_74 = NULL;
      ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
      t = new_0(t);
      {
        n_74 = t;
        {
          if(((g_74 != NULL) && (g_74 != n_74)))
            _fail(n_74);
          else
            g_74 = n_74;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_72), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_74)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  o_74 = t;
                  f_72 :
                  if(match_cons(o_74, sym__6))
                    {
                      p_74 = ATgetArgument(o_74, 0);
                      q_74 = ATgetArgument(o_74, 1);
                      r_74 = ATgetArgument(o_74, 2);
                      s_74 = ATgetArgument(o_74, 3);
                      t_74 = ATgetArgument(o_74, 4);
                      u_74 = ATgetArgument(o_74, 5);
                      {
                        if(((h_74 != NULL) && (h_74 != p_74)))
                          _fail(p_74);
                        else
                          h_74 = p_74;
                        {
                          if(((i_74 != NULL) && (i_74 != q_74)))
                            _fail(q_74);
                          else
                            i_74 = q_74;
                          {
                            if(((j_74 != NULL) && (j_74 != r_74)))
                              _fail(r_74);
                            else
                              j_74 = r_74;
                            {
                              if(((k_74 != NULL) && (k_74 != s_74)))
                                _fail(s_74);
                              else
                                k_74 = s_74;
                              {
                                if(((l_74 != NULL) && (l_74 != t_74)))
                                  _fail(t_74);
                                else
                                  l_74 = t_74;
                                if(((m_74 != NULL) && (m_74 != u_74)))
                                  _fail(u_74);
                                else
                                  m_74 = u_74;
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
    t = h_15;
    {
      ATerm w_74 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_74), not_null(l_74));
      {
        ATerm i_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = conc_two_lists_0(t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = i_15;
            t = conc_more_lists_0(t);
          }
        {
          w_74 = t;
          if(((v_74 != NULL) && (v_74 != w_74)))
            _fail(w_74);
          else
            v_74 = w_74;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(l_72), term_r_15), not_null(i_74), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(v_74)), not_null(g_74)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_f_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_74))), (ATerm) ATmakeAppl(sym_Op_2, not_null(l_72), not_null(k_74)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(l_72), not_null(m_74)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(h_74))))));
    }
    return(t);
  }
  k_72 = t;
  h_72 :
  if(match_cons(k_72, sym__3))
    {
      l_72 = ATgetArgument(k_72, 0);
      m_72 = ATgetArgument(k_72, 1);
      n_72 = ATgetArgument(k_72, 2);
      i_72 :
      if(match_string(m_72, "T"))
        {
          j_72 :
          if(match_int(n_72, 0))
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_74(t);
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  t = y_74(t);
                }
            }
          else
            {
              t = x_74(t);
            }
        }
      else
        {
          if(match_string(m_72, "D"))
            {
              t = z_74(t);
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
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  x_75 = t;
  u_75 :
  if(match_cons(x_75, sym__2))
    {
      y_75 = ATgetArgument(x_75, 0);
      d_76 = ATgetArgument(x_75, 1);
      v_75 :
      if(match_cons(y_75, sym__2))
        {
          z_75 = ATgetArgument(y_75, 0);
          c_76 = ATgetArgument(y_75, 1);
          w_75 :
          if(match_cons(z_75, sym_Mod_2))
            {
              a_76 = ATgetArgument(z_75, 0);
              b_76 = ATgetArgument(z_75, 1);
              {
                ATerm i_76 = NULL;
                ATerm j_76 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_76), not_null(b_76), not_null(c_76));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      j_76 = t;
                      if(((i_76 != NULL) && (i_76 != j_76)))
                        _fail(j_76);
                      else
                        i_76 = j_76;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_76), not_null(d_76));
              }
            }
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
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(v_15);
    }
  else
    {
      t = u_15;
      {
        t = OverloadedDef_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm w_15 = t;
            int c_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = JoinDefs1_0(t);
                LocalPopChoice(c_16);
              }
            else
              {
                t = w_15;
                t = JoinDefs2_0(t);
              }
            return(t);
          }
          t = _2(t, n_2, _id);
        }
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL;
  p_76 = t;
  n_76 :
  if(match_cons(p_76, sym__5))
    {
      q_76 = ATgetArgument(p_76, 0);
      t_76 = ATgetArgument(p_76, 1);
      u_76 = ATgetArgument(p_76, 2);
      v_76 = ATgetArgument(p_76, 3);
      w_76 = ATgetArgument(p_76, 4);
      o_76 :
      if(((ATgetType(q_76) == AT_LIST) && !(ATisEmpty(q_76))))
        {
          r_76 = ATgetFirst((ATermList) q_76);
          s_76 = (ATerm) ATgetNext((ATermList) q_76);
          t = (ATerm) ATmakeAppl(sym__5, not_null(s_76), not_null(t_76), not_null(u_76), not_null(v_76), (ATerm) ATinsert(CheckATermList(not_null(w_76)), not_null(r_76)));
        }
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
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  i_77 = t;
  h_77 :
  if(match_cons(i_77, sym__2))
    {
      j_77 = ATgetArgument(i_77, 0);
      k_77 = ATgetArgument(i_77, 1);
      {
        t = not_null(j_77);
        {
          ATerm o_77 (ATerm t)
          {
            ATerm h_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(p_16);
              }
            else
              {
                t = h_16;
                {
                  ATerm q_16 = t;
                  int r_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = not_null(k_77);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_93, o_2);
                      t = o_77(t);
                      LocalPopChoice(r_16);
                    }
                  else
                    {
                      t = q_16;
                      t = Cons_2(t, _id, o_77);
                    }
                }
              }
            return(t);
          }
          t = o_77(t);
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
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  s_77 = t;
  q_77 :
  if(match_cons(s_77, sym__2))
    {
      t_77 = ATgetArgument(s_77, 0);
      u_77 = ATgetArgument(s_77, 1);
      r_77 :
      if(((ATgetType(u_77) == AT_LIST) && !(ATisEmpty(u_77))))
        {
          v_77 = ATgetFirst((ATermList) u_77);
          w_77 = (ATerm) ATgetNext((ATermList) u_77);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_77)), not_null(v_77)), not_null(w_77));
        }
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
  ATerm d_78 = NULL,e_78 = NULL,f_78 = NULL;
  d_78 = t;
  c_78 :
  if(match_cons(d_78, sym__2))
    {
      e_78 = ATgetArgument(d_78, 0);
      f_78 = ATgetArgument(d_78, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_78)), not_null(e_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL;
  n_78 = t;
  k_78 :
  if(match_cons(n_78, sym__2))
    {
      o_78 = ATgetArgument(n_78, 0);
      r_78 = ATgetArgument(n_78, 1);
      l_78 :
      if(((ATgetType(o_78) == AT_LIST) && !(ATisEmpty(o_78))))
        {
          p_78 = ATgetFirst((ATermList) o_78);
          q_78 = (ATerm) ATgetNext((ATermList) o_78);
          m_78 :
          if(((ATgetType(r_78) == AT_LIST) && !(ATisEmpty(r_78))))
            {
              s_78 = ATgetFirst((ATermList) r_78);
              t_78 = (ATerm) ATgetNext((ATermList) r_78);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_78), not_null(s_78)), (ATerm) ATmakeAppl(sym__2, not_null(q_78), not_null(t_78)));
            }
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
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  d_79 = t;
  a_79 :
  if(match_cons(d_79, sym__2))
    {
      e_79 = ATgetArgument(d_79, 0);
      f_79 = ATgetArgument(d_79, 1);
      b_79 :
      if(((ATgetType(e_79) == AT_LIST) && ATisEmpty(e_79)))
        {
          c_79 :
          if(((ATgetType(f_79) == AT_LIST) && ATisEmpty(f_79)))
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
  ATerm h_79 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_88(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        {
          t = o_88(t);
          {
            t = _2(t, q_88, h_79);
            t = p_88(t);
          }
        }
      }
    return(t);
  }
  t = h_79(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_88 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_88);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL;
  s_79 = t;
  q_79 :
  if(((ATgetType(s_79) == AT_LIST) && !(ATisEmpty(s_79))))
    {
      t_79 = ATgetFirst((ATermList) s_79);
      w_79 = (ATerm) ATgetNext((ATermList) s_79);
      r_79 :
      if(match_cons(t_79, sym__2))
        {
          u_79 = ATgetArgument(t_79, 0);
          v_79 = ATgetArgument(t_79, 1);
          {
            ATerm a_80 = NULL,b_80 = NULL,h_80 = NULL,n_80 = NULL;
            ATerm y_16;
            y_16 = t;
            {
              ATerm c_80 = NULL;
              ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL;
              t = not_null(v_79);
              {
                c_80 = t;
                {
                  t = SSL_explode_term(not_null(c_80));
                  {
                    e_80 = t;
                    l_79 :
                    if(match_cons(e_80, sym__2))
                      {
                        f_80 = ATgetArgument(e_80, 0);
                        g_80 = ATgetArgument(e_80, 1);
                        {
                          if(((a_80 != NULL) && (a_80 != f_80)))
                            _fail(f_80);
                          else
                            a_80 = f_80;
                          if(((b_80 != NULL) && (b_80 != g_80)))
                            _fail(g_80);
                          else
                            b_80 = g_80;
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
            t = y_16;
            {
              ATerm z_16;
              z_16 = t;
              {
                ATerm i_80 = NULL;
                ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL;
                t = not_null(u_79);
                {
                  i_80 = t;
                  {
                    t = SSL_explode_term(not_null(i_80));
                    {
                      k_80 = t;
                      o_79 :
                      if(match_cons(k_80, sym__2))
                        {
                          l_80 = ATgetArgument(k_80, 0);
                          m_80 = ATgetArgument(k_80, 1);
                          {
                            if(((a_80 != NULL) && (a_80 != l_80)))
                              _fail(l_80);
                            else
                              a_80 = l_80;
                            if(((h_80 != NULL) && (h_80 != m_80)))
                              _fail(m_80);
                            else
                              h_80 = m_80;
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
              t = z_16;
              {
                ATerm o_80 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_80), not_null(b_80));
                {
                  t = zip_1(t, _id);
                  {
                    o_80 = t;
                    if(((n_80 != NULL) && (n_80 != o_80)))
                      _fail(o_80);
                    else
                      n_80 = o_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_80), not_null(w_79));
                  {
                    ATerm a_17 = t;
                    int i_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(i_17);
                      }
                    else
                      {
                        t = a_17;
                        t = conc_more_lists_0(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL;
  y_80 = t;
  w_80 :
  if(((ATgetType(y_80) == AT_LIST) && !(ATisEmpty(y_80))))
    {
      z_80 = ATgetFirst((ATermList) y_80);
      c_81 = (ATerm) ATgetNext((ATermList) y_80);
      x_80 :
      if(match_cons(z_80, sym__2))
        {
          a_81 = ATgetArgument(z_80, 0);
          b_81 = ATgetArgument(z_80, 1);
          {
            ATerm e_81 = NULL;
            if(((a_81 != NULL) && (a_81 != b_81)))
              _fail(b_81);
            else
              a_81 = b_81;
            {
              if(((e_81 != NULL) && (e_81 != c_81)))
                _fail(c_81);
              else
                e_81 = c_81;
              t = not_null(e_81);
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
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm h_81 = NULL;
        h_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(h_81));
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = u_17;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, s_2);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, p_2, q_2, r_2);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm))
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  u_81 = t;
  s_81 :
  if(match_cons(u_81, sym__5))
    {
      v_81 = ATgetArgument(u_81, 0);
      y_81 = ATgetArgument(u_81, 1);
      z_81 = ATgetArgument(u_81, 2);
      a_82 = ATgetArgument(u_81, 3);
      b_82 = ATgetArgument(u_81, 4);
      t_81 :
      if(((ATgetType(v_81) == AT_LIST) && !(ATisEmpty(v_81))))
        {
          w_81 = ATgetFirst((ATermList) v_81);
          x_81 = (ATerm) ATgetNext((ATermList) v_81);
          {
            ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,r_82 = NULL,t_82 = NULL,v_82 = NULL;
            ATerm g_18;
            g_18 = t;
            {
              ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_81), not_null(z_81));
              {
                t = e_111(t);
                {
                  m_82 = t;
                  o_81 :
                  if(match_cons(m_82, sym__2))
                    {
                      n_82 = ATgetArgument(m_82, 0);
                      o_82 = ATgetArgument(m_82, 1);
                      {
                        ATerm p_82 = NULL;
                        if(((j_82 != NULL) && (j_82 != n_82)))
                          _fail(n_82);
                        else
                          j_82 = n_82;
                        {
                          if(((i_82 != NULL) && (i_82 != o_82)))
                            _fail(o_82);
                          else
                            i_82 = o_82;
                          {
                            t = not_null(j_82);
                            {
                              ATerm q_82 = NULL;
                              t = f_111(t);
                              {
                                p_82 = t;
                                {
                                  if(((k_82 != NULL) && (k_82 != p_82)))
                                    _fail(p_82);
                                  else
                                    k_82 = p_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(y_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        q_82 = t;
                                        if(((l_82 != NULL) && (l_82 != q_82)))
                                          _fail(q_82);
                                        else
                                          l_82 = q_82;
                                      }
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
            t = g_18;
            {
              ATerm i_18;
              i_18 = t;
              {
                ATerm s_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(x_81));
                {
                  ATerm j_18 = t;
                  int k_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(k_18);
                    }
                  else
                    {
                      t = j_18;
                      t = conc_more_lists_0(t);
                    }
                  {
                    s_82 = t;
                    if(((r_82 != NULL) && (r_82 != s_82)))
                      _fail(s_82);
                    else
                      r_82 = s_82;
                  }
                }
              }
              t = i_18;
              {
                ATerm l_18;
                l_18 = t;
                {
                  ATerm u_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(y_81));
                  {
                    ATerm m_18 = t;
                    int o_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(o_18);
                      }
                    else
                      {
                        t = m_18;
                        t = conc_more_lists_0(t);
                      }
                    {
                      u_82 = t;
                      if(((t_82 != NULL) && (t_82 != u_82)))
                        _fail(u_82);
                      else
                        t_82 = u_82;
                    }
                  }
                }
                t = l_18;
                {
                  ATerm w_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_81), not_null(j_82), not_null(a_82));
                  {
                    t = g_111(t);
                    {
                      w_82 = t;
                      if(((v_82 != NULL) && (v_82 != w_82)))
                        _fail(w_82);
                      else
                        v_82 = w_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(r_82), not_null(t_82), not_null(i_82), not_null(v_82), not_null(b_82));
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
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,v_83 = NULL;
  n_83 = t;
  l_83 :
  if(match_cons(n_83, sym__5))
    {
      o_83 = ATgetArgument(n_83, 0);
      p_83 = ATgetArgument(n_83, 1);
      q_83 = ATgetArgument(n_83, 2);
      r_83 = ATgetArgument(n_83, 3);
      v_83 = ATgetArgument(n_83, 4);
      m_83 :
      if(((ATgetType(o_83) == AT_LIST) && ATisEmpty(o_83)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_83), not_null(v_83));
        }
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
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL;
  d_84 = t;
  c_84 :
  if(match_cons(d_84, sym__3))
    {
      e_84 = ATgetArgument(d_84, 0);
      f_84 = ATgetArgument(d_84, 1);
      g_84 = ATgetArgument(d_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(e_84), not_null(e_84), not_null(f_84), not_null(g_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_100 (ATerm), ATerm m_100 (ATerm))
{
  ATerm l_84 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        {
          t = m_100(t);
          t = l_84(t);
        }
      }
    return(t);
  }
  t = l_84(t);
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
  ATerm t_2 (ATerm t)
  {
    ATerm v_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, p_110, q_110, r_110);
        LocalPopChoice(x_18);
      }
    else
      {
        t = v_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, t_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm w_2 (ATerm t)
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefinitionExists_0(t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            {
            }
          }
        return(t);
      }
      t = map_1(t, w_2);
    }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL;
    o_84 = t;
    n_84 :
    if(match_cons(o_84, sym__3))
      {
        p_84 = ATgetArgument(o_84, 0);
        q_84 = ATgetArgument(o_84, 1);
        r_84 = ATgetArgument(o_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(r_84)), not_null(q_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, u_2, v_2);
  {
    ATerm f_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = f_19;
        {
          t = MissingDefs_0(t);
          {
            t = term_g_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm n_111 (ATerm))
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  a_85 = t;
  z_84 :
  if(match_cons(a_85, sym__2))
    {
      b_85 = ATgetArgument(a_85, 0);
      c_85 = ATgetArgument(a_85, 1);
      {
        ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL;
        ATerm i_19;
        i_19 = t;
        {
          ATerm i_85 = NULL;
          ATerm j_85 = NULL,m_85 = NULL,n_85 = NULL;
          t = n_111(t);
          {
            i_85 = t;
            {
              if(((f_85 != NULL) && (f_85 != i_85)))
                _fail(i_85);
              else
                f_85 = i_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(f_85), not_null(b_85), not_null(c_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_19 = t;
                    int k_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(f_85), term_l_19);
                        t = table_get_0(t);
                        LocalPopChoice(k_19);
                      }
                    else
                      {
                        t = j_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      j_85 = t;
                      y_84 :
                      if(((ATgetType(j_85) == AT_LIST) && !(ATisEmpty(j_85))))
                        {
                          m_85 = ATgetFirst((ATermList) j_85);
                          n_85 = (ATerm) ATgetNext((ATermList) j_85);
                          {
                            if(((g_85 != NULL) && (g_85 != m_85)))
                              _fail(m_85);
                            else
                              g_85 = m_85;
                            {
                              if(((h_85 != NULL) && (h_85 != n_85)))
                                _fail(n_85);
                              else
                                h_85 = n_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(f_85), term_l_19, (ATerm) ATinsert(CheckATermList(not_null(h_85)), (ATerm) ATinsert(CheckATermList(not_null(g_85)), not_null(b_85))));
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
        t = i_19;
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
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  s_85 :
  if(match_cons(t_85, sym__2))
    {
      u_85 = ATgetArgument(t_85, 0);
      v_85 = ATgetArgument(t_85, 1);
      if(((u_85 != NULL) && (u_85 != v_85)))
        _fail(v_85);
      else
        u_85 = v_85;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_94 (ATerm), ATerm b_94 (ATerm))
{
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL;
  d_86 = t;
  c_86 :
  if(((ATgetType(d_86) == AT_LIST) && !(ATisEmpty(d_86))))
    {
      e_86 = ATgetFirst((ATermList) d_86);
      f_86 = (ATerm) ATgetNext((ATermList) d_86);
      {
        t = b_94(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm i_86 = NULL;
            i_86 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_86), not_null(i_86));
              t = a_94(t);
            }
            return(t);
          }
          t = fetch_1(t, x_2);
        }
        t = not_null(f_86);
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
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
  o_86 = t;
  n_86 :
  if(match_cons(o_86, sym__2))
    {
      p_86 = ATgetArgument(o_86, 0);
      q_86 = ATgetArgument(o_86, 1);
      {
        t = not_null(p_86);
        {
          ATerm u_86 (ATerm t)
          {
            ATerm o_19 = t;
            int p_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_86);
                LocalPopChoice(p_19);
              }
            else
              {
                t = o_19;
                {
                  ATerm q_19 = t;
                  int r_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_2 (ATerm t)
                      {
                        t = not_null(q_86);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_93, y_2);
                      t = u_86(t);
                      LocalPopChoice(r_19);
                    }
                  else
                    {
                      t = q_19;
                      t = Cons_2(t, _id, u_86);
                    }
                }
              }
            return(t);
          }
          t = u_86(t);
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
  ATerm a_87 = NULL;
  ATerm d_87 = NULL;
  a_87 = t;
  {
    ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
    t = not_null(a_87);
    {
      ATerm z_2 (ATerm t)
      {
        t = term_w_19;
        return(t);
      }
      t = rewrite_1(t, z_2);
      {
        e_87 = t;
        x_86 :
        if(match_cons(e_87, sym_Defined_2))
          {
            f_87 = ATgetArgument(e_87, 0);
            g_87 = ATgetArgument(e_87, 1);
            z_86 :
            if(match_string(f_87, "f_0"))
              {
                if(((d_87 != NULL) && (d_87 != g_87)))
                  _fail(g_87);
                else
                  d_87 = g_87;
              }
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
    t = not_null(d_87);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,p_87 = NULL;
  l_87 = t;
  k_87 :
  if(((ATgetType(l_87) == AT_LIST) && !(ATisEmpty(l_87))))
    {
      m_87 = ATgetFirst((ATermList) l_87);
      p_87 = (ATerm) ATgetNext((ATermList) l_87);
      t = not_null(m_87);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  v_87 = t;
  u_87 :
  if(match_cons(v_87, sym__2))
    {
      w_87 = ATgetArgument(v_87, 0);
      x_87 = ATgetArgument(v_87, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_87), not_null(x_87));
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
  ATerm f_88 = NULL;
  ATerm h_88 = NULL;
  f_88 = t;
  {
    ATerm i_88 = NULL;
    t = term_x_14;
    {
      t = p_111(t);
      {
        i_88 = t;
        if(((h_88 != NULL) && (h_88 != i_88)))
          _fail(i_88);
        else
          h_88 = i_88;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_88), not_null(f_88));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
  y_88 = t;
  w_88 :
  if(match_cons(y_88, sym__2))
    {
      z_88 = ATgetArgument(y_88, 0);
      a_89 = ATgetArgument(y_88, 1);
      {
        ATerm e_89 = NULL,f_89 = NULL;
        ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
        t = not_null(y_88);
        {
          ATerm a_3 (ATerm t)
          {
            t = term_x_19;
            return(t);
          }
          t = rewrite_1(t, a_3);
          {
            g_89 = t;
            t_88 :
            if(match_cons(g_89, sym_Defined_3))
              {
                h_89 = ATgetArgument(g_89, 0);
                i_89 = ATgetArgument(g_89, 1);
                j_89 = ATgetArgument(g_89, 2);
                u_88 :
                if(match_string(h_89, "b_0"))
                  {
                    if(((e_89 != NULL) && (e_89 != i_89)))
                      _fail(i_89);
                    else
                      e_89 = i_89;
                    if(((f_89 != NULL) && (f_89 != j_89)))
                      _fail(j_89);
                    else
                      f_89 = j_89;
                  }
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
        t = (ATerm) ATinsert(CheckATermList(not_null(f_89)), not_null(e_89));
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
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_94(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL;
        q_89 = t;
        p_89 :
        if(((ATgetType(q_89) == AT_LIST) && !(ATisEmpty(q_89))))
          {
            r_89 = ATgetFirst((ATermList) q_89);
            s_89 = (ATerm) ATgetNext((ATermList) q_89);
            {
              ATerm v_89 = NULL,x_89 = NULL;
              ATerm a_20;
              a_20 = t;
              {
                ATerm w_89 = NULL;
                t = not_null(r_89);
                {
                  t = r_94(t);
                  {
                    w_89 = t;
                    if(((v_89 != NULL) && (v_89 != w_89)))
                      _fail(w_89);
                    else
                      v_89 = w_89;
                  }
                }
              }
              t = a_20;
              {
                ATerm y_89 = NULL;
                t = not_null(s_89);
                {
                  t = foldr_3(t, p_94, q_94, r_94);
                  {
                    y_89 = t;
                    if(((x_89 != NULL) && (x_89 != y_89)))
                      _fail(y_89);
                    else
                      x_89 = y_89;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_89), not_null(x_89));
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
  ATerm b_3 (ATerm t)
  {
    t = term_b_20;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_g_6;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,s_90 = NULL;
    n_90 = t;
    m_90 :
    if(match_cons(n_90, sym_SDef_3))
      {
        o_90 = ATgetArgument(n_90, 0);
        p_90 = ATgetArgument(n_90, 1);
        s_90 = ATgetArgument(n_90, 2);
        {
          ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
          ATerm c_20;
          c_20 = t;
          {
            ATerm a_91 = NULL;
            t = not_null(p_90);
            {
              ATerm b_91 = NULL;
              t = length_0(t);
              {
                a_91 = t;
                {
                  if(((y_90 != NULL) && (y_90 != a_91)))
                    _fail(a_91);
                  else
                    y_90 = a_91;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_90), not_null(y_90));
                    {
                      ATerm c_91 = NULL,e_91 = NULL;
                      ATerm d_20 = t;
                      int i_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(i_20);
                        }
                      else
                        {
                          t = d_20;
                          t = (ATerm) ATempty;
                        }
                      {
                        b_91 = t;
                        {
                          if(((x_90 != NULL) && (x_90 != b_91)))
                            _fail(b_91);
                          else
                            x_90 = b_91;
                          {
                            ATerm d_91 = NULL;
                            t = not_null(o_90);
                            {
                              ATerm j_20 = t;
                              int k_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(k_20);
                                }
                              else
                                {
                                  t = j_20;
                                  t = (ATerm) ATempty;
                                }
                              {
                                d_91 = t;
                                if(((c_91 != NULL) && (c_91 != d_91)))
                                  _fail(d_91);
                                else
                                  c_91 = d_91;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(y_90)), not_null(c_91));
                              {
                                t = union_1(t, eq_0);
                                {
                                  e_91 = t;
                                  {
                                    if(((z_90 != NULL) && (z_90 != e_91)))
                                      _fail(e_91);
                                    else
                                      z_90 = e_91;
                                    {
                                      ATerm o_20;
                                      o_20 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(o_90), not_null(y_90)), (ATerm) ATmakeAppl(sym_Defined_3, term_q_20, not_null(n_90), not_null(x_90)));
                                        {
                                          ATerm e_3 (ATerm t)
                                          {
                                            t = term_x_19;
                                            return(t);
                                          }
                                          t = assert_1(t, e_3);
                                        }
                                      }
                                      t = o_20;
                                      {
                                        ATerm t_20;
                                        t_20 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_90), (ATerm) ATmakeAppl(sym_Defined_2, term_u_20, not_null(z_90)));
                                          {
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = term_w_19;
                                              return(t);
                                            }
                                            t = assert_1(t, f_3);
                                          }
                                        }
                                        t = t_20;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = c_20;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, d_3);
  return(t);
}
ATerm needed_defs_0 (ATerm t)
{
  ATerm l_91 = NULL;
  ATerm m_91 = NULL;
  t = sort_defs_0(t);
  {
    m_91 = t;
    if(((l_91 != NULL) && (l_91 != m_91)))
      _fail(m_91);
    else
      l_91 = m_91;
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_w_20), not_null(l_91), (ATerm) ATempty);
    t = extract_needed_defs_0(t);
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm t_91 = NULL,u_91 = NULL;
  t_91 = t;
  s_91 :
  if(match_cons(t_91, sym_Strategies_1))
    {
      u_91 = ATgetArgument(t_91, 0);
      {
        ATerm x_91 = NULL,z_91 = NULL;
        ATerm y_91 = NULL;
        t = SSLgetAnnotations(not_null(t_91));
        {
          y_91 = t;
          if(((x_91 != NULL) && (x_91 != y_91)))
            _fail(y_91);
          else
            x_91 = y_91;
        }
        {
          t = not_null(u_91);
          {
            ATerm b_92 = NULL;
            t = c_74(t);
            {
              z_91 = t;
              {
                ATerm c_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(z_91)), not_null(x_91));
                {
                  c_92 = t;
                  if(((b_92 != NULL) && (b_92 != c_92)))
                    _fail(c_92);
                  else
                    b_92 = c_92;
                }
                t = not_null(b_92);
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
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL;
  n_92 = t;
  m_92 :
  if(((ATgetType(n_92) == AT_LIST) && !(ATisEmpty(n_92))))
    {
      o_92 = ATgetFirst((ATermList) n_92);
      p_92 = (ATerm) ATgetNext((ATermList) n_92);
      {
        ATerm t_92 = NULL,v_92 = NULL;
        ATerm u_92 = NULL;
        t = SSLgetAnnotations(not_null(n_92));
        {
          u_92 = t;
          if(((t_92 != NULL) && (t_92 != u_92)))
            _fail(u_92);
          else
            t_92 = u_92;
        }
        {
          t = not_null(o_92);
          {
            ATerm x_92 = NULL;
            t = r_71(t);
            {
              v_92 = t;
              {
                t = not_null(p_92);
                {
                  ATerm z_92 = NULL;
                  t = s_71(t);
                  {
                    x_92 = t;
                    {
                      ATerm a_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_92)), not_null(v_92)), not_null(t_92));
                      {
                        a_93 = t;
                        if(((z_92 != NULL) && (z_92 != a_93)))
                          _fail(a_93);
                        else
                          z_92 = a_93;
                      }
                      t = not_null(z_92);
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
  ATerm q_93 = NULL,r_93 = NULL;
  q_93 = t;
  k_93 :
  if(match_cons(q_93, sym_Specification_1))
    {
      r_93 = ATgetArgument(q_93, 0);
      {
        ATerm y_93 = NULL,d_94 = NULL;
        ATerm z_93 = NULL;
        t = SSLgetAnnotations(not_null(q_93));
        {
          z_93 = t;
          if(((y_93 != NULL) && (y_93 != z_93)))
            _fail(z_93);
          else
            y_93 = z_93;
        }
        {
          t = not_null(r_93);
          {
            ATerm f_94 = NULL;
            t = e_74(t);
            {
              d_94 = t;
              {
                ATerm g_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(d_94)), not_null(y_93));
                {
                  g_94 = t;
                  if(((f_94 != NULL) && (f_94 != g_94)))
                    _fail(g_94);
                  else
                    f_94 = g_94;
                }
                t = not_null(f_94);
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
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
  w_94 = t;
  v_94 :
  if(match_cons(w_94, sym__2))
    {
      x_94 = ATgetArgument(w_94, 0);
      y_94 = ATgetArgument(w_94, 1);
      {
        ATerm e_95 = NULL,g_95 = NULL;
        ATerm f_95 = NULL;
        t = SSLgetAnnotations(not_null(w_94));
        {
          f_95 = t;
          if(((e_95 != NULL) && (e_95 != f_95)))
            _fail(f_95);
          else
            e_95 = f_95;
        }
        {
          t = not_null(x_94);
          {
            ATerm i_95 = NULL;
            t = i_70(t);
            {
              g_95 = t;
              {
                t = not_null(y_94);
                {
                  ATerm k_95 = NULL;
                  t = j_70(t);
                  {
                    i_95 = t;
                    {
                      ATerm l_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_95), not_null(i_95)), not_null(e_95));
                      {
                        l_95 = t;
                        if(((k_95 != NULL) && (k_95 != l_95)))
                          _fail(l_95);
                        else
                          k_95 = l_95;
                      }
                      t = not_null(k_95);
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
  ATerm t_95 = NULL;
  ATerm x_20;
  x_20 = t;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm u_95 = NULL,v_95 = NULL;
      u_95 = t;
      s_95 :
      if(match_cons(u_95, sym_Program_1))
        {
          v_95 = ATgetArgument(u_95, 0);
          if(((t_95 != NULL) && (t_95 != v_95)))
            _fail(v_95);
          else
            t_95 = v_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, g_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_20), not_null(t_95)), term_y_20));
      {
        t = printnl_0(t);
        {
          t = term_g_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_20;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL;
  z_95 = t;
  y_95 :
  if(match_cons(z_95, sym__2))
    {
      a_96 = ATgetArgument(z_95, 0);
      b_96 = ATgetArgument(z_95, 1);
      {
        ATerm a_21;
        a_21 = t;
        t = SSL_printnl(not_null(a_96), not_null(b_96));
        t = a_21;
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
  ATerm g_96 = NULL;
  g_96 = t;
  t = SSL_implode_string(not_null(g_96));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL;
        l_96 = t;
        k_96 :
        if(((ATgetType(l_96) == AT_LIST) && !(ATisEmpty(l_96))))
          {
            m_96 = ATgetFirst((ATermList) l_96);
            n_96 = (ATerm) ATgetNext((ATermList) l_96);
            {
              t = not_null(m_96);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(n_96);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_3);
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
  ATerm x_96 = NULL;
  ATerm z_96 = NULL;
  x_96 = t;
  {
    ATerm a_97 = NULL;
    ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL;
    t = not_null(x_96);
    {
      a_97 = t;
      {
        t = SSL_explode_term(not_null(a_97));
        {
          c_97 = t;
          v_96 :
          if(match_cons(c_97, sym__2))
            {
              d_97 = ATgetArgument(c_97, 0);
              e_97 = ATgetArgument(c_97, 1);
              w_96 :
              if(match_string(d_97, ""))
                {
                  if(((z_96 != NULL) && (z_96 != e_97)))
                    _fail(e_97);
                  else
                    z_96 = e_97;
                }
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
      t = not_null(z_96);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_90 (ATerm))
{
  ATerm i_97 (ATerm t)
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_97);
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        {
          t = Nil_0(t);
          t = q_90(t);
        }
      }
    return(t);
  }
  t = i_97(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
  l_97 = t;
  k_97 :
  if(match_cons(l_97, sym__2))
    {
      m_97 = ATgetArgument(l_97, 0);
      n_97 = ATgetArgument(l_97, 1);
      {
        t = not_null(m_97);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(n_97);
            return(t);
          }
          t = at_end_1(t, k_3);
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
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_97 = NULL;
  s_97 = t;
  t = SSL_explode_string(not_null(s_97));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    ATerm c_98 = NULL,e_98 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm d_98 = NULL;
      t = r_103(t);
      {
        d_98 = t;
        if(((c_98 != NULL) && (c_98 != d_98)))
          _fail(d_98);
        else
          c_98 = d_98;
      }
    }
    t = v_21;
    {
      ATerm f_98 = NULL;
      f_98 = t;
      if(((e_98 != NULL) && (e_98 != f_98)))
        _fail(f_98);
      else
        e_98 = f_98;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_98)), not_null(c_98)));
        t = printnl_0(t);
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_98 = NULL;
  j_98 = t;
  t = SSL_is_string(not_null(j_98));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm q_22 = t;
              int v_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(v_22);
                }
              else
                {
                  t = q_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, l_3);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
              s_98 = t;
              r_98 :
              if(match_cons(s_98, sym_Path_1))
                {
                  t_98 = ATgetArgument(s_98, 0);
                  t = not_null(t_98);
                }
              else
                {
                  if(match_cons(s_98, sym_Var_1))
                    {
                      t_98 = ATgetArgument(s_98, 0);
                      {
                        t = not_null(t_98);
                        {
                          ATerm w_22 = t;
                          int x_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_22);
                            }
                          else
                            {
                              t = w_22;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_y_22;
                                  return(t);
                                }
                                t = debug_1(t, m_3);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_98, sym_Prefix_2))
                        {
                          t_98 = ATgetArgument(s_98, 0);
                          u_98 = ATgetArgument(s_98, 1);
                          {
                            ATerm z_98 = NULL,b_99 = NULL;
                            ATerm z_22;
                            z_22 = t;
                            {
                              ATerm a_99 = NULL;
                              t = not_null(t_98);
                              {
                                t = eval_config_0(t);
                                {
                                  a_99 = t;
                                  if(((z_98 != NULL) && (z_98 != a_99)))
                                    _fail(a_99);
                                  else
                                    z_98 = a_99;
                                }
                              }
                            }
                            t = z_22;
                            {
                              ATerm c_99 = NULL;
                              t = not_null(u_98);
                              {
                                t = eval_config_0(t);
                                {
                                  c_99 = t;
                                  if(((b_99 != NULL) && (b_99 != c_99)))
                                    _fail(c_99);
                                  else
                                    b_99 = c_99;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_98), not_null(b_99));
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
  ATerm k_99 = NULL;
  k_99 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_23, not_null(k_99));
    {
      t = table_get_0(t);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_23;
              d_23 = t;
              {
                ATerm m_99 = NULL;
                ATerm n_99 = NULL;
                n_99 = t;
                if(((m_99 != NULL) && (m_99 != n_99)))
                  _fail(n_99);
                else
                  m_99 = n_99;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_23, not_null(k_99), not_null(m_99));
                  t = table_put_0(t);
                }
              }
              t = d_23;
            }
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm o_106 (ATerm))
{
  ATerm e_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23;
      l_23 = t;
      {
        ATerm r_99 = NULL;
        ATerm s_99 = NULL;
        t = term_m_23;
        {
          t = get_config_0(t);
          {
            s_99 = t;
            if(((r_99 != NULL) && (r_99 != s_99)))
              _fail(s_99);
            else
              r_99 = s_99;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_99), term_n_23);
          t = geq_0(t);
        }
      }
      t = l_23;
      t = o_106(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = e_23;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL;
  a_100 = t;
  z_99 :
  if(match_cons(a_100, sym__2))
    {
      b_100 = ATgetArgument(a_100, 0);
      c_100 = ATgetArgument(a_100, 1);
      t = SSL_WriteToTextFile(not_null(b_100), not_null(c_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
  i_100 = t;
  h_100 :
  if(match_cons(i_100, sym__2))
    {
      j_100 = ATgetArgument(i_100, 0);
      k_100 = ATgetArgument(i_100, 1);
      t = SSL_WriteToBinaryFile(not_null(j_100), not_null(k_100));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_100 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm z_100 = NULL,a_101 = NULL;
            z_100 = t;
            v_100 :
            if(match_cons(z_100, sym_Output_1))
              {
                a_101 = ATgetArgument(z_100, 0);
                if(((y_100 != NULL) && (y_100 != a_101)))
                  _fail(a_101);
                else
                  y_100 = a_101;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, o_3);
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          {
            ATerm b_101 = NULL;
            t = term_a_24;
            {
              b_101 = t;
              if(((y_100 != NULL) && (y_100 != b_101)))
                _fail(b_101);
              else
                y_100 = b_101;
            }
          }
        }
      return(t);
    }
    t = _2(t, n_3, _id);
  }
  t = v_23;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm q_3 (ATerm t)
      {
        t = not_null(y_100);
        return(t);
      }
      t = split_2(t, q_3, _id);
      return(t);
    }
    t = _2(t, _id, p_3);
    {
      ATerm b_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              ATerm c_101 = NULL;
              c_101 = t;
              x_100 :
              if(!(match_cons(c_101, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_3);
            return(t);
          }
          t = _2(t, r_3, WriteToBinaryFile_0);
          LocalPopChoice(c_24);
        }
      else
        {
          t = b_24;
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
  ATerm i_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL;
  ATerm d_24;
  d_24 = t;
  t = dtime_0(t);
  t = d_24;
  {
    t = v_104(t);
    {
      ATerm e_24;
      e_24 = t;
      {
        ATerm j_101 = NULL;
        t = dtime_0(t);
        {
          j_101 = t;
          if(((i_101 != NULL) && (i_101 != j_101)))
            _fail(j_101);
          else
            i_101 = j_101;
        }
      }
      t = e_24;
      {
        k_101 = t;
        h_101 :
        if(match_cons(k_101, sym__2))
          {
            l_101 = ATgetArgument(k_101, 0);
            m_101 = ATgetArgument(k_101, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_101)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_101))), not_null(m_101));
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
  ATerm s_101 = NULL;
  s_101 = t;
  t = SSL_ReadFromFile(not_null(s_101));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_87 (ATerm), ATerm o_87 (ATerm))
{
  ATerm x_101 = NULL,z_101 = NULL;
  ATerm f_24;
  f_24 = t;
  {
    ATerm y_101 = NULL;
    t = n_87(t);
    {
      y_101 = t;
      if(((x_101 != NULL) && (x_101 != y_101)))
        _fail(y_101);
      else
        x_101 = y_101;
    }
  }
  t = f_24;
  {
    ATerm a_102 = NULL;
    t = o_87(t);
    {
      a_102 = t;
      if(((z_101 != NULL) && (z_101 != a_102)))
        _fail(a_102);
      else
        z_101 = a_102;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_101), not_null(z_101));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_102 = NULL;
  ATerm g_24;
  g_24 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_3 (ATerm t)
        {
          ATerm h_102 = NULL,i_102 = NULL;
          h_102 = t;
          e_102 :
          if(match_cons(h_102, sym_Input_1))
            {
              i_102 = ATgetArgument(h_102, 0);
              if(((g_102 != NULL) && (g_102 != i_102)))
                _fail(i_102);
              else
                g_102 = i_102;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, t_3);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm j_102 = NULL;
          t = term_j_24;
          {
            j_102 = t;
            if(((g_102 != NULL) && (g_102 != j_102)))
              _fail(j_102);
            else
              g_102 = j_102;
          }
        }
      }
  }
  t = g_24;
  {
    ATerm u_3 (ATerm t)
    {
      t = not_null(g_102);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, u_3);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_102 = NULL;
  n_102 = t;
  t = SSL_string_to_int(not_null(n_102));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm v_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL,z_102 = NULL;
  v_102 = t;
  t_102 :
  if(match_string(v_102, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(v_102) == AT_LIST) && !(ATisEmpty(v_102))))
        {
          w_102 = ATgetFirst((ATermList) v_102);
          x_102 = (ATerm) ATgetNext((ATermList) v_102);
          u_102 :
          if(((ATgetType(x_102) == AT_LIST) && !(ATisEmpty(x_102))))
            {
              y_102 = ATgetFirst((ATermList) x_102);
              z_102 = (ATerm) ATgetNext((ATermList) x_102);
              {
                ATerm d_103 = NULL;
                ATerm k_24;
                k_24 = t;
                {
                  t = not_null(w_102);
                  t = l_0(t);
                }
                t = k_24;
                {
                  ATerm e_103 = NULL;
                  t = not_null(y_102);
                  {
                    t = n_0(t);
                    {
                      e_103 = t;
                      if(((d_103 != NULL) && (d_103 != e_103)))
                        _fail(e_103);
                      else
                        d_103 = e_103;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_102)), not_null(d_103));
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
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm z_103 = NULL;
        z_103 = t;
        i_103 :
        if(!(match_string(z_103, "-i")))
          {
            if(!(match_string(z_103, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        ATerm c_104 = NULL;
        ATerm o_24;
        o_24 = t;
        {
          ATerm a_104 = NULL;
          ATerm b_104 = NULL;
          b_104 = t;
          if(((a_104 != NULL) && (a_104 != b_104)))
            _fail(b_104);
          else
            a_104 = b_104;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_p_24, not_null(a_104));
            t = set_config_0(t);
          }
        }
        t = o_24;
        {
          ATerm d_104 = NULL;
          d_104 = t;
          if(((c_104 != NULL) && (c_104 != d_104)))
            _fail(d_104);
          else
            c_104 = d_104;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_104));
        }
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_r_24;
        return(t);
      }
      t = ArgOption_3(t, v_3, w_3, x_3);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm e_104 = NULL;
              e_104 = t;
              l_103 :
              if(!(match_string(e_104, "-o")))
                {
                  if(!(match_string(e_104, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm h_104 = NULL;
              ATerm g_25;
              g_25 = t;
              {
                ATerm f_104 = NULL;
                ATerm g_104 = NULL;
                g_104 = t;
                if(((f_104 != NULL) && (f_104 != g_104)))
                  _fail(g_104);
                else
                  f_104 = g_104;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_25, not_null(f_104));
                  t = set_config_0(t);
                }
              }
              t = g_25;
              {
                ATerm i_104 = NULL;
                i_104 = t;
                if(((h_104 != NULL) && (h_104 != i_104)))
                  _fail(i_104);
                else
                  h_104 = i_104;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_104));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_c_26;
              return(t);
            }
            t = ArgOption_3(t, y_3, z_3, a_4);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            {
              ATerm d_26 = t;
              int e_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_4 (ATerm t)
                  {
                    ATerm j_104 = NULL;
                    j_104 = t;
                    o_103 :
                    if(!(match_string(j_104, "-S")))
                      {
                        if(!(match_string(j_104, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm c_4 (ATerm t)
                  {
                    t = term_f_26;
                    t = set_config_0(t);
                    t = term_g_26;
                    return(t);
                  }
                  ATerm d_4 (ATerm t)
                  {
                    t = term_h_26;
                    return(t);
                  }
                  t = Option_3(t, b_4, c_4, d_4);
                  LocalPopChoice(e_26);
                }
              else
                {
                  t = d_26;
                  {
                    ATerm i_26 = t;
                    int j_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_4 (ATerm t)
                        {
                          ATerm k_104 = NULL;
                          k_104 = t;
                          p_103 :
                          if(!(match_string(k_104, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          ATerm n_104 = NULL;
                          ATerm k_26;
                          k_26 = t;
                          {
                            ATerm l_104 = NULL;
                            ATerm m_104 = NULL;
                            t = string_to_int_0(t);
                            {
                              m_104 = t;
                              if(((l_104 != NULL) && (l_104 != m_104)))
                                _fail(m_104);
                              else
                                l_104 = m_104;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_23, not_null(l_104));
                              t = set_config_0(t);
                            }
                          }
                          t = k_26;
                          {
                            ATerm o_104 = NULL;
                            o_104 = t;
                            if(((n_104 != NULL) && (n_104 != o_104)))
                              _fail(o_104);
                            else
                              n_104 = o_104;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_104));
                          }
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = term_l_26;
                          return(t);
                        }
                        t = ArgOption_3(t, e_4, f_4, g_4);
                        LocalPopChoice(j_26);
                      }
                    else
                      {
                        t = i_26;
                        {
                          ATerm m_26 = t;
                          int n_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_4 (ATerm t)
                              {
                                ATerm p_104 = NULL;
                                p_104 = t;
                                u_103 :
                                if(!(match_string(p_104, "-k")))
                                  {
                                    if(!(match_string(p_104, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                ATerm o_26;
                                o_26 = t;
                                {
                                  ATerm q_104 = NULL;
                                  ATerm r_104 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    r_104 = t;
                                    if(((q_104 != NULL) && (q_104 != r_104)))
                                      _fail(r_104);
                                    else
                                      q_104 = r_104;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_p_26, not_null(q_104));
                                    t = set_config_0(t);
                                  }
                                }
                                t = o_26;
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                t = term_q_26;
                                return(t);
                              }
                              t = ArgOption_3(t, h_4, i_4, j_4);
                              LocalPopChoice(n_26);
                            }
                          else
                            {
                              t = m_26;
                              {
                                ATerm r_26 = t;
                                int s_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_4 (ATerm t)
                                    {
                                      ATerm s_104 = NULL;
                                      s_104 = t;
                                      w_103 :
                                      if(!(match_string(s_104, "-v")))
                                        {
                                          if(!(match_string(s_104, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_4 (ATerm t)
                                    {
                                      t = term_u_26;
                                      t = set_config_0(t);
                                      t = term_w_26;
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      t = term_x_26;
                                      return(t);
                                    }
                                    t = Option_3(t, n_4, o_4, p_4);
                                    LocalPopChoice(s_26);
                                  }
                                else
                                  {
                                    t = r_26;
                                    {
                                      ATerm y_26 = t;
                                      int a_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_4 (ATerm t)
                                          {
                                            ATerm u_104 = NULL;
                                            u_104 = t;
                                            x_103 :
                                            if(!(match_string(u_104, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_4 (ATerm t)
                                          {
                                            t = term_c_27;
                                            t = set_config_0(t);
                                            t = term_e_27;
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = term_i_27;
                                            return(t);
                                          }
                                          t = Option_3(t, q_4, r_4, s_4);
                                          LocalPopChoice(a_27);
                                        }
                                      else
                                        {
                                          t = y_26;
                                          {
                                            ATerm t_4 (ATerm t)
                                            {
                                              ATerm w_104 = NULL;
                                              w_104 = t;
                                              y_103 :
                                              if(!(match_string(w_104, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm u_4 (ATerm t)
                                            {
                                              t = term_a_28;
                                              t = set_config_0(t);
                                              t = term_k_28;
                                              return(t);
                                            }
                                            ATerm v_4 (ATerm t)
                                            {
                                              t = term_l_28;
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
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, term_m_28));
  {
    t = printnl_0(t);
    {
      t = term_g_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_105 = NULL;
  p_105 = t;
  t = SSL_TicksToSeconds(not_null(p_105));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL;
  y_105 = t;
  x_105 :
  if(match_cons(y_105, sym__2))
    {
      z_105 = ATgetArgument(y_105, 0);
      a_106 = ATgetArgument(y_105, 1);
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_105), not_null(a_106));
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            t = SSL_addr(not_null(z_105), not_null(a_106));
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
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_94(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL;
        h_106 = t;
        g_106 :
        if(((ATgetType(h_106) == AT_LIST) && !(ATisEmpty(h_106))))
          {
            i_106 = ATgetFirst((ATermList) h_106);
            j_106 = (ATerm) ATgetNext((ATermList) h_106);
            {
              ATerm m_106 = NULL;
              ATerm p_106 = NULL;
              t = not_null(j_106);
              {
                t = foldr_2(t, n_94, o_94);
                {
                  p_106 = t;
                  if(((m_106 != NULL) && (m_106 != p_106)))
                    _fail(p_106);
                  else
                    m_106 = p_106;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_106), not_null(m_106));
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
  ATerm w_106 = NULL;
  ATerm y_106 = NULL;
  w_106 = t;
  {
    ATerm z_106 = NULL;
    ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
    t = not_null(w_106);
    {
      z_106 = t;
      {
        t = SSL_explode_term(not_null(z_106));
        {
          b_107 = t;
          v_106 :
          if(match_cons(b_107, sym__2))
            {
              c_107 = ATgetArgument(b_107, 0);
              d_107 = ATgetArgument(b_107, 1);
              if(((y_106 != NULL) && (y_106 != d_107)))
                _fail(d_107);
              else
                y_106 = d_107;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_106);
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
      t = term_b_20;
      return(t);
    }
    t = crush_2(t, w_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL;
  j_107 = t;
  i_107 :
  if(match_cons(j_107, sym__2))
    {
      k_107 = ATgetArgument(j_107, 0);
      l_107 = ATgetArgument(j_107, 1);
      {
        ATerm r_28;
        r_28 = t;
        {
          ATerm s_28 = t;
          int t_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_107), not_null(l_107));
              LocalPopChoice(t_28);
            }
          else
            {
              t = s_28;
              t = SSL_gtr(not_null(k_107), not_null(l_107));
            }
        }
        t = r_28;
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
  ATerm s_107 = NULL;
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL;
      t_107 = t;
      r_107 :
      if(match_cons(t_107, sym__2))
        {
          u_107 = ATgetArgument(t_107, 0);
          v_107 = ATgetArgument(t_107, 1);
          {
            if(((s_107 != NULL) && (s_107 != u_107)))
              _fail(u_107);
            else
              s_107 = u_107;
            if(((s_107 != NULL) && (s_107 != v_107)))
              _fail(v_107);
            else
              s_107 = v_107;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_28;
      z_28 = t;
      {
        ATerm y_107 = NULL;
        ATerm z_107 = NULL;
        t = term_m_23;
        {
          t = get_config_0(t);
          {
            z_107 = t;
            if(((y_107 != NULL) && (y_107 != z_107)))
              _fail(z_107);
            else
              y_107 = z_107;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_107), term_g_6);
          t = geq_0(t);
        }
      }
      t = z_28;
      t = n_106(t);
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm d_108 = NULL,f_108 = NULL;
    ATerm a_29;
    a_29 = t;
    {
      ATerm e_108 = NULL;
      t = run_time_0(t);
      {
        e_108 = t;
        if(((d_108 != NULL) && (d_108 != e_108)))
          _fail(e_108);
        else
          d_108 = e_108;
      }
    }
    t = a_29;
    {
      ATerm g_108 = NULL;
      t = term_b_29;
      {
        t = get_config_0(t);
        {
          g_108 = t;
          if(((f_108 != NULL) && (f_108 != g_108)))
            _fail(g_108);
          else
            f_108 = g_108;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), not_null(d_108)), term_h_29), not_null(f_108)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, x_4);
  {
    t = term_b_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm n_108 = NULL;
  n_108 = t;
  m_108 :
  if(match_cons(n_108, sym_Version_0))
    {
      ATerm p_108 = NULL,x_108 = NULL;
      ATerm j_29;
      j_29 = t;
      {
        ATerm w_108 = NULL;
        t = SSLgetAnnotations(not_null(n_108));
        {
          w_108 = t;
          if(((p_108 != NULL) && (p_108 != w_108)))
            _fail(w_108);
          else
            p_108 = w_108;
        }
      }
      t = j_29;
      {
        ATerm y_108 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(p_108));
        {
          y_108 = t;
          if(((x_108 != NULL) && (x_108 != y_108)))
            _fail(y_108);
          else
            x_108 = y_108;
        }
        t = not_null(x_108);
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
  ATerm y_4 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, y_4);
  t = t_104(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_109 = NULL;
  d_109 = t;
  t = SSL_table_create(not_null(d_109));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_109 = NULL;
  h_109 = t;
  {
    ATerm o_29;
    o_29 = t;
    {
      t = term_p_29;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, not_null(h_109));
          t = table_put_0(t);
        }
      }
    }
    t = o_29;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_109 = NULL;
  l_109 = t;
  t = SSL_table_destroy(not_null(l_109));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_109 = NULL;
  p_109 = t;
  t = SSL_exit(not_null(p_109));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_109 = NULL,u_109 = NULL,v_109 = NULL;
  t_109 = t;
  s_109 :
  if(((ATgetType(t_109) == AT_LIST) && ATisEmpty(t_109)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_109) == AT_LIST) && !(ATisEmpty(t_109))))
        {
          u_109 = ATgetFirst((ATermList) t_109);
          v_109 = (ATerm) ATgetNext((ATermList) t_109);
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
  ATerm r_29;
  r_29 = t;
  {
    ATerm y_109 = NULL;
    ATerm b_110 = NULL;
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm z_109 = NULL;
          ATerm a_110 = NULL;
          a_110 = t;
          if(((z_109 != NULL) && (z_109 != a_110)))
            _fail(a_110);
          else
            z_109 = a_110;
          t = (ATerm) ATinsert(ATempty, not_null(z_109));
        }
      }
    {
      b_110 = t;
      if(((y_109 != NULL) && (y_109 != b_110)))
        _fail(b_110);
      else
        y_109 = b_110;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_24, not_null(y_109));
      t = printnl_0(t);
    }
  }
  t = r_29;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm e_110 (ATerm t)
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
        t = Cons_2(t, b_90, e_110);
      }
    return(t);
  }
  t = e_110(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL;
  n_110 = t;
  k_110 :
  if(((ATgetType(n_110) == AT_LIST) && !(ATisEmpty(n_110))))
    {
      l_110 = ATgetFirst((ATermList) n_110);
      m_110 = (ATerm) ATgetNext((ATermList) n_110);
      {
        ATerm t_110 = NULL;
        t = not_null(m_110);
        {
          ATerm w_29;
          w_29 = t;
          {
            ATerm u_110 = NULL,w_110 = NULL,y_110 = NULL;
            ATerm x_29;
            x_29 = t;
            {
              ATerm v_110 = NULL;
              t = k_0(t);
              {
                v_110 = t;
                if(((u_110 != NULL) && (u_110 != v_110)))
                  _fail(v_110);
                else
                  u_110 = v_110;
              }
            }
            t = x_29;
            {
              ATerm x_110 = NULL;
              t = not_null(l_110);
              {
                t = i_0(t);
                {
                  x_110 = t;
                  if(((w_110 != NULL) && (w_110 != x_110)))
                    _fail(x_110);
                  else
                    w_110 = x_110;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_110)), not_null(w_110));
                {
                  y_110 = t;
                  if(((t_110 != NULL) && (t_110 != y_110)))
                    _fail(y_110);
                  else
                    t_110 = y_110;
                }
              }
            }
          }
          t = w_29;
          {
            ATerm z_4 (ATerm t)
            {
              t = not_null(t_110);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_110) == AT_LIST) && ATisEmpty(n_110)))
        {
          {
            t = term_x_14;
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
  ATerm a_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_108 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm m_111 = NULL,o_111 = NULL;
  m_111 = t;
  l_111 :
  if(match_cons(m_111, sym_Program_1))
    {
      o_111 = ATgetArgument(m_111, 0);
      {
        ATerm u_111 = NULL,w_111 = NULL;
        ATerm v_111 = NULL;
        t = SSLgetAnnotations(not_null(m_111));
        {
          v_111 = t;
          if(((u_111 != NULL) && (u_111 != v_111)))
            _fail(v_111);
          else
            u_111 = v_111;
        }
        {
          t = not_null(o_111);
          {
            ATerm y_111 = NULL;
            t = f_77(t);
            {
              w_111 = t;
              {
                ATerm z_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_111)), not_null(u_111));
                {
                  z_111 = t;
                  if(((y_111 != NULL) && (y_111 != z_111)))
                    _fail(z_111);
                  else
                    y_111 = z_111;
                }
                t = not_null(y_111);
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
  ATerm h_112 = NULL;
  ATerm y_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_112 = NULL;
      t = term_b_29;
      {
        t = get_config_0(t);
        {
          i_112 = t;
          if(((h_112 != NULL) && (h_112 != i_112)))
            _fail(i_112);
          else
            h_112 = i_112;
        }
      }
      LocalPopChoice(b_30);
    }
  else
    {
      t = y_29;
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm j_112 = NULL;
            j_112 = t;
            if(((h_112 != NULL) && (h_112 != j_112)))
              _fail(j_112);
            else
              h_112 = j_112;
            return(t);
          }
          t = Program_1(t, c_5);
          return(t);
        }
        t = fetch_1(t, b_5);
      }
    }
  {
    t = term_c_30;
    {
      t = echo_0(t);
      {
        t = term_i_30;
        {
          t = table_get_0(t);
          {
            ATerm d_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, d_5);
            {
              ATerm e_5 (ATerm t)
              {
                ATerm k_112 = NULL;
                ATerm l_112 = NULL;
                l_112 = t;
                if(((k_112 != NULL) && (k_112 != l_112)))
                  _fail(l_112);
                else
                  k_112 = l_112;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_112)), term_k_30);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, e_5);
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
  ATerm l_30;
  l_30 = t;
  {
    ATerm q_112 = NULL;
    ATerm r_112 = NULL;
    r_112 = t;
    if(((q_112 != NULL) && (q_112 != r_112)))
      _fail(r_112);
    else
      q_112 = r_112;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, not_null(q_112)));
      t = printnl_0(t);
    }
  }
  t = l_30;
  return(t);
}
ATerm say_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm m_30;
  m_30 = t;
  {
    t = s_103(t);
    t = debug_0(t);
  }
  t = m_30;
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
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_90, _id);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
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
      ATerm p_30;
      p_30 = t;
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
      t = p_30;
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
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_86(t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
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
        ATerm s_30;
        s_30 = t;
        {
          ATerm s_114 = NULL;
          ATerm t_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_114), not_null(n_114));
          {
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
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
        t = s_30;
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
  t = term_x_14;
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
    t = (ATerm) ATmakeAppl(sym__3, term_g_30, term_h_30, not_null(x_114));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
  e_115 = t;
  d_115 :
  if(match_string(e_115, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_115) == AT_LIST) && !(ATisEmpty(e_115))))
        {
          f_115 = ATgetFirst((ATermList) e_115);
          g_115 = (ATerm) ATgetNext((ATermList) e_115);
          {
            ATerm j_115 = NULL;
            ATerm a_31;
            a_31 = t;
            {
              t = not_null(f_115);
              t = a_0(t);
            }
            t = a_31;
            {
              ATerm k_115 = NULL;
              t = term_x_14;
              {
                t = d_0(t);
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
  ATerm f_5 (ATerm t)
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
  ATerm g_5 (ATerm t)
  {
    t = term_c_31;
    {
      t = set_config_0(t);
      t = term_d_31;
    }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_e_31;
    return(t);
  }
  t = Option_3(t, f_5, g_5, h_5);
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
        t = (ATerm) ATmakeAppl(sym__3, term_a_23, not_null(b_116), not_null(c_116));
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
  ATerm f_31;
  f_31 = t;
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_31;
        t = t_108(t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
        }
      }
  }
  t = f_31;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm k_116 = NULL;
      ATerm k_31;
      k_31 = t;
      {
        ATerm i_116 = NULL;
        ATerm j_116 = NULL;
        j_116 = t;
        if(((i_116 != NULL) && (i_116 != j_116)))
          _fail(j_116);
        else
          i_116 = j_116;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_29, not_null(i_116));
          t = set_config_0(t);
        }
      }
      t = k_31;
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
    ATerm j_5 (ATerm t)
    {
      ATerm l_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              {
                t = t_108(t);
                t = Cons_2(t, _id, j_5);
              }
            }
          LocalPopChoice(m_31);
        }
      else
        {
          t = l_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_5, j_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL;
  ATerm q_31;
  q_31 = t;
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
  t = q_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm a_117 = NULL;
  ATerm r_31;
  r_31 = t;
  {
    t = term_s_31;
    t = table_put_0(t);
  }
  t = r_31;
  {
    ATerm k_5 (ATerm t)
    {
      ATerm t_31 = t;
      int u_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_108(t);
          LocalPopChoice(u_31);
        }
      else
        {
          t = t_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_5);
    {
      ATerm w_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_32;
          k_32 = t;
          {
            ATerm s_32 = t;
            int c_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_31;
                t = get_config_0(t);
                LocalPopChoice(c_33);
              }
            else
              {
                t = s_32;
                t = fetch_1(t, Help_0);
              }
          }
          t = k_32;
          {
            t = system_usage_0(t);
            {
              t = term_b_20;
              t = exit_0(t);
            }
          }
          LocalPopChoice(a_32);
        }
      else
        {
          t = w_31;
          {
            ATerm d_33 = t;
            int e_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm b_117 = NULL;
                    b_117 = t;
                    if(((a_117 != NULL) && (a_117 != b_117)))
                      _fail(b_117);
                    else
                      a_117 = b_117;
                    return(t);
                  }
                  t = Undefined_1(t, m_5);
                  return(t);
                }
                t = fetch_1(t, l_5);
                {
                  ATerm n_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_117)), term_f_33);
                    return(t);
                  }
                  t = say_1(t, n_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_g_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(e_33);
              }
            else
              {
                t = d_33;
                {
                }
              }
          }
        }
      {
        ATerm g_33;
        g_33 = t;
        {
          t = term_g_30;
          t = table_destroy_0(t);
        }
        t = g_33;
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
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, a_105);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            {
              ATerm j_33 = t;
              int k_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_105(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_33);
                }
              else
                {
                  t = j_33;
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
  ATerm o_5 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_105(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, q_105);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, o_5, s_105, t_105, q_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm))
{
  ATerm r_5 (ATerm t)
  {
    ATerm s_5 (ATerm t)
    {
      ATerm n_33;
      n_33 = t;
      {
        ATerm e_117 = NULL;
        ATerm f_117 = NULL;
        t = term_b_29;
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
          t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATempty, not_null(e_117)));
          t = printnl_0(t);
        }
      }
      t = n_33;
      return(t);
    }
    t = if_verbose2_1(t, s_5);
    return(t);
  }
  t = iowrap_4(t, k_105, l_105, m_105, r_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm i_105 (ATerm), ATerm j_105 (ATerm))
{
  t = iowrap_3(t, i_105, j_105, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm f_105 (ATerm))
{
  ATerm t_5 (ATerm t)
  {
    t = _2(t, _id, f_105);
    return(t);
  }
  t = iowrap_2(t, t_5, _fail);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm w_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          t = Strategies_1(t, needed_defs_0);
          return(t);
        }
        t = Cons_2(t, x_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, w_5);
      return(t);
    }
    t = Specification_1(t, v_5);
    return(t);
  }
  t = iowrap_1(t, u_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_0(t);
  return(t);
}
