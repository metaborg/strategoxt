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
ATerm term_z_35;
ATerm term_t_35;
ATerm term_l_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_n_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_l_32;
ATerm term_u_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_u_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_c_27;
ATerm term_y_24;
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
ATerm term_u_13;
ATerm term_p_11;
ATerm term_p_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
void init_constant_terms (void)
{
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Fail_0);
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
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_18);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, term_w_21);
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
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Op_2, term_j_27, (ATerm) ATempty);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATempty);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_28);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_h_21);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_21);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_v_33, term_z_18);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_z_18);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_z_18);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_t_34);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, (ATerm) ATempty);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm));
ATerm Explode_2 (ATerm, ATerm i_76 (ATerm), ATerm j_76 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm e_98 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_77 (ATerm));
ATerm spaste_1 (ATerm, ATerm d_81 (ATerm));
ATerm Rec_2 (ATerm, ATerm w_78 (ATerm), ATerm x_78 (ATerm));
ATerm Let_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm v_78 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm x_83 (ATerm, ATerm (ATerm)), ATerm y_83 (ATerm), ATerm z_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_84 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm Con_3 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm b_76 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_105 (ATerm));
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
ATerm rewrite_1 (ATerm, ATerm t_90 (ATerm));
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm w_106 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm o_90 (ATerm));
ATerm restore_always_2 (ATerm, ATerm p_108 (ATerm), ATerm q_108 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm n_90 (ATerm));
ATerm scope_2 (ATerm, ATerm p_90 (ATerm), ATerm q_90 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm t_80 (ATerm), ATerm u_80 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm assert_1 (ATerm, ATerm r_90 (ATerm));
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm c_82 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm d_78 (ATerm), ATerm e_78 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm z_80 (ATerm));
ATerm Var_1 (ATerm, ATerm s_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm p_83 (ATerm), ATerm q_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm v_83 (ATerm), ATerm w_83 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm j_83 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm e_101 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm j_101 (ATerm));
ATerm substitute_6 (ATerm, ATerm h_84 (ATerm), ATerm i_84 (ATerm, ATerm (ATerm)), ATerm j_84 (ATerm), ATerm k_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_84 (ATerm, ATerm (ATerm)), ATerm m_84 (ATerm));
ATerm substitute_5 (ATerm, ATerm o_84 (ATerm), ATerm p_84 (ATerm, ATerm (ATerm)), ATerm q_84 (ATerm), ATerm r_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_84 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm a_82 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm b_82 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm MsgR_0 (ATerm);
ATerm MsgE_0 (ATerm);
ATerm MsgU_0 (ATerm);
ATerm MsgS_0 (ATerm);
ATerm MkMsg_0 (ATerm);
ATerm err_msg_0 (ATerm);
ATerm _3 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm));
ATerm Overlay_3 (ATerm, ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm));
ATerm Snd_0 (ATerm);
ATerm explode_term_0 (ATerm);
ATerm default_join_0 (ATerm);
ATerm SeqUnion_0 (ATerm);
ATerm seqs_join_0 (ATerm);
ATerm JoinScope_1 (ATerm, ATerm w_80 (ATerm));
ATerm Union_0 (ATerm);
ATerm cart_1 (ATerm, ATerm r_97 (ATerm));
ATerm UDjoin_0 (ATerm);
ATerm Cong_2 (ATerm, ATerm o_79 (ATerm), ATerm p_79 (ATerm));
ATerm use_term_0 (ATerm);
ATerm def_term_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm));
ATerm BAM_3 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm));
ATerm BA_2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm AM_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm MA_2 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm Match_1 (ATerm, ATerm w_79 (ATerm));
ATerm Build_1 (ATerm, ATerm x_79 (ATerm));
ATerm constructs_1 (ATerm, ATerm v_80 (ATerm));
ATerm use_def_0 (ATerm);
ATerm RDef_3 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm SDef_3 (ATerm, ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm check_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm l_77 (ATerm));
ATerm Signature_1 (ATerm, ATerm k_77 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm isect_1 (ATerm, ATerm i_95 (ATerm));
ATerm isect_0 (ATerm);
ATerm new_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm s_108 (ATerm));
ATerm one_dist_1 (ATerm, ATerm f_101 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm x_101 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm f_107 (ATerm), ATerm g_107 (ATerm));
ATerm repeat_1 (ATerm, ATerm i_107 (ATerm));
ATerm listtd_1 (ATerm, ATerm n_100 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm d_77 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm tboundin_3 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm b_95 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm));
ATerm crush_3 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm w_107 (ATerm), ATerm x_107 (ATerm));
ATerm for_3 (ATerm, ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm diff_1 (ATerm, ATerm e_95 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm z_103 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm alltd_1 (ATerm, ATerm c_106 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm));
ATerm zip_1 (ATerm, ATerm z_97 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm e_84 (ATerm), ATerm f_84 (ATerm));
ATerm substitute_1 (ATerm, ATerm g_84 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm y_92 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_103 (ATerm));
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm a_69 (ATerm), ATerm b_69 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm v_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm f_87 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_93 (ATerm), ATerm t_93 (ATerm));
ATerm crush_2 (ATerm, ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm e_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_92 (ATerm), ATerm h_92 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_89 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_99 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_85 (ATerm));
ATerm map_1 (ATerm, ATerm i_99 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_85 (ATerm));
ATerm Program_1 (ATerm, ATerm o_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm p_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_108 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_86 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm k_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm));
ATerm iowrap_3 (ATerm, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm iowrap_1 (ATerm, ATerm g_88 (ATerm));
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_10)), not_null(j_10)), not_null(i_10)), not_null(h_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(e_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_10), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_10)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_10))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_10)))))));
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(s_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_b_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_10)), not_null(q_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(t_10)))));
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(e_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11))), (ATerm) ATmakeAppl(sym_Prim_2, term_c_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_11)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_11)), (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_11)), not_null(a_11)))))));
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
        ATerm e_9 = t;
        int f_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_12))))));
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            {
              ATerm h_9 = t;
              int i_9 = stack_ptr;
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
                  LocalPopChoice(i_9);
                }
              else
                {
                  t = h_9;
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
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
        ATerm n_9 = t;
        int o_9 = stack_ptr;
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_16)), not_null(d_16))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_16))));
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm q_9 = t;
              int r_9 = stack_ptr;
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
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = q_9;
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
ATerm Prim_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
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
            t = d_80(t);
            {
              r_18 = t;
              {
                t = not_null(l_18);
                {
                  ATerm v_18 = NULL;
                  t = e_80(t);
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
ATerm Explode_2 (ATerm t, ATerm i_76 (ATerm), ATerm j_76 (ATerm))
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
            t = i_76(t);
            {
              q_19 = t;
              {
                t = not_null(k_19);
                {
                  ATerm u_19 = NULL;
                  t = j_76(t);
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
ATerm pat_td_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_80(t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = pat_td_1(t, r_80);
                return(t);
              }
              t = fetch_1(t, z_0);
              return(t);
            }
            t = Op_2(t, _id, y_0);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
              ATerm x_9 = t;
              int y_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = pat_td_1(t, r_80);
                    return(t);
                  }
                  t = Explode_2(t, _id, a_1);
                  LocalPopChoice(y_9);
                }
              else
                {
                  t = x_9;
                  {
                    ATerm a_10 = t;
                    int f_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_80);
                          return(t);
                        }
                        t = Explode_2(t, b_1, _id);
                        LocalPopChoice(f_10);
                      }
                    else
                      {
                        t = a_10;
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = pat_td_1(t, r_80);
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
        ATerm g_10 = t;
        int p_10 = stack_ptr;
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
            LocalPopChoice(p_10);
          }
        else
          {
            t = g_10;
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
  ATerm z_10 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = z_10;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm e_98 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, e_98);
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
      ATerm o_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_11;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_p_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_21))));
    return(t);
  }
  o_21 = t;
  n_21 :
  if(match_cons(o_21, sym_Var_1))
    {
      p_21 = ATgetArgument(o_21, 0);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_21(t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
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
            ATerm s_11 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = s_11;
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
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
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
                  t = HL_0(t);
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
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(a_12);
                            }
                          else
                            {
                              t = z_11;
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
ATerm Strategies_1 (ATerm t, ATerm n_77 (ATerm))
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
            t = n_77(t);
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
ATerm Specification_1 (ATerm t, ATerm p_77 (ATerm))
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
            t = p_77(t);
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
ATerm spaste_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = split_2(t, _id, d_81);
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
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm d_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = split_2(t, _id, d_81);
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
            LocalPopChoice(f_12);
          }
        else
          {
            t = d_12;
            {
              ATerm p_1 (ATerm t)
              {
                t = d_81(t);
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
ATerm Rec_2 (ATerm t, ATerm w_78 (ATerm), ATerm x_78 (ATerm))
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
            t = w_78(t);
            {
              q_25 = t;
              {
                t = not_null(k_25);
                {
                  ATerm u_25 = NULL;
                  t = x_78(t);
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
ATerm Let_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
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
            t = y_78(t);
            {
              p_26 = t;
              {
                t = not_null(j_26);
                {
                  ATerm t_26 = NULL;
                  t = z_78(t);
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
ATerm sboundin_3 (ATerm t, ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm g_81 (ATerm))
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, e_81, e_81);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, g_81, g_81, e_81);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            t = Rec_2(t, g_81, e_81);
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
ATerm SVar_1 (ATerm t, ATerm v_78 (ATerm))
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
            t = v_78(t);
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
    ATerm l_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = l_12;
        {
          ATerm r_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(b_13);
            }
          else
            {
              t = r_12;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, s_1, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm x_83 (ATerm, ATerm (ATerm)), ATerm y_83 (ATerm), ATerm z_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm a_84 (ATerm, ATerm (ATerm)))
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
          ATerm j_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, x_83);
              LocalPopChoice(t_13);
            }
          else
            {
              t = j_13;
              {
                t = RnBinding_2(t, y_83, a_84);
                t = DistBinding_2(t, w_40, z_83);
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
        ATerm n_45 = NULL;
        t = not_null(q_44);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
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
                                    m_45 = (ATerm) ATgetNext((ATermList) i_45);
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
                                                if(((ATermList) m_45 == ATempty))
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
            n_45 = t;
            if(((t_44 != NULL) && (t_44 != n_45)))
              _fail(n_45);
            else
              t_44 = n_45;
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
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  b_47 = t;
  h_46 :
  if(match_cons(b_47, sym_InfixApp_3))
    {
      c_47 = ATgetArgument(b_47, 0);
      y_46 = ATgetArgument(b_47, 1);
      x_46 = ATgetArgument(b_47, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(y_46), (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_46)), not_null(c_47))));
    }
  else
    {
      if(match_cons(b_47, sym_BAM_3))
        {
          c_47 = ATgetArgument(b_47, 0);
          y_46 = ATgetArgument(b_47, 1);
          x_46 = ATgetArgument(b_47, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(x_46))), not_null(c_47)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_46))));
        }
      else
        {
          if(match_cons(b_47, sym_AM_2))
            {
              c_47 = ATgetArgument(b_47, 0);
              y_46 = ATgetArgument(b_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_47), (ATerm) ATmakeAppl(sym_Match_1, not_null(y_46)));
            }
          else
            {
              if(match_cons(b_47, sym_MA_2))
                {
                  c_47 = ATgetArgument(b_47, 0);
                  y_46 = ATgetArgument(b_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_47)), not_null(y_46));
                }
              else
                {
                  if(match_cons(b_47, sym_BA_2))
                    {
                      c_47 = ATgetArgument(b_47, 0);
                      y_46 = ATgetArgument(b_47, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_46)), not_null(c_47));
                    }
                  else
                    {
                      if(match_cons(b_47, sym_Lets_2))
                        {
                          c_47 = ATgetArgument(b_47, 0);
                          y_46 = ATgetArgument(b_47, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(c_47), not_null(y_46));
                        }
                      else
                        {
                          if(match_cons(b_47, sym_LChoices_1))
                            {
                              c_47 = ATgetArgument(b_47, 0);
                              i_46 :
                              if(((ATgetType(c_47) == AT_LIST) && ((ATermList) c_47 != ATempty)))
                                {
                                  z_46 = ATgetFirst((ATermList) c_47);
                                  a_47 = (ATerm) ATgetNext((ATermList) c_47);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_46), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_47)));
                                }
                              else
                                {
                                  if(((ATermList) c_47 == ATempty))
                                    {
                                      t = term_u_13;
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
                                  c_47 = ATgetArgument(b_47, 0);
                                  p_46 :
                                  if(((ATgetType(c_47) == AT_LIST) && ((ATermList) c_47 != ATempty)))
                                    {
                                      z_46 = ATgetFirst((ATermList) c_47);
                                      a_47 = (ATerm) ATgetNext((ATermList) c_47);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_47)));
                                    }
                                  else
                                    {
                                      if(((ATermList) c_47 == ATempty))
                                        {
                                          t = term_u_13;
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
                                      c_47 = ATgetArgument(b_47, 0);
                                      q_46 :
                                      if(((ATgetType(c_47) == AT_LIST) && ((ATermList) c_47 != ATempty)))
                                        {
                                          z_46 = ATgetFirst((ATermList) c_47);
                                          a_47 = (ATerm) ATgetNext((ATermList) c_47);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_46), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_47)));
                                        }
                                      else
                                        {
                                          if(((ATermList) c_47 == ATempty))
                                            {
                                              t = term_p_11;
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
      ATerm v_13;
      v_13 = t;
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
      t = v_13;
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
  ATerm w_13 = t;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
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
      t = w_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  c_49 :
  if(match_cons(d_49, sym_App_2))
    {
      e_49 = ATgetArgument(d_49, 0);
      f_49 = ATgetArgument(d_49, 1);
      {
        ATerm l_49 = NULL,n_49 = NULL;
        ATerm m_49 = NULL;
        t = SSLgetAnnotations(not_null(d_49));
        {
          m_49 = t;
          if(((l_49 != NULL) && (l_49 != m_49)))
            _fail(m_49);
          else
            l_49 = m_49;
        }
        {
          t = not_null(e_49);
          {
            ATerm u_49 = NULL;
            t = c_76(t);
            {
              n_49 = t;
              {
                t = not_null(f_49);
                {
                  ATerm w_49 = NULL;
                  t = d_76(t);
                  {
                    u_49 = t;
                    {
                      ATerm x_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(n_49), not_null(u_49)), not_null(l_49));
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
ATerm Con_3 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm b_76 (ATerm))
{
  ATerm x_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  x_50 = t;
  w_50 :
  if(match_cons(x_50, sym_Con_3))
    {
      a_51 = ATgetArgument(x_50, 0);
      b_51 = ATgetArgument(x_50, 1);
      c_51 = ATgetArgument(x_50, 2);
      {
        ATerm h_51 = NULL,j_51 = NULL;
        ATerm i_51 = NULL;
        t = SSLgetAnnotations(not_null(x_50));
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
            t = z_75(t);
            {
              j_51 = t;
              {
                t = not_null(b_51);
                {
                  ATerm n_51 = NULL;
                  t = a_76(t);
                  {
                    l_51 = t;
                    {
                      t = not_null(c_51);
                      {
                        ATerm p_51 = NULL;
                        t = b_76(t);
                        {
                          n_51 = t;
                          {
                            ATerm q_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(j_51), not_null(l_51), not_null(n_51)), not_null(h_51));
                            {
                              q_51 = t;
                              if(((p_51 != NULL) && (p_51 != q_51)))
                                _fail(q_51);
                              else
                                p_51 = q_51;
                            }
                            t = not_null(p_51);
                          }
                        }
                      }
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
  ATerm z_13 = t;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm a_14 = t;
        int b_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(b_14);
          }
        else
          {
            t = a_14;
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
      t = z_13;
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
ATerm oncetd_1 (ATerm t, ATerm o_105 (ATerm))
{
  ATerm t_52 (ATerm t)
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_105(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = _one(t, t_52);
      }
    return(t);
  }
  t = t_52(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,p_53 = NULL,q_53 = NULL;
  j_53 = t;
  h_53 :
  if(match_cons(j_53, sym_SRule_1))
    {
      k_53 = ATgetArgument(j_53, 0);
      i_53 :
      if(match_cons(k_53, sym_Rule_3))
        {
          l_53 = ATgetArgument(k_53, 0);
          p_53 = ATgetArgument(k_53, 1);
          q_53 = ATgetArgument(k_53, 2);
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
                  t = not_null(l_53);
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_53)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_54), not_null(b_54), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_53), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(v_53), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_53), not_null(x_53), term_p_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_53)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_53)))))));
          }
        }
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
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          ATerm g_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(n_14);
            }
          else
            {
              t = g_14;
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
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, e_2);
    {
      ATerm f_2 (ATerm t)
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
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
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
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
  d_57 :
  if(match_cons(l_57, sym_OpDecl_2))
    {
      m_57 = ATgetArgument(l_57, 0);
      n_57 = ATgetArgument(l_57, 1);
      e_57 :
      if(match_cons(n_57, sym_FunType_2))
        {
          o_57 = ATgetArgument(n_57, 0);
          k_57 = ATgetArgument(n_57, 1);
          {
            ATerm s_57 = NULL,t_57 = NULL,b_58 = NULL;
            ATerm h_15;
            h_15 = t;
            {
              ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL;
              t = not_null(o_57);
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm u_57 = NULL,w_57 = NULL;
                  t = new_0(t);
                  {
                    ATerm i_15;
                    i_15 = t;
                    {
                      ATerm v_57 = NULL;
                      v_57 = t;
                      if(((u_57 != NULL) && (u_57 != v_57)))
                        _fail(v_57);
                      else
                        u_57 = v_57;
                    }
                    t = i_15;
                    {
                      ATerm x_57 = NULL;
                      x_57 = t;
                      if(((w_57 != NULL) && (w_57 != x_57)))
                        _fail(x_57);
                      else
                        w_57 = x_57;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_57), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15)), not_null(w_57));
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
            t = h_15;
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
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  e_60 = t;
  n_59 :
  if(match_cons(e_60, sym_Specification_1))
    {
      f_60 = ATgetArgument(e_60, 0);
      o_59 :
      if(((ATgetType(f_60) == AT_LIST) && ((ATermList) f_60 != ATempty)))
        {
          g_60 = ATgetFirst((ATermList) f_60);
          i_60 = (ATerm) ATgetNext((ATermList) f_60);
          p_59 :
          if(match_cons(g_60, sym_Signature_1))
            {
              h_60 = ATgetArgument(g_60, 0);
              q_59 :
              if(((ATgetType(i_60) == AT_LIST) && ((ATermList) i_60 != ATempty)))
                {
                  j_60 = ATgetFirst((ATermList) i_60);
                  l_60 = (ATerm) ATgetNext((ATermList) i_60);
                  c_60 :
                  if(match_cons(j_60, sym_Strategies_1))
                    {
                      k_60 = ATgetArgument(j_60, 0);
                      d_60 :
                      if(((ATermList) l_60 == ATempty))
                        {
                          {
                            ATerm o_60 = NULL;
                            ATerm p_60 = NULL,r_60 = NULL,t_60 = NULL;
                            ATerm m_15;
                            m_15 = t;
                            {
                              ATerm q_60 = NULL;
                              t = not_null(h_60);
                              {
                                t = congdefs_0(t);
                                {
                                  q_60 = t;
                                  if(((p_60 != NULL) && (p_60 != q_60)))
                                    _fail(q_60);
                                  else
                                    p_60 = q_60;
                                }
                              }
                            }
                            t = m_15;
                            {
                              ATerm s_60 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(k_60)), (ATerm) ATmakeAppl(sym_RDef_3, term_n_15, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_q_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15))), (ATerm) ATmakeAppl(sym_VarDec_2, term_o_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15))), (ATerm) ATmakeAppl(sym_Rule_3, term_w_15, term_e_17, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_k_17), term_h_17)))));
                              {
                                ATerm h_2 (ATerm t)
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
                                t = map_1(t, h_2);
                                {
                                  s_60 = t;
                                  if(((r_60 != NULL) && (r_60 != s_60)))
                                    _fail(s_60);
                                  else
                                    r_60 = s_60;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_60), not_null(r_60));
                                {
                                  t = conc_0(t);
                                  {
                                    t_60 = t;
                                    if(((o_60 != NULL) && (o_60 != t_60)))
                                      _fail(t_60);
                                    else
                                      o_60 = t_60;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_60))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(h_60))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm b_61 = NULL;
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
  t = term_n_17;
  {
    ATerm i_2 (ATerm t)
    {
      t = term_o_17;
      return(t);
    }
    t = rewrite_1(t, i_2);
    {
      c_61 = t;
      z_60 :
      if(match_cons(c_61, sym_Defined_2))
        {
          d_61 = ATgetArgument(c_61, 0);
          e_61 = ATgetArgument(c_61, 1);
          a_61 :
          if(match_string(d_61, "g_0"))
            {
              if(((b_61 != NULL) && (b_61 != e_61)))
                _fail(e_61);
              else
                b_61 = e_61;
            }
          else
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
  t = not_null(b_61);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm l_61 = NULL;
  l_61 = t;
  t = SSL_int_to_string(not_null(l_61));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
  c_62 = t;
  b_62 :
  if(match_cons(c_62, sym_Op_2))
    {
      d_62 = ATgetArgument(c_62, 0);
      e_62 = ATgetArgument(c_62, 1);
      {
        ATerm l_62 = NULL,m_62 = NULL;
        ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
        t = term_n_17;
        {
          ATerm j_2 (ATerm t)
          {
            t = term_p_17;
            return(t);
          }
          t = rewrite_1(t, j_2);
          {
            n_62 = t;
            z_61 :
            if(match_cons(n_62, sym_Defined_3))
              {
                o_62 = ATgetArgument(n_62, 0);
                p_62 = ATgetArgument(n_62, 1);
                q_62 = ATgetArgument(n_62, 2);
                a_62 :
                if(match_string(o_62, "h_0"))
                  {
                    ATerm r_62 = NULL;
                    if(((m_62 != NULL) && (m_62 != p_62)))
                      _fail(p_62);
                    else
                      m_62 = p_62;
                    {
                      if(((l_62 != NULL) && (l_62 != q_62)))
                        _fail(q_62);
                      else
                        l_62 = q_62;
                      {
                        ATerm s_62 = NULL;
                        t = not_null(e_62);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              s_62 = t;
                              if(((r_62 != NULL) && (r_62 != s_62)))
                                _fail(s_62);
                              else
                                r_62 = s_62;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_18), not_null(r_62)), term_b_18), not_null(d_62)), term_a_18), term_z_17), not_null(m_62)), term_y_17), not_null(l_62)), term_r_17));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_62), not_null(e_62));
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
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL;
  y_62 = t;
  x_62 :
  if(match_cons(y_62, sym__2))
    {
      z_62 = ATgetArgument(y_62, 0);
      a_63 = ATgetArgument(y_62, 1);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(z_62), not_null(a_63));
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = SSL_subtr(not_null(z_62), not_null(a_63));
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
    ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
    m_63 = t;
    f_63 :
    if(match_cons(m_63, sym__2))
      {
        n_63 = ATgetArgument(m_63, 0);
        o_63 = ATgetArgument(m_63, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_63), not_null(o_63), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL;
    r_63 = t;
    h_63 :
    if(match_cons(r_63, sym__3))
      {
        s_63 = ATgetArgument(r_63, 0);
        t_63 = ATgetArgument(r_63, 1);
        u_63 = ATgetArgument(r_63, 2);
        i_63 :
        if(match_int(s_63, 0))
          {
            t = not_null(u_63);
          }
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
    ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL;
    x_63 = t;
    l_63 :
    if(match_cons(x_63, sym__3))
      {
        y_63 = ATgetArgument(x_63, 0);
        z_63 = ATgetArgument(x_63, 1);
        a_64 = ATgetArgument(x_63, 2);
        {
          ATerm e_64 = NULL;
          ATerm f_18;
          f_18 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_63), term_g_18);
            t = geq_0(t);
          }
          t = f_18;
          {
            ATerm f_64 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_63), term_g_18);
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
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_64), not_null(z_63), (ATerm) ATinsert(CheckATermList(not_null(a_64)), not_null(z_63)));
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
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
  a_65 = t;
  v_64 :
  if(match_cons(a_65, sym_Op_2))
    {
      b_65 = ATgetArgument(a_65, 0);
      c_65 = ATgetArgument(a_65, 1);
      w_64 :
      if(match_string(b_65, ""))
        {
          ATerm e_65 = NULL,j_65 = NULL,k_65 = NULL,r_65 = NULL;
          ATerm h_18;
          h_18 = t;
          {
            ATerm s_65 = NULL;
            t = not_null(c_65);
            {
              ATerm t_65 = NULL;
              t = length_0(t);
              {
                s_65 = t;
                {
                  if(((j_65 != NULL) && (j_65 != s_65)))
                    _fail(s_65);
                  else
                    j_65 = s_65;
                  {
                    ATerm u_65 = NULL,w_65 = NULL;
                    t = term_d_9;
                    {
                      t_65 = t;
                      {
                        if(((e_65 != NULL) && (e_65 != t_65)))
                          _fail(t_65);
                        else
                          e_65 = t_65;
                        {
                          ATerm m_18;
                          m_18 = t;
                          {
                            ATerm v_65 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_65), term_o_18);
                            {
                              t = copy_0(t);
                              {
                                v_65 = t;
                                if(((u_65 != NULL) && (u_65 != v_65)))
                                  _fail(v_65);
                                else
                                  u_65 = v_65;
                              }
                            }
                          }
                          t = m_18;
                          {
                            ATerm x_65 = NULL,z_65 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, not_null(u_65), term_o_18));
                            {
                              w_65 = t;
                              {
                                if(((k_65 != NULL) && (k_65 != w_65)))
                                  _fail(w_65);
                                else
                                  k_65 = w_65;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm y_65 = NULL;
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
                                      y_65 = t;
                                      if(((x_65 != NULL) && (x_65 != y_65)))
                                        _fail(y_65);
                                      else
                                        x_65 = y_65;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(x_65)), not_null(k_65));
                                      {
                                        z_65 = t;
                                        {
                                          if(((r_65 != NULL) && (r_65 != z_65)))
                                            _fail(z_65);
                                          else
                                            r_65 = z_65;
                                          {
                                            ATerm x_18;
                                            x_18 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATmakeAppl(sym_Defined_2, term_y_18, not_null(r_65)));
                                              {
                                                ATerm n_2 (ATerm t)
                                                {
                                                  t = term_o_17;
                                                  return(t);
                                                }
                                                t = assert_1(t, n_2);
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
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  i_66 :
  if(((ATgetType(j_66) == AT_LIST) && ((ATermList) j_66 != ATempty)))
    {
      k_66 = ATgetFirst((ATermList) j_66);
      l_66 = (ATerm) ATgetNext((ATermList) j_66);
      t = not_null(k_66);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  z_68 :
  if(match_cons(f_69, sym__2))
    {
      g_69 = ATgetArgument(f_69, 0);
      h_69 = ATgetArgument(f_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_69), not_null(h_69));
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
ATerm rewrite_1 (ATerm t, ATerm t_90 (ATerm))
{
  ATerm n_69 = NULL;
  ATerm p_69 = NULL;
  n_69 = t;
  {
    ATerm q_69 = NULL;
    t = term_z_18;
    {
      t = t_90(t);
      {
        q_69 = t;
        if(((p_69 != NULL) && (p_69 != q_69)))
          _fail(q_69);
        else
          p_69 = q_69;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_69), not_null(n_69));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm CheckCons_0 (ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL;
  g_70 = t;
  f_70 :
  if(match_cons(g_70, sym_Op_2))
    {
      h_70 = ATgetArgument(g_70, 0);
      i_70 = ATgetArgument(g_70, 1);
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_70 = NULL;
            ATerm n_70 = NULL;
            t = not_null(i_70);
            {
              l_70 = t;
              {
                t = length_0(t);
                {
                  n_70 = t;
                  {
                    ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_70), not_null(n_70));
                    {
                      ATerm o_2 (ATerm t)
                      {
                        t = term_c_19;
                        return(t);
                      }
                      t = rewrite_1(t, o_2);
                      {
                        r_70 = t;
                        y_69 :
                        if(match_cons(r_70, sym_Defined_2))
                          {
                            s_70 = ATgetArgument(r_70, 0);
                            t_70 = ATgetArgument(r_70, 1);
                            z_69 :
                            if(match_string(s_70, "b_0"))
                              {
                                if(((h_70 != NULL) && (h_70 != t_70)))
                                  _fail(t_70);
                                else
                                  h_70 = t_70;
                              }
                            else
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_70), not_null(l_70));
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
              ATerm w_70 = NULL;
              ATerm y_70 = NULL;
              t = not_null(i_70);
              {
                w_70 = t;
                {
                  t = length_0(t);
                  {
                    y_70 = t;
                    {
                      ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(h_70), not_null(y_70));
                      {
                        ATerm p_2 (ATerm t)
                        {
                          t = term_c_19;
                          return(t);
                        }
                        t = rewrite_1(t, p_2);
                        {
                          a_71 = t;
                          d_70 :
                          if(match_cons(a_71, sym_Defined_2))
                            {
                              b_71 = ATgetArgument(a_71, 0);
                              c_71 = ATgetArgument(a_71, 1);
                              e_70 :
                              if(match_string(b_71, "a_0"))
                                {
                                  if(((h_70 != NULL) && (h_70 != c_71)))
                                    _fail(c_71);
                                  else
                                    h_70 = c_71;
                                }
                              else
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_70), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm w_106 (ATerm))
{
  ATerm l_71 (ATerm t)
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_106(t);
        {
          ATerm q_2 (ATerm t)
          {
            t = try_1(t, l_71);
            return(t);
          }
          t = _all(t, q_2);
        }
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = _some(t, l_71);
      }
    return(t);
  }
  t = l_71(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL;
  o_71 = t;
  n_71 :
  if(((ATgetType(o_71) == AT_LIST) && ((ATermList) o_71 != ATempty)))
    {
      p_71 = ATgetFirst((ATermList) o_71);
      q_71 = (ATerm) ATgetNext((ATermList) o_71);
      t = not_null(q_71);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  w_71 :
  if(match_cons(x_71, sym__2))
    {
      y_71 = ATgetArgument(x_71, 0);
      z_71 = ATgetArgument(x_71, 1);
      {
        ATerm f_19;
        f_19 = t;
        {
          ATerm c_72 = NULL;
          ATerm d_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_71), not_null(z_71));
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
              d_72 = t;
              if(((c_72 != NULL) && (c_72 != d_72)))
                _fail(d_72);
              else
                c_72 = d_72;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_71), not_null(z_71), not_null(c_72));
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
ATerm end_scope_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm n_72 = NULL;
    ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
    t = o_90(t);
    {
      n_72 = t;
      {
        if(((l_72 != NULL) && (l_72 != n_72)))
          _fail(n_72);
        else
          l_72 = n_72;
        {
          ATerm n_19 = t;
          int r_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_72), term_t_19);
              t = table_get_0(t);
              LocalPopChoice(r_19);
            }
          else
            {
              t = n_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            o_72 = t;
            j_72 :
            if(((ATgetType(o_72) == AT_LIST) && ((ATermList) o_72 != ATempty)))
              {
                p_72 = ATgetFirst((ATermList) o_72);
                q_72 = (ATerm) ATgetNext((ATermList) o_72);
                {
                  if(((m_72 != NULL) && (m_72 != p_72)))
                    _fail(p_72);
                  else
                    m_72 = p_72;
                  {
                    if(((k_72 != NULL) && (k_72 != q_72)))
                      _fail(q_72);
                    else
                      k_72 = q_72;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_72), term_t_19, not_null(k_72));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(m_72);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              ATerm r_72 = NULL;
                              r_72 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_72), not_null(r_72));
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
  t = m_19;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm p_108 (ATerm), ATerm q_108 (ATerm))
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_108(t);
      t = q_108(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        t = q_108(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm n_90 (ATerm))
{
  ATerm y_72 = NULL;
  ATerm y_19;
  y_19 = t;
  {
    ATerm z_72 = NULL;
    ATerm a_73 = NULL;
    t = n_90(t);
    {
      z_72 = t;
      {
        if(((y_72 != NULL) && (y_72 != z_72)))
          _fail(z_72);
        else
          y_72 = z_72;
        {
          ATerm b_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_72), term_t_19);
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
              b_73 = t;
              if(((a_73 != NULL) && (a_73 != b_73)))
                _fail(b_73);
              else
                a_73 = b_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_72), term_t_19, (ATerm) ATinsert(CheckATermList(not_null(a_73)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_19;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm p_90 (ATerm), ATerm q_90 (ATerm))
{
  t = begin_scope_1(t, p_90);
  {
    ATerm s_2 (ATerm t)
    {
      t = end_scope_1(t, p_90);
      return(t);
    }
    t = restore_always_2(t, q_90, s_2);
  }
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm t_80 (ATerm), ATerm u_80 (ATerm))
{
  ATerm g_73 = NULL,h_73 = NULL;
  ATerm t_2 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm b_20;
    b_20 = t;
    {
      ATerm i_73 = NULL;
      ATerm j_73 = NULL;
      t = t_80(t);
      {
        i_73 = t;
        {
          if(((g_73 != NULL) && (g_73 != i_73)))
            _fail(i_73);
          else
            g_73 = i_73;
          {
            t = u_80(t);
            {
              j_73 = t;
              if(((h_73 != NULL) && (h_73 != j_73)))
                _fail(j_73);
              else
                h_73 = j_73;
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
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATmakeAppl(sym_Defined_3, term_d_20, not_null(g_73), not_null(h_73)));
        {
          ATerm v_2 (ATerm t)
          {
            t = term_p_17;
            return(t);
          }
          t = assert_1(t, v_2);
        }
      }
      t = c_20;
      {
        ATerm w_2 (ATerm t)
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
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  p_73 = t;
  o_73 :
  if(match_cons(p_73, sym_SDef_3))
    {
      q_73 = ATgetArgument(p_73, 0);
      r_73 = ATgetArgument(p_73, 1);
      s_73 = ATgetArgument(p_73, 2);
      {
        t = not_null(s_73);
        {
          ATerm x_2 (ATerm t)
          {
            t = not_null(q_73);
            return(t);
          }
          ATerm y_2 (ATerm t)
          {
            t = term_o_20;
            return(t);
          }
          t = check_constructors_p__2(t, x_2, y_2);
        }
      }
    }
  else
    {
      if(match_cons(p_73, sym_RDef_3))
        {
          q_73 = ATgetArgument(p_73, 0);
          r_73 = ATgetArgument(p_73, 1);
          s_73 = ATgetArgument(p_73, 2);
          {
            t = not_null(s_73);
            {
              ATerm z_2 (ATerm t)
              {
                t = not_null(q_73);
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_v_20;
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
ATerm assert_1 (ATerm t, ATerm r_90 (ATerm))
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
  g_74 = t;
  f_74 :
  if(match_cons(g_74, sym__2))
    {
      h_74 = ATgetArgument(g_74, 0);
      i_74 = ATgetArgument(g_74, 1);
      {
        ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
        ATerm e_21;
        e_21 = t;
        {
          ATerm o_74 = NULL;
          ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
          t = r_90(t);
          {
            o_74 = t;
            {
              if(((l_74 != NULL) && (l_74 != o_74)))
                _fail(o_74);
              else
                l_74 = o_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(l_74), not_null(h_74), not_null(i_74));
                {
                  t = table_push_0(t);
                  {
                    ATerm f_21 = t;
                    int g_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_74), term_t_19);
                        t = table_get_0(t);
                        LocalPopChoice(g_21);
                      }
                    else
                      {
                        t = f_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      p_74 = t;
                      e_74 :
                      if(((ATgetType(p_74) == AT_LIST) && ((ATermList) p_74 != ATempty)))
                        {
                          q_74 = ATgetFirst((ATermList) p_74);
                          r_74 = (ATerm) ATgetNext((ATermList) p_74);
                          {
                            if(((m_74 != NULL) && (m_74 != q_74)))
                              _fail(q_74);
                            else
                              m_74 = q_74;
                            {
                              if(((n_74 != NULL) && (n_74 != r_74)))
                                _fail(r_74);
                              else
                                n_74 = r_74;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(l_74), term_t_19, (ATerm) ATinsert(CheckATermList(not_null(n_74)), (ATerm) ATinsert(CheckATermList(not_null(m_74)), not_null(h_74))));
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
  ATerm b_3 (ATerm t)
  {
    t = term_h_21;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_g_18;
    return(t);
  }
  t = foldr_3(t, b_3, add_0, c_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL;
  c_75 = t;
  z_74 :
  if(match_cons(c_75, sym_OpDecl_2))
    {
      d_75 = ATgetArgument(c_75, 0);
      e_75 = ATgetArgument(c_75, 1);
      a_75 :
      if(match_cons(e_75, sym_FunType_2))
        {
          f_75 = ATgetArgument(e_75, 0);
          b_75 = ATgetArgument(e_75, 1);
          {
            ATerm j_75 = NULL;
            ATerm i_21;
            i_21 = t;
            {
              ATerm k_75 = NULL;
              t = not_null(f_75);
              {
                t = length_0(t);
                {
                  k_75 = t;
                  if(((j_75 != NULL) && (j_75 != k_75)))
                    _fail(k_75);
                  else
                    j_75 = k_75;
                }
              }
            }
            t = i_21;
            {
              ATerm j_21;
              j_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(d_75), not_null(j_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_21, not_null(d_75)));
                {
                  ATerm d_3 (ATerm t)
                  {
                    t = term_c_19;
                    return(t);
                  }
                  t = assert_1(t, d_3);
                }
              }
              t = j_21;
            }
          }
        }
      else
        {
          if(match_cons(e_75, sym_ConstType_1))
            {
              f_75 = ATgetArgument(e_75, 0);
              {
                ATerm n_75 = NULL;
                ATerm l_21;
                l_21 = t;
                {
                  ATerm o_75 = NULL;
                  t = term_h_21;
                  {
                    o_75 = t;
                    if(((n_75 != NULL) && (n_75 != o_75)))
                      _fail(o_75);
                    else
                      n_75 = o_75;
                  }
                }
                t = l_21;
                {
                  ATerm m_21;
                  m_21 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(d_75), not_null(n_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_21, not_null(d_75)));
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = term_c_19;
                        return(t);
                      }
                      t = assert_1(t, e_3);
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
  ATerm f_77 = NULL,g_77 = NULL,m_77 = NULL,o_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
  f_77 = t;
  p_76 :
  if(match_cons(f_77, sym_Specification_1))
    {
      g_77 = ATgetArgument(f_77, 0);
      q_76 :
      if(((ATgetType(g_77) == AT_LIST) && ((ATermList) g_77 != ATempty)))
        {
          m_77 = ATgetFirst((ATermList) g_77);
          t_77 = (ATerm) ATgetNext((ATermList) g_77);
          r_76 :
          if(match_cons(m_77, sym_Signature_1))
            {
              o_77 = ATgetArgument(m_77, 0);
              v_76 :
              if(((ATgetType(o_77) == AT_LIST) && ((ATermList) o_77 != ATempty)))
                {
                  q_77 = ATgetFirst((ATermList) o_77);
                  s_77 = (ATerm) ATgetNext((ATermList) o_77);
                  w_76 :
                  if(match_cons(q_77, sym_Constructors_1))
                    {
                      r_77 = ATgetArgument(q_77, 0);
                      x_76 :
                      if(((ATermList) s_77 == ATempty))
                        {
                          y_76 :
                          if(((ATgetType(t_77) == AT_LIST) && ((ATermList) t_77 != ATempty)))
                            {
                              u_77 = ATgetFirst((ATermList) t_77);
                              w_77 = (ATerm) ATgetNext((ATermList) t_77);
                              z_76 :
                              if(match_cons(u_77, sym_Strategies_1))
                                {
                                  v_77 = ATgetArgument(u_77, 0);
                                  e_77 :
                                  if(((ATermList) w_77 == ATempty))
                                    {
                                      {
                                        ATerm z_77 = NULL,a_78 = NULL,g_78 = NULL;
                                        ATerm t_21;
                                        t_21 = t;
                                        {
                                          ATerm b_78 = NULL;
                                          ATerm c_78 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(r_77)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_o_18), term_o_18), term_o_18))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_d_9, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_18), term_o_18))), term_x_21);
                                          {
                                            b_78 = t;
                                            {
                                              if(((z_77 != NULL) && (z_77 != b_78)))
                                                _fail(b_78);
                                              else
                                                z_77 = b_78;
                                              {
                                                t = not_null(z_77);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(v_77);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        c_78 = t;
                                                        n_76 :
                                                        if(((ATermList) c_78 == ATempty))
                                                          {
                                                            {
                                                              ATerm f_78 = NULL;
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
                                                                f_78 = t;
                                                                if(((a_78 != NULL) && (a_78 != f_78)))
                                                                  _fail(f_78);
                                                                else
                                                                  a_78 = f_78;
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
                                          ATerm h_78 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_78), not_null(z_77));
                                          {
                                            t = conc_0(t);
                                            {
                                              h_78 = t;
                                              if(((g_78 != NULL) && (g_78 != h_78)))
                                                _fail(h_78);
                                              else
                                                g_78 = h_78;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(v_77))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(g_78))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm c_82 (ATerm))
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_22;
    g_22 = t;
    {
      ATerm p_22 = t;
      if((PushChoice() == 0))
        {
          ATerm o_78 = NULL;
          t = c_82(t);
          {
            o_78 = t;
            n_78 :
            if(((ATermList) o_78 == ATempty))
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
      ATerm g_3 (ATerm t)
      {
        ATerm h_3 (ATerm t)
        {
          t = ExpOverlay_1(t, c_82);
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
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
  g_79 = t;
  e_79 :
  if(match_cons(g_79, sym_BuildDefault_1))
    {
      h_79 = ATgetArgument(g_79, 0);
      t = term_p_11;
    }
  else
    {
      if(match_cons(g_79, sym_Real_1))
        {
          h_79 = ATgetArgument(g_79, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(h_79)));
        }
      else
        {
          if(match_cons(g_79, sym_Int_1))
            {
              h_79 = ATgetArgument(g_79, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(h_79)));
            }
          else
            {
              if(match_cons(g_79, sym_Str_1))
                {
                  h_79 = ATgetArgument(g_79, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(h_79)));
                }
              else
                {
                  if(match_cons(g_79, sym_Anno_2))
                    {
                      h_79 = ATgetArgument(g_79, 0);
                      f_79 = ATgetArgument(g_79, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_79)), not_null(h_79)));
                    }
                  else
                    {
                      if(match_cons(g_79, sym_Op_2))
                        {
                          h_79 = ATgetArgument(g_79, 0);
                          f_79 = ATgetArgument(g_79, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_79)), not_null(f_79));
                        }
                      else
                        {
                          if(match_cons(g_79, sym_Var_1))
                            {
                              h_79 = ATgetArgument(g_79, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_79)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm d_78 (ATerm), ATerm e_78 (ATerm))
{
  ATerm o_80 = NULL,p_80 = NULL,q_80 = NULL;
  o_80 = t;
  n_80 :
  if(match_cons(o_80, sym_Op_2))
    {
      p_80 = ATgetArgument(o_80, 0);
      q_80 = ATgetArgument(o_80, 1);
      {
        ATerm j_81 = NULL,l_81 = NULL;
        ATerm k_81 = NULL;
        t = SSLgetAnnotations(not_null(o_80));
        {
          k_81 = t;
          if(((j_81 != NULL) && (j_81 != k_81)))
            _fail(k_81);
          else
            j_81 = k_81;
        }
        {
          t = not_null(p_80);
          {
            ATerm n_81 = NULL;
            t = d_78(t);
            {
              l_81 = t;
              {
                t = not_null(q_80);
                {
                  ATerm p_81 = NULL;
                  t = e_78(t);
                  {
                    n_81 = t;
                    {
                      ATerm q_81 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(l_81), not_null(n_81)), not_null(j_81));
                      {
                        q_81 = t;
                        if(((p_81 != NULL) && (p_81 != q_81)))
                          _fail(q_81);
                        else
                          p_81 = q_81;
                      }
                      t = not_null(p_81);
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
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  k_82 = t;
  f_82 :
  if(match_cons(k_82, sym_Overlay_3))
    {
      l_82 = ATgetArgument(k_82, 0);
      m_82 = ATgetArgument(k_82, 1);
      n_82 = ATgetArgument(k_82, 2);
      {
        ATerm r_82 = NULL,v_82 = NULL;
        ATerm r_22;
        r_22 = t;
        {
          ATerm u_82 = NULL;
          t = not_null(m_82);
          {
            ATerm k_3 (ATerm t)
            {
              ATerm s_82 = NULL;
              ATerm t_82 = NULL;
              t_82 = t;
              if(((s_82 != NULL) && (s_82 != t_82)))
                _fail(t_82);
              else
                s_82 = t_82;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_82), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15));
              return(t);
            }
            t = map_1(t, k_3);
            {
              u_82 = t;
              if(((r_82 != NULL) && (r_82 != u_82)))
                _fail(u_82);
              else
                r_82 = u_82;
            }
          }
        }
        t = r_22;
        {
          ATerm w_82 = NULL;
          t = not_null(n_82);
          {
            t = trm_to_cong_0(t);
            {
              w_82 = t;
              if(((v_82 != NULL) && (v_82 != w_82)))
                _fail(w_82);
              else
                v_82 = w_82;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_82), not_null(r_82), not_null(v_82));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm z_80 (ATerm))
{
  t = Scope_2(t, z_80, _id);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm l_83 = NULL,m_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym_Var_1))
    {
      m_83 = ATgetArgument(l_83, 0);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_83 = NULL,t_83 = NULL;
            ATerm s_83 = NULL;
            t = SSLgetAnnotations(not_null(l_83));
            {
              s_83 = t;
              if(((r_83 != NULL) && (r_83 != s_83)))
                _fail(s_83);
              else
                r_83 = s_83;
            }
            {
              t = not_null(m_83);
              {
                ATerm t_84 = NULL;
                t = s_0(t);
                {
                  t_83 = t;
                  {
                    ATerm u_84 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(t_83)), not_null(r_83));
                    {
                      u_84 = t;
                      if(((t_84 != NULL) && (t_84 != u_84)))
                        _fail(u_84);
                      else
                        t_84 = u_84;
                    }
                    t = not_null(t_84);
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
              ATerm x_84 = NULL,z_84 = NULL;
              ATerm y_84 = NULL;
              t = SSLgetAnnotations(not_null(l_83));
              {
                y_84 = t;
                if(((x_84 != NULL) && (x_84 != y_84)))
                  _fail(y_84);
                else
                  x_84 = y_84;
              }
              {
                t = not_null(m_83);
                {
                  ATerm b_85 = NULL;
                  t = s_0(t);
                  {
                    z_84 = t;
                    {
                      ATerm c_85 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_84)), not_null(x_84));
                      {
                        c_85 = t;
                        if(((b_85 != NULL) && (b_85 != c_85)))
                          _fail(c_85);
                        else
                          b_85 = c_85;
                      }
                      t = not_null(b_85);
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
ATerm DistBinding_2 (ATerm t, ATerm p_83 (ATerm), ATerm q_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  p_85 = t;
  o_85 :
  if(match_cons(p_85, sym__3))
    {
      q_85 = ATgetArgument(p_85, 0);
      r_85 = ATgetArgument(p_85, 1);
      s_85 = ATgetArgument(p_85, 2);
      {
        t = not_null(q_85);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm w_85 = NULL;
            w_85 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_85), not_null(s_85));
              t = p_83(t);
            }
            return(t);
          }
          ATerm m_3 (ATerm t)
          {
            ATerm e_86 = NULL;
            e_86 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_86), not_null(r_85));
              t = p_83(t);
            }
            return(t);
          }
          t = q_83(t, l_3, m_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm v_83 (ATerm), ATerm w_83 (ATerm, ATerm (ATerm)))
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
  q_86 = t;
  p_86 :
  if(match_cons(q_86, sym__2))
    {
      r_86 = ATgetArgument(q_86, 0);
      s_86 = ATgetArgument(q_86, 1);
      {
        ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,g_87 = NULL;
        ATerm u_22;
        u_22 = t;
        {
          ATerm y_86 = NULL;
          t = not_null(r_86);
          {
            ATerm z_86 = NULL;
            t = v_83(t);
            {
              y_86 = t;
              {
                if(((v_86 != NULL) && (v_86 != y_86)))
                  _fail(y_86);
                else
                  v_86 = y_86;
                {
                  ATerm a_87 = NULL,d_87 = NULL;
                  t = map_1(t, new_0);
                  {
                    z_86 = t;
                    {
                      if(((w_86 != NULL) && (w_86 != z_86)))
                        _fail(z_86);
                      else
                        w_86 = z_86;
                      {
                        ATerm b_87 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_86), not_null(w_86));
                        {
                          t = zip_1(t, _id);
                          {
                            b_87 = t;
                            if(((a_87 != NULL) && (a_87 != b_87)))
                              _fail(b_87);
                            else
                              a_87 = b_87;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_87), not_null(s_86));
                          {
                            t = conc_0(t);
                            {
                              d_87 = t;
                              if(((x_86 != NULL) && (x_86 != d_87)))
                                _fail(d_87);
                              else
                                x_86 = d_87;
                            }
                          }
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
          ATerm h_87 = NULL;
          t = not_null(r_86);
          {
            ATerm n_3 (ATerm t)
            {
              t = not_null(w_86);
              return(t);
            }
            t = w_83(t, n_3);
            {
              h_87 = t;
              if(((g_87 != NULL) && (g_87 != h_87)))
                _fail(h_87);
              else
                g_87 = h_87;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(g_87), not_null(s_86), not_null(x_86));
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
  ATerm u_87 = NULL;
  ATerm w_87 = NULL,x_87 = NULL;
  u_87 = t;
  {
    ATerm y_87 = NULL;
    ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL;
    t = not_null(u_87);
    {
      y_87 = t;
      {
        t = SSL_explode_term(not_null(y_87));
        {
          a_88 = t;
          r_87 :
          if(match_cons(a_88, sym__2))
            {
              b_88 = ATgetArgument(a_88, 0);
              c_88 = ATgetArgument(a_88, 1);
              s_87 :
              if(match_string(b_88, ""))
                {
                  t_87 :
                  if(((ATgetType(c_88) == AT_LIST) && ((ATermList) c_88 != ATempty)))
                    {
                      d_88 = ATgetFirst((ATermList) c_88);
                      e_88 = (ATerm) ATgetNext((ATermList) c_88);
                      {
                        if(((x_87 != NULL) && (x_87 != d_88)))
                          _fail(d_88);
                        else
                          x_87 = d_88;
                        if(((w_87 != NULL) && (w_87 != e_88)))
                          _fail(e_88);
                        else
                          w_87 = e_88;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(x_87);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm j_83 (ATerm, ATerm (ATerm)))
{
  ATerm q_88 = NULL,v_88 = NULL,w_88 = NULL;
  q_88 = t;
  p_88 :
  if(match_cons(q_88, sym__2))
    {
      v_88 = ATgetArgument(q_88, 0);
      w_88 = ATgetArgument(q_88, 1);
      {
        t = not_null(v_88);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm p_3 (ATerm t)
            {
              t = not_null(w_88);
              return(t);
            }
            t = split_2(t, _id, p_3);
            t = lookup_0(t);
            return(t);
          }
          t = j_83(t, o_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm e_101 (ATerm))
{
  ATerm e_89 = NULL,g_89 = NULL,h_89 = NULL;
  e_89 = t;
  c_89 :
  if(match_cons(e_89, sym__2))
    {
      g_89 = ATgetArgument(e_89, 0);
      h_89 = ATgetArgument(e_89, 1);
      {
        t = not_null(g_89);
        {
          ATerm q_3 (ATerm t)
          {
            ATerm k_89 = NULL;
            k_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_89), not_null(h_89));
              t = e_101(t);
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
ATerm env_alltd_1 (ATerm t, ATerm j_101 (ATerm))
{
  ATerm o_89 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_101(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = all_dist_1(t, o_89);
      }
    return(t);
  }
  t = o_89(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm h_84 (ATerm), ATerm i_84 (ATerm, ATerm (ATerm)), ATerm j_84 (ATerm), ATerm k_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_84 (ATerm, ATerm (ATerm)), ATerm m_84 (ATerm))
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
  t = subs_args_0(t);
  {
    r_89 = t;
    q_89 :
    if(match_cons(r_89, sym__2))
      {
        s_89 = ATgetArgument(r_89, 0);
        t_89 = ATgetArgument(r_89, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_89), (ATerm) ATempty);
          {
            ATerm y_89 (ATerm t)
            {
              ATerm r_3 (ATerm t)
              {
                ATerm d_23 = t;
                int g_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, i_84);
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
                            ATerm s_3 (ATerm t)
                            {
                              t = not_null(s_89);
                              return(t);
                            }
                            t = SubsVar_2(t, h_84, s_3);
                            t = m_84(t);
                          }
                          LocalPopChoice(i_23);
                        }
                      else
                        {
                          t = h_23;
                          {
                            t = RnBinding_2(t, j_84, l_84);
                            t = DistBinding_2(t, y_89, k_84);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, r_3);
              return(t);
            }
            t = y_89(t);
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
ATerm substitute_5 (ATerm t, ATerm o_84 (ATerm), ATerm p_84 (ATerm, ATerm (ATerm)), ATerm q_84 (ATerm), ATerm r_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_84 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, o_84, p_84, q_84, r_84, s_84, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm z_89 (ATerm t, ATerm a_90 (ATerm))
  {
    t = Scope_2(t, a_90, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, z_89);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm a_82 (ATerm))
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL;
  i_90 = t;
  h_90 :
  if(match_cons(i_90, sym_Op_2))
    {
      j_90 = ATgetArgument(i_90, 0);
      k_90 = ATgetArgument(i_90, 1);
      {
        ATerm s_90 = NULL,u_90 = NULL;
        t = a_82(t);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm j_23;
            j_23 = t;
            {
              ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL;
              v_90 = t;
              g_90 :
              if(match_cons(v_90, sym_Overlay_3))
                {
                  w_90 = ATgetArgument(v_90, 0);
                  x_90 = ATgetArgument(v_90, 1);
                  y_90 = ATgetArgument(v_90, 2);
                  {
                    ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL,d_91 = NULL;
                    if(((j_90 != NULL) && (j_90 != w_90)))
                      _fail(w_90);
                    else
                      j_90 = w_90;
                    {
                      if(((z_90 != NULL) && (z_90 != x_90)))
                        _fail(x_90);
                      else
                        z_90 = x_90;
                      {
                        if(((a_91 != NULL) && (a_91 != y_90)))
                          _fail(y_90);
                        else
                          a_91 = y_90;
                        {
                          ATerm k_23;
                          k_23 = t;
                          {
                            ATerm c_91 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_90), not_null(k_90));
                            {
                              t = zip_1(t, _id);
                              {
                                c_91 = t;
                                if(((b_91 != NULL) && (b_91 != c_91)))
                                  _fail(c_91);
                                else
                                  b_91 = c_91;
                              }
                            }
                          }
                          t = k_23;
                          {
                            ATerm e_91 = NULL;
                            t = not_null(b_91);
                            {
                              d_91 = t;
                              {
                                if(((s_90 != NULL) && (s_90 != d_91)))
                                  _fail(d_91);
                                else
                                  s_90 = d_91;
                                {
                                  t = not_null(a_91);
                                  {
                                    e_91 = t;
                                    {
                                      if(((u_90 != NULL) && (u_90 != e_91)))
                                        _fail(e_91);
                                      else
                                        u_90 = e_91;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_91), not_null(a_91));
                                    }
                                  }
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
          t = fetch_1(t, t_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_90), not_null(u_90));
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
ATerm exp_overlays1_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm l_23;
    l_23 = t;
    {
      ATerm m_23 = t;
      if((PushChoice() == 0))
        {
          ATerm l_91 = NULL;
          t = b_82(t);
          {
            l_91 = t;
            k_91 :
            if(((ATermList) l_91 == ATempty))
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
      ATerm v_3 (ATerm t)
      {
        ATerm w_3 (ATerm t)
        {
          t = ExpOverlay_1(t, b_82);
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
  ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL;
  z_91 = t;
  r_91 :
  if(match_cons(z_91, sym_Specification_1))
    {
      a_92 = ATgetArgument(z_91, 0);
      s_91 :
      if(((ATgetType(a_92) == AT_LIST) && ((ATermList) a_92 != ATempty)))
        {
          b_92 = ATgetFirst((ATermList) a_92);
          d_92 = (ATerm) ATgetNext((ATermList) a_92);
          t_91 :
          if(match_cons(b_92, sym_Signature_1))
            {
              c_92 = ATgetArgument(b_92, 0);
              u_91 :
              if(((ATgetType(d_92) == AT_LIST) && ((ATermList) d_92 != ATempty)))
                {
                  e_92 = ATgetFirst((ATermList) d_92);
                  i_92 = (ATerm) ATgetNext((ATermList) d_92);
                  v_91 :
                  if(match_cons(e_92, sym_Overlays_1))
                    {
                      f_92 = ATgetArgument(e_92, 0);
                      w_91 :
                      if(((ATgetType(i_92) == AT_LIST) && ((ATermList) i_92 != ATempty)))
                        {
                          j_92 = ATgetFirst((ATermList) i_92);
                          l_92 = (ATerm) ATgetNext((ATermList) i_92);
                          x_91 :
                          if(match_cons(j_92, sym_Strategies_1))
                            {
                              k_92 = ATgetArgument(j_92, 0);
                              y_91 :
                              if(((ATermList) l_92 == ATempty))
                                {
                                  {
                                    ATerm p_92 = NULL,r_92 = NULL;
                                    ATerm n_23;
                                    n_23 = t;
                                    {
                                      ATerm q_92 = NULL;
                                      t = not_null(f_92);
                                      {
                                        ATerm x_3 (ATerm t)
                                        {
                                          t = not_null(f_92);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, x_3);
                                        {
                                          q_92 = t;
                                          if(((p_92 != NULL) && (p_92 != q_92)))
                                            _fail(q_92);
                                          else
                                            p_92 = q_92;
                                        }
                                      }
                                    }
                                    t = n_23;
                                    {
                                      ATerm s_92 = NULL,u_92 = NULL,w_92 = NULL;
                                      ATerm r_23;
                                      r_23 = t;
                                      {
                                        ATerm t_92 = NULL;
                                        t = not_null(f_92);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            t_92 = t;
                                            if(((s_92 != NULL) && (s_92 != t_92)))
                                              _fail(t_92);
                                            else
                                              s_92 = t_92;
                                          }
                                        }
                                      }
                                      t = r_23;
                                      {
                                        ATerm v_92 = NULL;
                                        t = not_null(k_92);
                                        {
                                          ATerm y_3 (ATerm t)
                                          {
                                            t = not_null(p_92);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, y_3);
                                          {
                                            v_92 = t;
                                            if(((u_92 != NULL) && (u_92 != v_92)))
                                              _fail(v_92);
                                            else
                                              u_92 = v_92;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_92), not_null(u_92));
                                          {
                                            t = conc_0(t);
                                            {
                                              w_92 = t;
                                              if(((r_92 != NULL) && (r_92 != w_92)))
                                                _fail(w_92);
                                              else
                                                r_92 = w_92;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(r_92))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(c_92))));
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
    ATerm e_93 = NULL;
    ATerm f_93 = NULL;
    f_93 = t;
    if(((e_93 != NULL) && (e_93 != f_93)))
      _fail(f_93);
    else
      e_93 = f_93;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(e_93));
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
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
  l_93 = t;
  k_93 :
  if(match_cons(l_93, sym__3))
    {
      m_93 = ATgetArgument(l_93, 0);
      n_93 = ATgetArgument(l_93, 1);
      o_93 = ATgetArgument(l_93, 2);
      {
        ATerm x_93 = NULL,z_93 = NULL;
        ATerm z_23;
        z_23 = t;
        {
          ATerm y_93 = NULL;
          t = not_null(m_93);
          {
            t = MsgU_0(t);
            {
              y_93 = t;
              if(((x_93 != NULL) && (x_93 != y_93)))
                _fail(y_93);
              else
                x_93 = y_93;
            }
          }
        }
        t = z_23;
        {
          ATerm a_94 = NULL;
          t = not_null(o_93);
          {
            t = MsgE_0(t);
            {
              a_94 = t;
              if(((z_93 != NULL) && (z_93 != a_94)))
                _fail(a_94);
              else
                z_93 = a_94;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_93)), not_null(x_93));
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
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL;
  n_94 = t;
  h_94 :
  if(((ATgetType(n_94) == AT_LIST) && ((ATermList) n_94 != ATempty)))
    {
      l_94 = ATgetFirst((ATermList) n_94);
      m_94 = (ATerm) ATgetNext((ATermList) n_94);
      i_94 :
      if(((ATgetType(m_94) == AT_LIST) && ((ATermList) m_94 != ATempty)))
        {
          j_94 = ATgetFirst((ATermList) m_94);
          k_94 = (ATerm) ATgetNext((ATermList) m_94);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_94)), not_null(j_94)), not_null(l_94))), term_a_24);
        }
      else
        {
          if(((ATermList) m_94 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_24), not_null(l_94)), term_c_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) n_94 == ATempty))
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
  ATerm h_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL,s_95 = NULL;
  s_95 = t;
  d_95 :
  if(((ATgetType(s_95) == AT_LIST) && ((ATermList) s_95 != ATempty)))
    {
      q_95 = ATgetFirst((ATermList) s_95);
      r_95 = (ATerm) ATgetNext((ATermList) s_95);
      g_95 :
      if(((ATgetType(r_95) == AT_LIST) && ((ATermList) r_95 != ATempty)))
        {
          h_95 = ATgetFirst((ATermList) r_95);
          p_95 = (ATerm) ATgetNext((ATermList) r_95);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_95)), not_null(h_95)), not_null(q_95))), term_a_24);
        }
      else
        {
          if(((ATermList) r_95 == ATempty))
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_24), not_null(q_95)), term_c_24);
            }
          else
            {
              _fail(t);
            }
        }
    }
  else
    {
      if(((ATermList) s_95 == ATempty))
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
  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
  e_96 = t;
  d_96 :
  if(match_cons(e_96, sym__3))
    {
      f_96 = ATgetArgument(e_96, 0);
      g_96 = ATgetArgument(e_96, 1);
      h_96 = ATgetArgument(e_96, 2);
      {
        ATerm l_96 = NULL,n_96 = NULL;
        ATerm g_24;
        g_24 = t;
        {
          ATerm m_96 = NULL;
          t = not_null(f_96);
          {
            t = MsgU_0(t);
            {
              m_96 = t;
              if(((l_96 != NULL) && (l_96 != m_96)))
                _fail(m_96);
              else
                l_96 = m_96;
            }
          }
        }
        t = g_24;
        {
          ATerm o_96 = NULL;
          t = not_null(h_96);
          {
            t = MsgE_0(t);
            {
              o_96 = t;
              if(((n_96 != NULL) && (n_96 != o_96)))
                _fail(o_96);
              else
                n_96 = o_96;
            }
          }
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_96)), not_null(l_96));
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
  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
  z_96 = t;
  y_96 :
  if(match_cons(z_96, sym_Overlay_3))
    {
      a_97 = ATgetArgument(z_96, 0);
      b_97 = ATgetArgument(z_96, 1);
      c_97 = ATgetArgument(z_96, 2);
      {
        ATerm g_97 = NULL;
        ATerm h_97 = NULL;
        t = not_null(c_97);
        {
          t = map_1(t, MsgR_0);
          {
            t = concat_0(t);
            {
              h_97 = t;
              if(((g_97 != NULL) && (g_97 != h_97)))
                _fail(h_97);
              else
                g_97 = h_97;
            }
          }
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(g_97)), term_q_24), not_null(a_97)), term_p_24);
      }
    }
  else
    {
      if(match_cons(z_96, sym_SDef_3))
        {
          a_97 = ATgetArgument(z_96, 0);
          b_97 = ATgetArgument(z_96, 1);
          c_97 = ATgetArgument(z_96, 2);
          {
            ATerm l_97 = NULL;
            ATerm m_97 = NULL;
            t = not_null(c_97);
            {
              t = map_1(t, MsgS_0);
              {
                t = concat_0(t);
                {
                  m_97 = t;
                  if(((l_97 != NULL) && (l_97 != m_97)))
                    _fail(m_97);
                  else
                    l_97 = m_97;
                }
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_97)), term_q_24), not_null(a_97)), term_r_24);
          }
        }
      else
        {
          if(match_cons(z_96, sym_RDef_3))
            {
              a_97 = ATgetArgument(z_96, 0);
              b_97 = ATgetArgument(z_96, 1);
              c_97 = ATgetArgument(z_96, 2);
              {
                ATerm q_97 = NULL;
                ATerm s_97 = NULL;
                t = not_null(c_97);
                {
                  t = map_1(t, MsgR_0);
                  {
                    t = concat_0(t);
                    {
                      s_97 = t;
                      if(((q_97 != NULL) && (q_97 != s_97)))
                        _fail(s_97);
                      else
                        q_97 = s_97;
                    }
                  }
                }
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_97)), term_q_24), not_null(a_97)), term_x_24);
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
ATerm _3 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm))
{
  ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL;
  n_98 = t;
  m_98 :
  if(match_cons(n_98, sym__3))
    {
      o_98 = ATgetArgument(n_98, 0);
      p_98 = ATgetArgument(n_98, 1);
      q_98 = ATgetArgument(n_98, 2);
      {
        ATerm v_98 = NULL,x_98 = NULL;
        ATerm w_98 = NULL;
        t = SSLgetAnnotations(not_null(n_98));
        {
          w_98 = t;
          if(((v_98 != NULL) && (v_98 != w_98)))
            _fail(w_98);
          else
            v_98 = w_98;
        }
        {
          t = not_null(o_98);
          {
            ATerm z_98 = NULL;
            t = c_69(t);
            {
              x_98 = t;
              {
                t = not_null(p_98);
                {
                  ATerm b_99 = NULL;
                  t = d_69(t);
                  {
                    z_98 = t;
                    {
                      t = not_null(q_98);
                      {
                        ATerm d_99 = NULL;
                        t = e_69(t);
                        {
                          b_99 = t;
                          {
                            ATerm e_99 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__3, not_null(x_98), not_null(z_98), not_null(b_99)), not_null(v_98));
                            {
                              e_99 = t;
                              if(((d_99 != NULL) && (d_99 != e_99)))
                                _fail(e_99);
                              else
                                d_99 = e_99;
                            }
                            t = not_null(d_99);
                          }
                        }
                      }
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
ATerm Overlay_3 (ATerm t, ATerm h_77 (ATerm), ATerm i_77 (ATerm), ATerm j_77 (ATerm))
{
  ATerm w_99 = NULL,z_99 = NULL,a_100 = NULL,b_100 = NULL;
  w_99 = t;
  v_99 :
  if(match_cons(w_99, sym_Overlay_3))
    {
      z_99 = ATgetArgument(w_99, 0);
      a_100 = ATgetArgument(w_99, 1);
      b_100 = ATgetArgument(w_99, 2);
      {
        ATerm g_100 = NULL,i_100 = NULL;
        ATerm h_100 = NULL;
        t = SSLgetAnnotations(not_null(w_99));
        {
          h_100 = t;
          if(((g_100 != NULL) && (g_100 != h_100)))
            _fail(h_100);
          else
            g_100 = h_100;
        }
        {
          t = not_null(z_99);
          {
            ATerm k_100 = NULL;
            t = h_77(t);
            {
              i_100 = t;
              {
                t = not_null(a_100);
                {
                  ATerm m_100 = NULL;
                  t = i_77(t);
                  {
                    k_100 = t;
                    {
                      t = not_null(b_100);
                      {
                        ATerm q_100 = NULL;
                        t = j_77(t);
                        {
                          m_100 = t;
                          {
                            ATerm r_100 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlay_3, not_null(i_100), not_null(k_100), not_null(m_100)), not_null(g_100));
                            {
                              r_100 = t;
                              if(((q_100 != NULL) && (q_100 != r_100)))
                                _fail(r_100);
                              else
                                q_100 = r_100;
                            }
                            t = not_null(q_100);
                          }
                        }
                      }
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
  ATerm i_101 = NULL;
  ATerm m_101 = NULL,n_101 = NULL,o_101 = NULL;
  i_101 = t;
  {
    ATerm p_101 = NULL;
    ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,z_101 = NULL;
    t = not_null(i_101);
    {
      p_101 = t;
      {
        t = SSL_explode_term(not_null(p_101));
        {
          r_101 = t;
          c_101 :
          if(match_cons(r_101, sym__2))
            {
              s_101 = ATgetArgument(r_101, 0);
              t_101 = ATgetArgument(r_101, 1);
              d_101 :
              if(match_string(s_101, ""))
                {
                  g_101 :
                  if(((ATgetType(t_101) == AT_LIST) && ((ATermList) t_101 != ATempty)))
                    {
                      u_101 = ATgetFirst((ATermList) t_101);
                      v_101 = (ATerm) ATgetNext((ATermList) t_101);
                      h_101 :
                      if(((ATgetType(v_101) == AT_LIST) && ((ATermList) v_101 != ATempty)))
                        {
                          w_101 = ATgetFirst((ATermList) v_101);
                          z_101 = (ATerm) ATgetNext((ATermList) v_101);
                          {
                            if(((m_101 != NULL) && (m_101 != u_101)))
                              _fail(u_101);
                            else
                              m_101 = u_101;
                            {
                              if(((o_101 != NULL) && (o_101 != w_101)))
                                _fail(w_101);
                              else
                                o_101 = w_101;
                              if(((n_101 != NULL) && (n_101 != z_101)))
                                _fail(z_101);
                              else
                                n_101 = z_101;
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
    t = not_null(o_101);
  }
  return(t);
}
ATerm explode_term_0 (ATerm t)
{
  ATerm e_102 = NULL;
  e_102 = t;
  t = SSL_explode_term(not_null(e_102));
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
        t = (ATerm) ATinsert(ATempty, term_y_24);
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
  ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,w_102 = NULL,x_102 = NULL;
  p_102 = t;
  m_102 :
  if(match_cons(p_102, sym__2))
    {
      q_102 = ATgetArgument(p_102, 0);
      u_102 = ATgetArgument(p_102, 1);
      n_102 :
      if(match_cons(q_102, sym__3))
        {
          r_102 = ATgetArgument(q_102, 0);
          s_102 = ATgetArgument(q_102, 1);
          t_102 = ATgetArgument(q_102, 2);
          o_102 :
          if(match_cons(u_102, sym__3))
            {
              v_102 = ATgetArgument(u_102, 0);
              w_102 = ATgetArgument(u_102, 1);
              x_102 = ATgetArgument(u_102, 2);
              {
                ATerm e_103 = NULL,i_103 = NULL,k_103 = NULL;
                ATerm z_24;
                z_24 = t;
                {
                  ATerm f_103 = NULL,h_103 = NULL;
                  ATerm g_103 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_102), not_null(s_102));
                  {
                    t = diff_0(t);
                    {
                      g_103 = t;
                      if(((f_103 != NULL) && (f_103 != g_103)))
                        _fail(g_103);
                      else
                        f_103 = g_103;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_102), not_null(f_103));
                    {
                      t = union_0(t);
                      {
                        h_103 = t;
                        if(((e_103 != NULL) && (e_103 != h_103)))
                          _fail(h_103);
                        else
                          e_103 = h_103;
                      }
                    }
                  }
                }
                t = z_24;
                {
                  ATerm a_25;
                  a_25 = t;
                  {
                    ATerm j_103 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_102), not_null(w_102));
                    {
                      t = union_0(t);
                      {
                        j_103 = t;
                        if(((i_103 != NULL) && (i_103 != j_103)))
                          _fail(j_103);
                        else
                          i_103 = j_103;
                      }
                    }
                  }
                  t = a_25;
                  {
                    ATerm l_103 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_102), not_null(x_102));
                    {
                      t = union_0(t);
                      {
                        l_103 = t;
                        if(((k_103 != NULL) && (k_103 != l_103)))
                          _fail(l_103);
                        else
                          k_103 = l_103;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(e_103), not_null(i_103), not_null(k_103));
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
    t = (ATerm) ATinsert(ATempty, term_y_24);
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
ATerm JoinScope_1 (ATerm t, ATerm w_80 (ATerm))
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,d_104 = NULL;
  a_104 = t;
  x_103 :
  if(match_cons(a_104, sym__3))
    {
      b_104 = ATgetArgument(a_104, 0);
      c_104 = ATgetArgument(a_104, 1);
      d_104 = ATgetArgument(a_104, 2);
      {
        ATerm h_104 = NULL,l_104 = NULL;
        ATerm b_25;
        b_25 = t;
        {
          ATerm i_104 = NULL,k_104 = NULL;
          ATerm j_104 = NULL;
          t = term_z_18;
          {
            t = w_80(t);
            {
              j_104 = t;
              if(((i_104 != NULL) && (i_104 != j_104)))
                _fail(j_104);
              else
                i_104 = j_104;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_104), not_null(i_104));
            {
              t = diff_0(t);
              {
                k_104 = t;
                if(((h_104 != NULL) && (h_104 != k_104)))
                  _fail(k_104);
                else
                  h_104 = k_104;
              }
            }
          }
        }
        t = b_25;
        {
          ATerm m_104 = NULL,q_104 = NULL;
          ATerm n_104 = NULL,p_104 = NULL;
          ATerm o_104 = NULL;
          t = term_z_18;
          {
            t = w_80(t);
            {
              o_104 = t;
              if(((n_104 != NULL) && (n_104 != o_104)))
                _fail(o_104);
              else
                n_104 = o_104;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_104), not_null(n_104));
            {
              t = isect_0(t);
              {
                p_104 = t;
                if(((m_104 != NULL) && (m_104 != p_104)))
                  _fail(p_104);
                else
                  m_104 = p_104;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_104), not_null(d_104));
            {
              t = conc_0(t);
              {
                q_104 = t;
                if(((l_104 != NULL) && (l_104 != q_104)))
                  _fail(q_104);
                else
                  l_104 = q_104;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(b_104), not_null(h_104), not_null(l_104));
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
  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL;
  e_105 = t;
  b_105 :
  if(match_cons(e_105, sym__2))
    {
      f_105 = ATgetArgument(e_105, 0);
      j_105 = ATgetArgument(e_105, 1);
      c_105 :
      if(match_cons(f_105, sym__3))
        {
          g_105 = ATgetArgument(f_105, 0);
          h_105 = ATgetArgument(f_105, 1);
          i_105 = ATgetArgument(f_105, 2);
          d_105 :
          if(match_cons(j_105, sym__3))
            {
              k_105 = ATgetArgument(j_105, 0);
              l_105 = ATgetArgument(j_105, 1);
              m_105 = ATgetArgument(j_105, 2);
              {
                ATerm v_105 = NULL,x_105 = NULL,z_105 = NULL;
                ATerm c_25;
                c_25 = t;
                {
                  ATerm w_105 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_105), not_null(k_105));
                  {
                    t = union_0(t);
                    {
                      w_105 = t;
                      if(((v_105 != NULL) && (v_105 != w_105)))
                        _fail(w_105);
                      else
                        v_105 = w_105;
                    }
                  }
                }
                t = c_25;
                {
                  ATerm d_25;
                  d_25 = t;
                  {
                    ATerm y_105 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(h_105), not_null(l_105));
                    {
                      t = union_0(t);
                      {
                        y_105 = t;
                        if(((x_105 != NULL) && (x_105 != y_105)))
                          _fail(y_105);
                        else
                          x_105 = y_105;
                      }
                    }
                  }
                  t = d_25;
                  {
                    ATerm a_106 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_105), not_null(m_105));
                    {
                      t = union_0(t);
                      {
                        a_106 = t;
                        if(((z_105 != NULL) && (z_105 != a_106)))
                          _fail(a_106);
                        else
                          z_105 = a_106;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(v_105), not_null(x_105), not_null(z_105));
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
ATerm cart_1 (ATerm t, ATerm r_97 (ATerm))
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  l_106 = t;
  k_106 :
  if(match_cons(l_106, sym__2))
    {
      m_106 = ATgetArgument(l_106, 0);
      n_106 = ATgetArgument(l_106, 1);
      {
        t = not_null(m_106);
        {
          ATerm d_4 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm e_4 (ATerm t)
          {
            ATerm q_106 = NULL;
            q_106 = t;
            {
              t = not_null(n_106);
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm s_106 = NULL;
                  s_106 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_106), not_null(s_106));
                    t = r_97(t);
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
  ATerm s_107 = NULL,t_107 = NULL,u_107 = NULL,v_107 = NULL;
  u_107 = t;
  r_107 :
  if(match_cons(u_107, sym_GuardedLChoice_3))
    {
      v_107 = ATgetArgument(u_107, 0);
      t_107 = ATgetArgument(u_107, 1);
      s_107 = ATgetArgument(u_107, 2);
      {
        ATerm g_108 = NULL;
        ATerm h_108 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_107)), not_null(v_107));
        {
          t = seqs_join_0(t);
          {
            h_108 = t;
            if(((g_108 != NULL) && (g_108 != h_108)))
              _fail(h_108);
            else
              g_108 = h_108;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_108), not_null(s_107));
          t = cart_1(t, Union_0);
        }
      }
    }
  else
    {
      if(match_cons(u_107, sym_Overlay_3))
        {
          v_107 = ATgetArgument(u_107, 0);
          t_107 = ATgetArgument(u_107, 1);
          s_107 = ATgetArgument(u_107, 2);
          {
            ATerm l_108 = NULL;
            ATerm m_108 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_107)), (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(t_107), (ATerm) ATempty));
            {
              t = seqs_join_0(t);
              {
                m_108 = t;
                if(((l_108 != NULL) && (l_108 != m_108)))
                  _fail(m_108);
                else
                  l_108 = m_108;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(v_107), not_null(t_107), not_null(l_108));
          }
        }
      else
        {
          if(match_cons(u_107, sym_Scope_2))
            {
              v_107 = ATgetArgument(u_107, 0);
              t_107 = ATgetArgument(u_107, 1);
              {
                t = not_null(t_107);
                {
                  ATerm g_4 (ATerm t)
                  {
                    ATerm h_4 (ATerm t)
                    {
                      t = not_null(v_107);
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
              if(match_cons(u_107, sym_Cong_2))
                {
                  v_107 = ATgetArgument(u_107, 0);
                  t_107 = ATgetArgument(u_107, 1);
                  {
                    t = not_null(t_107);
                    t = seqs_join_0(t);
                  }
                }
              else
                {
                  if(match_cons(u_107, sym_BAM_3))
                    {
                      v_107 = ATgetArgument(u_107, 0);
                      t_107 = ATgetArgument(u_107, 1);
                      s_107 = ATgetArgument(u_107, 2);
                      {
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_107)), not_null(v_107)), not_null(t_107));
                        t = seqs_join_0(t);
                      }
                    }
                  else
                    {
                      if(match_cons(u_107, sym_BA_2))
                        {
                          v_107 = ATgetArgument(u_107, 0);
                          t_107 = ATgetArgument(u_107, 1);
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_107)), not_null(t_107));
                            t = seqs_join_0(t);
                          }
                        }
                      else
                        {
                          if(match_cons(u_107, sym_AM_2))
                            {
                              v_107 = ATgetArgument(u_107, 0);
                              t_107 = ATgetArgument(u_107, 1);
                              {
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_107)), not_null(v_107));
                                t = seqs_join_0(t);
                              }
                            }
                          else
                            {
                              if(match_cons(u_107, sym_MA_2))
                                {
                                  v_107 = ATgetArgument(u_107, 0);
                                  t_107 = ATgetArgument(u_107, 1);
                                  {
                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_107)), not_null(v_107));
                                    t = seqs_join_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(u_107, sym_StratRule_3))
                                    {
                                      v_107 = ATgetArgument(u_107, 0);
                                      t_107 = ATgetArgument(u_107, 1);
                                      s_107 = ATgetArgument(u_107, 2);
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_107)), not_null(s_107)), not_null(v_107));
                                        t = seqs_join_0(t);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(u_107, sym_Rule_3))
                                        {
                                          v_107 = ATgetArgument(u_107, 0);
                                          t_107 = ATgetArgument(u_107, 1);
                                          s_107 = ATgetArgument(u_107, 2);
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_107)), not_null(s_107)), not_null(v_107));
                                            t = seqs_join_0(t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(u_107, sym_Seq_2))
                                            {
                                              v_107 = ATgetArgument(u_107, 0);
                                              t_107 = ATgetArgument(u_107, 1);
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_107)), not_null(v_107));
                                                t = seqs_join_0(t);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(u_107, sym_Seqs_1))
                                                {
                                                  v_107 = ATgetArgument(u_107, 0);
                                                  {
                                                    t = not_null(v_107);
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
ATerm Cong_2 (ATerm t, ATerm o_79 (ATerm), ATerm p_79 (ATerm))
{
  ATerm h_110 = NULL,i_110 = NULL,j_110 = NULL;
  h_110 = t;
  g_110 :
  if(match_cons(h_110, sym_Cong_2))
    {
      i_110 = ATgetArgument(h_110, 0);
      j_110 = ATgetArgument(h_110, 1);
      {
        ATerm n_110 = NULL,p_110 = NULL;
        ATerm o_110 = NULL;
        t = SSLgetAnnotations(not_null(h_110));
        {
          o_110 = t;
          if(((n_110 != NULL) && (n_110 != o_110)))
            _fail(o_110);
          else
            n_110 = o_110;
        }
        {
          t = not_null(i_110);
          {
            ATerm r_110 = NULL;
            t = o_79(t);
            {
              p_110 = t;
              {
                t = not_null(j_110);
                {
                  ATerm t_110 = NULL;
                  t = p_79(t);
                  {
                    r_110 = t;
                    {
                      ATerm u_110 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(p_110), not_null(r_110)), not_null(n_110));
                      {
                        u_110 = t;
                        if(((t_110 != NULL) && (t_110 != u_110)))
                          _fail(u_110);
                        else
                          t_110 = u_110;
                      }
                      t = not_null(t_110);
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
  ATerm b_111 = NULL;
  ATerm c_111 = NULL;
  t = tvars_0(t);
  {
    c_111 = t;
    if(((b_111 != NULL) && (b_111 != c_111)))
      _fail(c_111);
    else
      b_111 = c_111;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, not_null(b_111), (ATerm)ATempty, (ATerm) ATempty));
  return(t);
}
ATerm def_term_0 (ATerm t)
{
  ATerm f_111 = NULL;
  ATerm g_111 = NULL;
  t = tvars_0(t);
  {
    g_111 = t;
    if(((f_111 != NULL) && (f_111 != g_111)))
      _fail(g_111);
    else
      f_111 = g_111;
  }
  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(f_111), (ATerm) ATempty));
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm u_76 (ATerm))
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
  p_111 = t;
  o_111 :
  if(match_cons(p_111, sym_Rule_3))
    {
      q_111 = ATgetArgument(p_111, 0);
      r_111 = ATgetArgument(p_111, 1);
      s_111 = ATgetArgument(p_111, 2);
      {
        ATerm x_111 = NULL,z_111 = NULL;
        ATerm y_111 = NULL;
        t = SSLgetAnnotations(not_null(p_111));
        {
          y_111 = t;
          if(((x_111 != NULL) && (x_111 != y_111)))
            _fail(y_111);
          else
            x_111 = y_111;
        }
        {
          t = not_null(q_111);
          {
            ATerm b_112 = NULL;
            t = s_76(t);
            {
              z_111 = t;
              {
                t = not_null(r_111);
                {
                  ATerm d_112 = NULL;
                  t = t_76(t);
                  {
                    b_112 = t;
                    {
                      t = not_null(s_111);
                      {
                        ATerm f_112 = NULL;
                        t = u_76(t);
                        {
                          d_112 = t;
                          {
                            ATerm g_112 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(z_111), not_null(b_112), not_null(d_112)), not_null(x_111));
                            {
                              g_112 = t;
                              if(((f_112 != NULL) && (f_112 != g_112)))
                                _fail(g_112);
                              else
                                f_112 = g_112;
                            }
                            t = not_null(f_112);
                          }
                        }
                      }
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
ATerm BAM_3 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm))
{
  ATerm u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL;
  u_112 = t;
  t_112 :
  if(match_cons(u_112, sym_BAM_3))
    {
      v_112 = ATgetArgument(u_112, 0);
      w_112 = ATgetArgument(u_112, 1);
      x_112 = ATgetArgument(u_112, 2);
      {
        ATerm c_113 = NULL,e_113 = NULL;
        ATerm d_113 = NULL;
        t = SSLgetAnnotations(not_null(u_112));
        {
          d_113 = t;
          if(((c_113 != NULL) && (c_113 != d_113)))
            _fail(d_113);
          else
            c_113 = d_113;
        }
        {
          t = not_null(v_112);
          {
            ATerm g_113 = NULL;
            t = w_75(t);
            {
              e_113 = t;
              {
                t = not_null(w_112);
                {
                  ATerm i_113 = NULL;
                  t = x_75(t);
                  {
                    g_113 = t;
                    {
                      t = not_null(x_112);
                      {
                        ATerm k_113 = NULL;
                        t = y_75(t);
                        {
                          i_113 = t;
                          {
                            ATerm l_113 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BAM_3, not_null(e_113), not_null(g_113), not_null(i_113)), not_null(c_113));
                            {
                              l_113 = t;
                              if(((k_113 != NULL) && (k_113 != l_113)))
                                _fail(l_113);
                              else
                                k_113 = l_113;
                            }
                            t = not_null(k_113);
                          }
                        }
                      }
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
ATerm BA_2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL;
  y_113 = t;
  x_113 :
  if(match_cons(y_113, sym_BA_2))
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
            t = u_75(t);
            {
              g_114 = t;
              {
                t = not_null(a_114);
                {
                  ATerm k_114 = NULL;
                  t = v_75(t);
                  {
                    i_114 = t;
                    {
                      ATerm l_114 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BA_2, not_null(g_114), not_null(i_114)), not_null(e_114));
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
ATerm AM_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
  x_114 = t;
  w_114 :
  if(match_cons(x_114, sym_AM_2))
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
            t = s_75(t);
            {
              f_115 = t;
              {
                t = not_null(z_114);
                {
                  ATerm j_115 = NULL;
                  t = t_75(t);
                  {
                    h_115 = t;
                    {
                      ATerm k_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AM_2, not_null(f_115), not_null(h_115)), not_null(d_115));
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
ATerm MA_2 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL;
  w_115 = t;
  v_115 :
  if(match_cons(w_115, sym_MA_2))
    {
      x_115 = ATgetArgument(w_115, 0);
      y_115 = ATgetArgument(w_115, 1);
      {
        ATerm c_116 = NULL,e_116 = NULL;
        ATerm d_116 = NULL;
        t = SSLgetAnnotations(not_null(w_115));
        {
          d_116 = t;
          if(((c_116 != NULL) && (c_116 != d_116)))
            _fail(d_116);
          else
            c_116 = d_116;
        }
        {
          t = not_null(x_115);
          {
            ATerm g_116 = NULL;
            t = q_75(t);
            {
              e_116 = t;
              {
                t = not_null(y_115);
                {
                  ATerm i_116 = NULL;
                  t = r_75(t);
                  {
                    g_116 = t;
                    {
                      ATerm j_116 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MA_2, not_null(e_116), not_null(g_116)), not_null(c_116));
                      {
                        j_116 = t;
                        if(((i_116 != NULL) && (i_116 != j_116)))
                          _fail(j_116);
                        else
                          i_116 = j_116;
                      }
                      t = not_null(i_116);
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
ATerm Match_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm u_116 = NULL,v_116 = NULL;
  u_116 = t;
  t_116 :
  if(match_cons(u_116, sym_Match_1))
    {
      v_116 = ATgetArgument(u_116, 0);
      {
        ATerm y_116 = NULL,a_117 = NULL;
        ATerm z_116 = NULL;
        t = SSLgetAnnotations(not_null(u_116));
        {
          z_116 = t;
          if(((y_116 != NULL) && (y_116 != z_116)))
            _fail(z_116);
          else
            y_116 = z_116;
        }
        {
          t = not_null(v_116);
          {
            ATerm c_117 = NULL;
            t = w_79(t);
            {
              a_117 = t;
              {
                ATerm d_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(a_117)), not_null(y_116));
                {
                  d_117 = t;
                  if(((c_117 != NULL) && (c_117 != d_117)))
                    _fail(d_117);
                  else
                    c_117 = d_117;
                }
                t = not_null(c_117);
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
ATerm Build_1 (ATerm t, ATerm x_79 (ATerm))
{
  ATerm n_117 = NULL,o_117 = NULL;
  n_117 = t;
  m_117 :
  if(match_cons(n_117, sym_Build_1))
    {
      o_117 = ATgetArgument(n_117, 0);
      {
        ATerm r_117 = NULL,t_117 = NULL;
        ATerm s_117 = NULL;
        t = SSLgetAnnotations(not_null(n_117));
        {
          s_117 = t;
          if(((r_117 != NULL) && (r_117 != s_117)))
            _fail(s_117);
          else
            r_117 = s_117;
        }
        {
          t = not_null(o_117);
          {
            ATerm v_117 = NULL;
            t = x_79(t);
            {
              t_117 = t;
              {
                ATerm w_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_117)), not_null(r_117));
                {
                  w_117 = t;
                  if(((v_117 != NULL) && (v_117 != w_117)))
                    _fail(w_117);
                  else
                    v_117 = w_117;
                }
                t = not_null(v_117);
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
ATerm constructs_1 (ATerm t, ATerm v_80 (ATerm))
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
                  t = MA_2(t, def_term_0, v_80);
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
                        t = AM_2(t, v_80, def_term_0);
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
                              t = BA_2(t, v_80, use_term_0);
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
                                    t = BAM_3(t, v_80, use_term_0, def_term_0);
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
                                          t = Scope_2(t, _id, v_80);
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
                                                t = Rule_3(t, def_term_0, use_term_0, v_80);
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
                                                        ATerm i_4 (ATerm t)
                                                        {
                                                          t = map_1(t, v_80);
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
ATerm RDef_3 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL;
  j_118 = t;
  i_118 :
  if(match_cons(j_118, sym_RDef_3))
    {
      k_118 = ATgetArgument(j_118, 0);
      l_118 = ATgetArgument(j_118, 1);
      m_118 = ATgetArgument(j_118, 2);
      {
        ATerm r_118 = NULL,t_118 = NULL;
        ATerm s_118 = NULL;
        t = SSLgetAnnotations(not_null(j_118));
        {
          s_118 = t;
          if(((r_118 != NULL) && (r_118 != s_118)))
            _fail(s_118);
          else
            r_118 = s_118;
        }
        {
          t = not_null(k_118);
          {
            ATerm v_118 = NULL;
            t = a_77(t);
            {
              t_118 = t;
              {
                t = not_null(l_118);
                {
                  ATerm x_118 = NULL;
                  t = b_77(t);
                  {
                    v_118 = t;
                    {
                      t = not_null(m_118);
                      {
                        ATerm z_118 = NULL;
                        t = c_77(t);
                        {
                          x_118 = t;
                          {
                            ATerm a_119 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDef_3, not_null(t_118), not_null(v_118), not_null(x_118)), not_null(r_118));
                            {
                              a_119 = t;
                              if(((z_118 != NULL) && (z_118 != a_119)))
                                _fail(a_119);
                              else
                                z_118 = a_119;
                            }
                            t = not_null(z_118);
                          }
                        }
                      }
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
ATerm SDef_3 (ATerm t, ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm o_119 = NULL,p_119 = NULL,q_119 = NULL,r_119 = NULL;
  o_119 = t;
  n_119 :
  if(match_cons(o_119, sym_SDef_3))
    {
      p_119 = ATgetArgument(o_119, 0);
      q_119 = ATgetArgument(o_119, 1);
      r_119 = ATgetArgument(o_119, 2);
      {
        ATerm w_119 = NULL,y_119 = NULL;
        ATerm x_119 = NULL;
        t = SSLgetAnnotations(not_null(o_119));
        {
          x_119 = t;
          if(((w_119 != NULL) && (w_119 != x_119)))
            _fail(x_119);
          else
            w_119 = x_119;
        }
        {
          t = not_null(p_119);
          {
            ATerm a_120 = NULL;
            t = a_79(t);
            {
              y_119 = t;
              {
                t = not_null(q_119);
                {
                  ATerm c_120 = NULL;
                  t = b_79(t);
                  {
                    a_120 = t;
                    {
                      t = not_null(r_119);
                      {
                        ATerm e_120 = NULL;
                        t = c_79(t);
                        {
                          c_120 = t;
                          {
                            ATerm f_120 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(y_119), not_null(a_120), not_null(c_120)), not_null(w_119));
                            {
                              f_120 = t;
                              if(((e_120 != NULL) && (e_120 != f_120)))
                                _fail(f_120);
                              else
                                e_120 = f_120;
                            }
                            t = not_null(e_120);
                          }
                        }
                      }
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
      ATerm j_4 (ATerm t)
      {
        t = use_def_0(t);
        {
          ATerm w_26 = t;
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
              t = w_26;
            }
        }
        return(t);
      }
      t = SDef_3(t, _id, _id, j_4);
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
            ATerm l_4 (ATerm t)
            {
              t = use_def_0(t);
              {
                ATerm z_26 = t;
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
                    t = z_26;
                  }
              }
              return(t);
            }
            t = RDef_3(t, _id, _id, l_4);
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
  ATerm n_120 = NULL;
  t = filter_1(t, check_0);
  {
    n_120 = t;
    m_120 :
    if(((ATermList) n_120 == ATempty))
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
ATerm Overlays_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm t_120 = NULL,u_120 = NULL;
  t_120 = t;
  s_120 :
  if(match_cons(t_120, sym_Overlays_1))
    {
      u_120 = ATgetArgument(t_120, 0);
      {
        ATerm x_120 = NULL,z_120 = NULL;
        ATerm y_120 = NULL;
        t = SSLgetAnnotations(not_null(t_120));
        {
          y_120 = t;
          if(((x_120 != NULL) && (x_120 != y_120)))
            _fail(y_120);
          else
            x_120 = y_120;
        }
        {
          t = not_null(u_120);
          {
            ATerm b_121 = NULL;
            t = l_77(t);
            {
              z_120 = t;
              {
                ATerm c_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(z_120)), not_null(x_120));
                {
                  c_121 = t;
                  if(((b_121 != NULL) && (b_121 != c_121)))
                    _fail(c_121);
                  else
                    b_121 = c_121;
                }
                t = not_null(b_121);
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
ATerm Signature_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm m_121 = NULL,n_121 = NULL;
  m_121 = t;
  l_121 :
  if(match_cons(m_121, sym_Signature_1))
    {
      n_121 = ATgetArgument(m_121, 0);
      {
        ATerm q_121 = NULL,s_121 = NULL;
        ATerm r_121 = NULL;
        t = SSLgetAnnotations(not_null(m_121));
        {
          r_121 = t;
          if(((q_121 != NULL) && (q_121 != r_121)))
            _fail(r_121);
          else
            q_121 = r_121;
        }
        {
          t = not_null(n_121);
          {
            ATerm u_121 = NULL;
            t = k_77(t);
            {
              s_121 = t;
              {
                ATerm v_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(s_121)), not_null(q_121));
                {
                  v_121 = t;
                  if(((u_121 != NULL) && (u_121 != v_121)))
                    _fail(v_121);
                  else
                    u_121 = v_121;
                }
                t = not_null(u_121);
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
  ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,k_122 = NULL;
  e_122 = t;
  b_122 :
  if(match_cons(e_122, sym__2))
    {
      f_122 = ATgetArgument(e_122, 0);
      i_122 = ATgetArgument(e_122, 1);
      c_122 :
      if(match_cons(f_122, sym__2))
        {
          g_122 = ATgetArgument(f_122, 0);
          h_122 = ATgetArgument(f_122, 1);
          d_122 :
          if(match_cons(i_122, sym__2))
            {
              j_122 = ATgetArgument(i_122, 0);
              k_122 = ATgetArgument(i_122, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_122)), not_null(g_122)), (ATerm) ATinsert(CheckATermList(not_null(k_122)), not_null(h_122)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm s_122 = NULL,t_122 = NULL,u_122 = NULL;
  s_122 = t;
  r_122 :
  if(((ATgetType(s_122) == AT_LIST) && ((ATermList) s_122 != ATempty)))
    {
      t_122 = ATgetFirst((ATermList) s_122);
      u_122 = (ATerm) ATgetNext((ATermList) s_122);
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_122), not_null(u_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm a_123 = NULL;
  a_123 = t;
  z_122 :
  if(((ATermList) a_123 == ATempty))
    {
      t = term_c_27;
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
    ATerm d_123 = NULL;
    d_123 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_123));
    return(t);
  }
  t = map_1(t, v_4);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm i_95 (ATerm))
{
  ATerm k_123 = NULL,l_123 = NULL,m_123 = NULL;
  k_123 = t;
  j_123 :
  if(match_cons(k_123, sym__2))
    {
      l_123 = ATgetArgument(k_123, 0);
      m_123 = ATgetArgument(k_123, 1);
      {
        t = not_null(l_123);
        {
          ATerm u_123 (ATerm t)
          {
            ATerm d_27 = t;
            int e_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(e_27);
              }
            else
              {
                t = d_27;
                {
                  ATerm f_27 = t;
                  int g_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_27;
                      h_27 = t;
                      {
                        ATerm w_4 (ATerm t)
                        {
                          t = not_null(m_123);
                          return(t);
                        }
                        t = HdMember_p__2(t, i_95, w_4);
                      }
                      t = h_27;
                      t = Cons_2(t, _id, u_123);
                      LocalPopChoice(g_27);
                    }
                  else
                    {
                      t = f_27;
                      {
                        ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL;
                        p_123 = t;
                        i_123 :
                        if(((ATgetType(p_123) == AT_LIST) && ((ATermList) p_123 != ATempty)))
                          {
                            q_123 = ATgetFirst((ATermList) p_123);
                            r_123 = (ATerm) ATgetNext((ATermList) p_123);
                            {
                              t = not_null(r_123);
                              t = u_123(t);
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
          t = u_123(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  t = isect_1(t, eq_0);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm SplitDynamicRule_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL;
  ATerm g_126 (ATerm t)
  {
    ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL,s_125 = NULL;
    ATerm i_27;
    i_27 = t;
    {
      ATerm h_125 = NULL,j_125 = NULL,l_125 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_124), term_m_27);
      {
        ATerm n_27 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_27;
          }
        {
          ATerm o_27;
          o_27 = t;
          {
            ATerm i_125 = NULL;
            t = term_z_18;
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
          t = o_27;
          {
            ATerm k_125 = NULL;
            t = not_null(u_124);
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
                  ATerm m_125 = NULL,o_125 = NULL,q_125 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    l_125 = t;
                    {
                      if(((e_125 != NULL) && (e_125 != l_125)))
                        _fail(l_125);
                      else
                        e_125 = l_125;
                      {
                        ATerm p_27;
                        p_27 = t;
                        {
                          ATerm n_125 = NULL;
                          t = term_z_18;
                          {
                            t = q_0(t);
                            {
                              n_125 = t;
                              if(((m_125 != NULL) && (m_125 != n_125)))
                                _fail(n_125);
                              else
                                m_125 = n_125;
                            }
                          }
                        }
                        t = p_27;
                        {
                          ATerm p_125 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_124), not_null(y_124));
                          {
                            t = tvars_0(t);
                            {
                              p_125 = t;
                              if(((o_125 != NULL) && (o_125 != p_125)))
                                _fail(p_125);
                              else
                                o_125 = p_125;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_125), not_null(o_125));
                            {
                              t = isect_0(t);
                              {
                                ATerm r_125 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  q_125 = t;
                                  {
                                    if(((f_125 != NULL) && (f_125 != q_125)))
                                      _fail(q_125);
                                    else
                                      f_125 = q_125;
                                    {
                                      t = new_0(t);
                                      {
                                        r_125 = t;
                                        if(((g_125 != NULL) && (g_125 != r_125)))
                                          _fail(r_125);
                                        else
                                          g_125 = r_125;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = i_27;
    {
      ATerm t_125 = NULL;
      t = not_null(r_124);
      {
        t = r_0(t);
        {
          t_125 = t;
          if(((s_125 != NULL) && (s_125 != t_125)))
            _fail(t_125);
          else
            s_125 = t_125;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(s_125), (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_r_27, (ATerm) ATinsert(CheckATermList(not_null(f_125)), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_125))))), (ATerm) ATmakeAppl(sym_Op_2, term_q_27, not_null(e_125)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_124), not_null(s_124), (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_124), not_null(v_124), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_t_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_124))))), (ATerm)ATmakeAppl(sym_Op_2, term_q_27, not_null(e_125)), (ATerm) ATmakeAppl(sym_Op_2, term_r_27, (ATerm) ATinsert(CheckATermList(not_null(f_125)), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_125))))), not_null(y_124)))));
    }
    return(t);
  }
  ATerm h_126 (ATerm t)
  {
    ATerm y_125 = NULL,e_126 = NULL;
    ATerm u_27;
    u_27 = t;
    {
      ATerm z_125 = NULL,b_126 = NULL,d_126 = NULL;
      ATerm v_27;
      v_27 = t;
      {
        ATerm a_126 = NULL;
        t = term_z_18;
        {
          t = q_0(t);
          {
            a_126 = t;
            if(((z_125 != NULL) && (z_125 != a_126)))
              _fail(a_126);
            else
              z_125 = a_126;
          }
        }
      }
      t = v_27;
      {
        ATerm c_126 = NULL;
        t = not_null(u_124);
        {
          t = tvars_0(t);
          {
            c_126 = t;
            if(((b_126 != NULL) && (b_126 != c_126)))
              _fail(c_126);
            else
              b_126 = c_126;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_125), not_null(b_126));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                d_126 = t;
                if(((y_125 != NULL) && (y_125 != d_126)))
                  _fail(d_126);
                else
                  y_125 = d_126;
              }
            }
          }
        }
      }
    }
    t = u_27;
    {
      ATerm f_126 = NULL;
      t = not_null(r_124);
      {
        t = r_0(t);
        {
          f_126 = t;
          if(((e_126 != NULL) && (e_126 != f_126)))
            _fail(f_126);
          else
            e_126 = f_126;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(e_126), (ATerm) ATmakeAppl(sym_Op_2, term_d_9, (ATerm) ATinsert(ATinsert(ATempty, term_m_27), (ATerm) ATmakeAppl(sym_Op_2, term_q_27, not_null(y_125)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_124), not_null(s_124), (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_124), term_w_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_t_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_124))))), (ATerm)ATmakeAppl(sym_Op_2, term_q_27, not_null(y_125)), term_m_27), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_124), term_u_13)))));
    }
    return(t);
  }
  q_124 = t;
  k_124 :
  if(match_cons(q_124, sym_RDef_3))
    {
      r_124 = ATgetArgument(q_124, 0);
      s_124 = ATgetArgument(q_124, 1);
      t_124 = ATgetArgument(q_124, 2);
      l_124 :
      if(match_cons(t_124, sym_Rule_3))
        {
          u_124 = ATgetArgument(t_124, 0);
          v_124 = ATgetArgument(t_124, 1);
          y_124 = ATgetArgument(t_124, 2);
          m_124 :
          if(match_cons(v_124, sym_Op_2))
            {
              w_124 = ATgetArgument(v_124, 0);
              x_124 = ATgetArgument(v_124, 1);
              n_124 :
              if(((ATermList) x_124 == ATempty))
                {
                  o_124 :
                  if(match_string(w_124, "Undefined"))
                    {
                      ATerm x_27 = t;
                      int y_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_126(t);
                          LocalPopChoice(y_27);
                        }
                      else
                        {
                          t = x_27;
                          t = h_126(t);
                        }
                    }
                  else
                    {
                      t = g_126(t);
                    }
                }
              else
                {
                  p_124 :
                  t = g_126(t);
                }
            }
          else
            {
              t = g_126(t);
            }
        }
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
  ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL;
  a_127 = t;
  y_126 :
  if(match_cons(a_127, sym__2))
    {
      b_127 = ATgetArgument(a_127, 0);
      d_127 = ATgetArgument(a_127, 1);
      z_126 :
      if(match_cons(b_127, sym_OverrideDynamicRules_1))
        {
          c_127 = ATgetArgument(b_127, 0);
          {
            t = not_null(c_127);
            {
              ATerm x_4 (ATerm t)
              {
                ATerm y_4 (ATerm t)
                {
                  t = not_null(d_127);
                  return(t);
                }
                ATerm z_4 (ATerm t)
                {
                  ATerm g_127 = NULL;
                  g_127 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(g_127)))));
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
          if(match_cons(b_127, sym_DynamicRules_1))
            {
              c_127 = ATgetArgument(b_127, 0);
              {
                t = not_null(c_127);
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm b_5 (ATerm t)
                    {
                      t = not_null(d_127);
                      return(t);
                    }
                    ATerm c_5 (ATerm t)
                    {
                      ATerm k_127 = NULL;
                      k_127 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_c_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_127)))));
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
ATerm dist_scope_1 (ATerm t, ATerm s_108 (ATerm))
{
  ATerm v_127 = NULL,w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL;
  v_127 = t;
  t_127 :
  if(match_cons(v_127, sym__2))
    {
      w_127 = ATgetArgument(v_127, 0);
      z_127 = ATgetArgument(v_127, 1);
      u_127 :
      if(match_cons(w_127, sym_Scope_2))
        {
          x_127 = ATgetArgument(w_127, 0);
          y_127 = ATgetArgument(w_127, 1);
          {
            ATerm d_128 = NULL;
            ATerm e_128 = NULL,g_128 = NULL;
            ATerm f_128 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_127), not_null(z_127));
            {
              t = union_0(t);
              {
                f_128 = t;
                if(((e_128 != NULL) && (e_128 != f_128)))
                  _fail(f_128);
                else
                  e_128 = f_128;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_127), not_null(e_128));
              {
                t = s_108(t);
                {
                  g_128 = t;
                  if(((d_128 != NULL) && (d_128 != g_128)))
                    _fail(g_128);
                  else
                    d_128 = g_128;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_127), not_null(d_128));
          }
        }
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
ATerm one_dist_1 (ATerm t, ATerm f_101 (ATerm))
{
  ATerm n_128 = NULL,o_128 = NULL,p_128 = NULL;
  n_128 = t;
  m_128 :
  if(match_cons(n_128, sym__2))
    {
      o_128 = ATgetArgument(n_128, 0);
      p_128 = ATgetArgument(n_128, 1);
      {
        t = not_null(o_128);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm s_128 = NULL;
            s_128 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_128), not_null(p_128));
              t = f_101(t);
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
ATerm env_oncetd_1 (ATerm t, ATerm x_101 (ATerm))
{
  ATerm w_128 (ATerm t)
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_101(t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = one_dist_1(t, w_128);
      }
    return(t);
  }
  t = w_128(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm d_129 = NULL,e_129 = NULL,f_129 = NULL;
  d_129 = t;
  c_129 :
  if(((ATgetType(d_129) == AT_LIST) && ((ATermList) d_129 != ATempty)))
    {
      e_129 = ATgetFirst((ATermList) d_129);
      f_129 = (ATerm) ATgetNext((ATermList) d_129);
      {
        ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL;
        ATerm m_129 = NULL;
        t = not_null(e_129);
        {
          ATerm q_129 = NULL;
          t = tvars_0(t);
          {
            m_129 = t;
            {
              if(((k_129 != NULL) && (k_129 != m_129)))
                _fail(m_129);
              else
                k_129 = m_129;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_129), not_null(k_129));
                {
                  ATerm t_129 (ATerm t)
                  {
                    ATerm e_5 (ATerm t)
                    {
                      ATerm f_28 = t;
                      int g_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = dist_scope_1(t, t_129);
                          LocalPopChoice(g_28);
                        }
                      else
                        {
                          t = f_28;
                          {
                            ATerm n_129 = NULL,o_129 = NULL,p_129 = NULL;
                            t = split_dynamic_rules_0(t);
                            {
                              n_129 = t;
                              a_129 :
                              if(match_cons(n_129, sym__2))
                                {
                                  o_129 = ATgetArgument(n_129, 0);
                                  p_129 = ATgetArgument(n_129, 1);
                                  {
                                    if(((j_129 != NULL) && (j_129 != o_129)))
                                      _fail(o_129);
                                    else
                                      j_129 = o_129;
                                    {
                                      if(((i_129 != NULL) && (i_129 != p_129)))
                                        _fail(p_129);
                                      else
                                        i_129 = p_129;
                                      t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(j_129));
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
                  t = t_129(t);
                  {
                    q_129 = t;
                    if(((l_129 != NULL) && (l_129 != q_129)))
                      _fail(q_129);
                    else
                      l_129 = q_129;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_129)), not_null(l_129)), not_null(f_129));
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
ATerm repeat_2 (ATerm t, ATerm f_107 (ATerm), ATerm g_107 (ATerm))
{
  ATerm w_129 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_107(t);
        t = w_129(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = g_107(t);
      }
    return(t);
  }
  t = w_129(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm i_107 (ATerm))
{
  t = repeat_2(t, i_107, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm x_129 (ATerm t)
  {
    t = n_100(t);
    {
      ATerm j_28 = t;
      int k_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(k_28);
        }
      else
        {
          t = j_28;
          t = Cons_2(t, _id, x_129);
        }
    }
    return(t);
  }
  t = x_129(t);
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
  ATerm c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL;
  e_130 = t;
  a_130 :
  if(match_cons(e_130, sym_DynRuleScope_2))
    {
      f_130 = ATgetArgument(e_130, 0);
      g_130 = ATgetArgument(e_130, 1);
      b_130 :
      if(((ATgetType(f_130) == AT_LIST) && ((ATermList) f_130 != ATempty)))
        {
          c_130 = ATgetFirst((ATermList) f_130);
          d_130 = (ATerm) ATgetNext((ATermList) f_130);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_m_28, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(d_130), not_null(g_130))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(c_130)))));
        }
      else
        {
          if(((ATermList) f_130 == ATempty))
            {
              t = not_null(g_130);
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
  ATerm q_130 = NULL,r_130 = NULL;
  q_130 = t;
  p_130 :
  if(match_cons(q_130, sym_ScopeDefault_1))
    {
      r_130 = ATgetArgument(q_130, 0);
      {
        ATerm t_130 = NULL;
        ATerm u_130 = NULL;
        t = not_null(r_130);
        {
          t = tvars_0(t);
          {
            u_130 = t;
            if(((t_130 != NULL) && (t_130 != u_130)))
              _fail(u_130);
            else
              t_130 = u_130;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_130), not_null(r_130));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm c_131 = NULL,d_131 = NULL;
  c_131 = t;
  b_131 :
  if(match_cons(c_131, sym_DynamicRules_1))
    {
      d_131 = ATgetArgument(c_131, 0);
      {
        ATerm g_131 = NULL,i_131 = NULL;
        ATerm h_131 = NULL;
        t = SSLgetAnnotations(not_null(c_131));
        {
          h_131 = t;
          if(((g_131 != NULL) && (g_131 != h_131)))
            _fail(h_131);
          else
            g_131 = h_131;
        }
        {
          t = not_null(d_131);
          {
            ATerm k_131 = NULL;
            t = d_77(t);
            {
              i_131 = t;
              {
                ATerm l_131 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(i_131)), not_null(g_131));
                {
                  l_131 = t;
                  if(((k_131 != NULL) && (k_131 != l_131)))
                    _fail(l_131);
                  else
                    k_131 = l_131;
                }
                t = not_null(k_131);
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
ATerm Scope_2 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL;
  w_131 = t;
  v_131 :
  if(match_cons(w_131, sym_Scope_2))
    {
      x_131 = ATgetArgument(w_131, 0);
      y_131 = ATgetArgument(w_131, 1);
      {
        ATerm c_132 = NULL,e_132 = NULL;
        ATerm d_132 = NULL;
        t = SSLgetAnnotations(not_null(w_131));
        {
          d_132 = t;
          if(((c_132 != NULL) && (c_132 != d_132)))
            _fail(d_132);
          else
            c_132 = d_132;
        }
        {
          t = not_null(x_131);
          {
            ATerm g_132 = NULL;
            t = a_80(t);
            {
              e_132 = t;
              {
                t = not_null(y_131);
                {
                  ATerm i_132 = NULL;
                  t = b_80(t);
                  {
                    g_132 = t;
                    {
                      ATerm j_132 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(e_132), not_null(g_132)), not_null(c_132));
                      {
                        j_132 = t;
                        if(((i_132 != NULL) && (i_132 != j_132)))
                          _fail(j_132);
                        else
                          i_132 = j_132;
                      }
                      t = not_null(i_132);
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
ATerm tboundin_3 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, c_81, a_81);
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      t = DynamicRules_1(t, a_81);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm r_132 = NULL,s_132 = NULL;
  r_132 = t;
  q_132 :
  if(match_cons(r_132, sym_DynamicRules_1))
    {
      s_132 = ATgetArgument(r_132, 0);
      {
        t = not_null(s_132);
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
  ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL,c_133 = NULL,d_133 = NULL,e_133 = NULL;
  c_133 = t;
  x_132 :
  if(match_cons(c_133, sym_LRule_1))
    {
      d_133 = ATgetArgument(c_133, 0);
      y_132 :
      if(match_cons(d_133, sym_Rule_3))
        {
          z_132 = ATgetArgument(d_133, 0);
          a_133 = ATgetArgument(d_133, 1);
          b_133 = ATgetArgument(d_133, 2);
          {
            t = not_null(z_132);
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
      if(match_cons(c_133, sym_Scope_2))
        {
          d_133 = ATgetArgument(c_133, 0);
          e_133 = ATgetArgument(c_133, 1);
          t = not_null(d_133);
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
  ATerm o_133 = NULL,p_133 = NULL;
  o_133 = t;
  n_133 :
  if(match_cons(o_133, sym_Var_1))
    {
      p_133 = ATgetArgument(o_133, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_133));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm u_133 = NULL,v_133 = NULL,w_133 = NULL;
  u_133 = t;
  t_133 :
  if(match_cons(u_133, sym__2))
    {
      v_133 = ATgetArgument(u_133, 0);
      w_133 = ATgetArgument(u_133, 1);
      {
        t = not_null(v_133);
        {
          ATerm a_134 (ATerm t)
          {
            ATerm p_28 = t;
            int q_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_133);
                LocalPopChoice(q_28);
              }
            else
              {
                t = p_28;
                {
                  ATerm r_28 = t;
                  int s_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_5 (ATerm t)
                      {
                        t = not_null(w_133);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_95, m_5);
                      t = a_134(t);
                      LocalPopChoice(s_28);
                    }
                  else
                    {
                      t = r_28;
                      t = Cons_2(t, _id, a_134);
                    }
                }
              }
            return(t);
          }
          t = a_134(t);
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
ATerm foldr_3 (ATerm t, ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm))
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_93(t);
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm f_134 = NULL,g_134 = NULL,h_134 = NULL;
        f_134 = t;
        e_134 :
        if(((ATgetType(f_134) == AT_LIST) && ((ATermList) f_134 != ATempty)))
          {
            g_134 = ATgetFirst((ATermList) f_134);
            h_134 = (ATerm) ATgetNext((ATermList) f_134);
            {
              ATerm k_134 = NULL,m_134 = NULL;
              ATerm v_28;
              v_28 = t;
              {
                ATerm l_134 = NULL;
                t = not_null(g_134);
                {
                  t = w_93(t);
                  {
                    l_134 = t;
                    if(((k_134 != NULL) && (k_134 != l_134)))
                      _fail(l_134);
                    else
                      k_134 = l_134;
                  }
                }
              }
              t = v_28;
              {
                ATerm n_134 = NULL;
                t = not_null(h_134);
                {
                  t = foldr_3(t, u_93, v_93, w_93);
                  {
                    n_134 = t;
                    if(((m_134 != NULL) && (m_134 != n_134)))
                      _fail(n_134);
                    else
                      m_134 = n_134;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_134), not_null(m_134));
                  t = v_93(t);
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
ATerm crush_3 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm))
{
  ATerm v_134 = NULL;
  ATerm x_134 = NULL;
  v_134 = t;
  {
    ATerm y_134 = NULL;
    ATerm a_135 = NULL,b_135 = NULL,c_135 = NULL;
    t = not_null(v_134);
    {
      y_134 = t;
      {
        t = SSL_explode_term(not_null(y_134));
        {
          a_135 = t;
          u_134 :
          if(match_cons(a_135, sym__2))
            {
              b_135 = ATgetArgument(a_135, 0);
              c_135 = ATgetArgument(a_135, 1);
              if(((x_134 != NULL) && (x_134 != c_135)))
                _fail(c_135);
              else
                x_134 = c_135;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_134);
      t = foldr_3(t, m_95, n_95, o_95);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm j_135 = NULL,k_135 = NULL,l_135 = NULL,m_135 = NULL,n_135 = NULL;
  j_135 = t;
  h_135 :
  if(match_cons(j_135, sym__2))
    {
      k_135 = ATgetArgument(j_135, 0);
      l_135 = ATgetArgument(j_135, 1);
      i_135 :
      if(((ATgetType(l_135) == AT_LIST) && ((ATermList) l_135 != ATempty)))
        {
          m_135 = ATgetFirst((ATermList) l_135);
          n_135 = (ATerm) ATgetNext((ATermList) l_135);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_135)), not_null(m_135)), not_null(n_135));
        }
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
  ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL,f_136 = NULL,g_136 = NULL;
  c_136 = t;
  a_136 :
  if(((ATgetType(c_136) == AT_LIST) && ((ATermList) c_136 != ATempty)))
    {
      d_136 = ATgetFirst((ATermList) c_136);
      g_136 = (ATerm) ATgetNext((ATermList) c_136);
      b_136 :
      if(match_cons(d_136, sym__2))
        {
          e_136 = ATgetArgument(d_136, 0);
          f_136 = ATgetArgument(d_136, 1);
          {
            ATerm k_136 = NULL,l_136 = NULL,r_136 = NULL,x_136 = NULL;
            ATerm w_28;
            w_28 = t;
            {
              ATerm m_136 = NULL;
              ATerm o_136 = NULL,p_136 = NULL,q_136 = NULL;
              t = not_null(f_136);
              {
                m_136 = t;
                {
                  t = SSL_explode_term(not_null(m_136));
                  {
                    o_136 = t;
                    v_135 :
                    if(match_cons(o_136, sym__2))
                      {
                        p_136 = ATgetArgument(o_136, 0);
                        q_136 = ATgetArgument(o_136, 1);
                        {
                          if(((k_136 != NULL) && (k_136 != p_136)))
                            _fail(p_136);
                          else
                            k_136 = p_136;
                          if(((l_136 != NULL) && (l_136 != q_136)))
                            _fail(q_136);
                          else
                            l_136 = q_136;
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
              ATerm x_28;
              x_28 = t;
              {
                ATerm s_136 = NULL;
                ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL;
                t = not_null(e_136);
                {
                  s_136 = t;
                  {
                    t = SSL_explode_term(not_null(s_136));
                    {
                      u_136 = t;
                      y_135 :
                      if(match_cons(u_136, sym__2))
                        {
                          v_136 = ATgetArgument(u_136, 0);
                          w_136 = ATgetArgument(u_136, 1);
                          {
                            if(((k_136 != NULL) && (k_136 != v_136)))
                              _fail(v_136);
                            else
                              k_136 = v_136;
                            if(((r_136 != NULL) && (r_136 != w_136)))
                              _fail(w_136);
                            else
                              r_136 = w_136;
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
              t = x_28;
              {
                ATerm y_136 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_136), not_null(l_136));
                {
                  t = zip_1(t, _id);
                  {
                    y_136 = t;
                    if(((x_136 != NULL) && (x_136 != y_136)))
                      _fail(y_136);
                    else
                      x_136 = y_136;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_136), not_null(g_136));
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
  ATerm i_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL,m_137 = NULL;
  i_137 = t;
  g_137 :
  if(((ATgetType(i_137) == AT_LIST) && ((ATermList) i_137 != ATempty)))
    {
      j_137 = ATgetFirst((ATermList) i_137);
      m_137 = (ATerm) ATgetNext((ATermList) i_137);
      h_137 :
      if(match_cons(j_137, sym__2))
        {
          k_137 = ATgetArgument(j_137, 0);
          l_137 = ATgetArgument(j_137, 1);
          {
            ATerm o_137 = NULL;
            if(((k_137 != NULL) && (k_137 != l_137)))
              _fail(l_137);
            else
              k_137 = l_137;
            {
              if(((o_137 != NULL) && (o_137 != m_137)))
                _fail(m_137);
              else
                o_137 = m_137;
              t = not_null(o_137);
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
ATerm while_not_2 (ATerm t, ATerm w_107 (ATerm), ATerm x_107 (ATerm))
{
  ATerm q_137 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_107(t);
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        {
          t = x_107(t);
          t = q_137(t);
        }
      }
    return(t);
  }
  t = q_137(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm))
{
  t = z_107(t);
  t = while_not_2(t, a_108, b_108);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm t_137 = NULL,u_137 = NULL,v_137 = NULL;
  t_137 = t;
  s_137 :
  if(match_cons(t_137, sym__2))
    {
      u_137 = ATgetArgument(t_137, 0);
      v_137 = ATgetArgument(t_137, 1);
      if(((u_137 != NULL) && (u_137 != v_137)))
        _fail(v_137);
      else
        u_137 = v_137;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm b_138 = NULL,c_138 = NULL,d_138 = NULL;
  b_138 = t;
  a_138 :
  if(((ATgetType(b_138) == AT_LIST) && ((ATermList) b_138 != ATempty)))
    {
      c_138 = ATgetFirst((ATermList) b_138);
      d_138 = (ATerm) ATgetNext((ATermList) b_138);
      {
        t = a_95(t);
        {
          ATerm n_5 (ATerm t)
          {
            ATerm g_138 = NULL;
            g_138 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_138), not_null(g_138));
              t = z_94(t);
            }
            return(t);
          }
          t = fetch_1(t, n_5);
        }
        t = not_null(d_138);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm e_95 (ATerm))
{
  ATerm m_138 = NULL,n_138 = NULL,o_138 = NULL;
  m_138 = t;
  l_138 :
  if(match_cons(m_138, sym__2))
    {
      n_138 = ATgetArgument(m_138, 0);
      o_138 = ATgetArgument(m_138, 1);
      {
        t = not_null(n_138);
        {
          ATerm s_138 (ATerm t)
          {
            ATerm a_29 = t;
            int b_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(b_29);
              }
            else
              {
                t = a_29;
                {
                  ATerm c_29 = t;
                  int d_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 (ATerm t)
                      {
                        t = not_null(o_138);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_95, o_5);
                      t = s_138(t);
                      LocalPopChoice(d_29);
                    }
                  else
                    {
                      t = c_29;
                      t = Cons_2(t, _id, s_138);
                    }
                }
              }
            return(t);
          }
          t = s_138(t);
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
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm u_138 = NULL;
          u_138 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(u_138));
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm r_5 (ATerm t)
        {
          ATerm g_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_5 (ATerm t)
              {
                ATerm i_29 = t;
                int j_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(j_29);
                  }
                else
                  {
                    t = i_29;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, s_5);
              LocalPopChoice(h_29);
            }
          else
            {
              t = g_29;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, p_5, q_5, r_5);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm a_139 (ATerm t)
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_82(t);
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
              ATerm y_138 = NULL;
              ATerm o_29;
              o_29 = t;
              {
                ATerm z_138 = NULL;
                t = h_82(t);
                {
                  z_138 = t;
                  if(((y_138 != NULL) && (y_138 != z_138)))
                    _fail(z_138);
                  else
                    y_138 = z_138;
                }
              }
              t = o_29;
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    t = not_null(y_138);
                    return(t);
                  }
                  t = split_2(t, a_139, v_5);
                  t = diff_0(t);
                  return(t);
                }
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = i_82(t, t_5, a_139, u_5);
                {
                  ATerm w_5 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, w_5, union_0, _id);
                }
              }
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              {
                ATerm x_5 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, x_5, union_0, a_139);
              }
            }
        }
      }
    return(t);
  }
  t = a_139(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, y_5, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL;
  g_139 = t;
  e_139 :
  if(match_cons(g_139, sym_LRule_1))
    {
      h_139 = ATgetArgument(g_139, 0);
      f_139 :
      if(match_cons(h_139, sym_Rule_3))
        {
          i_139 = ATgetArgument(h_139, 0);
          j_139 = ATgetArgument(h_139, 1);
          k_139 = ATgetArgument(h_139, 2);
          {
            ATerm o_139 = NULL;
            ATerm p_139 = NULL;
            t = not_null(i_139);
            {
              t = tvars_0(t);
              {
                p_139 = t;
                if(((o_139 != NULL) && (o_139 != p_139)))
                  _fail(p_139);
                else
                  o_139 = p_139;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_139), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_139), not_null(j_139), not_null(k_139))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm z_103 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    t = bottomup_1(t, z_103);
    return(t);
  }
  t = _all(t, z_5);
  t = z_103(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm b_6 (ATerm t)
    {
      ATerm r_29 = t;
      int s_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(s_29);
        }
      else
        {
          t = r_29;
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
  ATerm u_139 = NULL,v_139 = NULL;
  u_139 = t;
  t_139 :
  if(match_cons(u_139, sym_Var_1))
    {
      v_139 = ATgetArgument(u_139, 0);
      t = not_null(v_139);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL;
  b_140 = t;
  z_139 :
  if(match_cons(b_140, sym__2))
    {
      c_140 = ATgetArgument(b_140, 0);
      d_140 = ATgetArgument(b_140, 1);
      a_140 :
      if(((ATgetType(d_140) == AT_LIST) && ((ATermList) d_140 != ATempty)))
        {
          e_140 = ATgetFirst((ATermList) d_140);
          f_140 = (ATerm) ATgetNext((ATermList) d_140);
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_140), not_null(f_140));
        }
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
  ATerm n_140 = NULL,o_140 = NULL,p_140 = NULL,q_140 = NULL,r_140 = NULL,s_140 = NULL,t_140 = NULL;
  n_140 = t;
  k_140 :
  if(match_cons(n_140, sym__2))
    {
      o_140 = ATgetArgument(n_140, 0);
      p_140 = ATgetArgument(n_140, 1);
      l_140 :
      if(((ATgetType(p_140) == AT_LIST) && ((ATermList) p_140 != ATempty)))
        {
          q_140 = ATgetFirst((ATermList) p_140);
          t_140 = (ATerm) ATgetNext((ATermList) p_140);
          m_140 :
          if(match_cons(q_140, sym__2))
            {
              r_140 = ATgetArgument(q_140, 0);
              s_140 = ATgetArgument(q_140, 1);
              {
                ATerm v_140 = NULL;
                if(((o_140 != NULL) && (o_140 != r_140)))
                  _fail(r_140);
                else
                  o_140 = r_140;
                {
                  if(((v_140 != NULL) && (v_140 != s_140)))
                    _fail(s_140);
                  else
                    v_140 = s_140;
                  t = not_null(v_140);
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
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm b_141 = NULL;
  ATerm d_141 = NULL,e_141 = NULL;
  b_141 = t;
  {
    ATerm f_141 = NULL;
    t = not_null(b_141);
    {
      ATerm g_141 = NULL;
      t = c_84(t);
      {
        f_141 = t;
        {
          if(((d_141 != NULL) && (d_141 != f_141)))
            _fail(f_141);
          else
            d_141 = f_141;
          {
            t = d_84(t);
            {
              g_141 = t;
              if(((e_141 != NULL) && (e_141 != g_141)))
                _fail(g_141);
              else
                e_141 = g_141;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_141), not_null(e_141));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm c_106 (ATerm))
{
  ATerm k_141 (ATerm t)
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_106(t);
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = _all(t, k_141);
      }
    return(t);
  }
  t = k_141(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm n_141 = NULL,o_141 = NULL,p_141 = NULL;
  n_141 = t;
  m_141 :
  if(match_cons(n_141, sym__2))
    {
      o_141 = ATgetArgument(n_141, 0);
      p_141 = ATgetArgument(n_141, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_141)), not_null(o_141));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm x_141 = NULL,y_141 = NULL,z_141 = NULL,a_142 = NULL,b_142 = NULL,c_142 = NULL,d_142 = NULL;
  x_141 = t;
  u_141 :
  if(match_cons(x_141, sym__2))
    {
      y_141 = ATgetArgument(x_141, 0);
      b_142 = ATgetArgument(x_141, 1);
      v_141 :
      if(((ATgetType(y_141) == AT_LIST) && ((ATermList) y_141 != ATempty)))
        {
          z_141 = ATgetFirst((ATermList) y_141);
          a_142 = (ATerm) ATgetNext((ATermList) y_141);
          w_141 :
          if(((ATgetType(b_142) == AT_LIST) && ((ATermList) b_142 != ATempty)))
            {
              c_142 = ATgetFirst((ATermList) b_142);
              d_142 = (ATerm) ATgetNext((ATermList) b_142);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_141), not_null(c_142)), (ATerm) ATmakeAppl(sym__2, not_null(a_142), not_null(d_142)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL;
  n_142 = t;
  k_142 :
  if(match_cons(n_142, sym__2))
    {
      o_142 = ATgetArgument(n_142, 0);
      p_142 = ATgetArgument(n_142, 1);
      l_142 :
      if(((ATermList) o_142 == ATempty))
        {
          m_142 :
          if(((ATermList) p_142 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm))
{
  ATerm r_142 (ATerm t)
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_97(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        {
          t = v_97(t);
          {
            t = _2(t, x_97, r_142);
            t = w_97(t);
          }
        }
      }
    return(t);
  }
  t = r_142(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_97 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_97);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm w_142 = NULL,x_142 = NULL,y_142 = NULL,z_142 = NULL;
  w_142 = t;
  v_142 :
  if(match_cons(w_142, sym__2))
    {
      x_142 = ATgetArgument(w_142, 0);
      y_142 = ATgetArgument(w_142, 1);
      {
        ATerm b_143 = NULL;
        if(((b_143 != NULL) && (b_143 != y_142)))
          _fail(y_142);
        else
          b_143 = y_142;
      }
    }
  else
    {
      if(match_cons(w_142, sym__3))
        {
          x_142 = ATgetArgument(w_142, 0);
          y_142 = ATgetArgument(w_142, 1);
          z_142 = ATgetArgument(w_142, 2);
          {
            ATerm h_143 = NULL;
            ATerm i_143 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_142), not_null(y_142));
            {
              t = zip_1(t, _id);
              {
                i_143 = t;
                if(((h_143 != NULL) && (h_143 != i_143)))
                  _fail(i_143);
                else
                  h_143 = i_143;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_143), not_null(z_142));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm e_84 (ATerm), ATerm f_84 (ATerm))
{
  ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL;
  t = subs_args_0(t);
  {
    o_143 = t;
    n_143 :
    if(match_cons(o_143, sym__2))
      {
        p_143 = ATgetArgument(o_143, 0);
        q_143 = ATgetArgument(o_143, 1);
        {
          t = not_null(q_143);
          {
            ATerm c_6 (ATerm t)
            {
              ATerm d_6 (ATerm t)
              {
                t = not_null(p_143);
                return(t);
              }
              t = SubsVar_2(t, e_84, d_6);
              t = f_84(t);
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
ATerm substitute_1 (ATerm t, ATerm g_84 (ATerm))
{
  t = substitute_2(t, g_84, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL,b_144 = NULL;
  x_143 = t;
  v_143 :
  if(match_cons(x_143, sym_OpDecl_2))
    {
      y_143 = ATgetArgument(x_143, 0);
      z_143 = ATgetArgument(x_143, 1);
      w_143 :
      if(match_cons(z_143, sym_ConstType_1))
        {
          b_144 = ATgetArgument(z_143, 0);
          t = not_null(y_143);
        }
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
  ATerm g_144 = NULL,h_144 = NULL;
  g_144 = t;
  f_144 :
  if(match_cons(g_144, sym_Constructors_1))
    {
      h_144 = ATgetArgument(g_144, 0);
      {
        t = not_null(h_144);
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
  ATerm n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL;
  n_144 = t;
  l_144 :
  if(match_cons(n_144, sym_Overlay_3))
    {
      o_144 = ATgetArgument(n_144, 0);
      p_144 = ATgetArgument(n_144, 1);
      q_144 = ATgetArgument(n_144, 2);
      m_144 :
      if(((ATermList) p_144 == ATempty))
        {
          t = not_null(o_144);
        }
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
  ATerm x_144 = NULL,y_144 = NULL;
  x_144 = t;
  w_144 :
  if(match_cons(x_144, sym_Overlays_1))
    {
      y_144 = ATgetArgument(x_144, 0);
      {
        t = not_null(y_144);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(x_144, sym_Signature_1))
        {
          y_144 = ATgetArgument(x_144, 0);
          {
            t = not_null(y_144);
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
ATerm filter_1 (ATerm t, ATerm y_92 (ATerm))
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      {
        ATerm b_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 (ATerm t)
            {
              t = filter_1(t, y_92);
              return(t);
            }
            t = Cons_2(t, y_92, e_6);
            LocalPopChoice(c_30);
          }
        else
          {
            t = b_30;
            {
              ATerm f_145 = NULL,g_145 = NULL,h_145 = NULL;
              f_145 = t;
              e_145 :
              if(((ATgetType(f_145) == AT_LIST) && ((ATermList) f_145 != ATempty)))
                {
                  g_145 = ATgetFirst((ATermList) f_145);
                  h_145 = (ATerm) ATgetNext((ATermList) f_145);
                  {
                    t = not_null(h_145);
                    t = filter_1(t, y_92);
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
  ATerm o_145 = NULL,u_145 = NULL;
  ATerm d_30;
  d_30 = t;
  {
    ATerm t_145 = NULL;
    t = const_names_0(t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm p_145 = NULL,r_145 = NULL;
        ATerm e_30;
        e_30 = t;
        {
          ATerm q_145 = NULL;
          q_145 = t;
          if(((p_145 != NULL) && (p_145 != q_145)))
            _fail(q_145);
          else
            p_145 = q_145;
        }
        t = e_30;
        {
          ATerm s_145 = NULL;
          s_145 = t;
          if(((r_145 != NULL) && (r_145 != s_145)))
            _fail(s_145);
          else
            r_145 = s_145;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_145), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_145), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, f_6);
      {
        t_145 = t;
        if(((o_145 != NULL) && (o_145 != t_145)))
          _fail(t_145);
        else
          o_145 = t_145;
      }
    }
  }
  t = d_30;
  {
    ATerm v_145 = NULL;
    v_145 = t;
    if(((u_145 != NULL) && (u_145 != v_145)))
      _fail(v_145);
    else
      u_145 = v_145;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_145), not_null(u_145));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm c_146 = NULL,d_146 = NULL,e_146 = NULL,f_146 = NULL;
  c_146 = t;
  b_146 :
  if(match_cons(c_146, sym__3))
    {
      d_146 = ATgetArgument(c_146, 0);
      e_146 = ATgetArgument(c_146, 1);
      f_146 = ATgetArgument(c_146, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_146))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(e_146))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(d_146))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm r_146 = NULL,s_146 = NULL,t_146 = NULL,u_146 = NULL,v_146 = NULL,w_146 = NULL,x_146 = NULL,y_146 = NULL,z_146 = NULL;
  r_146 = t;
  o_146 :
  if(match_cons(r_146, sym__2))
    {
      s_146 = ATgetArgument(r_146, 0);
      w_146 = ATgetArgument(r_146, 1);
      p_146 :
      if(match_cons(s_146, sym__3))
        {
          t_146 = ATgetArgument(s_146, 0);
          u_146 = ATgetArgument(s_146, 1);
          v_146 = ATgetArgument(s_146, 2);
          q_146 :
          if(match_cons(w_146, sym__3))
            {
              x_146 = ATgetArgument(w_146, 0);
              y_146 = ATgetArgument(w_146, 1);
              z_146 = ATgetArgument(w_146, 2);
              {
                ATerm g_147 = NULL,i_147 = NULL,k_147 = NULL;
                ATerm f_30;
                f_30 = t;
                {
                  ATerm h_147 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_146), not_null(x_146));
                  {
                    t = conc_0(t);
                    {
                      h_147 = t;
                      if(((g_147 != NULL) && (g_147 != h_147)))
                        _fail(h_147);
                      else
                        g_147 = h_147;
                    }
                  }
                }
                t = f_30;
                {
                  ATerm g_30;
                  g_30 = t;
                  {
                    ATerm j_147 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_146), not_null(y_146));
                    {
                      t = conc_0(t);
                      {
                        j_147 = t;
                        if(((i_147 != NULL) && (i_147 != j_147)))
                          _fail(j_147);
                        else
                          i_147 = j_147;
                      }
                    }
                  }
                  t = g_30;
                  {
                    ATerm l_147 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_146), not_null(z_146));
                    {
                      t = conc_0(t);
                      {
                        l_147 = t;
                        if(((k_147 != NULL) && (k_147 != l_147)))
                          _fail(l_147);
                        else
                          k_147 = l_147;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(g_147), not_null(i_147), not_null(k_147));
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
  ATerm t_147 = NULL,u_147 = NULL;
  t_147 = t;
  s_147 :
  if(match_cons(t_147, sym_Sorts_1))
    {
      u_147 = ATgetArgument(t_147, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(t_147, sym_Constructors_1))
        {
          u_147 = ATgetArgument(t_147, 0);
          t = not_null(u_147);
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
  ATerm f_148 = NULL,g_148 = NULL;
  f_148 = t;
  e_148 :
  if(match_cons(f_148, sym_Overlays_1))
    {
      g_148 = ATgetArgument(f_148, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(g_148), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(f_148, sym_Rules_1))
        {
          g_148 = ATgetArgument(f_148, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(g_148));
        }
      else
        {
          if(match_cons(f_148, sym_Strategies_1))
            {
              g_148 = ATgetArgument(f_148, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(g_148));
            }
          else
            {
              if(match_cons(f_148, sym_Signature_1))
                {
                  g_148 = ATgetArgument(f_148, 0);
                  {
                    ATerm l_148 = NULL;
                    ATerm m_148 = NULL;
                    t = not_null(g_148);
                    {
                      t = normalize_sigs_0(t);
                      {
                        m_148 = t;
                        if(((l_148 != NULL) && (l_148 != m_148)))
                          _fail(m_148);
                        else
                          l_148 = m_148;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(l_148), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm u_148 = NULL,v_148 = NULL;
  u_148 = t;
  t_148 :
  if(match_cons(u_148, sym_Specification_1))
    {
      v_148 = ATgetArgument(u_148, 0);
      t = not_null(v_148);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_103 (ATerm))
{
  t = y_103(t);
  {
    ATerm g_6 (ATerm t)
    {
      t = topdown_1(t, y_103);
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
      ATerm a_149 = NULL,b_149 = NULL;
      a_149 = t;
      z_148 :
      if(match_cons(a_149, sym_DefaultVarDec_1))
        {
          b_149 = ATgetArgument(a_149, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(b_149), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_l_15), term_l_15));
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
          t = term_y_24;
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
    ATerm h_30;
    h_30 = t;
    t = spec_use_def_0(t);
    t = h_30;
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
ATerm _2 (ATerm t, ATerm a_69 (ATerm), ATerm b_69 (ATerm))
{
  ATerm k_149 = NULL,l_149 = NULL,m_149 = NULL;
  k_149 = t;
  j_149 :
  if(match_cons(k_149, sym__2))
    {
      l_149 = ATgetArgument(k_149, 0);
      m_149 = ATgetArgument(k_149, 1);
      {
        ATerm q_149 = NULL,s_149 = NULL;
        ATerm r_149 = NULL;
        t = SSLgetAnnotations(not_null(k_149));
        {
          r_149 = t;
          if(((q_149 != NULL) && (q_149 != r_149)))
            _fail(r_149);
          else
            q_149 = r_149;
        }
        {
          t = not_null(l_149);
          {
            ATerm u_149 = NULL;
            t = a_69(t);
            {
              s_149 = t;
              {
                t = not_null(m_149);
                {
                  ATerm w_149 = NULL;
                  t = b_69(t);
                  {
                    u_149 = t;
                    {
                      ATerm x_149 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_149), not_null(u_149)), not_null(q_149));
                      {
                        x_149 = t;
                        if(((w_149 != NULL) && (w_149 != x_149)))
                          _fail(x_149);
                        else
                          w_149 = x_149;
                      }
                      t = not_null(w_149);
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
  ATerm f_150 = NULL;
  ATerm i_30;
  i_30 = t;
  {
    ATerm n_6 (ATerm t)
    {
      ATerm g_150 = NULL,h_150 = NULL;
      g_150 = t;
      e_150 :
      if(match_cons(g_150, sym_Program_1))
        {
          h_150 = ATgetArgument(g_150, 0);
          if(((f_150 != NULL) && (f_150 != h_150)))
            _fail(h_150);
          else
            f_150 = h_150;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, n_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_30), not_null(f_150)), term_j_30));
      {
        t = printnl_0(t);
        {
          t = term_g_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_30;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm l_150 = NULL,m_150 = NULL,n_150 = NULL;
  l_150 = t;
  k_150 :
  if(match_cons(l_150, sym__2))
    {
      m_150 = ATgetArgument(l_150, 0);
      n_150 = ATgetArgument(l_150, 1);
      {
        ATerm l_30;
        l_30 = t;
        t = SSL_printnl(not_null(m_150), not_null(n_150));
        t = l_30;
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
  ATerm t_150 = NULL,u_150 = NULL,v_150 = NULL;
  t_150 = t;
  s_150 :
  if(match_cons(t_150, sym__2))
    {
      u_150 = ATgetArgument(t_150, 0);
      v_150 = ATgetArgument(t_150, 1);
      {
        t = not_null(u_150);
        {
          ATerm o_6 (ATerm t)
          {
            t = not_null(v_150);
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
ATerm debug_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm m_30;
  m_30 = t;
  {
    ATerm b_151 = NULL,d_151 = NULL;
    ATerm n_30;
    n_30 = t;
    {
      ATerm c_151 = NULL;
      t = v_89(t);
      {
        c_151 = t;
        if(((b_151 != NULL) && (b_151 != c_151)))
          _fail(c_151);
        else
          b_151 = c_151;
      }
    }
    t = n_30;
    {
      ATerm e_151 = NULL;
      e_151 = t;
      if(((d_151 != NULL) && (d_151 != e_151)))
        _fail(e_151);
      else
        d_151 = e_151;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_151)), not_null(b_151)));
        t = printnl_0(t);
      }
    }
  }
  t = m_30;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_151 = NULL;
  i_151 = t;
  t = SSL_is_string(not_null(i_151));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, p_6);
            LocalPopChoice(r_30);
          }
        else
          {
            t = q_30;
            {
              ATerm r_151 = NULL,s_151 = NULL,t_151 = NULL;
              r_151 = t;
              q_151 :
              if(match_cons(r_151, sym_Path_1))
                {
                  s_151 = ATgetArgument(r_151, 0);
                  t = not_null(s_151);
                }
              else
                {
                  if(match_cons(r_151, sym_Var_1))
                    {
                      s_151 = ATgetArgument(r_151, 0);
                      {
                        t = not_null(s_151);
                        {
                          ATerm s_30 = t;
                          int t_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_30);
                            }
                          else
                            {
                              t = s_30;
                              {
                                ATerm q_6 (ATerm t)
                                {
                                  t = term_u_30;
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
                      if(match_cons(r_151, sym_Prefix_2))
                        {
                          s_151 = ATgetArgument(r_151, 0);
                          t_151 = ATgetArgument(r_151, 1);
                          {
                            ATerm y_151 = NULL,a_152 = NULL;
                            ATerm v_30;
                            v_30 = t;
                            {
                              ATerm z_151 = NULL;
                              t = not_null(s_151);
                              {
                                t = eval_config_0(t);
                                {
                                  z_151 = t;
                                  if(((y_151 != NULL) && (y_151 != z_151)))
                                    _fail(z_151);
                                  else
                                    y_151 = z_151;
                                }
                              }
                            }
                            t = v_30;
                            {
                              ATerm b_152 = NULL;
                              t = not_null(t_151);
                              {
                                t = eval_config_0(t);
                                {
                                  b_152 = t;
                                  if(((a_152 != NULL) && (a_152 != b_152)))
                                    _fail(b_152);
                                  else
                                    a_152 = b_152;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_151), not_null(a_152));
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
  ATerm j_152 = NULL;
  j_152 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_30, not_null(j_152));
    {
      t = table_get_0(t);
      {
        ATerm r_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_30;
            x_30 = t;
            {
              ATerm l_152 = NULL;
              ATerm m_152 = NULL;
              m_152 = t;
              if(((l_152 != NULL) && (l_152 != m_152)))
                _fail(m_152);
              else
                l_152 = m_152;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_30, not_null(j_152), not_null(l_152));
                t = table_put_0(t);
              }
            }
            t = x_30;
          }
          return(t);
        }
        t = try_1(t, r_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm y_30;
    y_30 = t;
    {
      ATerm q_152 = NULL;
      ATerm r_152 = NULL;
      t = term_z_30;
      {
        t = get_config_0(t);
        {
          r_152 = t;
          if(((q_152 != NULL) && (q_152 != r_152)))
            _fail(r_152);
          else
            q_152 = r_152;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_152), term_a_31);
        t = geq_0(t);
      }
    }
    t = y_30;
    t = f_87(t);
    return(t);
  }
  t = try_1(t, s_6);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, term_b_31));
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
  ATerm u_152 = NULL;
  u_152 = t;
  t = SSL_TicksToSeconds(not_null(u_152));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_152 = NULL,a_153 = NULL,b_153 = NULL;
  z_152 = t;
  y_152 :
  if(match_cons(z_152, sym__2))
    {
      a_153 = ATgetArgument(z_152, 0);
      b_153 = ATgetArgument(z_152, 1);
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_153), not_null(b_153));
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            t = SSL_addr(not_null(a_153), not_null(b_153));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_93 (ATerm), ATerm t_93 (ATerm))
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_93(t);
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm i_153 = NULL,j_153 = NULL,k_153 = NULL;
        i_153 = t;
        h_153 :
        if(((ATgetType(i_153) == AT_LIST) && ((ATermList) i_153 != ATempty)))
          {
            j_153 = ATgetFirst((ATermList) i_153);
            k_153 = (ATerm) ATgetNext((ATermList) i_153);
            {
              ATerm n_153 = NULL;
              ATerm o_153 = NULL;
              t = not_null(k_153);
              {
                t = foldr_2(t, s_93, t_93);
                {
                  o_153 = t;
                  if(((n_153 != NULL) && (n_153 != o_153)))
                    _fail(o_153);
                  else
                    n_153 = o_153;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_153), not_null(n_153));
                t = t_93(t);
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
ATerm crush_2 (ATerm t, ATerm k_95 (ATerm), ATerm l_95 (ATerm))
{
  ATerm v_153 = NULL;
  ATerm x_153 = NULL;
  v_153 = t;
  {
    ATerm y_153 = NULL;
    ATerm a_154 = NULL,b_154 = NULL,c_154 = NULL;
    t = not_null(v_153);
    {
      y_153 = t;
      {
        t = SSL_explode_term(not_null(y_153));
        {
          a_154 = t;
          u_153 :
          if(match_cons(a_154, sym__2))
            {
              b_154 = ATgetArgument(a_154, 0);
              c_154 = ATgetArgument(a_154, 1);
              if(((x_153 != NULL) && (x_153 != c_154)))
                _fail(c_154);
              else
                x_153 = c_154;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_153);
      t = foldr_2(t, k_95, l_95);
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
      t = term_h_21;
      return(t);
    }
    t = crush_2(t, t_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_154 = NULL,j_154 = NULL,k_154 = NULL;
  i_154 = t;
  h_154 :
  if(match_cons(i_154, sym__2))
    {
      j_154 = ATgetArgument(i_154, 0);
      k_154 = ATgetArgument(i_154, 1);
      {
        ATerm g_31;
        g_31 = t;
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_154), not_null(k_154));
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              t = SSL_gtr(not_null(j_154), not_null(k_154));
            }
        }
        t = g_31;
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
  ATerm q_154 = NULL;
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_154 = NULL,s_154 = NULL,t_154 = NULL;
      r_154 = t;
      p_154 :
      if(match_cons(r_154, sym__2))
        {
          s_154 = ATgetArgument(r_154, 0);
          t_154 = ATgetArgument(r_154, 1);
          {
            if(((q_154 != NULL) && (q_154 != s_154)))
              _fail(s_154);
            else
              q_154 = s_154;
            if(((q_154 != NULL) && (q_154 != t_154)))
              _fail(t_154);
            else
              q_154 = t_154;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm l_31;
    l_31 = t;
    {
      ATerm w_154 = NULL;
      ATerm x_154 = NULL;
      t = term_z_30;
      {
        t = get_config_0(t);
        {
          x_154 = t;
          if(((w_154 != NULL) && (w_154 != x_154)))
            _fail(x_154);
          else
            w_154 = x_154;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_154), term_g_18);
        t = geq_0(t);
      }
    }
    t = l_31;
    t = e_87(t);
    return(t);
  }
  t = try_1(t, u_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm b_155 = NULL,d_155 = NULL;
    ATerm m_31;
    m_31 = t;
    {
      ATerm c_155 = NULL;
      t = run_time_0(t);
      {
        c_155 = t;
        if(((b_155 != NULL) && (b_155 != c_155)))
          _fail(c_155);
        else
          b_155 = c_155;
      }
    }
    t = m_31;
    {
      ATerm e_155 = NULL;
      t = term_n_31;
      {
        t = get_config_0(t);
        {
          e_155 = t;
          if(((d_155 != NULL) && (d_155 != e_155)))
            _fail(e_155);
          else
            d_155 = e_155;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_31), not_null(b_155)), term_o_31), not_null(d_155)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_6);
  {
    t = term_h_21;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_155 = NULL,k_155 = NULL,l_155 = NULL;
  j_155 = t;
  i_155 :
  if(match_cons(j_155, sym__2))
    {
      k_155 = ATgetArgument(j_155, 0);
      l_155 = ATgetArgument(j_155, 1);
      t = SSL_WriteToTextFile(not_null(k_155), not_null(l_155));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_155 = NULL,s_155 = NULL,t_155 = NULL;
  r_155 = t;
  q_155 :
  if(match_cons(r_155, sym__2))
    {
      s_155 = ATgetArgument(r_155, 0);
      t_155 = ATgetArgument(r_155, 1);
      t = SSL_WriteToBinaryFile(not_null(s_155), not_null(t_155));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_156 = NULL;
  ATerm r_31;
  r_31 = t;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 (ATerm t)
          {
            ATerm c_156 = NULL,d_156 = NULL;
            c_156 = t;
            y_155 :
            if(match_cons(c_156, sym_Output_1))
              {
                d_156 = ATgetArgument(c_156, 0);
                if(((b_156 != NULL) && (b_156 != d_156)))
                  _fail(d_156);
                else
                  b_156 = d_156;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_6);
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
          {
            ATerm e_156 = NULL;
            t = term_u_31;
            {
              e_156 = t;
              if(((b_156 != NULL) && (b_156 != e_156)))
                _fail(e_156);
              else
                b_156 = e_156;
            }
          }
        }
      return(t);
    }
    t = _2(t, w_6, _id);
  }
  t = r_31;
  {
    ATerm y_6 (ATerm t)
    {
      ATerm z_6 (ATerm t)
      {
        t = not_null(b_156);
        return(t);
      }
      t = split_2(t, z_6, _id);
      return(t);
    }
    t = _2(t, _id, y_6);
    {
      ATerm v_31 = t;
      int c_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_7 (ATerm t)
          {
            ATerm b_7 (ATerm t)
            {
              ATerm f_156 = NULL;
              f_156 = t;
              a_156 :
              if(!(match_cons(f_156, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, b_7);
            return(t);
          }
          t = _2(t, a_7, WriteToBinaryFile_0);
          LocalPopChoice(c_32);
        }
      else
        {
          t = v_31;
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
ATerm apply_strategy_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm l_156 = NULL,n_156 = NULL,o_156 = NULL,p_156 = NULL;
  ATerm d_32;
  d_32 = t;
  t = dtime_0(t);
  t = d_32;
  {
    t = f_89(t);
    {
      ATerm e_32;
      e_32 = t;
      {
        ATerm m_156 = NULL;
        t = dtime_0(t);
        {
          m_156 = t;
          if(((l_156 != NULL) && (l_156 != m_156)))
            _fail(m_156);
          else
            l_156 = m_156;
        }
      }
      t = e_32;
      {
        n_156 = t;
        k_156 :
        if(match_cons(n_156, sym__2))
          {
            o_156 = ATgetArgument(n_156, 0);
            p_156 = ATgetArgument(n_156, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_156)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_156))), not_null(p_156));
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
  ATerm v_156 = NULL;
  v_156 = t;
  t = SSL_ReadFromFile(not_null(v_156));
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_92 (ATerm), ATerm h_92 (ATerm))
{
  ATerm a_157 = NULL,c_157 = NULL;
  ATerm h_32;
  h_32 = t;
  {
    ATerm b_157 = NULL;
    t = g_92(t);
    {
      b_157 = t;
      if(((a_157 != NULL) && (a_157 != b_157)))
        _fail(b_157);
      else
        a_157 = b_157;
    }
  }
  t = h_32;
  {
    ATerm d_157 = NULL;
    t = h_92(t);
    {
      d_157 = t;
      if(((c_157 != NULL) && (c_157 != d_157)))
        _fail(d_157);
      else
        c_157 = d_157;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_157), not_null(c_157));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_157 = NULL;
  ATerm i_32;
  i_32 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 (ATerm t)
        {
          ATerm k_157 = NULL,l_157 = NULL;
          k_157 = t;
          h_157 :
          if(match_cons(k_157, sym_Input_1))
            {
              l_157 = ATgetArgument(k_157, 0);
              if(((j_157 != NULL) && (j_157 != l_157)))
                _fail(l_157);
              else
                j_157 = l_157;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, c_7);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          ATerm m_157 = NULL;
          t = term_l_32;
          {
            m_157 = t;
            if(((j_157 != NULL) && (j_157 != m_157)))
              _fail(m_157);
            else
              j_157 = m_157;
          }
        }
      }
  }
  t = i_32;
  {
    ATerm d_7 (ATerm t)
    {
      t = not_null(j_157);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_157 = NULL;
  t_157 = t;
  s_157 :
  if(match_cons(t_157, sym_Version_0))
    {
      ATerm v_157 = NULL,x_157 = NULL;
      ATerm m_32;
      m_32 = t;
      {
        ATerm w_157 = NULL;
        t = SSLgetAnnotations(not_null(t_157));
        {
          w_157 = t;
          if(((v_157 != NULL) && (v_157 != w_157)))
            _fail(w_157);
          else
            v_157 = w_157;
        }
      }
      t = m_32;
      {
        ATerm y_157 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_157));
        {
          y_157 = t;
          if(((x_157 != NULL) && (x_157 != y_157)))
            _fail(y_157);
          else
            x_157 = y_157;
        }
        t = not_null(x_157);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_89 (ATerm))
{
  ATerm e_7 (ATerm t)
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_7);
  t = d_89(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_158 = NULL;
  e_158 = t;
  t = SSL_table_create(not_null(e_158));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_158 = NULL;
  i_158 = t;
  {
    ATerm r_32;
    r_32 = t;
    {
      t = term_s_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_s_32, term_t_32, not_null(i_158));
          t = table_put_0(t);
        }
      }
    }
    t = r_32;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_158 = NULL;
  m_158 = t;
  t = SSL_string_to_int(not_null(m_158));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm u_158 = NULL,v_158 = NULL,w_158 = NULL,x_158 = NULL,y_158 = NULL;
  u_158 = t;
  s_158 :
  if(match_string(u_158, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(u_158) == AT_LIST) && ((ATermList) u_158 != ATempty)))
        {
          v_158 = ATgetFirst((ATermList) u_158);
          w_158 = (ATerm) ATgetNext((ATermList) u_158);
          t_158 :
          if(((ATgetType(w_158) == AT_LIST) && ((ATermList) w_158 != ATempty)))
            {
              x_158 = ATgetFirst((ATermList) w_158);
              y_158 = (ATerm) ATgetNext((ATermList) w_158);
              {
                ATerm c_159 = NULL;
                ATerm u_32;
                u_32 = t;
                {
                  t = not_null(v_158);
                  t = n_0(t);
                }
                t = u_32;
                {
                  ATerm d_159 = NULL;
                  t = not_null(x_158);
                  {
                    t = o_0(t);
                    {
                      d_159 = t;
                      if(((c_159 != NULL) && (c_159 != d_159)))
                        _fail(d_159);
                      else
                        c_159 = d_159;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_158)), not_null(c_159));
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
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_7 (ATerm t)
      {
        ATerm x_159 = NULL;
        x_159 = t;
        h_159 :
        if(!(match_string(x_159, "-i")))
          {
            if(!(match_string(x_159, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        ATerm a_160 = NULL;
        ATerm x_32;
        x_32 = t;
        {
          ATerm y_159 = NULL;
          ATerm z_159 = NULL;
          z_159 = t;
          if(((y_159 != NULL) && (y_159 != z_159)))
            _fail(z_159);
          else
            y_159 = z_159;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_32, not_null(y_159));
            t = set_config_0(t);
          }
        }
        t = x_32;
        {
          ATerm b_160 = NULL;
          b_160 = t;
          if(((a_160 != NULL) && (a_160 != b_160)))
            _fail(b_160);
          else
            a_160 = b_160;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_160));
        }
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        t = term_z_32;
        return(t);
      }
      t = ArgOption_3(t, f_7, g_7, h_7);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm a_33 = t;
        int b_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 (ATerm t)
            {
              ATerm c_160 = NULL;
              c_160 = t;
              k_159 :
              if(!(match_string(c_160, "-o")))
                {
                  if(!(match_string(c_160, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              ATerm f_160 = NULL;
              ATerm c_33;
              c_33 = t;
              {
                ATerm d_160 = NULL;
                ATerm e_160 = NULL;
                e_160 = t;
                if(((d_160 != NULL) && (d_160 != e_160)))
                  _fail(e_160);
                else
                  d_160 = e_160;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_33, not_null(d_160));
                  t = set_config_0(t);
                }
              }
              t = c_33;
              {
                ATerm g_160 = NULL;
                g_160 = t;
                if(((f_160 != NULL) && (f_160 != g_160)))
                  _fail(g_160);
                else
                  f_160 = g_160;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_160));
              }
              return(t);
            }
            ATerm k_7 (ATerm t)
            {
              t = term_e_33;
              return(t);
            }
            t = ArgOption_3(t, i_7, j_7, k_7);
            LocalPopChoice(b_33);
          }
        else
          {
            t = a_33;
            {
              ATerm f_33 = t;
              int g_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm h_160 = NULL;
                    h_160 = t;
                    o_159 :
                    if(!(match_string(h_160, "-S")))
                      {
                        if(!(match_string(h_160, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_7 (ATerm t)
                  {
                    t = term_h_33;
                    t = set_config_0(t);
                    t = term_i_33;
                    return(t);
                  }
                  ATerm n_7 (ATerm t)
                  {
                    t = term_j_33;
                    return(t);
                  }
                  t = Option_3(t, l_7, m_7, n_7);
                  LocalPopChoice(g_33);
                }
              else
                {
                  t = f_33;
                  {
                    ATerm k_33 = t;
                    int l_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_7 (ATerm t)
                        {
                          ATerm i_160 = NULL;
                          i_160 = t;
                          p_159 :
                          if(!(match_string(i_160, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm p_7 (ATerm t)
                        {
                          ATerm l_160 = NULL;
                          ATerm m_33;
                          m_33 = t;
                          {
                            ATerm j_160 = NULL;
                            ATerm k_160 = NULL;
                            t = string_to_int_0(t);
                            {
                              k_160 = t;
                              if(((j_160 != NULL) && (j_160 != k_160)))
                                _fail(k_160);
                              else
                                j_160 = k_160;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_30, not_null(j_160));
                              t = set_config_0(t);
                            }
                          }
                          t = m_33;
                          {
                            ATerm m_160 = NULL;
                            m_160 = t;
                            if(((l_160 != NULL) && (l_160 != m_160)))
                              _fail(m_160);
                            else
                              l_160 = m_160;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_160));
                          }
                          return(t);
                        }
                        ATerm q_7 (ATerm t)
                        {
                          t = term_n_33;
                          return(t);
                        }
                        t = ArgOption_3(t, o_7, p_7, q_7);
                        LocalPopChoice(l_33);
                      }
                    else
                      {
                        t = k_33;
                        {
                          ATerm o_33 = t;
                          int p_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_7 (ATerm t)
                              {
                                ATerm n_160 = NULL;
                                n_160 = t;
                                s_159 :
                                if(!(match_string(n_160, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm s_7 (ATerm t)
                              {
                                ATerm q_33;
                                q_33 = t;
                                {
                                  ATerm o_160 = NULL;
                                  ATerm p_160 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    p_160 = t;
                                    if(((o_160 != NULL) && (o_160 != p_160)))
                                      _fail(p_160);
                                    else
                                      o_160 = p_160;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_r_33, not_null(o_160));
                                    t = set_config_0(t);
                                  }
                                }
                                t = q_33;
                                return(t);
                              }
                              ATerm t_7 (ATerm t)
                              {
                                t = term_s_33;
                                return(t);
                              }
                              t = ArgOption_3(t, r_7, s_7, t_7);
                              LocalPopChoice(p_33);
                            }
                          else
                            {
                              t = o_33;
                              {
                                ATerm t_33 = t;
                                int u_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_7 (ATerm t)
                                    {
                                      ATerm q_160 = NULL;
                                      q_160 = t;
                                      u_159 :
                                      if(!(match_string(q_160, "-v")))
                                        {
                                          if(!(match_string(q_160, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm v_7 (ATerm t)
                                    {
                                      t = term_w_33;
                                      t = set_config_0(t);
                                      t = term_x_33;
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      t = term_y_33;
                                      return(t);
                                    }
                                    t = Option_3(t, u_7, v_7, w_7);
                                    LocalPopChoice(u_33);
                                  }
                                else
                                  {
                                    t = t_33;
                                    {
                                      ATerm z_33 = t;
                                      int a_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_7 (ATerm t)
                                          {
                                            ATerm r_160 = NULL;
                                            r_160 = t;
                                            v_159 :
                                            if(!(match_string(r_160, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_7 (ATerm t)
                                          {
                                            t = term_c_34;
                                            t = set_config_0(t);
                                            t = term_d_34;
                                            return(t);
                                          }
                                          ATerm z_7 (ATerm t)
                                          {
                                            t = term_e_34;
                                            return(t);
                                          }
                                          t = Option_3(t, x_7, y_7, z_7);
                                          LocalPopChoice(a_34);
                                        }
                                      else
                                        {
                                          t = z_33;
                                          {
                                            ATerm a_8 (ATerm t)
                                            {
                                              ATerm s_160 = NULL;
                                              s_160 = t;
                                              w_159 :
                                              if(!(match_string(s_160, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm b_8 (ATerm t)
                                            {
                                              t = term_g_34;
                                              t = set_config_0(t);
                                              t = term_h_34;
                                              return(t);
                                            }
                                            ATerm c_8 (ATerm t)
                                            {
                                              t = term_i_34;
                                              return(t);
                                            }
                                            t = Option_3(t, a_8, b_8, c_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm b_161 = NULL;
  b_161 = t;
  t = SSL_table_destroy(not_null(b_161));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_161 = NULL;
  f_161 = t;
  t = SSL_exit(not_null(f_161));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm j_161 = NULL;
  j_161 = t;
  t = SSL_implode_string(not_null(j_161));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm m_161 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_161);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          t = Nil_0(t);
          t = x_99(t);
        }
      }
    return(t);
  }
  t = m_161(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm p_161 = NULL,q_161 = NULL,r_161 = NULL;
        p_161 = t;
        o_161 :
        if(((ATgetType(p_161) == AT_LIST) && ((ATermList) p_161 != ATempty)))
          {
            q_161 = ATgetFirst((ATermList) p_161);
            r_161 = (ATerm) ATgetNext((ATermList) p_161);
            {
              t = not_null(q_161);
              {
                ATerm d_8 (ATerm t)
                {
                  t = not_null(r_161);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_8);
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
  ATerm y_161 = NULL;
  y_161 = t;
  t = SSL_explode_string(not_null(y_161));
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
ATerm long_description_1 (ATerm t, ATerm y_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_99 (ATerm))
{
  ATerm b_162 (ATerm t)
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        t = Cons_2(t, i_99, b_162);
      }
    return(t);
  }
  t = b_162(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm i_162 = NULL,j_162 = NULL,k_162 = NULL;
  k_162 = t;
  h_162 :
  if(((ATgetType(k_162) == AT_LIST) && ((ATermList) k_162 != ATempty)))
    {
      i_162 = ATgetFirst((ATermList) k_162);
      j_162 = (ATerm) ATgetNext((ATermList) k_162);
      {
        ATerm n_162 = NULL;
        t = not_null(j_162);
        {
          ATerm p_34;
          p_34 = t;
          {
            ATerm o_162 = NULL,q_162 = NULL,s_162 = NULL;
            ATerm q_34;
            q_34 = t;
            {
              ATerm p_162 = NULL;
              t = m_0(t);
              {
                p_162 = t;
                if(((o_162 != NULL) && (o_162 != p_162)))
                  _fail(p_162);
                else
                  o_162 = p_162;
              }
            }
            t = q_34;
            {
              ATerm r_162 = NULL;
              t = not_null(i_162);
              {
                t = l_0(t);
                {
                  r_162 = t;
                  if(((q_162 != NULL) && (q_162 != r_162)))
                    _fail(r_162);
                  else
                    q_162 = r_162;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_162)), not_null(q_162));
                {
                  s_162 = t;
                  if(((n_162 != NULL) && (n_162 != s_162)))
                    _fail(s_162);
                  else
                    n_162 = s_162;
                }
              }
            }
          }
          t = p_34;
          {
            ATerm e_8 (ATerm t)
            {
              t = not_null(n_162);
              return(t);
            }
            t = reverse_acc_2(t, l_0, e_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) k_162 == ATempty))
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
  ATerm f_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm d_163 = NULL,e_163 = NULL;
  d_163 = t;
  c_163 :
  if(match_cons(d_163, sym_Program_1))
    {
      e_163 = ATgetArgument(d_163, 0);
      {
        ATerm h_163 = NULL,j_163 = NULL;
        ATerm i_163 = NULL;
        t = SSLgetAnnotations(not_null(d_163));
        {
          i_163 = t;
          if(((h_163 != NULL) && (h_163 != i_163)))
            _fail(i_163);
          else
            h_163 = i_163;
        }
        {
          t = not_null(e_163);
          {
            ATerm l_163 = NULL;
            t = o_70(t);
            {
              j_163 = t;
              {
                ATerm m_163 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(j_163)), not_null(h_163));
                {
                  m_163 = t;
                  if(((l_163 != NULL) && (l_163 != m_163)))
                    _fail(m_163);
                  else
                    l_163 = m_163;
                }
                t = not_null(l_163);
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
  ATerm v_163 = NULL;
  ATerm g_8 (ATerm t)
  {
    ATerm h_8 (ATerm t)
    {
      ATerm w_163 = NULL;
      w_163 = t;
      if(((v_163 != NULL) && (v_163 != w_163)))
        _fail(w_163);
      else
        v_163 = w_163;
      return(t);
    }
    t = Program_1(t, h_8);
    return(t);
  }
  t = option_defined_1(t, g_8);
  {
    ATerm i_8 (ATerm t)
    {
      ATerm x_163 = NULL;
      ATerm y_163 = NULL;
      t = term_z_18;
      {
        ATerm j_8 (ATerm t)
        {
          t = not_null(v_163);
          return(t);
        }
        t = short_description_1(t, j_8);
        {
          t = concat_strings_0(t);
          {
            y_163 = t;
            if(((x_163 != NULL) && (x_163 != y_163)))
              _fail(y_163);
            else
              x_163 = y_163;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, not_null(x_163)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, i_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, term_r_34));
      {
        t = printnl_0(t);
        {
          t = term_u_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_8 (ATerm t)
                {
                  ATerm z_163 = NULL;
                  z_163 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_163)), term_v_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_8);
                {
                  ATerm l_8 (ATerm t)
                  {
                    ATerm b_164 = NULL;
                    ATerm c_164 = NULL;
                    t = term_z_18;
                    {
                      ATerm m_8 (ATerm t)
                      {
                        t = not_null(v_163);
                        return(t);
                      }
                      t = long_description_1(t, m_8);
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
                      t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_164)), term_w_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_8);
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
ATerm Undefined_1 (ATerm t, ATerm p_70 (ATerm))
{
  ATerm n_164 = NULL,o_164 = NULL;
  n_164 = t;
  m_164 :
  if(match_cons(n_164, sym_Undefined_1))
    {
      o_164 = ATgetArgument(n_164, 0);
      {
        ATerm r_164 = NULL,t_164 = NULL;
        ATerm s_164 = NULL;
        t = SSLgetAnnotations(not_null(n_164));
        {
          s_164 = t;
          if(((r_164 != NULL) && (r_164 != s_164)))
            _fail(s_164);
          else
            r_164 = s_164;
        }
        {
          t = not_null(o_164);
          {
            ATerm v_164 = NULL;
            t = p_70(t);
            {
              t_164 = t;
              {
                ATerm w_164 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(t_164)), not_null(r_164));
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
ATerm fetch_1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm c_165 (ATerm t)
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_99, _id);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = Cons_2(t, _id, c_165);
      }
    return(t);
  }
  t = c_165(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_87 (ATerm))
{
  t = fetch_1(t, c_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_165 = NULL;
  h_165 = t;
  g_165 :
  if(match_cons(h_165, sym_Help_0))
    {
      ATerm j_165 = NULL,l_165 = NULL;
      ATerm z_34;
      z_34 = t;
      {
        ATerm k_165 = NULL;
        t = SSLgetAnnotations(not_null(h_165));
        {
          k_165 = t;
          if(((j_165 != NULL) && (j_165 != k_165)))
            _fail(k_165);
          else
            j_165 = k_165;
        }
      }
      t = z_34;
      {
        ATerm m_165 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(j_165));
        {
          m_165 = t;
          if(((l_165 != NULL) && (l_165 != m_165)))
            _fail(m_165);
          else
            l_165 = m_165;
        }
        t = not_null(l_165);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_108 (ATerm))
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_108(t);
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm s_165 = NULL,t_165 = NULL,u_165 = NULL;
  s_165 = t;
  r_165 :
  if(match_cons(s_165, sym__2))
    {
      t_165 = ATgetArgument(s_165, 0);
      u_165 = ATgetArgument(s_165, 1);
      t = SSL_table_get(not_null(t_165), not_null(u_165));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_166 = NULL,c_166 = NULL,d_166 = NULL,e_166 = NULL;
  b_166 = t;
  a_166 :
  if(match_cons(b_166, sym__3))
    {
      c_166 = ATgetArgument(b_166, 0);
      d_166 = ATgetArgument(b_166, 1);
      e_166 = ATgetArgument(b_166, 2);
      {
        ATerm c_35;
        c_35 = t;
        {
          ATerm i_166 = NULL;
          ATerm j_166 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_166), not_null(d_166));
          {
            ATerm d_35 = t;
            int e_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(e_35);
              }
            else
              {
                t = d_35;
                t = (ATerm) ATempty;
              }
            {
              j_166 = t;
              if(((i_166 != NULL) && (i_166 != j_166)))
                _fail(j_166);
              else
                i_166 = j_166;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_166), not_null(d_166), (ATerm) ATinsert(CheckATermList(not_null(i_166)), not_null(e_166)));
            t = table_put_0(t);
          }
        }
        t = c_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm n_166 = NULL;
  ATerm o_166 = NULL;
  t = term_z_18;
  {
    t = c_86(t);
    {
      o_166 = t;
      if(((n_166 != NULL) && (n_166 != o_166)))
        _fail(o_166);
      else
        n_166 = o_166;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_34, term_t_34, not_null(n_166));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm u_166 = NULL,v_166 = NULL,w_166 = NULL;
  u_166 = t;
  t_166 :
  if(match_string(u_166, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(u_166) == AT_LIST) && ((ATermList) u_166 != ATempty)))
        {
          v_166 = ATgetFirst((ATermList) u_166);
          w_166 = (ATerm) ATgetNext((ATermList) u_166);
          {
            ATerm a_167 = NULL;
            ATerm f_35;
            f_35 = t;
            {
              t = not_null(v_166);
              t = c_0(t);
            }
            t = f_35;
            {
              ATerm b_167 = NULL;
              t = term_z_18;
              {
                t = d_0(t);
                {
                  b_167 = t;
                  if(((a_167 != NULL) && (a_167 != b_167)))
                    _fail(b_167);
                  else
                    a_167 = b_167;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(w_166)), not_null(a_167));
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
  ATerm n_8 (ATerm t)
  {
    ATerm g_167 = NULL;
    g_167 = t;
    f_167 :
    if(!(match_string(g_167, "--help")))
      {
        if(!(match_string(g_167, "-h")))
          {
            if(!(match_string(g_167, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    t = term_g_35;
    return(t);
  }
  ATerm p_8 (ATerm t)
  {
    t = term_h_35;
    return(t);
  }
  t = Option_3(t, n_8, o_8, p_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_167 = NULL,k_167 = NULL,l_167 = NULL;
  j_167 = t;
  i_167 :
  if(((ATgetType(j_167) == AT_LIST) && ((ATermList) j_167 != ATempty)))
    {
      k_167 = ATgetFirst((ATermList) j_167);
      l_167 = (ATerm) ATgetNext((ATermList) j_167);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_167)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_167)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm))
{
  ATerm w_167 = NULL,x_167 = NULL,y_167 = NULL;
  w_167 = t;
  v_167 :
  if(((ATgetType(w_167) == AT_LIST) && ((ATermList) w_167 != ATempty)))
    {
      x_167 = ATgetFirst((ATermList) w_167);
      y_167 = (ATerm) ATgetNext((ATermList) w_167);
      {
        ATerm c_168 = NULL,e_168 = NULL;
        ATerm d_168 = NULL;
        t = SSLgetAnnotations(not_null(w_167));
        {
          d_168 = t;
          if(((c_168 != NULL) && (c_168 != d_168)))
            _fail(d_168);
          else
            c_168 = d_168;
        }
        {
          t = not_null(x_167);
          {
            ATerm g_168 = NULL;
            t = f_80(t);
            {
              e_168 = t;
              {
                t = not_null(y_167);
                {
                  ATerm i_168 = NULL;
                  t = g_80(t);
                  {
                    g_168 = t;
                    {
                      ATerm j_168 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_168)), not_null(e_168)), not_null(c_168));
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
        ATerm v_168 = NULL,x_168 = NULL;
        ATerm i_35;
        i_35 = t;
        {
          ATerm w_168 = NULL;
          t = SSLgetAnnotations(not_null(t_168));
          {
            w_168 = t;
            if(((v_168 != NULL) && (v_168 != w_168)))
              _fail(w_168);
            else
              v_168 = w_168;
          }
        }
        t = i_35;
        {
          ATerm y_168 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_168));
          {
            y_168 = t;
            if(((x_168 != NULL) && (x_168 != y_168)))
              _fail(y_168);
            else
              x_168 = y_168;
          }
          t = not_null(x_168);
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
  ATerm e_169 = NULL,f_169 = NULL,g_169 = NULL;
  e_169 = t;
  d_169 :
  if(match_cons(e_169, sym__2))
    {
      f_169 = ATgetArgument(e_169, 0);
      g_169 = ATgetArgument(e_169, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_30, not_null(f_169), not_null(g_169));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm k_35;
  k_35 = t;
  {
    ATerm q_8 (ATerm t)
    {
      t = term_l_35;
      t = a_86(t);
      return(t);
    }
    t = try_1(t, q_8);
  }
  t = k_35;
  {
    ATerm r_8 (ATerm t)
    {
      ATerm o_169 = NULL;
      ATerm m_35;
      m_35 = t;
      {
        ATerm m_169 = NULL;
        ATerm n_169 = NULL;
        n_169 = t;
        if(((m_169 != NULL) && (m_169 != n_169)))
          _fail(n_169);
        else
          m_169 = n_169;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_31, not_null(m_169));
          t = set_config_0(t);
        }
      }
      t = m_35;
      {
        ATerm p_169 = NULL;
        p_169 = t;
        if(((o_169 != NULL) && (o_169 != p_169)))
          _fail(p_169);
        else
          o_169 = p_169;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_169));
      }
      return(t);
    }
    ATerm s_8 (ATerm t)
    {
      ATerm n_35 = t;
      int o_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_35);
            }
          else
            {
              t = p_35;
              {
                t = a_86(t);
                t = Cons_2(t, _id, s_8);
              }
            }
          LocalPopChoice(o_35);
        }
      else
        {
          t = n_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, r_8, s_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_169 = NULL,w_169 = NULL,x_169 = NULL;
  ATerm r_35;
  r_35 = t;
  {
    ATerm z_169 = NULL,a_170 = NULL,b_170 = NULL,c_170 = NULL;
    z_169 = t;
    u_169 :
    if(match_cons(z_169, sym__3))
      {
        a_170 = ATgetArgument(z_169, 0);
        b_170 = ATgetArgument(z_169, 1);
        c_170 = ATgetArgument(z_169, 2);
        {
          if(((v_169 != NULL) && (v_169 != a_170)))
            _fail(a_170);
          else
            v_169 = a_170;
          {
            if(((w_169 != NULL) && (w_169 != b_170)))
              _fail(b_170);
            else
              w_169 = b_170;
            {
              if(((x_169 != NULL) && (x_169 != c_170)))
                _fail(c_170);
              else
                x_169 = c_170;
              t = SSL_table_put(not_null(v_169), not_null(w_169), not_null(x_169));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_35;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm f_170 = NULL;
  ATerm s_35;
  s_35 = t;
  {
    t = term_t_35;
    t = table_put_0(t);
  }
  t = s_35;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm u_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_85(t);
          LocalPopChoice(v_35);
        }
      else
        {
          t = u_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_8);
    {
      ATerm u_8 (ATerm t)
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
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
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm v_8 (ATerm t)
              {
                ATerm w_8 (ATerm t)
                {
                  ATerm g_170 = NULL;
                  g_170 = t;
                  if(((f_170 != NULL) && (f_170 != g_170)))
                    _fail(g_170);
                  else
                    f_170 = g_170;
                  return(t);
                }
                t = Undefined_1(t, w_8);
                return(t);
              }
              t = option_defined_1(t, v_8);
              {
                ATerm y_35;
                y_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_170)), term_z_35));
                  t = printnl_0(t);
                }
                t = y_35;
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
      t = try_1(t, u_8);
      {
        ATerm a_36;
        a_36 = t;
        {
          t = term_s_34;
          t = table_destroy_0(t);
        }
        t = a_36;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm))
{
  ATerm x_8 (ATerm t)
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_88(t);
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, x_8);
  {
    t = store_options_0(t);
    {
      t = u_88(t);
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_88);
            LocalPopChoice(e_36);
          }
        else
          {
            t = d_36;
            {
              ATerm f_36 = t;
              int g_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, r_88);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(g_36);
                }
              else
                {
                  t = f_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm))
{
  ATerm y_8 (ATerm t)
  {
    ATerm z_8 (ATerm t)
    {
      ATerm h_36;
      h_36 = t;
      {
        ATerm j_170 = NULL;
        ATerm k_170 = NULL;
        t = term_n_31;
        {
          t = get_config_0(t);
          {
            k_170 = t;
            if(((j_170 != NULL) && (j_170 != k_170)))
              _fail(k_170);
            else
              j_170 = k_170;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATempty, not_null(j_170)));
          t = printnl_0(t);
        }
      }
      t = h_36;
      return(t);
    }
    t = if_verbose2_1(t, z_8);
    return(t);
  }
  t = iowrap_4(t, l_88, m_88, n_88, y_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  t = iowrap_3(t, j_88, k_88, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm a_9 (ATerm t)
  {
    t = _2(t, _id, g_88);
    return(t);
  }
  t = iowrap_2(t, a_9, _fail);
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
