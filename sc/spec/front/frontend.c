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
ATerm term_c_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_i_32;
ATerm term_r_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_y_26;
ATerm term_q_24;
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
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
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
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Op_2, term_g_27, (ATerm) ATempty);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATempty);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_27);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_28);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_e_21);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_21);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_u_18);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_u_18);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_x_33, term_u_18);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_l_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__3, term_k_34, term_l_34, (ATerm) ATempty);
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
ATerm Prim_2 (ATerm, ATerm z_79 (ATerm), ATerm a_80 (ATerm));
ATerm Explode_2 (ATerm, ATerm e_76 (ATerm), ATerm f_76 (ATerm));
ATerm pat_td_1 (ATerm, ATerm n_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm r_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm j_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm l_77 (ATerm));
ATerm spaste_1 (ATerm, ATerm z_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_78 (ATerm), ATerm t_78 (ATerm));
ATerm Let_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm r_78 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm t_83 (ATerm, ATerm (ATerm)), ATerm u_83 (ATerm), ATerm v_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_83 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm Con_3 (ATerm, ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm z_104 (ATerm));
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
ATerm rewrite_1 (ATerm, ATerm j_90 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm h_106 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm e_90 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_108 (ATerm), ATerm b_108 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm d_90 (ATerm));
ATerm scope_2 (ATerm, ATerm f_90 (ATerm), ATerm g_90 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm h_90 (ATerm));
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm y_81 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm v_80 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm r_83 (ATerm), ATerm s_83 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm f_83 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm p_100 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm u_100 (ATerm));
ATerm substitute_6 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm, ATerm (ATerm)), ATerm f_84 (ATerm), ATerm g_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_84 (ATerm, ATerm (ATerm)), ATerm i_84 (ATerm));
ATerm substitute_5 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm, ATerm (ATerm)), ATerm m_84 (ATerm), ATerm n_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_84 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm w_81 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm x_81 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm Overlay_3 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm));
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm s_80 (ATerm));
ATerm Union_0 (ATerm);
ATerm cart_1 (ATerm, ATerm e_97 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm k_79 (ATerm), ATerm l_79 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm BAM_3 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm));
ATerm BA_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm AM_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm MA_2 (ATerm, ATerm m_75 (ATerm), ATerm n_75 (ATerm));
ATerm Match_1 (ATerm, ATerm s_79 (ATerm));
ATerm Build_1 (ATerm, ATerm t_79 (ATerm));
ATerm constructs_1 (ATerm, ATerm r_80 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm y_78 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm h_77 (ATerm));
ATerm Signature_1 (ATerm, ATerm g_77 (ATerm));
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
ATerm dist_scope_1 (ATerm, ATerm d_108 (ATerm));
ATerm one_dist_1 (ATerm, ATerm q_100 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm i_101 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm q_106 (ATerm), ATerm r_106 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_106 (ATerm));
ATerm listtd_1 (ATerm, ATerm y_99 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm z_76 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_79 (ATerm), ATerm x_79 (ATerm));
ATerm tboundin_3 (ATerm, ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm m_93 (ATerm));
ATerm crush_3 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm));
ATerm for_3 (ATerm, ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm));
ATerm HdMember_1 (ATerm, ATerm o_94 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm k_103 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm n_105 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm));
ATerm zip_1 (ATerm, ATerm m_97 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm));
ATerm substitute_1 (ATerm, ATerm c_84 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm o_92 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_103 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm w_68 (ATerm), ATerm x_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_86 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_93 (ATerm), ATerm j_93 (ATerm));
ATerm crush_2 (ATerm, ATerm x_94 (ATerm), ATerm y_94 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_88 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_88 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_99 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_85 (ATerm));
ATerm map_1 (ATerm, ATerm u_98 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_85 (ATerm));
ATerm Program_1 (ATerm, ATerm k_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_107 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_85 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_80 (ATerm), ATerm c_80 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_87 (ATerm), ATerm a_88 (ATerm));
ATerm iowrap_1 (ATerm, ATerm w_87 (ATerm));
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
                    ATerm e_0 (ATerm t)
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
                    t = oncetd_1(t, e_0);
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
                              ATerm f_0 (ATerm t)
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
                              t = oncetd_1(t, f_0);
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
ATerm Prim_2 (ATerm t, ATerm z_79 (ATerm), ATerm a_80 (ATerm))
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
            t = z_79(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm v_18 = NULL;
                  t = a_80(t);
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
ATerm Explode_2 (ATerm t, ATerm e_76 (ATerm), ATerm f_76 (ATerm))
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
            t = e_76(t);
            {
              q_19 = t;
              {
                t = not_null(k_19);
                {
                  ATerm u_19 = NULL;
                  t = f_76(t);
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
ATerm pat_td_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_80(t);
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
                t = pat_td_1(t, n_80);
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
                    t = pat_td_1(t, n_80);
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
                          t = pat_td_1(t, n_80);
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
                              t = pat_td_1(t, n_80);
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
ATerm unzip_1 (ATerm t, ATerm r_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, r_97);
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
ATerm Strategies_1 (ATerm t, ATerm j_77 (ATerm))
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
            t = j_77(t);
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
ATerm Specification_1 (ATerm t, ATerm l_77 (ATerm))
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
            t = l_77(t);
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
ATerm spaste_1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = split_2(t, _id, z_80);
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
              t = split_2(t, _id, z_80);
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
                t = z_80(t);
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
ATerm Rec_2 (ATerm t, ATerm s_78 (ATerm), ATerm t_78 (ATerm))
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
            t = s_78(t);
            {
              q_25 = t;
              {
                t = not_null(k_25);
                {
                  ATerm u_25 = NULL;
                  t = t_78(t);
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
ATerm Let_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
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
            t = u_78(t);
            {
              p_26 = t;
              {
                t = not_null(j_26);
                {
                  ATerm t_26 = NULL;
                  t = v_78(t);
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
ATerm sboundin_3 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, a_81, a_81);
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
            t = SDef_3(t, c_81, c_81, a_81);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = Rec_2(t, c_81, a_81);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,q_31 = NULL;
  k_27 = t;
  b_27 :
  if(match_cons(k_27, sym_Rec_2))
    {
      l_27 = ATgetArgument(k_27, 0);
      q_31 = ATgetArgument(k_27, 1);
      t = (ATerm) ATinsert(ATempty, not_null(l_27));
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
            ATerm f_32 = NULL,g_32 = NULL,j_35 = NULL;
            f_32 = t;
            w_31 :
            if(match_cons(f_32, sym_VarDec_2))
              {
                g_32 = ATgetArgument(f_32, 0);
                j_35 = ATgetArgument(f_32, 1);
                t = not_null(g_32);
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
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  l_36 :
  if(match_cons(k_37, sym_Let_2))
    {
      l_37 = ATgetArgument(k_37, 0);
      m_37 = ATgetArgument(k_37, 1);
      {
        t = not_null(l_37);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm x_38 = NULL,y_38 = NULL,g_39 = NULL,h_39 = NULL;
            x_38 = t;
            k_36 :
            if(match_cons(x_38, sym_SDef_3))
              {
                y_38 = ATgetArgument(x_38, 0);
                g_39 = ATgetArgument(x_38, 1);
                h_39 = ATgetArgument(x_38, 2);
                t = not_null(y_38);
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
ATerm SVar_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm c_40 = NULL,d_40 = NULL;
  c_40 = t;
  b_40 :
  if(match_cons(c_40, sym_SVar_1))
    {
      d_40 = ATgetArgument(c_40, 0);
      {
        ATerm g_40 = NULL,i_40 = NULL;
        ATerm h_40 = NULL;
        t = SSLgetAnnotations(not_null(c_40));
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
        {
          t = not_null(d_40);
          {
            ATerm k_40 = NULL;
            t = r_78(t);
            {
              i_40 = t;
              {
                ATerm l_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(i_40)), not_null(g_40));
                {
                  l_40 = t;
                  if(((k_40 != NULL) && (k_40 != l_40)))
                    _fail(l_40);
                  else
                    k_40 = l_40;
                }
                t = not_null(k_40);
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
ATerm rename_4 (ATerm t, ATerm t_83 (ATerm, ATerm (ATerm)), ATerm u_83 (ATerm), ATerm v_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm w_83 (ATerm, ATerm (ATerm)))
{
  ATerm t_40 = NULL;
  t_40 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_40), (ATerm) ATempty);
    {
      ATerm w_40 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm n_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, t_83);
              LocalPopChoice(r_12);
            }
          else
            {
              t = n_12;
              {
                t = RnBinding_2(t, u_83, w_83);
                t = DistBinding_2(t, w_40, v_83);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, t_1);
        return(t);
      }
      t = w_40(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm x_40 (ATerm t, ATerm y_40 (ATerm))
  {
    t = Scope_2(t, y_40, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, x_40);
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
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_41 :
  if(match_cons(g_42, sym_Var_1))
    {
      h_42 = ATgetArgument(g_42, 0);
      f_42 :
      if(match_cons(h_42, sym_ListVar_1))
        {
          i_42 = ATgetArgument(h_42, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_42));
        }
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
  ATerm g_43 = NULL,h_43 = NULL;
  g_43 = t;
  f_43 :
  if(match_cons(g_43, sym_Build_1))
    {
      h_43 = ATgetArgument(g_43, 0);
      {
        ATerm j_43 = NULL,k_43 = NULL;
        ATerm x_43 = NULL;
        t = not_null(h_43);
        {
          ATerm u_1 (ATerm t)
          {
            ATerm l_43 = NULL,m_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
            l_43 = t;
            n_42 :
            if(match_cons(l_43, sym_Op_2))
              {
                m_43 = ATgetArgument(l_43, 0);
                o_43 = ATgetArgument(l_43, 1);
                o_42 :
                if(match_string(m_43, "Cons"))
                  {
                    p_42 :
                    if(((ATgetType(o_43) == AT_LIST) && ((ATermList) o_43 != ATempty)))
                      {
                        p_43 = ATgetFirst((ATermList) o_43);
                        s_43 = (ATerm) ATgetNext((ATermList) o_43);
                        q_42 :
                        if(match_cons(p_43, sym_Var_1))
                          {
                            q_43 = ATgetArgument(p_43, 0);
                            r_42 :
                            if(match_cons(q_43, sym_ListVar_1))
                              {
                                r_43 = ATgetArgument(q_43, 0);
                                x_42 :
                                if(((ATgetType(s_43) == AT_LIST) && ((ATermList) s_43 != ATempty)))
                                  {
                                    t_43 = ATgetFirst((ATermList) s_43);
                                    w_43 = (ATerm) ATgetNext((ATermList) s_43);
                                    y_42 :
                                    if(match_cons(t_43, sym_Op_2))
                                      {
                                        u_43 = ATgetArgument(t_43, 0);
                                        v_43 = ATgetArgument(t_43, 1);
                                        z_42 :
                                        if(match_string(u_43, "Nil"))
                                          {
                                            a_43 :
                                            if(((ATermList) v_43 == ATempty))
                                              {
                                                d_43 :
                                                if(((ATermList) w_43 == ATempty))
                                                  {
                                                    {
                                                      if(((j_43 != NULL) && (j_43 != r_43)))
                                                        _fail(r_43);
                                                      else
                                                        j_43 = r_43;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_43));
                                                    }
                                                  }
                                                else
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
            x_43 = t;
            if(((k_43 != NULL) && (k_43 != x_43)))
              _fail(x_43);
            else
              k_43 = x_43;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(k_43));
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
  ATerm p_44 = NULL,q_44 = NULL;
  p_44 = t;
  o_44 :
  if(match_cons(p_44, sym_Match_1))
    {
      q_44 = ATgetArgument(p_44, 0);
      {
        ATerm s_44 = NULL,t_44 = NULL;
        ATerm p_45 = NULL;
        t = not_null(q_44);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,o_45 = NULL;
            u_44 = t;
            d_44 :
            if(match_cons(u_44, sym_Op_2))
              {
                v_44 = ATgetArgument(u_44, 0);
                w_44 = ATgetArgument(u_44, 1);
                e_44 :
                if(match_string(v_44, "Cons"))
                  {
                    f_44 :
                    if(((ATgetType(w_44) == AT_LIST) && ((ATermList) w_44 != ATempty)))
                      {
                        x_44 = ATgetFirst((ATermList) w_44);
                        i_45 = (ATerm) ATgetNext((ATermList) w_44);
                        g_44 :
                        if(match_cons(x_44, sym_Var_1))
                          {
                            y_44 = ATgetArgument(x_44, 0);
                            h_44 :
                            if(match_cons(y_44, sym_ListVar_1))
                              {
                                z_44 = ATgetArgument(y_44, 0);
                                i_44 :
                                if(((ATgetType(i_45) == AT_LIST) && ((ATermList) i_45 != ATempty)))
                                  {
                                    j_45 = ATgetFirst((ATermList) i_45);
                                    o_45 = (ATerm) ATgetNext((ATermList) i_45);
                                    j_44 :
                                    if(match_cons(j_45, sym_Op_2))
                                      {
                                        k_45 = ATgetArgument(j_45, 0);
                                        l_45 = ATgetArgument(j_45, 1);
                                        k_44 :
                                        if(match_string(k_45, "Nil"))
                                          {
                                            l_44 :
                                            if(((ATermList) l_45 == ATempty))
                                              {
                                                m_44 :
                                                if(((ATermList) o_45 == ATempty))
                                                  {
                                                    {
                                                      if(((s_44 != NULL) && (s_44 != z_44)))
                                                        _fail(z_44);
                                                      else
                                                        s_44 = z_44;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_44));
                                                    }
                                                  }
                                                else
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
            p_45 = t;
            if(((t_44 != NULL) && (t_44 != p_45)))
              _fail(p_45);
            else
              t_44 = p_45;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(t_44));
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
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,d_47 = NULL;
  b_47 = t;
  t_46 :
  if(match_cons(b_47, sym_InfixApp_3))
    {
      d_47 = ATgetArgument(b_47, 0);
      y_46 = ATgetArgument(b_47, 1);
      x_46 = ATgetArgument(b_47, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_46), (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_46)), not_null(d_47))));
    }
  else
    {
      if(match_cons(b_47, sym_BAM_3))
        {
          d_47 = ATgetArgument(b_47, 0);
          y_46 = ATgetArgument(b_47, 1);
          x_46 = ATgetArgument(b_47, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(x_46))), not_null(d_47)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_46))));
        }
      else
        {
          if(match_cons(b_47, sym_AM_2))
            {
              d_47 = ATgetArgument(b_47, 0);
              y_46 = ATgetArgument(b_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_47), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_46)));
            }
          else
            {
              if(match_cons(b_47, sym_MA_2))
                {
                  d_47 = ATgetArgument(b_47, 0);
                  y_46 = ATgetArgument(b_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_47)), not_null(y_46));
                }
              else
                {
                  if(match_cons(b_47, sym_BA_2))
                    {
                      d_47 = ATgetArgument(b_47, 0);
                      y_46 = ATgetArgument(b_47, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_46)), not_null(d_47));
                    }
                  else
                    {
                      if(match_cons(b_47, sym_Lets_2))
                        {
                          d_47 = ATgetArgument(b_47, 0);
                          y_46 = ATgetArgument(b_47, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_47), not_null(y_46));
                        }
                      else
                        {
                          if(match_cons(b_47, sym_LChoices_1))
                            {
                              d_47 = ATgetArgument(b_47, 0);
                              u_46 :
                              if(((ATgetType(d_47) == AT_LIST) && ((ATermList) d_47 != ATempty)))
                                {
                                  z_46 = ATgetFirst((ATermList) d_47);
                                  a_47 = (ATerm) ATgetNext((ATermList) d_47);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_46), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_47)));
                                }
                              else
                                {
                                  if(((ATermList) d_47 == ATempty))
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
                              if(match_cons(b_47, sym_Choices_1))
                                {
                                  d_47 = ATgetArgument(b_47, 0);
                                  v_46 :
                                  if(((ATgetType(d_47) == AT_LIST) && ((ATermList) d_47 != ATempty)))
                                    {
                                      z_46 = ATgetFirst((ATermList) d_47);
                                      a_47 = (ATerm) ATgetNext((ATermList) d_47);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_47)));
                                    }
                                  else
                                    {
                                      if(((ATermList) d_47 == ATempty))
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
                                  if(match_cons(b_47, sym_Seqs_1))
                                    {
                                      d_47 = ATgetArgument(b_47, 0);
                                      w_46 :
                                      if(((ATgetType(d_47) == AT_LIST) && ((ATermList) d_47 != ATempty)))
                                        {
                                          z_46 = ATgetFirst((ATermList) d_47);
                                          a_47 = (ATerm) ATgetNext((ATermList) d_47);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_47)));
                                        }
                                      else
                                        {
                                          if(((ATermList) d_47 == ATempty))
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
  ATerm o_48 = NULL;
  o_48 = t;
  n_48 :
  if(match_cons(o_48, sym_Wld_0))
    {
      ATerm q_48 = NULL,s_48 = NULL;
      ATerm j_13;
      j_13 = t;
      {
        ATerm r_48 = NULL;
        t = SSLgetAnnotations(not_null(o_48));
        {
          r_48 = t;
          if(((q_48 != NULL) && (q_48 != r_48)))
            _fail(r_48);
          else
            q_48 = r_48;
        }
      }
      t = j_13;
      {
        ATerm t_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(q_48));
        {
          t_48 = t;
          if(((s_48 != NULL) && (s_48 != t_48)))
            _fail(t_48);
          else
            s_48 = t_48;
        }
        t = not_null(s_48);
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
ATerm App_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm d_49 = NULL,g_49 = NULL,h_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym_App_2))
    {
      g_49 = ATgetArgument(d_49, 0);
      h_49 = ATgetArgument(d_49, 1);
      {
        ATerm q_49 = NULL,s_49 = NULL;
        ATerm r_49 = NULL;
        t = SSLgetAnnotations(not_null(d_49));
        {
          r_49 = t;
          if(((q_49 != NULL) && (q_49 != r_49)))
            _fail(r_49);
          else
            q_49 = r_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm u_49 = NULL;
            t = y_75(t);
            {
              s_49 = t;
              {
                t = not_null(h_49);
                {
                  ATerm w_49 = NULL;
                  t = z_75(t);
                  {
                    u_49 = t;
                    {
                      ATerm x_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(s_49), not_null(u_49)), not_null(q_49));
                      {
                        x_49 = t;
                        if(((w_49 != NULL) && (w_49 != x_49)))
                          _fail(x_49);
                        else
                          w_49 = x_49;
                      }
                      t = not_null(w_49);
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
ATerm Con_3 (ATerm t, ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  z_50 = t;
  y_50 :
  if(match_cons(z_50, sym_Con_3))
    {
      a_51 = ATgetArgument(z_50, 0);
      b_51 = ATgetArgument(z_50, 1);
      c_51 = ATgetArgument(z_50, 2);
      {
        ATerm h_51 = NULL,j_51 = NULL;
        ATerm i_51 = NULL;
        t = SSLgetAnnotations(not_null(z_50));
        {
          i_51 = t;
          if(((h_51 != NULL) && (h_51 != i_51)))
            _fail(i_51);
          else
            h_51 = i_51;
        }
        {
          t = not_null(a_51);
          {
            ATerm l_51 = NULL;
            t = v_75(t);
            {
              j_51 = t;
              {
                t = not_null(b_51);
                {
                  ATerm n_51 = NULL;
                  t = w_75(t);
                  {
                    l_51 = t;
                    {
                      t = not_null(c_51);
                      {
                        ATerm r_51 = NULL;
                        t = x_75(t);
                        {
                          n_51 = t;
                          {
                            ATerm s_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(j_51), not_null(l_51), not_null(n_51)), not_null(h_51));
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
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  g_52 = t;
  e_52 :
  if(match_cons(g_52, sym_SRule_1))
    {
      h_52 = ATgetArgument(g_52, 0);
      f_52 :
      if(match_cons(h_52, sym_StratRule_3))
        {
          i_52 = ATgetArgument(h_52, 0);
          j_52 = ATgetArgument(h_52, 1);
          k_52 = ATgetArgument(h_52, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_52)), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_52))), not_null(i_52)));
        }
      else
        {
          if(match_cons(h_52, sym_Rule_3))
            {
              i_52 = ATgetArgument(h_52, 0);
              j_52 = ATgetArgument(h_52, 1);
              k_52 = ATgetArgument(h_52, 2);
              {
                t = not_null(i_52);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(j_52);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(j_52))), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_52))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_52))));
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
ATerm oncetd_1 (ATerm t, ATerm z_104 (ATerm))
{
  ATerm t_52 (ATerm t)
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_104(t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = _one(t, t_52);
      }
    return(t);
  }
  t = t_52(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  j_53 = t;
  h_53 :
  if(match_cons(j_53, sym_SRule_1))
    {
      n_53 = ATgetArgument(j_53, 0);
      i_53 :
      if(match_cons(n_53, sym_Rule_3))
        {
          o_53 = ATgetArgument(n_53, 0);
          p_53 = ATgetArgument(n_53, 1);
          q_53 = ATgetArgument(n_53, 2);
          {
            ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
            ATerm c_54 = NULL;
            ATerm i_54 = NULL;
            t = new_0(t);
            {
              c_54 = t;
              {
                if(((z_53 != NULL) && (z_53 != c_54)))
                  _fail(c_54);
                else
                  z_53 = c_54;
                {
                  t = not_null(o_53);
                  {
                    ATerm q_54 = NULL;
                    ATerm y_1 (ATerm t)
                    {
                      ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
                      d_54 = t;
                      x_52 :
                      if(match_cons(d_54, sym_Con_3))
                        {
                          e_54 = ATgetArgument(d_54, 0);
                          g_54 = ATgetArgument(d_54, 1);
                          h_54 = ATgetArgument(d_54, 2);
                          y_52 :
                          if(match_cons(e_54, sym_Var_1))
                            {
                              f_54 = ATgetArgument(e_54, 0);
                              {
                                if(((y_53 != NULL) && (y_53 != f_54)))
                                  _fail(f_54);
                                else
                                  y_53 = f_54;
                                {
                                  if(((w_53 != NULL) && (w_53 != g_54)))
                                    _fail(g_54);
                                  else
                                    w_53 = g_54;
                                  {
                                    if(((u_53 != NULL) && (u_53 != h_54)))
                                      _fail(h_54);
                                    else
                                      u_53 = h_54;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_53));
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
                      i_54 = t;
                      {
                        if(((a_54 != NULL) && (a_54 != i_54)))
                          _fail(i_54);
                        else
                          a_54 = i_54;
                        {
                          t = not_null(p_53);
                          {
                            ATerm z_1 (ATerm t)
                            {
                              ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL;
                              j_54 = t;
                              c_53 :
                              if(match_cons(j_54, sym_Con_3))
                                {
                                  k_54 = ATgetArgument(j_54, 0);
                                  m_54 = ATgetArgument(j_54, 1);
                                  n_54 = ATgetArgument(j_54, 2);
                                  d_53 :
                                  if(match_cons(k_54, sym_Var_1))
                                    {
                                      l_54 = ATgetArgument(k_54, 0);
                                      e_53 :
                                      if(match_cons(n_54, sym_Call_2))
                                        {
                                          o_54 = ATgetArgument(n_54, 0);
                                          p_54 = ATgetArgument(n_54, 1);
                                          f_53 :
                                          if(((ATermList) p_54 == ATempty))
                                            {
                                              {
                                                if(((y_53 != NULL) && (y_53 != l_54)))
                                                  _fail(l_54);
                                                else
                                                  y_53 = l_54;
                                                {
                                                  if(((x_53 != NULL) && (x_53 != m_54)))
                                                    _fail(m_54);
                                                  else
                                                    x_53 = m_54;
                                                  {
                                                    if(((v_53 != NULL) && (v_53 != o_54)))
                                                      _fail(o_54);
                                                    else
                                                      v_53 = o_54;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53));
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
                              q_54 = t;
                              if(((b_54 != NULL) && (b_54 != q_54)))
                                _fail(q_54);
                              else
                                b_54 = q_54;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_53)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_54), not_null(b_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_53), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(v_53), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_53), not_null(x_53), term_m_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_53)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53)))))));
          }
        }
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
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  c_55 :
  if(match_cons(d_55, sym_Scope_2))
    {
      e_55 = ATgetArgument(d_55, 0);
      f_55 = ATgetArgument(d_55, 1);
      {
        ATerm i_55 = NULL;
        ATerm m_55 = NULL;
        t = not_null(e_55);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm c_2 (ATerm t)
            {
              ATerm j_55 = NULL,k_55 = NULL;
              j_55 = t;
              a_55 :
              if(match_cons(j_55, sym_ListVar_1))
                {
                  k_55 = ATgetArgument(j_55, 0);
                  t = not_null(k_55);
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
            m_55 = t;
            if(((i_55 != NULL) && (i_55 != m_55)))
              _fail(m_55);
            else
              i_55 = m_55;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(i_55), not_null(f_55));
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
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  t_55 = t;
  s_55 :
  if(match_cons(t_55, sym_SDef_3))
    {
      u_55 = ATgetArgument(t_55, 0);
      v_55 = ATgetArgument(t_55, 1);
      w_55 = ATgetArgument(t_55, 2);
      {
        ATerm a_56 = NULL;
        ATerm b_56 = NULL;
        t = not_null(w_55);
        {
          t = tvars_0(t);
          {
            b_56 = t;
            if(((a_56 != NULL) && (a_56 != b_56)))
              _fail(b_56);
            else
              a_56 = b_56;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_55), not_null(v_55), (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_56), not_null(w_55)));
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
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
  h_56 = t;
  g_56 :
  if(match_cons(h_56, sym_RDef_3))
    {
      i_56 = ATgetArgument(h_56, 0);
      j_56 = ATgetArgument(h_56, 1);
      k_56 = ATgetArgument(h_56, 2);
      {
        ATerm o_56 = NULL;
        ATerm p_56 = NULL;
        t = not_null(k_56);
        {
          t = tvars_0(t);
          {
            p_56 = t;
            if(((o_56 != NULL) && (o_56 != p_56)))
              _fail(p_56);
            else
              o_56 = p_56;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_56), not_null(j_56), (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_56), (ATerm) ATmakeAppl(sym_SRule_1, not_null(k_56))));
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
  ATerm t_56 = NULL;
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_56)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  l_57 = t;
  i_57 :
  if(match_cons(l_57, sym_OpDecl_2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      j_57 :
      if(match_cons(n_57, sym_FunType_2))
        {
          o_57 = ATgetArgument(n_57, 0);
          k_57 = ATgetArgument(n_57, 1);
          {
            ATerm s_57 = NULL,t_57 = NULL,b_58 = NULL;
            ATerm t_14;
            t_14 = t;
            {
              ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
              t = not_null(o_57);
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm u_57 = NULL,w_57 = NULL;
                  t = new_0(t);
                  {
                    ATerm w_14;
                    w_14 = t;
                    {
                      ATerm v_57 = NULL;
                      v_57 = t;
                      if(((u_57 != NULL) && (u_57 != v_57)))
                        _fail(v_57);
                      else
                        u_57 = v_57;
                    }
                    t = w_14;
                    {
                      ATerm x_57 = NULL;
                      x_57 = t;
                      if(((w_57 != NULL) && (w_57 != x_57)))
                        _fail(x_57);
                      else
                        w_57 = x_57;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_57), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15)), not_null(w_57));
                    }
                  }
                  return(t);
                }
                t = map_1(t, g_2);
                {
                  t = unzip_0(t);
                  {
                    y_57 = t;
                    b_57 :
                    if(match_cons(y_57, sym__2))
                      {
                        z_57 = ATgetArgument(y_57, 0);
                        a_58 = ATgetArgument(y_57, 1);
                        {
                          if(((s_57 != NULL) && (s_57 != z_57)))
                            _fail(z_57);
                          else
                            s_57 = z_57;
                          if(((t_57 != NULL) && (t_57 != a_58)))
                            _fail(a_58);
                          else
                            t_57 = a_58;
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
              ATerm c_58 = NULL;
              t = not_null(t_57);
              {
                t = map_1(t, MkCall_0);
                {
                  c_58 = t;
                  if(((b_58 != NULL) && (b_58 != c_58)))
                    _fail(c_58);
                  else
                    b_58 = c_58;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_57), not_null(s_57), (ATerm) ATmakeAppl(sym_Cong_2, not_null(m_57), not_null(b_58)));
            }
          }
        }
      else
        {
          if(match_cons(n_57, sym_ConstType_1))
            {
              o_57 = ATgetArgument(n_57, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_57), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(m_57), (ATerm) ATempty));
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
  ATerm z_58 = NULL,a_59 = NULL;
  z_58 = t;
  y_58 :
  if(match_cons(z_58, sym_Constructors_1))
    {
      a_59 = ATgetArgument(z_58, 0);
      {
        t = not_null(a_59);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(z_58, sym_Sorts_1))
        {
          a_59 = ATgetArgument(z_58, 0);
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
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  d_60 = t;
  p_59 :
  if(match_cons(d_60, sym_Specification_1))
    {
      e_60 = ATgetArgument(d_60, 0);
      q_59 :
      if(((ATgetType(e_60) == AT_LIST) && ((ATermList) e_60 != ATempty)))
        {
          f_60 = ATgetFirst((ATermList) e_60);
          h_60 = (ATerm) ATgetNext((ATermList) e_60);
          r_59 :
          if(match_cons(f_60, sym_Signature_1))
            {
              g_60 = ATgetArgument(f_60, 0);
              w_59 :
              if(((ATgetType(h_60) == AT_LIST) && ((ATermList) h_60 != ATempty)))
                {
                  i_60 = ATgetFirst((ATermList) h_60);
                  k_60 = (ATerm) ATgetNext((ATermList) h_60);
                  x_59 :
                  if(match_cons(i_60, sym_Strategies_1))
                    {
                      j_60 = ATgetArgument(i_60, 0);
                      c_60 :
                      if(((ATermList) k_60 == ATempty))
                        {
                          {
                            ATerm n_60 = NULL;
                            ATerm o_60 = NULL,q_60 = NULL,s_60 = NULL;
                            ATerm j_15;
                            j_15 = t;
                            {
                              ATerm p_60 = NULL;
                              t = not_null(g_60);
                              {
                                t = congdefs_0(t);
                                {
                                  p_60 = t;
                                  if(((o_60 != NULL) && (o_60 != p_60)))
                                    _fail(p_60);
                                  else
                                    o_60 = p_60;
                                }
                              }
                            }
                            t = j_15;
                            {
                              ATerm r_60 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(j_60)), (ATerm) ATmakeAppl(sym_RDef_3, term_k_15, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_m_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_l_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15))), (ATerm) ATmakeAppl(sym_Rule_3, term_s_15, term_c_16, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_h_17), term_e_17)))));
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
                                  r_60 = t;
                                  if(((q_60 != NULL) && (q_60 != r_60)))
                                    _fail(r_60);
                                  else
                                    q_60 = r_60;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_60), not_null(q_60));
                                {
                                  t = conc_0(t);
                                  {
                                    s_60 = t;
                                    if(((n_60 != NULL) && (n_60 != s_60)))
                                      _fail(s_60);
                                    else
                                      n_60 = s_60;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(n_60))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(g_60))));
                          }
                        }
                      else
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
  ATerm a_61 = NULL;
  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL;
  t = term_k_17;
  {
    ATerm i_2 (ATerm t)
    {
      t = term_l_17;
      return(t);
    }
    t = rewrite_1(t, i_2);
    {
      b_61 = t;
      y_60 :
      if(match_cons(b_61, sym_Defined_2))
        {
          c_61 = ATgetArgument(b_61, 0);
          d_61 = ATgetArgument(b_61, 1);
          z_60 :
          if(match_string(c_61, "g_0"))
            {
              if(((a_61 != NULL) && (a_61 != d_61)))
                _fail(d_61);
              else
                a_61 = d_61;
            }
          else
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
  t = not_null(a_61);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm k_61 = NULL;
  k_61 = t;
  t = SSL_int_to_string(not_null(k_61));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  b_62 = t;
  a_62 :
  if(match_cons(b_62, sym_Op_2))
    {
      c_62 = ATgetArgument(b_62, 0);
      d_62 = ATgetArgument(b_62, 1);
      {
        ATerm k_62 = NULL,l_62 = NULL;
        ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL;
        t = term_k_17;
        {
          ATerm j_2 (ATerm t)
          {
            t = term_m_17;
            return(t);
          }
          t = rewrite_1(t, j_2);
          {
            m_62 = t;
            y_61 :
            if(match_cons(m_62, sym_Defined_3))
              {
                n_62 = ATgetArgument(m_62, 0);
                o_62 = ATgetArgument(m_62, 1);
                p_62 = ATgetArgument(m_62, 2);
                z_61 :
                if(match_string(n_62, "h_0"))
                  {
                    ATerm q_62 = NULL;
                    if(((l_62 != NULL) && (l_62 != o_62)))
                      _fail(o_62);
                    else
                      l_62 = o_62;
                    {
                      if(((k_62 != NULL) && (k_62 != p_62)))
                        _fail(p_62);
                      else
                        k_62 = p_62;
                      {
                        ATerm r_62 = NULL;
                        t = not_null(d_62);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              r_62 = t;
                              if(((q_62 != NULL) && (q_62 != r_62)))
                                _fail(r_62);
                              else
                                q_62 = r_62;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_17), not_null(q_62)), term_y_17), not_null(c_62)), term_r_17), term_q_17), not_null(l_62)), term_p_17), not_null(k_62)), term_o_17));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(c_62), not_null(d_62));
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
  ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
  x_62 = t;
  w_62 :
  if(match_cons(x_62, sym__2))
    {
      y_62 = ATgetArgument(x_62, 0);
      z_62 = ATgetArgument(x_62, 1);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(y_62), not_null(z_62));
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = SSL_subtr(not_null(y_62), not_null(z_62));
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
    ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
    l_63 = t;
    e_63 :
    if(match_cons(l_63, sym__2))
      {
        m_63 = ATgetArgument(l_63, 0);
        n_63 = ATgetArgument(l_63, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(m_63), not_null(n_63), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL;
    q_63 = t;
    g_63 :
    if(match_cons(q_63, sym__3))
      {
        r_63 = ATgetArgument(q_63, 0);
        s_63 = ATgetArgument(q_63, 1);
        t_63 = ATgetArgument(q_63, 2);
        h_63 :
        if(match_int(r_63, 0))
          {
            t = not_null(t_63);
          }
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
    ATerm w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
    w_63 = t;
    k_63 :
    if(match_cons(w_63, sym__3))
      {
        x_63 = ATgetArgument(w_63, 0);
        y_63 = ATgetArgument(w_63, 1);
        z_63 = ATgetArgument(w_63, 2);
        {
          ATerm d_64 = NULL;
          ATerm c_18;
          c_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_63), term_d_18);
            t = geq_0(t);
          }
          t = c_18;
          {
            ATerm i_64 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_63), term_d_18);
            {
              t = subt_0(t);
              {
                i_64 = t;
                if(((d_64 != NULL) && (d_64 != i_64)))
                  _fail(i_64);
                else
                  d_64 = i_64;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_64), not_null(y_63), (ATerm) ATinsert(CheckATermList(not_null(z_63)), not_null(y_63)));
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
  ATerm z_64 = NULL,a_65 = NULL,f_65 = NULL;
  z_64 = t;
  x_64 :
  if(match_cons(z_64, sym_Op_2))
    {
      a_65 = ATgetArgument(z_64, 0);
      f_65 = ATgetArgument(z_64, 1);
      y_64 :
      if(match_string(a_65, ""))
        {
          ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
          ATerm e_18;
          e_18 = t;
          {
            ATerm r_65 = NULL;
            t = not_null(f_65);
            {
              ATerm s_65 = NULL;
              t = length_0(t);
              {
                r_65 = t;
                {
                  if(((o_65 != NULL) && (o_65 != r_65)))
                    _fail(r_65);
                  else
                    o_65 = r_65;
                  {
                    ATerm t_65 = NULL,v_65 = NULL;
                    t = term_a_9;
                    {
                      s_65 = t;
                      {
                        if(((n_65 != NULL) && (n_65 != s_65)))
                          _fail(s_65);
                        else
                          n_65 = s_65;
                        {
                          ATerm f_18;
                          f_18 = t;
                          {
                            ATerm u_65 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(o_65), term_h_18);
                            {
                              t = copy_0(t);
                              {
                                u_65 = t;
                                if(((t_65 != NULL) && (t_65 != u_65)))
                                  _fail(u_65);
                                else
                                  t_65 = u_65;
                              }
                            }
                          }
                          t = f_18;
                          {
                            ATerm w_65 = NULL,y_65 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, not_null(t_65), term_h_18));
                            {
                              v_65 = t;
                              {
                                if(((p_65 != NULL) && (p_65 != v_65)))
                                  _fail(v_65);
                                else
                                  p_65 = v_65;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm x_65 = NULL;
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
                                      x_65 = t;
                                      if(((w_65 != NULL) && (w_65 != x_65)))
                                        _fail(x_65);
                                      else
                                        w_65 = x_65;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(w_65)), not_null(p_65));
                                      {
                                        y_65 = t;
                                        {
                                          if(((q_65 != NULL) && (q_65 != y_65)))
                                            _fail(y_65);
                                          else
                                            q_65 = y_65;
                                          {
                                            ATerm o_18;
                                            o_18 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_k_17, (ATerm) ATmakeAppl(sym_Defined_2, term_s_18, not_null(q_65)));
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
  ATerm i_66 = NULL,h_67 = NULL,i_67 = NULL;
  i_66 = t;
  h_66 :
  if(((ATgetType(i_66) == AT_LIST) && ((ATermList) i_66 != ATempty)))
    {
      h_67 = ATgetFirst((ATermList) i_66);
      i_67 = (ATerm) ATgetNext((ATermList) i_66);
      t = not_null(h_67);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
  e_69 = t;
  d_69 :
  if(match_cons(e_69, sym__2))
    {
      f_69 = ATgetArgument(e_69, 0);
      g_69 = ATgetArgument(e_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_69), not_null(g_69));
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
ATerm rewrite_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm m_69 = NULL;
  ATerm o_69 = NULL;
  m_69 = t;
  {
    ATerm p_69 = NULL;
    t = term_u_18;
    {
      t = j_90(t);
      {
        p_69 = t;
        if(((o_69 != NULL) && (o_69 != p_69)))
          _fail(p_69);
        else
          o_69 = p_69;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_69), not_null(m_69));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  f_70 = t;
  e_70 :
  if(match_cons(f_70, sym_Op_2))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_70 = NULL;
            ATerm o_70 = NULL;
            t = not_null(h_70);
            {
              m_70 = t;
              {
                t = length_0(t);
                {
                  o_70 = t;
                  {
                    ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(g_70), not_null(o_70));
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = term_z_18;
                        return(t);
                      }
                      t = rewrite_1(t, o_2);
                      {
                        q_70 = t;
                        x_69 :
                        if(match_cons(q_70, sym_Defined_2))
                          {
                            r_70 = ATgetArgument(q_70, 0);
                            s_70 = ATgetArgument(q_70, 1);
                            y_69 :
                            if(match_string(r_70, "b_0"))
                              {
                                if(((g_70 != NULL) && (g_70 != s_70)))
                                  _fail(s_70);
                                else
                                  g_70 = s_70;
                              }
                            else
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_70), not_null(m_70));
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
              ATerm v_70 = NULL;
              ATerm x_70 = NULL;
              t = not_null(h_70);
              {
                v_70 = t;
                {
                  t = length_0(t);
                  {
                    x_70 = t;
                    {
                      ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(g_70), not_null(x_70));
                      {
                        ATerm p_2 (ATerm t)
                        {
                          t = term_z_18;
                          return(t);
                        }
                        t = rewrite_1(t, p_2);
                        {
                          z_70 = t;
                          c_70 :
                          if(match_cons(z_70, sym_Defined_2))
                            {
                              a_71 = ATgetArgument(z_70, 0);
                              b_71 = ATgetArgument(z_70, 1);
                              d_70 :
                              if(match_string(a_71, "a_0"))
                                {
                                  if(((g_70 != NULL) && (g_70 != b_71)))
                                    _fail(b_71);
                                  else
                                    g_70 = b_71;
                                }
                              else
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_70), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm h_106 (ATerm))
{
  ATerm k_71 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_106(t);
        {
          ATerm q_2 (ATerm t)
          {
            t = try_1(t, k_71);
            return(t);
          }
          t = _all(t, q_2);
        }
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = _some(t, k_71);
      }
    return(t);
  }
  t = k_71(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
  o_71 = t;
  n_71 :
  if(match_cons(o_71, sym__2))
    {
      p_71 = ATgetArgument(o_71, 0);
      q_71 = ATgetArgument(o_71, 1);
      {
        ATerm c_19;
        c_19 = t;
        {
          ATerm t_71 = NULL;
          ATerm u_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_71), not_null(q_71));
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
              u_71 = t;
              if(((t_71 != NULL) && (t_71 != u_71)))
                _fail(u_71);
              else
                t_71 = u_71;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_71), not_null(q_71), not_null(t_71));
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
ATerm end_scope_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  ATerm f_19;
  f_19 = t;
  {
    ATerm e_72 = NULL;
    ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL;
    t = e_90(t);
    {
      e_72 = t;
      {
        if(((c_72 != NULL) && (c_72 != e_72)))
          _fail(e_72);
        else
          c_72 = e_72;
        {
          ATerm g_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), term_m_19);
              t = table_get_0(t);
              LocalPopChoice(l_19);
            }
          else
            {
              t = g_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            f_72 = t;
            a_72 :
            if(((ATgetType(f_72) == AT_LIST) && ((ATermList) f_72 != ATempty)))
              {
                g_72 = ATgetFirst((ATermList) f_72);
                h_72 = (ATerm) ATgetNext((ATermList) f_72);
                {
                  if(((d_72 != NULL) && (d_72 != g_72)))
                    _fail(g_72);
                  else
                    d_72 = g_72;
                  {
                    if(((b_72 != NULL) && (b_72 != h_72)))
                      _fail(h_72);
                    else
                      b_72 = h_72;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(c_72), term_m_19, not_null(b_72));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_72);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm i_72 = NULL;
                              i_72 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_72), not_null(i_72));
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
ATerm restore_always_2 (ATerm t, ATerm a_108 (ATerm), ATerm b_108 (ATerm))
{
  ATerm n_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_108(t);
      t = b_108(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = n_19;
      {
        t = b_108(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm p_72 = NULL;
  ATerm t_19;
  t_19 = t;
  {
    ATerm q_72 = NULL;
    ATerm r_72 = NULL;
    t = d_90(t);
    {
      q_72 = t;
      {
        if(((p_72 != NULL) && (p_72 != q_72)))
          _fail(q_72);
        else
          p_72 = q_72;
        {
          ATerm s_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_72), term_m_19);
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
              s_72 = t;
              if(((r_72 != NULL) && (r_72 != s_72)))
                _fail(s_72);
              else
                r_72 = s_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_72), term_m_19, (ATerm) ATinsert(CheckATermList(not_null(r_72)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_19;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm f_90 (ATerm), ATerm g_90 (ATerm))
{
  t = begin_scope_1(t, f_90);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, f_90);
      return(t);
    }
    t = restore_always_2(t, g_90, s_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm x_72 = NULL,y_72 = NULL;
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
      ATerm z_72 = NULL;
      ATerm a_73 = NULL;
      t = p_80(t);
      {
        z_72 = t;
        {
          if(((x_72 != NULL) && (x_72 != z_72)))
            _fail(z_72);
          else
            x_72 = z_72;
          {
            t = q_80(t);
            {
              a_73 = t;
              if(((y_72 != NULL) && (y_72 != a_73)))
                _fail(a_73);
              else
                y_72 = a_73;
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
        t = (ATerm) ATmakeAppl(sym__2, term_k_17, (ATerm) ATmakeAppl(sym_Defined_3, term_a_20, not_null(x_72), not_null(y_72)));
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
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  g_73 = t;
  f_73 :
  if(match_cons(g_73, sym_SDef_3))
    {
      h_73 = ATgetArgument(g_73, 0);
      i_73 = ATgetArgument(g_73, 1);
      j_73 = ATgetArgument(g_73, 2);
      {
        t = not_null(j_73);
        {
          ATerm x_2 (ATerm t)
          {
            t = not_null(h_73);
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
      if(match_cons(g_73, sym_RDef_3))
        {
          h_73 = ATgetArgument(g_73, 0);
          i_73 = ATgetArgument(g_73, 1);
          j_73 = ATgetArgument(g_73, 2);
          {
            t = not_null(j_73);
            {
              ATerm z_2 (ATerm t)
              {
                t = not_null(h_73);
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
ATerm assert_1 (ATerm t, ATerm h_90 (ATerm))
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
  x_73 = t;
  w_73 :
  if(match_cons(x_73, sym__2))
    {
      y_73 = ATgetArgument(x_73, 0);
      z_73 = ATgetArgument(x_73, 1);
      {
        ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
        ATerm k_20;
        k_20 = t;
        {
          ATerm f_74 = NULL;
          ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
          t = h_90(t);
          {
            f_74 = t;
            {
              if(((c_74 != NULL) && (c_74 != f_74)))
                _fail(f_74);
              else
                c_74 = f_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_74), not_null(y_73), not_null(z_73));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_20 = t;
                    int v_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_74), term_m_19);
                        t = table_get_0(t);
                        LocalPopChoice(v_20);
                      }
                    else
                      {
                        t = o_20;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_74 = t;
                      v_73 :
                      if(((ATgetType(g_74) == AT_LIST) && ((ATermList) g_74 != ATempty)))
                        {
                          h_74 = ATgetFirst((ATermList) g_74);
                          i_74 = (ATerm) ATgetNext((ATermList) g_74);
                          {
                            if(((d_74 != NULL) && (d_74 != h_74)))
                              _fail(h_74);
                            else
                              d_74 = h_74;
                            {
                              if(((e_74 != NULL) && (e_74 != i_74)))
                                _fail(i_74);
                              else
                                e_74 = i_74;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_74), term_m_19, (ATerm) ATinsert(CheckATermList(not_null(e_74)), (ATerm) ATinsert(CheckATermList(not_null(d_74)), not_null(y_73))));
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
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL;
  t_74 = t;
  q_74 :
  if(match_cons(t_74, sym_OpDecl_2))
    {
      u_74 = ATgetArgument(t_74, 0);
      v_74 = ATgetArgument(t_74, 1);
      r_74 :
      if(match_cons(v_74, sym_FunType_2))
        {
          w_74 = ATgetArgument(v_74, 0);
          s_74 = ATgetArgument(v_74, 1);
          {
            ATerm a_75 = NULL;
            ATerm f_21;
            f_21 = t;
            {
              ATerm b_75 = NULL;
              t = not_null(w_74);
              {
                t = length_0(t);
                {
                  b_75 = t;
                  if(((a_75 != NULL) && (a_75 != b_75)))
                    _fail(b_75);
                  else
                    a_75 = b_75;
                }
              }
            }
            t = f_21;
            {
              ATerm g_21;
              g_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(u_74), not_null(a_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_h_21, not_null(u_74)));
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
          if(match_cons(v_74, sym_ConstType_1))
            {
              w_74 = ATgetArgument(v_74, 0);
              {
                ATerm e_75 = NULL;
                ATerm i_21;
                i_21 = t;
                {
                  ATerm f_75 = NULL;
                  t = term_e_21;
                  {
                    f_75 = t;
                    if(((e_75 != NULL) && (e_75 != f_75)))
                      _fail(f_75);
                    else
                      e_75 = f_75;
                  }
                }
                t = i_21;
                {
                  ATerm j_21;
                  j_21 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(u_74), not_null(e_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_21, not_null(u_74)));
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
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,i_77 = NULL,k_77 = NULL,m_77 = NULL,n_77 = NULL;
  s_76 = t;
  g_76 :
  if(match_cons(s_76, sym_Specification_1))
    {
      t_76 = ATgetArgument(s_76, 0);
      h_76 :
      if(((ATgetType(t_76) == AT_LIST) && ((ATermList) t_76 != ATempty)))
        {
          u_76 = ATgetFirst((ATermList) t_76);
          i_77 = (ATerm) ATgetNext((ATermList) t_76);
          i_76 :
          if(match_cons(u_76, sym_Signature_1))
            {
              v_76 = ATgetArgument(u_76, 0);
              j_76 :
              if(((ATgetType(v_76) == AT_LIST) && ((ATermList) v_76 != ATempty)))
                {
                  a_77 = ATgetFirst((ATermList) v_76);
                  c_77 = (ATerm) ATgetNext((ATermList) v_76);
                  k_76 :
                  if(match_cons(a_77, sym_Constructors_1))
                    {
                      b_77 = ATgetArgument(a_77, 0);
                      l_76 :
                      if(((ATermList) c_77 == ATempty))
                        {
                          m_76 :
                          if(((ATgetType(i_77) == AT_LIST) && ((ATermList) i_77 != ATempty)))
                            {
                              k_77 = ATgetFirst((ATermList) i_77);
                              n_77 = (ATerm) ATgetNext((ATermList) i_77);
                              n_76 :
                              if(match_cons(k_77, sym_Strategies_1))
                                {
                                  m_77 = ATgetArgument(k_77, 0);
                                  r_76 :
                                  if(((ATermList) n_77 == ATempty))
                                    {
                                      {
                                        ATerm q_77 = NULL,r_77 = NULL,v_77 = NULL;
                                        ATerm l_21;
                                        l_21 = t;
                                        {
                                          ATerm s_77 = NULL;
                                          ATerm t_77 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_77)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_h_18), term_h_18), term_h_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_a_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_18), term_h_18))), term_q_21);
                                          {
                                            s_77 = t;
                                            {
                                              if(((q_77 != NULL) && (q_77 != s_77)))
                                                _fail(s_77);
                                              else
                                                q_77 = s_77;
                                              {
                                                t = not_null(q_77);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(m_77);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        t_77 = t;
                                                        c_76 :
                                                        if(((ATermList) t_77 == ATempty))
                                                          {
                                                            {
                                                              ATerm u_77 = NULL;
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
                                                                u_77 = t;
                                                                if(((r_77 != NULL) && (r_77 != u_77)))
                                                                  _fail(u_77);
                                                                else
                                                                  r_77 = u_77;
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
                                          ATerm w_77 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_77), not_null(q_77));
                                          {
                                            t = conc_0(t);
                                            {
                                              w_77 = t;
                                              if(((v_77 != NULL) && (v_77 != w_77)))
                                                _fail(w_77);
                                              else
                                                v_77 = w_77;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(m_77))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(v_77))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm x_21;
    x_21 = t;
    {
      ATerm y_21 = t;
      if((PushChoice() == 0))
        {
          ATerm f_78 = NULL;
          t = y_81(t);
          {
            f_78 = t;
            e_78 :
            if(((ATermList) f_78 == ATempty))
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
          t = ExpOverlay_1(t, y_81);
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
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  p_78 = t;
  n_78 :
  if(match_cons(p_78, sym_BuildDefault_1))
    {
      q_78 = ATgetArgument(p_78, 0);
      t = term_m_11;
    }
  else
    {
      if(match_cons(p_78, sym_Real_1))
        {
          q_78 = ATgetArgument(p_78, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(q_78)));
        }
      else
        {
          if(match_cons(p_78, sym_Int_1))
            {
              q_78 = ATgetArgument(p_78, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(q_78)));
            }
          else
            {
              if(match_cons(p_78, sym_Str_1))
                {
                  q_78 = ATgetArgument(p_78, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_78)));
                }
              else
                {
                  if(match_cons(p_78, sym_Anno_2))
                    {
                      q_78 = ATgetArgument(p_78, 0);
                      o_78 = ATgetArgument(p_78, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_f_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_78)), not_null(q_78)));
                    }
                  else
                    {
                      if(match_cons(p_78, sym_Op_2))
                        {
                          q_78 = ATgetArgument(p_78, 0);
                          o_78 = ATgetArgument(p_78, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_78)), not_null(o_78));
                        }
                      else
                        {
                          if(match_cons(p_78, sym_Var_1))
                            {
                              q_78 = ATgetArgument(p_78, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(q_78)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
  f_80 = t;
  e_80 :
  if(match_cons(f_80, sym_Op_2))
    {
      g_80 = ATgetArgument(f_80, 0);
      h_80 = ATgetArgument(f_80, 1);
      {
        ATerm l_80 = NULL,u_80 = NULL;
        ATerm m_80 = NULL;
        t = SSLgetAnnotations(not_null(f_80));
        {
          m_80 = t;
          if(((l_80 != NULL) && (l_80 != m_80)))
            _fail(m_80);
          else
            l_80 = m_80;
        }
        {
          t = not_null(g_80);
          {
            ATerm e_81 = NULL;
            t = z_77(t);
            {
              u_80 = t;
              {
                t = not_null(h_80);
                {
                  ATerm g_81 = NULL;
                  t = a_78(t);
                  {
                    e_81 = t;
                    {
                      ATerm h_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(u_80), not_null(e_81)), not_null(l_80));
                      {
                        h_81 = t;
                        if(((g_81 != NULL) && (g_81 != h_81)))
                          _fail(h_81);
                        else
                          g_81 = h_81;
                      }
                      t = not_null(g_81);
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
  ATerm t_81 = NULL,u_81 = NULL,z_81 = NULL,a_82 = NULL;
  t_81 = t;
  s_81 :
  if(match_cons(t_81, sym_Overlay_3))
    {
      u_81 = ATgetArgument(t_81, 0);
      z_81 = ATgetArgument(t_81, 1);
      a_82 = ATgetArgument(t_81, 2);
      {
        ATerm i_82 = NULL,m_82 = NULL;
        ATerm g_22;
        g_22 = t;
        {
          ATerm l_82 = NULL;
          t = not_null(z_81);
          {
            ATerm k_3 (ATerm t)
            {
              ATerm j_82 = NULL;
              ATerm k_82 = NULL;
              k_82 = t;
              if(((j_82 != NULL) && (j_82 != k_82)))
                _fail(k_82);
              else
                j_82 = k_82;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(j_82), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15));
              return(t);
            }
            t = map_1(t, k_3);
            {
              l_82 = t;
              if(((i_82 != NULL) && (i_82 != l_82)))
                _fail(l_82);
              else
                i_82 = l_82;
            }
          }
        }
        t = g_22;
        {
          ATerm n_82 = NULL;
          t = not_null(a_82);
          {
            t = trm_to_cong_0(t);
            {
              n_82 = t;
              if(((m_82 != NULL) && (m_82 != n_82)))
                _fail(n_82);
              else
                m_82 = n_82;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_81), not_null(i_82), not_null(m_82));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm v_80 (ATerm))
{
  t = Scope_2(t, v_80, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm b_83 = NULL,c_83 = NULL;
  b_83 = t;
  a_83 :
  if(match_cons(b_83, sym_Var_1))
    {
      c_83 = ATgetArgument(b_83, 0);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_83 = NULL,i_83 = NULL;
            ATerm h_83 = NULL;
            t = SSLgetAnnotations(not_null(b_83));
            {
              h_83 = t;
              if(((g_83 != NULL) && (g_83 != h_83)))
                _fail(h_83);
              else
                g_83 = h_83;
            }
            {
              t = not_null(c_83);
              {
                ATerm k_83 = NULL;
                t = s_0(t);
                {
                  i_83 = t;
                  {
                    ATerm n_83 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_83)), not_null(g_83));
                    {
                      n_83 = t;
                      if(((k_83 != NULL) && (k_83 != n_83)))
                        _fail(n_83);
                      else
                        k_83 = n_83;
                    }
                    t = not_null(k_83);
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
              ATerm q_83 = NULL,q_84 = NULL;
              ATerm p_84 = NULL;
              t = SSLgetAnnotations(not_null(b_83));
              {
                p_84 = t;
                if(((q_83 != NULL) && (q_83 != p_84)))
                  _fail(p_84);
                else
                  q_83 = p_84;
              }
              {
                t = not_null(c_83);
                {
                  ATerm s_84 = NULL;
                  t = s_0(t);
                  {
                    q_84 = t;
                    {
                      ATerm t_84 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_84)), not_null(q_83));
                      {
                        t_84 = t;
                        if(((s_84 != NULL) && (s_84 != t_84)))
                          _fail(t_84);
                        else
                          s_84 = t_84;
                      }
                      t = not_null(s_84);
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
ATerm DistBinding_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL;
  g_85 = t;
  f_85 :
  if(match_cons(g_85, sym__3))
    {
      h_85 = ATgetArgument(g_85, 0);
      i_85 = ATgetArgument(g_85, 1);
      j_85 = ATgetArgument(g_85, 2);
      {
        t = not_null(h_85);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm n_85 = NULL;
            n_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_85), not_null(j_85));
              t = l_83(t);
            }
            return(t);
          }
          ATerm m_3 (ATerm t)
          {
            ATerm p_85 = NULL;
            p_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_85), not_null(i_85));
              t = l_83(t);
            }
            return(t);
          }
          t = m_83(t, l_3, m_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm r_83 (ATerm), ATerm s_83 (ATerm, ATerm (ATerm)))
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  h_86 = t;
  g_86 :
  if(match_cons(h_86, sym__2))
    {
      i_86 = ATgetArgument(h_86, 0);
      j_86 = ATgetArgument(h_86, 1);
      {
        ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,x_86 = NULL;
        ATerm r_22;
        r_22 = t;
        {
          ATerm p_86 = NULL;
          t = not_null(i_86);
          {
            ATerm q_86 = NULL;
            t = r_83(t);
            {
              p_86 = t;
              {
                if(((m_86 != NULL) && (m_86 != p_86)))
                  _fail(p_86);
                else
                  m_86 = p_86;
                {
                  ATerm r_86 = NULL,w_86 = NULL;
                  t = map_1(t, new_0);
                  {
                    q_86 = t;
                    {
                      if(((n_86 != NULL) && (n_86 != q_86)))
                        _fail(q_86);
                      else
                        n_86 = q_86;
                      {
                        ATerm t_86 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_86), not_null(n_86));
                        {
                          t = zip_1(t, _id);
                          {
                            t_86 = t;
                            if(((r_86 != NULL) && (r_86 != t_86)))
                              _fail(t_86);
                            else
                              r_86 = t_86;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_86), not_null(j_86));
                          {
                            t = conc_0(t);
                            {
                              w_86 = t;
                              if(((o_86 != NULL) && (o_86 != w_86)))
                                _fail(w_86);
                              else
                                o_86 = w_86;
                            }
                          }
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
          ATerm y_86 = NULL;
          t = not_null(i_86);
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(n_86);
              return(t);
            }
            t = s_83(t, n_3);
            {
              y_86 = t;
              if(((x_86 != NULL) && (x_86 != y_86)))
                _fail(y_86);
              else
                x_86 = y_86;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(x_86), not_null(j_86), not_null(o_86));
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
  ATerm l_87 = NULL;
  ATerm n_87 = NULL,o_87 = NULL;
  l_87 = t;
  {
    ATerm p_87 = NULL;
    ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL;
    t = not_null(l_87);
    {
      p_87 = t;
      {
        t = SSL_explode_term(not_null(p_87));
        {
          r_87 = t;
          i_87 :
          if(match_cons(r_87, sym__2))
            {
              s_87 = ATgetArgument(r_87, 0);
              t_87 = ATgetArgument(r_87, 1);
              j_87 :
              if(match_string(s_87, ""))
                {
                  k_87 :
                  if(((ATgetType(t_87) == AT_LIST) && ((ATermList) t_87 != ATempty)))
                    {
                      u_87 = ATgetFirst((ATermList) t_87);
                      v_87 = (ATerm) ATgetNext((ATermList) t_87);
                      {
                        if(((o_87 != NULL) && (o_87 != u_87)))
                          _fail(u_87);
                        else
                          o_87 = u_87;
                        if(((n_87 != NULL) && (n_87 != v_87)))
                          _fail(v_87);
                        else
                          n_87 = v_87;
                      }
                    }
                  else
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
    t = not_null(o_87);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm f_83 (ATerm, ATerm (ATerm)))
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
  l_88 = t;
  g_88 :
  if(match_cons(l_88, sym__2))
    {
      m_88 = ATgetArgument(l_88, 0);
      n_88 = ATgetArgument(l_88, 1);
      {
        t = not_null(m_88);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(n_88);
              return(t);
            }
            t = split_2(t, _id, p_3);
            t = lookup_0(t);
            return(t);
          }
          t = f_83(t, o_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm p_100 (ATerm))
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
  w_88 = t;
  u_88 :
  if(match_cons(w_88, sym__2))
    {
      x_88 = ATgetArgument(w_88, 0);
      y_88 = ATgetArgument(w_88, 1);
      {
        t = not_null(x_88);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm b_89 = NULL;
            b_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_89), not_null(y_88));
              t = p_100(t);
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
ATerm env_alltd_1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm f_89 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_100(t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = all_dist_1(t, f_89);
      }
    return(t);
  }
  t = f_89(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm, ATerm (ATerm)), ATerm f_84 (ATerm), ATerm g_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm h_84 (ATerm, ATerm (ATerm)), ATerm i_84 (ATerm))
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
  t = subs_args_0(t);
  {
    i_89 = t;
    h_89 :
    if(match_cons(i_89, sym__2))
      {
        j_89 = ATgetArgument(i_89, 0);
        k_89 = ATgetArgument(i_89, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_89), (ATerm) ATempty);
          {
            ATerm p_89 (ATerm t)
            {
              ATerm r_3 (ATerm t)
              {
                ATerm u_22 = t;
                int y_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, e_84);
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
                              t = not_null(j_89);
                              return(t);
                            }
                            t = SubsVar_2(t, d_84, s_3);
                            t = i_84(t);
                          }
                          LocalPopChoice(d_23);
                        }
                      else
                        {
                          t = z_22;
                          {
                            t = RnBinding_2(t, f_84, h_84);
                            t = DistBinding_2(t, p_89, g_84);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, r_3);
              return(t);
            }
            t = p_89(t);
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
ATerm substitute_5 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm, ATerm (ATerm)), ATerm m_84 (ATerm), ATerm n_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_84 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, k_84, l_84, m_84, n_84, o_84, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm q_89 (ATerm t, ATerm r_89 (ATerm))
  {
    t = Scope_2(t, r_89, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, q_89);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
  z_89 = t;
  y_89 :
  if(match_cons(z_89, sym_Op_2))
    {
      a_90 = ATgetArgument(z_89, 0);
      b_90 = ATgetArgument(z_89, 1);
      {
        ATerm k_90 = NULL,l_90 = NULL;
        t = w_81(t);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm g_23;
            g_23 = t;
            {
              ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
              m_90 = t;
              x_89 :
              if(match_cons(m_90, sym_Overlay_3))
                {
                  n_90 = ATgetArgument(m_90, 0);
                  o_90 = ATgetArgument(m_90, 1);
                  p_90 = ATgetArgument(m_90, 2);
                  {
                    ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,u_90 = NULL;
                    if(((a_90 != NULL) && (a_90 != n_90)))
                      _fail(n_90);
                    else
                      a_90 = n_90;
                    {
                      if(((q_90 != NULL) && (q_90 != o_90)))
                        _fail(o_90);
                      else
                        q_90 = o_90;
                      {
                        if(((r_90 != NULL) && (r_90 != p_90)))
                          _fail(p_90);
                        else
                          r_90 = p_90;
                        {
                          ATerm h_23;
                          h_23 = t;
                          {
                            ATerm t_90 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_90), not_null(b_90));
                            {
                              t = zip_1(t, _id);
                              {
                                t_90 = t;
                                if(((s_90 != NULL) && (s_90 != t_90)))
                                  _fail(t_90);
                                else
                                  s_90 = t_90;
                              }
                            }
                          }
                          t = h_23;
                          {
                            ATerm v_90 = NULL;
                            t = not_null(s_90);
                            {
                              u_90 = t;
                              {
                                if(((k_90 != NULL) && (k_90 != u_90)))
                                  _fail(u_90);
                                else
                                  k_90 = u_90;
                                {
                                  t = not_null(r_90);
                                  {
                                    v_90 = t;
                                    {
                                      if(((l_90 != NULL) && (l_90 != v_90)))
                                        _fail(v_90);
                                      else
                                        l_90 = v_90;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_90), not_null(r_90));
                                    }
                                  }
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_90), not_null(l_90));
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
ATerm exp_overlays1_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm i_23;
    i_23 = t;
    {
      ATerm j_23 = t;
      if((PushChoice() == 0))
        {
          ATerm c_91 = NULL;
          t = x_81(t);
          {
            c_91 = t;
            b_91 :
            if(((ATermList) c_91 == ATempty))
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
          t = ExpOverlay_1(t, x_81);
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
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL,v_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL;
  q_91 = t;
  i_91 :
  if(match_cons(q_91, sym_Specification_1))
    {
      r_91 = ATgetArgument(q_91, 0);
      j_91 :
      if(((ATgetType(r_91) == AT_LIST) && ((ATermList) r_91 != ATempty)))
        {
          s_91 = ATgetFirst((ATermList) r_91);
          u_91 = (ATerm) ATgetNext((ATermList) r_91);
          k_91 :
          if(match_cons(s_91, sym_Signature_1))
            {
              t_91 = ATgetArgument(s_91, 0);
              l_91 :
              if(((ATgetType(u_91) == AT_LIST) && ((ATermList) u_91 != ATempty)))
                {
                  v_91 = ATgetFirst((ATermList) u_91);
                  z_91 = (ATerm) ATgetNext((ATermList) u_91);
                  m_91 :
                  if(match_cons(v_91, sym_Overlays_1))
                    {
                      y_91 = ATgetArgument(v_91, 0);
                      n_91 :
                      if(((ATgetType(z_91) == AT_LIST) && ((ATermList) z_91 != ATempty)))
                        {
                          a_92 = ATgetFirst((ATermList) z_91);
                          c_92 = (ATerm) ATgetNext((ATermList) z_91);
                          o_91 :
                          if(match_cons(a_92, sym_Strategies_1))
                            {
                              b_92 = ATgetArgument(a_92, 0);
                              p_91 :
                              if(((ATermList) c_92 == ATempty))
                                {
                                  {
                                    ATerm g_92 = NULL,i_92 = NULL;
                                    ATerm k_23;
                                    k_23 = t;
                                    {
                                      ATerm h_92 = NULL;
                                      t = not_null(y_91);
                                      {
                                        ATerm x_3 (ATerm t)
                                        {
                                          t = not_null(y_91);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, x_3);
                                        {
                                          h_92 = t;
                                          if(((g_92 != NULL) && (g_92 != h_92)))
                                            _fail(h_92);
                                          else
                                            g_92 = h_92;
                                        }
                                      }
                                    }
                                    t = k_23;
                                    {
                                      ATerm j_92 = NULL,l_92 = NULL,n_92 = NULL;
                                      ATerm l_23;
                                      l_23 = t;
                                      {
                                        ATerm k_92 = NULL;
                                        t = not_null(y_91);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            k_92 = t;
                                            if(((j_92 != NULL) && (j_92 != k_92)))
                                              _fail(k_92);
                                            else
                                              j_92 = k_92;
                                          }
                                        }
                                      }
                                      t = l_23;
                                      {
                                        ATerm m_92 = NULL;
                                        t = not_null(b_92);
                                        {
                                          ATerm y_3 (ATerm t)
                                          {
                                            t = not_null(g_92);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, y_3);
                                          {
                                            m_92 = t;
                                            if(((l_92 != NULL) && (l_92 != m_92)))
                                              _fail(m_92);
                                            else
                                              l_92 = m_92;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_92), not_null(l_92));
                                          {
                                            t = conc_0(t);
                                            {
                                              n_92 = t;
                                              if(((i_92 != NULL) && (i_92 != n_92)))
                                                _fail(n_92);
                                              else
                                                i_92 = n_92;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(i_92))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(t_91))));
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
    ATerm v_92 = NULL;
    ATerm w_92 = NULL;
    w_92 = t;
    if(((v_92 != NULL) && (v_92 != w_92)))
      _fail(w_92);
    else
      v_92 = w_92;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, not_null(v_92));
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
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  c_93 = t;
  b_93 :
  if(match_cons(c_93, sym__3))
    {
      d_93 = ATgetArgument(c_93, 0);
      e_93 = ATgetArgument(c_93, 1);
      f_93 = ATgetArgument(c_93, 2);
      {
        ATerm o_93 = NULL,q_93 = NULL;
        ATerm r_23;
        r_23 = t;
        {
          ATerm p_93 = NULL;
          t = not_null(d_93);
          {
            t = MsgU_0(t);
            {
              p_93 = t;
              if(((o_93 != NULL) && (o_93 != p_93)))
                _fail(p_93);
              else
                o_93 = p_93;
            }
          }
        }
        t = r_23;
        {
          ATerm r_93 = NULL;
          t = not_null(f_93);
          {
            t = MsgE_0(t);
            {
              r_93 = t;
              if(((q_93 != NULL) && (q_93 != r_93)))
                _fail(r_93);
              else
                q_93 = r_93;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_93)), not_null(o_93));
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
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL;
  e_94 = t;
  y_93 :
  if(((ATgetType(e_94) == AT_LIST) && ((ATermList) e_94 != ATempty)))
    {
      c_94 = ATgetFirst((ATermList) e_94);
      d_94 = (ATerm) ATgetNext((ATermList) e_94);
      z_93 :
      if(((ATgetType(d_94) == AT_LIST) && ((ATermList) d_94 != ATempty)))
        {
          a_94 = ATgetFirst((ATermList) d_94);
          b_94 = (ATerm) ATgetNext((ATermList) d_94);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_23), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_94)), not_null(a_94)), not_null(c_94))), term_s_23);
        }
      else
        {
          if(((ATermList) d_94 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_23), not_null(c_94)), term_z_23);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) e_94 == ATempty))
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
  ATerm v_94 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL;
  f_95 = t;
  t_94 :
  if(((ATgetType(f_95) == AT_LIST) && ((ATermList) f_95 != ATempty)))
    {
      d_95 = ATgetFirst((ATermList) f_95);
      e_95 = (ATerm) ATgetNext((ATermList) f_95);
      u_94 :
      if(((ATgetType(e_95) == AT_LIST) && ((ATermList) e_95 != ATempty)))
        {
          v_94 = ATgetFirst((ATermList) e_95);
          c_95 = (ATerm) ATgetNext((ATermList) e_95);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_95)), not_null(v_94)), not_null(d_95))), term_s_23);
        }
      else
        {
          if(((ATermList) e_95 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), not_null(d_95)), term_z_23);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) f_95 == ATempty))
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
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL;
  r_95 = t;
  q_95 :
  if(match_cons(r_95, sym__3))
    {
      s_95 = ATgetArgument(r_95, 0);
      t_95 = ATgetArgument(r_95, 1);
      u_95 = ATgetArgument(r_95, 2);
      {
        ATerm y_95 = NULL,a_96 = NULL;
        ATerm b_24;
        b_24 = t;
        {
          ATerm z_95 = NULL;
          t = not_null(s_95);
          {
            t = MsgU_0(t);
            {
              z_95 = t;
              if(((y_95 != NULL) && (y_95 != z_95)))
                _fail(z_95);
              else
                y_95 = z_95;
            }
          }
        }
        t = b_24;
        {
          ATerm b_96 = NULL;
          t = not_null(u_95);
          {
            t = MsgE_0(t);
            {
              b_96 = t;
              if(((a_96 != NULL) && (a_96 != b_96)))
                _fail(b_96);
              else
                a_96 = b_96;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_96)), not_null(y_95));
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
  ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL;
  m_96 = t;
  l_96 :
  if(match_cons(m_96, sym_Overlay_3))
    {
      n_96 = ATgetArgument(m_96, 0);
      o_96 = ATgetArgument(m_96, 1);
      p_96 = ATgetArgument(m_96, 2);
      {
        ATerm t_96 = NULL;
        ATerm u_96 = NULL;
        t = not_null(p_96);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              u_96 = t;
              if(((t_96 != NULL) && (t_96 != u_96)))
                _fail(u_96);
              else
                t_96 = u_96;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(t_96)), term_d_24), not_null(n_96)), term_c_24);
      }
    }
  else
    {
      if(match_cons(m_96, sym_SDef_3))
        {
          n_96 = ATgetArgument(m_96, 0);
          o_96 = ATgetArgument(m_96, 1);
          p_96 = ATgetArgument(m_96, 2);
          {
            ATerm y_96 = NULL;
            ATerm z_96 = NULL;
            t = not_null(p_96);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  z_96 = t;
                  if(((y_96 != NULL) && (y_96 != z_96)))
                    _fail(z_96);
                  else
                    y_96 = z_96;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(y_96)), term_d_24), not_null(n_96)), term_g_24);
          }
        }
      else
        {
          if(match_cons(m_96, sym_RDef_3))
            {
              n_96 = ATgetArgument(m_96, 0);
              o_96 = ATgetArgument(m_96, 1);
              p_96 = ATgetArgument(m_96, 2);
              {
                ATerm d_97 = NULL;
                ATerm f_97 = NULL;
                t = not_null(p_96);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      f_97 = t;
                      if(((d_97 != NULL) && (d_97 != f_97)))
                        _fail(f_97);
                      else
                        d_97 = f_97;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(d_97)), term_d_24), not_null(n_96)), term_p_24);
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
ATerm _3 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL;
  a_98 = t;
  z_97 :
  if(match_cons(a_98, sym__3))
    {
      b_98 = ATgetArgument(a_98, 0);
      c_98 = ATgetArgument(a_98, 1);
      d_98 = ATgetArgument(a_98, 2);
      {
        ATerm i_98 = NULL,k_98 = NULL;
        ATerm j_98 = NULL;
        t = SSLgetAnnotations(not_null(a_98));
        {
          j_98 = t;
          if(((i_98 != NULL) && (i_98 != j_98)))
            _fail(j_98);
          else
            i_98 = j_98;
        }
        {
          t = not_null(b_98);
          {
            ATerm m_98 = NULL;
            t = y_68(t);
            {
              k_98 = t;
              {
                t = not_null(c_98);
                {
                  ATerm o_98 = NULL;
                  t = z_68(t);
                  {
                    m_98 = t;
                    {
                      t = not_null(d_98);
                      {
                        ATerm q_98 = NULL;
                        t = a_69(t);
                        {
                          o_98 = t;
                          {
                            ATerm r_98 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__3, not_null(k_98), not_null(m_98), not_null(o_98)), not_null(i_98));
                            {
                              r_98 = t;
                              if(((q_98 != NULL) && (q_98 != r_98)))
                                _fail(r_98);
                              else
                                q_98 = r_98;
                            }
                            t = not_null(q_98);
                          }
                        }
                      }
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
ATerm Overlay_3 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm), ATerm f_77 (ATerm))
{
  ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL;
  l_99 = t;
  k_99 :
  if(match_cons(l_99, sym_Overlay_3))
    {
      m_99 = ATgetArgument(l_99, 0);
      n_99 = ATgetArgument(l_99, 1);
      o_99 = ATgetArgument(l_99, 2);
      {
        ATerm t_99 = NULL,v_99 = NULL;
        ATerm u_99 = NULL;
        t = SSLgetAnnotations(not_null(l_99));
        {
          u_99 = t;
          if(((t_99 != NULL) && (t_99 != u_99)))
            _fail(u_99);
          else
            t_99 = u_99;
        }
        {
          t = not_null(m_99);
          {
            ATerm x_99 = NULL;
            t = d_77(t);
            {
              v_99 = t;
              {
                t = not_null(n_99);
                {
                  ATerm b_100 = NULL;
                  t = e_77(t);
                  {
                    x_99 = t;
                    {
                      t = not_null(o_99);
                      {
                        ATerm d_100 = NULL;
                        t = f_77(t);
                        {
                          b_100 = t;
                          {
                            ATerm e_100 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlay_3, not_null(v_99), not_null(x_99), not_null(b_100)), not_null(t_99));
                            {
                              e_100 = t;
                              if(((d_100 != NULL) && (d_100 != e_100)))
                                _fail(e_100);
                              else
                                d_100 = e_100;
                            }
                            t = not_null(d_100);
                          }
                        }
                      }
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
ATerm Snd_0 (ATerm t)
{
  ATerm x_100 = NULL;
  ATerm z_100 = NULL,a_101 = NULL,b_101 = NULL;
  x_100 = t;
  {
    ATerm c_101 = NULL;
    ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL,h_101 = NULL,k_101 = NULL,l_101 = NULL,m_101 = NULL;
    t = not_null(x_100);
    {
      c_101 = t;
      {
        t = SSL_explode_term(not_null(c_101));
        {
          e_101 = t;
          r_100 :
          if(match_cons(e_101, sym__2))
            {
              f_101 = ATgetArgument(e_101, 0);
              g_101 = ATgetArgument(e_101, 1);
              s_100 :
              if(match_string(f_101, ""))
                {
                  t_100 :
                  if(((ATgetType(g_101) == AT_LIST) && ((ATermList) g_101 != ATempty)))
                    {
                      h_101 = ATgetFirst((ATermList) g_101);
                      k_101 = (ATerm) ATgetNext((ATermList) g_101);
                      w_100 :
                      if(((ATgetType(k_101) == AT_LIST) && ((ATermList) k_101 != ATempty)))
                        {
                          l_101 = ATgetFirst((ATermList) k_101);
                          m_101 = (ATerm) ATgetNext((ATermList) k_101);
                          {
                            if(((z_100 != NULL) && (z_100 != h_101)))
                              _fail(h_101);
                            else
                              z_100 = h_101;
                            {
                              if(((b_101 != NULL) && (b_101 != l_101)))
                                _fail(l_101);
                              else
                                b_101 = l_101;
                              if(((a_101 != NULL) && (a_101 != m_101)))
                                _fail(m_101);
                              else
                                a_101 = m_101;
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
    t = not_null(b_101);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm r_101 = NULL;
  r_101 = t;
  t = SSL_explode_term(not_null(r_101));
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
        t = (ATerm) ATinsert(ATempty, term_q_24);
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
  ATerm c_102 = NULL,d_102 = NULL,e_102 = NULL,f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL;
  c_102 = t;
  z_101 :
  if(match_cons(c_102, sym__2))
    {
      d_102 = ATgetArgument(c_102, 0);
      h_102 = ATgetArgument(c_102, 1);
      a_102 :
      if(match_cons(d_102, sym__3))
        {
          e_102 = ATgetArgument(d_102, 0);
          f_102 = ATgetArgument(d_102, 1);
          g_102 = ATgetArgument(d_102, 2);
          b_102 :
          if(match_cons(h_102, sym__3))
            {
              i_102 = ATgetArgument(h_102, 0);
              j_102 = ATgetArgument(h_102, 1);
              k_102 = ATgetArgument(h_102, 2);
              {
                ATerm r_102 = NULL,v_102 = NULL,x_102 = NULL;
                ATerm r_24;
                r_24 = t;
                {
                  ATerm s_102 = NULL,u_102 = NULL;
                  ATerm t_102 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_102), not_null(f_102));
                  {
                    t = diff_0(t);
                    {
                      t_102 = t;
                      if(((s_102 != NULL) && (s_102 != t_102)))
                        _fail(t_102);
                      else
                        s_102 = t_102;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_102), not_null(s_102));
                    {
                      t = union_0(t);
                      {
                        u_102 = t;
                        if(((r_102 != NULL) && (r_102 != u_102)))
                          _fail(u_102);
                        else
                          r_102 = u_102;
                      }
                    }
                  }
                }
                t = r_24;
                {
                  ATerm x_24;
                  x_24 = t;
                  {
                    ATerm w_102 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_102), not_null(j_102));
                    {
                      t = union_0(t);
                      {
                        w_102 = t;
                        if(((v_102 != NULL) && (v_102 != w_102)))
                          _fail(w_102);
                        else
                          v_102 = w_102;
                      }
                    }
                  }
                  t = x_24;
                  {
                    ATerm y_102 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_102), not_null(k_102));
                    {
                      t = union_0(t);
                      {
                        y_102 = t;
                        if(((x_102 != NULL) && (x_102 != y_102)))
                          _fail(y_102);
                        else
                          x_102 = y_102;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(r_102), not_null(v_102), not_null(x_102));
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
ATerm seqs_join_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_q_24);
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = cart_1(t, SeqUnion_0);
    return(t);
  }
  t = foldr_2(t, b_4, c_4);
  return(t);
}
ATerm JoinScope_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL;
  n_103 = t;
  m_103 :
  if(match_cons(n_103, sym__3))
    {
      o_103 = ATgetArgument(n_103, 0);
      p_103 = ATgetArgument(n_103, 1);
      q_103 = ATgetArgument(n_103, 2);
      {
        ATerm u_103 = NULL,y_103 = NULL;
        ATerm y_24;
        y_24 = t;
        {
          ATerm v_103 = NULL,x_103 = NULL;
          ATerm w_103 = NULL;
          t = term_u_18;
          {
            t = s_80(t);
            {
              w_103 = t;
              if(((v_103 != NULL) && (v_103 != w_103)))
                _fail(w_103);
              else
                v_103 = w_103;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_103), not_null(v_103));
            {
              t = diff_0(t);
              {
                x_103 = t;
                if(((u_103 != NULL) && (u_103 != x_103)))
                  _fail(x_103);
                else
                  u_103 = x_103;
              }
            }
          }
        }
        t = y_24;
        {
          ATerm z_103 = NULL,d_104 = NULL;
          ATerm a_104 = NULL,c_104 = NULL;
          ATerm b_104 = NULL;
          t = term_u_18;
          {
            t = s_80(t);
            {
              b_104 = t;
              if(((a_104 != NULL) && (a_104 != b_104)))
                _fail(b_104);
              else
                a_104 = b_104;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_103), not_null(a_104));
            {
              t = isect_0(t);
              {
                c_104 = t;
                if(((z_103 != NULL) && (z_103 != c_104)))
                  _fail(c_104);
                else
                  z_103 = c_104;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_103), not_null(q_103));
            {
              t = conc_0(t);
              {
                d_104 = t;
                if(((y_103 != NULL) && (y_103 != d_104)))
                  _fail(d_104);
                else
                  y_103 = d_104;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(o_103), not_null(u_103), not_null(y_103));
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
  ATerm r_104 = NULL,s_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL,b_105 = NULL;
  r_104 = t;
  o_104 :
  if(match_cons(r_104, sym__2))
    {
      s_104 = ATgetArgument(r_104, 0);
      w_104 = ATgetArgument(r_104, 1);
      p_104 :
      if(match_cons(s_104, sym__3))
        {
          t_104 = ATgetArgument(s_104, 0);
          u_104 = ATgetArgument(s_104, 1);
          v_104 = ATgetArgument(s_104, 2);
          q_104 :
          if(match_cons(w_104, sym__3))
            {
              x_104 = ATgetArgument(w_104, 0);
              y_104 = ATgetArgument(w_104, 1);
              b_105 = ATgetArgument(w_104, 2);
              {
                ATerm i_105 = NULL,k_105 = NULL,m_105 = NULL;
                ATerm z_24;
                z_24 = t;
                {
                  ATerm j_105 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_104), not_null(x_104));
                  {
                    t = union_0(t);
                    {
                      j_105 = t;
                      if(((i_105 != NULL) && (i_105 != j_105)))
                        _fail(j_105);
                      else
                        i_105 = j_105;
                    }
                  }
                }
                t = z_24;
                {
                  ATerm a_25;
                  a_25 = t;
                  {
                    ATerm l_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_104), not_null(y_104));
                    {
                      t = union_0(t);
                      {
                        l_105 = t;
                        if(((k_105 != NULL) && (k_105 != l_105)))
                          _fail(l_105);
                        else
                          k_105 = l_105;
                      }
                    }
                  }
                  t = a_25;
                  {
                    ATerm p_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_104), not_null(b_105));
                    {
                      t = union_0(t);
                      {
                        p_105 = t;
                        if(((m_105 != NULL) && (m_105 != p_105)))
                          _fail(p_105);
                        else
                          m_105 = p_105;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(i_105), not_null(k_105), not_null(m_105));
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
ATerm cart_1 (ATerm t, ATerm e_97 (ATerm))
{
  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL;
  y_105 = t;
  x_105 :
  if(match_cons(y_105, sym__2))
    {
      z_105 = ATgetArgument(y_105, 0);
      a_106 = ATgetArgument(y_105, 1);
      {
        t = not_null(z_105);
        {
          ATerm d_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm e_4 (ATerm t)
          {
            ATerm d_106 = NULL;
            d_106 = t;
            {
              t = not_null(a_106);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm f_106 = NULL;
                  f_106 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_106), not_null(f_106));
                    t = e_97(t);
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
ATerm UDjoin_0 (ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,o_107 = NULL,p_107 = NULL;
  o_107 = t;
  e_107 :
  if(match_cons(o_107, sym_GuardedLChoice_3))
    {
      p_107 = ATgetArgument(o_107, 0);
      g_107 = ATgetArgument(o_107, 1);
      f_107 = ATgetArgument(o_107, 2);
      {
        ATerm t_107 = NULL;
        ATerm u_107 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_107)), not_null(p_107));
        {
          t = seqs_join_0(t);
          {
            u_107 = t;
            if(((t_107 != NULL) && (t_107 != u_107)))
              _fail(u_107);
            else
              t_107 = u_107;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_107), not_null(f_107));
          t = cart_1(t, Union_0);
        }
      }
    }
  else
    {
      if(match_cons(o_107, sym_Overlay_3))
        {
          p_107 = ATgetArgument(o_107, 0);
          g_107 = ATgetArgument(o_107, 1);
          f_107 = ATgetArgument(o_107, 2);
          {
            ATerm y_107 = NULL;
            ATerm z_107 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_107)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(g_107), (ATerm) ATempty));
            {
              t = seqs_join_0(t);
              {
                z_107 = t;
                if(((y_107 != NULL) && (y_107 != z_107)))
                  _fail(z_107);
                else
                  y_107 = z_107;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(p_107), not_null(g_107), not_null(y_107));
          }
        }
      else
        {
          if(match_cons(o_107, sym_Scope_2))
            {
              p_107 = ATgetArgument(o_107, 0);
              g_107 = ATgetArgument(o_107, 1);
              {
                t = not_null(g_107);
                {
                  ATerm g_4 (ATerm t)
                  {
                    ATerm h_4 (ATerm t)
                    {
                      t = not_null(p_107);
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
              if(match_cons(o_107, sym_Cong_2))
                {
                  p_107 = ATgetArgument(o_107, 0);
                  g_107 = ATgetArgument(o_107, 1);
                  {
                    t = not_null(g_107);
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(o_107, sym_BAM_3))
                    {
                      p_107 = ATgetArgument(o_107, 0);
                      g_107 = ATgetArgument(o_107, 1);
                      f_107 = ATgetArgument(o_107, 2);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_107)), not_null(p_107)), not_null(g_107));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(o_107, sym_BA_2))
                        {
                          p_107 = ATgetArgument(o_107, 0);
                          g_107 = ATgetArgument(o_107, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_107)), not_null(g_107));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(o_107, sym_AM_2))
                            {
                              p_107 = ATgetArgument(o_107, 0);
                              g_107 = ATgetArgument(o_107, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_107)), not_null(p_107));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(o_107, sym_MA_2))
                                {
                                  p_107 = ATgetArgument(o_107, 0);
                                  g_107 = ATgetArgument(o_107, 1);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_107)), not_null(p_107));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(o_107, sym_StratRule_3))
                                    {
                                      p_107 = ATgetArgument(o_107, 0);
                                      g_107 = ATgetArgument(o_107, 1);
                                      f_107 = ATgetArgument(o_107, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_107)), not_null(f_107)), not_null(p_107));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(o_107, sym_Rule_3))
                                        {
                                          p_107 = ATgetArgument(o_107, 0);
                                          g_107 = ATgetArgument(o_107, 1);
                                          f_107 = ATgetArgument(o_107, 2);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_107)), not_null(f_107)), not_null(p_107));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(o_107, sym_Seq_2))
                                            {
                                              p_107 = ATgetArgument(o_107, 0);
                                              g_107 = ATgetArgument(o_107, 1);
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_107)), not_null(p_107));
                                                t = seqs_join_0(t);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(o_107, sym_Seqs_1))
                                                {
                                                  p_107 = ATgetArgument(o_107, 0);
                                                  {
                                                    t = not_null(p_107);
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
    }
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm k_79 (ATerm), ATerm l_79 (ATerm))
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  u_109 = t;
  t_109 :
  if(match_cons(u_109, sym_Cong_2))
    {
      v_109 = ATgetArgument(u_109, 0);
      w_109 = ATgetArgument(u_109, 1);
      {
        ATerm a_110 = NULL,c_110 = NULL;
        ATerm b_110 = NULL;
        t = SSLgetAnnotations(not_null(u_109));
        {
          b_110 = t;
          if(((a_110 != NULL) && (a_110 != b_110)))
            _fail(b_110);
          else
            a_110 = b_110;
        }
        {
          t = not_null(v_109);
          {
            ATerm e_110 = NULL;
            t = k_79(t);
            {
              c_110 = t;
              {
                t = not_null(w_109);
                {
                  ATerm g_110 = NULL;
                  t = l_79(t);
                  {
                    e_110 = t;
                    {
                      ATerm h_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(c_110), not_null(e_110)), not_null(a_110));
                      {
                        h_110 = t;
                        if(((g_110 != NULL) && (g_110 != h_110)))
                          _fail(h_110);
                        else
                          g_110 = h_110;
                      }
                      t = not_null(g_110);
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
  ATerm o_110 = NULL;
  ATerm p_110 = NULL;
  t = tvars_0(t);
  {
    p_110 = t;
    if(((o_110 != NULL) && (o_110 != p_110)))
      _fail(p_110);
    else
      o_110 = p_110;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(o_110), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm s_110 = NULL;
  ATerm t_110 = NULL;
  t = tvars_0(t);
  {
    t_110 = t;
    if(((s_110 != NULL) && (s_110 != t_110)))
      _fail(t_110);
    else
      s_110 = t_110;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(s_110), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL;
  c_111 = t;
  b_111 :
  if(match_cons(c_111, sym_Rule_3))
    {
      d_111 = ATgetArgument(c_111, 0);
      e_111 = ATgetArgument(c_111, 1);
      f_111 = ATgetArgument(c_111, 2);
      {
        ATerm k_111 = NULL,m_111 = NULL;
        ATerm l_111 = NULL;
        t = SSLgetAnnotations(not_null(c_111));
        {
          l_111 = t;
          if(((k_111 != NULL) && (k_111 != l_111)))
            _fail(l_111);
          else
            k_111 = l_111;
        }
        {
          t = not_null(d_111);
          {
            ATerm o_111 = NULL;
            t = o_76(t);
            {
              m_111 = t;
              {
                t = not_null(e_111);
                {
                  ATerm q_111 = NULL;
                  t = p_76(t);
                  {
                    o_111 = t;
                    {
                      t = not_null(f_111);
                      {
                        ATerm s_111 = NULL;
                        t = q_76(t);
                        {
                          q_111 = t;
                          {
                            ATerm t_111 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(m_111), not_null(o_111), not_null(q_111)), not_null(k_111));
                            {
                              t_111 = t;
                              if(((s_111 != NULL) && (s_111 != t_111)))
                                _fail(t_111);
                              else
                                s_111 = t_111;
                            }
                            t = not_null(s_111);
                          }
                        }
                      }
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
ATerm BAM_3 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm))
{
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL;
  h_112 = t;
  g_112 :
  if(match_cons(h_112, sym_BAM_3))
    {
      i_112 = ATgetArgument(h_112, 0);
      j_112 = ATgetArgument(h_112, 1);
      k_112 = ATgetArgument(h_112, 2);
      {
        ATerm p_112 = NULL,r_112 = NULL;
        ATerm q_112 = NULL;
        t = SSLgetAnnotations(not_null(h_112));
        {
          q_112 = t;
          if(((p_112 != NULL) && (p_112 != q_112)))
            _fail(q_112);
          else
            p_112 = q_112;
        }
        {
          t = not_null(i_112);
          {
            ATerm t_112 = NULL;
            t = s_75(t);
            {
              r_112 = t;
              {
                t = not_null(j_112);
                {
                  ATerm v_112 = NULL;
                  t = t_75(t);
                  {
                    t_112 = t;
                    {
                      t = not_null(k_112);
                      {
                        ATerm x_112 = NULL;
                        t = u_75(t);
                        {
                          v_112 = t;
                          {
                            ATerm y_112 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BAM_3, not_null(r_112), not_null(t_112), not_null(v_112)), not_null(p_112));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BA_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL;
  l_113 = t;
  k_113 :
  if(match_cons(l_113, sym_BA_2))
    {
      m_113 = ATgetArgument(l_113, 0);
      n_113 = ATgetArgument(l_113, 1);
      {
        ATerm r_113 = NULL,t_113 = NULL;
        ATerm s_113 = NULL;
        t = SSLgetAnnotations(not_null(l_113));
        {
          s_113 = t;
          if(((r_113 != NULL) && (r_113 != s_113)))
            _fail(s_113);
          else
            r_113 = s_113;
        }
        {
          t = not_null(m_113);
          {
            ATerm v_113 = NULL;
            t = q_75(t);
            {
              t_113 = t;
              {
                t = not_null(n_113);
                {
                  ATerm x_113 = NULL;
                  t = r_75(t);
                  {
                    v_113 = t;
                    {
                      ATerm y_113 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BA_2, not_null(t_113), not_null(v_113)), not_null(r_113));
                      {
                        y_113 = t;
                        if(((x_113 != NULL) && (x_113 != y_113)))
                          _fail(y_113);
                        else
                          x_113 = y_113;
                      }
                      t = not_null(x_113);
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
ATerm AM_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL;
  k_114 = t;
  j_114 :
  if(match_cons(k_114, sym_AM_2))
    {
      l_114 = ATgetArgument(k_114, 0);
      m_114 = ATgetArgument(k_114, 1);
      {
        ATerm q_114 = NULL,s_114 = NULL;
        ATerm r_114 = NULL;
        t = SSLgetAnnotations(not_null(k_114));
        {
          r_114 = t;
          if(((q_114 != NULL) && (q_114 != r_114)))
            _fail(r_114);
          else
            q_114 = r_114;
        }
        {
          t = not_null(l_114);
          {
            ATerm u_114 = NULL;
            t = o_75(t);
            {
              s_114 = t;
              {
                t = not_null(m_114);
                {
                  ATerm w_114 = NULL;
                  t = p_75(t);
                  {
                    u_114 = t;
                    {
                      ATerm x_114 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AM_2, not_null(s_114), not_null(u_114)), not_null(q_114));
                      {
                        x_114 = t;
                        if(((w_114 != NULL) && (w_114 != x_114)))
                          _fail(x_114);
                        else
                          w_114 = x_114;
                      }
                      t = not_null(w_114);
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
ATerm MA_2 (ATerm t, ATerm m_75 (ATerm), ATerm n_75 (ATerm))
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL;
  j_115 = t;
  i_115 :
  if(match_cons(j_115, sym_MA_2))
    {
      k_115 = ATgetArgument(j_115, 0);
      l_115 = ATgetArgument(j_115, 1);
      {
        ATerm p_115 = NULL,r_115 = NULL;
        ATerm q_115 = NULL;
        t = SSLgetAnnotations(not_null(j_115));
        {
          q_115 = t;
          if(((p_115 != NULL) && (p_115 != q_115)))
            _fail(q_115);
          else
            p_115 = q_115;
        }
        {
          t = not_null(k_115);
          {
            ATerm t_115 = NULL;
            t = m_75(t);
            {
              r_115 = t;
              {
                t = not_null(l_115);
                {
                  ATerm v_115 = NULL;
                  t = n_75(t);
                  {
                    t_115 = t;
                    {
                      ATerm w_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MA_2, not_null(r_115), not_null(t_115)), not_null(p_115));
                      {
                        w_115 = t;
                        if(((v_115 != NULL) && (v_115 != w_115)))
                          _fail(w_115);
                        else
                          v_115 = w_115;
                      }
                      t = not_null(v_115);
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
ATerm Match_1 (ATerm t, ATerm s_79 (ATerm))
{
  ATerm h_116 = NULL,i_116 = NULL;
  h_116 = t;
  g_116 :
  if(match_cons(h_116, sym_Match_1))
    {
      i_116 = ATgetArgument(h_116, 0);
      {
        ATerm l_116 = NULL,n_116 = NULL;
        ATerm m_116 = NULL;
        t = SSLgetAnnotations(not_null(h_116));
        {
          m_116 = t;
          if(((l_116 != NULL) && (l_116 != m_116)))
            _fail(m_116);
          else
            l_116 = m_116;
        }
        {
          t = not_null(i_116);
          {
            ATerm p_116 = NULL;
            t = s_79(t);
            {
              n_116 = t;
              {
                ATerm q_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(n_116)), not_null(l_116));
                {
                  q_116 = t;
                  if(((p_116 != NULL) && (p_116 != q_116)))
                    _fail(q_116);
                  else
                    p_116 = q_116;
                }
                t = not_null(p_116);
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
ATerm Build_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm a_117 = NULL,b_117 = NULL;
  a_117 = t;
  z_116 :
  if(match_cons(a_117, sym_Build_1))
    {
      b_117 = ATgetArgument(a_117, 0);
      {
        ATerm e_117 = NULL,g_117 = NULL;
        ATerm f_117 = NULL;
        t = SSLgetAnnotations(not_null(a_117));
        {
          f_117 = t;
          if(((e_117 != NULL) && (e_117 != f_117)))
            _fail(f_117);
          else
            e_117 = f_117;
        }
        {
          t = not_null(b_117);
          {
            ATerm i_117 = NULL;
            t = t_79(t);
            {
              g_117 = t;
              {
                ATerm j_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(g_117)), not_null(e_117));
                {
                  j_117 = t;
                  if(((i_117 != NULL) && (i_117 != j_117)))
                    _fail(j_117);
                  else
                    i_117 = j_117;
                }
                t = not_null(i_117);
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
ATerm constructs_1 (ATerm t, ATerm r_80 (ATerm))
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
                  t = MA_2(t, def_term_0, r_80);
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
                        t = AM_2(t, r_80, def_term_0);
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
                              t = BA_2(t, r_80, use_term_0);
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
                                    t = BAM_3(t, r_80, use_term_0, def_term_0);
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
                                          t = Scope_2(t, _id, r_80);
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
                                                t = Rule_3(t, def_term_0, use_term_0, r_80);
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
                                                          t = map_1(t, r_80);
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
ATerm RDef_3 (ATerm t, ATerm w_76 (ATerm), ATerm x_76 (ATerm), ATerm y_76 (ATerm))
{
  ATerm w_117 = NULL,x_117 = NULL,y_117 = NULL,z_117 = NULL;
  w_117 = t;
  v_117 :
  if(match_cons(w_117, sym_RDef_3))
    {
      x_117 = ATgetArgument(w_117, 0);
      y_117 = ATgetArgument(w_117, 1);
      z_117 = ATgetArgument(w_117, 2);
      {
        ATerm e_118 = NULL,g_118 = NULL;
        ATerm f_118 = NULL;
        t = SSLgetAnnotations(not_null(w_117));
        {
          f_118 = t;
          if(((e_118 != NULL) && (e_118 != f_118)))
            _fail(f_118);
          else
            e_118 = f_118;
        }
        {
          t = not_null(x_117);
          {
            ATerm i_118 = NULL;
            t = w_76(t);
            {
              g_118 = t;
              {
                t = not_null(y_117);
                {
                  ATerm k_118 = NULL;
                  t = x_76(t);
                  {
                    i_118 = t;
                    {
                      t = not_null(z_117);
                      {
                        ATerm m_118 = NULL;
                        t = y_76(t);
                        {
                          k_118 = t;
                          {
                            ATerm n_118 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(g_118), not_null(i_118), not_null(k_118)), not_null(e_118));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_78 (ATerm), ATerm x_78 (ATerm), ATerm y_78 (ATerm))
{
  ATerm b_119 = NULL,c_119 = NULL,d_119 = NULL,e_119 = NULL;
  b_119 = t;
  a_119 :
  if(match_cons(b_119, sym_SDef_3))
    {
      c_119 = ATgetArgument(b_119, 0);
      d_119 = ATgetArgument(b_119, 1);
      e_119 = ATgetArgument(b_119, 2);
      {
        ATerm j_119 = NULL,l_119 = NULL;
        ATerm k_119 = NULL;
        t = SSLgetAnnotations(not_null(b_119));
        {
          k_119 = t;
          if(((j_119 != NULL) && (j_119 != k_119)))
            _fail(k_119);
          else
            j_119 = k_119;
        }
        {
          t = not_null(c_119);
          {
            ATerm n_119 = NULL;
            t = w_78(t);
            {
              l_119 = t;
              {
                t = not_null(d_119);
                {
                  ATerm p_119 = NULL;
                  t = x_78(t);
                  {
                    n_119 = t;
                    {
                      t = not_null(e_119);
                      {
                        ATerm r_119 = NULL;
                        t = y_78(t);
                        {
                          p_119 = t;
                          {
                            ATerm s_119 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(l_119), not_null(n_119), not_null(p_119)), not_null(j_119));
                            {
                              s_119 = t;
                              if(((r_119 != NULL) && (r_119 != s_119)))
                                _fail(s_119);
                              else
                                r_119 = s_119;
                            }
                            t = not_null(r_119);
                          }
                        }
                      }
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
  ATerm a_120 = NULL;
  t = filter_1(t, check_0);
  {
    a_120 = t;
    z_119 :
    if(((ATermList) a_120 == ATempty))
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
ATerm Overlays_1 (ATerm t, ATerm h_77 (ATerm))
{
  ATerm g_120 = NULL,h_120 = NULL;
  g_120 = t;
  f_120 :
  if(match_cons(g_120, sym_Overlays_1))
    {
      h_120 = ATgetArgument(g_120, 0);
      {
        ATerm k_120 = NULL,m_120 = NULL;
        ATerm l_120 = NULL;
        t = SSLgetAnnotations(not_null(g_120));
        {
          l_120 = t;
          if(((k_120 != NULL) && (k_120 != l_120)))
            _fail(l_120);
          else
            k_120 = l_120;
        }
        {
          t = not_null(h_120);
          {
            ATerm o_120 = NULL;
            t = h_77(t);
            {
              m_120 = t;
              {
                ATerm p_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(m_120)), not_null(k_120));
                {
                  p_120 = t;
                  if(((o_120 != NULL) && (o_120 != p_120)))
                    _fail(p_120);
                  else
                    o_120 = p_120;
                }
                t = not_null(o_120);
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
ATerm Signature_1 (ATerm t, ATerm g_77 (ATerm))
{
  ATerm z_120 = NULL,a_121 = NULL;
  z_120 = t;
  y_120 :
  if(match_cons(z_120, sym_Signature_1))
    {
      a_121 = ATgetArgument(z_120, 0);
      {
        ATerm d_121 = NULL,f_121 = NULL;
        ATerm e_121 = NULL;
        t = SSLgetAnnotations(not_null(z_120));
        {
          e_121 = t;
          if(((d_121 != NULL) && (d_121 != e_121)))
            _fail(e_121);
          else
            d_121 = e_121;
        }
        {
          t = not_null(a_121);
          {
            ATerm h_121 = NULL;
            t = g_77(t);
            {
              f_121 = t;
              {
                ATerm i_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(f_121)), not_null(d_121));
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
  ATerm r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL;
  r_121 = t;
  o_121 :
  if(match_cons(r_121, sym__2))
    {
      s_121 = ATgetArgument(r_121, 0);
      v_121 = ATgetArgument(r_121, 1);
      p_121 :
      if(match_cons(s_121, sym__2))
        {
          t_121 = ATgetArgument(s_121, 0);
          u_121 = ATgetArgument(s_121, 1);
          q_121 :
          if(match_cons(v_121, sym__2))
            {
              w_121 = ATgetArgument(v_121, 0);
              x_121 = ATgetArgument(v_121, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_121)), not_null(t_121)), (ATerm) ATinsert(CheckATermList(not_null(x_121)), not_null(u_121)));
            }
          else
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
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL;
  f_122 = t;
  e_122 :
  if(((ATgetType(f_122) == AT_LIST) && ((ATermList) f_122 != ATempty)))
    {
      g_122 = ATgetFirst((ATermList) f_122);
      h_122 = (ATerm) ATgetNext((ATermList) f_122);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_122), not_null(h_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_122 = NULL;
  n_122 = t;
  m_122 :
  if(((ATermList) n_122 == ATempty))
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
    ATerm q_122 = NULL;
    q_122 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_122));
    return(t);
  }
  t = map_1(t, v_4);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_122 = NULL,w_122 = NULL,x_122 = NULL;
  v_122 = t;
  u_122 :
  if(((ATgetType(v_122) == AT_LIST) && ((ATermList) v_122 != ATempty)))
    {
      w_122 = ATgetFirst((ATermList) v_122);
      x_122 = (ATerm) ATgetNext((ATermList) v_122);
      t = not_null(x_122);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  ATerm d_123 = NULL,e_123 = NULL,f_123 = NULL;
  d_123 = t;
  c_123 :
  if(match_cons(d_123, sym__2))
    {
      e_123 = ATgetArgument(d_123, 0);
      f_123 = ATgetArgument(d_123, 1);
      {
        t = not_null(e_123);
        {
          ATerm j_123 (ATerm t)
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
                  ATerm c_27 = t;
                  int d_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_27;
                      e_27 = t;
                      {
                        ATerm w_4 (ATerm t)
                        {
                          t = not_null(f_123);
                          return(t);
                        }
                        t = HdMember_1(t, w_4);
                      }
                      t = e_27;
                      t = Cons_2(t, _id, j_123);
                      LocalPopChoice(d_27);
                    }
                  else
                    {
                      t = c_27;
                      {
                        t = Tl_0(t);
                        t = j_123(t);
                      }
                    }
                }
              }
            return(t);
          }
          t = j_123(t);
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
  ATerm m_123 = NULL,n_123 = NULL,o_123 = NULL;
  m_123 = t;
  l_123 :
  if(match_cons(m_123, sym__2))
    {
      n_123 = ATgetArgument(m_123, 0);
      o_123 = ATgetArgument(m_123, 1);
      if(((n_123 != NULL) && (n_123 != o_123)))
        _fail(o_123);
      else
        n_123 = o_123;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL;
  ATerm b_126 (ATerm t)
  {
    ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL,n_125 = NULL;
    ATerm f_27;
    f_27 = t;
    {
      ATerm c_125 = NULL,e_125 = NULL,g_125 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_124), term_h_27);
      {
        ATerm i_27 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_27;
          }
        {
          ATerm j_27;
          j_27 = t;
          {
            ATerm d_125 = NULL;
            t = term_u_18;
            {
              t = q_0(t);
              {
                d_125 = t;
                if(((c_125 != NULL) && (c_125 != d_125)))
                  _fail(d_125);
                else
                  c_125 = d_125;
              }
            }
          }
          t = j_27;
          {
            ATerm f_125 = NULL;
            t = not_null(p_124);
            {
              t = tvars_0(t);
              {
                f_125 = t;
                if(((e_125 != NULL) && (e_125 != f_125)))
                  _fail(f_125);
                else
                  e_125 = f_125;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_125), not_null(e_125));
              {
                t = isect_0(t);
                {
                  ATerm h_125 = NULL,j_125 = NULL,l_125 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    g_125 = t;
                    {
                      if(((z_124 != NULL) && (z_124 != g_125)))
                        _fail(g_125);
                      else
                        z_124 = g_125;
                      {
                        ATerm m_27;
                        m_27 = t;
                        {
                          ATerm i_125 = NULL;
                          t = term_u_18;
                          {
                            t = q_0(t);
                            {
                              i_125 = t;
                              if(((h_125 != NULL) && (h_125 != i_125)))
                                _fail(i_125);
                              else
                                h_125 = i_125;
                            }
                          }
                        }
                        t = m_27;
                        {
                          ATerm k_125 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_124), not_null(t_124));
                          {
                            t = tvars_0(t);
                            {
                              k_125 = t;
                              if(((j_125 != NULL) && (j_125 != k_125)))
                                _fail(k_125);
                              else
                                j_125 = k_125;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_125), not_null(j_125));
                            {
                              t = isect_0(t);
                              {
                                ATerm m_125 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  l_125 = t;
                                  {
                                    if(((a_125 != NULL) && (a_125 != l_125)))
                                      _fail(l_125);
                                    else
                                      a_125 = l_125;
                                    {
                                      t = new_0(t);
                                      {
                                        m_125 = t;
                                        if(((b_125 != NULL) && (b_125 != m_125)))
                                          _fail(m_125);
                                        else
                                          b_125 = m_125;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = f_27;
    {
      ATerm o_125 = NULL;
      t = not_null(m_124);
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
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(n_125), (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATinsert(CheckATermList(not_null(a_125)), (ATerm) ATmakeAppl(sym_Str_1, not_null(b_125))))), (ATerm) ATmakeAppl(sym_Op_2, term_n_27, not_null(z_124)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(m_124), not_null(n_124), (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_124), not_null(q_124), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_q_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_124))))), (ATerm)ATmakeAppl(sym_Op_2, term_n_27, not_null(z_124)), (ATerm) ATmakeAppl(sym_Op_2, term_o_27, (ATerm) ATinsert(CheckATermList(not_null(a_125)), (ATerm) ATmakeAppl(sym_Str_1, not_null(b_125))))), not_null(t_124)))));
    }
    return(t);
  }
  ATerm c_126 (ATerm t)
  {
    ATerm t_125 = NULL,z_125 = NULL;
    ATerm r_27;
    r_27 = t;
    {
      ATerm u_125 = NULL,w_125 = NULL,y_125 = NULL;
      ATerm s_27;
      s_27 = t;
      {
        ATerm v_125 = NULL;
        t = term_u_18;
        {
          t = q_0(t);
          {
            v_125 = t;
            if(((u_125 != NULL) && (u_125 != v_125)))
              _fail(v_125);
            else
              u_125 = v_125;
          }
        }
      }
      t = s_27;
      {
        ATerm x_125 = NULL;
        t = not_null(p_124);
        {
          t = tvars_0(t);
          {
            x_125 = t;
            if(((w_125 != NULL) && (w_125 != x_125)))
              _fail(x_125);
            else
              w_125 = x_125;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_125), not_null(w_125));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                y_125 = t;
                if(((t_125 != NULL) && (t_125 != y_125)))
                  _fail(y_125);
                else
                  t_125 = y_125;
              }
            }
          }
        }
      }
    }
    t = r_27;
    {
      ATerm a_126 = NULL;
      t = not_null(m_124);
      {
        t = r_0(t);
        {
          a_126 = t;
          if(((z_125 != NULL) && (z_125 != a_126)))
            _fail(a_126);
          else
            z_125 = a_126;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(z_125), (ATerm) ATmakeAppl(sym_Op_2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, term_h_27), (ATerm) ATmakeAppl(sym_Op_2, term_n_27, not_null(t_125)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(m_124), not_null(n_124), (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_124), term_t_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_q_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_124))))), (ATerm)ATmakeAppl(sym_Op_2, term_n_27, not_null(t_125)), term_h_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_124), term_b_13)))));
    }
    return(t);
  }
  l_124 = t;
  f_124 :
  if(match_cons(l_124, sym_RDef_3))
    {
      m_124 = ATgetArgument(l_124, 0);
      n_124 = ATgetArgument(l_124, 1);
      o_124 = ATgetArgument(l_124, 2);
      g_124 :
      if(match_cons(o_124, sym_Rule_3))
        {
          p_124 = ATgetArgument(o_124, 0);
          q_124 = ATgetArgument(o_124, 1);
          t_124 = ATgetArgument(o_124, 2);
          h_124 :
          if(match_cons(q_124, sym_Op_2))
            {
              r_124 = ATgetArgument(q_124, 0);
              s_124 = ATgetArgument(q_124, 1);
              i_124 :
              if(((ATermList) s_124 == ATempty))
                {
                  j_124 :
                  if(match_string(r_124, "Undefined"))
                    {
                      ATerm u_27 = t;
                      int v_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_126(t);
                          LocalPopChoice(v_27);
                        }
                      else
                        {
                          t = u_27;
                          t = c_126(t);
                        }
                    }
                  else
                    {
                      t = b_126(t);
                    }
                }
              else
                {
                  k_124 :
                  t = b_126(t);
                }
            }
          else
            {
              t = b_126(t);
            }
        }
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
  ATerm v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL;
  v_126 = t;
  t_126 :
  if(match_cons(v_126, sym__2))
    {
      w_126 = ATgetArgument(v_126, 0);
      y_126 = ATgetArgument(v_126, 1);
      u_126 :
      if(match_cons(w_126, sym_OverrideDynamicRules_1))
        {
          x_126 = ATgetArgument(w_126, 0);
          {
            t = not_null(x_126);
            {
              ATerm x_4 (ATerm t)
              {
                ATerm y_4 (ATerm t)
                {
                  t = not_null(y_126);
                  return(t);
                }
                ATerm z_4 (ATerm t)
                {
                  ATerm b_127 = NULL;
                  b_127 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(b_127)))));
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
          if(match_cons(w_126, sym_DynamicRules_1))
            {
              x_126 = ATgetArgument(w_126, 0);
              {
                t = not_null(x_126);
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm b_5 (ATerm t)
                    {
                      t = not_null(y_126);
                      return(t);
                    }
                    ATerm c_5 (ATerm t)
                    {
                      ATerm f_127 = NULL;
                      f_127 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(f_127)))));
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
ATerm dist_scope_1 (ATerm t, ATerm d_108 (ATerm))
{
  ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL;
  q_127 = t;
  o_127 :
  if(match_cons(q_127, sym__2))
    {
      r_127 = ATgetArgument(q_127, 0);
      u_127 = ATgetArgument(q_127, 1);
      p_127 :
      if(match_cons(r_127, sym_Scope_2))
        {
          s_127 = ATgetArgument(r_127, 0);
          t_127 = ATgetArgument(r_127, 1);
          {
            ATerm y_127 = NULL;
            ATerm z_127 = NULL,b_128 = NULL;
            ATerm a_128 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_127), not_null(u_127));
            {
              t = union_0(t);
              {
                a_128 = t;
                if(((z_127 != NULL) && (z_127 != a_128)))
                  _fail(a_128);
                else
                  z_127 = a_128;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_127), not_null(z_127));
              {
                t = d_108(t);
                {
                  b_128 = t;
                  if(((y_127 != NULL) && (y_127 != b_128)))
                    _fail(b_128);
                  else
                    y_127 = b_128;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_127), not_null(y_127));
          }
        }
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
ATerm one_dist_1 (ATerm t, ATerm q_100 (ATerm))
{
  ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL;
  i_128 = t;
  h_128 :
  if(match_cons(i_128, sym__2))
    {
      j_128 = ATgetArgument(i_128, 0);
      k_128 = ATgetArgument(i_128, 1);
      {
        t = not_null(j_128);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm n_128 = NULL;
            n_128 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_128), not_null(k_128));
              t = q_100(t);
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
ATerm env_oncetd_1 (ATerm t, ATerm i_101 (ATerm))
{
  ATerm r_128 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_101(t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = one_dist_1(t, r_128);
      }
    return(t);
  }
  t = r_128(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm y_128 = NULL,z_128 = NULL,a_129 = NULL;
  y_128 = t;
  x_128 :
  if(((ATgetType(y_128) == AT_LIST) && ((ATermList) y_128 != ATempty)))
    {
      z_128 = ATgetFirst((ATermList) y_128);
      a_129 = (ATerm) ATgetNext((ATermList) y_128);
      {
        ATerm d_129 = NULL,e_129 = NULL,f_129 = NULL,g_129 = NULL;
        ATerm h_129 = NULL;
        t = not_null(z_128);
        {
          ATerm l_129 = NULL;
          t = tvars_0(t);
          {
            h_129 = t;
            {
              if(((f_129 != NULL) && (f_129 != h_129)))
                _fail(h_129);
              else
                f_129 = h_129;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_128), not_null(f_129));
                {
                  ATerm o_129 (ATerm t)
                  {
                    ATerm e_5 (ATerm t)
                    {
                      ATerm c_28 = t;
                      int d_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, o_129);
                          LocalPopChoice(d_28);
                        }
                      else
                        {
                          t = c_28;
                          {
                            ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              i_129 = t;
                              v_128 :
                              if(match_cons(i_129, sym__2))
                                {
                                  j_129 = ATgetArgument(i_129, 0);
                                  k_129 = ATgetArgument(i_129, 1);
                                  {
                                    if(((e_129 != NULL) && (e_129 != j_129)))
                                      _fail(j_129);
                                    else
                                      e_129 = j_129;
                                    {
                                      if(((d_129 != NULL) && (d_129 != k_129)))
                                        _fail(k_129);
                                      else
                                        d_129 = k_129;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_129));
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
                  t = o_129(t);
                  {
                    l_129 = t;
                    if(((g_129 != NULL) && (g_129 != l_129)))
                      _fail(l_129);
                    else
                      g_129 = l_129;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_129)), not_null(g_129)), not_null(a_129));
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
ATerm repeat_2 (ATerm t, ATerm q_106 (ATerm), ATerm r_106 (ATerm))
{
  ATerm r_129 (ATerm t)
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_106(t);
        t = r_129(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = r_106(t);
      }
    return(t);
  }
  t = r_129(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm t_106 (ATerm))
{
  t = repeat_2(t, t_106, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm y_99 (ATerm))
{
  ATerm s_129 (ATerm t)
  {
    t = y_99(t);
    {
      ATerm g_28 = t;
      int h_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(h_28);
        }
      else
        {
          t = g_28;
          t = Cons_2(t, _id, s_129);
        }
    }
    return(t);
  }
  t = s_129(t);
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
  ATerm x_129 = NULL,y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL;
  z_129 = t;
  v_129 :
  if(match_cons(z_129, sym_DynRuleScope_2))
    {
      a_130 = ATgetArgument(z_129, 0);
      b_130 = ATgetArgument(z_129, 1);
      w_129 :
      if(((ATgetType(a_130) == AT_LIST) && ((ATermList) a_130 != ATempty)))
        {
          x_129 = ATgetFirst((ATermList) a_130);
          y_129 = (ATerm) ATgetNext((ATermList) a_130);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_j_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(y_129), not_null(b_130))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(x_129)))));
        }
      else
        {
          if(((ATermList) a_130 == ATempty))
            {
              t = not_null(b_130);
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
  ATerm l_130 = NULL,m_130 = NULL;
  l_130 = t;
  k_130 :
  if(match_cons(l_130, sym_ScopeDefault_1))
    {
      m_130 = ATgetArgument(l_130, 0);
      {
        ATerm o_130 = NULL;
        ATerm p_130 = NULL;
        t = not_null(m_130);
        {
          t = tvars_0(t);
          {
            p_130 = t;
            if(((o_130 != NULL) && (o_130 != p_130)))
              _fail(p_130);
            else
              o_130 = p_130;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_130), not_null(m_130));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm z_76 (ATerm))
{
  ATerm x_130 = NULL,y_130 = NULL;
  x_130 = t;
  w_130 :
  if(match_cons(x_130, sym_DynamicRules_1))
    {
      y_130 = ATgetArgument(x_130, 0);
      {
        ATerm b_131 = NULL,d_131 = NULL;
        ATerm c_131 = NULL;
        t = SSLgetAnnotations(not_null(x_130));
        {
          c_131 = t;
          if(((b_131 != NULL) && (b_131 != c_131)))
            _fail(c_131);
          else
            b_131 = c_131;
        }
        {
          t = not_null(y_130);
          {
            ATerm f_131 = NULL;
            t = z_76(t);
            {
              d_131 = t;
              {
                ATerm g_131 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(d_131)), not_null(b_131));
                {
                  g_131 = t;
                  if(((f_131 != NULL) && (f_131 != g_131)))
                    _fail(g_131);
                  else
                    f_131 = g_131;
                }
                t = not_null(f_131);
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
ATerm Scope_2 (ATerm t, ATerm w_79 (ATerm), ATerm x_79 (ATerm))
{
  ATerm r_131 = NULL,s_131 = NULL,t_131 = NULL;
  r_131 = t;
  q_131 :
  if(match_cons(r_131, sym_Scope_2))
    {
      s_131 = ATgetArgument(r_131, 0);
      t_131 = ATgetArgument(r_131, 1);
      {
        ATerm x_131 = NULL,z_131 = NULL;
        ATerm y_131 = NULL;
        t = SSLgetAnnotations(not_null(r_131));
        {
          y_131 = t;
          if(((x_131 != NULL) && (x_131 != y_131)))
            _fail(y_131);
          else
            x_131 = y_131;
        }
        {
          t = not_null(s_131);
          {
            ATerm b_132 = NULL;
            t = w_79(t);
            {
              z_131 = t;
              {
                t = not_null(t_131);
                {
                  ATerm d_132 = NULL;
                  t = x_79(t);
                  {
                    b_132 = t;
                    {
                      ATerm e_132 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_131), not_null(b_132)), not_null(x_131));
                      {
                        e_132 = t;
                        if(((d_132 != NULL) && (d_132 != e_132)))
                          _fail(e_132);
                        else
                          d_132 = e_132;
                      }
                      t = not_null(d_132);
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
ATerm tboundin_3 (ATerm t, ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm))
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, y_80, w_80);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = DynamicRules_1(t, w_80);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL;
  m_132 = t;
  l_132 :
  if(match_cons(m_132, sym_DynamicRules_1))
    {
      n_132 = ATgetArgument(m_132, 0);
      {
        t = not_null(n_132);
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
  ATerm u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL,z_132 = NULL;
  x_132 = t;
  s_132 :
  if(match_cons(x_132, sym_LRule_1))
    {
      y_132 = ATgetArgument(x_132, 0);
      t_132 :
      if(match_cons(y_132, sym_Rule_3))
        {
          u_132 = ATgetArgument(y_132, 0);
          v_132 = ATgetArgument(y_132, 1);
          w_132 = ATgetArgument(y_132, 2);
          {
            t = not_null(u_132);
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
      if(match_cons(x_132, sym_Scope_2))
        {
          y_132 = ATgetArgument(x_132, 0);
          z_132 = ATgetArgument(x_132, 1);
          t = not_null(y_132);
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
  ATerm j_133 = NULL,k_133 = NULL;
  j_133 = t;
  i_133 :
  if(match_cons(j_133, sym_Var_1))
    {
      k_133 = ATgetArgument(j_133, 0);
      t = (ATerm) ATinsert(ATempty, not_null(k_133));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL,r_133 = NULL;
  p_133 = t;
  o_133 :
  if(match_cons(p_133, sym__2))
    {
      q_133 = ATgetArgument(p_133, 0);
      r_133 = ATgetArgument(p_133, 1);
      {
        t = not_null(q_133);
        {
          ATerm v_133 (ATerm t)
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_133);
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
                {
                  ATerm o_28 = t;
                  int p_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_5 (ATerm t)
                      {
                        t = not_null(r_133);
                        return(t);
                      }
                      t = HdMember_1(t, m_5);
                      t = v_133(t);
                      LocalPopChoice(p_28);
                    }
                  else
                    {
                      t = o_28;
                      t = Cons_2(t, _id, v_133);
                    }
                }
              }
            return(t);
          }
          t = v_133(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm m_93 (ATerm))
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_93(t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm a_134 = NULL,b_134 = NULL,c_134 = NULL;
        a_134 = t;
        z_133 :
        if(((ATgetType(a_134) == AT_LIST) && ((ATermList) a_134 != ATempty)))
          {
            b_134 = ATgetFirst((ATermList) a_134);
            c_134 = (ATerm) ATgetNext((ATermList) a_134);
            {
              ATerm f_134 = NULL,h_134 = NULL;
              ATerm s_28;
              s_28 = t;
              {
                ATerm g_134 = NULL;
                t = not_null(b_134);
                {
                  t = m_93(t);
                  {
                    g_134 = t;
                    if(((f_134 != NULL) && (f_134 != g_134)))
                      _fail(g_134);
                    else
                      f_134 = g_134;
                  }
                }
              }
              t = s_28;
              {
                ATerm i_134 = NULL;
                t = not_null(c_134);
                {
                  t = foldr_3(t, k_93, l_93, m_93);
                  {
                    i_134 = t;
                    if(((h_134 != NULL) && (h_134 != i_134)))
                      _fail(i_134);
                    else
                      h_134 = i_134;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_134), not_null(h_134));
                  t = l_93(t);
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
ATerm crush_3 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm))
{
  ATerm q_134 = NULL;
  ATerm s_134 = NULL;
  q_134 = t;
  {
    ATerm t_134 = NULL;
    ATerm v_134 = NULL,w_134 = NULL,x_134 = NULL;
    t = not_null(q_134);
    {
      t_134 = t;
      {
        t = SSL_explode_term(not_null(t_134));
        {
          v_134 = t;
          p_134 :
          if(match_cons(v_134, sym__2))
            {
              w_134 = ATgetArgument(v_134, 0);
              x_134 = ATgetArgument(v_134, 1);
              if(((s_134 != NULL) && (s_134 != x_134)))
                _fail(x_134);
              else
                s_134 = x_134;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_134);
      t = foldr_3(t, z_94, a_95, b_95);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm e_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL;
  e_135 = t;
  c_135 :
  if(match_cons(e_135, sym__2))
    {
      f_135 = ATgetArgument(e_135, 0);
      g_135 = ATgetArgument(e_135, 1);
      d_135 :
      if(((ATgetType(g_135) == AT_LIST) && ((ATermList) g_135 != ATempty)))
        {
          h_135 = ATgetFirst((ATermList) g_135);
          i_135 = (ATerm) ATgetNext((ATermList) g_135);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_135)), not_null(h_135)), not_null(i_135));
        }
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
  ATerm x_135 = NULL,y_135 = NULL,z_135 = NULL,a_136 = NULL,b_136 = NULL;
  x_135 = t;
  v_135 :
  if(((ATgetType(x_135) == AT_LIST) && ((ATermList) x_135 != ATempty)))
    {
      y_135 = ATgetFirst((ATermList) x_135);
      b_136 = (ATerm) ATgetNext((ATermList) x_135);
      w_135 :
      if(match_cons(y_135, sym__2))
        {
          z_135 = ATgetArgument(y_135, 0);
          a_136 = ATgetArgument(y_135, 1);
          {
            ATerm f_136 = NULL,g_136 = NULL,m_136 = NULL,s_136 = NULL;
            ATerm t_28;
            t_28 = t;
            {
              ATerm h_136 = NULL;
              ATerm j_136 = NULL,k_136 = NULL,l_136 = NULL;
              t = not_null(a_136);
              {
                h_136 = t;
                {
                  t = SSL_explode_term(not_null(h_136));
                  {
                    j_136 = t;
                    q_135 :
                    if(match_cons(j_136, sym__2))
                      {
                        k_136 = ATgetArgument(j_136, 0);
                        l_136 = ATgetArgument(j_136, 1);
                        {
                          if(((f_136 != NULL) && (f_136 != k_136)))
                            _fail(k_136);
                          else
                            f_136 = k_136;
                          if(((g_136 != NULL) && (g_136 != l_136)))
                            _fail(l_136);
                          else
                            g_136 = l_136;
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
              ATerm u_28;
              u_28 = t;
              {
                ATerm n_136 = NULL;
                ATerm p_136 = NULL,q_136 = NULL,r_136 = NULL;
                t = not_null(z_135);
                {
                  n_136 = t;
                  {
                    t = SSL_explode_term(not_null(n_136));
                    {
                      p_136 = t;
                      t_135 :
                      if(match_cons(p_136, sym__2))
                        {
                          q_136 = ATgetArgument(p_136, 0);
                          r_136 = ATgetArgument(p_136, 1);
                          {
                            if(((f_136 != NULL) && (f_136 != q_136)))
                              _fail(q_136);
                            else
                              f_136 = q_136;
                            if(((m_136 != NULL) && (m_136 != r_136)))
                              _fail(r_136);
                            else
                              m_136 = r_136;
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
              t = u_28;
              {
                ATerm t_136 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_136), not_null(g_136));
                {
                  t = zip_1(t, _id);
                  {
                    t_136 = t;
                    if(((s_136 != NULL) && (s_136 != t_136)))
                      _fail(t_136);
                    else
                      s_136 = t_136;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_136), not_null(b_136));
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
  ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL,g_137 = NULL,h_137 = NULL;
  d_137 = t;
  b_137 :
  if(((ATgetType(d_137) == AT_LIST) && ((ATermList) d_137 != ATempty)))
    {
      e_137 = ATgetFirst((ATermList) d_137);
      h_137 = (ATerm) ATgetNext((ATermList) d_137);
      c_137 :
      if(match_cons(e_137, sym__2))
        {
          f_137 = ATgetArgument(e_137, 0);
          g_137 = ATgetArgument(e_137, 1);
          {
            ATerm j_137 = NULL;
            if(((f_137 != NULL) && (f_137 != g_137)))
              _fail(g_137);
            else
              f_137 = g_137;
            {
              if(((j_137 != NULL) && (j_137 != h_137)))
                _fail(h_137);
              else
                j_137 = h_137;
              t = not_null(j_137);
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
ATerm while_not_2 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm))
{
  ATerm l_137 (ATerm t)
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107(t);
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        {
          t = i_107(t);
          t = l_137(t);
        }
      }
    return(t);
  }
  t = l_137(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm))
{
  t = k_107(t);
  t = while_not_2(t, l_107, m_107);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm o_94 (ATerm))
{
  ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL;
  p_137 = t;
  o_137 :
  if(((ATgetType(p_137) == AT_LIST) && ((ATermList) p_137 != ATempty)))
    {
      q_137 = ATgetFirst((ATermList) p_137);
      r_137 = (ATerm) ATgetNext((ATermList) p_137);
      {
        t = o_94(t);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm u_137 = NULL;
            u_137 = t;
            if(((q_137 != NULL) && (q_137 != u_137)))
              _fail(u_137);
            else
              q_137 = u_137;
            return(t);
          }
          t = fetch_1(t, n_5);
        }
        t = not_null(r_137);
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
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_138 = NULL,b_138 = NULL,c_138 = NULL;
      a_138 = t;
      y_137 :
      if(match_cons(a_138, sym__2))
        {
          b_138 = ATgetArgument(a_138, 0);
          c_138 = ATgetArgument(a_138, 1);
          {
            t = not_null(b_138);
            {
              ATerm i_138 (ATerm t)
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
                    {
                      ATerm b_29 = t;
                      int c_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_5 (ATerm t)
                          {
                            t = not_null(c_138);
                            return(t);
                          }
                          t = HdMember_1(t, o_5);
                          t = i_138(t);
                          LocalPopChoice(c_29);
                        }
                      else
                        {
                          t = b_29;
                          t = Cons_2(t, _id, i_138);
                        }
                    }
                  }
                return(t);
              }
              t = i_138(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm f_138 = NULL;
          f_138 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_138));
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          ATerm d_29 = t;
          int e_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 (ATerm t)
              {
                ATerm f_29 = t;
                int g_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(g_29);
                  }
                else
                  {
                    t = f_29;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, s_5);
              LocalPopChoice(e_29);
            }
          else
            {
              t = d_29;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, p_5, q_5, r_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm e_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm n_138 (ATerm t)
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_82(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        {
          ATerm j_29 = t;
          int k_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_138 = NULL;
              ATerm l_29;
              l_29 = t;
              {
                ATerm m_138 = NULL;
                t = d_82(t);
                {
                  m_138 = t;
                  if(((l_138 != NULL) && (l_138 != m_138)))
                    _fail(m_138);
                  else
                    l_138 = m_138;
                }
              }
              t = l_29;
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    t = not_null(l_138);
                    return(t);
                  }
                  t = split_2(t, n_138, v_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = e_82(t, t_5, n_138, u_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, w_5, union_0, _id);
                }
              }
              LocalPopChoice(k_29);
            }
          else
            {
              t = j_29;
              {
                ATerm x_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, x_5, union_0, n_138);
              }
            }
        }
      }
    return(t);
  }
  t = n_138(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, y_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL;
  t_138 = t;
  r_138 :
  if(match_cons(t_138, sym_LRule_1))
    {
      u_138 = ATgetArgument(t_138, 0);
      s_138 :
      if(match_cons(u_138, sym_Rule_3))
        {
          v_138 = ATgetArgument(u_138, 0);
          w_138 = ATgetArgument(u_138, 1);
          x_138 = ATgetArgument(u_138, 2);
          {
            ATerm b_139 = NULL;
            ATerm c_139 = NULL;
            t = not_null(v_138);
            {
              t = tvars_0(t);
              {
                c_139 = t;
                if(((b_139 != NULL) && (b_139 != c_139)))
                  _fail(c_139);
                else
                  b_139 = c_139;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_139), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_138), not_null(w_138), not_null(x_138))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm k_103 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    t = bottomup_1(t, k_103);
    return(t);
  }
  t = _all(t, z_5);
  t = k_103(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm o_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(p_29);
        }
      else
        {
          t = o_29;
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
  ATerm h_139 = NULL,i_139 = NULL;
  h_139 = t;
  g_139 :
  if(match_cons(h_139, sym_Var_1))
    {
      i_139 = ATgetArgument(h_139, 0);
      t = not_null(i_139);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm o_139 = NULL,p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL;
  o_139 = t;
  m_139 :
  if(match_cons(o_139, sym__2))
    {
      p_139 = ATgetArgument(o_139, 0);
      q_139 = ATgetArgument(o_139, 1);
      n_139 :
      if(((ATgetType(q_139) == AT_LIST) && ((ATermList) q_139 != ATempty)))
        {
          r_139 = ATgetFirst((ATermList) q_139);
          s_139 = (ATerm) ATgetNext((ATermList) q_139);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_139), not_null(s_139));
        }
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
  ATerm a_140 = NULL,b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL,g_140 = NULL;
  a_140 = t;
  x_139 :
  if(match_cons(a_140, sym__2))
    {
      b_140 = ATgetArgument(a_140, 0);
      c_140 = ATgetArgument(a_140, 1);
      y_139 :
      if(((ATgetType(c_140) == AT_LIST) && ((ATermList) c_140 != ATempty)))
        {
          d_140 = ATgetFirst((ATermList) c_140);
          g_140 = (ATerm) ATgetNext((ATermList) c_140);
          z_139 :
          if(match_cons(d_140, sym__2))
            {
              e_140 = ATgetArgument(d_140, 0);
              f_140 = ATgetArgument(d_140, 1);
              {
                ATerm i_140 = NULL;
                if(((b_140 != NULL) && (b_140 != e_140)))
                  _fail(e_140);
                else
                  b_140 = e_140;
                {
                  if(((i_140 != NULL) && (i_140 != f_140)))
                    _fail(f_140);
                  else
                    i_140 = f_140;
                  t = not_null(i_140);
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
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  ATerm o_140 = NULL;
  ATerm q_140 = NULL,r_140 = NULL;
  o_140 = t;
  {
    ATerm s_140 = NULL;
    t = not_null(o_140);
    {
      ATerm t_140 = NULL;
      t = y_83(t);
      {
        s_140 = t;
        {
          if(((q_140 != NULL) && (q_140 != s_140)))
            _fail(s_140);
          else
            q_140 = s_140;
          {
            t = z_83(t);
            {
              t_140 = t;
              if(((r_140 != NULL) && (r_140 != t_140)))
                _fail(t_140);
              else
                r_140 = t_140;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_140), not_null(r_140));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm n_105 (ATerm))
{
  ATerm x_140 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_105(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = _all(t, x_140);
      }
    return(t);
  }
  t = x_140(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL;
  a_141 = t;
  z_140 :
  if(match_cons(a_141, sym__2))
    {
      b_141 = ATgetArgument(a_141, 0);
      c_141 = ATgetArgument(a_141, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_141)), not_null(b_141));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL,n_141 = NULL,o_141 = NULL,p_141 = NULL,q_141 = NULL;
  k_141 = t;
  h_141 :
  if(match_cons(k_141, sym__2))
    {
      l_141 = ATgetArgument(k_141, 0);
      o_141 = ATgetArgument(k_141, 1);
      i_141 :
      if(((ATgetType(l_141) == AT_LIST) && ((ATermList) l_141 != ATempty)))
        {
          m_141 = ATgetFirst((ATermList) l_141);
          n_141 = (ATerm) ATgetNext((ATermList) l_141);
          j_141 :
          if(((ATgetType(o_141) == AT_LIST) && ((ATermList) o_141 != ATempty)))
            {
              p_141 = ATgetFirst((ATermList) o_141);
              q_141 = (ATerm) ATgetNext((ATermList) o_141);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_141), not_null(p_141)), (ATerm) ATmakeAppl(sym__2, not_null(n_141), not_null(q_141)));
            }
          else
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
  ATerm a_142 = NULL,b_142 = NULL,c_142 = NULL;
  a_142 = t;
  x_141 :
  if(match_cons(a_142, sym__2))
    {
      b_142 = ATgetArgument(a_142, 0);
      c_142 = ATgetArgument(a_142, 1);
      y_141 :
      if(((ATermList) b_142 == ATempty))
        {
          z_141 :
          if(((ATermList) c_142 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm))
{
  ATerm e_142 (ATerm t)
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_97(t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        {
          t = i_97(t);
          {
            t = _2(t, k_97, e_142);
            t = j_97(t);
          }
        }
      }
    return(t);
  }
  t = e_142(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm m_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, m_97);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm j_142 = NULL,k_142 = NULL,l_142 = NULL,m_142 = NULL;
  j_142 = t;
  i_142 :
  if(match_cons(j_142, sym__2))
    {
      k_142 = ATgetArgument(j_142, 0);
      l_142 = ATgetArgument(j_142, 1);
      {
        ATerm o_142 = NULL;
        if(((o_142 != NULL) && (o_142 != l_142)))
          _fail(l_142);
        else
          o_142 = l_142;
      }
    }
  else
    {
      if(match_cons(j_142, sym__3))
        {
          k_142 = ATgetArgument(j_142, 0);
          l_142 = ATgetArgument(j_142, 1);
          m_142 = ATgetArgument(j_142, 2);
          {
            ATerm u_142 = NULL;
            ATerm v_142 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_142), not_null(l_142));
            {
              t = zip_1(t, _id);
              {
                v_142 = t;
                if(((u_142 != NULL) && (u_142 != v_142)))
                  _fail(v_142);
                else
                  u_142 = v_142;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_142), not_null(m_142));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm))
{
  ATerm b_143 = NULL,c_143 = NULL,d_143 = NULL;
  t = subs_args_0(t);
  {
    b_143 = t;
    a_143 :
    if(match_cons(b_143, sym__2))
      {
        c_143 = ATgetArgument(b_143, 0);
        d_143 = ATgetArgument(b_143, 1);
        {
          t = not_null(d_143);
          {
            ATerm c_6 (ATerm t)
            {
              ATerm d_6 (ATerm t)
              {
                t = not_null(c_143);
                return(t);
              }
              t = SubsVar_2(t, a_84, d_6);
              t = b_84(t);
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
ATerm substitute_1 (ATerm t, ATerm c_84 (ATerm))
{
  t = substitute_2(t, c_84, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm k_143 = NULL,m_143 = NULL,n_143 = NULL,o_143 = NULL;
  k_143 = t;
  i_143 :
  if(match_cons(k_143, sym_OpDecl_2))
    {
      m_143 = ATgetArgument(k_143, 0);
      n_143 = ATgetArgument(k_143, 1);
      j_143 :
      if(match_cons(n_143, sym_ConstType_1))
        {
          o_143 = ATgetArgument(n_143, 0);
          t = not_null(m_143);
        }
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
  ATerm t_143 = NULL,u_143 = NULL;
  t_143 = t;
  s_143 :
  if(match_cons(t_143, sym_Constructors_1))
    {
      u_143 = ATgetArgument(t_143, 0);
      {
        t = not_null(u_143);
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
  ATerm a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL;
  a_144 = t;
  y_143 :
  if(match_cons(a_144, sym_Overlay_3))
    {
      b_144 = ATgetArgument(a_144, 0);
      c_144 = ATgetArgument(a_144, 1);
      d_144 = ATgetArgument(a_144, 2);
      z_143 :
      if(((ATermList) c_144 == ATempty))
        {
          t = not_null(b_144);
        }
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
  ATerm k_144 = NULL,l_144 = NULL;
  k_144 = t;
  j_144 :
  if(match_cons(k_144, sym_Overlays_1))
    {
      l_144 = ATgetArgument(k_144, 0);
      {
        t = not_null(l_144);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(k_144, sym_Signature_1))
        {
          l_144 = ATgetArgument(k_144, 0);
          {
            t = not_null(l_144);
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
ATerm filter_1 (ATerm t, ATerm o_92 (ATerm))
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 (ATerm t)
            {
              t = filter_1(t, o_92);
              return(t);
            }
            t = Cons_2(t, o_92, e_6);
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            {
              ATerm s_144 = NULL,t_144 = NULL,u_144 = NULL;
              s_144 = t;
              r_144 :
              if(((ATgetType(s_144) == AT_LIST) && ((ATermList) s_144 != ATempty)))
                {
                  t_144 = ATgetFirst((ATermList) s_144);
                  u_144 = (ATerm) ATgetNext((ATermList) s_144);
                  {
                    t = not_null(u_144);
                    t = filter_1(t, o_92);
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
  ATerm b_145 = NULL,h_145 = NULL;
  ATerm a_30;
  a_30 = t;
  {
    ATerm g_145 = NULL;
    t = const_names_0(t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm c_145 = NULL,e_145 = NULL;
        ATerm b_30;
        b_30 = t;
        {
          ATerm d_145 = NULL;
          d_145 = t;
          if(((c_145 != NULL) && (c_145 != d_145)))
            _fail(d_145);
          else
            c_145 = d_145;
        }
        t = b_30;
        {
          ATerm f_145 = NULL;
          f_145 = t;
          if(((e_145 != NULL) && (e_145 != f_145)))
            _fail(f_145);
          else
            e_145 = f_145;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_145), (ATerm) ATmakeAppl(sym_Op_2, not_null(e_145), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, f_6);
      {
        g_145 = t;
        if(((b_145 != NULL) && (b_145 != g_145)))
          _fail(g_145);
        else
          b_145 = g_145;
      }
    }
  }
  t = a_30;
  {
    ATerm i_145 = NULL;
    i_145 = t;
    if(((h_145 != NULL) && (h_145 != i_145)))
      _fail(i_145);
    else
      h_145 = i_145;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_145), not_null(h_145));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm p_145 = NULL,q_145 = NULL,r_145 = NULL,s_145 = NULL;
  p_145 = t;
  o_145 :
  if(match_cons(p_145, sym__3))
    {
      q_145 = ATgetArgument(p_145, 0);
      r_145 = ATgetArgument(p_145, 1);
      s_145 = ATgetArgument(p_145, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_145))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(r_145))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(q_145))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm e_146 = NULL,f_146 = NULL,g_146 = NULL,h_146 = NULL,i_146 = NULL,j_146 = NULL,k_146 = NULL,l_146 = NULL,m_146 = NULL;
  e_146 = t;
  b_146 :
  if(match_cons(e_146, sym__2))
    {
      f_146 = ATgetArgument(e_146, 0);
      j_146 = ATgetArgument(e_146, 1);
      c_146 :
      if(match_cons(f_146, sym__3))
        {
          g_146 = ATgetArgument(f_146, 0);
          h_146 = ATgetArgument(f_146, 1);
          i_146 = ATgetArgument(f_146, 2);
          d_146 :
          if(match_cons(j_146, sym__3))
            {
              k_146 = ATgetArgument(j_146, 0);
              l_146 = ATgetArgument(j_146, 1);
              m_146 = ATgetArgument(j_146, 2);
              {
                ATerm t_146 = NULL,v_146 = NULL,x_146 = NULL;
                ATerm c_30;
                c_30 = t;
                {
                  ATerm u_146 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_146), not_null(k_146));
                  {
                    t = conc_0(t);
                    {
                      u_146 = t;
                      if(((t_146 != NULL) && (t_146 != u_146)))
                        _fail(u_146);
                      else
                        t_146 = u_146;
                    }
                  }
                }
                t = c_30;
                {
                  ATerm d_30;
                  d_30 = t;
                  {
                    ATerm w_146 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_146), not_null(l_146));
                    {
                      t = conc_0(t);
                      {
                        w_146 = t;
                        if(((v_146 != NULL) && (v_146 != w_146)))
                          _fail(w_146);
                        else
                          v_146 = w_146;
                      }
                    }
                  }
                  t = d_30;
                  {
                    ATerm y_146 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_146), not_null(m_146));
                    {
                      t = conc_0(t);
                      {
                        y_146 = t;
                        if(((x_146 != NULL) && (x_146 != y_146)))
                          _fail(y_146);
                        else
                          x_146 = y_146;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(t_146), not_null(v_146), not_null(x_146));
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
  ATerm g_147 = NULL,h_147 = NULL;
  g_147 = t;
  f_147 :
  if(match_cons(g_147, sym_Sorts_1))
    {
      h_147 = ATgetArgument(g_147, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(g_147, sym_Constructors_1))
        {
          h_147 = ATgetArgument(g_147, 0);
          t = not_null(h_147);
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
  ATerm s_147 = NULL,t_147 = NULL;
  s_147 = t;
  r_147 :
  if(match_cons(s_147, sym_Overlays_1))
    {
      t_147 = ATgetArgument(s_147, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(t_147), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(s_147, sym_Rules_1))
        {
          t_147 = ATgetArgument(s_147, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(t_147));
        }
      else
        {
          if(match_cons(s_147, sym_Strategies_1))
            {
              t_147 = ATgetArgument(s_147, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(t_147));
            }
          else
            {
              if(match_cons(s_147, sym_Signature_1))
                {
                  t_147 = ATgetArgument(s_147, 0);
                  {
                    ATerm y_147 = NULL;
                    ATerm z_147 = NULL;
                    t = not_null(t_147);
                    {
                      t = normalize_sigs_0(t);
                      {
                        z_147 = t;
                        if(((y_147 != NULL) && (y_147 != z_147)))
                          _fail(z_147);
                        else
                          y_147 = z_147;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(y_147), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm h_148 = NULL,i_148 = NULL;
  h_148 = t;
  g_148 :
  if(match_cons(h_148, sym_Specification_1))
    {
      i_148 = ATgetArgument(h_148, 0);
      t = not_null(i_148);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm j_103 (ATerm))
{
  t = j_103(t);
  {
    ATerm g_6 (ATerm t)
    {
      t = topdown_1(t, j_103);
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
      ATerm n_148 = NULL,o_148 = NULL;
      n_148 = t;
      m_148 :
      if(match_cons(n_148, sym_DefaultVarDec_1))
        {
          o_148 = ATgetArgument(n_148, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(o_148), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_15), term_i_15));
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
          t = term_q_24;
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
    ATerm e_30;
    e_30 = t;
    t = spec_use_def_0(t);
    t = e_30;
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
ATerm _2 (ATerm t, ATerm w_68 (ATerm), ATerm x_68 (ATerm))
{
  ATerm x_148 = NULL,y_148 = NULL,z_148 = NULL;
  x_148 = t;
  w_148 :
  if(match_cons(x_148, sym__2))
    {
      y_148 = ATgetArgument(x_148, 0);
      z_148 = ATgetArgument(x_148, 1);
      {
        ATerm d_149 = NULL,f_149 = NULL;
        ATerm e_149 = NULL;
        t = SSLgetAnnotations(not_null(x_148));
        {
          e_149 = t;
          if(((d_149 != NULL) && (d_149 != e_149)))
            _fail(e_149);
          else
            d_149 = e_149;
        }
        {
          t = not_null(y_148);
          {
            ATerm h_149 = NULL;
            t = w_68(t);
            {
              f_149 = t;
              {
                t = not_null(z_148);
                {
                  ATerm j_149 = NULL;
                  t = x_68(t);
                  {
                    h_149 = t;
                    {
                      ATerm k_149 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_149), not_null(h_149)), not_null(d_149));
                      {
                        k_149 = t;
                        if(((j_149 != NULL) && (j_149 != k_149)))
                          _fail(k_149);
                        else
                          j_149 = k_149;
                      }
                      t = not_null(j_149);
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
  ATerm s_149 = NULL;
  ATerm f_30;
  f_30 = t;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm t_149 = NULL,u_149 = NULL;
      t_149 = t;
      r_149 :
      if(match_cons(t_149, sym_Program_1))
        {
          u_149 = ATgetArgument(t_149, 0);
          if(((s_149 != NULL) && (s_149 != u_149)))
            _fail(u_149);
          else
            s_149 = u_149;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, n_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_30), not_null(s_149)), term_g_30));
      {
        t = printnl_0(t);
        {
          t = term_d_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm y_149 = NULL,z_149 = NULL,a_150 = NULL;
  y_149 = t;
  x_149 :
  if(match_cons(y_149, sym__2))
    {
      z_149 = ATgetArgument(y_149, 0);
      a_150 = ATgetArgument(y_149, 1);
      {
        ATerm i_30;
        i_30 = t;
        t = SSL_printnl(not_null(z_149), not_null(a_150));
        t = i_30;
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
  ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL;
  g_150 = t;
  f_150 :
  if(match_cons(g_150, sym__2))
    {
      h_150 = ATgetArgument(g_150, 0);
      i_150 = ATgetArgument(g_150, 1);
      {
        t = not_null(h_150);
        {
          ATerm o_6 (ATerm t)
          {
            t = not_null(i_150);
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
ATerm debug_1 (ATerm t, ATerm l_89 (ATerm))
{
  ATerm j_30;
  j_30 = t;
  {
    ATerm o_150 = NULL,q_150 = NULL;
    ATerm k_30;
    k_30 = t;
    {
      ATerm p_150 = NULL;
      t = l_89(t);
      {
        p_150 = t;
        if(((o_150 != NULL) && (o_150 != p_150)))
          _fail(p_150);
        else
          o_150 = p_150;
      }
    }
    t = k_30;
    {
      ATerm r_150 = NULL;
      r_150 = t;
      if(((q_150 != NULL) && (q_150 != r_150)))
        _fail(r_150);
      else
        q_150 = r_150;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_150)), not_null(o_150)));
        t = printnl_0(t);
      }
    }
  }
  t = j_30;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_150 = NULL;
  v_150 = t;
  t = SSL_is_string(not_null(v_150));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_6);
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm e_151 = NULL,f_151 = NULL,g_151 = NULL;
              e_151 = t;
              d_151 :
              if(match_cons(e_151, sym_Path_1))
                {
                  f_151 = ATgetArgument(e_151, 0);
                  t = not_null(f_151);
                }
              else
                {
                  if(match_cons(e_151, sym_Var_1))
                    {
                      f_151 = ATgetArgument(e_151, 0);
                      {
                        t = not_null(f_151);
                        {
                          ATerm p_30 = t;
                          int q_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_30);
                            }
                          else
                            {
                              t = p_30;
                              {
                                ATerm q_6 (ATerm t)
                                {
                                  t = term_r_30;
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
                      if(match_cons(e_151, sym_Prefix_2))
                        {
                          f_151 = ATgetArgument(e_151, 0);
                          g_151 = ATgetArgument(e_151, 1);
                          {
                            ATerm l_151 = NULL,n_151 = NULL;
                            ATerm s_30;
                            s_30 = t;
                            {
                              ATerm m_151 = NULL;
                              t = not_null(f_151);
                              {
                                t = eval_config_0(t);
                                {
                                  m_151 = t;
                                  if(((l_151 != NULL) && (l_151 != m_151)))
                                    _fail(m_151);
                                  else
                                    l_151 = m_151;
                                }
                              }
                            }
                            t = s_30;
                            {
                              ATerm o_151 = NULL;
                              t = not_null(g_151);
                              {
                                t = eval_config_0(t);
                                {
                                  o_151 = t;
                                  if(((n_151 != NULL) && (n_151 != o_151)))
                                    _fail(o_151);
                                  else
                                    n_151 = o_151;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_151), not_null(n_151));
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
  ATerm w_151 = NULL;
  w_151 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_30, not_null(w_151));
    {
      t = table_get_0(t);
      {
        ATerm r_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_30;
            u_30 = t;
            {
              ATerm y_151 = NULL;
              ATerm z_151 = NULL;
              z_151 = t;
              if(((y_151 != NULL) && (y_151 != z_151)))
                _fail(z_151);
              else
                y_151 = z_151;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_30, not_null(w_151), not_null(y_151));
                t = table_put_0(t);
              }
            }
            t = u_30;
          }
          return(t);
        }
        t = try_1(t, r_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm v_30;
    v_30 = t;
    {
      ATerm d_152 = NULL;
      ATerm e_152 = NULL;
      t = term_w_30;
      {
        t = get_config_0(t);
        {
          e_152 = t;
          if(((d_152 != NULL) && (d_152 != e_152)))
            _fail(e_152);
          else
            d_152 = e_152;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_152), term_x_30);
        t = geq_0(t);
      }
    }
    t = v_30;
    t = v_86(t);
    return(t);
  }
  t = try_1(t, s_6);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, term_y_30));
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
  ATerm h_152 = NULL;
  h_152 = t;
  t = SSL_TicksToSeconds(not_null(h_152));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm m_152 = NULL,n_152 = NULL,o_152 = NULL;
  m_152 = t;
  l_152 :
  if(match_cons(m_152, sym__2))
    {
      n_152 = ATgetArgument(m_152, 0);
      o_152 = ATgetArgument(m_152, 1);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_152), not_null(o_152));
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = SSL_addr(not_null(n_152), not_null(o_152));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_93 (ATerm), ATerm j_93 (ATerm))
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_93(t);
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm v_152 = NULL,w_152 = NULL,x_152 = NULL;
        v_152 = t;
        u_152 :
        if(((ATgetType(v_152) == AT_LIST) && ((ATermList) v_152 != ATempty)))
          {
            w_152 = ATgetFirst((ATermList) v_152);
            x_152 = (ATerm) ATgetNext((ATermList) v_152);
            {
              ATerm a_153 = NULL;
              ATerm b_153 = NULL;
              t = not_null(x_152);
              {
                t = foldr_2(t, i_93, j_93);
                {
                  b_153 = t;
                  if(((a_153 != NULL) && (a_153 != b_153)))
                    _fail(b_153);
                  else
                    a_153 = b_153;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_152), not_null(a_153));
                t = j_93(t);
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
ATerm crush_2 (ATerm t, ATerm x_94 (ATerm), ATerm y_94 (ATerm))
{
  ATerm i_153 = NULL;
  ATerm k_153 = NULL;
  i_153 = t;
  {
    ATerm l_153 = NULL;
    ATerm n_153 = NULL,o_153 = NULL,p_153 = NULL;
    t = not_null(i_153);
    {
      l_153 = t;
      {
        t = SSL_explode_term(not_null(l_153));
        {
          n_153 = t;
          h_153 :
          if(match_cons(n_153, sym__2))
            {
              o_153 = ATgetArgument(n_153, 0);
              p_153 = ATgetArgument(n_153, 1);
              if(((k_153 != NULL) && (k_153 != p_153)))
                _fail(p_153);
              else
                k_153 = p_153;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_153);
      t = foldr_2(t, x_94, y_94);
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
  ATerm v_153 = NULL,w_153 = NULL,x_153 = NULL;
  v_153 = t;
  u_153 :
  if(match_cons(v_153, sym__2))
    {
      w_153 = ATgetArgument(v_153, 0);
      x_153 = ATgetArgument(v_153, 1);
      {
        ATerm d_31;
        d_31 = t;
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_153), not_null(x_153));
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
              t = SSL_gtr(not_null(w_153), not_null(x_153));
            }
        }
        t = d_31;
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
  ATerm d_154 = NULL;
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_154 = NULL,f_154 = NULL,g_154 = NULL;
      e_154 = t;
      c_154 :
      if(match_cons(e_154, sym__2))
        {
          f_154 = ATgetArgument(e_154, 0);
          g_154 = ATgetArgument(e_154, 1);
          {
            if(((d_154 != NULL) && (d_154 != f_154)))
              _fail(f_154);
            else
              d_154 = f_154;
            if(((d_154 != NULL) && (d_154 != g_154)))
              _fail(g_154);
            else
              d_154 = g_154;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm i_31;
    i_31 = t;
    {
      ATerm j_154 = NULL;
      ATerm k_154 = NULL;
      t = term_w_30;
      {
        t = get_config_0(t);
        {
          k_154 = t;
          if(((j_154 != NULL) && (j_154 != k_154)))
            _fail(k_154);
          else
            j_154 = k_154;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_154), term_d_18);
        t = geq_0(t);
      }
    }
    t = i_31;
    t = u_86(t);
    return(t);
  }
  t = try_1(t, u_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm o_154 = NULL,q_154 = NULL;
    ATerm j_31;
    j_31 = t;
    {
      ATerm p_154 = NULL;
      t = run_time_0(t);
      {
        p_154 = t;
        if(((o_154 != NULL) && (o_154 != p_154)))
          _fail(p_154);
        else
          o_154 = p_154;
      }
    }
    t = j_31;
    {
      ATerm r_154 = NULL;
      t = term_k_31;
      {
        t = get_config_0(t);
        {
          r_154 = t;
          if(((q_154 != NULL) && (q_154 != r_154)))
            _fail(r_154);
          else
            q_154 = r_154;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_31), not_null(o_154)), term_l_31), not_null(q_154)));
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
  ATerm w_154 = NULL,x_154 = NULL,y_154 = NULL;
  w_154 = t;
  v_154 :
  if(match_cons(w_154, sym__2))
    {
      x_154 = ATgetArgument(w_154, 0);
      y_154 = ATgetArgument(w_154, 1);
      t = SSL_WriteToTextFile(not_null(x_154), not_null(y_154));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_155 = NULL,f_155 = NULL,g_155 = NULL;
  e_155 = t;
  d_155 :
  if(match_cons(e_155, sym__2))
    {
      f_155 = ATgetArgument(e_155, 0);
      g_155 = ATgetArgument(e_155, 1);
      t = SSL_WriteToBinaryFile(not_null(f_155), not_null(g_155));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_155 = NULL;
  ATerm n_31;
  n_31 = t;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 (ATerm t)
          {
            ATerm p_155 = NULL,q_155 = NULL;
            p_155 = t;
            l_155 :
            if(match_cons(p_155, sym_Output_1))
              {
                q_155 = ATgetArgument(p_155, 0);
                if(((o_155 != NULL) && (o_155 != q_155)))
                  _fail(q_155);
                else
                  o_155 = q_155;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_6);
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          {
            ATerm r_155 = NULL;
            t = term_r_31;
            {
              r_155 = t;
              if(((o_155 != NULL) && (o_155 != r_155)))
                _fail(r_155);
              else
                o_155 = r_155;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_6, _id);
  }
  t = n_31;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm z_6 (ATerm t)
      {
        t = not_null(o_155);
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
              ATerm s_155 = NULL;
              s_155 = t;
              n_155 :
              if(!(match_cons(s_155, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm v_88 (ATerm))
{
  ATerm y_155 = NULL,a_156 = NULL,b_156 = NULL,c_156 = NULL;
  ATerm u_31;
  u_31 = t;
  t = dtime_0(t);
  t = u_31;
  {
    t = v_88(t);
    {
      ATerm v_31;
      v_31 = t;
      {
        ATerm z_155 = NULL;
        t = dtime_0(t);
        {
          z_155 = t;
          if(((y_155 != NULL) && (y_155 != z_155)))
            _fail(z_155);
          else
            y_155 = z_155;
        }
      }
      t = v_31;
      {
        a_156 = t;
        x_155 :
        if(match_cons(a_156, sym__2))
          {
            b_156 = ATgetArgument(a_156, 0);
            c_156 = ATgetArgument(a_156, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_156)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_155))), not_null(c_156));
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
  ATerm i_156 = NULL;
  i_156 = t;
  t = SSL_ReadFromFile(not_null(i_156));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm))
{
  ATerm n_156 = NULL,p_156 = NULL;
  ATerm c_32;
  c_32 = t;
  {
    ATerm o_156 = NULL;
    t = w_91(t);
    {
      o_156 = t;
      if(((n_156 != NULL) && (n_156 != o_156)))
        _fail(o_156);
      else
        n_156 = o_156;
    }
  }
  t = c_32;
  {
    ATerm q_156 = NULL;
    t = x_91(t);
    {
      q_156 = t;
      if(((p_156 != NULL) && (p_156 != q_156)))
        _fail(q_156);
      else
        p_156 = q_156;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_156), not_null(p_156));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_156 = NULL;
  ATerm d_32;
  d_32 = t;
  {
    ATerm e_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 (ATerm t)
        {
          ATerm x_156 = NULL,y_156 = NULL;
          x_156 = t;
          u_156 :
          if(match_cons(x_156, sym_Input_1))
            {
              y_156 = ATgetArgument(x_156, 0);
              if(((w_156 != NULL) && (w_156 != y_156)))
                _fail(y_156);
              else
                w_156 = y_156;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_7);
        LocalPopChoice(h_32);
      }
    else
      {
        t = e_32;
        {
          ATerm z_156 = NULL;
          t = term_i_32;
          {
            z_156 = t;
            if(((w_156 != NULL) && (w_156 != z_156)))
              _fail(z_156);
            else
              w_156 = z_156;
          }
        }
      }
  }
  t = d_32;
  {
    ATerm d_7 (ATerm t)
    {
      t = not_null(w_156);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_157 = NULL;
  g_157 = t;
  f_157 :
  if(match_cons(g_157, sym_Version_0))
    {
      ATerm i_157 = NULL,k_157 = NULL;
      ATerm j_32;
      j_32 = t;
      {
        ATerm j_157 = NULL;
        t = SSLgetAnnotations(not_null(g_157));
        {
          j_157 = t;
          if(((i_157 != NULL) && (i_157 != j_157)))
            _fail(j_157);
          else
            i_157 = j_157;
        }
      }
      t = j_32;
      {
        ATerm l_157 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_157));
        {
          l_157 = t;
          if(((k_157 != NULL) && (k_157 != l_157)))
            _fail(l_157);
          else
            k_157 = l_157;
        }
        t = not_null(k_157);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_88 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_7);
  t = t_88(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm r_157 = NULL;
  r_157 = t;
  t = SSL_table_create(not_null(r_157));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm v_157 = NULL;
  v_157 = t;
  {
    ATerm o_32;
    o_32 = t;
    {
      t = term_p_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, not_null(v_157));
          t = table_put_0(t);
        }
      }
    }
    t = o_32;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_157 = NULL;
  z_157 = t;
  t = SSL_string_to_int(not_null(z_157));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm h_158 = NULL,i_158 = NULL,j_158 = NULL,k_158 = NULL,l_158 = NULL;
  h_158 = t;
  f_158 :
  if(match_string(h_158, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(h_158) == AT_LIST) && ((ATermList) h_158 != ATempty)))
        {
          i_158 = ATgetFirst((ATermList) h_158);
          j_158 = (ATerm) ATgetNext((ATermList) h_158);
          g_158 :
          if(((ATgetType(j_158) == AT_LIST) && ((ATermList) j_158 != ATempty)))
            {
              k_158 = ATgetFirst((ATermList) j_158);
              l_158 = (ATerm) ATgetNext((ATermList) j_158);
              {
                ATerm p_158 = NULL;
                ATerm r_32;
                r_32 = t;
                {
                  t = not_null(i_158);
                  t = n_0(t);
                }
                t = r_32;
                {
                  ATerm q_158 = NULL;
                  t = not_null(k_158);
                  {
                    t = o_0(t);
                    {
                      q_158 = t;
                      if(((p_158 != NULL) && (p_158 != q_158)))
                        _fail(q_158);
                      else
                        p_158 = q_158;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_158)), not_null(p_158));
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
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7 (ATerm t)
      {
        ATerm i_159 = NULL;
        i_159 = t;
        u_158 :
        if(!(match_string(i_159, "-i")))
          {
            if(!(match_string(i_159, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        ATerm l_159 = NULL;
        ATerm u_32;
        u_32 = t;
        {
          ATerm j_159 = NULL;
          ATerm k_159 = NULL;
          k_159 = t;
          if(((j_159 != NULL) && (j_159 != k_159)))
            _fail(k_159);
          else
            j_159 = k_159;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_v_32, not_null(j_159));
            t = set_config_0(t);
          }
        }
        t = u_32;
        {
          ATerm m_159 = NULL;
          m_159 = t;
          if(((l_159 != NULL) && (l_159 != m_159)))
            _fail(m_159);
          else
            l_159 = m_159;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_159));
        }
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        t = term_w_32;
        return(t);
      }
      t = ArgOption_3(t, f_7, g_7, h_7);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              ATerm n_159 = NULL;
              n_159 = t;
              x_158 :
              if(!(match_string(n_159, "-o")))
                {
                  if(!(match_string(n_159, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              ATerm q_159 = NULL;
              ATerm z_32;
              z_32 = t;
              {
                ATerm o_159 = NULL;
                ATerm p_159 = NULL;
                p_159 = t;
                if(((o_159 != NULL) && (o_159 != p_159)))
                  _fail(p_159);
                else
                  o_159 = p_159;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_33, not_null(o_159));
                  t = set_config_0(t);
                }
              }
              t = z_32;
              {
                ATerm r_159 = NULL;
                r_159 = t;
                if(((q_159 != NULL) && (q_159 != r_159)))
                  _fail(r_159);
                else
                  q_159 = r_159;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_159));
              }
              return(t);
            }
            ATerm k_7 (ATerm t)
            {
              t = term_b_33;
              return(t);
            }
            t = ArgOption_3(t, i_7, j_7, k_7);
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
                  ATerm l_7 (ATerm t)
                  {
                    ATerm s_159 = NULL;
                    s_159 = t;
                    b_159 :
                    if(!(match_string(s_159, "-S")))
                      {
                        if(!(match_string(s_159, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_7 (ATerm t)
                  {
                    t = term_e_33;
                    t = set_config_0(t);
                    t = term_f_33;
                    return(t);
                  }
                  ATerm n_7 (ATerm t)
                  {
                    t = term_g_33;
                    return(t);
                  }
                  t = Option_3(t, l_7, m_7, n_7);
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
                        ATerm o_7 (ATerm t)
                        {
                          ATerm t_159 = NULL;
                          t_159 = t;
                          c_159 :
                          if(!(match_string(t_159, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_7 (ATerm t)
                        {
                          ATerm w_159 = NULL;
                          ATerm j_33;
                          j_33 = t;
                          {
                            ATerm u_159 = NULL;
                            ATerm v_159 = NULL;
                            t = string_to_int_0(t);
                            {
                              v_159 = t;
                              if(((u_159 != NULL) && (u_159 != v_159)))
                                _fail(v_159);
                              else
                                u_159 = v_159;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_30, not_null(u_159));
                              t = set_config_0(t);
                            }
                          }
                          t = j_33;
                          {
                            ATerm x_159 = NULL;
                            x_159 = t;
                            if(((w_159 != NULL) && (w_159 != x_159)))
                              _fail(x_159);
                            else
                              w_159 = x_159;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_159));
                          }
                          return(t);
                        }
                        ATerm q_7 (ATerm t)
                        {
                          t = term_k_33;
                          return(t);
                        }
                        t = ArgOption_3(t, o_7, p_7, q_7);
                        LocalPopChoice(i_33);
                      }
                    else
                      {
                        t = h_33;
                        {
                          ATerm l_33 = t;
                          int m_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_7 (ATerm t)
                              {
                                ATerm y_159 = NULL;
                                y_159 = t;
                                f_159 :
                                if(!(match_string(y_159, "-v")))
                                  {
                                    if(!(match_string(y_159, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm s_7 (ATerm t)
                              {
                                t = term_o_33;
                                t = set_config_0(t);
                                t = term_p_33;
                                return(t);
                              }
                              ATerm t_7 (ATerm t)
                              {
                                t = term_q_33;
                                return(t);
                              }
                              t = Option_3(t, r_7, s_7, t_7);
                              LocalPopChoice(m_33);
                            }
                          else
                            {
                              t = l_33;
                              {
                                ATerm r_33 = t;
                                int s_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_7 (ATerm t)
                                    {
                                      ATerm z_159 = NULL;
                                      z_159 = t;
                                      g_159 :
                                      if(!(match_string(z_159, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm v_7 (ATerm t)
                                    {
                                      t = term_u_33;
                                      t = set_config_0(t);
                                      t = term_v_33;
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      t = term_w_33;
                                      return(t);
                                    }
                                    t = Option_3(t, u_7, v_7, w_7);
                                    LocalPopChoice(s_33);
                                  }
                                else
                                  {
                                    t = r_33;
                                    {
                                      ATerm x_7 (ATerm t)
                                      {
                                        ATerm a_160 = NULL;
                                        a_160 = t;
                                        h_159 :
                                        if(!(match_string(a_160, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm y_7 (ATerm t)
                                      {
                                        t = term_y_33;
                                        t = set_config_0(t);
                                        t = term_z_33;
                                        return(t);
                                      }
                                      ATerm z_7 (ATerm t)
                                      {
                                        t = term_a_34;
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
  ATerm i_160 = NULL;
  i_160 = t;
  t = SSL_table_destroy(not_null(i_160));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm m_160 = NULL;
  m_160 = t;
  t = SSL_exit(not_null(m_160));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm q_160 = NULL;
  q_160 = t;
  t = SSL_implode_string(not_null(q_160));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_99 (ATerm))
{
  ATerm t_160 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_160);
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        {
          t = Nil_0(t);
          t = i_99(t);
        }
      }
    return(t);
  }
  t = t_160(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm w_160 = NULL,x_160 = NULL,y_160 = NULL;
        w_160 = t;
        v_160 :
        if(((ATgetType(w_160) == AT_LIST) && ((ATermList) w_160 != ATempty)))
          {
            x_160 = ATgetFirst((ATermList) w_160);
            y_160 = (ATerm) ATgetNext((ATermList) w_160);
            {
              t = not_null(x_160);
              {
                ATerm a_8 (ATerm t)
                {
                  t = not_null(y_160);
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
  ATerm e_161 = NULL;
  e_161 = t;
  t = SSL_explode_string(not_null(e_161));
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
ATerm long_description_1 (ATerm t, ATerm u_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_98 (ATerm))
{
  ATerm i_161 (ATerm t)
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
        t = Cons_2(t, u_98, i_161);
      }
    return(t);
  }
  t = i_161(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm p_161 = NULL,q_161 = NULL,r_161 = NULL;
  r_161 = t;
  o_161 :
  if(((ATgetType(r_161) == AT_LIST) && ((ATermList) r_161 != ATempty)))
    {
      p_161 = ATgetFirst((ATermList) r_161);
      q_161 = (ATerm) ATgetNext((ATermList) r_161);
      {
        ATerm u_161 = NULL;
        t = not_null(q_161);
        {
          ATerm h_34;
          h_34 = t;
          {
            ATerm v_161 = NULL,x_161 = NULL,z_161 = NULL;
            ATerm i_34;
            i_34 = t;
            {
              ATerm w_161 = NULL;
              t = m_0(t);
              {
                w_161 = t;
                if(((v_161 != NULL) && (v_161 != w_161)))
                  _fail(w_161);
                else
                  v_161 = w_161;
              }
            }
            t = i_34;
            {
              ATerm y_161 = NULL;
              t = not_null(p_161);
              {
                t = l_0(t);
                {
                  y_161 = t;
                  if(((x_161 != NULL) && (x_161 != y_161)))
                    _fail(y_161);
                  else
                    x_161 = y_161;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_161)), not_null(x_161));
                {
                  z_161 = t;
                  if(((u_161 != NULL) && (u_161 != z_161)))
                    _fail(z_161);
                  else
                    u_161 = z_161;
                }
              }
            }
          }
          t = h_34;
          {
            ATerm b_8 (ATerm t)
            {
              t = not_null(u_161);
              return(t);
            }
            t = reverse_acc_2(t, l_0, b_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) r_161 == ATempty))
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
ATerm short_description_1 (ATerm t, ATerm t_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm k_162 = NULL,l_162 = NULL;
  k_162 = t;
  j_162 :
  if(match_cons(k_162, sym_Program_1))
    {
      l_162 = ATgetArgument(k_162, 0);
      {
        ATerm o_162 = NULL,q_162 = NULL;
        ATerm p_162 = NULL;
        t = SSLgetAnnotations(not_null(k_162));
        {
          p_162 = t;
          if(((o_162 != NULL) && (o_162 != p_162)))
            _fail(p_162);
          else
            o_162 = p_162;
        }
        {
          t = not_null(l_162);
          {
            ATerm s_162 = NULL;
            t = k_70(t);
            {
              q_162 = t;
              {
                ATerm t_162 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_162)), not_null(o_162));
                {
                  t_162 = t;
                  if(((s_162 != NULL) && (s_162 != t_162)))
                    _fail(t_162);
                  else
                    s_162 = t_162;
                }
                t = not_null(s_162);
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
  ATerm c_163 = NULL;
  ATerm d_8 (ATerm t)
  {
    ATerm e_8 (ATerm t)
    {
      ATerm d_163 = NULL;
      d_163 = t;
      if(((c_163 != NULL) && (c_163 != d_163)))
        _fail(d_163);
      else
        c_163 = d_163;
      return(t);
    }
    t = Program_1(t, e_8);
    return(t);
  }
  t = option_defined_1(t, d_8);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm e_163 = NULL;
      ATerm f_163 = NULL;
      t = term_u_18;
      {
        ATerm g_8 (ATerm t)
        {
          t = not_null(c_163);
          return(t);
        }
        t = short_description_1(t, g_8);
        {
          t = concat_strings_0(t);
          {
            f_163 = t;
            if(((e_163 != NULL) && (e_163 != f_163)))
              _fail(f_163);
            else
              e_163 = f_163;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(e_163)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, term_j_34));
      {
        t = printnl_0(t);
        {
          t = term_m_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_8 (ATerm t)
                {
                  ATerm g_163 = NULL;
                  g_163 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_163)), term_n_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_8);
                {
                  ATerm i_8 (ATerm t)
                  {
                    ATerm i_163 = NULL;
                    ATerm j_163 = NULL;
                    t = term_u_18;
                    {
                      ATerm j_8 (ATerm t)
                      {
                        t = not_null(c_163);
                        return(t);
                      }
                      t = long_description_1(t, j_8);
                      {
                        t = concat_strings_0(t);
                        {
                          j_163 = t;
                          if(((i_163 != NULL) && (i_163 != j_163)))
                            _fail(j_163);
                          else
                            i_163 = j_163;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_163)), term_o_34));
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
ATerm Undefined_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm u_163 = NULL,v_163 = NULL;
  u_163 = t;
  t_163 :
  if(match_cons(u_163, sym_Undefined_1))
    {
      v_163 = ATgetArgument(u_163, 0);
      {
        ATerm y_163 = NULL,a_164 = NULL;
        ATerm z_163 = NULL;
        t = SSLgetAnnotations(not_null(u_163));
        {
          z_163 = t;
          if(((y_163 != NULL) && (y_163 != z_163)))
            _fail(z_163);
          else
            y_163 = z_163;
        }
        {
          t = not_null(v_163);
          {
            ATerm c_164 = NULL;
            t = l_70(t);
            {
              a_164 = t;
              {
                ATerm d_164 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_164)), not_null(y_163));
                {
                  d_164 = t;
                  if(((c_164 != NULL) && (c_164 != d_164)))
                    _fail(d_164);
                  else
                    c_164 = d_164;
                }
                t = not_null(c_164);
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
ATerm fetch_1 (ATerm t, ATerm c_99 (ATerm))
{
  ATerm i_164 (ATerm t)
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_99, _id);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = Cons_2(t, _id, i_164);
      }
    return(t);
  }
  t = i_164(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_86 (ATerm))
{
  t = fetch_1(t, s_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_164 = NULL;
  o_164 = t;
  n_164 :
  if(match_cons(o_164, sym_Help_0))
    {
      ATerm q_164 = NULL,s_164 = NULL;
      ATerm r_34;
      r_34 = t;
      {
        ATerm r_164 = NULL;
        t = SSLgetAnnotations(not_null(o_164));
        {
          r_164 = t;
          if(((q_164 != NULL) && (q_164 != r_164)))
            _fail(r_164);
          else
            q_164 = r_164;
        }
      }
      t = r_34;
      {
        ATerm t_164 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_164));
        {
          t_164 = t;
          if(((s_164 != NULL) && (s_164 != t_164)))
            _fail(t_164);
          else
            s_164 = t_164;
        }
        t = not_null(s_164);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_107 (ATerm))
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_107(t);
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_164 = NULL,a_165 = NULL,b_165 = NULL;
  z_164 = t;
  y_164 :
  if(match_cons(z_164, sym__2))
    {
      a_165 = ATgetArgument(z_164, 0);
      b_165 = ATgetArgument(z_164, 1);
      t = SSL_table_get(not_null(a_165), not_null(b_165));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_165 = NULL,j_165 = NULL,k_165 = NULL,l_165 = NULL;
  i_165 = t;
  h_165 :
  if(match_cons(i_165, sym__3))
    {
      j_165 = ATgetArgument(i_165, 0);
      k_165 = ATgetArgument(i_165, 1);
      l_165 = ATgetArgument(i_165, 2);
      {
        ATerm u_34;
        u_34 = t;
        {
          ATerm p_165 = NULL;
          ATerm q_165 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_165), not_null(k_165));
          {
            ATerm v_34 = t;
            int w_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_34);
              }
            else
              {
                t = v_34;
                t = (ATerm) ATempty;
              }
            {
              q_165 = t;
              if(((p_165 != NULL) && (p_165 != q_165)))
                _fail(q_165);
              else
                p_165 = q_165;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_165), not_null(k_165), (ATerm) ATinsert(CheckATermList(not_null(p_165)), not_null(l_165)));
            t = table_put_0(t);
          }
        }
        t = u_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm u_165 = NULL;
  ATerm v_165 = NULL;
  t = term_u_18;
  {
    t = y_85(t);
    {
      v_165 = t;
      if(((u_165 != NULL) && (u_165 != v_165)))
        _fail(v_165);
      else
        u_165 = v_165;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_34, term_l_34, not_null(u_165));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm b_166 = NULL,c_166 = NULL,d_166 = NULL;
  b_166 = t;
  a_166 :
  if(match_string(b_166, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(b_166) == AT_LIST) && ((ATermList) b_166 != ATempty)))
        {
          c_166 = ATgetFirst((ATermList) b_166);
          d_166 = (ATerm) ATgetNext((ATermList) b_166);
          {
            ATerm g_166 = NULL;
            ATerm x_34;
            x_34 = t;
            {
              t = not_null(c_166);
              t = c_0(t);
            }
            t = x_34;
            {
              ATerm h_166 = NULL;
              t = term_u_18;
              {
                t = d_0(t);
                {
                  h_166 = t;
                  if(((g_166 != NULL) && (g_166 != h_166)))
                    _fail(h_166);
                  else
                    g_166 = h_166;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_166)), not_null(g_166));
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
    ATerm n_166 = NULL;
    n_166 = t;
    m_166 :
    if(!(match_string(n_166, "--help")))
      {
        if(!(match_string(n_166, "-h")))
          {
            if(!(match_string(n_166, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    t = term_y_34;
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = term_z_34;
    return(t);
  }
  t = Option_3(t, k_8, l_8, m_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_166 = NULL,r_166 = NULL,s_166 = NULL;
  q_166 = t;
  p_166 :
  if(((ATgetType(q_166) == AT_LIST) && ((ATermList) q_166 != ATempty)))
    {
      r_166 = ATgetFirst((ATermList) q_166);
      s_166 = (ATerm) ATgetNext((ATermList) q_166);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_166)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_166)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_80 (ATerm), ATerm c_80 (ATerm))
{
  ATerm d_167 = NULL,e_167 = NULL,f_167 = NULL;
  d_167 = t;
  c_167 :
  if(((ATgetType(d_167) == AT_LIST) && ((ATermList) d_167 != ATempty)))
    {
      e_167 = ATgetFirst((ATermList) d_167);
      f_167 = (ATerm) ATgetNext((ATermList) d_167);
      {
        ATerm j_167 = NULL,l_167 = NULL;
        ATerm k_167 = NULL;
        t = SSLgetAnnotations(not_null(d_167));
        {
          k_167 = t;
          if(((j_167 != NULL) && (j_167 != k_167)))
            _fail(k_167);
          else
            j_167 = k_167;
        }
        {
          t = not_null(e_167);
          {
            ATerm n_167 = NULL;
            t = b_80(t);
            {
              l_167 = t;
              {
                t = not_null(f_167);
                {
                  ATerm p_167 = NULL;
                  t = c_80(t);
                  {
                    n_167 = t;
                    {
                      ATerm q_167 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_167)), not_null(l_167)), not_null(j_167));
                      {
                        q_167 = t;
                        if(((p_167 != NULL) && (p_167 != q_167)))
                          _fail(q_167);
                        else
                          p_167 = q_167;
                      }
                      t = not_null(p_167);
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
  ATerm a_168 = NULL;
  a_168 = t;
  z_167 :
  if(((ATermList) a_168 == ATempty))
    {
      {
        ATerm c_168 = NULL,e_168 = NULL;
        ATerm a_35;
        a_35 = t;
        {
          ATerm d_168 = NULL;
          t = SSLgetAnnotations(not_null(a_168));
          {
            d_168 = t;
            if(((c_168 != NULL) && (c_168 != d_168)))
              _fail(d_168);
            else
              c_168 = d_168;
          }
        }
        t = a_35;
        {
          ATerm f_168 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(c_168));
          {
            f_168 = t;
            if(((e_168 != NULL) && (e_168 != f_168)))
              _fail(f_168);
            else
              e_168 = f_168;
          }
          t = not_null(e_168);
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
  ATerm l_168 = NULL,m_168 = NULL,n_168 = NULL;
  l_168 = t;
  k_168 :
  if(match_cons(l_168, sym__2))
    {
      m_168 = ATgetArgument(l_168, 0);
      n_168 = ATgetArgument(l_168, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_30, not_null(m_168), not_null(n_168));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm b_35;
  b_35 = t;
  {
    ATerm n_8 (ATerm t)
    {
      t = term_c_35;
      t = w_85(t);
      return(t);
    }
    t = try_1(t, n_8);
  }
  t = b_35;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm v_168 = NULL;
      ATerm d_35;
      d_35 = t;
      {
        ATerm t_168 = NULL;
        ATerm u_168 = NULL;
        u_168 = t;
        if(((t_168 != NULL) && (t_168 != u_168)))
          _fail(u_168);
        else
          t_168 = u_168;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_31, not_null(t_168));
          t = set_config_0(t);
        }
      }
      t = d_35;
      {
        ATerm w_168 = NULL;
        w_168 = t;
        if(((v_168 != NULL) && (v_168 != w_168)))
          _fail(w_168);
        else
          v_168 = w_168;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_168));
      }
      return(t);
    }
    ATerm p_8 (ATerm t)
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_35);
            }
          else
            {
              t = g_35;
              {
                t = w_85(t);
                t = Cons_2(t, _id, p_8);
              }
            }
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
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
  ATerm c_169 = NULL,d_169 = NULL,e_169 = NULL;
  ATerm i_35;
  i_35 = t;
  {
    ATerm f_169 = NULL,g_169 = NULL,h_169 = NULL,i_169 = NULL;
    f_169 = t;
    b_169 :
    if(match_cons(f_169, sym__3))
      {
        g_169 = ATgetArgument(f_169, 0);
        h_169 = ATgetArgument(f_169, 1);
        i_169 = ATgetArgument(f_169, 2);
        {
          if(((c_169 != NULL) && (c_169 != g_169)))
            _fail(g_169);
          else
            c_169 = g_169;
          {
            if(((d_169 != NULL) && (d_169 != h_169)))
              _fail(h_169);
            else
              d_169 = h_169;
            {
              if(((e_169 != NULL) && (e_169 != i_169)))
                _fail(i_169);
              else
                e_169 = i_169;
              t = SSL_table_put(not_null(c_169), not_null(d_169), not_null(e_169));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_85 (ATerm))
{
  ATerm m_169 = NULL;
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
          t = v_85(t);
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
                  ATerm n_169 = NULL;
                  n_169 = t;
                  if(((m_169 != NULL) && (m_169 != n_169)))
                    _fail(n_169);
                  else
                    m_169 = n_169;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_169)), term_r_35));
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
          t = term_k_34;
          t = table_destroy_0(t);
        }
        t = s_35;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_88(t);
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
      t = k_88(t);
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_88);
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
                    t = apply_strategy_1(t, h_88);
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
ATerm iowrap_3 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  ATerm v_8 (ATerm t)
  {
    ATerm w_8 (ATerm t)
    {
      ATerm z_35;
      z_35 = t;
      {
        ATerm q_169 = NULL;
        ATerm r_169 = NULL;
        t = term_k_31;
        {
          t = get_config_0(t);
          {
            r_169 = t;
            if(((q_169 != NULL) && (q_169 != r_169)))
              _fail(r_169);
            else
              q_169 = r_169;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(q_169)));
          t = printnl_0(t);
        }
      }
      t = z_35;
      return(t);
    }
    t = if_verbose2_1(t, w_8);
    return(t);
  }
  t = iowrap_4(t, b_88, c_88, d_88, v_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_87 (ATerm), ATerm a_88 (ATerm))
{
  t = iowrap_3(t, z_87, a_88, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    t = _2(t, _id, w_87);
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
