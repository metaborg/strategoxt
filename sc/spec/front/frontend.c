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
ATerm term_r_35;
ATerm term_l_35;
ATerm term_b_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_h_32;
ATerm term_r_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_s_30;
ATerm term_q_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_x_24;
ATerm term_p_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_s_23;
ATerm term_f_22;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_a_20;
ATerm term_m_19;
ATerm term_z_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
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
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_a_15;
ATerm term_b_13;
ATerm term_m_11;
ATerm term_m_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
void init_constant_terms (void)
{
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Op_2, term_a_15, (ATerm) ATempty);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Var_1, term_n_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Var_1, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Anno_2, term_o_15, term_r_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Var_1, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Var_1, term_w_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Anno_2, term_v_15, term_y_15);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_15);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Call_2, term_m_16, (ATerm) ATempty);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_u_16, term_o_15, term_v_15);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_15);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Call_2, term_f_17, (ATerm) ATempty);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_BAM_3, term_g_17, term_r_15, term_y_15);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Var_1, term_g_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_18);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, term_m_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_15);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("variables ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": declared, but not bound", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in overlay ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" : ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in definition ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("error in rule ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Op_2, term_f_27, (ATerm) ATempty);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_27);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATempty);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_27);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_28);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_v_30, term_e_21);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_21);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_u_18);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_s_33, term_u_18);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_u_18);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_k_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__3, term_j_34, term_k_34, (ATerm) ATempty);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm Explode_2 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm));
ATerm pat_td_1 (ATerm, ATerm j_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm n_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_77 (ATerm));
ATerm spaste_1 (ATerm, ATerm v_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm Let_2 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm n_78 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm p_83 (ATerm, ATerm (ATerm)), ATerm q_83 (ATerm), ATerm r_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_83 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm Con_3 (ATerm, ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm v_104 (ATerm));
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
ATerm rewrite_1 (ATerm, ATerm f_90 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm d_106 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_90 (ATerm));
ATerm restore_always_2 (ATerm, ATerm w_107 (ATerm), ATerm x_107 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_89 (ATerm));
ATerm scope_2 (ATerm, ATerm b_90 (ATerm), ATerm c_90 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm l_80 (ATerm), ATerm m_80 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_90 (ATerm));
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm u_81 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm v_77 (ATerm), ATerm w_77 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm r_80 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm n_83 (ATerm), ATerm o_83 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm b_83 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_100 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm q_100 (ATerm));
ATerm substitute_6 (ATerm, ATerm z_83 (ATerm), ATerm a_84 (ATerm, ATerm (ATerm)), ATerm b_84 (ATerm), ATerm c_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_84 (ATerm, ATerm (ATerm)), ATerm e_84 (ATerm));
ATerm substitute_5 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm, ATerm (ATerm)), ATerm i_84 (ATerm), ATerm j_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_84 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm s_81 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm t_81 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm w_68 (ATerm));
ATerm Overlay_3 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm));
ATerm Union_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm cart_1 (ATerm, ATerm a_97 (ATerm));
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm o_80 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm));
ATerm BAM_3 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm BA_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm AM_2 (ATerm, ATerm k_75 (ATerm), ATerm l_75 (ATerm));
ATerm MA_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm Match_1 (ATerm, ATerm o_79 (ATerm));
ATerm Build_1 (ATerm, ATerm p_79 (ATerm));
ATerm constructs_1 (ATerm, ATerm n_80 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm d_77 (ATerm));
ATerm Signature_1 (ATerm, ATerm c_77 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm z_107 (ATerm));
ATerm one_dist_1 (ATerm, ATerm m_100 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm e_101 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm m_106 (ATerm), ATerm n_106 (ATerm));
ATerm repeat_1 (ATerm, ATerm p_106 (ATerm));
ATerm listtd_1 (ATerm, ATerm u_99 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm v_76 (ATerm));
ATerm Scope_2 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm));
ATerm tboundin_3 (ATerm, ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm crush_3 (ATerm, ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm x_94 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm d_107 (ATerm), ATerm e_107 (ATerm));
ATerm for_3 (ATerm, ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm));
ATerm HdMember_1 (ATerm, ATerm k_94 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm g_103 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm u_83 (ATerm), ATerm v_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm j_105 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm));
ATerm zip_1 (ATerm, ATerm i_97 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm w_83 (ATerm), ATerm x_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm y_83 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm k_92 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm f_103 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm s_68 (ATerm), ATerm t_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_86 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_93 (ATerm), ATerm f_93 (ATerm));
ATerm crush_2 (ATerm, ATerm t_94 (ATerm), ATerm u_94 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_88 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_91 (ATerm), ATerm t_91 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_88 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_99 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_85 (ATerm));
ATerm map_1 (ATerm, ATerm q_98 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_85 (ATerm));
ATerm Program_1 (ATerm, ATerm g_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_98 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_107 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_85 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_79 (ATerm), ATerm y_79 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_87 (ATerm), ATerm w_87 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_87 (ATerm));
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_10)), not_null(j_10)), not_null(i_10)), not_null(h_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(e_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))))), (ATerm) ATmakeAppl(sym_Prim_2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_10)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11))), (ATerm) ATmakeAppl(sym_Prim_2, term_z_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_11)), (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)))))));
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
        ATerm b_9 = t;
        int c_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_d_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_12))))));
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            {
              ATerm e_9 = t;
              int f_9 = stack_ptr;
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
                  LocalPopChoice(f_9);
                }
              else
                {
                  t = e_9;
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
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
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
        ATerm k_9 = t;
        int l_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_m_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_16)), not_null(d_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_16))));
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm n_9 = t;
              int o_9 = stack_ptr;
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
                  LocalPopChoice(o_9);
                }
              else
                {
                  t = n_9;
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
ATerm Prim_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
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
            t = v_79(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm v_18 = NULL;
                  t = w_79(t);
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
ATerm Explode_2 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm))
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
            t = a_76(t);
            {
              q_19 = t;
              {
                t = not_null(k_19);
                {
                  ATerm u_19 = NULL;
                  t = b_76(t);
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
ATerm pat_td_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_80(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = pat_td_1(t, j_80);
                return(t);
              }
              t = fetch_1(t, z_0);
              return(t);
            }
            t = Op_2(t, _id, y_0);
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
                  ATerm a_1 (ATerm t)
                  {
                    t = pat_td_1(t, j_80);
                    return(t);
                  }
                  t = Explode_2(t, _id, a_1);
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
                        ATerm b_1 (ATerm t)
                        {
                          t = pat_td_1(t, j_80);
                          return(t);
                        }
                        t = Explode_2(t, b_1, _id);
                        LocalPopChoice(x_9);
                      }
                    else
                      {
                        t = w_9;
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = pat_td_1(t, j_80);
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
        ATerm y_9 = t;
        int a_10 = stack_ptr;
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
            LocalPopChoice(a_10);
          }
        else
          {
            t = y_9;
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
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm p_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = p_10;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm n_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, n_97);
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_m_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_21))));
    return(t);
  }
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Var_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_21(t);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
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
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm s_11 = t;
              int t_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
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
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(x_11);
                            }
                          else
                            {
                              t = w_11;
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
ATerm Strategies_1 (ATerm t, ATerm f_77 (ATerm))
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
            t = f_77(t);
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
ATerm Specification_1 (ATerm t, ATerm h_77 (ATerm))
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
            t = h_77(t);
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
ATerm spaste_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = split_2(t, _id, v_80);
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
            ATerm n_1 (ATerm t)
            {
              t = split_2(t, _id, v_80);
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
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            {
              ATerm p_1 (ATerm t)
              {
                t = v_80(t);
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
ATerm Rec_2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
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
            t = o_78(t);
            {
              q_25 = t;
              {
                t = not_null(k_25);
                {
                  ATerm u_25 = NULL;
                  t = p_78(t);
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
ATerm Let_2 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm))
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
            t = q_78(t);
            {
              p_26 = t;
              {
                t = not_null(j_26);
                {
                  ATerm t_26 = NULL;
                  t = r_78(t);
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
ATerm sboundin_3 (ATerm t, ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, w_80, w_80);
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
            t = SDef_3(t, y_80, y_80, w_80);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = Rec_2(t, y_80, w_80);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm k_27 = NULL,p_31 = NULL,q_31 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym_Rec_2))
    {
      p_31 = ATgetArgument(k_27, 0);
      q_31 = ATgetArgument(k_27, 1);
      t = (ATerm) ATinsert(ATempty, not_null(p_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  y_31 = t;
  x_31 :
  if(match_cons(y_31, sym_SDef_3))
    {
      z_31 = ATgetArgument(y_31, 0);
      a_32 = ATgetArgument(y_31, 1);
      b_32 = ATgetArgument(y_31, 2);
      {
        t = not_null(a_32);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm f_32 = NULL,f_35 = NULL,g_35 = NULL;
            f_32 = t;
            w_31 :
            if(match_cons(f_32, sym_VarDec_2))
              {
                f_35 = ATgetArgument(f_32, 0);
                g_35 = ATgetArgument(f_32, 1);
                t = not_null(f_35);
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
  ATerm h_37 = NULL,i_37 = NULL,r_38 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym_Let_2))
    {
      i_37 = ATgetArgument(h_37, 0);
      r_38 = ATgetArgument(h_37, 1);
      {
        t = not_null(i_37);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm u_38 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
            u_38 = t;
            h_36 :
            if(match_cons(u_38, sym_SDef_3))
              {
                c_39 = ATgetArgument(u_38, 0);
                d_39 = ATgetArgument(u_38, 1);
                e_39 = ATgetArgument(u_38, 2);
                t = not_null(c_39);
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
ATerm SVar_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm z_39 = NULL,a_40 = NULL;
  z_39 = t;
  y_39 :
  if(match_cons(z_39, sym_SVar_1))
    {
      a_40 = ATgetArgument(z_39, 0);
      {
        ATerm d_40 = NULL,f_40 = NULL;
        ATerm e_40 = NULL;
        t = SSLgetAnnotations(not_null(z_39));
        {
          e_40 = t;
          if(((d_40 != NULL) && (d_40 != e_40)))
            _fail(e_40);
          else
            d_40 = e_40;
        }
        {
          t = not_null(a_40);
          {
            ATerm h_40 = NULL;
            t = n_78(t);
            {
              f_40 = t;
              {
                ATerm i_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(f_40)), not_null(d_40));
                {
                  i_40 = t;
                  if(((h_40 != NULL) && (h_40 != i_40)))
                    _fail(i_40);
                  else
                    h_40 = i_40;
                }
                t = not_null(h_40);
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
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
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
              t = Bind2_0(t);
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, s_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm p_83 (ATerm, ATerm (ATerm)), ATerm q_83 (ATerm), ATerm r_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_83 (ATerm, ATerm (ATerm)))
{
  ATerm q_40 = NULL;
  q_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_40), (ATerm) ATempty);
    {
      ATerm t_40 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm n_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, p_83);
              LocalPopChoice(r_12);
            }
          else
            {
              t = n_12;
              {
                t = RnBinding_2(t, q_83, s_83);
                t = DistBinding_2(t, t_40, r_83);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, t_1);
        return(t);
      }
      t = t_40(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm u_40 (ATerm t, ATerm v_40 (ATerm))
  {
    t = Scope_2(t, v_40, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, u_40);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm SingleListVar_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  b_42 :
  if(match_cons(d_42, sym_Var_1))
    {
      e_42 = ATgetArgument(d_42, 0);
      c_42 :
      if(match_cons(e_42, sym_ListVar_1))
        {
          f_42 = ATgetArgument(e_42, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_42));
        }
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
ATerm ListBuild_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  d_43 = t;
  c_43 :
  if(match_cons(d_43, sym_Build_1))
    {
      e_43 = ATgetArgument(d_43, 0);
      {
        ATerm g_43 = NULL,h_43 = NULL;
        ATerm u_43 = NULL;
        t = not_null(e_43);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm i_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
            i_43 = t;
            k_42 :
            if(match_cons(i_43, sym_Op_2))
              {
                k_43 = ATgetArgument(i_43, 0);
                l_43 = ATgetArgument(i_43, 1);
                l_42 :
                if(match_string(k_43, "Cons"))
                  {
                    m_42 :
                    if(((ATgetType(l_43) == AT_LIST) && ((ATermList) l_43 != ATempty)))
                      {
                        m_43 = ATgetFirst((ATermList) l_43);
                        p_43 = (ATerm) ATgetNext((ATermList) l_43);
                        n_42 :
                        if(match_cons(m_43, sym_Var_1))
                          {
                            n_43 = ATgetArgument(m_43, 0);
                            t_42 :
                            if(match_cons(n_43, sym_ListVar_1))
                              {
                                o_43 = ATgetArgument(n_43, 0);
                                u_42 :
                                if(((ATgetType(p_43) == AT_LIST) && ((ATermList) p_43 != ATempty)))
                                  {
                                    q_43 = ATgetFirst((ATermList) p_43);
                                    t_43 = (ATerm) ATgetNext((ATermList) p_43);
                                    v_42 :
                                    if(match_cons(q_43, sym_Op_2))
                                      {
                                        r_43 = ATgetArgument(q_43, 0);
                                        s_43 = ATgetArgument(q_43, 1);
                                        w_42 :
                                        if(match_string(r_43, "Nil"))
                                          {
                                            z_42 :
                                            if(((ATermList) s_43 == ATempty))
                                              {
                                                a_43 :
                                                if(((ATermList) t_43 == ATempty))
                                                  {
                                                    {
                                                      if(((g_43 != NULL) && (g_43 != o_43)))
                                                        _fail(o_43);
                                                      else
                                                        g_43 = o_43;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_43));
                                                    }
                                                  }
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
            u_43 = t;
            if(((h_43 != NULL) && (h_43 != u_43)))
              _fail(u_43);
            else
              h_43 = u_43;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_43));
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
  ATerm m_44 = NULL,n_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_Match_1))
    {
      n_44 = ATgetArgument(m_44, 0);
      {
        ATerm p_44 = NULL,q_44 = NULL;
        ATerm m_45 = NULL;
        t = not_null(n_44);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,k_45 = NULL,l_45 = NULL;
            r_44 = t;
            a_44 :
            if(match_cons(r_44, sym_Op_2))
              {
                s_44 = ATgetArgument(r_44, 0);
                t_44 = ATgetArgument(r_44, 1);
                b_44 :
                if(match_string(s_44, "Cons"))
                  {
                    c_44 :
                    if(((ATgetType(t_44) == AT_LIST) && ((ATermList) t_44 != ATempty)))
                      {
                        u_44 = ATgetFirst((ATermList) t_44);
                        f_45 = (ATerm) ATgetNext((ATermList) t_44);
                        d_44 :
                        if(match_cons(u_44, sym_Var_1))
                          {
                            v_44 = ATgetArgument(u_44, 0);
                            e_44 :
                            if(match_cons(v_44, sym_ListVar_1))
                              {
                                e_45 = ATgetArgument(v_44, 0);
                                f_44 :
                                if(((ATgetType(f_45) == AT_LIST) && ((ATermList) f_45 != ATempty)))
                                  {
                                    g_45 = ATgetFirst((ATermList) f_45);
                                    l_45 = (ATerm) ATgetNext((ATermList) f_45);
                                    g_44 :
                                    if(match_cons(g_45, sym_Op_2))
                                      {
                                        h_45 = ATgetArgument(g_45, 0);
                                        k_45 = ATgetArgument(g_45, 1);
                                        h_44 :
                                        if(match_string(h_45, "Nil"))
                                          {
                                            i_44 :
                                            if(((ATermList) k_45 == ATempty))
                                              {
                                                j_44 :
                                                if(((ATermList) l_45 == ATempty))
                                                  {
                                                    {
                                                      if(((p_44 != NULL) && (p_44 != e_45)))
                                                        _fail(e_45);
                                                      else
                                                        p_44 = e_45;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_44));
                                                    }
                                                  }
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
            m_45 = t;
            if(((q_44 != NULL) && (q_44 != m_45)))
              _fail(m_45);
            else
              q_44 = m_45;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(q_44));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,z_46 = NULL,a_47 = NULL;
  z_46 = t;
  q_46 :
  if(match_cons(z_46, sym_InfixApp_3))
    {
      a_47 = ATgetArgument(z_46, 0);
      v_46 = ATgetArgument(z_46, 1);
      u_46 = ATgetArgument(z_46, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(v_46), (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_46)), not_null(a_47))));
    }
  else
    {
      if(match_cons(z_46, sym_BAM_3))
        {
          a_47 = ATgetArgument(z_46, 0);
          v_46 = ATgetArgument(z_46, 1);
          u_46 = ATgetArgument(z_46, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(u_46))), not_null(a_47)), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_46))));
        }
      else
        {
          if(match_cons(z_46, sym_AM_2))
            {
              a_47 = ATgetArgument(z_46, 0);
              v_46 = ATgetArgument(z_46, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_47), (ATerm) ATmakeAppl(sym_Match_1, not_null(v_46)));
            }
          else
            {
              if(match_cons(z_46, sym_MA_2))
                {
                  a_47 = ATgetArgument(z_46, 0);
                  v_46 = ATgetArgument(z_46, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_47)), not_null(v_46));
                }
              else
                {
                  if(match_cons(z_46, sym_BA_2))
                    {
                      a_47 = ATgetArgument(z_46, 0);
                      v_46 = ATgetArgument(z_46, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_46)), not_null(a_47));
                    }
                  else
                    {
                      if(match_cons(z_46, sym_Lets_2))
                        {
                          a_47 = ATgetArgument(z_46, 0);
                          v_46 = ATgetArgument(z_46, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(a_47), not_null(v_46));
                        }
                      else
                        {
                          if(match_cons(z_46, sym_LChoices_1))
                            {
                              a_47 = ATgetArgument(z_46, 0);
                              r_46 :
                              if(((ATgetType(a_47) == AT_LIST) && ((ATermList) a_47 != ATempty)))
                                {
                                  w_46 = ATgetFirst((ATermList) a_47);
                                  x_46 = (ATerm) ATgetNext((ATermList) a_47);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(w_46), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(x_46)));
                                }
                              else
                                {
                                  if(((ATermList) a_47 == ATempty))
                                    {
                                      t = term_b_13;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(z_46, sym_Choices_1))
                                {
                                  a_47 = ATgetArgument(z_46, 0);
                                  s_46 :
                                  if(((ATgetType(a_47) == AT_LIST) && ((ATermList) a_47 != ATempty)))
                                    {
                                      w_46 = ATgetFirst((ATermList) a_47);
                                      x_46 = (ATerm) ATgetNext((ATermList) a_47);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(w_46), (ATerm) ATmakeAppl(sym_Choices_1, not_null(x_46)));
                                    }
                                  else
                                    {
                                      if(((ATermList) a_47 == ATempty))
                                        {
                                          t = term_b_13;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(z_46, sym_Seqs_1))
                                    {
                                      a_47 = ATgetArgument(z_46, 0);
                                      t_46 :
                                      if(((ATgetType(a_47) == AT_LIST) && ((ATermList) a_47 != ATempty)))
                                        {
                                          w_46 = ATgetFirst((ATermList) a_47);
                                          x_46 = (ATerm) ATgetNext((ATermList) a_47);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_46), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_46)));
                                        }
                                      else
                                        {
                                          if(((ATermList) a_47 == ATempty))
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
  ATerm l_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_Wld_0))
    {
      ATerm n_48 = NULL,p_48 = NULL;
      ATerm j_13;
      j_13 = t;
      {
        ATerm o_48 = NULL;
        t = SSLgetAnnotations(not_null(l_48));
        {
          o_48 = t;
          if(((n_48 != NULL) && (n_48 != o_48)))
            _fail(o_48);
          else
            n_48 = o_48;
        }
      }
      t = j_13;
      {
        ATerm q_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(n_48));
        {
          q_48 = t;
          if(((p_48 != NULL) && (p_48 != q_48)))
            _fail(q_48);
          else
            p_48 = q_48;
        }
        t = not_null(p_48);
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
  ATerm t_13 = t;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, w_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  z_48 :
  if(match_cons(c_49, sym_App_2))
    {
      d_49 = ATgetArgument(c_49, 0);
      e_49 = ATgetArgument(c_49, 1);
      {
        ATerm n_49 = NULL,p_49 = NULL;
        ATerm o_49 = NULL;
        t = SSLgetAnnotations(not_null(c_49));
        {
          o_49 = t;
          if(((n_49 != NULL) && (n_49 != o_49)))
            _fail(o_49);
          else
            n_49 = o_49;
        }
        {
          t = not_null(d_49);
          {
            ATerm r_49 = NULL;
            t = u_75(t);
            {
              p_49 = t;
              {
                t = not_null(e_49);
                {
                  ATerm t_49 = NULL;
                  t = v_75(t);
                  {
                    r_49 = t;
                    {
                      ATerm u_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(p_49), not_null(r_49)), not_null(n_49));
                      {
                        u_49 = t;
                        if(((t_49 != NULL) && (t_49 != u_49)))
                          _fail(u_49);
                        else
                          t_49 = u_49;
                      }
                      t = not_null(t_49);
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
ATerm Con_3 (ATerm t, ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  w_50 = t;
  v_50 :
  if(match_cons(w_50, sym_Con_3))
    {
      x_50 = ATgetArgument(w_50, 0);
      y_50 = ATgetArgument(w_50, 1);
      z_50 = ATgetArgument(w_50, 2);
      {
        ATerm e_51 = NULL,g_51 = NULL;
        ATerm f_51 = NULL;
        t = SSLgetAnnotations(not_null(w_50));
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
        {
          t = not_null(x_50);
          {
            ATerm i_51 = NULL;
            t = r_75(t);
            {
              g_51 = t;
              {
                t = not_null(y_50);
                {
                  ATerm m_51 = NULL;
                  t = s_75(t);
                  {
                    i_51 = t;
                    {
                      t = not_null(z_50);
                      {
                        ATerm o_51 = NULL;
                        t = t_75(t);
                        {
                          m_51 = t;
                          {
                            ATerm p_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(g_51), not_null(i_51), not_null(m_51)), not_null(e_51));
                            {
                              p_51 = t;
                              if(((o_51 != NULL) && (o_51 != p_51)))
                                _fail(p_51);
                              else
                                o_51 = p_51;
                            }
                            t = not_null(o_51);
                          }
                        }
                      }
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
  ATerm w_13 = t;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, x_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  d_52 = t;
  b_52 :
  if(match_cons(d_52, sym_SRule_1))
    {
      e_52 = ATgetArgument(d_52, 0);
      c_52 :
      if(match_cons(e_52, sym_StratRule_3))
        {
          f_52 = ATgetArgument(e_52, 0);
          g_52 = ATgetArgument(e_52, 1);
          h_52 = ATgetArgument(e_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_52)), (ATerm) ATmakeAppl(sym_Where_1, not_null(h_52))), not_null(f_52)));
        }
      else
        {
          if(match_cons(e_52, sym_Rule_3))
            {
              f_52 = ATgetArgument(e_52, 0);
              g_52 = ATgetArgument(e_52, 1);
              h_52 = ATgetArgument(e_52, 2);
              {
                t = not_null(f_52);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(g_52);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(g_52))), (ATerm) ATmakeAppl(sym_Where_1, not_null(h_52))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_52))));
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
ATerm oncetd_1 (ATerm t, ATerm v_104 (ATerm))
{
  ATerm q_52 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_104(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = _one(t, q_52);
      }
    return(t);
  }
  t = q_52(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  j_53 = t;
  e_53 :
  if(match_cons(j_53, sym_SRule_1))
    {
      k_53 = ATgetArgument(j_53, 0);
      f_53 :
      if(match_cons(k_53, sym_Rule_3))
        {
          l_53 = ATgetArgument(k_53, 0);
          m_53 = ATgetArgument(k_53, 1);
          n_53 = ATgetArgument(k_53, 2);
          {
            ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
            ATerm z_53 = NULL;
            ATerm f_54 = NULL;
            t = new_0(t);
            {
              z_53 = t;
              {
                if(((w_53 != NULL) && (w_53 != z_53)))
                  _fail(z_53);
                else
                  w_53 = z_53;
                {
                  t = not_null(l_53);
                  {
                    ATerm n_54 = NULL;
                    ATerm y_1 (ATerm t)
                    {
                      ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL;
                      a_54 = t;
                      u_52 :
                      if(match_cons(a_54, sym_Con_3))
                        {
                          b_54 = ATgetArgument(a_54, 0);
                          d_54 = ATgetArgument(a_54, 1);
                          e_54 = ATgetArgument(a_54, 2);
                          w_52 :
                          if(match_cons(b_54, sym_Var_1))
                            {
                              c_54 = ATgetArgument(b_54, 0);
                              {
                                if(((v_53 != NULL) && (v_53 != c_54)))
                                  _fail(c_54);
                                else
                                  v_53 = c_54;
                                {
                                  if(((t_53 != NULL) && (t_53 != d_54)))
                                    _fail(d_54);
                                  else
                                    t_53 = d_54;
                                  {
                                    if(((r_53 != NULL) && (r_53 != e_54)))
                                      _fail(e_54);
                                    else
                                      r_53 = e_54;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_53));
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
                    t = oncetd_1(t, y_1);
                    {
                      f_54 = t;
                      {
                        if(((x_53 != NULL) && (x_53 != f_54)))
                          _fail(f_54);
                        else
                          x_53 = f_54;
                        {
                          t = not_null(m_53);
                          {
                            ATerm z_1 (ATerm t)
                            {
                              ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
                              g_54 = t;
                              z_52 :
                              if(match_cons(g_54, sym_Con_3))
                                {
                                  h_54 = ATgetArgument(g_54, 0);
                                  j_54 = ATgetArgument(g_54, 1);
                                  k_54 = ATgetArgument(g_54, 2);
                                  a_53 :
                                  if(match_cons(h_54, sym_Var_1))
                                    {
                                      i_54 = ATgetArgument(h_54, 0);
                                      b_53 :
                                      if(match_cons(k_54, sym_Call_2))
                                        {
                                          l_54 = ATgetArgument(k_54, 0);
                                          m_54 = ATgetArgument(k_54, 1);
                                          c_53 :
                                          if(((ATermList) m_54 == ATempty))
                                            {
                                              {
                                                if(((v_53 != NULL) && (v_53 != i_54)))
                                                  _fail(i_54);
                                                else
                                                  v_53 = i_54;
                                                {
                                                  if(((u_53 != NULL) && (u_53 != j_54)))
                                                    _fail(j_54);
                                                  else
                                                    u_53 = j_54;
                                                  {
                                                    if(((s_53 != NULL) && (s_53 != l_54)))
                                                      _fail(l_54);
                                                    else
                                                      s_53 = l_54;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(w_53));
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
                            t = oncetd_1(t, z_1);
                            {
                              n_54 = t;
                              if(((y_53 != NULL) && (y_53 != n_54)))
                                _fail(n_54);
                              else
                                y_53 = n_54;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_53)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_53), not_null(y_53), (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_53), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(s_53), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_53), not_null(u_53), term_m_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_53)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_53)))))));
          }
        }
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
  ATerm a_2 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, a_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
  a_55 = t;
  z_54 :
  if(match_cons(a_55, sym_Scope_2))
    {
      b_55 = ATgetArgument(a_55, 0);
      c_55 = ATgetArgument(a_55, 1);
      {
        ATerm f_55 = NULL;
        ATerm j_55 = NULL;
        t = not_null(b_55);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm g_55 = NULL,h_55 = NULL;
              g_55 = t;
              x_54 :
              if(match_cons(g_55, sym_ListVar_1))
                {
                  h_55 = ATgetArgument(g_55, 0);
                  t = not_null(h_55);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, c_2);
            return(t);
          }
          t = map_1(t, b_2);
          {
            j_55 = t;
            if(((f_55 != NULL) && (f_55 != j_55)))
              _fail(j_55);
            else
              f_55 = j_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_55), not_null(c_55));
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
  ATerm d_2 (ATerm t)
  {
    ATerm e_2 (ATerm t)
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, e_2);
    {
      ATerm f_2 (ATerm t)
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_14 = t;
            int q_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                LocalPopChoice(q_14);
              }
            else
              {
                t = p_14;
                {
                  ATerm r_14 = t;
                  int s_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      LocalPopChoice(s_14);
                    }
                  else
                    {
                      t = r_14;
                      t = ListBuild_0(t);
                    }
                }
              }
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, f_2);
    }
    return(t);
  }
  t = topdown_1(t, d_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  q_55 = t;
  p_55 :
  if(match_cons(q_55, sym_SDef_3))
    {
      r_55 = ATgetArgument(q_55, 0);
      s_55 = ATgetArgument(q_55, 1);
      t_55 = ATgetArgument(q_55, 2);
      {
        ATerm x_55 = NULL;
        ATerm y_55 = NULL;
        t = not_null(t_55);
        {
          t = tvars_0(t);
          {
            y_55 = t;
            if(((x_55 != NULL) && (x_55 != y_55)))
              _fail(y_55);
            else
              x_55 = y_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_55), not_null(s_55), (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_55), not_null(t_55)));
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
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym_RDef_3))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      h_56 = ATgetArgument(e_56, 2);
      {
        ATerm l_56 = NULL;
        ATerm m_56 = NULL;
        t = not_null(h_56);
        {
          t = tvars_0(t);
          {
            m_56 = t;
            if(((l_56 != NULL) && (l_56 != m_56)))
              _fail(m_56);
            else
              l_56 = m_56;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_56), not_null(g_56), (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_56), (ATerm) ATmakeAppl(sym_SRule_1, not_null(h_56))));
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
  ATerm q_56 = NULL;
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_56)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  i_57 = t;
  f_57 :
  if(match_cons(i_57, sym_OpDecl_2))
    {
      j_57 = ATgetArgument(i_57, 0);
      k_57 = ATgetArgument(i_57, 1);
      g_57 :
      if(match_cons(k_57, sym_FunType_2))
        {
          l_57 = ATgetArgument(k_57, 0);
          h_57 = ATgetArgument(k_57, 1);
          {
            ATerm p_57 = NULL,q_57 = NULL,y_57 = NULL;
            ATerm t_14;
            t_14 = t;
            {
              ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
              t = not_null(l_57);
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm r_57 = NULL,t_57 = NULL;
                  t = new_0(t);
                  {
                    ATerm w_14;
                    w_14 = t;
                    {
                      ATerm s_57 = NULL;
                      s_57 = t;
                      if(((r_57 != NULL) && (r_57 != s_57)))
                        _fail(s_57);
                      else
                        r_57 = s_57;
                    }
                    t = w_14;
                    {
                      ATerm u_57 = NULL;
                      u_57 = t;
                      if(((t_57 != NULL) && (t_57 != u_57)))
                        _fail(u_57);
                      else
                        t_57 = u_57;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(r_57), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15)), not_null(t_57));
                    }
                  }
                  return(t);
                }
                t = map_1(t, g_2);
                {
                  t = unzip_0(t);
                  {
                    v_57 = t;
                    y_56 :
                    if(match_cons(v_57, sym__2))
                      {
                        w_57 = ATgetArgument(v_57, 0);
                        x_57 = ATgetArgument(v_57, 1);
                        {
                          if(((p_57 != NULL) && (p_57 != w_57)))
                            _fail(w_57);
                          else
                            p_57 = w_57;
                          if(((q_57 != NULL) && (q_57 != x_57)))
                            _fail(x_57);
                          else
                            q_57 = x_57;
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
            t = t_14;
            {
              ATerm z_57 = NULL;
              t = not_null(q_57);
              {
                t = map_1(t, MkCall_0);
                {
                  z_57 = t;
                  if(((y_57 != NULL) && (y_57 != z_57)))
                    _fail(z_57);
                  else
                    y_57 = z_57;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_57), not_null(p_57), (ATerm) ATmakeAppl(sym_Cong_2, not_null(j_57), not_null(y_57)));
            }
          }
        }
      else
        {
          if(match_cons(k_57, sym_ConstType_1))
            {
              l_57 = ATgetArgument(k_57, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_57), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(j_57), (ATerm) ATempty));
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
  ATerm w_58 = NULL,x_58 = NULL;
  w_58 = t;
  v_58 :
  if(match_cons(w_58, sym_Constructors_1))
    {
      x_58 = ATgetArgument(w_58, 0);
      {
        t = not_null(x_58);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(w_58, sym_Sorts_1))
        {
          x_58 = ATgetArgument(w_58, 0);
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
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
  a_60 = t;
  m_59 :
  if(match_cons(a_60, sym_Specification_1))
    {
      b_60 = ATgetArgument(a_60, 0);
      n_59 :
      if(((ATgetType(b_60) == AT_LIST) && ((ATermList) b_60 != ATempty)))
        {
          c_60 = ATgetFirst((ATermList) b_60);
          e_60 = (ATerm) ATgetNext((ATermList) b_60);
          s_59 :
          if(match_cons(c_60, sym_Signature_1))
            {
              d_60 = ATgetArgument(c_60, 0);
              t_59 :
              if(((ATgetType(e_60) == AT_LIST) && ((ATermList) e_60 != ATempty)))
                {
                  f_60 = ATgetFirst((ATermList) e_60);
                  h_60 = (ATerm) ATgetNext((ATermList) e_60);
                  y_59 :
                  if(match_cons(f_60, sym_Strategies_1))
                    {
                      g_60 = ATgetArgument(f_60, 0);
                      z_59 :
                      if(((ATermList) h_60 == ATempty))
                        {
                          {
                            ATerm k_60 = NULL;
                            ATerm l_60 = NULL,n_60 = NULL,p_60 = NULL;
                            ATerm j_15;
                            j_15 = t;
                            {
                              ATerm m_60 = NULL;
                              t = not_null(d_60);
                              {
                                t = congdefs_0(t);
                                {
                                  m_60 = t;
                                  if(((l_60 != NULL) && (l_60 != m_60)))
                                    _fail(m_60);
                                  else
                                    l_60 = m_60;
                                }
                              }
                            }
                            t = j_15;
                            {
                              ATerm o_60 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(g_60)), (ATerm) ATmakeAppl(sym_RDef_3, term_k_15, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_m_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_l_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15))), (ATerm) ATmakeAppl(sym_Rule_3, term_s_15, term_c_16, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_17), term_e_17)))));
                              {
                                ATerm h_2 (ATerm t)
                                {
                                  ATerm i_17 = t;
                                  int j_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(j_17);
                                    }
                                  else
                                    {
                                      t = i_17;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, h_2);
                                {
                                  o_60 = t;
                                  if(((n_60 != NULL) && (n_60 != o_60)))
                                    _fail(o_60);
                                  else
                                    n_60 = o_60;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_60), not_null(n_60));
                                {
                                  t = conc_0(t);
                                  {
                                    p_60 = t;
                                    if(((k_60 != NULL) && (k_60 != p_60)))
                                      _fail(p_60);
                                    else
                                      k_60 = p_60;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(k_60))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(d_60))));
                          }
                        }
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
  ATerm x_60 = NULL;
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
  t = term_k_17;
  {
    ATerm i_2 (ATerm t)
    {
      t = term_l_17;
      return(t);
    }
    t = rewrite_1(t, i_2);
    {
      y_60 = t;
      v_60 :
      if(match_cons(y_60, sym_Defined_2))
        {
          z_60 = ATgetArgument(y_60, 0);
          a_61 = ATgetArgument(y_60, 1);
          w_60 :
          if(match_string(z_60, "e_0"))
            {
              if(((x_60 != NULL) && (x_60 != a_61)))
                _fail(a_61);
              else
                x_60 = a_61;
            }
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
  t = not_null(x_60);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_61 = NULL;
  h_61 = t;
  t = SSL_int_to_string(not_null(h_61));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
  y_61 = t;
  x_61 :
  if(match_cons(y_61, sym_Op_2))
    {
      z_61 = ATgetArgument(y_61, 0);
      a_62 = ATgetArgument(y_61, 1);
      {
        ATerm h_62 = NULL,i_62 = NULL;
        ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
        t = term_k_17;
        {
          ATerm j_2 (ATerm t)
          {
            t = term_m_17;
            return(t);
          }
          t = rewrite_1(t, j_2);
          {
            j_62 = t;
            v_61 :
            if(match_cons(j_62, sym_Defined_3))
              {
                k_62 = ATgetArgument(j_62, 0);
                l_62 = ATgetArgument(j_62, 1);
                m_62 = ATgetArgument(j_62, 2);
                w_61 :
                if(match_string(k_62, "f_0"))
                  {
                    ATerm n_62 = NULL;
                    if(((i_62 != NULL) && (i_62 != l_62)))
                      _fail(l_62);
                    else
                      i_62 = l_62;
                    {
                      if(((h_62 != NULL) && (h_62 != m_62)))
                        _fail(m_62);
                      else
                        h_62 = m_62;
                      {
                        ATerm o_62 = NULL;
                        t = not_null(a_62);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              o_62 = t;
                              if(((n_62 != NULL) && (n_62 != o_62)))
                                _fail(o_62);
                              else
                                n_62 = o_62;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_17), not_null(n_62)), term_y_17), not_null(z_61)), term_r_17), term_q_17), not_null(i_62)), term_p_17), not_null(h_62)), term_o_17));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_61), not_null(a_62));
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
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL;
  u_62 = t;
  t_62 :
  if(match_cons(u_62, sym__2))
    {
      v_62 = ATgetArgument(u_62, 0);
      w_62 = ATgetArgument(u_62, 1);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_62), not_null(w_62));
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = SSL_subtr(not_null(v_62), not_null(w_62));
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
  ATerm k_2 (ATerm t)
  {
    ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
    i_63 = t;
    b_63 :
    if(match_cons(i_63, sym__2))
      {
        j_63 = ATgetArgument(i_63, 0);
        k_63 = ATgetArgument(i_63, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(j_63), not_null(k_63), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
    n_63 = t;
    d_63 :
    if(match_cons(n_63, sym__3))
      {
        o_63 = ATgetArgument(n_63, 0);
        p_63 = ATgetArgument(n_63, 1);
        q_63 = ATgetArgument(n_63, 2);
        e_63 :
        if(match_int(o_63, 0))
          {
            t = not_null(q_63);
          }
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
    ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL;
    t_63 = t;
    h_63 :
    if(match_cons(t_63, sym__3))
      {
        u_63 = ATgetArgument(t_63, 0);
        v_63 = ATgetArgument(t_63, 1);
        w_63 = ATgetArgument(t_63, 2);
        {
          ATerm e_64 = NULL;
          ATerm c_18;
          c_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_63), term_d_18);
            t = geq_0(t);
          }
          t = c_18;
          {
            ATerm f_64 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_63), term_d_18);
            {
              t = subt_0(t);
              {
                f_64 = t;
                if(((e_64 != NULL) && (e_64 != f_64)))
                  _fail(f_64);
                else
                  e_64 = f_64;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_64), not_null(v_63), (ATerm) ATinsert(CheckATermList(not_null(w_63)), not_null(v_63)));
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
ATerm CheckTuple_0 (ATerm t)
{
  ATerm w_64 = NULL,b_65 = NULL,c_65 = NULL;
  w_64 = t;
  u_64 :
  if(match_cons(w_64, sym_Op_2))
    {
      b_65 = ATgetArgument(w_64, 0);
      c_65 = ATgetArgument(w_64, 1);
      v_64 :
      if(match_string(b_65, ""))
        {
          ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL;
          ATerm e_18;
          e_18 = t;
          {
            ATerm o_65 = NULL;
            t = not_null(c_65);
            {
              ATerm p_65 = NULL;
              t = length_0(t);
              {
                o_65 = t;
                {
                  if(((l_65 != NULL) && (l_65 != o_65)))
                    _fail(o_65);
                  else
                    l_65 = o_65;
                  {
                    ATerm q_65 = NULL,s_65 = NULL;
                    t = term_a_9;
                    {
                      p_65 = t;
                      {
                        if(((k_65 != NULL) && (k_65 != p_65)))
                          _fail(p_65);
                        else
                          k_65 = p_65;
                        {
                          ATerm f_18;
                          f_18 = t;
                          {
                            ATerm r_65 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_65), term_h_18);
                            {
                              t = copy_0(t);
                              {
                                r_65 = t;
                                if(((q_65 != NULL) && (q_65 != r_65)))
                                  _fail(r_65);
                                else
                                  q_65 = r_65;
                              }
                            }
                          }
                          t = f_18;
                          {
                            ATerm t_65 = NULL,v_65 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, not_null(q_65), term_h_18));
                            {
                              s_65 = t;
                              {
                                if(((m_65 != NULL) && (m_65 != s_65)))
                                  _fail(s_65);
                                else
                                  m_65 = s_65;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm u_65 = NULL;
                                    ATerm m_18 = t;
                                    int n_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(n_18);
                                      }
                                    else
                                      {
                                        t = m_18;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      u_65 = t;
                                      if(((t_65 != NULL) && (t_65 != u_65)))
                                        _fail(u_65);
                                      else
                                        t_65 = u_65;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(t_65)), not_null(m_65));
                                      {
                                        v_65 = t;
                                        {
                                          if(((n_65 != NULL) && (n_65 != v_65)))
                                            _fail(v_65);
                                          else
                                            n_65 = v_65;
                                          {
                                            ATerm o_18;
                                            o_18 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_k_17, (ATerm) ATmakeAppl(sym_Defined_2, term_s_18, not_null(n_65)));
                                              {
                                                ATerm n_2 (ATerm t)
                                                {
                                                  t = term_l_17;
                                                  return(t);
                                                }
                                                t = assert_1(t, n_2);
                                              }
                                            }
                                            t = o_18;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = e_18;
        }
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
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
  d_67 = t;
  e_66 :
  if(((ATgetType(d_67) == AT_LIST) && ((ATermList) d_67 != ATempty)))
    {
      e_67 = ATgetFirst((ATermList) d_67);
      f_67 = (ATerm) ATgetNext((ATermList) d_67);
      t = not_null(e_67);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm b_69 = NULL,c_69 = NULL,d_69 = NULL;
  b_69 = t;
  a_69 :
  if(match_cons(b_69, sym__2))
    {
      c_69 = ATgetArgument(b_69, 0);
      d_69 = ATgetArgument(b_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_69), not_null(d_69));
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
ATerm rewrite_1 (ATerm t, ATerm f_90 (ATerm))
{
  ATerm j_69 = NULL;
  ATerm l_69 = NULL;
  j_69 = t;
  {
    ATerm m_69 = NULL;
    t = term_u_18;
    {
      t = f_90(t);
      {
        m_69 = t;
        if(((l_69 != NULL) && (l_69 != m_69)))
          _fail(m_69);
        else
          l_69 = m_69;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_69), not_null(j_69));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym_Op_2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_70 = NULL;
            ATerm l_70 = NULL;
            t = not_null(e_70);
            {
              j_70 = t;
              {
                t = length_0(t);
                {
                  l_70 = t;
                  {
                    ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(d_70), not_null(l_70));
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = term_z_18;
                        return(t);
                      }
                      t = rewrite_1(t, o_2);
                      {
                        n_70 = t;
                        u_69 :
                        if(match_cons(n_70, sym_Defined_2))
                          {
                            o_70 = ATgetArgument(n_70, 0);
                            p_70 = ATgetArgument(n_70, 1);
                            v_69 :
                            if(match_string(o_70, "d_0"))
                              {
                                if(((d_70 != NULL) && (d_70 != p_70)))
                                  _fail(p_70);
                                else
                                  d_70 = p_70;
                              }
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_70), not_null(j_70));
                  }
                }
              }
            }
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm s_70 = NULL;
              ATerm u_70 = NULL;
              t = not_null(e_70);
              {
                s_70 = t;
                {
                  t = length_0(t);
                  {
                    u_70 = t;
                    {
                      ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(d_70), not_null(u_70));
                      {
                        ATerm p_2 (ATerm t)
                        {
                          t = term_z_18;
                          return(t);
                        }
                        t = rewrite_1(t, p_2);
                        {
                          w_70 = t;
                          z_69 :
                          if(match_cons(w_70, sym_Defined_2))
                            {
                              x_70 = ATgetArgument(w_70, 0);
                              y_70 = ATgetArgument(w_70, 1);
                              a_70 :
                              if(match_string(x_70, "c_0"))
                                {
                                  if(((d_70 != NULL) && (d_70 != y_70)))
                                    _fail(y_70);
                                  else
                                    d_70 = y_70;
                                }
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_70), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm d_106 (ATerm))
{
  ATerm h_71 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_106(t);
        {
          ATerm q_2 (ATerm t)
          {
            t = try_1(t, h_71);
            return(t);
          }
          t = _all(t, q_2);
        }
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = _some(t, h_71);
      }
    return(t);
  }
  t = h_71(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  l_71 = t;
  k_71 :
  if(match_cons(l_71, sym__2))
    {
      m_71 = ATgetArgument(l_71, 0);
      n_71 = ATgetArgument(l_71, 1);
      {
        ATerm c_19;
        c_19 = t;
        {
          ATerm q_71 = NULL;
          ATerm r_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_71), not_null(n_71));
          {
            ATerm d_19 = t;
            int e_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(e_19);
              }
            else
              {
                t = d_19;
                t = (ATerm) ATempty;
              }
            {
              r_71 = t;
              if(((q_71 != NULL) && (q_71 != r_71)))
                _fail(r_71);
              else
                q_71 = r_71;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_71), not_null(n_71), not_null(q_71));
            t = table_put_0(t);
          }
        }
        t = c_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL;
  ATerm f_19;
  f_19 = t;
  {
    ATerm b_72 = NULL;
    ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
    t = a_90(t);
    {
      b_72 = t;
      {
        if(((z_71 != NULL) && (z_71 != b_72)))
          _fail(b_72);
        else
          z_71 = b_72;
        {
          ATerm g_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_71), term_m_19);
              t = table_get_0(t);
              LocalPopChoice(l_19);
            }
          else
            {
              t = g_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            c_72 = t;
            x_71 :
            if(((ATgetType(c_72) == AT_LIST) && ((ATermList) c_72 != ATempty)))
              {
                d_72 = ATgetFirst((ATermList) c_72);
                e_72 = (ATerm) ATgetNext((ATermList) c_72);
                {
                  if(((a_72 != NULL) && (a_72 != d_72)))
                    _fail(d_72);
                  else
                    a_72 = d_72;
                  {
                    if(((y_71 != NULL) && (y_71 != e_72)))
                      _fail(e_72);
                    else
                      y_71 = e_72;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(z_71), term_m_19, not_null(y_71));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_72);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm f_72 = NULL;
                              f_72 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_71), not_null(f_72));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, r_2);
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
  t = f_19;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm w_107 (ATerm), ATerm x_107 (ATerm))
{
  ATerm n_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_107(t);
      t = x_107(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = n_19;
      {
        t = x_107(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm m_72 = NULL;
  ATerm t_19;
  t_19 = t;
  {
    ATerm n_72 = NULL;
    ATerm o_72 = NULL;
    t = z_89(t);
    {
      n_72 = t;
      {
        if(((m_72 != NULL) && (m_72 != n_72)))
          _fail(n_72);
        else
          m_72 = n_72;
        {
          ATerm p_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_72), term_m_19);
          {
            ATerm w_19 = t;
            int x_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_19);
              }
            else
              {
                t = w_19;
                t = (ATerm) ATempty;
              }
            {
              p_72 = t;
              if(((o_72 != NULL) && (o_72 != p_72)))
                _fail(p_72);
              else
                o_72 = p_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_72), term_m_19, (ATerm) ATinsert(CheckATermList(not_null(o_72)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_19;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm b_90 (ATerm), ATerm c_90 (ATerm))
{
  t = begin_scope_1(t, b_90);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, b_90);
      return(t);
    }
    t = restore_always_2(t, c_90, s_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm l_80 (ATerm), ATerm m_80 (ATerm))
{
  ATerm u_72 = NULL,v_72 = NULL;
  ATerm t_2 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm y_19;
    y_19 = t;
    {
      ATerm w_72 = NULL;
      ATerm x_72 = NULL;
      t = l_80(t);
      {
        w_72 = t;
        {
          if(((u_72 != NULL) && (u_72 != w_72)))
            _fail(w_72);
          else
            u_72 = w_72;
          {
            t = m_80(t);
            {
              x_72 = t;
              if(((v_72 != NULL) && (v_72 != x_72)))
                _fail(x_72);
              else
                v_72 = x_72;
            }
          }
        }
      }
    }
    t = y_19;
    {
      ATerm z_19;
      z_19 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_17, (ATerm) ATmakeAppl(sym_Defined_3, term_a_20, not_null(u_72), not_null(v_72)));
        {
          ATerm v_2 (ATerm t)
          {
            t = term_m_17;
            return(t);
          }
          t = assert_1(t, v_2);
        }
      }
      t = z_19;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm b_20 = t;
          if((PushChoice() == 0))
            {
              ATerm c_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = c_20;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_20;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, w_2);
      }
    }
    return(t);
  }
  t = scope_2(t, t_2, u_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
  d_73 = t;
  c_73 :
  if(match_cons(d_73, sym_SDef_3))
    {
      e_73 = ATgetArgument(d_73, 0);
      f_73 = ATgetArgument(d_73, 1);
      g_73 = ATgetArgument(d_73, 2);
      {
        t = not_null(g_73);
        {
          ATerm x_2 (ATerm t)
          {
            t = not_null(e_73);
            return(t);
          }
          ATerm y_2 (ATerm t)
          {
            t = term_g_20;
            return(t);
          }
          t = check_constructors_p__2(t, x_2, y_2);
        }
      }
    }
  else
    {
      if(match_cons(d_73, sym_RDef_3))
        {
          e_73 = ATgetArgument(d_73, 0);
          f_73 = ATgetArgument(d_73, 1);
          g_73 = ATgetArgument(d_73, 2);
          {
            t = not_null(g_73);
            {
              ATerm z_2 (ATerm t)
              {
                t = not_null(e_73);
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_h_20;
                return(t);
              }
              t = check_constructors_p__2(t, z_2, a_3);
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
ATerm assert_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
  u_73 = t;
  t_73 :
  if(match_cons(u_73, sym__2))
    {
      v_73 = ATgetArgument(u_73, 0);
      w_73 = ATgetArgument(u_73, 1);
      {
        ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL;
        ATerm k_20;
        k_20 = t;
        {
          ATerm c_74 = NULL;
          ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
          t = d_90(t);
          {
            c_74 = t;
            {
              if(((z_73 != NULL) && (z_73 != c_74)))
                _fail(c_74);
              else
                z_73 = c_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(z_73), not_null(v_73), not_null(w_73));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_20 = t;
                    int v_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(z_73), term_m_19);
                        t = table_get_0(t);
                        LocalPopChoice(v_20);
                      }
                    else
                      {
                        t = o_20;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      d_74 = t;
                      s_73 :
                      if(((ATgetType(d_74) == AT_LIST) && ((ATermList) d_74 != ATempty)))
                        {
                          e_74 = ATgetFirst((ATermList) d_74);
                          f_74 = (ATerm) ATgetNext((ATermList) d_74);
                          {
                            if(((a_74 != NULL) && (a_74 != e_74)))
                              _fail(e_74);
                            else
                              a_74 = e_74;
                            {
                              if(((b_74 != NULL) && (b_74 != f_74)))
                                _fail(f_74);
                              else
                                b_74 = f_74;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(z_73), term_m_19, (ATerm) ATinsert(CheckATermList(not_null(b_74)), (ATerm) ATinsert(CheckATermList(not_null(a_74)), not_null(v_73))));
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
        t = k_20;
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
  ATerm b_3 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL;
  q_74 = t;
  n_74 :
  if(match_cons(q_74, sym_OpDecl_2))
    {
      r_74 = ATgetArgument(q_74, 0);
      s_74 = ATgetArgument(q_74, 1);
      o_74 :
      if(match_cons(s_74, sym_FunType_2))
        {
          t_74 = ATgetArgument(s_74, 0);
          p_74 = ATgetArgument(s_74, 1);
          {
            ATerm x_74 = NULL;
            ATerm f_21;
            f_21 = t;
            {
              ATerm y_74 = NULL;
              t = not_null(t_74);
              {
                t = length_0(t);
                {
                  y_74 = t;
                  if(((x_74 != NULL) && (x_74 != y_74)))
                    _fail(y_74);
                  else
                    x_74 = y_74;
                }
              }
            }
            t = f_21;
            {
              ATerm g_21;
              g_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(r_74), not_null(x_74)), (ATerm) ATmakeAppl(sym_Defined_2, term_h_21, not_null(r_74)));
                {
                  ATerm d_3 (ATerm t)
                  {
                    t = term_z_18;
                    return(t);
                  }
                  t = assert_1(t, d_3);
                }
              }
              t = g_21;
            }
          }
        }
      else
        {
          if(match_cons(s_74, sym_ConstType_1))
            {
              t_74 = ATgetArgument(s_74, 0);
              {
                ATerm b_75 = NULL;
                ATerm i_21;
                i_21 = t;
                {
                  ATerm c_75 = NULL;
                  t = term_e_21;
                  {
                    c_75 = t;
                    if(((b_75 != NULL) && (b_75 != c_75)))
                      _fail(c_75);
                    else
                      b_75 = c_75;
                  }
                }
                t = i_21;
                {
                  ATerm j_21;
                  j_21 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(r_74), not_null(b_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_21, not_null(r_74)));
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = term_z_18;
                        return(t);
                      }
                      t = assert_1(t, e_3);
                    }
                  }
                  t = j_21;
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
  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,e_77 = NULL,g_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL;
  p_76 = t;
  d_76 :
  if(match_cons(p_76, sym_Specification_1))
    {
      q_76 = ATgetArgument(p_76, 0);
      e_76 :
      if(((ATgetType(q_76) == AT_LIST) && ((ATermList) q_76 != ATempty)))
        {
          r_76 = ATgetFirst((ATermList) q_76);
          g_77 = (ATerm) ATgetNext((ATermList) q_76);
          f_76 :
          if(match_cons(r_76, sym_Signature_1))
            {
              w_76 = ATgetArgument(r_76, 0);
              g_76 :
              if(((ATgetType(w_76) == AT_LIST) && ((ATermList) w_76 != ATempty)))
                {
                  x_76 = ATgetFirst((ATermList) w_76);
                  e_77 = (ATerm) ATgetNext((ATermList) w_76);
                  h_76 :
                  if(match_cons(x_76, sym_Constructors_1))
                    {
                      y_76 = ATgetArgument(x_76, 0);
                      i_76 :
                      if(((ATermList) e_77 == ATempty))
                        {
                          j_76 :
                          if(((ATgetType(g_77) == AT_LIST) && ((ATermList) g_77 != ATempty)))
                            {
                              i_77 = ATgetFirst((ATermList) g_77);
                              k_77 = (ATerm) ATgetNext((ATermList) g_77);
                              n_76 :
                              if(match_cons(i_77, sym_Strategies_1))
                                {
                                  j_77 = ATgetArgument(i_77, 0);
                                  o_76 :
                                  if(((ATermList) k_77 == ATempty))
                                    {
                                      {
                                        ATerm n_77 = NULL,o_77 = NULL,s_77 = NULL;
                                        ATerm l_21;
                                        l_21 = t;
                                        {
                                          ATerm p_77 = NULL;
                                          ATerm q_77 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_76)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_18), term_h_18))), term_q_21);
                                          {
                                            p_77 = t;
                                            {
                                              if(((n_77 != NULL) && (n_77 != p_77)))
                                                _fail(p_77);
                                              else
                                                n_77 = p_77;
                                              {
                                                t = not_null(n_77);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(j_77);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        q_77 = t;
                                                        z_75 :
                                                        if(((ATermList) q_77 == ATempty))
                                                          {
                                                            {
                                                              ATerm r_77 = NULL;
                                                              ATerm t_21 = t;
                                                              int w_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(w_21);
                                                                }
                                                              else
                                                                {
                                                                  t = t_21;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                r_77 = t;
                                                                if(((o_77 != NULL) && (o_77 != r_77)))
                                                                  _fail(r_77);
                                                                else
                                                                  o_77 = r_77;
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
                                        t = l_21;
                                        {
                                          ATerm t_77 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_77), not_null(n_77));
                                          {
                                            t = conc_0(t);
                                            {
                                              t_77 = t;
                                              if(((s_77 != NULL) && (s_77 != t_77)))
                                                _fail(t_77);
                                              else
                                                s_77 = t_77;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_77))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(s_77))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm u_81 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm x_21;
    x_21 = t;
    {
      ATerm y_21 = t;
      if((PushChoice() == 0))
        {
          ATerm c_78 = NULL;
          t = u_81(t);
          {
            c_78 = t;
            b_78 :
            if(((ATermList) c_78 == ATempty))
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
          t = y_21;
        }
    }
    t = x_21;
    {
      ATerm g_3 (ATerm t)
      {
        ATerm h_3 (ATerm t)
        {
          t = ExpOverlay_1(t, u_81);
          return(t);
        }
        t = try_1(t, h_3);
        return(t);
      }
      t = topdown_1(t, g_3);
    }
    return(t);
  }
  t = try_1(t, f_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,v_78 = NULL;
  m_78 = t;
  k_78 :
  if(match_cons(m_78, sym_BuildDefault_1))
    {
      v_78 = ATgetArgument(m_78, 0);
      t = term_m_11;
    }
  else
    {
      if(match_cons(m_78, sym_Real_1))
        {
          v_78 = ATgetArgument(m_78, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(v_78)));
        }
      else
        {
          if(match_cons(m_78, sym_Int_1))
            {
              v_78 = ATgetArgument(m_78, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(v_78)));
            }
          else
            {
              if(match_cons(m_78, sym_Str_1))
                {
                  v_78 = ATgetArgument(m_78, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(v_78)));
                }
              else
                {
                  if(match_cons(m_78, sym_Anno_2))
                    {
                      v_78 = ATgetArgument(m_78, 0);
                      l_78 = ATgetArgument(m_78, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_f_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_78)), not_null(v_78)));
                    }
                  else
                    {
                      if(match_cons(m_78, sym_Op_2))
                        {
                          v_78 = ATgetArgument(m_78, 0);
                          l_78 = ATgetArgument(m_78, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_78)), not_null(l_78));
                        }
                      else
                        {
                          if(match_cons(m_78, sym_Var_1))
                            {
                              v_78 = ATgetArgument(m_78, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_78)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm v_77 (ATerm), ATerm w_77 (ATerm))
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL;
  c_80 = t;
  b_80 :
  if(match_cons(c_80, sym_Op_2))
    {
      d_80 = ATgetArgument(c_80, 0);
      e_80 = ATgetArgument(c_80, 1);
      {
        ATerm i_80 = NULL,z_80 = NULL;
        ATerm q_80 = NULL;
        t = SSLgetAnnotations(not_null(c_80));
        {
          q_80 = t;
          if(((i_80 != NULL) && (i_80 != q_80)))
            _fail(q_80);
          else
            i_80 = q_80;
        }
        {
          t = not_null(d_80);
          {
            ATerm b_81 = NULL;
            t = v_77(t);
            {
              z_80 = t;
              {
                t = not_null(e_80);
                {
                  ATerm d_81 = NULL;
                  t = w_77(t);
                  {
                    b_81 = t;
                    {
                      ATerm e_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(z_80), not_null(b_81)), not_null(i_80));
                      {
                        e_81 = t;
                        if(((d_81 != NULL) && (d_81 != e_81)))
                          _fail(e_81);
                        else
                          d_81 = e_81;
                      }
                      t = not_null(d_81);
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
  ATerm i_3 (ATerm t)
  {
    ATerm j_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, j_3);
    return(t);
  }
  t = try_1(t, i_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm q_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL;
  q_81 = t;
  p_81 :
  if(match_cons(q_81, sym_Overlay_3))
    {
      v_81 = ATgetArgument(q_81, 0);
      w_81 = ATgetArgument(q_81, 1);
      x_81 = ATgetArgument(q_81, 2);
      {
        ATerm f_82 = NULL,j_82 = NULL;
        ATerm g_22;
        g_22 = t;
        {
          ATerm i_82 = NULL;
          t = not_null(w_81);
          {
            ATerm k_3 (ATerm t)
            {
              ATerm g_82 = NULL;
              ATerm h_82 = NULL;
              h_82 = t;
              if(((g_82 != NULL) && (g_82 != h_82)))
                _fail(h_82);
              else
                g_82 = h_82;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(g_82), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15));
              return(t);
            }
            t = map_1(t, k_3);
            {
              i_82 = t;
              if(((f_82 != NULL) && (f_82 != i_82)))
                _fail(i_82);
              else
                f_82 = i_82;
            }
          }
        }
        t = g_22;
        {
          ATerm k_82 = NULL;
          t = not_null(x_81);
          {
            t = trm_to_cong_0(t);
            {
              k_82 = t;
              if(((j_82 != NULL) && (j_82 != k_82)))
                _fail(k_82);
              else
                j_82 = k_82;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_81), not_null(f_82), not_null(j_82));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm r_80 (ATerm))
{
  t = Scope_2(t, r_80, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm y_82 = NULL,z_82 = NULL;
  y_82 = t;
  x_82 :
  if(match_cons(y_82, sym_Var_1))
    {
      z_82 = ATgetArgument(y_82, 0);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_83 = NULL,f_83 = NULL;
            ATerm e_83 = NULL;
            t = SSLgetAnnotations(not_null(y_82));
            {
              e_83 = t;
              if(((d_83 != NULL) && (d_83 != e_83)))
                _fail(e_83);
              else
                d_83 = e_83;
            }
            {
              t = not_null(z_82);
              {
                ATerm j_83 = NULL;
                t = s_0(t);
                {
                  f_83 = t;
                  {
                    ATerm k_83 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_83)), not_null(d_83));
                    {
                      k_83 = t;
                      if(((j_83 != NULL) && (j_83 != k_83)))
                        _fail(k_83);
                      else
                        j_83 = k_83;
                    }
                    t = not_null(j_83);
                  }
                }
              }
            }
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm l_84 = NULL,n_84 = NULL;
              ATerm m_84 = NULL;
              t = SSLgetAnnotations(not_null(y_82));
              {
                m_84 = t;
                if(((l_84 != NULL) && (l_84 != m_84)))
                  _fail(m_84);
                else
                  l_84 = m_84;
              }
              {
                t = not_null(z_82);
                {
                  ATerm p_84 = NULL;
                  t = s_0(t);
                  {
                    n_84 = t;
                    {
                      ATerm q_84 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_84)), not_null(l_84));
                      {
                        q_84 = t;
                        if(((p_84 != NULL) && (p_84 != q_84)))
                          _fail(q_84);
                        else
                          p_84 = q_84;
                      }
                      t = not_null(p_84);
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
ATerm DistBinding_2 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  d_85 = t;
  c_85 :
  if(match_cons(d_85, sym__3))
    {
      e_85 = ATgetArgument(d_85, 0);
      f_85 = ATgetArgument(d_85, 1);
      g_85 = ATgetArgument(d_85, 2);
      {
        t = not_null(e_85);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm k_85 = NULL;
            k_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_85), not_null(g_85));
              t = h_83(t);
            }
            return(t);
          }
          ATerm m_3 (ATerm t)
          {
            ATerm m_85 = NULL;
            m_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_85), not_null(f_85));
              t = h_83(t);
            }
            return(t);
          }
          t = i_83(t, l_3, m_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm n_83 (ATerm), ATerm o_83 (ATerm, ATerm (ATerm)))
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
  e_86 = t;
  d_86 :
  if(match_cons(e_86, sym__2))
    {
      f_86 = ATgetArgument(e_86, 0);
      g_86 = ATgetArgument(e_86, 1);
      {
        ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,u_86 = NULL;
        ATerm r_22;
        r_22 = t;
        {
          ATerm m_86 = NULL;
          t = not_null(f_86);
          {
            ATerm n_86 = NULL;
            t = n_83(t);
            {
              m_86 = t;
              {
                if(((j_86 != NULL) && (j_86 != m_86)))
                  _fail(m_86);
                else
                  j_86 = m_86;
                {
                  ATerm p_86 = NULL,t_86 = NULL;
                  t = map_1(t, new_0);
                  {
                    n_86 = t;
                    {
                      if(((k_86 != NULL) && (k_86 != n_86)))
                        _fail(n_86);
                      else
                        k_86 = n_86;
                      {
                        ATerm s_86 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_86), not_null(k_86));
                        {
                          t = zip_1(t, _id);
                          {
                            s_86 = t;
                            if(((p_86 != NULL) && (p_86 != s_86)))
                              _fail(s_86);
                            else
                              p_86 = s_86;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_86), not_null(g_86));
                          {
                            t = conc_0(t);
                            {
                              t_86 = t;
                              if(((l_86 != NULL) && (l_86 != t_86)))
                                _fail(t_86);
                              else
                                l_86 = t_86;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = r_22;
        {
          ATerm v_86 = NULL;
          t = not_null(f_86);
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(k_86);
              return(t);
            }
            t = o_83(t, n_3);
            {
              v_86 = t;
              if(((u_86 != NULL) && (u_86 != v_86)))
                _fail(v_86);
              else
                u_86 = v_86;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(u_86), not_null(g_86), not_null(l_86));
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
  ATerm i_87 = NULL;
  ATerm k_87 = NULL,l_87 = NULL;
  i_87 = t;
  {
    ATerm m_87 = NULL;
    ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL,t_87 = NULL;
    t = not_null(i_87);
    {
      m_87 = t;
      {
        t = SSL_explode_term(not_null(m_87));
        {
          o_87 = t;
          f_87 :
          if(match_cons(o_87, sym__2))
            {
              p_87 = ATgetArgument(o_87, 0);
              q_87 = ATgetArgument(o_87, 1);
              g_87 :
              if(match_string(p_87, ""))
                {
                  h_87 :
                  if(((ATgetType(q_87) == AT_LIST) && ((ATermList) q_87 != ATempty)))
                    {
                      r_87 = ATgetFirst((ATermList) q_87);
                      t_87 = (ATerm) ATgetNext((ATermList) q_87);
                      {
                        if(((l_87 != NULL) && (l_87 != r_87)))
                          _fail(r_87);
                        else
                          l_87 = r_87;
                        if(((k_87 != NULL) && (k_87 != t_87)))
                          _fail(t_87);
                        else
                          k_87 = t_87;
                      }
                    }
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
    t = not_null(l_87);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm b_83 (ATerm, ATerm (ATerm)))
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym__2))
    {
      j_88 = ATgetArgument(i_88, 0);
      k_88 = ATgetArgument(i_88, 1);
      {
        t = not_null(j_88);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(k_88);
              return(t);
            }
            t = split_2(t, _id, p_3);
            t = lookup_0(t);
            return(t);
          }
          t = b_83(t, o_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_100 (ATerm))
{
  ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL;
  t_88 = t;
  s_88 :
  if(match_cons(t_88, sym__2))
    {
      u_88 = ATgetArgument(t_88, 0);
      v_88 = ATgetArgument(t_88, 1);
      {
        t = not_null(u_88);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm y_88 = NULL;
            y_88 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_88), not_null(v_88));
              t = l_100(t);
            }
            return(t);
          }
          t = _all(t, q_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm q_100 (ATerm))
{
  ATerm c_89 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_100(t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = all_dist_1(t, c_89);
      }
    return(t);
  }
  t = c_89(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm z_83 (ATerm), ATerm a_84 (ATerm, ATerm (ATerm)), ATerm b_84 (ATerm), ATerm c_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_84 (ATerm, ATerm (ATerm)), ATerm e_84 (ATerm))
{
  ATerm f_89 = NULL,g_89 = NULL,i_89 = NULL;
  t = subs_args_0(t);
  {
    f_89 = t;
    e_89 :
    if(match_cons(f_89, sym__2))
      {
        g_89 = ATgetArgument(f_89, 0);
        i_89 = ATgetArgument(f_89, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_89), (ATerm) ATempty);
          {
            ATerm m_89 (ATerm t)
            {
              ATerm r_3 (ATerm t)
              {
                ATerm u_22 = t;
                int y_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, a_84);
                    LocalPopChoice(y_22);
                  }
                else
                  {
                    t = u_22;
                    {
                      ATerm z_22 = t;
                      int d_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm s_3 (ATerm t)
                            {
                              t = not_null(g_89);
                              return(t);
                            }
                            t = SubsVar_2(t, z_83, s_3);
                            t = e_84(t);
                          }
                          LocalPopChoice(d_23);
                        }
                      else
                        {
                          t = z_22;
                          {
                            t = RnBinding_2(t, b_84, d_84);
                            t = DistBinding_2(t, m_89, c_84);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, r_3);
              return(t);
            }
            t = m_89(t);
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
ATerm substitute_5 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm, ATerm (ATerm)), ATerm i_84 (ATerm), ATerm j_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm k_84 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, g_84, h_84, i_84, j_84, k_84, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm n_89 (ATerm t, ATerm o_89 (ATerm))
  {
    t = Scope_2(t, o_89, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, n_89);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  v_89 :
  if(match_cons(w_89, sym_Op_2))
    {
      x_89 = ATgetArgument(w_89, 0);
      y_89 = ATgetArgument(w_89, 1);
      {
        ATerm h_90 = NULL,i_90 = NULL;
        t = s_81(t);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm g_23;
            g_23 = t;
            {
              ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL;
              j_90 = t;
              u_89 :
              if(match_cons(j_90, sym_Overlay_3))
                {
                  k_90 = ATgetArgument(j_90, 0);
                  l_90 = ATgetArgument(j_90, 1);
                  m_90 = ATgetArgument(j_90, 2);
                  {
                    ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,r_90 = NULL;
                    if(((x_89 != NULL) && (x_89 != k_90)))
                      _fail(k_90);
                    else
                      x_89 = k_90;
                    {
                      if(((n_90 != NULL) && (n_90 != l_90)))
                        _fail(l_90);
                      else
                        n_90 = l_90;
                      {
                        if(((o_90 != NULL) && (o_90 != m_90)))
                          _fail(m_90);
                        else
                          o_90 = m_90;
                        {
                          ATerm h_23;
                          h_23 = t;
                          {
                            ATerm q_90 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_90), not_null(y_89));
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
                          }
                          t = h_23;
                          {
                            ATerm s_90 = NULL;
                            t = not_null(p_90);
                            {
                              r_90 = t;
                              {
                                if(((h_90 != NULL) && (h_90 != r_90)))
                                  _fail(r_90);
                                else
                                  h_90 = r_90;
                                {
                                  t = not_null(o_90);
                                  {
                                    s_90 = t;
                                    {
                                      if(((i_90 != NULL) && (i_90 != s_90)))
                                        _fail(s_90);
                                      else
                                        i_90 = s_90;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_90), not_null(o_90));
                                    }
                                  }
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
            t = g_23;
            return(t);
          }
          t = fetch_1(t, t_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_90), not_null(i_90));
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
ATerm exp_overlays1_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm i_23;
    i_23 = t;
    {
      ATerm j_23 = t;
      if((PushChoice() == 0))
        {
          ATerm z_90 = NULL;
          t = t_81(t);
          {
            z_90 = t;
            y_90 :
            if(((ATermList) z_90 == ATempty))
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
          t = j_23;
        }
    }
    t = i_23;
    {
      ATerm v_3 (ATerm t)
      {
        ATerm w_3 (ATerm t)
        {
          t = ExpOverlay_1(t, t_81);
          return(t);
        }
        t = repeat_1(t, w_3);
        return(t);
      }
      t = topdown_1(t, v_3);
    }
    return(t);
  }
  t = try_1(t, u_3);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,r_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,z_91 = NULL;
  n_91 = t;
  f_91 :
  if(match_cons(n_91, sym_Specification_1))
    {
      o_91 = ATgetArgument(n_91, 0);
      g_91 :
      if(((ATgetType(o_91) == AT_LIST) && ((ATermList) o_91 != ATempty)))
        {
          p_91 = ATgetFirst((ATermList) o_91);
          r_91 = (ATerm) ATgetNext((ATermList) o_91);
          h_91 :
          if(match_cons(p_91, sym_Signature_1))
            {
              q_91 = ATgetArgument(p_91, 0);
              i_91 :
              if(((ATgetType(r_91) == AT_LIST) && ((ATermList) r_91 != ATempty)))
                {
                  u_91 = ATgetFirst((ATermList) r_91);
                  w_91 = (ATerm) ATgetNext((ATermList) r_91);
                  j_91 :
                  if(match_cons(u_91, sym_Overlays_1))
                    {
                      v_91 = ATgetArgument(u_91, 0);
                      k_91 :
                      if(((ATgetType(w_91) == AT_LIST) && ((ATermList) w_91 != ATempty)))
                        {
                          x_91 = ATgetFirst((ATermList) w_91);
                          z_91 = (ATerm) ATgetNext((ATermList) w_91);
                          l_91 :
                          if(match_cons(x_91, sym_Strategies_1))
                            {
                              y_91 = ATgetArgument(x_91, 0);
                              m_91 :
                              if(((ATermList) z_91 == ATempty))
                                {
                                  {
                                    ATerm d_92 = NULL,f_92 = NULL;
                                    ATerm k_23;
                                    k_23 = t;
                                    {
                                      ATerm e_92 = NULL;
                                      t = not_null(v_91);
                                      {
                                        ATerm x_3 (ATerm t)
                                        {
                                          t = not_null(v_91);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, x_3);
                                        {
                                          e_92 = t;
                                          if(((d_92 != NULL) && (d_92 != e_92)))
                                            _fail(e_92);
                                          else
                                            d_92 = e_92;
                                        }
                                      }
                                    }
                                    t = k_23;
                                    {
                                      ATerm g_92 = NULL,i_92 = NULL,l_92 = NULL;
                                      ATerm l_23;
                                      l_23 = t;
                                      {
                                        ATerm h_92 = NULL;
                                        t = not_null(v_91);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            h_92 = t;
                                            if(((g_92 != NULL) && (g_92 != h_92)))
                                              _fail(h_92);
                                            else
                                              g_92 = h_92;
                                          }
                                        }
                                      }
                                      t = l_23;
                                      {
                                        ATerm j_92 = NULL;
                                        t = not_null(y_91);
                                        {
                                          ATerm y_3 (ATerm t)
                                          {
                                            t = not_null(d_92);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, y_3);
                                          {
                                            j_92 = t;
                                            if(((i_92 != NULL) && (i_92 != j_92)))
                                              _fail(j_92);
                                            else
                                              i_92 = j_92;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_92), not_null(i_92));
                                          {
                                            t = conc_0(t);
                                            {
                                              l_92 = t;
                                              if(((f_92 != NULL) && (f_92 != l_92)))
                                                _fail(l_92);
                                              else
                                                f_92 = l_92;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_92))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(q_91))));
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
  ATerm m_23;
  m_23 = t;
  {
    ATerm s_92 = NULL;
    ATerm t_92 = NULL;
    t_92 = t;
    if(((s_92 != NULL) && (s_92 != t_92)))
      _fail(t_92);
    else
      s_92 = t_92;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, not_null(s_92));
      t = printnl_0(t);
    }
  }
  t = m_23;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm n_23;
  n_23 = t;
  {
    t = error_0(t);
    {
      t = term_d_18;
      t = exit_0(t);
    }
  }
  t = n_23;
  return(t);
}
ATerm MsgR_0 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
  z_92 = t;
  y_92 :
  if(match_cons(z_92, sym__3))
    {
      a_93 = ATgetArgument(z_92, 0);
      b_93 = ATgetArgument(z_92, 1);
      c_93 = ATgetArgument(z_92, 2);
      {
        ATerm l_93 = NULL,n_93 = NULL;
        ATerm r_23;
        r_23 = t;
        {
          ATerm m_93 = NULL;
          t = not_null(a_93);
          {
            t = MsgU_0(t);
            {
              m_93 = t;
              if(((l_93 != NULL) && (l_93 != m_93)))
                _fail(m_93);
              else
                l_93 = m_93;
            }
          }
        }
        t = r_23;
        {
          ATerm o_93 = NULL;
          t = not_null(c_93);
          {
            t = MsgE_0(t);
            {
              o_93 = t;
              if(((n_93 != NULL) && (n_93 != o_93)))
                _fail(o_93);
              else
                n_93 = o_93;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_93)), not_null(l_93));
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
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL;
  b_94 = t;
  v_93 :
  if(((ATgetType(b_94) == AT_LIST) && ((ATermList) b_94 != ATempty)))
    {
      z_93 = ATgetFirst((ATermList) b_94);
      a_94 = (ATerm) ATgetNext((ATermList) b_94);
      w_93 :
      if(((ATgetType(a_94) == AT_LIST) && ((ATermList) a_94 != ATempty)))
        {
          x_93 = ATgetFirst((ATermList) a_94);
          y_93 = (ATerm) ATgetNext((ATermList) a_94);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_23), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_93)), not_null(x_93)), not_null(z_93))), term_s_23);
        }
      else
        {
          if(((ATermList) a_94 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_23), not_null(z_93)), term_z_23);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) b_94 == ATempty))
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
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL;
  c_95 = t;
  q_94 :
  if(((ATgetType(c_95) == AT_LIST) && ((ATermList) c_95 != ATempty)))
    {
      a_95 = ATgetFirst((ATermList) c_95);
      b_95 = (ATerm) ATgetNext((ATermList) c_95);
      r_94 :
      if(((ATgetType(b_95) == AT_LIST) && ((ATermList) b_95 != ATempty)))
        {
          y_94 = ATgetFirst((ATermList) b_95);
          z_94 = (ATerm) ATgetNext((ATermList) b_95);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_94)), not_null(y_94)), not_null(a_95))), term_s_23);
        }
      else
        {
          if(((ATermList) b_95 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), not_null(a_95)), term_z_23);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) c_95 == ATempty))
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
  ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL;
  o_95 = t;
  n_95 :
  if(match_cons(o_95, sym__3))
    {
      p_95 = ATgetArgument(o_95, 0);
      q_95 = ATgetArgument(o_95, 1);
      r_95 = ATgetArgument(o_95, 2);
      {
        ATerm v_95 = NULL,x_95 = NULL;
        ATerm b_24;
        b_24 = t;
        {
          ATerm w_95 = NULL;
          t = not_null(p_95);
          {
            t = MsgU_0(t);
            {
              w_95 = t;
              if(((v_95 != NULL) && (v_95 != w_95)))
                _fail(w_95);
              else
                v_95 = w_95;
            }
          }
        }
        t = b_24;
        {
          ATerm y_95 = NULL;
          t = not_null(r_95);
          {
            t = MsgE_0(t);
            {
              y_95 = t;
              if(((x_95 != NULL) && (x_95 != y_95)))
                _fail(y_95);
              else
                x_95 = y_95;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_95)), not_null(v_95));
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
  ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL,m_96 = NULL;
  j_96 = t;
  i_96 :
  if(match_cons(j_96, sym_Overlay_3))
    {
      k_96 = ATgetArgument(j_96, 0);
      l_96 = ATgetArgument(j_96, 1);
      m_96 = ATgetArgument(j_96, 2);
      {
        ATerm q_96 = NULL;
        ATerm r_96 = NULL;
        t = not_null(m_96);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              r_96 = t;
              if(((q_96 != NULL) && (q_96 != r_96)))
                _fail(r_96);
              else
                q_96 = r_96;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_96)), term_d_24), not_null(k_96)), term_c_24);
      }
    }
  else
    {
      if(match_cons(j_96, sym_SDef_3))
        {
          k_96 = ATgetArgument(j_96, 0);
          l_96 = ATgetArgument(j_96, 1);
          m_96 = ATgetArgument(j_96, 2);
          {
            ATerm v_96 = NULL;
            ATerm w_96 = NULL;
            t = not_null(m_96);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  w_96 = t;
                  if(((v_96 != NULL) && (v_96 != w_96)))
                    _fail(w_96);
                  else
                    v_96 = w_96;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(v_96)), term_d_24), not_null(k_96)), term_g_24);
          }
        }
      else
        {
          if(match_cons(j_96, sym_RDef_3))
            {
              k_96 = ATgetArgument(j_96, 0);
              l_96 = ATgetArgument(j_96, 1);
              m_96 = ATgetArgument(j_96, 2);
              {
                ATerm b_97 = NULL;
                ATerm c_97 = NULL;
                t = not_null(m_96);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      c_97 = t;
                      if(((b_97 != NULL) && (b_97 != c_97)))
                        _fail(c_97);
                      else
                        b_97 = c_97;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_97)), term_d_24), not_null(k_96)), term_p_24);
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
ATerm _3 (ATerm t, ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm w_68 (ATerm))
{
  ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
  x_97 = t;
  w_97 :
  if(match_cons(x_97, sym__3))
    {
      y_97 = ATgetArgument(x_97, 0);
      z_97 = ATgetArgument(x_97, 1);
      a_98 = ATgetArgument(x_97, 2);
      {
        ATerm f_98 = NULL,h_98 = NULL;
        ATerm g_98 = NULL;
        t = SSLgetAnnotations(not_null(x_97));
        {
          g_98 = t;
          if(((f_98 != NULL) && (f_98 != g_98)))
            _fail(g_98);
          else
            f_98 = g_98;
        }
        {
          t = not_null(y_97);
          {
            ATerm j_98 = NULL;
            t = u_68(t);
            {
              h_98 = t;
              {
                t = not_null(z_97);
                {
                  ATerm l_98 = NULL;
                  t = v_68(t);
                  {
                    j_98 = t;
                    {
                      t = not_null(a_98);
                      {
                        ATerm n_98 = NULL;
                        t = w_68(t);
                        {
                          l_98 = t;
                          {
                            ATerm o_98 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__3, not_null(h_98), not_null(j_98), not_null(l_98)), not_null(f_98));
                            {
                              o_98 = t;
                              if(((n_98 != NULL) && (n_98 != o_98)))
                                _fail(o_98);
                              else
                                n_98 = o_98;
                            }
                            t = not_null(n_98);
                          }
                        }
                      }
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
ATerm Overlay_3 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm))
{
  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
  i_99 = t;
  h_99 :
  if(match_cons(i_99, sym_Overlay_3))
    {
      j_99 = ATgetArgument(i_99, 0);
      k_99 = ATgetArgument(i_99, 1);
      l_99 = ATgetArgument(i_99, 2);
      {
        ATerm q_99 = NULL,s_99 = NULL;
        ATerm r_99 = NULL;
        t = SSLgetAnnotations(not_null(i_99));
        {
          r_99 = t;
          if(((q_99 != NULL) && (q_99 != r_99)))
            _fail(r_99);
          else
            q_99 = r_99;
        }
        {
          t = not_null(j_99);
          {
            ATerm w_99 = NULL;
            t = z_76(t);
            {
              s_99 = t;
              {
                t = not_null(k_99);
                {
                  ATerm y_99 = NULL;
                  t = a_77(t);
                  {
                    w_99 = t;
                    {
                      t = not_null(l_99);
                      {
                        ATerm a_100 = NULL;
                        t = b_77(t);
                        {
                          y_99 = t;
                          {
                            ATerm b_100 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlay_3, not_null(s_99), not_null(w_99), not_null(y_99)), not_null(q_99));
                            {
                              b_100 = t;
                              if(((a_100 != NULL) && (a_100 != b_100)))
                                _fail(b_100);
                              else
                                a_100 = b_100;
                            }
                            t = not_null(a_100);
                          }
                        }
                      }
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
  ATerm u_100 = NULL,v_100 = NULL,w_100 = NULL,x_100 = NULL,y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL;
  u_100 = t;
  p_100 :
  if(match_cons(u_100, sym__2))
    {
      v_100 = ATgetArgument(u_100, 0);
      z_100 = ATgetArgument(u_100, 1);
      s_100 :
      if(match_cons(v_100, sym__3))
        {
          w_100 = ATgetArgument(v_100, 0);
          x_100 = ATgetArgument(v_100, 1);
          y_100 = ATgetArgument(v_100, 2);
          t_100 :
          if(match_cons(z_100, sym__3))
            {
              a_101 = ATgetArgument(z_100, 0);
              b_101 = ATgetArgument(z_100, 1);
              c_101 = ATgetArgument(z_100, 2);
              {
                ATerm l_101 = NULL,n_101 = NULL,p_101 = NULL;
                ATerm q_24;
                q_24 = t;
                {
                  ATerm m_101 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_100), not_null(a_101));
                  {
                    t = union_0(t);
                    {
                      m_101 = t;
                      if(((l_101 != NULL) && (l_101 != m_101)))
                        _fail(m_101);
                      else
                        l_101 = m_101;
                    }
                  }
                }
                t = q_24;
                {
                  ATerm r_24;
                  r_24 = t;
                  {
                    ATerm o_101 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_100), not_null(b_101));
                    {
                      t = union_0(t);
                      {
                        o_101 = t;
                        if(((n_101 != NULL) && (n_101 != o_101)))
                          _fail(o_101);
                        else
                          n_101 = o_101;
                      }
                    }
                  }
                  t = r_24;
                  {
                    ATerm q_101 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_100), not_null(c_101));
                    {
                      t = union_0(t);
                      {
                        q_101 = t;
                        if(((p_101 != NULL) && (p_101 != q_101)))
                          _fail(q_101);
                        else
                          p_101 = q_101;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(l_101), not_null(n_101), not_null(p_101));
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
  ATerm c_102 = NULL;
  ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL;
  c_102 = t;
  {
    ATerm h_102 = NULL;
    ATerm j_102 = NULL,k_102 = NULL,l_102 = NULL,m_102 = NULL,n_102 = NULL,o_102 = NULL,p_102 = NULL;
    t = not_null(c_102);
    {
      h_102 = t;
      {
        t = SSL_explode_term(not_null(h_102));
        {
          j_102 = t;
          y_101 :
          if(match_cons(j_102, sym__2))
            {
              k_102 = ATgetArgument(j_102, 0);
              l_102 = ATgetArgument(j_102, 1);
              z_101 :
              if(match_string(k_102, ""))
                {
                  a_102 :
                  if(((ATgetType(l_102) == AT_LIST) && ((ATermList) l_102 != ATempty)))
                    {
                      m_102 = ATgetFirst((ATermList) l_102);
                      n_102 = (ATerm) ATgetNext((ATermList) l_102);
                      b_102 :
                      if(((ATgetType(n_102) == AT_LIST) && ((ATermList) n_102 != ATempty)))
                        {
                          o_102 = ATgetFirst((ATermList) n_102);
                          p_102 = (ATerm) ATgetNext((ATermList) n_102);
                          {
                            if(((e_102 != NULL) && (e_102 != m_102)))
                              _fail(m_102);
                            else
                              e_102 = m_102;
                            {
                              if(((g_102 != NULL) && (g_102 != o_102)))
                                _fail(o_102);
                              else
                                g_102 = o_102;
                              if(((f_102 != NULL) && (f_102 != p_102)))
                                _fail(p_102);
                              else
                                f_102 = p_102;
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
    t = not_null(g_102);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm u_102 = NULL;
  u_102 = t;
  t = SSL_explode_term(not_null(u_102));
  return(t);
}
ATerm default_join_0 (ATerm t)
{
  t = explode_term_0(t);
  {
    t = Snd_0(t);
    {
      ATerm z_3 (ATerm t)
      {
        t = (ATerm) ATinsert(ATempty, term_x_24);
        return(t);
      }
      ATerm a_4 (ATerm t)
      {
        t = cart_1(t, Union_0);
        return(t);
      }
      t = foldr_2(t, z_3, a_4);
    }
  }
  return(t);
}
ATerm SeqUnion_0 (ATerm t)
{
  ATerm h_103 = NULL,i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL;
  h_103 = t;
  c_103 :
  if(match_cons(h_103, sym__2))
    {
      i_103 = ATgetArgument(h_103, 0);
      m_103 = ATgetArgument(h_103, 1);
      d_103 :
      if(match_cons(i_103, sym__3))
        {
          j_103 = ATgetArgument(i_103, 0);
          k_103 = ATgetArgument(i_103, 1);
          l_103 = ATgetArgument(i_103, 2);
          e_103 :
          if(match_cons(m_103, sym__3))
            {
              n_103 = ATgetArgument(m_103, 0);
              o_103 = ATgetArgument(m_103, 1);
              p_103 = ATgetArgument(m_103, 2);
              {
                ATerm w_103 = NULL,a_104 = NULL,c_104 = NULL;
                ATerm y_24;
                y_24 = t;
                {
                  ATerm x_103 = NULL,z_103 = NULL;
                  ATerm y_103 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_103), not_null(k_103));
                  {
                    t = diff_0(t);
                    {
                      y_103 = t;
                      if(((x_103 != NULL) && (x_103 != y_103)))
                        _fail(y_103);
                      else
                        x_103 = y_103;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_103), not_null(x_103));
                    {
                      t = union_0(t);
                      {
                        z_103 = t;
                        if(((w_103 != NULL) && (w_103 != z_103)))
                          _fail(z_103);
                        else
                          w_103 = z_103;
                      }
                    }
                  }
                }
                t = y_24;
                {
                  ATerm z_24;
                  z_24 = t;
                  {
                    ATerm b_104 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_103), not_null(o_103));
                    {
                      t = union_0(t);
                      {
                        b_104 = t;
                        if(((a_104 != NULL) && (a_104 != b_104)))
                          _fail(b_104);
                        else
                          a_104 = b_104;
                      }
                    }
                  }
                  t = z_24;
                  {
                    ATerm d_104 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_103), not_null(p_103));
                    {
                      t = union_0(t);
                      {
                        d_104 = t;
                        if(((c_104 != NULL) && (c_104 != d_104)))
                          _fail(d_104);
                        else
                          c_104 = d_104;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(w_103), not_null(a_104), not_null(c_104));
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
ATerm cart_1 (ATerm t, ATerm a_97 (ATerm))
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_cons(n_104, sym__2))
    {
      o_104 = ATgetArgument(n_104, 0);
      p_104 = ATgetArgument(n_104, 1);
      {
        t = not_null(o_104);
        {
          ATerm b_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm c_4 (ATerm t)
          {
            ATerm s_104 = NULL;
            s_104 = t;
            {
              t = not_null(p_104);
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm u_104 = NULL;
                  u_104 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_104), not_null(u_104));
                    t = a_97(t);
                  }
                  return(t);
                }
                t = map_1(t, d_4);
              }
            }
            return(t);
          }
          t = foldr_3(t, b_4, conc_0, c_4);
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
  ATerm e_4 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_x_24);
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, e_4, f_4);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm o_80 (ATerm))
{
  ATerm i_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL;
  i_105 = t;
  h_105 :
  if(match_cons(i_105, sym__3))
    {
      l_105 = ATgetArgument(i_105, 0);
      m_105 = ATgetArgument(i_105, 1);
      n_105 = ATgetArgument(i_105, 2);
      {
        ATerm r_105 = NULL,v_105 = NULL;
        ATerm a_25;
        a_25 = t;
        {
          ATerm s_105 = NULL,u_105 = NULL;
          ATerm t_105 = NULL;
          t = term_u_18;
          {
            t = o_80(t);
            {
              t_105 = t;
              if(((s_105 != NULL) && (s_105 != t_105)))
                _fail(t_105);
              else
                s_105 = t_105;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_105), not_null(s_105));
            {
              t = diff_0(t);
              {
                u_105 = t;
                if(((r_105 != NULL) && (r_105 != u_105)))
                  _fail(u_105);
                else
                  r_105 = u_105;
              }
            }
          }
        }
        t = a_25;
        {
          ATerm w_105 = NULL,a_106 = NULL;
          ATerm x_105 = NULL,z_105 = NULL;
          ATerm y_105 = NULL;
          t = term_u_18;
          {
            t = o_80(t);
            {
              y_105 = t;
              if(((x_105 != NULL) && (x_105 != y_105)))
                _fail(y_105);
              else
                x_105 = y_105;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_105), not_null(x_105));
            {
              t = isect_0(t);
              {
                z_105 = t;
                if(((w_105 != NULL) && (w_105 != z_105)))
                  _fail(z_105);
                else
                  w_105 = z_105;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_105), not_null(n_105));
            {
              t = conc_0(t);
              {
                a_106 = t;
                if(((v_105 != NULL) && (v_105 != a_106)))
                  _fail(a_106);
                else
                  v_105 = a_106;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(l_105), not_null(r_105), not_null(v_105));
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
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL,k_107 = NULL;
  c_107 = t;
  z_106 :
  if(match_cons(c_107, sym_Overlay_3))
    {
      k_107 = ATgetArgument(c_107, 0);
      b_107 = ATgetArgument(c_107, 1);
      a_107 = ATgetArgument(c_107, 2);
      {
        ATerm o_107 = NULL;
        ATerm p_107 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_107)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(b_107), (ATerm) ATempty));
        {
          t = seqs_join_0(t);
          {
            p_107 = t;
            if(((o_107 != NULL) && (o_107 != p_107)))
              _fail(p_107);
            else
              o_107 = p_107;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(k_107), not_null(b_107), not_null(o_107));
      }
    }
  else
    {
      if(match_cons(c_107, sym_Scope_2))
        {
          k_107 = ATgetArgument(c_107, 0);
          b_107 = ATgetArgument(c_107, 1);
          {
            t = not_null(b_107);
            {
              ATerm g_4 (ATerm t)
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(k_107);
                  return(t);
                }
                t = JoinScope_1(t, h_4);
                return(t);
              }
              t = map_1(t, g_4);
            }
          }
        }
      else
        {
          if(match_cons(c_107, sym_Cong_2))
            {
              k_107 = ATgetArgument(c_107, 0);
              b_107 = ATgetArgument(c_107, 1);
              {
                t = not_null(b_107);
                t = seqs_join_0(t);
              }
            }
          else
            {
              if(match_cons(c_107, sym_BAM_3))
                {
                  k_107 = ATgetArgument(c_107, 0);
                  b_107 = ATgetArgument(c_107, 1);
                  a_107 = ATgetArgument(c_107, 2);
                  {
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_107)), not_null(k_107)), not_null(b_107));
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(c_107, sym_BA_2))
                    {
                      k_107 = ATgetArgument(c_107, 0);
                      b_107 = ATgetArgument(c_107, 1);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_107)), not_null(b_107));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(c_107, sym_AM_2))
                        {
                          k_107 = ATgetArgument(c_107, 0);
                          b_107 = ATgetArgument(c_107, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_107)), not_null(k_107));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(c_107, sym_MA_2))
                            {
                              k_107 = ATgetArgument(c_107, 0);
                              b_107 = ATgetArgument(c_107, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_107)), not_null(k_107));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(c_107, sym_StratRule_3))
                                {
                                  k_107 = ATgetArgument(c_107, 0);
                                  b_107 = ATgetArgument(c_107, 1);
                                  a_107 = ATgetArgument(c_107, 2);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_107)), not_null(a_107)), not_null(k_107));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(c_107, sym_Rule_3))
                                    {
                                      k_107 = ATgetArgument(c_107, 0);
                                      b_107 = ATgetArgument(c_107, 1);
                                      a_107 = ATgetArgument(c_107, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_107)), not_null(a_107)), not_null(k_107));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(c_107, sym_Seq_2))
                                        {
                                          k_107 = ATgetArgument(c_107, 0);
                                          b_107 = ATgetArgument(c_107, 1);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_107)), not_null(k_107));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(c_107, sym_Seqs_1))
                                            {
                                              k_107 = ATgetArgument(c_107, 0);
                                              {
                                                t = not_null(k_107);
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
ATerm Cong_2 (ATerm t, ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  ATerm i_109 = NULL,j_109 = NULL,k_109 = NULL;
  i_109 = t;
  h_109 :
  if(match_cons(i_109, sym_Cong_2))
    {
      j_109 = ATgetArgument(i_109, 0);
      k_109 = ATgetArgument(i_109, 1);
      {
        ATerm o_109 = NULL,q_109 = NULL;
        ATerm p_109 = NULL;
        t = SSLgetAnnotations(not_null(i_109));
        {
          p_109 = t;
          if(((o_109 != NULL) && (o_109 != p_109)))
            _fail(p_109);
          else
            o_109 = p_109;
        }
        {
          t = not_null(j_109);
          {
            ATerm s_109 = NULL;
            t = g_79(t);
            {
              q_109 = t;
              {
                t = not_null(k_109);
                {
                  ATerm u_109 = NULL;
                  t = h_79(t);
                  {
                    s_109 = t;
                    {
                      ATerm v_109 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(q_109), not_null(s_109)), not_null(o_109));
                      {
                        v_109 = t;
                        if(((u_109 != NULL) && (u_109 != v_109)))
                          _fail(v_109);
                        else
                          u_109 = v_109;
                      }
                      t = not_null(u_109);
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
  ATerm c_110 = NULL;
  ATerm d_110 = NULL;
  t = tvars_0(t);
  {
    d_110 = t;
    if(((c_110 != NULL) && (c_110 != d_110)))
      _fail(d_110);
    else
      c_110 = d_110;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(c_110), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm g_110 = NULL;
  ATerm h_110 = NULL;
  t = tvars_0(t);
  {
    h_110 = t;
    if(((g_110 != NULL) && (g_110 != h_110)))
      _fail(h_110);
    else
      g_110 = h_110;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(g_110), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm))
{
  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL;
  q_110 = t;
  p_110 :
  if(match_cons(q_110, sym_Rule_3))
    {
      r_110 = ATgetArgument(q_110, 0);
      s_110 = ATgetArgument(q_110, 1);
      t_110 = ATgetArgument(q_110, 2);
      {
        ATerm y_110 = NULL,a_111 = NULL;
        ATerm z_110 = NULL;
        t = SSLgetAnnotations(not_null(q_110));
        {
          z_110 = t;
          if(((y_110 != NULL) && (y_110 != z_110)))
            _fail(z_110);
          else
            y_110 = z_110;
        }
        {
          t = not_null(r_110);
          {
            ATerm c_111 = NULL;
            t = k_76(t);
            {
              a_111 = t;
              {
                t = not_null(s_110);
                {
                  ATerm e_111 = NULL;
                  t = l_76(t);
                  {
                    c_111 = t;
                    {
                      t = not_null(t_110);
                      {
                        ATerm g_111 = NULL;
                        t = m_76(t);
                        {
                          e_111 = t;
                          {
                            ATerm h_111 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(a_111), not_null(c_111), not_null(e_111)), not_null(y_110));
                            {
                              h_111 = t;
                              if(((g_111 != NULL) && (g_111 != h_111)))
                                _fail(h_111);
                              else
                                g_111 = h_111;
                            }
                            t = not_null(g_111);
                          }
                        }
                      }
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
ATerm BAM_3 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL;
  v_111 = t;
  u_111 :
  if(match_cons(v_111, sym_BAM_3))
    {
      w_111 = ATgetArgument(v_111, 0);
      x_111 = ATgetArgument(v_111, 1);
      y_111 = ATgetArgument(v_111, 2);
      {
        ATerm d_112 = NULL,f_112 = NULL;
        ATerm e_112 = NULL;
        t = SSLgetAnnotations(not_null(v_111));
        {
          e_112 = t;
          if(((d_112 != NULL) && (d_112 != e_112)))
            _fail(e_112);
          else
            d_112 = e_112;
        }
        {
          t = not_null(w_111);
          {
            ATerm h_112 = NULL;
            t = o_75(t);
            {
              f_112 = t;
              {
                t = not_null(x_111);
                {
                  ATerm j_112 = NULL;
                  t = p_75(t);
                  {
                    h_112 = t;
                    {
                      t = not_null(y_111);
                      {
                        ATerm l_112 = NULL;
                        t = q_75(t);
                        {
                          j_112 = t;
                          {
                            ATerm m_112 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BAM_3, not_null(f_112), not_null(h_112), not_null(j_112)), not_null(d_112));
                            {
                              m_112 = t;
                              if(((l_112 != NULL) && (l_112 != m_112)))
                                _fail(m_112);
                              else
                                l_112 = m_112;
                            }
                            t = not_null(l_112);
                          }
                        }
                      }
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
ATerm BA_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL;
  z_112 = t;
  y_112 :
  if(match_cons(z_112, sym_BA_2))
    {
      a_113 = ATgetArgument(z_112, 0);
      b_113 = ATgetArgument(z_112, 1);
      {
        ATerm f_113 = NULL,h_113 = NULL;
        ATerm g_113 = NULL;
        t = SSLgetAnnotations(not_null(z_112));
        {
          g_113 = t;
          if(((f_113 != NULL) && (f_113 != g_113)))
            _fail(g_113);
          else
            f_113 = g_113;
        }
        {
          t = not_null(a_113);
          {
            ATerm j_113 = NULL;
            t = m_75(t);
            {
              h_113 = t;
              {
                t = not_null(b_113);
                {
                  ATerm l_113 = NULL;
                  t = n_75(t);
                  {
                    j_113 = t;
                    {
                      ATerm m_113 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BA_2, not_null(h_113), not_null(j_113)), not_null(f_113));
                      {
                        m_113 = t;
                        if(((l_113 != NULL) && (l_113 != m_113)))
                          _fail(m_113);
                        else
                          l_113 = m_113;
                      }
                      t = not_null(l_113);
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
ATerm AM_2 (ATerm t, ATerm k_75 (ATerm), ATerm l_75 (ATerm))
{
  ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL;
  y_113 = t;
  x_113 :
  if(match_cons(y_113, sym_AM_2))
    {
      z_113 = ATgetArgument(y_113, 0);
      a_114 = ATgetArgument(y_113, 1);
      {
        ATerm e_114 = NULL,g_114 = NULL;
        ATerm f_114 = NULL;
        t = SSLgetAnnotations(not_null(y_113));
        {
          f_114 = t;
          if(((e_114 != NULL) && (e_114 != f_114)))
            _fail(f_114);
          else
            e_114 = f_114;
        }
        {
          t = not_null(z_113);
          {
            ATerm i_114 = NULL;
            t = k_75(t);
            {
              g_114 = t;
              {
                t = not_null(a_114);
                {
                  ATerm k_114 = NULL;
                  t = l_75(t);
                  {
                    i_114 = t;
                    {
                      ATerm l_114 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AM_2, not_null(g_114), not_null(i_114)), not_null(e_114));
                      {
                        l_114 = t;
                        if(((k_114 != NULL) && (k_114 != l_114)))
                          _fail(l_114);
                        else
                          k_114 = l_114;
                      }
                      t = not_null(k_114);
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
ATerm MA_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
  x_114 = t;
  w_114 :
  if(match_cons(x_114, sym_MA_2))
    {
      y_114 = ATgetArgument(x_114, 0);
      z_114 = ATgetArgument(x_114, 1);
      {
        ATerm d_115 = NULL,f_115 = NULL;
        ATerm e_115 = NULL;
        t = SSLgetAnnotations(not_null(x_114));
        {
          e_115 = t;
          if(((d_115 != NULL) && (d_115 != e_115)))
            _fail(e_115);
          else
            d_115 = e_115;
        }
        {
          t = not_null(y_114);
          {
            ATerm h_115 = NULL;
            t = i_75(t);
            {
              f_115 = t;
              {
                t = not_null(z_114);
                {
                  ATerm j_115 = NULL;
                  t = j_75(t);
                  {
                    h_115 = t;
                    {
                      ATerm k_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MA_2, not_null(f_115), not_null(h_115)), not_null(d_115));
                      {
                        k_115 = t;
                        if(((j_115 != NULL) && (j_115 != k_115)))
                          _fail(k_115);
                        else
                          j_115 = k_115;
                      }
                      t = not_null(j_115);
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
ATerm Match_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm v_115 = NULL,w_115 = NULL;
  v_115 = t;
  u_115 :
  if(match_cons(v_115, sym_Match_1))
    {
      w_115 = ATgetArgument(v_115, 0);
      {
        ATerm z_115 = NULL,b_116 = NULL;
        ATerm a_116 = NULL;
        t = SSLgetAnnotations(not_null(v_115));
        {
          a_116 = t;
          if(((z_115 != NULL) && (z_115 != a_116)))
            _fail(a_116);
          else
            z_115 = a_116;
        }
        {
          t = not_null(w_115);
          {
            ATerm d_116 = NULL;
            t = o_79(t);
            {
              b_116 = t;
              {
                ATerm e_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(b_116)), not_null(z_115));
                {
                  e_116 = t;
                  if(((d_116 != NULL) && (d_116 != e_116)))
                    _fail(e_116);
                  else
                    d_116 = e_116;
                }
                t = not_null(d_116);
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
ATerm Build_1 (ATerm t, ATerm p_79 (ATerm))
{
  ATerm o_116 = NULL,p_116 = NULL;
  o_116 = t;
  n_116 :
  if(match_cons(o_116, sym_Build_1))
    {
      p_116 = ATgetArgument(o_116, 0);
      {
        ATerm s_116 = NULL,u_116 = NULL;
        ATerm t_116 = NULL;
        t = SSLgetAnnotations(not_null(o_116));
        {
          t_116 = t;
          if(((s_116 != NULL) && (s_116 != t_116)))
            _fail(t_116);
          else
            s_116 = t_116;
        }
        {
          t = not_null(p_116);
          {
            ATerm w_116 = NULL;
            t = p_79(t);
            {
              u_116 = t;
              {
                ATerm x_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(u_116)), not_null(s_116));
                {
                  x_116 = t;
                  if(((w_116 != NULL) && (w_116 != x_116)))
                    _fail(x_116);
                  else
                    w_116 = x_116;
                }
                t = not_null(w_116);
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
ATerm constructs_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Build_1(t, use_term_0);
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Match_1(t, def_term_0);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm f_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MA_2(t, def_term_0, n_80);
                  LocalPopChoice(g_25);
                }
              else
                {
                  t = f_25;
                  {
                    ATerm l_25 = t;
                    int m_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AM_2(t, n_80, def_term_0);
                        LocalPopChoice(m_25);
                      }
                    else
                      {
                        t = l_25;
                        {
                          ATerm n_25 = t;
                          int r_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = BA_2(t, n_80, use_term_0);
                              LocalPopChoice(r_25);
                            }
                          else
                            {
                              t = n_25;
                              {
                                ATerm t_25 = t;
                                int w_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BAM_3(t, n_80, use_term_0, def_term_0);
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
                                          t = Scope_2(t, _id, n_80);
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
                                                t = Rule_3(t, def_term_0, use_term_0, n_80);
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
                                                      t = Overlay_3(t, _id, _id, use_term_0);
                                                      LocalPopChoice(c_26);
                                                    }
                                                  else
                                                    {
                                                      t = b_26;
                                                      {
                                                        ATerm i_4 (ATerm t)
                                                        {
                                                          t = map_1(t, n_80);
                                                          return(t);
                                                        }
                                                        t = Cong_2(t, _id, i_4);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = constructs_1(t, use_def_0);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = _all(t, use_def_0);
    }
  {
    ATerm f_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UDjoin_0(t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = f_26;
        t = default_join_0(t);
      }
  }
  return(t);
}
ATerm RDef_3 (ATerm t, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL;
  k_117 = t;
  j_117 :
  if(match_cons(k_117, sym_RDef_3))
    {
      l_117 = ATgetArgument(k_117, 0);
      m_117 = ATgetArgument(k_117, 1);
      n_117 = ATgetArgument(k_117, 2);
      {
        ATerm s_117 = NULL,u_117 = NULL;
        ATerm t_117 = NULL;
        t = SSLgetAnnotations(not_null(k_117));
        {
          t_117 = t;
          if(((s_117 != NULL) && (s_117 != t_117)))
            _fail(t_117);
          else
            s_117 = t_117;
        }
        {
          t = not_null(l_117);
          {
            ATerm w_117 = NULL;
            t = s_76(t);
            {
              u_117 = t;
              {
                t = not_null(m_117);
                {
                  ATerm y_117 = NULL;
                  t = t_76(t);
                  {
                    w_117 = t;
                    {
                      t = not_null(n_117);
                      {
                        ATerm a_118 = NULL;
                        t = u_76(t);
                        {
                          y_117 = t;
                          {
                            ATerm b_118 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(u_117), not_null(w_117), not_null(y_117)), not_null(s_117));
                            {
                              b_118 = t;
                              if(((a_118 != NULL) && (a_118 != b_118)))
                                _fail(b_118);
                              else
                                a_118 = b_118;
                            }
                            t = not_null(a_118);
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm s_78 (ATerm), ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL;
  p_118 = t;
  o_118 :
  if(match_cons(p_118, sym_SDef_3))
    {
      q_118 = ATgetArgument(p_118, 0);
      r_118 = ATgetArgument(p_118, 1);
      s_118 = ATgetArgument(p_118, 2);
      {
        ATerm x_118 = NULL,z_118 = NULL;
        ATerm y_118 = NULL;
        t = SSLgetAnnotations(not_null(p_118));
        {
          y_118 = t;
          if(((x_118 != NULL) && (x_118 != y_118)))
            _fail(y_118);
          else
            x_118 = y_118;
        }
        {
          t = not_null(q_118);
          {
            ATerm b_119 = NULL;
            t = s_78(t);
            {
              z_118 = t;
              {
                t = not_null(r_118);
                {
                  ATerm d_119 = NULL;
                  t = t_78(t);
                  {
                    b_119 = t;
                    {
                      t = not_null(s_118);
                      {
                        ATerm f_119 = NULL;
                        t = u_78(t);
                        {
                          d_119 = t;
                          {
                            ATerm g_119 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(z_118), not_null(b_119), not_null(d_119)), not_null(x_118));
                            {
                              g_119 = t;
                              if(((f_119 != NULL) && (f_119 != g_119)))
                                _fail(g_119);
                              else
                                f_119 = g_119;
                            }
                            t = not_null(f_119);
                          }
                        }
                      }
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
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm q_26 = t;
          if((PushChoice() == 0))
            {
              ATerm k_4 (ATerm t)
              {
                t = _3(t, Nil_0, _id, Nil_0);
                return(t);
              }
              t = Cons_2(t, k_4, Nil_0);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_26;
            }
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, j_4);
      t = err_msg_0(t);
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
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
            t = RDef_3(t, _id, _id, l_4);
            t = err_msg_0(t);
            LocalPopChoice(v_26);
          }
        else
          {
            t = s_26;
            {
              t = Overlay_3(t, _id, _id, _id);
              {
                t = use_def_0(t);
                {
                  ATerm x_26 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm n_4 (ATerm t)
                      {
                        ATerm o_4 (ATerm t)
                        {
                          t = _3(t, Nil_0, Nil_0, Nil_0);
                          return(t);
                        }
                        t = Cons_2(t, o_4, Nil_0);
                        return(t);
                      }
                      t = Overlay_3(t, _id, _id, n_4);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = x_26;
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
  ATerm o_119 = NULL;
  t = filter_1(t, check_0);
  {
    o_119 = t;
    n_119 :
    if(((ATermList) o_119 == ATempty))
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
ATerm Overlays_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm u_119 = NULL,v_119 = NULL;
  u_119 = t;
  t_119 :
  if(match_cons(u_119, sym_Overlays_1))
    {
      v_119 = ATgetArgument(u_119, 0);
      {
        ATerm y_119 = NULL,a_120 = NULL;
        ATerm z_119 = NULL;
        t = SSLgetAnnotations(not_null(u_119));
        {
          z_119 = t;
          if(((y_119 != NULL) && (y_119 != z_119)))
            _fail(z_119);
          else
            y_119 = z_119;
        }
        {
          t = not_null(v_119);
          {
            ATerm c_120 = NULL;
            t = d_77(t);
            {
              a_120 = t;
              {
                ATerm d_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(a_120)), not_null(y_119));
                {
                  d_120 = t;
                  if(((c_120 != NULL) && (c_120 != d_120)))
                    _fail(d_120);
                  else
                    c_120 = d_120;
                }
                t = not_null(c_120);
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
ATerm Signature_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm n_120 = NULL,o_120 = NULL;
  n_120 = t;
  m_120 :
  if(match_cons(n_120, sym_Signature_1))
    {
      o_120 = ATgetArgument(n_120, 0);
      {
        ATerm r_120 = NULL,t_120 = NULL;
        ATerm s_120 = NULL;
        t = SSLgetAnnotations(not_null(n_120));
        {
          s_120 = t;
          if(((r_120 != NULL) && (r_120 != s_120)))
            _fail(s_120);
          else
            r_120 = s_120;
        }
        {
          t = not_null(o_120);
          {
            ATerm v_120 = NULL;
            t = c_77(t);
            {
              t_120 = t;
              {
                ATerm w_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(t_120)), not_null(r_120));
                {
                  w_120 = t;
                  if(((v_120 != NULL) && (v_120 != w_120)))
                    _fail(w_120);
                  else
                    v_120 = w_120;
                }
                t = not_null(v_120);
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
  ATerm p_4 (ATerm t)
  {
    ATerm q_4 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm r_4 (ATerm t)
    {
      ATerm s_4 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        ATerm u_4 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, u_4, Nil_0);
        return(t);
      }
      t = Cons_2(t, s_4, t_4);
      return(t);
    }
    t = Cons_2(t, q_4, r_4);
    return(t);
  }
  t = Specification_1(t, p_4);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm f_121 = NULL,g_121 = NULL,h_121 = NULL,i_121 = NULL,j_121 = NULL,k_121 = NULL,l_121 = NULL;
  f_121 = t;
  c_121 :
  if(match_cons(f_121, sym__2))
    {
      g_121 = ATgetArgument(f_121, 0);
      j_121 = ATgetArgument(f_121, 1);
      d_121 :
      if(match_cons(g_121, sym__2))
        {
          h_121 = ATgetArgument(g_121, 0);
          i_121 = ATgetArgument(g_121, 1);
          e_121 :
          if(match_cons(j_121, sym__2))
            {
              k_121 = ATgetArgument(j_121, 0);
              l_121 = ATgetArgument(j_121, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_121)), not_null(h_121)), (ATerm) ATinsert(CheckATermList(not_null(l_121)), not_null(i_121)));
            }
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
  ATerm t_121 = NULL,u_121 = NULL,v_121 = NULL;
  t_121 = t;
  s_121 :
  if(((ATgetType(t_121) == AT_LIST) && ((ATermList) t_121 != ATempty)))
    {
      u_121 = ATgetFirst((ATermList) t_121);
      v_121 = (ATerm) ATgetNext((ATermList) t_121);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_121), not_null(v_121));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm b_122 = NULL;
  b_122 = t;
  a_122 :
  if(((ATermList) b_122 == ATempty))
    {
      t = term_y_26;
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
  ATerm v_4 (ATerm t)
  {
    ATerm e_122 = NULL;
    e_122 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_122));
    return(t);
  }
  t = map_1(t, v_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL;
  j_122 = t;
  i_122 :
  if(((ATgetType(j_122) == AT_LIST) && ((ATermList) j_122 != ATempty)))
    {
      k_122 = ATgetFirst((ATermList) j_122);
      l_122 = (ATerm) ATgetNext((ATermList) j_122);
      t = not_null(l_122);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm r_122 = NULL,s_122 = NULL,t_122 = NULL;
  r_122 = t;
  q_122 :
  if(match_cons(r_122, sym__2))
    {
      s_122 = ATgetArgument(r_122, 0);
      t_122 = ATgetArgument(r_122, 1);
      {
        t = not_null(s_122);
        {
          ATerm x_122 (ATerm t)
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
                  ATerm b_27 = t;
                  int c_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_27;
                      d_27 = t;
                      {
                        ATerm w_4 (ATerm t)
                        {
                          t = not_null(t_122);
                          return(t);
                        }
                        t = HdMember_1(t, w_4);
                      }
                      t = d_27;
                      t = Cons_2(t, _id, x_122);
                      LocalPopChoice(c_27);
                    }
                  else
                    {
                      t = b_27;
                      {
                        t = Tl_0(t);
                        t = x_122(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = x_122(t);
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
  ATerm a_123 = NULL,b_123 = NULL,c_123 = NULL;
  a_123 = t;
  z_122 :
  if(match_cons(a_123, sym__2))
    {
      b_123 = ATgetArgument(a_123, 0);
      c_123 = ATgetArgument(a_123, 1);
      if(((b_123 != NULL) && (b_123 != c_123)))
        _fail(c_123);
      else
        b_123 = c_123;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL,c_124 = NULL,d_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL,h_124 = NULL;
  ATerm p_125 (ATerm t)
  {
    ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL,b_125 = NULL;
    ATerm e_27;
    e_27 = t;
    {
      ATerm q_124 = NULL,s_124 = NULL,u_124 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_124), term_g_27);
      {
        ATerm h_27 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_27;
          }
        {
          ATerm i_27;
          i_27 = t;
          {
            ATerm r_124 = NULL;
            t = term_u_18;
            {
              t = q_0(t);
              {
                r_124 = t;
                if(((q_124 != NULL) && (q_124 != r_124)))
                  _fail(r_124);
                else
                  q_124 = r_124;
              }
            }
          }
          t = i_27;
          {
            ATerm t_124 = NULL;
            t = not_null(d_124);
            {
              t = tvars_0(t);
              {
                t_124 = t;
                if(((s_124 != NULL) && (s_124 != t_124)))
                  _fail(t_124);
                else
                  s_124 = t_124;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_124), not_null(s_124));
              {
                t = isect_0(t);
                {
                  ATerm v_124 = NULL,x_124 = NULL,z_124 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    u_124 = t;
                    {
                      if(((n_124 != NULL) && (n_124 != u_124)))
                        _fail(u_124);
                      else
                        n_124 = u_124;
                      {
                        ATerm l_27;
                        l_27 = t;
                        {
                          ATerm w_124 = NULL;
                          t = term_u_18;
                          {
                            t = q_0(t);
                            {
                              w_124 = t;
                              if(((v_124 != NULL) && (v_124 != w_124)))
                                _fail(w_124);
                              else
                                v_124 = w_124;
                            }
                          }
                        }
                        t = l_27;
                        {
                          ATerm y_124 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(e_124), not_null(h_124));
                          {
                            t = tvars_0(t);
                            {
                              y_124 = t;
                              if(((x_124 != NULL) && (x_124 != y_124)))
                                _fail(y_124);
                              else
                                x_124 = y_124;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_124), not_null(x_124));
                            {
                              t = isect_0(t);
                              {
                                ATerm a_125 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  z_124 = t;
                                  {
                                    if(((o_124 != NULL) && (o_124 != z_124)))
                                      _fail(z_124);
                                    else
                                      o_124 = z_124;
                                    {
                                      t = new_0(t);
                                      {
                                        a_125 = t;
                                        if(((p_124 != NULL) && (p_124 != a_125)))
                                          _fail(a_125);
                                        else
                                          p_124 = a_125;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = e_27;
    {
      ATerm c_125 = NULL;
      t = not_null(a_124);
      {
        t = r_0(t);
        {
          c_125 = t;
          if(((b_125 != NULL) && (b_125 != c_125)))
            _fail(c_125);
          else
            b_125 = c_125;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(b_125), (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_27, (ATerm) ATinsert(CheckATermList(not_null(o_124)), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_124))))), (ATerm) ATmakeAppl(sym_Op_2, term_m_27, not_null(n_124)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(a_124), not_null(b_124), (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_124), not_null(e_124), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_p_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(a_124))))), (ATerm)ATmakeAppl(sym_Op_2, term_m_27, not_null(n_124)), (ATerm) ATmakeAppl(sym_Op_2, term_n_27, (ATerm) ATinsert(CheckATermList(not_null(o_124)), (ATerm) ATmakeAppl(sym_Str_1, not_null(p_124))))), not_null(h_124)))));
    }
    return(t);
  }
  ATerm q_125 (ATerm t)
  {
    ATerm h_125 = NULL,n_125 = NULL;
    ATerm q_27;
    q_27 = t;
    {
      ATerm i_125 = NULL,k_125 = NULL,m_125 = NULL;
      ATerm r_27;
      r_27 = t;
      {
        ATerm j_125 = NULL;
        t = term_u_18;
        {
          t = q_0(t);
          {
            j_125 = t;
            if(((i_125 != NULL) && (i_125 != j_125)))
              _fail(j_125);
            else
              i_125 = j_125;
          }
        }
      }
      t = r_27;
      {
        ATerm l_125 = NULL;
        t = not_null(d_124);
        {
          t = tvars_0(t);
          {
            l_125 = t;
            if(((k_125 != NULL) && (k_125 != l_125)))
              _fail(l_125);
            else
              k_125 = l_125;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_125), not_null(k_125));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                m_125 = t;
                if(((h_125 != NULL) && (h_125 != m_125)))
                  _fail(m_125);
                else
                  h_125 = m_125;
              }
            }
          }
        }
      }
    }
    t = q_27;
    {
      ATerm o_125 = NULL;
      t = not_null(a_124);
      {
        t = r_0(t);
        {
          o_125 = t;
          if(((n_125 != NULL) && (n_125 != o_125)))
            _fail(o_125);
          else
            n_125 = o_125;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(n_125), (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, term_g_27), (ATerm) ATmakeAppl(sym_Op_2, term_m_27, not_null(h_125)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(a_124), not_null(b_124), (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_124), term_s_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_p_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(a_124))))), (ATerm)ATmakeAppl(sym_Op_2, term_m_27, not_null(h_125)), term_g_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_124), term_b_13)))));
    }
    return(t);
  }
  z_123 = t;
  t_123 :
  if(match_cons(z_123, sym_RDef_3))
    {
      a_124 = ATgetArgument(z_123, 0);
      b_124 = ATgetArgument(z_123, 1);
      c_124 = ATgetArgument(z_123, 2);
      u_123 :
      if(match_cons(c_124, sym_Rule_3))
        {
          d_124 = ATgetArgument(c_124, 0);
          e_124 = ATgetArgument(c_124, 1);
          h_124 = ATgetArgument(c_124, 2);
          v_123 :
          if(match_cons(e_124, sym_Op_2))
            {
              f_124 = ATgetArgument(e_124, 0);
              g_124 = ATgetArgument(e_124, 1);
              w_123 :
              if(((ATermList) g_124 == ATempty))
                {
                  x_123 :
                  if(match_string(f_124, "Undefined"))
                    {
                      ATerm t_27 = t;
                      int u_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_125(t);
                          LocalPopChoice(u_27);
                        }
                      else
                        {
                          t = t_27;
                          t = q_125(t);
                        }
                    }
                  else
                    {
                      t = p_125(t);
                    }
                }
              else
                {
                  y_123 :
                  t = p_125(t);
                }
            }
          else
            {
              t = p_125(t);
            }
        }
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
  ATerm j_126 = NULL,k_126 = NULL,l_126 = NULL,m_126 = NULL;
  j_126 = t;
  h_126 :
  if(match_cons(j_126, sym__2))
    {
      k_126 = ATgetArgument(j_126, 0);
      m_126 = ATgetArgument(j_126, 1);
      i_126 :
      if(match_cons(k_126, sym_OverrideDynamicRules_1))
        {
          l_126 = ATgetArgument(k_126, 0);
          {
            t = not_null(l_126);
            {
              ATerm x_4 (ATerm t)
              {
                ATerm y_4 (ATerm t)
                {
                  t = not_null(m_126);
                  return(t);
                }
                ATerm z_4 (ATerm t)
                {
                  ATerm p_126 = NULL;
                  p_126 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_126)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, y_4, z_4);
                return(t);
              }
              t = map_1(t, x_4);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(k_126, sym_DynamicRules_1))
            {
              l_126 = ATgetArgument(k_126, 0);
              {
                t = not_null(l_126);
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm b_5 (ATerm t)
                    {
                      t = not_null(m_126);
                      return(t);
                    }
                    ATerm c_5 (ATerm t)
                    {
                      ATerm t_126 = NULL;
                      t_126 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_y_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(t_126)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, b_5, c_5);
                    return(t);
                  }
                  t = map_1(t, a_5);
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
ATerm dist_scope_1 (ATerm t, ATerm z_107 (ATerm))
{
  ATerm e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL;
  e_127 = t;
  c_127 :
  if(match_cons(e_127, sym__2))
    {
      f_127 = ATgetArgument(e_127, 0);
      i_127 = ATgetArgument(e_127, 1);
      d_127 :
      if(match_cons(f_127, sym_Scope_2))
        {
          g_127 = ATgetArgument(f_127, 0);
          h_127 = ATgetArgument(f_127, 1);
          {
            ATerm m_127 = NULL;
            ATerm n_127 = NULL,p_127 = NULL;
            ATerm o_127 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_127), not_null(i_127));
            {
              t = union_0(t);
              {
                o_127 = t;
                if(((n_127 != NULL) && (n_127 != o_127)))
                  _fail(o_127);
                else
                  n_127 = o_127;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_127), not_null(n_127));
              {
                t = z_107(t);
                {
                  p_127 = t;
                  if(((m_127 != NULL) && (m_127 != p_127)))
                    _fail(p_127);
                  else
                    m_127 = p_127;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_127), not_null(m_127));
          }
        }
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
ATerm one_dist_1 (ATerm t, ATerm m_100 (ATerm))
{
  ATerm w_127 = NULL,x_127 = NULL,y_127 = NULL;
  w_127 = t;
  v_127 :
  if(match_cons(w_127, sym__2))
    {
      x_127 = ATgetArgument(w_127, 0);
      y_127 = ATgetArgument(w_127, 1);
      {
        t = not_null(x_127);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm b_128 = NULL;
            b_128 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_128), not_null(y_127));
              t = m_100(t);
            }
            return(t);
          }
          t = _one(t, d_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm e_101 (ATerm))
{
  ATerm f_128 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_101(t);
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = one_dist_1(t, f_128);
      }
    return(t);
  }
  t = f_128(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL;
  m_128 = t;
  l_128 :
  if(((ATgetType(m_128) == AT_LIST) && ((ATermList) m_128 != ATempty)))
    {
      n_128 = ATgetFirst((ATermList) m_128);
      o_128 = (ATerm) ATgetNext((ATermList) m_128);
      {
        ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL;
        ATerm v_128 = NULL;
        t = not_null(n_128);
        {
          ATerm z_128 = NULL;
          t = tvars_0(t);
          {
            v_128 = t;
            {
              if(((t_128 != NULL) && (t_128 != v_128)))
                _fail(v_128);
              else
                t_128 = v_128;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_128), not_null(t_128));
                {
                  ATerm c_129 (ATerm t)
                  {
                    ATerm e_5 (ATerm t)
                    {
                      ATerm b_28 = t;
                      int c_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, c_129);
                          LocalPopChoice(c_28);
                        }
                      else
                        {
                          t = b_28;
                          {
                            ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              w_128 = t;
                              j_128 :
                              if(match_cons(w_128, sym__2))
                                {
                                  x_128 = ATgetArgument(w_128, 0);
                                  y_128 = ATgetArgument(w_128, 1);
                                  {
                                    if(((s_128 != NULL) && (s_128 != x_128)))
                                      _fail(x_128);
                                    else
                                      s_128 = x_128;
                                    {
                                      if(((r_128 != NULL) && (r_128 != y_128)))
                                        _fail(y_128);
                                      else
                                        r_128 = y_128;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_128));
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
                    t = env_oncetd_1(t, e_5);
                    return(t);
                  }
                  t = c_129(t);
                  {
                    z_128 = t;
                    if(((u_128 != NULL) && (u_128 != z_128)))
                      _fail(z_128);
                    else
                      u_128 = z_128;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_128)), not_null(u_128)), not_null(o_128));
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
ATerm repeat_2 (ATerm t, ATerm m_106 (ATerm), ATerm n_106 (ATerm))
{
  ATerm f_129 (ATerm t)
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_106(t);
        t = f_129(t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = n_106(t);
      }
    return(t);
  }
  t = f_129(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm p_106 (ATerm))
{
  t = repeat_2(t, p_106, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm u_99 (ATerm))
{
  ATerm g_129 (ATerm t)
  {
    t = u_99(t);
    {
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(g_28);
        }
      else
        {
          t = f_28;
          t = Cons_2(t, _id, g_129);
        }
    }
    return(t);
  }
  t = g_129(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, f_5);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL;
  n_129 = t;
  j_129 :
  if(match_cons(n_129, sym_DynRuleScope_2))
    {
      o_129 = ATgetArgument(n_129, 0);
      p_129 = ATgetArgument(n_129, 1);
      k_129 :
      if(((ATgetType(o_129) == AT_LIST) && ((ATermList) o_129 != ATempty)))
        {
          l_129 = ATgetFirst((ATermList) o_129);
          m_129 = (ATerm) ATgetNext((ATermList) o_129);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_i_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(m_129), not_null(p_129))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_129)))));
        }
      else
        {
          if(((ATermList) o_129 == ATempty))
            {
              t = not_null(p_129);
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
  ATerm g_5 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, g_5);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        ATerm k_5 (ATerm t)
        {
          ATerm l_5 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, l_5);
          return(t);
        }
        t = Cons_2(t, k_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, j_5);
      return(t);
    }
    t = Cons_2(t, _id, i_5);
    return(t);
  }
  t = Specification_1(t, h_5);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm z_129 = NULL,a_130 = NULL;
  z_129 = t;
  y_129 :
  if(match_cons(z_129, sym_ScopeDefault_1))
    {
      a_130 = ATgetArgument(z_129, 0);
      {
        ATerm c_130 = NULL;
        ATerm d_130 = NULL;
        t = not_null(a_130);
        {
          t = tvars_0(t);
          {
            d_130 = t;
            if(((c_130 != NULL) && (c_130 != d_130)))
              _fail(d_130);
            else
              c_130 = d_130;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_130), not_null(a_130));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm l_130 = NULL,m_130 = NULL;
  l_130 = t;
  k_130 :
  if(match_cons(l_130, sym_DynamicRules_1))
    {
      m_130 = ATgetArgument(l_130, 0);
      {
        ATerm p_130 = NULL,r_130 = NULL;
        ATerm q_130 = NULL;
        t = SSLgetAnnotations(not_null(l_130));
        {
          q_130 = t;
          if(((p_130 != NULL) && (p_130 != q_130)))
            _fail(q_130);
          else
            p_130 = q_130;
        }
        {
          t = not_null(m_130);
          {
            ATerm t_130 = NULL;
            t = v_76(t);
            {
              r_130 = t;
              {
                ATerm u_130 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(r_130)), not_null(p_130));
                {
                  u_130 = t;
                  if(((t_130 != NULL) && (t_130 != u_130)))
                    _fail(u_130);
                  else
                    t_130 = u_130;
                }
                t = not_null(t_130);
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
ATerm Scope_2 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm))
{
  ATerm f_131 = NULL,g_131 = NULL,h_131 = NULL;
  f_131 = t;
  e_131 :
  if(match_cons(f_131, sym_Scope_2))
    {
      g_131 = ATgetArgument(f_131, 0);
      h_131 = ATgetArgument(f_131, 1);
      {
        ATerm l_131 = NULL,n_131 = NULL;
        ATerm m_131 = NULL;
        t = SSLgetAnnotations(not_null(f_131));
        {
          m_131 = t;
          if(((l_131 != NULL) && (l_131 != m_131)))
            _fail(m_131);
          else
            l_131 = m_131;
        }
        {
          t = not_null(g_131);
          {
            ATerm p_131 = NULL;
            t = s_79(t);
            {
              n_131 = t;
              {
                t = not_null(h_131);
                {
                  ATerm r_131 = NULL;
                  t = t_79(t);
                  {
                    p_131 = t;
                    {
                      ATerm s_131 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(n_131), not_null(p_131)), not_null(l_131));
                      {
                        s_131 = t;
                        if(((r_131 != NULL) && (r_131 != s_131)))
                          _fail(s_131);
                        else
                          r_131 = s_131;
                      }
                      t = not_null(r_131);
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
ATerm tboundin_3 (ATerm t, ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, u_80, s_80);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = DynamicRules_1(t, s_80);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm a_132 = NULL,b_132 = NULL;
  a_132 = t;
  z_131 :
  if(match_cons(a_132, sym_DynamicRules_1))
    {
      b_132 = ATgetArgument(a_132, 0);
      {
        t = not_null(b_132);
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
  ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL,l_132 = NULL,m_132 = NULL,n_132 = NULL;
  l_132 = t;
  g_132 :
  if(match_cons(l_132, sym_LRule_1))
    {
      m_132 = ATgetArgument(l_132, 0);
      h_132 :
      if(match_cons(m_132, sym_Rule_3))
        {
          i_132 = ATgetArgument(m_132, 0);
          j_132 = ATgetArgument(m_132, 1);
          k_132 = ATgetArgument(m_132, 2);
          {
            t = not_null(i_132);
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
      if(match_cons(l_132, sym_Scope_2))
        {
          m_132 = ATgetArgument(l_132, 0);
          n_132 = ATgetArgument(l_132, 1);
          t = not_null(m_132);
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
  ATerm x_132 = NULL,y_132 = NULL;
  x_132 = t;
  w_132 :
  if(match_cons(x_132, sym_Var_1))
    {
      y_132 = ATgetArgument(x_132, 0);
      t = (ATerm) ATinsert(ATempty, not_null(y_132));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm d_133 = NULL,e_133 = NULL,f_133 = NULL;
  d_133 = t;
  c_133 :
  if(match_cons(d_133, sym__2))
    {
      e_133 = ATgetArgument(d_133, 0);
      f_133 = ATgetArgument(d_133, 1);
      {
        t = not_null(e_133);
        {
          ATerm j_133 (ATerm t)
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_133);
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                {
                  ATerm n_28 = t;
                  int o_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_5 (ATerm t)
                      {
                        t = not_null(f_133);
                        return(t);
                      }
                      t = HdMember_1(t, m_5);
                      t = j_133(t);
                      LocalPopChoice(o_28);
                    }
                  else
                    {
                      t = n_28;
                      t = Cons_2(t, _id, j_133);
                    }
                }
              }
            return(t);
          }
          t = j_133(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_93(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm o_133 = NULL,p_133 = NULL,q_133 = NULL;
        o_133 = t;
        n_133 :
        if(((ATgetType(o_133) == AT_LIST) && ((ATermList) o_133 != ATempty)))
          {
            p_133 = ATgetFirst((ATermList) o_133);
            q_133 = (ATerm) ATgetNext((ATermList) o_133);
            {
              ATerm t_133 = NULL,v_133 = NULL;
              ATerm r_28;
              r_28 = t;
              {
                ATerm u_133 = NULL;
                t = not_null(p_133);
                {
                  t = i_93(t);
                  {
                    u_133 = t;
                    if(((t_133 != NULL) && (t_133 != u_133)))
                      _fail(u_133);
                    else
                      t_133 = u_133;
                  }
                }
              }
              t = r_28;
              {
                ATerm w_133 = NULL;
                t = not_null(q_133);
                {
                  t = foldr_3(t, g_93, h_93, i_93);
                  {
                    w_133 = t;
                    if(((v_133 != NULL) && (v_133 != w_133)))
                      _fail(w_133);
                    else
                      v_133 = w_133;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_133), not_null(v_133));
                  t = h_93(t);
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
ATerm crush_3 (ATerm t, ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm x_94 (ATerm))
{
  ATerm e_134 = NULL;
  ATerm g_134 = NULL;
  e_134 = t;
  {
    ATerm h_134 = NULL;
    ATerm j_134 = NULL,k_134 = NULL,l_134 = NULL;
    t = not_null(e_134);
    {
      h_134 = t;
      {
        t = SSL_explode_term(not_null(h_134));
        {
          j_134 = t;
          d_134 :
          if(match_cons(j_134, sym__2))
            {
              k_134 = ATgetArgument(j_134, 0);
              l_134 = ATgetArgument(j_134, 1);
              if(((g_134 != NULL) && (g_134 != l_134)))
                _fail(l_134);
              else
                g_134 = l_134;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_134);
      t = foldr_3(t, v_94, w_94, x_94);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm s_134 = NULL,t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL;
  s_134 = t;
  q_134 :
  if(match_cons(s_134, sym__2))
    {
      t_134 = ATgetArgument(s_134, 0);
      u_134 = ATgetArgument(s_134, 1);
      r_134 :
      if(((ATgetType(u_134) == AT_LIST) && ((ATermList) u_134 != ATempty)))
        {
          v_134 = ATgetFirst((ATermList) u_134);
          w_134 = (ATerm) ATgetNext((ATermList) u_134);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_134)), not_null(v_134)), not_null(w_134));
        }
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
  ATerm l_135 = NULL,m_135 = NULL,n_135 = NULL,o_135 = NULL,p_135 = NULL;
  l_135 = t;
  j_135 :
  if(((ATgetType(l_135) == AT_LIST) && ((ATermList) l_135 != ATempty)))
    {
      m_135 = ATgetFirst((ATermList) l_135);
      p_135 = (ATerm) ATgetNext((ATermList) l_135);
      k_135 :
      if(match_cons(m_135, sym__2))
        {
          n_135 = ATgetArgument(m_135, 0);
          o_135 = ATgetArgument(m_135, 1);
          {
            ATerm t_135 = NULL,u_135 = NULL,a_136 = NULL,g_136 = NULL;
            ATerm s_28;
            s_28 = t;
            {
              ATerm v_135 = NULL;
              ATerm x_135 = NULL,y_135 = NULL,z_135 = NULL;
              t = not_null(o_135);
              {
                v_135 = t;
                {
                  t = SSL_explode_term(not_null(v_135));
                  {
                    x_135 = t;
                    e_135 :
                    if(match_cons(x_135, sym__2))
                      {
                        y_135 = ATgetArgument(x_135, 0);
                        z_135 = ATgetArgument(x_135, 1);
                        {
                          if(((t_135 != NULL) && (t_135 != y_135)))
                            _fail(y_135);
                          else
                            t_135 = y_135;
                          if(((u_135 != NULL) && (u_135 != z_135)))
                            _fail(z_135);
                          else
                            u_135 = z_135;
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
            t = s_28;
            {
              ATerm t_28;
              t_28 = t;
              {
                ATerm b_136 = NULL;
                ATerm d_136 = NULL,e_136 = NULL,f_136 = NULL;
                t = not_null(n_135);
                {
                  b_136 = t;
                  {
                    t = SSL_explode_term(not_null(b_136));
                    {
                      d_136 = t;
                      h_135 :
                      if(match_cons(d_136, sym__2))
                        {
                          e_136 = ATgetArgument(d_136, 0);
                          f_136 = ATgetArgument(d_136, 1);
                          {
                            if(((t_135 != NULL) && (t_135 != e_136)))
                              _fail(e_136);
                            else
                              t_135 = e_136;
                            if(((a_136 != NULL) && (a_136 != f_136)))
                              _fail(f_136);
                            else
                              a_136 = f_136;
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
              t = t_28;
              {
                ATerm h_136 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_136), not_null(u_135));
                {
                  t = zip_1(t, _id);
                  {
                    h_136 = t;
                    if(((g_136 != NULL) && (g_136 != h_136)))
                      _fail(h_136);
                    else
                      g_136 = h_136;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_136), not_null(p_135));
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
  ATerm r_136 = NULL,s_136 = NULL,t_136 = NULL,u_136 = NULL,v_136 = NULL;
  r_136 = t;
  p_136 :
  if(((ATgetType(r_136) == AT_LIST) && ((ATermList) r_136 != ATempty)))
    {
      s_136 = ATgetFirst((ATermList) r_136);
      v_136 = (ATerm) ATgetNext((ATermList) r_136);
      q_136 :
      if(match_cons(s_136, sym__2))
        {
          t_136 = ATgetArgument(s_136, 0);
          u_136 = ATgetArgument(s_136, 1);
          {
            ATerm x_136 = NULL;
            if(((t_136 != NULL) && (t_136 != u_136)))
              _fail(u_136);
            else
              t_136 = u_136;
            {
              if(((x_136 != NULL) && (x_136 != v_136)))
                _fail(v_136);
              else
                x_136 = v_136;
              t = not_null(x_136);
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
ATerm while_not_2 (ATerm t, ATerm d_107 (ATerm), ATerm e_107 (ATerm))
{
  ATerm z_136 (ATerm t)
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_107(t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        {
          t = e_107(t);
          t = z_136(t);
        }
      }
    return(t);
  }
  t = z_136(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm))
{
  t = g_107(t);
  t = while_not_2(t, h_107, i_107);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm k_94 (ATerm))
{
  ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL;
  d_137 = t;
  c_137 :
  if(((ATgetType(d_137) == AT_LIST) && ((ATermList) d_137 != ATempty)))
    {
      e_137 = ATgetFirst((ATermList) d_137);
      f_137 = (ATerm) ATgetNext((ATermList) d_137);
      {
        t = k_94(t);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm i_137 = NULL;
            i_137 = t;
            if(((e_137 != NULL) && (e_137 != i_137)))
              _fail(i_137);
            else
              e_137 = i_137;
            return(t);
          }
          t = fetch_1(t, n_5);
        }
        t = not_null(f_137);
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
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_137 = NULL,p_137 = NULL,q_137 = NULL;
      o_137 = t;
      m_137 :
      if(match_cons(o_137, sym__2))
        {
          p_137 = ATgetArgument(o_137, 0);
          q_137 = ATgetArgument(o_137, 1);
          {
            t = not_null(p_137);
            {
              ATerm w_137 (ATerm t)
              {
                ATerm y_28 = t;
                int z_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(z_28);
                  }
                else
                  {
                    t = y_28;
                    {
                      ATerm a_29 = t;
                      int b_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_5 (ATerm t)
                          {
                            t = not_null(q_137);
                            return(t);
                          }
                          t = HdMember_1(t, o_5);
                          t = w_137(t);
                          LocalPopChoice(b_29);
                        }
                      else
                        {
                          t = a_29;
                          t = Cons_2(t, _id, w_137);
                        }
                    }
                  }
                return(t);
              }
              t = w_137(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm t_137 = NULL;
          t_137 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(t_137));
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 (ATerm t)
              {
                ATerm e_29 = t;
                int f_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(f_29);
                  }
                else
                  {
                    t = e_29;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, s_5);
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, p_5, q_5, r_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm b_138 (ATerm t)
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_81(t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_137 = NULL;
              ATerm k_29;
              k_29 = t;
              {
                ATerm a_138 = NULL;
                t = z_81(t);
                {
                  a_138 = t;
                  if(((z_137 != NULL) && (z_137 != a_138)))
                    _fail(a_138);
                  else
                    z_137 = a_138;
                }
              }
              t = k_29;
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    t = not_null(z_137);
                    return(t);
                  }
                  t = split_2(t, b_138, v_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = a_82(t, t_5, b_138, u_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, w_5, union_0, _id);
                }
              }
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              {
                ATerm x_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, x_5, union_0, b_138);
              }
            }
        }
      }
    return(t);
  }
  t = b_138(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, y_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm h_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL,l_138 = NULL;
  h_138 = t;
  f_138 :
  if(match_cons(h_138, sym_LRule_1))
    {
      i_138 = ATgetArgument(h_138, 0);
      g_138 :
      if(match_cons(i_138, sym_Rule_3))
        {
          j_138 = ATgetArgument(i_138, 0);
          k_138 = ATgetArgument(i_138, 1);
          l_138 = ATgetArgument(i_138, 2);
          {
            ATerm p_138 = NULL;
            ATerm q_138 = NULL;
            t = not_null(j_138);
            {
              t = tvars_0(t);
              {
                q_138 = t;
                if(((p_138 != NULL) && (p_138 != q_138)))
                  _fail(q_138);
                else
                  p_138 = q_138;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(p_138), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_138), not_null(k_138), not_null(l_138))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm g_103 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    t = bottomup_1(t, g_103);
    return(t);
  }
  t = _all(t, z_5);
  t = g_103(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm n_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(o_29);
        }
      else
        {
          t = n_29;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, b_6);
    return(t);
  }
  t = bottomup_1(t, a_6);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm v_138 = NULL,w_138 = NULL;
  v_138 = t;
  u_138 :
  if(match_cons(v_138, sym_Var_1))
    {
      w_138 = ATgetArgument(v_138, 0);
      t = not_null(w_138);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL;
  c_139 = t;
  a_139 :
  if(match_cons(c_139, sym__2))
    {
      d_139 = ATgetArgument(c_139, 0);
      e_139 = ATgetArgument(c_139, 1);
      b_139 :
      if(((ATgetType(e_139) == AT_LIST) && ((ATermList) e_139 != ATempty)))
        {
          f_139 = ATgetFirst((ATermList) e_139);
          g_139 = (ATerm) ATgetNext((ATermList) e_139);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_139), not_null(g_139));
        }
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
  ATerm o_139 = NULL,p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL,t_139 = NULL,u_139 = NULL;
  o_139 = t;
  l_139 :
  if(match_cons(o_139, sym__2))
    {
      p_139 = ATgetArgument(o_139, 0);
      q_139 = ATgetArgument(o_139, 1);
      m_139 :
      if(((ATgetType(q_139) == AT_LIST) && ((ATermList) q_139 != ATempty)))
        {
          r_139 = ATgetFirst((ATermList) q_139);
          u_139 = (ATerm) ATgetNext((ATermList) q_139);
          n_139 :
          if(match_cons(r_139, sym__2))
            {
              s_139 = ATgetArgument(r_139, 0);
              t_139 = ATgetArgument(r_139, 1);
              {
                ATerm w_139 = NULL;
                if(((p_139 != NULL) && (p_139 != s_139)))
                  _fail(s_139);
                else
                  p_139 = s_139;
                {
                  if(((w_139 != NULL) && (w_139 != t_139)))
                    _fail(t_139);
                  else
                    w_139 = t_139;
                  t = not_null(w_139);
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
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm u_83 (ATerm), ATerm v_83 (ATerm))
{
  ATerm c_140 = NULL;
  ATerm e_140 = NULL,f_140 = NULL;
  c_140 = t;
  {
    ATerm g_140 = NULL;
    t = not_null(c_140);
    {
      ATerm h_140 = NULL;
      t = u_83(t);
      {
        g_140 = t;
        {
          if(((e_140 != NULL) && (e_140 != g_140)))
            _fail(g_140);
          else
            e_140 = g_140;
          {
            t = v_83(t);
            {
              h_140 = t;
              if(((f_140 != NULL) && (f_140 != h_140)))
                _fail(h_140);
              else
                f_140 = h_140;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_140), not_null(f_140));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm j_105 (ATerm))
{
  ATerm l_140 (ATerm t)
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_105(t);
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = _all(t, l_140);
      }
    return(t);
  }
  t = l_140(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm o_140 = NULL,p_140 = NULL,q_140 = NULL;
  o_140 = t;
  n_140 :
  if(match_cons(o_140, sym__2))
    {
      p_140 = ATgetArgument(o_140, 0);
      q_140 = ATgetArgument(o_140, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_140)), not_null(p_140));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm y_140 = NULL,z_140 = NULL,a_141 = NULL,b_141 = NULL,c_141 = NULL,d_141 = NULL,e_141 = NULL;
  y_140 = t;
  v_140 :
  if(match_cons(y_140, sym__2))
    {
      z_140 = ATgetArgument(y_140, 0);
      c_141 = ATgetArgument(y_140, 1);
      w_140 :
      if(((ATgetType(z_140) == AT_LIST) && ((ATermList) z_140 != ATempty)))
        {
          a_141 = ATgetFirst((ATermList) z_140);
          b_141 = (ATerm) ATgetNext((ATermList) z_140);
          x_140 :
          if(((ATgetType(c_141) == AT_LIST) && ((ATermList) c_141 != ATempty)))
            {
              d_141 = ATgetFirst((ATermList) c_141);
              e_141 = (ATerm) ATgetNext((ATermList) c_141);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(a_141), not_null(d_141)), (ATerm) ATmakeAppl(sym__2, not_null(b_141), not_null(e_141)));
            }
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
  ATerm o_141 = NULL,p_141 = NULL,q_141 = NULL;
  o_141 = t;
  l_141 :
  if(match_cons(o_141, sym__2))
    {
      p_141 = ATgetArgument(o_141, 0);
      q_141 = ATgetArgument(o_141, 1);
      m_141 :
      if(((ATermList) p_141 == ATempty))
        {
          n_141 :
          if(((ATermList) q_141 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm g_97 (ATerm))
{
  ATerm s_141 (ATerm t)
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        {
          t = e_97(t);
          {
            t = _2(t, g_97, s_141);
            t = f_97(t);
          }
        }
      }
    return(t);
  }
  t = s_141(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm i_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, i_97);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm x_141 = NULL,y_141 = NULL,z_141 = NULL,a_142 = NULL;
  x_141 = t;
  w_141 :
  if(match_cons(x_141, sym__2))
    {
      y_141 = ATgetArgument(x_141, 0);
      z_141 = ATgetArgument(x_141, 1);
      {
        ATerm c_142 = NULL;
        if(((c_142 != NULL) && (c_142 != z_141)))
          _fail(z_141);
        else
          c_142 = z_141;
      }
    }
  else
    {
      if(match_cons(x_141, sym__3))
        {
          y_141 = ATgetArgument(x_141, 0);
          z_141 = ATgetArgument(x_141, 1);
          a_142 = ATgetArgument(x_141, 2);
          {
            ATerm i_142 = NULL;
            ATerm j_142 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_141), not_null(z_141));
            {
              t = zip_1(t, _id);
              {
                j_142 = t;
                if(((i_142 != NULL) && (i_142 != j_142)))
                  _fail(j_142);
                else
                  i_142 = j_142;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_142), not_null(a_142));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm w_83 (ATerm), ATerm x_83 (ATerm))
{
  ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL;
  t = subs_args_0(t);
  {
    p_142 = t;
    o_142 :
    if(match_cons(p_142, sym__2))
      {
        q_142 = ATgetArgument(p_142, 0);
        r_142 = ATgetArgument(p_142, 1);
        {
          t = not_null(r_142);
          {
            ATerm c_6 (ATerm t)
            {
              ATerm d_6 (ATerm t)
              {
                t = not_null(q_142);
                return(t);
              }
              t = SubsVar_2(t, w_83, d_6);
              t = x_83(t);
              return(t);
            }
            t = alltd_1(t, c_6);
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
ATerm substitute_1 (ATerm t, ATerm y_83 (ATerm))
{
  t = substitute_2(t, y_83, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL;
  y_142 = t;
  w_142 :
  if(match_cons(y_142, sym_OpDecl_2))
    {
      z_142 = ATgetArgument(y_142, 0);
      a_143 = ATgetArgument(y_142, 1);
      x_142 :
      if(match_cons(a_143, sym_ConstType_1))
        {
          b_143 = ATgetArgument(a_143, 0);
          t = not_null(z_142);
        }
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
  ATerm g_143 = NULL,i_143 = NULL;
  g_143 = t;
  f_143 :
  if(match_cons(g_143, sym_Constructors_1))
    {
      i_143 = ATgetArgument(g_143, 0);
      {
        t = not_null(i_143);
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
  ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL,r_143 = NULL;
  o_143 = t;
  m_143 :
  if(match_cons(o_143, sym_Overlay_3))
    {
      p_143 = ATgetArgument(o_143, 0);
      q_143 = ATgetArgument(o_143, 1);
      r_143 = ATgetArgument(o_143, 2);
      n_143 :
      if(((ATermList) q_143 == ATempty))
        {
          t = not_null(p_143);
        }
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
  ATerm y_143 = NULL,z_143 = NULL;
  y_143 = t;
  x_143 :
  if(match_cons(y_143, sym_Overlays_1))
    {
      z_143 = ATgetArgument(y_143, 0);
      {
        t = not_null(z_143);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(y_143, sym_Signature_1))
        {
          z_143 = ATgetArgument(y_143, 0);
          {
            t = not_null(z_143);
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
ATerm filter_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 (ATerm t)
            {
              t = filter_1(t, k_92);
              return(t);
            }
            t = Cons_2(t, k_92, e_6);
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL;
              g_144 = t;
              f_144 :
              if(((ATgetType(g_144) == AT_LIST) && ((ATermList) g_144 != ATempty)))
                {
                  h_144 = ATgetFirst((ATermList) g_144);
                  i_144 = (ATerm) ATgetNext((ATermList) g_144);
                  {
                    t = not_null(i_144);
                    t = filter_1(t, k_92);
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
  ATerm p_144 = NULL,v_144 = NULL;
  ATerm z_29;
  z_29 = t;
  {
    ATerm u_144 = NULL;
    t = const_names_0(t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm q_144 = NULL,s_144 = NULL;
        ATerm a_30;
        a_30 = t;
        {
          ATerm r_144 = NULL;
          r_144 = t;
          if(((q_144 != NULL) && (q_144 != r_144)))
            _fail(r_144);
          else
            q_144 = r_144;
        }
        t = a_30;
        {
          ATerm t_144 = NULL;
          t_144 = t;
          if(((s_144 != NULL) && (s_144 != t_144)))
            _fail(t_144);
          else
            s_144 = t_144;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_144), (ATerm) ATmakeAppl(sym_Op_2, not_null(s_144), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, f_6);
      {
        u_144 = t;
        if(((p_144 != NULL) && (p_144 != u_144)))
          _fail(u_144);
        else
          p_144 = u_144;
      }
    }
  }
  t = z_29;
  {
    ATerm w_144 = NULL;
    w_144 = t;
    if(((v_144 != NULL) && (v_144 != w_144)))
      _fail(w_144);
    else
      v_144 = w_144;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_144), not_null(v_144));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm d_145 = NULL,e_145 = NULL,f_145 = NULL,g_145 = NULL;
  d_145 = t;
  c_145 :
  if(match_cons(d_145, sym__3))
    {
      e_145 = ATgetArgument(d_145, 0);
      f_145 = ATgetArgument(d_145, 1);
      g_145 = ATgetArgument(d_145, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(g_145))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(f_145))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(e_145))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm s_145 = NULL,t_145 = NULL,u_145 = NULL,v_145 = NULL,w_145 = NULL,x_145 = NULL,y_145 = NULL,z_145 = NULL,a_146 = NULL;
  s_145 = t;
  p_145 :
  if(match_cons(s_145, sym__2))
    {
      t_145 = ATgetArgument(s_145, 0);
      x_145 = ATgetArgument(s_145, 1);
      q_145 :
      if(match_cons(t_145, sym__3))
        {
          u_145 = ATgetArgument(t_145, 0);
          v_145 = ATgetArgument(t_145, 1);
          w_145 = ATgetArgument(t_145, 2);
          r_145 :
          if(match_cons(x_145, sym__3))
            {
              y_145 = ATgetArgument(x_145, 0);
              z_145 = ATgetArgument(x_145, 1);
              a_146 = ATgetArgument(x_145, 2);
              {
                ATerm h_146 = NULL,j_146 = NULL,l_146 = NULL;
                ATerm b_30;
                b_30 = t;
                {
                  ATerm i_146 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_145), not_null(y_145));
                  {
                    t = conc_0(t);
                    {
                      i_146 = t;
                      if(((h_146 != NULL) && (h_146 != i_146)))
                        _fail(i_146);
                      else
                        h_146 = i_146;
                    }
                  }
                }
                t = b_30;
                {
                  ATerm c_30;
                  c_30 = t;
                  {
                    ATerm k_146 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_145), not_null(z_145));
                    {
                      t = conc_0(t);
                      {
                        k_146 = t;
                        if(((j_146 != NULL) && (j_146 != k_146)))
                          _fail(k_146);
                        else
                          j_146 = k_146;
                      }
                    }
                  }
                  t = c_30;
                  {
                    ATerm m_146 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_145), not_null(a_146));
                    {
                      t = conc_0(t);
                      {
                        m_146 = t;
                        if(((l_146 != NULL) && (l_146 != m_146)))
                          _fail(m_146);
                        else
                          l_146 = m_146;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(h_146), not_null(j_146), not_null(l_146));
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
  ATerm u_146 = NULL,v_146 = NULL;
  u_146 = t;
  t_146 :
  if(match_cons(u_146, sym_Sorts_1))
    {
      v_146 = ATgetArgument(u_146, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(u_146, sym_Constructors_1))
        {
          v_146 = ATgetArgument(u_146, 0);
          t = not_null(v_146);
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
  ATerm g_147 = NULL,h_147 = NULL;
  g_147 = t;
  f_147 :
  if(match_cons(g_147, sym_Overlays_1))
    {
      h_147 = ATgetArgument(g_147, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(h_147), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(g_147, sym_Rules_1))
        {
          h_147 = ATgetArgument(g_147, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(h_147));
        }
      else
        {
          if(match_cons(g_147, sym_Strategies_1))
            {
              h_147 = ATgetArgument(g_147, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(h_147));
            }
          else
            {
              if(match_cons(g_147, sym_Signature_1))
                {
                  h_147 = ATgetArgument(g_147, 0);
                  {
                    ATerm m_147 = NULL;
                    ATerm n_147 = NULL;
                    t = not_null(h_147);
                    {
                      t = normalize_sigs_0(t);
                      {
                        n_147 = t;
                        if(((m_147 != NULL) && (m_147 != n_147)))
                          _fail(n_147);
                        else
                          m_147 = n_147;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(m_147), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm v_147 = NULL,w_147 = NULL;
  v_147 = t;
  u_147 :
  if(match_cons(v_147, sym_Specification_1))
    {
      w_147 = ATgetArgument(v_147, 0);
      t = not_null(w_147);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm f_103 (ATerm))
{
  t = f_103(t);
  {
    ATerm g_6 (ATerm t)
    {
      t = topdown_1(t, f_103);
      return(t);
    }
    t = _all(t, g_6);
  }
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      ATerm b_148 = NULL,c_148 = NULL;
      b_148 = t;
      a_148 :
      if(match_cons(b_148, sym_DefaultVarDec_1))
        {
          c_148 = ATgetArgument(b_148, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_148), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15));
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, i_6);
    return(t);
  }
  t = topdown_1(t, h_6);
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
        ATerm j_6 (ATerm t)
        {
          t = term_x_24;
          return(t);
        }
        t = foldr_2(t, j_6, Combine_0);
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
    ATerm d_30;
    d_30 = t;
    t = spec_use_def_0(t);
    t = d_30;
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
                ATerm k_6 (ATerm t)
                {
                  ATerm l_6 (ATerm t)
                  {
                    ATerm m_6 (ATerm t)
                    {
                      t = Strategies_1(t, desugar_spec_0);
                      return(t);
                    }
                    t = Cons_2(t, m_6, Nil_0);
                    return(t);
                  }
                  t = Cons_2(t, _id, l_6);
                  return(t);
                }
                t = Specification_1(t, k_6);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm s_68 (ATerm), ATerm t_68 (ATerm))
{
  ATerm l_148 = NULL,m_148 = NULL,n_148 = NULL;
  l_148 = t;
  k_148 :
  if(match_cons(l_148, sym__2))
    {
      m_148 = ATgetArgument(l_148, 0);
      n_148 = ATgetArgument(l_148, 1);
      {
        ATerm r_148 = NULL,t_148 = NULL;
        ATerm s_148 = NULL;
        t = SSLgetAnnotations(not_null(l_148));
        {
          s_148 = t;
          if(((r_148 != NULL) && (r_148 != s_148)))
            _fail(s_148);
          else
            r_148 = s_148;
        }
        {
          t = not_null(m_148);
          {
            ATerm v_148 = NULL;
            t = s_68(t);
            {
              t_148 = t;
              {
                t = not_null(n_148);
                {
                  ATerm x_148 = NULL;
                  t = t_68(t);
                  {
                    v_148 = t;
                    {
                      ATerm y_148 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_148), not_null(v_148)), not_null(r_148));
                      {
                        y_148 = t;
                        if(((x_148 != NULL) && (x_148 != y_148)))
                          _fail(y_148);
                        else
                          x_148 = y_148;
                      }
                      t = not_null(x_148);
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
  ATerm g_149 = NULL;
  ATerm e_30;
  e_30 = t;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm h_149 = NULL,i_149 = NULL;
      h_149 = t;
      f_149 :
      if(match_cons(h_149, sym_Program_1))
        {
          i_149 = ATgetArgument(h_149, 0);
          if(((g_149 != NULL) && (g_149 != i_149)))
            _fail(i_149);
          else
            g_149 = i_149;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, n_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_30), not_null(g_149)), term_f_30));
      {
        t = printnl_0(t);
        {
          t = term_d_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = e_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm m_149 = NULL,n_149 = NULL,o_149 = NULL;
  m_149 = t;
  l_149 :
  if(match_cons(m_149, sym__2))
    {
      n_149 = ATgetArgument(m_149, 0);
      o_149 = ATgetArgument(m_149, 1);
      {
        ATerm h_30;
        h_30 = t;
        t = SSL_printnl(not_null(n_149), not_null(o_149));
        t = h_30;
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
  ATerm u_149 = NULL,v_149 = NULL,w_149 = NULL;
  u_149 = t;
  t_149 :
  if(match_cons(u_149, sym__2))
    {
      v_149 = ATgetArgument(u_149, 0);
      w_149 = ATgetArgument(u_149, 1);
      {
        t = not_null(v_149);
        {
          ATerm o_6 (ATerm t)
          {
            t = not_null(w_149);
            return(t);
          }
          t = at_end_1(t, o_6);
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
ATerm debug_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm i_30;
  i_30 = t;
  {
    ATerm c_150 = NULL,e_150 = NULL;
    ATerm j_30;
    j_30 = t;
    {
      ATerm d_150 = NULL;
      t = h_89(t);
      {
        d_150 = t;
        if(((c_150 != NULL) && (c_150 != d_150)))
          _fail(d_150);
        else
          c_150 = d_150;
      }
    }
    t = j_30;
    {
      ATerm f_150 = NULL;
      f_150 = t;
      if(((e_150 != NULL) && (e_150 != f_150)))
        _fail(f_150);
      else
        e_150 = f_150;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_150)), not_null(c_150)));
        t = printnl_0(t);
      }
    }
  }
  t = i_30;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm j_150 = NULL;
  j_150 = t;
  t = SSL_is_string(not_null(j_150));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_6);
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm s_150 = NULL,t_150 = NULL,u_150 = NULL;
              s_150 = t;
              r_150 :
              if(match_cons(s_150, sym_Path_1))
                {
                  t_150 = ATgetArgument(s_150, 0);
                  t = not_null(t_150);
                }
              else
                {
                  if(match_cons(s_150, sym_Var_1))
                    {
                      t_150 = ATgetArgument(s_150, 0);
                      {
                        t = not_null(t_150);
                        {
                          ATerm o_30 = t;
                          int p_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_30);
                            }
                          else
                            {
                              t = o_30;
                              {
                                ATerm q_6 (ATerm t)
                                {
                                  t = term_q_30;
                                  return(t);
                                }
                                t = debug_1(t, q_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(s_150, sym_Prefix_2))
                        {
                          t_150 = ATgetArgument(s_150, 0);
                          u_150 = ATgetArgument(s_150, 1);
                          {
                            ATerm z_150 = NULL,b_151 = NULL;
                            ATerm r_30;
                            r_30 = t;
                            {
                              ATerm a_151 = NULL;
                              t = not_null(t_150);
                              {
                                t = eval_config_0(t);
                                {
                                  a_151 = t;
                                  if(((z_150 != NULL) && (z_150 != a_151)))
                                    _fail(a_151);
                                  else
                                    z_150 = a_151;
                                }
                              }
                            }
                            t = r_30;
                            {
                              ATerm c_151 = NULL;
                              t = not_null(u_150);
                              {
                                t = eval_config_0(t);
                                {
                                  c_151 = t;
                                  if(((b_151 != NULL) && (b_151 != c_151)))
                                    _fail(c_151);
                                  else
                                    b_151 = c_151;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_150), not_null(b_151));
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
  ATerm k_151 = NULL;
  k_151 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_30, not_null(k_151));
    {
      t = table_get_0(t);
      {
        ATerm r_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_30;
            t_30 = t;
            {
              ATerm m_151 = NULL;
              ATerm n_151 = NULL;
              n_151 = t;
              if(((m_151 != NULL) && (m_151 != n_151)))
                _fail(n_151);
              else
                m_151 = n_151;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_s_30, not_null(k_151), not_null(m_151));
                t = table_put_0(t);
              }
            }
            t = t_30;
          }
          return(t);
        }
        t = try_1(t, r_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm u_30;
    u_30 = t;
    {
      ATerm r_151 = NULL;
      ATerm s_151 = NULL;
      t = term_v_30;
      {
        t = get_config_0(t);
        {
          s_151 = t;
          if(((r_151 != NULL) && (r_151 != s_151)))
            _fail(s_151);
          else
            r_151 = s_151;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_151), term_w_30);
        t = geq_0(t);
      }
    }
    t = u_30;
    t = r_86(t);
    return(t);
  }
  t = try_1(t, s_6);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, term_x_30));
  {
    t = printnl_0(t);
    {
      t = term_d_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_151 = NULL;
  v_151 = t;
  t = SSL_TicksToSeconds(not_null(v_151));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_152 = NULL,b_152 = NULL,c_152 = NULL;
  a_152 = t;
  z_151 :
  if(match_cons(a_152, sym__2))
    {
      b_152 = ATgetArgument(a_152, 0);
      c_152 = ATgetArgument(a_152, 1);
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_152), not_null(c_152));
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            t = SSL_addr(not_null(b_152), not_null(c_152));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_93(t);
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm j_152 = NULL,k_152 = NULL,l_152 = NULL;
        j_152 = t;
        i_152 :
        if(((ATgetType(j_152) == AT_LIST) && ((ATermList) j_152 != ATempty)))
          {
            k_152 = ATgetFirst((ATermList) j_152);
            l_152 = (ATerm) ATgetNext((ATermList) j_152);
            {
              ATerm o_152 = NULL;
              ATerm p_152 = NULL;
              t = not_null(l_152);
              {
                t = foldr_2(t, e_93, f_93);
                {
                  p_152 = t;
                  if(((o_152 != NULL) && (o_152 != p_152)))
                    _fail(p_152);
                  else
                    o_152 = p_152;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_152), not_null(o_152));
                t = f_93(t);
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
ATerm crush_2 (ATerm t, ATerm t_94 (ATerm), ATerm u_94 (ATerm))
{
  ATerm w_152 = NULL;
  ATerm y_152 = NULL;
  w_152 = t;
  {
    ATerm z_152 = NULL;
    ATerm b_153 = NULL,c_153 = NULL,d_153 = NULL;
    t = not_null(w_152);
    {
      z_152 = t;
      {
        t = SSL_explode_term(not_null(z_152));
        {
          b_153 = t;
          v_152 :
          if(match_cons(b_153, sym__2))
            {
              c_153 = ATgetArgument(b_153, 0);
              d_153 = ATgetArgument(b_153, 1);
              if(((y_152 != NULL) && (y_152 != d_153)))
                _fail(d_153);
              else
                y_152 = d_153;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_152);
      t = foldr_2(t, t_94, u_94);
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
    ATerm t_6 (ATerm t)
    {
      t = term_e_21;
      return(t);
    }
    t = crush_2(t, t_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_153 = NULL,k_153 = NULL,l_153 = NULL;
  j_153 = t;
  i_153 :
  if(match_cons(j_153, sym__2))
    {
      k_153 = ATgetArgument(j_153, 0);
      l_153 = ATgetArgument(j_153, 1);
      {
        ATerm c_31;
        c_31 = t;
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_153), not_null(l_153));
              LocalPopChoice(e_31);
            }
          else
            {
              t = d_31;
              t = SSL_gtr(not_null(k_153), not_null(l_153));
            }
        }
        t = c_31;
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
  ATerm r_153 = NULL;
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_153 = NULL,t_153 = NULL,u_153 = NULL;
      s_153 = t;
      q_153 :
      if(match_cons(s_153, sym__2))
        {
          t_153 = ATgetArgument(s_153, 0);
          u_153 = ATgetArgument(s_153, 1);
          {
            if(((r_153 != NULL) && (r_153 != t_153)))
              _fail(t_153);
            else
              r_153 = t_153;
            if(((r_153 != NULL) && (r_153 != u_153)))
              _fail(u_153);
            else
              r_153 = u_153;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm h_31;
    h_31 = t;
    {
      ATerm x_153 = NULL;
      ATerm y_153 = NULL;
      t = term_v_30;
      {
        t = get_config_0(t);
        {
          y_153 = t;
          if(((x_153 != NULL) && (x_153 != y_153)))
            _fail(y_153);
          else
            x_153 = y_153;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_153), term_d_18);
        t = geq_0(t);
      }
    }
    t = h_31;
    t = q_86(t);
    return(t);
  }
  t = try_1(t, u_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm c_154 = NULL,e_154 = NULL;
    ATerm i_31;
    i_31 = t;
    {
      ATerm d_154 = NULL;
      t = run_time_0(t);
      {
        d_154 = t;
        if(((c_154 != NULL) && (c_154 != d_154)))
          _fail(d_154);
        else
          c_154 = d_154;
      }
    }
    t = i_31;
    {
      ATerm f_154 = NULL;
      t = term_j_31;
      {
        t = get_config_0(t);
        {
          f_154 = t;
          if(((e_154 != NULL) && (e_154 != f_154)))
            _fail(f_154);
          else
            e_154 = f_154;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_31), not_null(c_154)), term_k_31), not_null(e_154)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_6);
  {
    t = term_e_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm k_154 = NULL,l_154 = NULL,m_154 = NULL;
  k_154 = t;
  j_154 :
  if(match_cons(k_154, sym__2))
    {
      l_154 = ATgetArgument(k_154, 0);
      m_154 = ATgetArgument(k_154, 1);
      t = SSL_WriteToTextFile(not_null(l_154), not_null(m_154));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_154 = NULL,t_154 = NULL,u_154 = NULL;
  s_154 = t;
  r_154 :
  if(match_cons(s_154, sym__2))
    {
      t_154 = ATgetArgument(s_154, 0);
      u_154 = ATgetArgument(s_154, 1);
      t = SSL_WriteToBinaryFile(not_null(t_154), not_null(u_154));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_155 = NULL;
  ATerm m_31;
  m_31 = t;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 (ATerm t)
          {
            ATerm d_155 = NULL,e_155 = NULL;
            d_155 = t;
            z_154 :
            if(match_cons(d_155, sym_Output_1))
              {
                e_155 = ATgetArgument(d_155, 0);
                if(((c_155 != NULL) && (c_155 != e_155)))
                  _fail(e_155);
                else
                  c_155 = e_155;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_6);
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm f_155 = NULL;
            t = term_r_31;
            {
              f_155 = t;
              if(((c_155 != NULL) && (c_155 != f_155)))
                _fail(f_155);
              else
                c_155 = f_155;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_6, _id);
  }
  t = m_31;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm z_6 (ATerm t)
      {
        t = not_null(c_155);
        return(t);
      }
      t = split_2(t, z_6, _id);
      return(t);
    }
    t = _2(t, _id, y_6);
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_7 (ATerm t)
          {
            ATerm b_7 (ATerm t)
            {
              ATerm g_155 = NULL;
              g_155 = t;
              b_155 :
              if(!(match_cons(g_155, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_7);
            return(t);
          }
          t = _2(t, a_7, WriteToBinaryFile_0);
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_88 (ATerm))
{
  ATerm m_155 = NULL,o_155 = NULL,p_155 = NULL,q_155 = NULL;
  ATerm u_31;
  u_31 = t;
  t = dtime_0(t);
  t = u_31;
  {
    t = r_88(t);
    {
      ATerm v_31;
      v_31 = t;
      {
        ATerm n_155 = NULL;
        t = dtime_0(t);
        {
          n_155 = t;
          if(((m_155 != NULL) && (m_155 != n_155)))
            _fail(n_155);
          else
            m_155 = n_155;
        }
      }
      t = v_31;
      {
        o_155 = t;
        l_155 :
        if(match_cons(o_155, sym__2))
          {
            p_155 = ATgetArgument(o_155, 0);
            q_155 = ATgetArgument(o_155, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_155)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_155))), not_null(q_155));
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
  ATerm w_155 = NULL;
  w_155 = t;
  t = SSL_ReadFromFile(not_null(w_155));
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_91 (ATerm), ATerm t_91 (ATerm))
{
  ATerm b_156 = NULL,d_156 = NULL;
  ATerm c_32;
  c_32 = t;
  {
    ATerm c_156 = NULL;
    t = s_91(t);
    {
      c_156 = t;
      if(((b_156 != NULL) && (b_156 != c_156)))
        _fail(c_156);
      else
        b_156 = c_156;
    }
  }
  t = c_32;
  {
    ATerm e_156 = NULL;
    t = t_91(t);
    {
      e_156 = t;
      if(((d_156 != NULL) && (d_156 != e_156)))
        _fail(e_156);
      else
        d_156 = e_156;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_156), not_null(d_156));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_156 = NULL;
  ATerm d_32;
  d_32 = t;
  {
    ATerm e_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 (ATerm t)
        {
          ATerm l_156 = NULL,m_156 = NULL;
          l_156 = t;
          i_156 :
          if(match_cons(l_156, sym_Input_1))
            {
              m_156 = ATgetArgument(l_156, 0);
              if(((k_156 != NULL) && (k_156 != m_156)))
                _fail(m_156);
              else
                k_156 = m_156;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_7);
        LocalPopChoice(g_32);
      }
    else
      {
        t = e_32;
        {
          ATerm n_156 = NULL;
          t = term_h_32;
          {
            n_156 = t;
            if(((k_156 != NULL) && (k_156 != n_156)))
              _fail(n_156);
            else
              k_156 = n_156;
          }
        }
      }
  }
  t = d_32;
  {
    ATerm d_7 (ATerm t)
    {
      t = not_null(k_156);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_156 = NULL;
  u_156 = t;
  t_156 :
  if(match_cons(u_156, sym_Version_0))
    {
      ATerm w_156 = NULL,y_156 = NULL;
      ATerm i_32;
      i_32 = t;
      {
        ATerm x_156 = NULL;
        t = SSLgetAnnotations(not_null(u_156));
        {
          x_156 = t;
          if(((w_156 != NULL) && (w_156 != x_156)))
            _fail(x_156);
          else
            w_156 = x_156;
        }
      }
      t = i_32;
      {
        ATerm z_156 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_156));
        {
          z_156 = t;
          if(((y_156 != NULL) && (y_156 != z_156)))
            _fail(z_156);
          else
            y_156 = z_156;
        }
        t = not_null(y_156);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_88 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          ATerm l_32 = t;
          int m_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(m_32);
            }
          else
            {
              t = l_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_7);
  t = p_88(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_157 = NULL;
  e_157 = t;
  t = SSL_table_create(not_null(e_157));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_157 = NULL;
  i_157 = t;
  {
    ATerm n_32;
    n_32 = t;
    {
      t = term_o_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_32, term_p_32, not_null(i_157));
          t = table_put_0(t);
        }
      }
    }
    t = n_32;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_157 = NULL;
  n_157 = t;
  t = SSL_string_to_int(not_null(n_157));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm v_157 = NULL,w_157 = NULL,x_157 = NULL,y_157 = NULL,z_157 = NULL;
  v_157 = t;
  t_157 :
  if(match_string(v_157, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(v_157) == AT_LIST) && ((ATermList) v_157 != ATempty)))
        {
          w_157 = ATgetFirst((ATermList) v_157);
          x_157 = (ATerm) ATgetNext((ATermList) v_157);
          u_157 :
          if(((ATgetType(x_157) == AT_LIST) && ((ATermList) x_157 != ATempty)))
            {
              y_157 = ATgetFirst((ATermList) x_157);
              z_157 = (ATerm) ATgetNext((ATermList) x_157);
              {
                ATerm d_158 = NULL;
                ATerm q_32;
                q_32 = t;
                {
                  t = not_null(w_157);
                  t = n_0(t);
                }
                t = q_32;
                {
                  ATerm e_158 = NULL;
                  t = not_null(y_157);
                  {
                    t = o_0(t);
                    {
                      e_158 = t;
                      if(((d_158 != NULL) && (d_158 != e_158)))
                        _fail(e_158);
                      else
                        d_158 = e_158;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_157)), not_null(d_158));
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
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7 (ATerm t)
      {
        ATerm w_158 = NULL;
        w_158 = t;
        i_158 :
        if(!(match_string(w_158, "-i")))
          {
            if(!(match_string(w_158, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        ATerm z_158 = NULL;
        ATerm t_32;
        t_32 = t;
        {
          ATerm x_158 = NULL;
          ATerm y_158 = NULL;
          y_158 = t;
          if(((x_158 != NULL) && (x_158 != y_158)))
            _fail(y_158);
          else
            x_158 = y_158;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_u_32, not_null(x_158));
            t = set_config_0(t);
          }
        }
        t = t_32;
        {
          ATerm a_159 = NULL;
          a_159 = t;
          if(((z_158 != NULL) && (z_158 != a_159)))
            _fail(a_159);
          else
            z_158 = a_159;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_158));
        }
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        t = term_v_32;
        return(t);
      }
      t = ArgOption_3(t, f_7, g_7, h_7);
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              ATerm b_159 = NULL;
              b_159 = t;
              l_158 :
              if(!(match_string(b_159, "-o")))
                {
                  if(!(match_string(b_159, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              ATerm e_159 = NULL;
              ATerm y_32;
              y_32 = t;
              {
                ATerm c_159 = NULL;
                ATerm d_159 = NULL;
                d_159 = t;
                if(((c_159 != NULL) && (c_159 != d_159)))
                  _fail(d_159);
                else
                  c_159 = d_159;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_32, not_null(c_159));
                  t = set_config_0(t);
                }
              }
              t = y_32;
              {
                ATerm f_159 = NULL;
                f_159 = t;
                if(((e_159 != NULL) && (e_159 != f_159)))
                  _fail(f_159);
                else
                  e_159 = f_159;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_159));
              }
              return(t);
            }
            ATerm k_7 (ATerm t)
            {
              t = term_a_33;
              return(t);
            }
            t = ArgOption_3(t, i_7, j_7, k_7);
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            {
              ATerm b_33 = t;
              int c_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm g_159 = NULL;
                    g_159 = t;
                    o_158 :
                    if(!(match_string(g_159, "-S")))
                      {
                        if(!(match_string(g_159, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_7 (ATerm t)
                  {
                    t = term_d_33;
                    t = set_config_0(t);
                    t = term_e_33;
                    return(t);
                  }
                  ATerm n_7 (ATerm t)
                  {
                    t = term_f_33;
                    return(t);
                  }
                  t = Option_3(t, l_7, m_7, n_7);
                  LocalPopChoice(c_33);
                }
              else
                {
                  t = b_33;
                  {
                    ATerm g_33 = t;
                    int h_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_7 (ATerm t)
                        {
                          ATerm h_159 = NULL;
                          h_159 = t;
                          p_158 :
                          if(!(match_string(h_159, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_7 (ATerm t)
                        {
                          ATerm k_159 = NULL;
                          ATerm i_33;
                          i_33 = t;
                          {
                            ATerm i_159 = NULL;
                            ATerm j_159 = NULL;
                            t = string_to_int_0(t);
                            {
                              j_159 = t;
                              if(((i_159 != NULL) && (i_159 != j_159)))
                                _fail(j_159);
                              else
                                i_159 = j_159;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_v_30, not_null(i_159));
                              t = set_config_0(t);
                            }
                          }
                          t = i_33;
                          {
                            ATerm l_159 = NULL;
                            l_159 = t;
                            if(((k_159 != NULL) && (k_159 != l_159)))
                              _fail(l_159);
                            else
                              k_159 = l_159;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_159));
                          }
                          return(t);
                        }
                        ATerm q_7 (ATerm t)
                        {
                          t = term_j_33;
                          return(t);
                        }
                        t = ArgOption_3(t, o_7, p_7, q_7);
                        LocalPopChoice(h_33);
                      }
                    else
                      {
                        t = g_33;
                        {
                          ATerm k_33 = t;
                          int l_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_7 (ATerm t)
                              {
                                ATerm m_159 = NULL;
                                m_159 = t;
                                s_158 :
                                if(!(match_string(m_159, "-v")))
                                  {
                                    if(!(match_string(m_159, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm s_7 (ATerm t)
                              {
                                t = term_n_33;
                                t = set_config_0(t);
                                t = term_o_33;
                                return(t);
                              }
                              ATerm t_7 (ATerm t)
                              {
                                t = term_p_33;
                                return(t);
                              }
                              t = Option_3(t, r_7, s_7, t_7);
                              LocalPopChoice(l_33);
                            }
                          else
                            {
                              t = k_33;
                              {
                                ATerm q_33 = t;
                                int r_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_7 (ATerm t)
                                    {
                                      ATerm n_159 = NULL;
                                      n_159 = t;
                                      t_158 :
                                      if(!(match_string(n_159, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm v_7 (ATerm t)
                                    {
                                      t = term_t_33;
                                      t = set_config_0(t);
                                      t = term_u_33;
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      t = term_v_33;
                                      return(t);
                                    }
                                    t = Option_3(t, u_7, v_7, w_7);
                                    LocalPopChoice(r_33);
                                  }
                                else
                                  {
                                    t = q_33;
                                    {
                                      ATerm x_7 (ATerm t)
                                      {
                                        ATerm o_159 = NULL;
                                        o_159 = t;
                                        v_158 :
                                        if(!(match_string(o_159, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm y_7 (ATerm t)
                                      {
                                        t = term_x_33;
                                        t = set_config_0(t);
                                        t = term_y_33;
                                        return(t);
                                      }
                                      ATerm z_7 (ATerm t)
                                      {
                                        t = term_z_33;
                                        return(t);
                                      }
                                      t = Option_3(t, x_7, y_7, z_7);
                                    }
                                  }
                              }
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
  ATerm w_159 = NULL;
  w_159 = t;
  t = SSL_table_destroy(not_null(w_159));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_160 = NULL;
  a_160 = t;
  t = SSL_exit(not_null(a_160));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm e_160 = NULL;
  e_160 = t;
  t = SSL_implode_string(not_null(e_160));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_99 (ATerm))
{
  ATerm h_160 (ATerm t)
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_160);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        {
          t = Nil_0(t);
          t = e_99(t);
        }
      }
    return(t);
  }
  t = h_160(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm k_160 = NULL,l_160 = NULL,m_160 = NULL;
        k_160 = t;
        j_160 :
        if(((ATgetType(k_160) == AT_LIST) && ((ATermList) k_160 != ATempty)))
          {
            l_160 = ATgetFirst((ATermList) k_160);
            m_160 = (ATerm) ATgetNext((ATermList) k_160);
            {
              t = not_null(l_160);
              {
                ATerm a_8 (ATerm t)
                {
                  t = not_null(m_160);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_8);
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
  ATerm s_160 = NULL;
  s_160 = t;
  t = SSL_explode_string(not_null(s_160));
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
ATerm long_description_1 (ATerm t, ATerm q_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_98 (ATerm))
{
  ATerm v_160 (ATerm t)
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = Cons_2(t, q_98, v_160);
      }
    return(t);
  }
  t = v_160(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm d_161 = NULL,e_161 = NULL,f_161 = NULL;
  f_161 = t;
  b_161 :
  if(((ATgetType(f_161) == AT_LIST) && ((ATermList) f_161 != ATempty)))
    {
      d_161 = ATgetFirst((ATermList) f_161);
      e_161 = (ATerm) ATgetNext((ATermList) f_161);
      {
        ATerm i_161 = NULL;
        t = not_null(e_161);
        {
          ATerm g_34;
          g_34 = t;
          {
            ATerm j_161 = NULL,l_161 = NULL,n_161 = NULL;
            ATerm h_34;
            h_34 = t;
            {
              ATerm k_161 = NULL;
              t = m_0(t);
              {
                k_161 = t;
                if(((j_161 != NULL) && (j_161 != k_161)))
                  _fail(k_161);
                else
                  j_161 = k_161;
              }
            }
            t = h_34;
            {
              ATerm m_161 = NULL;
              t = not_null(d_161);
              {
                t = l_0(t);
                {
                  m_161 = t;
                  if(((l_161 != NULL) && (l_161 != m_161)))
                    _fail(m_161);
                  else
                    l_161 = m_161;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_161)), not_null(l_161));
                {
                  n_161 = t;
                  if(((i_161 != NULL) && (i_161 != n_161)))
                    _fail(n_161);
                  else
                    i_161 = n_161;
                }
              }
            }
          }
          t = g_34;
          {
            ATerm b_8 (ATerm t)
            {
              t = not_null(i_161);
              return(t);
            }
            t = reverse_acc_2(t, l_0, b_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) f_161 == ATempty))
        {
          {
            t = term_u_18;
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
  ATerm c_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm p_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm y_161 = NULL,z_161 = NULL;
  y_161 = t;
  x_161 :
  if(match_cons(y_161, sym_Program_1))
    {
      z_161 = ATgetArgument(y_161, 0);
      {
        ATerm c_162 = NULL,e_162 = NULL;
        ATerm d_162 = NULL;
        t = SSLgetAnnotations(not_null(y_161));
        {
          d_162 = t;
          if(((c_162 != NULL) && (c_162 != d_162)))
            _fail(d_162);
          else
            c_162 = d_162;
        }
        {
          t = not_null(z_161);
          {
            ATerm g_162 = NULL;
            t = g_70(t);
            {
              e_162 = t;
              {
                ATerm h_162 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_162)), not_null(c_162));
                {
                  h_162 = t;
                  if(((g_162 != NULL) && (g_162 != h_162)))
                    _fail(h_162);
                  else
                    g_162 = h_162;
                }
                t = not_null(g_162);
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
  ATerm q_162 = NULL;
  ATerm d_8 (ATerm t)
  {
    ATerm e_8 (ATerm t)
    {
      ATerm r_162 = NULL;
      r_162 = t;
      if(((q_162 != NULL) && (q_162 != r_162)))
        _fail(r_162);
      else
        q_162 = r_162;
      return(t);
    }
    t = Program_1(t, e_8);
    return(t);
  }
  t = option_defined_1(t, d_8);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm s_162 = NULL;
      ATerm t_162 = NULL;
      t = term_u_18;
      {
        ATerm g_8 (ATerm t)
        {
          t = not_null(q_162);
          return(t);
        }
        t = short_description_1(t, g_8);
        {
          t = concat_strings_0(t);
          {
            t_162 = t;
            if(((s_162 != NULL) && (s_162 != t_162)))
              _fail(t_162);
            else
              s_162 = t_162;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(s_162)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, term_i_34));
      {
        t = printnl_0(t);
        {
          t = term_l_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_8 (ATerm t)
                {
                  ATerm u_162 = NULL;
                  u_162 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_162)), term_m_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_8);
                {
                  ATerm i_8 (ATerm t)
                  {
                    ATerm w_162 = NULL;
                    ATerm x_162 = NULL;
                    t = term_u_18;
                    {
                      ATerm j_8 (ATerm t)
                      {
                        t = not_null(q_162);
                        return(t);
                      }
                      t = long_description_1(t, j_8);
                      {
                        t = concat_strings_0(t);
                        {
                          x_162 = t;
                          if(((w_162 != NULL) && (w_162 != x_162)))
                            _fail(x_162);
                          else
                            w_162 = x_162;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_162)), term_n_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_8);
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
ATerm Undefined_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm h_163 = NULL,i_163 = NULL;
  h_163 = t;
  g_163 :
  if(match_cons(h_163, sym_Undefined_1))
    {
      i_163 = ATgetArgument(h_163, 0);
      {
        ATerm l_163 = NULL,o_163 = NULL;
        ATerm n_163 = NULL;
        t = SSLgetAnnotations(not_null(h_163));
        {
          n_163 = t;
          if(((l_163 != NULL) && (l_163 != n_163)))
            _fail(n_163);
          else
            l_163 = n_163;
        }
        {
          t = not_null(i_163);
          {
            ATerm q_163 = NULL;
            t = h_70(t);
            {
              o_163 = t;
              {
                ATerm r_163 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_163)), not_null(l_163));
                {
                  r_163 = t;
                  if(((q_163 != NULL) && (q_163 != r_163)))
                    _fail(r_163);
                  else
                    q_163 = r_163;
                }
                t = not_null(q_163);
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
ATerm fetch_1 (ATerm t, ATerm y_98 (ATerm))
{
  ATerm w_163 (ATerm t)
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_98, _id);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = Cons_2(t, _id, w_163);
      }
    return(t);
  }
  t = w_163(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_86 (ATerm))
{
  t = fetch_1(t, o_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_164 = NULL;
  b_164 = t;
  a_164 :
  if(match_cons(b_164, sym_Help_0))
    {
      ATerm d_164 = NULL,f_164 = NULL;
      ATerm q_34;
      q_34 = t;
      {
        ATerm e_164 = NULL;
        t = SSLgetAnnotations(not_null(b_164));
        {
          e_164 = t;
          if(((d_164 != NULL) && (d_164 != e_164)))
            _fail(e_164);
          else
            d_164 = e_164;
        }
      }
      t = q_34;
      {
        ATerm h_164 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_164));
        {
          h_164 = t;
          if(((f_164 != NULL) && (f_164 != h_164)))
            _fail(h_164);
          else
            f_164 = h_164;
        }
        t = not_null(f_164);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_107(t);
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_164 = NULL,o_164 = NULL,p_164 = NULL;
  n_164 = t;
  m_164 :
  if(match_cons(n_164, sym__2))
    {
      o_164 = ATgetArgument(n_164, 0);
      p_164 = ATgetArgument(n_164, 1);
      t = SSL_table_get(not_null(o_164), not_null(p_164));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_164 = NULL,x_164 = NULL,y_164 = NULL,z_164 = NULL;
  w_164 = t;
  v_164 :
  if(match_cons(w_164, sym__3))
    {
      x_164 = ATgetArgument(w_164, 0);
      y_164 = ATgetArgument(w_164, 1);
      z_164 = ATgetArgument(w_164, 2);
      {
        ATerm t_34;
        t_34 = t;
        {
          ATerm d_165 = NULL;
          ATerm e_165 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_164), not_null(y_164));
          {
            ATerm u_34 = t;
            int v_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_34);
              }
            else
              {
                t = u_34;
                t = (ATerm) ATempty;
              }
            {
              e_165 = t;
              if(((d_165 != NULL) && (d_165 != e_165)))
                _fail(e_165);
              else
                d_165 = e_165;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_164), not_null(y_164), (ATerm) ATinsert(CheckATermList(not_null(d_165)), not_null(z_164)));
            t = table_put_0(t);
          }
        }
        t = t_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm i_165 = NULL;
  ATerm j_165 = NULL;
  t = term_u_18;
  {
    t = u_85(t);
    {
      j_165 = t;
      if(((i_165 != NULL) && (i_165 != j_165)))
        _fail(j_165);
      else
        i_165 = j_165;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_34, term_k_34, not_null(i_165));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm p_165 = NULL,q_165 = NULL,r_165 = NULL;
  p_165 = t;
  o_165 :
  if(match_string(p_165, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(p_165) == AT_LIST) && ((ATermList) p_165 != ATempty)))
        {
          q_165 = ATgetFirst((ATermList) p_165);
          r_165 = (ATerm) ATgetNext((ATermList) p_165);
          {
            ATerm u_165 = NULL;
            ATerm w_34;
            w_34 = t;
            {
              t = not_null(q_165);
              t = a_0(t);
            }
            t = w_34;
            {
              ATerm v_165 = NULL;
              t = term_u_18;
              {
                t = b_0(t);
                {
                  v_165 = t;
                  if(((u_165 != NULL) && (u_165 != v_165)))
                    _fail(v_165);
                  else
                    u_165 = v_165;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_165)), not_null(u_165));
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
  ATerm k_8 (ATerm t)
  {
    ATerm a_166 = NULL;
    a_166 = t;
    z_165 :
    if(!(match_string(a_166, "--help")))
      {
        if(!(match_string(a_166, "-h")))
          {
            if(!(match_string(a_166, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    t = term_x_34;
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = term_y_34;
    return(t);
  }
  t = Option_3(t, k_8, l_8, m_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_166 = NULL,f_166 = NULL,g_166 = NULL;
  d_166 = t;
  c_166 :
  if(((ATgetType(d_166) == AT_LIST) && ((ATermList) d_166 != ATempty)))
    {
      f_166 = ATgetFirst((ATermList) d_166);
      g_166 = (ATerm) ATgetNext((ATermList) d_166);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_166)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_166)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_79 (ATerm), ATerm y_79 (ATerm))
{
  ATerm q_166 = NULL,r_166 = NULL,s_166 = NULL;
  q_166 = t;
  p_166 :
  if(((ATgetType(q_166) == AT_LIST) && ((ATermList) q_166 != ATempty)))
    {
      r_166 = ATgetFirst((ATermList) q_166);
      s_166 = (ATerm) ATgetNext((ATermList) q_166);
      {
        ATerm w_166 = NULL,z_166 = NULL;
        ATerm y_166 = NULL;
        t = SSLgetAnnotations(not_null(q_166));
        {
          y_166 = t;
          if(((w_166 != NULL) && (w_166 != y_166)))
            _fail(y_166);
          else
            w_166 = y_166;
        }
        {
          t = not_null(r_166);
          {
            ATerm b_167 = NULL;
            t = x_79(t);
            {
              z_166 = t;
              {
                t = not_null(s_166);
                {
                  ATerm d_167 = NULL;
                  t = y_79(t);
                  {
                    b_167 = t;
                    {
                      ATerm e_167 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_167)), not_null(z_166)), not_null(w_166));
                      {
                        e_167 = t;
                        if(((d_167 != NULL) && (d_167 != e_167)))
                          _fail(e_167);
                        else
                          d_167 = e_167;
                      }
                      t = not_null(d_167);
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
  ATerm o_167 = NULL;
  o_167 = t;
  n_167 :
  if(((ATermList) o_167 == ATempty))
    {
      {
        ATerm q_167 = NULL,s_167 = NULL;
        ATerm z_34;
        z_34 = t;
        {
          ATerm r_167 = NULL;
          t = SSLgetAnnotations(not_null(o_167));
          {
            r_167 = t;
            if(((q_167 != NULL) && (q_167 != r_167)))
              _fail(r_167);
            else
              q_167 = r_167;
          }
        }
        t = z_34;
        {
          ATerm t_167 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_167));
          {
            t_167 = t;
            if(((s_167 != NULL) && (s_167 != t_167)))
              _fail(t_167);
            else
              s_167 = t_167;
          }
          t = not_null(s_167);
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
  ATerm z_167 = NULL,a_168 = NULL,b_168 = NULL;
  z_167 = t;
  y_167 :
  if(match_cons(z_167, sym__2))
    {
      a_168 = ATgetArgument(z_167, 0);
      b_168 = ATgetArgument(z_167, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_30, not_null(a_168), not_null(b_168));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm a_35;
  a_35 = t;
  {
    ATerm n_8 (ATerm t)
    {
      t = term_b_35;
      t = s_85(t);
      return(t);
    }
    t = try_1(t, n_8);
  }
  t = a_35;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm j_168 = NULL;
      ATerm c_35;
      c_35 = t;
      {
        ATerm h_168 = NULL;
        ATerm i_168 = NULL;
        i_168 = t;
        if(((h_168 != NULL) && (h_168 != i_168)))
          _fail(i_168);
        else
          h_168 = i_168;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_31, not_null(h_168));
          t = set_config_0(t);
        }
      }
      t = c_35;
      {
        ATerm k_168 = NULL;
        k_168 = t;
        if(((j_168 != NULL) && (j_168 != k_168)))
          _fail(k_168);
        else
          j_168 = k_168;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(j_168));
      }
      return(t);
    }
    ATerm p_8 (ATerm t)
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              {
                t = s_85(t);
                t = Cons_2(t, _id, p_8);
              }
            }
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_8, p_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm q_168 = NULL,r_168 = NULL,s_168 = NULL;
  ATerm j_35;
  j_35 = t;
  {
    ATerm t_168 = NULL,u_168 = NULL,v_168 = NULL,w_168 = NULL;
    t_168 = t;
    p_168 :
    if(match_cons(t_168, sym__3))
      {
        u_168 = ATgetArgument(t_168, 0);
        v_168 = ATgetArgument(t_168, 1);
        w_168 = ATgetArgument(t_168, 2);
        {
          if(((q_168 != NULL) && (q_168 != u_168)))
            _fail(u_168);
          else
            q_168 = u_168;
          {
            if(((r_168 != NULL) && (r_168 != v_168)))
              _fail(v_168);
            else
              r_168 = v_168;
            {
              if(((s_168 != NULL) && (s_168 != w_168)))
                _fail(w_168);
              else
                s_168 = w_168;
              t = SSL_table_put(not_null(q_168), not_null(r_168), not_null(s_168));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm z_168 = NULL;
  ATerm k_35;
  k_35 = t;
  {
    t = term_l_35;
    t = table_put_0(t);
  }
  t = k_35;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_85(t);
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_8);
    {
      ATerm r_8 (ATerm t)
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_e_21;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            {
              ATerm s_8 (ATerm t)
              {
                ATerm t_8 (ATerm t)
                {
                  ATerm a_169 = NULL;
                  a_169 = t;
                  if(((z_168 != NULL) && (z_168 != a_169)))
                    _fail(a_169);
                  else
                    z_168 = a_169;
                  return(t);
                }
                t = Undefined_1(t, t_8);
                return(t);
              }
              t = option_defined_1(t, s_8);
              {
                ATerm q_35;
                q_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_168)), term_r_35));
                  t = printnl_0(t);
                }
                t = q_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_8);
      {
        ATerm s_35;
        s_35 = t;
        {
          t = term_j_34;
          t = table_destroy_0(t);
        }
        t = s_35;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_88(t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_8);
  {
    t = store_options_0(t);
    {
      t = g_88(t);
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, f_88);
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
            {
              ATerm x_35 = t;
              int y_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, d_88);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(y_35);
                }
              else
                {
                  t = x_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm))
{
  ATerm v_8 (ATerm t)
  {
    ATerm w_8 (ATerm t)
    {
      ATerm z_35;
      z_35 = t;
      {
        ATerm d_169 = NULL;
        ATerm e_169 = NULL;
        t = term_j_31;
        {
          t = get_config_0(t);
          {
            e_169 = t;
            if(((d_169 != NULL) && (d_169 != e_169)))
              _fail(e_169);
            else
              d_169 = e_169;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(d_169)));
          t = printnl_0(t);
        }
      }
      t = z_35;
      return(t);
    }
    t = if_verbose2_1(t, w_8);
    return(t);
  }
  t = iowrap_4(t, x_87, y_87, z_87, v_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_87 (ATerm), ATerm w_87 (ATerm))
{
  t = iowrap_3(t, v_87, w_87, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    t = _2(t, _id, s_87);
    return(t);
  }
  t = iowrap_2(t, x_8, _fail);
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
