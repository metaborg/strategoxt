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
ATerm term_p_40;
ATerm term_h_40;
ATerm term_z_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_v_37;
ATerm term_t_37;
ATerm term_r_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_h_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_v_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_l_35;
ATerm term_c_35;
ATerm term_y_34;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_k_29;
ATerm term_g_29;
ATerm term_i_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_i_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_p_23;
ATerm term_k_23;
ATerm term_f_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_x_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_f_15;
ATerm term_u_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
void init_constant_terms (void)
{
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Op_2, term_f_19, (ATerm) ATempty);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_g_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Var_1, term_t_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Var_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_v_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Var_1, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Var_1, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_c_20, term_e_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_19);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Call_2, term_i_20, (ATerm) ATempty);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_BAM_3, term_j_20, term_v_19, term_c_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_19);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Call_2, term_q_20, (ATerm) ATempty);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_BAM_3, term_x_20, term_z_19, term_e_20);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Var_1, term_u_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_22);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, term_x_24);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_19);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Op_2, term_o_30, (ATerm) ATempty);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_30);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Op_2, term_c_13, (ATerm) ATempty);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_31);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_d_24);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_24);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym__2, term_p_36, term_s_27);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_v_36, term_s_27);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_s_27);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym__2, term_u_38, term_v_38);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym__2, term_t_39, term_s_27);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__3, term_u_38, term_v_38, (ATerm) ATempty);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm Prim_2 (ATerm, ATerm m_79 (ATerm), ATerm n_79 (ATerm));
ATerm Explode_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm a_80 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm p_98 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm w_76 (ATerm));
ATerm Specification_1 (ATerm, ATerm y_76 (ATerm));
ATerm if_verbose5_1 (ATerm, ATerm j_87 (ATerm));
ATerm timing_1 (ATerm, ATerm j_109 (ATerm));
ATerm spaste_1 (ATerm, ATerm p_80 (ATerm));
ATerm Rec_2 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm));
ATerm SDef_3 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm));
ATerm Let_2 (ATerm, ATerm h_78 (ATerm), ATerm i_78 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm e_78 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm j_83 (ATerm, ATerm (ATerm)), ATerm k_83 (ATerm), ATerm l_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_83 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm z_105 (ATerm));
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
ATerm CheckCons_0 (ATerm);
ATerm manytd_1 (ATerm, ATerm h_107 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm o_81 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm l_80 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm b_83 (ATerm), ATerm c_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm, ATerm (ATerm)));
ATerm Fst_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm v_82 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm p_101 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm u_101 (ATerm));
ATerm substitute_6 (ATerm, ATerm t_83 (ATerm), ATerm u_83 (ATerm, ATerm (ATerm)), ATerm v_83 (ATerm), ATerm w_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_83 (ATerm, ATerm (ATerm)), ATerm y_83 (ATerm));
ATerm substitute_5 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm, ATerm (ATerm)), ATerm c_84 (ATerm), ATerm d_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_84 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm m_81 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm n_81 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm j_80 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm));
ATerm lchoice_1 (ATerm, ATerm i_80 (ATerm));
ATerm LChoice_2 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm choice_1 (ATerm, ATerm h_80 (ATerm));
ATerm Choice_2 (ATerm, ATerm s_77 (ATerm), ATerm t_77 (ATerm));
ATerm error_0 (ATerm);
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm a_91 (ATerm));
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm RootApp_1 (ATerm, ATerm k_75 (ATerm));
ATerm App_2 (ATerm, ATerm i_75 (ATerm), ATerm j_75 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm z_90 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm y_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm f_79 (ATerm));
ATerm Build_1 (ATerm, ATerm g_79 (ATerm));
ATerm VarScope_1 (ATerm, ATerm e_80 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm assert_1 (ATerm, ATerm y_90 (ATerm));
ATerm DefineUnbound_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm v_90 (ATerm));
ATerm restore_always_2 (ATerm, ATerm a_109 (ATerm), ATerm b_109 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_90 (ATerm));
ATerm scope_2 (ATerm, ATerm w_90 (ATerm), ATerm x_90 (ATerm));
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm u_76 (ATerm));
ATerm Signature_1 (ATerm, ATerm t_76 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm j_104 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm strings_to_vars_0 (ATerm);
ATerm isect_1 (ATerm, ATerm t_95 (ATerm));
ATerm isect_0 (ATerm);
ATerm new_0 (ATerm);
ATerm SplitDynamicRule_2 (ATerm, ATerm w_0 (ATerm), ATerm x_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm dist_scope_1 (ATerm, ATerm e_109 (ATerm));
ATerm one_dist_1 (ATerm, ATerm q_101 (ATerm));
ATerm env_oncetd_1 (ATerm, ATerm i_102 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm c_109 (ATerm));
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm q_107 (ATerm), ATerm r_107 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_107 (ATerm));
ATerm listtd_1 (ATerm, ATerm y_100 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm m_76 (ATerm));
ATerm Scope_2 (ATerm, ATerm j_79 (ATerm), ATerm k_79 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm m_95 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm));
ATerm crush_3 (ATerm, ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm));
ATerm for_3 (ATerm, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm diff_1 (ATerm, ATerm p_95 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm k_104 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm IsVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm alltd_1 (ATerm, ATerm n_106 (ATerm));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm));
ATerm zip_1 (ATerm, ATerm k_98 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm q_83 (ATerm), ATerm r_83 (ATerm));
ATerm substitute_1 (ATerm, ATerm s_83 (ATerm));
ATerm tsubs_0 (ATerm);
ATerm OpName_0 (ATerm);
ATerm OpNames_0 (ATerm);
ATerm OLName_0 (ATerm);
ATerm Names_0 (ATerm);
ATerm filter_1 (ATerm, ATerm j_93 (ATerm));
ATerm const_names_0 (ATerm);
ATerm vars_to_consts_0 (ATerm);
ATerm MkSpec_0 (ATerm);
ATerm Combine_0 (ATerm);
ATerm NormBSIG_0 (ATerm);
ATerm normalize_sigs_0 (ATerm);
ATerm NormBSP_0 (ATerm);
ATerm BSpecs_0 (ATerm);
ATerm DefineSugar_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm i_100 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_90 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_87 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_92 (ATerm), ATerm s_92 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm d_94 (ATerm), ATerm e_94 (ATerm));
ATerm crush_2 (ATerm, ATerm v_95 (ATerm), ATerm w_95 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_89 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_85 (ATerm));
ATerm map_1 (ATerm, ATerm t_99 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_85 (ATerm));
ATerm Program_1 (ATerm, ATerm u_69 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm d_90 (ATerm));
ATerm Undefined_1 (ATerm, ATerm v_69 (ATerm));
ATerm fetch_1 (ATerm, ATerm c_100 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_108 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_85 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_79 (ATerm), ATerm p_79 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_85 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_88 (ATerm), ATerm r_88 (ATerm));
ATerm iowrap_1 (ATerm, ATerm n_88 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
  g_9 = t;
  e_9 :
  if(match_cons(g_9, sym_ExplodeCong_2))
    {
      h_9 = ATgetArgument(g_9, 0);
      f_9 = ATgetArgument(g_9, 1);
      {
        ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
        ATerm o_9 = NULL;
        ATerm p_9 = NULL;
        t = new_0(t);
        {
          o_9 = t;
          {
            if(((k_9 != NULL) && (k_9 != o_9)))
              _fail(o_9);
            else
              k_9 = o_9;
            {
              ATerm q_9 = NULL;
              t = new_0(t);
              {
                p_9 = t;
                {
                  if(((l_9 != NULL) && (l_9 != p_9)))
                    _fail(p_9);
                  else
                    l_9 = p_9;
                  {
                    ATerm r_9 = NULL;
                    t = new_0(t);
                    {
                      q_9 = t;
                      {
                        if(((m_9 != NULL) && (m_9 != q_9)))
                          _fail(q_9);
                        else
                          m_9 = q_9;
                        {
                          t = new_0(t);
                          {
                            r_9 = t;
                            if(((n_9 != NULL) && (n_9 != r_9)))
                              _fail(r_9);
                            else
                              n_9 = r_9;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_9)), not_null(m_9)), not_null(l_9)), not_null(k_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(h_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_9)))))));
      }
    }
  else
    {
      if(match_cons(g_9, sym_Build_1))
        {
          h_9 = ATgetArgument(g_9, 0);
          {
            ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
            ATerm x_9 = NULL;
            ATerm b_10 = NULL;
            t = new_0(t);
            {
              x_9 = t;
              {
                if(((v_9 != NULL) && (v_9 != x_9)))
                  _fail(x_9);
                else
                  v_9 = x_9;
                {
                  t = not_null(h_9);
                  {
                    ATerm m_0 (ATerm t)
                    {
                      ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
                      y_9 = t;
                      x_8 :
                      if(match_cons(y_9, sym_Explode_2))
                        {
                          z_9 = ATgetArgument(y_9, 0);
                          a_10 = ATgetArgument(y_9, 1);
                          {
                            if(((t_9 != NULL) && (t_9 != z_9)))
                              _fail(z_9);
                            else
                              t_9 = z_9;
                            {
                              if(((u_9 != NULL) && (u_9 != a_10)))
                                _fail(a_10);
                              else
                                u_9 = a_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_9));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, m_0);
                    {
                      b_10 = t;
                      if(((w_9 != NULL) && (w_9 != b_10)))
                        _fail(b_10);
                      else
                        w_9 = b_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_9)), not_null(t_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_9)))));
          }
        }
      else
        {
          if(match_cons(g_9, sym_Match_1))
            {
              h_9 = ATgetArgument(g_9, 0);
              {
                ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
                ATerm i_10 = NULL;
                ATerm j_10 = NULL;
                t = new_0(t);
                {
                  i_10 = t;
                  {
                    if(((f_10 != NULL) && (f_10 != i_10)))
                      _fail(i_10);
                    else
                      f_10 = i_10;
                    {
                      ATerm n_10 = NULL;
                      t = new_0(t);
                      {
                        j_10 = t;
                        {
                          if(((g_10 != NULL) && (g_10 != j_10)))
                            _fail(j_10);
                          else
                            g_10 = j_10;
                          {
                            t = not_null(h_9);
                            {
                              ATerm n_0 (ATerm t)
                              {
                                ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
                                k_10 = t;
                                c_9 :
                                if(match_cons(k_10, sym_Explode_2))
                                  {
                                    l_10 = ATgetArgument(k_10, 0);
                                    m_10 = ATgetArgument(k_10, 1);
                                    {
                                      if(((d_10 != NULL) && (d_10 != l_10)))
                                        _fail(l_10);
                                      else
                                        d_10 = l_10;
                                      {
                                        if(((e_10 != NULL) && (e_10 != m_10)))
                                          _fail(m_10);
                                        else
                                          e_10 = m_10;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_10));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, n_0);
                              {
                                n_10 = t;
                                if(((h_10 != NULL) && (h_10 != n_10)))
                                  _fail(n_10);
                                else
                                  h_10 = n_10;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_10)), (ATerm) ATmakeAppl(sym_Op_2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_10)), not_null(d_10)))))));
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
  ATerm s_11 = NULL,t_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Match_1))
    {
      t_11 = ATgetArgument(s_11, 0);
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
            ATerm z_11 = NULL;
            ATerm d_12 = NULL;
            t = new_0(t);
            {
              z_11 = t;
              {
                if(((x_11 != NULL) && (x_11 != z_11)))
                  _fail(z_11);
                else
                  x_11 = z_11;
                {
                  t = not_null(t_11);
                  {
                    ATerm u_0 (ATerm t)
                    {
                      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
                      a_12 = t;
                      h_11 :
                      if(match_cons(a_12, sym_Anno_2))
                        {
                          b_12 = ATgetArgument(a_12, 0);
                          c_12 = ATgetArgument(a_12, 1);
                          {
                            if(((v_11 != NULL) && (v_11 != b_12)))
                              _fail(b_12);
                            else
                              v_11 = b_12;
                            {
                              if(((w_11 != NULL) && (w_11 != c_12)))
                                _fail(c_12);
                              else
                                w_11 = c_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_11)), not_null(v_11));
                            }
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
                      d_12 = t;
                      if(((y_11 != NULL) && (y_11 != d_12)))
                        _fail(d_12);
                      else
                        y_11 = d_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_f_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_11)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_11))))));
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm g_13 = t;
              int h_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
                  ATerm i_12 = NULL;
                  ATerm l_12 = NULL;
                  t = new_0(t);
                  {
                    i_12 = t;
                    {
                      if(((g_12 != NULL) && (g_12 != i_12)))
                        _fail(i_12);
                      else
                        g_12 = i_12;
                      {
                        t = not_null(t_11);
                        {
                          ATerm v_0 (ATerm t)
                          {
                            ATerm j_12 = NULL,k_12 = NULL;
                            j_12 = t;
                            l_11 :
                            if(match_cons(j_12, sym_RootApp_1))
                              {
                                k_12 = ATgetArgument(j_12, 0);
                                {
                                  if(((f_12 != NULL) && (f_12 != k_12)))
                                    _fail(k_12);
                                  else
                                    f_12 = k_12;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_12));
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
                            l_12 = t;
                            if(((h_12 != NULL) && (h_12 != l_12)))
                              _fail(l_12);
                            else
                              h_12 = l_12;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_12))), not_null(f_12))));
                  LocalPopChoice(h_13);
                }
              else
                {
                  t = g_13;
                  {
                    ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
                    ATerm r_12 = NULL;
                    ATerm v_12 = NULL;
                    t = new_0(t);
                    {
                      r_12 = t;
                      {
                        if(((p_12 != NULL) && (p_12 != r_12)))
                          _fail(r_12);
                        else
                          p_12 = r_12;
                        {
                          t = not_null(t_11);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
                              s_12 = t;
                              p_11 :
                              if(match_cons(s_12, sym_App_2))
                                {
                                  t_12 = ATgetArgument(s_12, 0);
                                  u_12 = ATgetArgument(s_12, 1);
                                  {
                                    if(((o_12 != NULL) && (o_12 != t_12)))
                                      _fail(t_12);
                                    else
                                      o_12 = t_12;
                                    {
                                      if(((n_12 != NULL) && (n_12 != u_12)))
                                        _fail(u_12);
                                      else
                                        n_12 = u_12;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_12));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, z_0);
                            {
                              v_12 = t;
                              if(((q_12 != NULL) && (q_12 != v_12)))
                                _fail(v_12);
                              else
                                q_12 = v_12;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_12))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_12)), not_null(o_12)))));
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
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
  m_13 = t;
  k_13 :
  if(match_cons(m_13, sym_Match_1))
    {
      n_13 = ATgetArgument(m_13, 0);
      l_13 :
      if(match_cons(n_13, sym_RootApp_1))
        {
          o_13 = ATgetArgument(n_13, 0);
          t = not_null(o_13);
        }
      else
        {
          if(match_cons(n_13, sym_App_2))
            {
              o_13 = ATgetArgument(n_13, 0);
              p_13 = ATgetArgument(n_13, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(o_13), not_null(p_13));
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
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_Match_1))
    {
      c_14 = ATgetArgument(b_14, 0);
      {
        ATerm e_14 = NULL,f_14 = NULL;
        ATerm j_14 = NULL;
        t = not_null(c_14);
        {
          ATerm a_1 (ATerm t)
          {
            ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
            g_14 = t;
            x_13 :
            if(match_cons(g_14, sym_RootApp_1))
              {
                h_14 = ATgetArgument(g_14, 0);
                y_13 :
                if(match_cons(h_14, sym_Match_1))
                  {
                    i_14 = ATgetArgument(h_14, 0);
                    {
                      if(((e_14 != NULL) && (e_14 != i_14)))
                        _fail(i_14);
                      else
                        e_14 = i_14;
                      t = not_null(e_14);
                    }
                  }
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
          t = pat_td_1(t, a_1);
          {
            j_14 = t;
            if(((f_14 != NULL) && (f_14 != j_14)))
              _fail(j_14);
            else
              f_14 = j_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(f_14));
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
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_Build_1))
    {
      e_15 = ATgetArgument(d_15, 0);
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
            ATerm k_15 = NULL;
            ATerm o_15 = NULL;
            t = new_0(t);
            {
              k_15 = t;
              {
                if(((i_15 != NULL) && (i_15 != k_15)))
                  _fail(k_15);
                else
                  i_15 = k_15;
                {
                  t = not_null(e_15);
                  {
                    ATerm b_1 (ATerm t)
                    {
                      ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
                      l_15 = t;
                      s_14 :
                      if(match_cons(l_15, sym_Anno_2))
                        {
                          m_15 = ATgetArgument(l_15, 0);
                          n_15 = ATgetArgument(l_15, 1);
                          {
                            if(((g_15 != NULL) && (g_15 != m_15)))
                              _fail(m_15);
                            else
                              g_15 = m_15;
                            {
                              if(((h_15 != NULL) && (h_15 != n_15)))
                                _fail(n_15);
                              else
                                h_15 = n_15;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_15));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, b_1);
                    {
                      o_15 = t;
                      if(((j_15 != NULL) && (j_15 != o_15)))
                        _fail(o_15);
                      else
                        j_15 = o_15;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_u_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_15)), not_null(g_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_15))));
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
                  ATerm t_15 = NULL;
                  ATerm w_15 = NULL;
                  t = new_0(t);
                  {
                    t_15 = t;
                    {
                      if(((r_15 != NULL) && (r_15 != t_15)))
                        _fail(t_15);
                      else
                        r_15 = t_15;
                      {
                        t = not_null(e_15);
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm u_15 = NULL,v_15 = NULL;
                            u_15 = t;
                            w_14 :
                            if(match_cons(u_15, sym_RootApp_1))
                              {
                                v_15 = ATgetArgument(u_15, 0);
                                {
                                  if(((q_15 != NULL) && (q_15 != v_15)))
                                    _fail(v_15);
                                  else
                                    q_15 = v_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_15));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, c_1);
                          {
                            w_15 = t;
                            if(((s_15 != NULL) && (s_15 != w_15)))
                              _fail(w_15);
                            else
                              s_15 = w_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_15))));
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                  {
                    ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
                    ATerm c_16 = NULL;
                    ATerm g_16 = NULL;
                    t = new_0(t);
                    {
                      c_16 = t;
                      {
                        if(((a_16 != NULL) && (a_16 != c_16)))
                          _fail(c_16);
                        else
                          a_16 = c_16;
                        {
                          t = not_null(e_15);
                          {
                            ATerm d_1 (ATerm t)
                            {
                              ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
                              d_16 = t;
                              a_15 :
                              if(match_cons(d_16, sym_App_2))
                                {
                                  e_16 = ATgetArgument(d_16, 0);
                                  f_16 = ATgetArgument(d_16, 1);
                                  {
                                    if(((y_15 != NULL) && (y_15 != e_16)))
                                      _fail(e_16);
                                    else
                                      y_15 = e_16;
                                    {
                                      if(((z_15 != NULL) && (z_15 != f_16)))
                                        _fail(f_16);
                                      else
                                        z_15 = f_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_16));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, d_1);
                            {
                              g_16 = t;
                              if(((b_16 != NULL) && (b_16 != g_16)))
                                _fail(g_16);
                              else
                                b_16 = g_16;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(y_15), not_null(z_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_16))));
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
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
  x_16 = t;
  v_16 :
  if(match_cons(x_16, sym_Build_1))
    {
      y_16 = ATgetArgument(x_16, 0);
      w_16 :
      if(match_cons(y_16, sym_RootApp_1))
        {
          z_16 = ATgetArgument(y_16, 0);
          t = not_null(z_16);
        }
      else
        {
          if(match_cons(y_16, sym_App_2))
            {
              z_16 = ATgetArgument(y_16, 0);
              a_17 = ATgetArgument(y_16, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_17)), not_null(z_16));
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
ATerm As_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym_As_2))
    {
      n_17 = ATgetArgument(m_17, 0);
      o_17 = ATgetArgument(m_17, 1);
      {
        ATerm s_17 = NULL,u_17 = NULL;
        ATerm t_17 = NULL;
        t = SSLgetAnnotations(not_null(m_17));
        {
          t_17 = t;
          if(((s_17 != NULL) && (s_17 != t_17)))
            _fail(t_17);
          else
            s_17 = t_17;
        }
        {
          t = not_null(n_17);
          {
            ATerm w_17 = NULL;
            t = s_75(t);
            {
              u_17 = t;
              {
                t = not_null(o_17);
                {
                  ATerm y_17 = NULL;
                  t = t_75(t);
                  {
                    w_17 = t;
                    {
                      ATerm z_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(u_17), not_null(w_17)), not_null(s_17));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm m_79 (ATerm), ATerm n_79 (ATerm))
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym_Prim_2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm r_18 = NULL,t_18 = NULL;
        ATerm s_18 = NULL;
        t = SSLgetAnnotations(not_null(l_18));
        {
          s_18 = t;
          if(((r_18 != NULL) && (r_18 != s_18)))
            _fail(s_18);
          else
            r_18 = s_18;
        }
        {
          t = not_null(m_18);
          {
            ATerm v_18 = NULL;
            t = m_79(t);
            {
              t_18 = t;
              {
                t = not_null(n_18);
                {
                  ATerm x_18 = NULL;
                  t = n_79(t);
                  {
                    v_18 = t;
                    {
                      ATerm y_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(t_18), not_null(v_18)), not_null(r_18));
                      {
                        y_18 = t;
                        if(((x_18 != NULL) && (x_18 != y_18)))
                          _fail(y_18);
                        else
                          x_18 = y_18;
                      }
                      t = not_null(x_18);
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
ATerm Explode_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym_Explode_2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      {
        ATerm q_19 = NULL,s_19 = NULL;
        ATerm r_19 = NULL;
        t = SSLgetAnnotations(not_null(k_19));
        {
          r_19 = t;
          if(((q_19 != NULL) && (q_19 != r_19)))
            _fail(r_19);
          else
            q_19 = r_19;
        }
        {
          t = not_null(l_19);
          {
            ATerm u_19 = NULL;
            t = o_75(t);
            {
              s_19 = t;
              {
                t = not_null(m_19);
                {
                  ATerm w_19 = NULL;
                  t = p_75(t);
                  {
                    u_19 = t;
                    {
                      ATerm x_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(s_19), not_null(u_19)), not_null(q_19));
                      {
                        x_19 = t;
                        if(((w_19 != NULL) && (w_19 != x_19)))
                          _fail(x_19);
                        else
                          w_19 = x_19;
                      }
                      t = not_null(w_19);
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
ATerm pat_td_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm z_13 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_80(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = z_13;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = pat_td_1(t, a_80);
                return(t);
              }
              t = fetch_1(t, f_1);
              return(t);
            }
            t = Op_2(t, _id, e_1);
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm m_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = pat_td_1(t, a_80);
                    return(t);
                  }
                  t = Explode_2(t, _id, g_1);
                  LocalPopChoice(n_14);
                }
              else
                {
                  t = m_14;
                  {
                    ATerm o_14 = t;
                    int p_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_1 (ATerm t)
                        {
                          t = pat_td_1(t, a_80);
                          return(t);
                        }
                        t = Explode_2(t, h_1, _id);
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
                              ATerm i_1 (ATerm t)
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = pat_td_1(t, a_80);
                                  return(t);
                                }
                                t = fetch_1(t, j_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, i_1);
                              LocalPopChoice(r_14);
                            }
                          else
                            {
                              t = q_14;
                              {
                                ATerm k_1 (ATerm t)
                                {
                                  t = pat_td_1(t, a_80);
                                  return(t);
                                }
                                t = As_2(t, _id, k_1);
                              }
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
  ATerm o_20 = NULL,p_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Build_1))
    {
      p_20 = ATgetArgument(o_20, 0);
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 = NULL,s_20 = NULL;
            ATerm w_20 = NULL;
            t = not_null(p_20);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
                t_20 = t;
                g_20 :
                if(match_cons(t_20, sym_RootApp_1))
                  {
                    u_20 = ATgetArgument(t_20, 0);
                    h_20 :
                    if(match_cons(u_20, sym_Build_1))
                      {
                        v_20 = ATgetArgument(u_20, 0);
                        {
                          if(((r_20 != NULL) && (r_20 != v_20)))
                            _fail(v_20);
                          else
                            r_20 = v_20;
                          t = not_null(r_20);
                        }
                      }
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
              t = pat_td_1(t, l_1);
              {
                w_20 = t;
                if(((s_20 != NULL) && (s_20 != w_20)))
                  _fail(w_20);
                else
                  s_20 = w_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(s_20));
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            {
              ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
              ATerm f_21 = NULL;
              t = not_null(p_20);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
                  b_21 = t;
                  k_20 :
                  if(match_cons(b_21, sym_App_2))
                    {
                      c_21 = ATgetArgument(b_21, 0);
                      e_21 = ATgetArgument(b_21, 1);
                      l_20 :
                      if(match_cons(c_21, sym_Build_1))
                        {
                          d_21 = ATgetArgument(c_21, 0);
                          {
                            if(((z_20 != NULL) && (z_20 != d_21)))
                              _fail(d_21);
                            else
                              z_20 = d_21;
                            {
                              if(((y_20 != NULL) && (y_20 != e_21)))
                                _fail(e_21);
                              else
                                y_20 = e_21;
                              t = not_null(z_20);
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
                t = pat_td_1(t, m_1);
                {
                  f_21 = t;
                  if(((a_21 != NULL) && (a_21 != f_21)))
                    _fail(f_21);
                  else
                    a_21 = f_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_21));
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
  ATerm v_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(x_14);
    }
  else
    {
      t = v_14;
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm p_98 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, p_98);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  ATerm w_21 (ATerm t)
  {
    ATerm t_21 = NULL;
    ATerm u_21 = NULL;
    t = not_null(q_21);
    {
      ATerm b_15 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_15;
        }
      {
        t = new_0(t);
        {
          u_21 = t;
          if(((t_21 != NULL) && (t_21 != u_21)))
            _fail(u_21);
          else
            t_21 = u_21;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(t_21)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_21)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_21))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_21))));
    return(t);
  }
  ATerm x_21 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_f_15, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_21))));
    return(t);
  }
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Var_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm p_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_21(t);
            LocalPopChoice(x_15);
          }
        else
          {
            t = p_15;
            t = x_21(t);
          }
      }
    }
  else
    {
      t = w_21(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  d_22 :
  if(match_cons(e_22, sym_Prim_2))
    {
      f_22 = ATgetArgument(e_22, 0);
      g_22 = ATgetArgument(e_22, 1);
      {
        ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
        ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
        t = not_null(g_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm h_16 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_16;
              }
            return(t);
          }
          t = fetch_1(t, n_1);
          {
            t = not_null(g_22);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm o_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, o_1);
                {
                  m_22 = t;
                  b_22 :
                  if(match_cons(m_22, sym__2))
                    {
                      n_22 = ATgetArgument(m_22, 0);
                      o_22 = ATgetArgument(m_22, 1);
                      c_22 :
                      if(match_cons(o_22, sym__2))
                        {
                          p_22 = ATgetArgument(o_22, 0);
                          q_22 = ATgetArgument(o_22, 1);
                          {
                            if(((j_22 != NULL) && (j_22 != n_22)))
                              _fail(n_22);
                            else
                              j_22 = n_22;
                            {
                              if(((k_22 != NULL) && (k_22 != p_22)))
                                _fail(p_22);
                              else
                                k_22 = p_22;
                              if(((l_22 != NULL) && (l_22 != q_22)))
                                _fail(q_22);
                              else
                                l_22 = q_22;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(k_22)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(f_22), not_null(l_22))));
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
  ATerm p_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm q_1 (ATerm t)
      {
        ATerm i_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(j_16);
          }
        else
          {
            t = i_16;
            {
              ATerm k_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = k_16;
                  {
                    ATerm m_16 = t;
                    int n_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
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
                              t = Mapp_0(t);
                              LocalPopChoice(p_16);
                            }
                          else
                            {
                              t = o_16;
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
      t = repeat_1(t, q_1);
    }
    return(t);
  }
  t = topdown_1(t, p_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, r_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm y_22 = NULL,z_22 = NULL;
  y_22 = t;
  x_22 :
  if(match_cons(y_22, sym_Strategies_1))
    {
      z_22 = ATgetArgument(y_22, 0);
      {
        ATerm c_23 = NULL,e_23 = NULL;
        ATerm d_23 = NULL;
        t = SSLgetAnnotations(not_null(y_22));
        {
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
        }
        {
          t = not_null(z_22);
          {
            ATerm g_23 = NULL;
            t = w_76(t);
            {
              e_23 = t;
              {
                ATerm h_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(e_23)), not_null(c_23));
                {
                  h_23 = t;
                  if(((g_23 != NULL) && (g_23 != h_23)))
                    _fail(h_23);
                  else
                    g_23 = h_23;
                }
                t = not_null(g_23);
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
ATerm Specification_1 (ATerm t, ATerm y_76 (ATerm))
{
  ATerm r_23 = NULL,s_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym_Specification_1))
    {
      s_23 = ATgetArgument(r_23, 0);
      {
        ATerm v_23 = NULL,x_23 = NULL;
        ATerm w_23 = NULL;
        t = SSLgetAnnotations(not_null(r_23));
        {
          w_23 = t;
          if(((v_23 != NULL) && (v_23 != w_23)))
            _fail(w_23);
          else
            v_23 = w_23;
        }
        {
          t = not_null(s_23);
          {
            ATerm z_23 = NULL;
            t = y_76(t);
            {
              x_23 = t;
              {
                ATerm a_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(x_23)), not_null(v_23));
                {
                  a_24 = t;
                  if(((z_23 != NULL) && (z_23 != a_24)))
                    _fail(a_24);
                  else
                    z_23 = a_24;
                }
                t = not_null(z_23);
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
ATerm if_verbose5_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm q_16;
    q_16 = t;
    {
      ATerm g_24 = NULL;
      ATerm h_24 = NULL;
      t = term_r_16;
      {
        t = get_config_0(t);
        {
          h_24 = t;
          if(((g_24 != NULL) && (g_24 != h_24)))
            _fail(h_24);
          else
            g_24 = h_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_24), term_s_16);
        t = geq_0(t);
      }
    }
    t = q_16;
    t = j_87(t);
    return(t);
  }
  t = try_1(t, s_1);
  return(t);
}
ATerm timing_1 (ATerm t, ATerm j_109 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm t_16;
    t_16 = t;
    {
      t = run_time_0(t);
      t = debug_1(t, j_109);
    }
    t = t_16;
    return(t);
  }
  t = if_verbose5_1(t, t_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm u_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        t = split_2(t, _id, p_80);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
            p_24 = t;
            k_24 :
            if(match_cons(p_24, sym__2))
              {
                q_24 = ATgetArgument(p_24, 0);
                u_24 = ATgetArgument(p_24, 1);
                l_24 :
                if(match_cons(q_24, sym_SDef_3))
                  {
                    r_24 = ATgetArgument(q_24, 0);
                    s_24 = ATgetArgument(q_24, 1);
                    t_24 = ATgetArgument(q_24, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(u_24), not_null(s_24), not_null(t_24));
                  }
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
          t = zip_1(t, v_1);
        }
        return(t);
      }
      t = Let_2(t, u_1, _id);
      LocalPopChoice(b_17);
    }
  else
    {
      t = u_16;
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              t = split_2(t, _id, p_80);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
                  y_24 = t;
                  n_24 :
                  if(match_cons(y_24, sym__2))
                    {
                      z_24 = ATgetArgument(y_24, 0);
                      c_25 = ATgetArgument(y_24, 1);
                      o_24 :
                      if(match_cons(z_24, sym_VarDec_2))
                        {
                          a_25 = ATgetArgument(z_24, 0);
                          b_25 = ATgetArgument(z_24, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(c_25), not_null(b_25));
                        }
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
                t = zip_1(t, x_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, w_1, _id);
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
            {
              ATerm y_1 (ATerm t)
              {
                t = p_80(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, y_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_Rec_2))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      {
        ATerm u_25 = NULL,w_25 = NULL;
        ATerm v_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          v_25 = t;
          if(((u_25 != NULL) && (u_25 != v_25)))
            _fail(v_25);
          else
            u_25 = v_25;
        }
        {
          t = not_null(p_25);
          {
            ATerm y_25 = NULL;
            t = f_78(t);
            {
              w_25 = t;
              {
                t = not_null(q_25);
                {
                  ATerm a_26 = NULL;
                  t = g_78(t);
                  {
                    y_25 = t;
                    {
                      ATerm b_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(w_25), not_null(y_25)), not_null(u_25));
                      {
                        b_26 = t;
                        if(((a_26 != NULL) && (a_26 != b_26)))
                          _fail(b_26);
                        else
                          a_26 = b_26;
                      }
                      t = not_null(a_26);
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
ATerm SDef_3 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm l_78 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym_SDef_3))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      r_26 = ATgetArgument(o_26, 2);
      {
        ATerm e_27 = NULL,k_31 = NULL;
        ATerm f_27 = NULL;
        t = SSLgetAnnotations(not_null(o_26));
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
        {
          t = not_null(p_26);
          {
            ATerm m_31 = NULL;
            t = j_78(t);
            {
              k_31 = t;
              {
                t = not_null(q_26);
                {
                  ATerm o_31 = NULL;
                  t = k_78(t);
                  {
                    m_31 = t;
                    {
                      t = not_null(r_26);
                      {
                        ATerm q_31 = NULL;
                        t = l_78(t);
                        {
                          o_31 = t;
                          {
                            ATerm r_31 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(k_31), not_null(m_31), not_null(o_31)), not_null(e_27));
                            {
                              r_31 = t;
                              if(((q_31 != NULL) && (q_31 != r_31)))
                                _fail(r_31);
                              else
                                q_31 = r_31;
                            }
                            t = not_null(q_31);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm h_78 (ATerm), ATerm i_78 (ATerm))
{
  ATerm x_34 = NULL,w_35 = NULL,x_35 = NULL;
  x_34 = t;
  w_34 :
  if(match_cons(x_34, sym_Let_2))
    {
      w_35 = ATgetArgument(x_34, 0);
      x_35 = ATgetArgument(x_34, 1);
      {
        ATerm j_37 = NULL,s_37 = NULL;
        ATerm k_37 = NULL;
        t = SSLgetAnnotations(not_null(x_34));
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
        {
          t = not_null(w_35);
          {
            ATerm u_37 = NULL;
            t = h_78(t);
            {
              s_37 = t;
              {
                t = not_null(x_35);
                {
                  ATerm g_38 = NULL;
                  t = i_78(t);
                  {
                    u_37 = t;
                    {
                      ATerm h_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_37), not_null(u_37)), not_null(j_37));
                      {
                        h_38 = t;
                        if(((g_38 != NULL) && (g_38 != h_38)))
                          _fail(h_38);
                        else
                          g_38 = h_38;
                      }
                      t = not_null(g_38);
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
ATerm sboundin_3 (ATerm t, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, q_80, q_80);
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      {
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, s_80, s_80, q_80);
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            t = Rec_2(t, s_80, q_80);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  o_38 :
  if(match_cons(p_38, sym_Rec_2))
    {
      q_38 = ATgetArgument(p_38, 0);
      r_38 = ATgetArgument(p_38, 1);
      t = (ATerm) ATinsert(ATempty, not_null(q_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm z_38 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  z_38 = t;
  y_38 :
  if(match_cons(z_38, sym_SDef_3))
    {
      c_39 = ATgetArgument(z_38, 0);
      d_39 = ATgetArgument(z_38, 1);
      e_39 = ATgetArgument(z_38, 2);
      {
        t = not_null(d_39);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
            i_39 = t;
            x_38 :
            if(match_cons(i_39, sym_VarDec_2))
              {
                j_39 = ATgetArgument(i_39, 0);
                k_39 = ATgetArgument(i_39, 1);
                t = not_null(j_39);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_1);
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
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym_Let_2))
    {
      e_41 = ATgetArgument(d_41, 0);
      f_41 = ATgetArgument(d_41, 1);
      {
        t = not_null(e_41);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
            n_41 = t;
            v_40 :
            if(match_cons(n_41, sym_SDef_3))
              {
                o_41 = ATgetArgument(n_41, 0);
                p_41 = ATgetArgument(n_41, 1);
                q_41 = ATgetArgument(n_41, 2);
                t = not_null(o_41);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, a_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm i_42 = NULL,j_42 = NULL;
  i_42 = t;
  h_42 :
  if(match_cons(i_42, sym_SVar_1))
    {
      j_42 = ATgetArgument(i_42, 0);
      {
        ATerm m_42 = NULL,o_42 = NULL;
        ATerm n_42 = NULL;
        t = SSLgetAnnotations(not_null(i_42));
        {
          n_42 = t;
          if(((m_42 != NULL) && (m_42 != n_42)))
            _fail(n_42);
          else
            m_42 = n_42;
        }
        {
          t = not_null(j_42);
          {
            ATerm q_42 = NULL;
            t = e_78(t);
            {
              o_42 = t;
              {
                ATerm r_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(o_42)), not_null(m_42));
                {
                  r_42 = t;
                  if(((q_42 != NULL) && (q_42 != r_42)))
                    _fail(r_42);
                  else
                    q_42 = r_42;
                }
                t = not_null(q_42);
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
  ATerm b_2 (ATerm t)
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          ATerm k_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(p_17);
            }
          else
            {
              t = k_17;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, b_2, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm j_83 (ATerm, ATerm (ATerm)), ATerm k_83 (ATerm), ATerm l_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_83 (ATerm, ATerm (ATerm)))
{
  ATerm x_42 = NULL;
  x_42 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_42), (ATerm) ATempty);
    {
      ATerm a_43 (ATerm t)
      {
        ATerm c_2 (ATerm t)
        {
          ATerm q_17 = t;
          int r_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, j_83);
              LocalPopChoice(r_17);
            }
          else
            {
              t = q_17;
              {
                t = RnBinding_2(t, k_83, m_83);
                t = DistBinding_2(t, a_43, l_83);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, c_2);
        return(t);
      }
      t = a_43(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm b_43 (ATerm t, ATerm c_43 (ATerm))
  {
    t = Scope_2(t, c_43, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, b_43);
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
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  e_43 :
  if(match_cons(g_43, sym_Var_1))
    {
      h_43 = ATgetArgument(g_43, 0);
      f_43 :
      if(match_cons(h_43, sym_ListVar_1))
        {
          i_43 = ATgetArgument(h_43, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_43));
        }
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
  ATerm g_44 = NULL,h_44 = NULL;
  g_44 = t;
  f_44 :
  if(match_cons(g_44, sym_Build_1))
    {
      h_44 = ATgetArgument(g_44, 0);
      {
        ATerm l_44 = NULL,m_44 = NULL;
        ATerm y_44 = NULL;
        t = not_null(h_44);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL;
            n_44 = t;
            n_43 :
            if(match_cons(n_44, sym_Op_2))
              {
                o_44 = ATgetArgument(n_44, 0);
                p_44 = ATgetArgument(n_44, 1);
                o_43 :
                if(match_string(o_44, "Cons"))
                  {
                    p_43 :
                    if(((ATgetType(p_44) == AT_LIST) && ((ATermList) p_44 != ATempty)))
                      {
                        q_44 = ATgetFirst((ATermList) p_44);
                        t_44 = (ATerm) ATgetNext((ATermList) p_44);
                        q_43 :
                        if(match_cons(q_44, sym_Var_1))
                          {
                            r_44 = ATgetArgument(q_44, 0);
                            r_43 :
                            if(match_cons(r_44, sym_ListVar_1))
                              {
                                s_44 = ATgetArgument(r_44, 0);
                                s_43 :
                                if(((ATgetType(t_44) == AT_LIST) && ((ATermList) t_44 != ATempty)))
                                  {
                                    u_44 = ATgetFirst((ATermList) t_44);
                                    x_44 = (ATerm) ATgetNext((ATermList) t_44);
                                    a_44 :
                                    if(match_cons(u_44, sym_Op_2))
                                      {
                                        v_44 = ATgetArgument(u_44, 0);
                                        w_44 = ATgetArgument(u_44, 1);
                                        b_44 :
                                        if(match_string(v_44, "Nil"))
                                          {
                                            c_44 :
                                            if(((ATermList) w_44 == ATempty))
                                              {
                                                d_44 :
                                                if(((ATermList) x_44 == ATempty))
                                                  {
                                                    {
                                                      if(((l_44 != NULL) && (l_44 != s_44)))
                                                        _fail(s_44);
                                                      else
                                                        l_44 = s_44;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_44));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
            y_44 = t;
            if(((m_44 != NULL) && (m_44 != y_44)))
              _fail(y_44);
            else
              m_44 = y_44;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(m_44));
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
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Match_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      {
        ATerm i_46 = NULL,j_46 = NULL;
        ATerm v_46 = NULL;
        t = not_null(g_46);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
            k_46 = t;
            g_45 :
            if(match_cons(k_46, sym_Op_2))
              {
                l_46 = ATgetArgument(k_46, 0);
                m_46 = ATgetArgument(k_46, 1);
                h_45 :
                if(match_string(l_46, "Cons"))
                  {
                    o_45 :
                    if(((ATgetType(m_46) == AT_LIST) && ((ATermList) m_46 != ATempty)))
                      {
                        n_46 = ATgetFirst((ATermList) m_46);
                        q_46 = (ATerm) ATgetNext((ATermList) m_46);
                        p_45 :
                        if(match_cons(n_46, sym_Var_1))
                          {
                            o_46 = ATgetArgument(n_46, 0);
                            w_45 :
                            if(match_cons(o_46, sym_ListVar_1))
                              {
                                p_46 = ATgetArgument(o_46, 0);
                                x_45 :
                                if(((ATgetType(q_46) == AT_LIST) && ((ATermList) q_46 != ATempty)))
                                  {
                                    r_46 = ATgetFirst((ATermList) q_46);
                                    u_46 = (ATerm) ATgetNext((ATermList) q_46);
                                    y_45 :
                                    if(match_cons(r_46, sym_Op_2))
                                      {
                                        s_46 = ATgetArgument(r_46, 0);
                                        t_46 = ATgetArgument(r_46, 1);
                                        z_45 :
                                        if(match_string(s_46, "Nil"))
                                          {
                                            a_46 :
                                            if(((ATermList) t_46 == ATempty))
                                              {
                                                b_46 :
                                                if(((ATermList) u_46 == ATempty))
                                                  {
                                                    {
                                                      if(((i_46 != NULL) && (i_46 != p_46)))
                                                        _fail(p_46);
                                                      else
                                                        i_46 = p_46;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_46));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
            v_46 = t;
            if(((j_46 != NULL) && (j_46 != v_46)))
              _fail(v_46);
            else
              j_46 = v_46;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(j_46));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  c_47 :
  if(match_cons(d_47, sym_Wld_0))
    {
      ATerm f_47 = NULL,h_47 = NULL;
      ATerm v_17;
      v_17 = t;
      {
        ATerm g_47 = NULL;
        t = SSLgetAnnotations(not_null(d_47));
        {
          g_47 = t;
          if(((f_47 != NULL) && (f_47 != g_47)))
            _fail(g_47);
          else
            f_47 = g_47;
        }
      }
      t = v_17;
      {
        ATerm i_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_47));
        {
          i_47 = t;
          if(((h_47 != NULL) && (h_47 != i_47)))
            _fail(i_47);
          else
            h_47 = i_47;
        }
        t = not_null(h_47);
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
  ATerm x_17 = t;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, f_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_17;
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm f_75 (ATerm), ATerm g_75 (ATerm), ATerm h_75 (ATerm))
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym_Con_3))
    {
      u_47 = ATgetArgument(t_47, 0);
      v_47 = ATgetArgument(t_47, 1);
      w_47 = ATgetArgument(t_47, 2);
      {
        ATerm b_48 = NULL,d_48 = NULL;
        ATerm c_48 = NULL;
        t = SSLgetAnnotations(not_null(t_47));
        {
          c_48 = t;
          if(((b_48 != NULL) && (b_48 != c_48)))
            _fail(c_48);
          else
            b_48 = c_48;
        }
        {
          t = not_null(u_47);
          {
            ATerm h_48 = NULL;
            t = f_75(t);
            {
              d_48 = t;
              {
                t = not_null(v_47);
                {
                  ATerm j_48 = NULL;
                  t = g_75(t);
                  {
                    h_48 = t;
                    {
                      t = not_null(w_47);
                      {
                        ATerm q_48 = NULL;
                        t = h_75(t);
                        {
                          j_48 = t;
                          {
                            ATerm r_48 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(d_48), not_null(h_48), not_null(j_48)), not_null(b_48));
                            {
                              r_48 = t;
                              if(((q_48 != NULL) && (q_48 != r_48)))
                                _fail(r_48);
                              else
                                q_48 = r_48;
                            }
                            t = not_null(q_48);
                          }
                        }
                      }
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
  ATerm c_18 = t;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, g_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_18;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  s_49 = t;
  q_49 :
  if(match_cons(s_49, sym_SRule_1))
    {
      t_49 = ATgetArgument(s_49, 0);
      r_49 :
      if(match_cons(t_49, sym_StratRule_3))
        {
          w_49 = ATgetArgument(t_49, 0);
          x_49 = ATgetArgument(t_49, 1);
          y_49 = ATgetArgument(t_49, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_49)), (ATerm) ATmakeAppl(sym_Where_1, not_null(y_49))), not_null(w_49)));
        }
      else
        {
          if(match_cons(t_49, sym_Rule_3))
            {
              w_49 = ATgetArgument(t_49, 0);
              x_49 = ATgetArgument(t_49, 1);
              y_49 = ATgetArgument(t_49, 2);
              {
                t = not_null(w_49);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(x_49);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(x_49))), (ATerm) ATmakeAppl(sym_Where_1, not_null(y_49))), (ATerm) ATmakeAppl(sym_Match_1, not_null(w_49))));
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
ATerm oncetd_1 (ATerm t, ATerm z_105 (ATerm))
{
  ATerm h_50 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_105(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = _one(t, h_50);
      }
    return(t);
  }
  t = h_50(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL;
  b_51 = t;
  x_50 :
  if(match_cons(b_51, sym_SRule_1))
    {
      c_51 = ATgetArgument(b_51, 0);
      y_50 :
      if(match_cons(c_51, sym_Rule_3))
        {
          d_51 = ATgetArgument(c_51, 0);
          e_51 = ATgetArgument(c_51, 1);
          f_51 = ATgetArgument(c_51, 2);
          {
            ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
            ATerm r_51 = NULL;
            ATerm x_51 = NULL;
            t = new_0(t);
            {
              r_51 = t;
              {
                if(((o_51 != NULL) && (o_51 != r_51)))
                  _fail(r_51);
                else
                  o_51 = r_51;
                {
                  t = not_null(d_51);
                  {
                    ATerm f_52 = NULL;
                    ATerm h_2 (ATerm t)
                    {
                      ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
                      s_51 = t;
                      l_50 :
                      if(match_cons(s_51, sym_Con_3))
                        {
                          t_51 = ATgetArgument(s_51, 0);
                          v_51 = ATgetArgument(s_51, 1);
                          w_51 = ATgetArgument(s_51, 2);
                          m_50 :
                          if(match_cons(t_51, sym_Var_1))
                            {
                              u_51 = ATgetArgument(t_51, 0);
                              {
                                if(((n_51 != NULL) && (n_51 != u_51)))
                                  _fail(u_51);
                                else
                                  n_51 = u_51;
                                {
                                  if(((l_51 != NULL) && (l_51 != v_51)))
                                    _fail(v_51);
                                  else
                                    l_51 = v_51;
                                  {
                                    if(((j_51 != NULL) && (j_51 != w_51)))
                                      _fail(w_51);
                                    else
                                      j_51 = w_51;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_51));
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
                    t = oncetd_1(t, h_2);
                    {
                      x_51 = t;
                      {
                        if(((p_51 != NULL) && (p_51 != x_51)))
                          _fail(x_51);
                        else
                          p_51 = x_51;
                        {
                          t = not_null(e_51);
                          {
                            ATerm i_2 (ATerm t)
                            {
                              ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
                              y_51 = t;
                              r_50 :
                              if(match_cons(y_51, sym_Con_3))
                                {
                                  z_51 = ATgetArgument(y_51, 0);
                                  b_52 = ATgetArgument(y_51, 1);
                                  c_52 = ATgetArgument(y_51, 2);
                                  s_50 :
                                  if(match_cons(z_51, sym_Var_1))
                                    {
                                      a_52 = ATgetArgument(z_51, 0);
                                      t_50 :
                                      if(match_cons(c_52, sym_Call_2))
                                        {
                                          d_52 = ATgetArgument(c_52, 0);
                                          e_52 = ATgetArgument(c_52, 1);
                                          v_50 :
                                          if(((ATermList) e_52 == ATempty))
                                            {
                                              {
                                                if(((n_51 != NULL) && (n_51 != a_52)))
                                                  _fail(a_52);
                                                else
                                                  n_51 = a_52;
                                                {
                                                  if(((m_51 != NULL) && (m_51 != b_52)))
                                                    _fail(b_52);
                                                  else
                                                    m_51 = b_52;
                                                  {
                                                    if(((k_51 != NULL) && (k_51 != d_52)))
                                                      _fail(d_52);
                                                    else
                                                      k_51 = d_52;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_51));
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
                            t = oncetd_1(t, i_2);
                            {
                              f_52 = t;
                              if(((q_51 != NULL) && (q_51 != f_52)))
                                _fail(f_52);
                              else
                                q_51 = f_52;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_51)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_51), not_null(q_51), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_51), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(k_51), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_51), not_null(m_51), term_f_15)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(n_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(o_51)))))));
          }
        }
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
  ATerm j_2 (ATerm t)
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm j_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(o_18);
            }
          else
            {
              t = j_18;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, j_2);
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym_Scope_2))
    {
      w_52 = ATgetArgument(v_52, 0);
      x_52 = ATgetArgument(v_52, 1);
      {
        ATerm a_53 = NULL;
        ATerm e_53 = NULL;
        t = not_null(w_52);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              ATerm b_53 = NULL,c_53 = NULL;
              b_53 = t;
              s_52 :
              if(match_cons(b_53, sym_ListVar_1))
                {
                  c_53 = ATgetArgument(b_53, 0);
                  t = not_null(c_53);
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = try_1(t, l_2);
            return(t);
          }
          t = map_1(t, k_2);
          {
            e_53 = t;
            if(((a_53 != NULL) && (a_53 != e_53)))
              _fail(e_53);
            else
              a_53 = e_53;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_53), not_null(x_52));
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
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm p_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ListVarScope_0(t);
          LocalPopChoice(q_18);
        }
      else
        {
          t = p_18;
          t = desugarRule_0(t);
        }
      return(t);
    }
    t = try_1(t, n_2);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm u_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                LocalPopChoice(a_19);
              }
            else
              {
                t = z_18;
                {
                  ATerm b_19 = t;
                  int c_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      LocalPopChoice(c_19);
                    }
                  else
                    {
                      t = b_19;
                      t = ListBuild_0(t);
                    }
                }
              }
            LocalPopChoice(w_18);
          }
        else
          {
            t = u_18;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_1(t, o_2);
    }
    return(t);
  }
  t = topdown_1(t, m_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  l_53 = t;
  k_53 :
  if(match_cons(l_53, sym_SDef_3))
    {
      m_53 = ATgetArgument(l_53, 0);
      n_53 = ATgetArgument(l_53, 1);
      o_53 = ATgetArgument(l_53, 2);
      {
        ATerm s_53 = NULL;
        ATerm t_53 = NULL;
        t = not_null(o_53);
        {
          t = tvars_0(t);
          {
            t_53 = t;
            if(((s_53 != NULL) && (s_53 != t_53)))
              _fail(t_53);
            else
              s_53 = t_53;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_53), not_null(n_53), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_53), not_null(o_53)));
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
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_RDef_3))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      c_54 = ATgetArgument(z_53, 2);
      {
        ATerm g_54 = NULL;
        ATerm h_54 = NULL;
        t = not_null(c_54);
        {
          t = tvars_0(t);
          {
            h_54 = t;
            if(((g_54 != NULL) && (g_54 != h_54)))
              _fail(h_54);
            else
              g_54 = h_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_54), not_null(b_54), (ATerm) ATmakeAppl(sym_Scope_2, not_null(g_54), (ATerm) ATmakeAppl(sym_SRule_1, not_null(c_54))));
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
  ATerm l_54 = NULL;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_54)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
  y_54 = t;
  v_54 :
  if(match_cons(y_54, sym_OpDecl_2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      w_54 :
      if(match_cons(a_55, sym_FunType_2))
        {
          b_55 = ATgetArgument(a_55, 0);
          x_54 = ATgetArgument(a_55, 1);
          {
            ATerm f_55 = NULL,g_55 = NULL,o_55 = NULL;
            ATerm d_19;
            d_19 = t;
            {
              ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
              t = not_null(b_55);
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm h_55 = NULL,j_55 = NULL;
                  t = new_0(t);
                  {
                    ATerm e_19;
                    e_19 = t;
                    {
                      ATerm i_55 = NULL;
                      i_55 = t;
                      if(((h_55 != NULL) && (h_55 != i_55)))
                        _fail(i_55);
                      else
                        h_55 = i_55;
                    }
                    t = e_19;
                    {
                      ATerm k_55 = NULL;
                      k_55 = t;
                      if(((j_55 != NULL) && (j_55 != k_55)))
                        _fail(k_55);
                      else
                        j_55 = k_55;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_55), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_19), term_h_19)), not_null(j_55));
                    }
                  }
                  return(t);
                }
                t = map_1(t, p_2);
                {
                  t = unzip_0(t);
                  {
                    l_55 = t;
                    t_54 :
                    if(match_cons(l_55, sym__2))
                      {
                        m_55 = ATgetArgument(l_55, 0);
                        n_55 = ATgetArgument(l_55, 1);
                        {
                          if(((f_55 != NULL) && (f_55 != m_55)))
                            _fail(m_55);
                          else
                            f_55 = m_55;
                          if(((g_55 != NULL) && (g_55 != n_55)))
                            _fail(n_55);
                          else
                            g_55 = n_55;
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
            t = d_19;
            {
              ATerm p_55 = NULL;
              t = not_null(g_55);
              {
                t = map_1(t, MkCall_0);
                {
                  p_55 = t;
                  if(((o_55 != NULL) && (o_55 != p_55)))
                    _fail(p_55);
                  else
                    o_55 = p_55;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_54), not_null(f_55), (ATerm) ATmakeAppl(sym_Cong_2, not_null(z_54), not_null(o_55)));
            }
          }
        }
      else
        {
          if(match_cons(a_55, sym_ConstType_1))
            {
              b_55 = ATgetArgument(a_55, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_54), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(z_54), (ATerm) ATempty));
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
  ATerm b_56 = NULL,c_56 = NULL;
  b_56 = t;
  a_56 :
  if(match_cons(b_56, sym_Constructors_1))
    {
      c_56 = ATgetArgument(b_56, 0);
      {
        t = not_null(c_56);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(b_56, sym_Sorts_1))
        {
          c_56 = ATgetArgument(b_56, 0);
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
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL;
  t_56 = t;
  n_56 :
  if(match_cons(t_56, sym_Specification_1))
    {
      u_56 = ATgetArgument(t_56, 0);
      o_56 :
      if(((ATgetType(u_56) == AT_LIST) && ((ATermList) u_56 != ATempty)))
        {
          v_56 = ATgetFirst((ATermList) u_56);
          x_56 = (ATerm) ATgetNext((ATermList) u_56);
          p_56 :
          if(match_cons(v_56, sym_Signature_1))
            {
              w_56 = ATgetArgument(v_56, 0);
              q_56 :
              if(((ATgetType(x_56) == AT_LIST) && ((ATermList) x_56 != ATempty)))
                {
                  y_56 = ATgetFirst((ATermList) x_56);
                  a_57 = (ATerm) ATgetNext((ATermList) x_56);
                  r_56 :
                  if(match_cons(y_56, sym_Strategies_1))
                    {
                      z_56 = ATgetArgument(y_56, 0);
                      s_56 :
                      if(((ATermList) a_57 == ATempty))
                        {
                          {
                            ATerm d_57 = NULL;
                            ATerm e_57 = NULL,g_57 = NULL,i_57 = NULL;
                            ATerm i_19;
                            i_19 = t;
                            {
                              ATerm f_57 = NULL;
                              t = not_null(w_56);
                              {
                                t = congdefs_0(t);
                                {
                                  f_57 = t;
                                  if(((e_57 != NULL) && (e_57 != f_57)))
                                    _fail(f_57);
                                  else
                                    e_57 = f_57;
                                }
                              }
                            }
                            t = i_19;
                            {
                              ATerm h_57 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(z_56)), (ATerm) ATmakeAppl(sym_RDef_3, term_n_19, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_p_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_19), term_h_19))), (ATerm) ATmakeAppl(sym_VarDec_2, term_o_19, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_19), term_h_19))), (ATerm) ATmakeAppl(sym_Rule_3, term_a_20, term_f_20, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_g_21), term_m_20)))));
                              {
                                ATerm q_2 (ATerm t)
                                {
                                  ATerm h_21 = t;
                                  int i_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(i_21);
                                    }
                                  else
                                    {
                                      t = h_21;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, q_2);
                                {
                                  h_57 = t;
                                  if(((g_57 != NULL) && (g_57 != h_57)))
                                    _fail(h_57);
                                  else
                                    g_57 = h_57;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_57), not_null(g_57));
                                {
                                  t = conc_0(t);
                                  {
                                    i_57 = t;
                                    if(((d_57 != NULL) && (d_57 != i_57)))
                                      _fail(i_57);
                                    else
                                      d_57 = i_57;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(d_57))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(w_56))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm b_58 = NULL;
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
  t = term_j_21;
  {
    ATerm r_2 (ATerm t)
    {
      t = term_k_21;
      return(t);
    }
    t = rewrite_1(t, r_2);
    {
      c_58 = t;
      s_57 :
      if(match_cons(c_58, sym_Defined_2))
        {
          d_58 = ATgetArgument(c_58, 0);
          e_58 = ATgetArgument(c_58, 1);
          a_58 :
          if(match_string(d_58, "e_0"))
            {
              if(((b_58 != NULL) && (b_58 != e_58)))
                _fail(e_58);
              else
                b_58 = e_58;
            }
          else
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
  t = not_null(b_58);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  t = SSL_int_to_string(not_null(h_58));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm u_58 = NULL,g_59 = NULL,h_59 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_Op_2))
    {
      g_59 = ATgetArgument(u_58, 0);
      h_59 = ATgetArgument(u_58, 1);
      {
        ATerm k_59 = NULL,l_59 = NULL;
        ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
        t = term_j_21;
        {
          ATerm s_2 (ATerm t)
          {
            t = term_l_21;
            return(t);
          }
          t = rewrite_1(t, s_2);
          {
            m_59 = t;
            r_58 :
            if(match_cons(m_59, sym_Defined_3))
              {
                n_59 = ATgetArgument(m_59, 0);
                o_59 = ATgetArgument(m_59, 1);
                p_59 = ATgetArgument(m_59, 2);
                s_58 :
                if(match_string(n_59, "f_0"))
                  {
                    ATerm q_59 = NULL;
                    if(((l_59 != NULL) && (l_59 != o_59)))
                      _fail(o_59);
                    else
                      l_59 = o_59;
                    {
                      if(((k_59 != NULL) && (k_59 != p_59)))
                        _fail(p_59);
                      else
                        k_59 = p_59;
                      {
                        ATerm r_59 = NULL;
                        t = not_null(h_59);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              r_59 = t;
                              if(((q_59 != NULL) && (q_59 != r_59)))
                                _fail(r_59);
                              else
                                q_59 = r_59;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_21), not_null(q_59)), term_y_21), not_null(g_59)), term_v_21), term_s_21), not_null(l_59)), term_o_21), not_null(k_59)), term_n_21));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_59), not_null(h_59));
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
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  x_59 = t;
  w_59 :
  if(match_cons(x_59, sym__2))
    {
      y_59 = ATgetArgument(x_59, 0);
      z_59 = ATgetArgument(x_59, 1);
      {
        ATerm a_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(y_59), not_null(z_59));
            LocalPopChoice(h_22);
          }
        else
          {
            t = a_22;
            t = SSL_subtr(not_null(y_59), not_null(z_59));
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
  ATerm t_2 (ATerm t)
  {
    ATerm p_60 = NULL,q_60 = NULL,r_60 = NULL;
    p_60 = t;
    e_60 :
    if(match_cons(p_60, sym__2))
      {
        q_60 = ATgetArgument(p_60, 0);
        r_60 = ATgetArgument(p_60, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(q_60), not_null(r_60), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
    c_61 = t;
    g_60 :
    if(match_cons(c_61, sym__3))
      {
        d_61 = ATgetArgument(c_61, 0);
        e_61 = ATgetArgument(c_61, 1);
        f_61 = ATgetArgument(c_61, 2);
        h_60 :
        if(match_int(d_61, 0))
          {
            t = not_null(f_61);
          }
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
  ATerm v_2 (ATerm t)
  {
    ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
    i_61 = t;
    o_60 :
    if(match_cons(i_61, sym__3))
      {
        j_61 = ATgetArgument(i_61, 0);
        k_61 = ATgetArgument(i_61, 1);
        l_61 = ATgetArgument(i_61, 2);
        {
          ATerm p_61 = NULL;
          ATerm i_22;
          i_22 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_61), term_r_22);
            t = geq_0(t);
          }
          t = i_22;
          {
            ATerm q_61 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_61), term_r_22);
            {
              t = subt_0(t);
              {
                q_61 = t;
                if(((p_61 != NULL) && (p_61 != q_61)))
                  _fail(q_61);
                else
                  p_61 = q_61;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_61), not_null(k_61), (ATerm) ATinsert(CheckATermList(not_null(l_61)), not_null(k_61)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
  e_62 = t;
  c_62 :
  if(match_cons(e_62, sym_Op_2))
    {
      f_62 = ATgetArgument(e_62, 0);
      g_62 = ATgetArgument(e_62, 1);
      d_62 :
      if(match_string(f_62, ""))
        {
          ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL;
          ATerm s_22;
          s_22 = t;
          {
            ATerm m_62 = NULL;
            t = not_null(g_62);
            {
              ATerm n_62 = NULL;
              t = length_0(t);
              {
                m_62 = t;
                {
                  if(((j_62 != NULL) && (j_62 != m_62)))
                    _fail(m_62);
                  else
                    j_62 = m_62;
                  {
                    ATerm o_62 = NULL,q_62 = NULL;
                    t = term_c_13;
                    {
                      n_62 = t;
                      {
                        if(((i_62 != NULL) && (i_62 != n_62)))
                          _fail(n_62);
                        else
                          i_62 = n_62;
                        {
                          ATerm t_22;
                          t_22 = t;
                          {
                            ATerm p_62 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_62), term_v_22);
                            {
                              t = copy_0(t);
                              {
                                p_62 = t;
                                if(((o_62 != NULL) && (o_62 != p_62)))
                                  _fail(p_62);
                                else
                                  o_62 = p_62;
                              }
                            }
                          }
                          t = t_22;
                          {
                            ATerm r_62 = NULL,t_62 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, not_null(o_62), term_v_22));
                            {
                              q_62 = t;
                              {
                                if(((k_62 != NULL) && (k_62 != q_62)))
                                  _fail(q_62);
                                else
                                  k_62 = q_62;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm s_62 = NULL;
                                    ATerm w_22 = t;
                                    int a_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(a_23);
                                      }
                                    else
                                      {
                                        t = w_22;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      s_62 = t;
                                      if(((r_62 != NULL) && (r_62 != s_62)))
                                        _fail(s_62);
                                      else
                                        r_62 = s_62;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(r_62)), not_null(k_62));
                                      {
                                        t_62 = t;
                                        {
                                          if(((l_62 != NULL) && (l_62 != t_62)))
                                            _fail(t_62);
                                          else
                                            l_62 = t_62;
                                          {
                                            ATerm b_23;
                                            b_23 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Defined_2, term_f_23, not_null(l_62)));
                                              {
                                                ATerm w_2 (ATerm t)
                                                {
                                                  t = term_k_21;
                                                  return(t);
                                                }
                                                t = assert_1(t, w_2);
                                              }
                                            }
                                            t = b_23;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = s_22;
        }
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
ATerm CheckCons_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  r_63 :
  if(match_cons(s_63, sym_Op_2))
    {
      t_63 = ATgetArgument(s_63, 0);
      u_63 = ATgetArgument(s_63, 1);
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_63 = NULL;
            ATerm z_63 = NULL;
            t = not_null(u_63);
            {
              x_63 = t;
              {
                t = length_0(t);
                {
                  z_63 = t;
                  {
                    ATerm b_64 = NULL,f_64 = NULL,g_64 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(t_63), not_null(z_63));
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = term_k_23;
                        return(t);
                      }
                      t = rewrite_1(t, x_2);
                      {
                        b_64 = t;
                        g_63 :
                        if(match_cons(b_64, sym_Defined_2))
                          {
                            f_64 = ATgetArgument(b_64, 0);
                            g_64 = ATgetArgument(b_64, 1);
                            h_63 :
                            if(match_string(f_64, "d_0"))
                              {
                                if(((t_63 != NULL) && (t_63 != g_64)))
                                  _fail(g_64);
                                else
                                  t_63 = g_64;
                              }
                            else
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_63), not_null(x_63));
                  }
                }
              }
            }
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            {
              ATerm j_64 = NULL;
              ATerm q_64 = NULL;
              t = not_null(u_63);
              {
                j_64 = t;
                {
                  t = length_0(t);
                  {
                    q_64 = t;
                    {
                      ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(t_63), not_null(q_64));
                      {
                        ATerm y_2 (ATerm t)
                        {
                          t = term_k_23;
                          return(t);
                        }
                        t = rewrite_1(t, y_2);
                        {
                          y_64 = t;
                          l_63 :
                          if(match_cons(y_64, sym_Defined_2))
                            {
                              z_64 = ATgetArgument(y_64, 0);
                              a_65 = ATgetArgument(y_64, 1);
                              q_63 :
                              if(match_string(z_64, "c_0"))
                                {
                                  if(((t_63 != NULL) && (t_63 != a_65)))
                                    _fail(a_65);
                                  else
                                    t_63 = a_65;
                                }
                              else
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
                      t = (ATerm) ATmakeAppl(sym_Op_2, not_null(t_63), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm h_107 (ATerm))
{
  ATerm j_65 (ATerm t)
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107(t);
        {
          ATerm z_2 (ATerm t)
          {
            t = try_1(t, j_65);
            return(t);
          }
          t = _all(t, z_2);
        }
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = _some(t, j_65);
      }
    return(t);
  }
  t = j_65(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm m_65 = NULL,n_65 = NULL;
  ATerm a_3 (ATerm t)
  {
    t = term_l_21;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm n_23;
    n_23 = t;
    {
      ATerm o_65 = NULL;
      ATerm p_65 = NULL;
      t = c_80(t);
      {
        o_65 = t;
        {
          if(((m_65 != NULL) && (m_65 != o_65)))
            _fail(o_65);
          else
            m_65 = o_65;
          {
            t = d_80(t);
            {
              p_65 = t;
              if(((n_65 != NULL) && (n_65 != p_65)))
                _fail(p_65);
              else
                n_65 = p_65;
            }
          }
        }
      }
    }
    t = n_23;
    {
      ATerm o_23;
      o_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Defined_3, term_p_23, not_null(m_65), not_null(n_65)));
        {
          ATerm c_3 (ATerm t)
          {
            t = term_l_21;
            return(t);
          }
          t = assert_1(t, c_3);
        }
      }
      t = o_23;
      {
        ATerm d_3 (ATerm t)
        {
          ATerm t_23 = t;
          if((PushChoice() == 0))
            {
              ATerm u_23 = t;
              int y_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(y_23);
                }
              else
                {
                  t = u_23;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_23;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, d_3);
      }
    }
    return(t);
  }
  t = scope_2(t, a_3, b_3);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm t_66 = NULL,f_68 = NULL,i_68 = NULL,j_68 = NULL;
  t_66 = t;
  s_66 :
  if(match_cons(t_66, sym_SDef_3))
    {
      f_68 = ATgetArgument(t_66, 0);
      i_68 = ATgetArgument(t_66, 1);
      j_68 = ATgetArgument(t_66, 2);
      {
        t = not_null(j_68);
        {
          ATerm e_3 (ATerm t)
          {
            t = not_null(f_68);
            return(t);
          }
          ATerm f_3 (ATerm t)
          {
            t = term_b_24;
            return(t);
          }
          t = check_constructors_p__2(t, e_3, f_3);
        }
      }
    }
  else
    {
      if(match_cons(t_66, sym_RDef_3))
        {
          f_68 = ATgetArgument(t_66, 0);
          i_68 = ATgetArgument(t_66, 1);
          j_68 = ATgetArgument(t_66, 2);
          {
            t = not_null(j_68);
            {
              ATerm g_3 (ATerm t)
              {
                t = not_null(f_68);
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                t = term_c_24;
                return(t);
              }
              t = check_constructors_p__2(t, g_3, h_3);
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
ATerm length_0 (ATerm t)
{
  ATerm i_3 (ATerm t)
  {
    t = term_d_24;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_r_22;
    return(t);
  }
  t = foldr_3(t, i_3, add_0, j_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  z_68 = t;
  w_68 :
  if(match_cons(z_68, sym_OpDecl_2))
    {
      a_69 = ATgetArgument(z_68, 0);
      b_69 = ATgetArgument(z_68, 1);
      x_68 :
      if(match_cons(b_69, sym_FunType_2))
        {
          c_69 = ATgetArgument(b_69, 0);
          y_68 = ATgetArgument(b_69, 1);
          {
            ATerm g_69 = NULL;
            ATerm e_24;
            e_24 = t;
            {
              ATerm h_69 = NULL;
              t = not_null(c_69);
              {
                t = length_0(t);
                {
                  h_69 = t;
                  if(((g_69 != NULL) && (g_69 != h_69)))
                    _fail(h_69);
                  else
                    g_69 = h_69;
                }
              }
            }
            t = e_24;
            {
              ATerm f_24;
              f_24 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(a_69), not_null(g_69)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_24, not_null(a_69)));
                {
                  ATerm k_3 (ATerm t)
                  {
                    t = term_k_23;
                    return(t);
                  }
                  t = assert_1(t, k_3);
                }
              }
              t = f_24;
            }
          }
        }
      else
        {
          if(match_cons(b_69, sym_ConstType_1))
            {
              c_69 = ATgetArgument(b_69, 0);
              {
                ATerm k_69 = NULL;
                ATerm j_24;
                j_24 = t;
                {
                  ATerm l_69 = NULL;
                  t = term_d_24;
                  {
                    l_69 = t;
                    if(((k_69 != NULL) && (k_69 != l_69)))
                      _fail(l_69);
                    else
                      k_69 = l_69;
                  }
                }
                t = j_24;
                {
                  ATerm m_24;
                  m_24 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(a_69), not_null(k_69)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_24, not_null(a_69)));
                    {
                      ATerm l_3 (ATerm t)
                      {
                        t = term_k_23;
                        return(t);
                      }
                      t = assert_1(t, l_3);
                    }
                  }
                  t = m_24;
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
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  h_70 = t;
  y_69 :
  if(match_cons(h_70, sym_Specification_1))
    {
      i_70 = ATgetArgument(h_70, 0);
      z_69 :
      if(((ATgetType(i_70) == AT_LIST) && ((ATermList) i_70 != ATempty)))
        {
          j_70 = ATgetFirst((ATermList) i_70);
          o_70 = (ATerm) ATgetNext((ATermList) i_70);
          a_70 :
          if(match_cons(j_70, sym_Signature_1))
            {
              k_70 = ATgetArgument(j_70, 0);
              b_70 :
              if(((ATgetType(k_70) == AT_LIST) && ((ATermList) k_70 != ATempty)))
                {
                  l_70 = ATgetFirst((ATermList) k_70);
                  n_70 = (ATerm) ATgetNext((ATermList) k_70);
                  c_70 :
                  if(match_cons(l_70, sym_Constructors_1))
                    {
                      m_70 = ATgetArgument(l_70, 0);
                      d_70 :
                      if(((ATermList) n_70 == ATempty))
                        {
                          e_70 :
                          if(((ATgetType(o_70) == AT_LIST) && ((ATermList) o_70 != ATempty)))
                            {
                              p_70 = ATgetFirst((ATermList) o_70);
                              r_70 = (ATerm) ATgetNext((ATermList) o_70);
                              f_70 :
                              if(match_cons(p_70, sym_Strategies_1))
                                {
                                  q_70 = ATgetArgument(p_70, 0);
                                  g_70 :
                                  if(((ATermList) r_70 == ATempty))
                                    {
                                      {
                                        ATerm u_70 = NULL,v_70 = NULL,z_70 = NULL;
                                        ATerm w_24;
                                        w_24 = t;
                                        {
                                          ATerm w_70 = NULL;
                                          ATerm x_70 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_70)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), term_v_22), term_v_22), term_v_22), term_v_22), term_v_22))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_22), term_v_22), term_v_22), term_v_22), term_v_22))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_v_22), term_v_22), term_v_22), term_v_22))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_v_22), term_v_22), term_v_22))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_c_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_22), term_v_22))), term_d_25);
                                          {
                                            w_70 = t;
                                            {
                                              if(((u_70 != NULL) && (u_70 != w_70)))
                                                _fail(w_70);
                                              else
                                                u_70 = w_70;
                                              {
                                                t = not_null(u_70);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(q_70);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        x_70 = t;
                                                        w_69 :
                                                        if(((ATermList) x_70 == ATempty))
                                                          {
                                                            {
                                                              ATerm y_70 = NULL;
                                                              ATerm e_25 = t;
                                                              int f_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(f_25);
                                                                }
                                                              else
                                                                {
                                                                  t = e_25;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                y_70 = t;
                                                                if(((v_70 != NULL) && (v_70 != y_70)))
                                                                  _fail(y_70);
                                                                else
                                                                  v_70 = y_70;
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
                                        t = w_24;
                                        {
                                          ATerm a_71 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_70), not_null(u_70));
                                          {
                                            t = conc_0(t);
                                            {
                                              a_71 = t;
                                              if(((z_70 != NULL) && (z_70 != a_71)))
                                                _fail(a_71);
                                              else
                                                z_70 = a_71;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(q_70))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(z_70))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm o_81 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm g_25;
    g_25 = t;
    {
      ATerm h_25 = t;
      if((PushChoice() == 0))
        {
          ATerm h_71 = NULL;
          t = o_81(t);
          {
            h_71 = t;
            g_71 :
            if(((ATermList) h_71 == ATempty))
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
          t = h_25;
        }
    }
    t = g_25;
    {
      ATerm n_3 (ATerm t)
      {
        ATerm o_3 (ATerm t)
        {
          t = ExpOverlay_1(t, o_81);
          return(t);
        }
        t = try_1(t, o_3);
        return(t);
      }
      t = topdown_1(t, n_3);
    }
    return(t);
  }
  t = try_1(t, m_3);
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL;
  r_71 = t;
  p_71 :
  if(match_cons(r_71, sym_BuildDefault_1))
    {
      s_71 = ATgetArgument(r_71, 0);
      t = term_f_15;
    }
  else
    {
      if(match_cons(r_71, sym_Real_1))
        {
          s_71 = ATgetArgument(r_71, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(s_71)));
        }
      else
        {
          if(match_cons(r_71, sym_Int_1))
            {
              s_71 = ATgetArgument(r_71, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(s_71)));
            }
          else
            {
              if(match_cons(r_71, sym_Str_1))
                {
                  s_71 = ATgetArgument(r_71, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(s_71)));
                }
              else
                {
                  if(match_cons(r_71, sym_Anno_2))
                    {
                      s_71 = ATgetArgument(r_71, 0);
                      q_71 = ATgetArgument(r_71, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_i_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_71)), not_null(s_71)));
                    }
                  else
                    {
                      if(match_cons(r_71, sym_Op_2))
                        {
                          s_71 = ATgetArgument(r_71, 0);
                          q_71 = ATgetArgument(r_71, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_71)), not_null(q_71));
                        }
                      else
                        {
                          if(match_cons(r_71, sym_Var_1))
                            {
                              s_71 = ATgetArgument(r_71, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(s_71)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm p_72 = NULL,q_72 = NULL,r_72 = NULL;
  p_72 = t;
  o_72 :
  if(match_cons(p_72, sym_Op_2))
    {
      q_72 = ATgetArgument(p_72, 0);
      r_72 = ATgetArgument(p_72, 1);
      {
        ATerm v_72 = NULL,x_72 = NULL;
        ATerm w_72 = NULL;
        t = SSLgetAnnotations(not_null(p_72));
        {
          w_72 = t;
          if(((v_72 != NULL) && (v_72 != w_72)))
            _fail(w_72);
          else
            v_72 = w_72;
        }
        {
          t = not_null(q_72);
          {
            ATerm z_72 = NULL;
            t = m_77(t);
            {
              x_72 = t;
              {
                t = not_null(r_72);
                {
                  ATerm b_73 = NULL;
                  t = n_77(t);
                  {
                    z_72 = t;
                    {
                      ATerm c_73 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(x_72), not_null(z_72)), not_null(v_72));
                      {
                        c_73 = t;
                        if(((b_73 != NULL) && (b_73 != c_73)))
                          _fail(c_73);
                        else
                          b_73 = c_73;
                      }
                      t = not_null(b_73);
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
  ATerm p_3 (ATerm t)
  {
    ATerm q_3 (ATerm t)
    {
      t = map_1(t, trm_to_cong_0);
      return(t);
    }
    t = Op_2(t, _id, q_3);
    return(t);
  }
  t = try_1(t, p_3);
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  o_73 = t;
  n_73 :
  if(match_cons(o_73, sym_Overlay_3))
    {
      p_73 = ATgetArgument(o_73, 0);
      q_73 = ATgetArgument(o_73, 1);
      r_73 = ATgetArgument(o_73, 2);
      {
        ATerm v_73 = NULL,z_73 = NULL;
        ATerm j_25;
        j_25 = t;
        {
          ATerm y_73 = NULL;
          t = not_null(q_73);
          {
            ATerm r_3 (ATerm t)
            {
              ATerm w_73 = NULL;
              ATerm x_73 = NULL;
              x_73 = t;
              if(((w_73 != NULL) && (w_73 != x_73)))
                _fail(x_73);
              else
                w_73 = x_73;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(w_73), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_19), term_h_19));
              return(t);
            }
            t = map_1(t, r_3);
            {
              y_73 = t;
              if(((v_73 != NULL) && (v_73 != y_73)))
                _fail(y_73);
              else
                v_73 = y_73;
            }
          }
        }
        t = j_25;
        {
          ATerm a_74 = NULL;
          t = not_null(r_73);
          {
            t = trm_to_cong_0(t);
            {
              a_74 = t;
              if(((z_73 != NULL) && (z_73 != a_74)))
                _fail(a_74);
              else
                z_73 = a_74;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_73), not_null(v_73), not_null(z_73));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm l_80 (ATerm))
{
  t = Scope_2(t, l_80, _id);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm b_83 (ATerm), ATerm c_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL;
  j_74 = t;
  i_74 :
  if(match_cons(j_74, sym__3))
    {
      k_74 = ATgetArgument(j_74, 0);
      l_74 = ATgetArgument(j_74, 1);
      m_74 = ATgetArgument(j_74, 2);
      {
        t = not_null(k_74);
        {
          ATerm s_3 (ATerm t)
          {
            ATerm q_74 = NULL;
            q_74 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_74), not_null(m_74));
              t = b_83(t);
            }
            return(t);
          }
          ATerm t_3 (ATerm t)
          {
            ATerm s_74 = NULL;
            s_74 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_74), not_null(l_74));
              t = b_83(t);
            }
            return(t);
          }
          t = c_83(t, s_3, t_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm, ATerm (ATerm)))
{
  ATerm e_75 = NULL,l_75 = NULL,m_75 = NULL;
  e_75 = t;
  d_75 :
  if(match_cons(e_75, sym__2))
    {
      l_75 = ATgetArgument(e_75, 0);
      m_75 = ATgetArgument(e_75, 1);
      {
        ATerm r_75 = NULL,u_75 = NULL,v_75 = NULL,e_76 = NULL;
        ATerm k_25;
        k_25 = t;
        {
          ATerm w_75 = NULL;
          t = not_null(l_75);
          {
            ATerm x_75 = NULL;
            t = h_83(t);
            {
              w_75 = t;
              {
                if(((r_75 != NULL) && (r_75 != w_75)))
                  _fail(w_75);
                else
                  r_75 = w_75;
                {
                  ATerm b_76 = NULL,d_76 = NULL;
                  t = map_1(t, new_0);
                  {
                    x_75 = t;
                    {
                      if(((u_75 != NULL) && (u_75 != x_75)))
                        _fail(x_75);
                      else
                        u_75 = x_75;
                      {
                        ATerm c_76 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_75), not_null(u_75));
                        {
                          t = zip_1(t, _id);
                          {
                            c_76 = t;
                            if(((b_76 != NULL) && (b_76 != c_76)))
                              _fail(c_76);
                            else
                              b_76 = c_76;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(b_76), not_null(m_75));
                          {
                            t = conc_0(t);
                            {
                              d_76 = t;
                              if(((v_75 != NULL) && (v_75 != d_76)))
                                _fail(d_76);
                              else
                                v_75 = d_76;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = k_25;
        {
          ATerm f_76 = NULL;
          t = not_null(l_75);
          {
            ATerm u_3 (ATerm t)
            {
              t = not_null(u_75);
              return(t);
            }
            t = i_83(t, u_3);
            {
              f_76 = t;
              if(((e_76 != NULL) && (e_76 != f_76)))
                _fail(f_76);
              else
                e_76 = f_76;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(e_76), not_null(m_75), not_null(v_75));
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
  ATerm v_76 = NULL;
  ATerm z_76 = NULL,a_77 = NULL;
  v_76 = t;
  {
    ATerm b_77 = NULL;
    ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
    t = not_null(v_76);
    {
      b_77 = t;
      {
        t = SSL_explode_term(not_null(b_77));
        {
          d_77 = t;
          q_76 :
          if(match_cons(d_77, sym__2))
            {
              e_77 = ATgetArgument(d_77, 0);
              f_77 = ATgetArgument(d_77, 1);
              r_76 :
              if(match_string(e_77, ""))
                {
                  s_76 :
                  if(((ATgetType(f_77) == AT_LIST) && ((ATermList) f_77 != ATempty)))
                    {
                      g_77 = ATgetFirst((ATermList) f_77);
                      h_77 = (ATerm) ATgetNext((ATermList) f_77);
                      {
                        if(((a_77 != NULL) && (a_77 != g_77)))
                          _fail(g_77);
                        else
                          a_77 = g_77;
                        if(((z_76 != NULL) && (z_76 != h_77)))
                          _fail(h_77);
                        else
                          z_76 = h_77;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(a_77);
  }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm v_82 (ATerm, ATerm (ATerm)))
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL;
  p_77 = t;
  o_77 :
  if(match_cons(p_77, sym__2))
    {
      q_77 = ATgetArgument(p_77, 0);
      r_77 = ATgetArgument(p_77, 1);
      {
        t = not_null(q_77);
        {
          ATerm v_3 (ATerm t)
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(r_77);
              return(t);
            }
            t = split_2(t, _id, w_3);
            t = lookup_0(t);
            return(t);
          }
          t = v_82(t, v_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm p_101 (ATerm))
{
  ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL;
  n_78 = t;
  m_78 :
  if(match_cons(n_78, sym__2))
    {
      o_78 = ATgetArgument(n_78, 0);
      p_78 = ATgetArgument(n_78, 1);
      {
        t = not_null(o_78);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm s_78 = NULL;
            s_78 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_78), not_null(p_78));
              t = p_101(t);
            }
            return(t);
          }
          t = _all(t, x_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm u_101 (ATerm))
{
  ATerm w_78 (ATerm t)
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_101(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = all_dist_1(t, w_78);
      }
    return(t);
  }
  t = w_78(t);
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm t_83 (ATerm), ATerm u_83 (ATerm, ATerm (ATerm)), ATerm v_83 (ATerm), ATerm w_83 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm x_83 (ATerm, ATerm (ATerm)), ATerm y_83 (ATerm))
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL;
  t = subs_args_0(t);
  {
    z_78 = t;
    y_78 :
    if(match_cons(z_78, sym__2))
      {
        a_79 = ATgetArgument(z_78, 0);
        b_79 = ATgetArgument(z_78, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_79), (ATerm) ATempty);
          {
            ATerm h_79 (ATerm t)
            {
              ATerm y_3 (ATerm t)
              {
                ATerm r_25 = t;
                int s_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, u_83);
                    LocalPopChoice(s_25);
                  }
                else
                  {
                    t = r_25;
                    {
                      ATerm t_25 = t;
                      int x_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm z_3 (ATerm t)
                            {
                              t = not_null(a_79);
                              return(t);
                            }
                            t = SubsVar_2(t, t_83, z_3);
                            t = y_83(t);
                          }
                          LocalPopChoice(x_25);
                        }
                      else
                        {
                          t = t_25;
                          {
                            t = RnBinding_2(t, v_83, x_83);
                            t = DistBinding_2(t, h_79, w_83);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, y_3);
              return(t);
            }
            t = h_79(t);
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
ATerm substitute_5 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm, ATerm (ATerm)), ATerm c_84 (ATerm), ATerm d_84 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_84 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, a_84, b_84, c_84, d_84, e_84, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm i_79 (ATerm t, ATerm l_79 (ATerm))
  {
    t = Scope_2(t, l_79, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, i_79);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm m_81 (ATerm))
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  w_79 :
  if(match_cons(x_79, sym_Op_2))
    {
      y_79 = ATgetArgument(x_79, 0);
      z_79 = ATgetArgument(x_79, 1);
      {
        ATerm u_80 = NULL,v_80 = NULL;
        t = m_81(t);
        {
          ATerm a_4 (ATerm t)
          {
            ATerm z_25;
            z_25 = t;
            {
              ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
              w_80 = t;
              v_79 :
              if(match_cons(w_80, sym_Overlay_3))
                {
                  x_80 = ATgetArgument(w_80, 0);
                  y_80 = ATgetArgument(w_80, 1);
                  z_80 = ATgetArgument(w_80, 2);
                  {
                    ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,e_81 = NULL;
                    if(((y_79 != NULL) && (y_79 != x_80)))
                      _fail(x_80);
                    else
                      y_79 = x_80;
                    {
                      if(((a_81 != NULL) && (a_81 != y_80)))
                        _fail(y_80);
                      else
                        a_81 = y_80;
                      {
                        if(((b_81 != NULL) && (b_81 != z_80)))
                          _fail(z_80);
                        else
                          b_81 = z_80;
                        {
                          ATerm c_26;
                          c_26 = t;
                          {
                            ATerm d_81 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_81), not_null(z_79));
                            {
                              t = zip_1(t, _id);
                              {
                                d_81 = t;
                                if(((c_81 != NULL) && (c_81 != d_81)))
                                  _fail(d_81);
                                else
                                  c_81 = d_81;
                              }
                            }
                          }
                          t = c_26;
                          {
                            ATerm f_81 = NULL;
                            t = not_null(c_81);
                            {
                              e_81 = t;
                              {
                                if(((u_80 != NULL) && (u_80 != e_81)))
                                  _fail(e_81);
                                else
                                  u_80 = e_81;
                                {
                                  t = not_null(b_81);
                                  {
                                    f_81 = t;
                                    {
                                      if(((v_80 != NULL) && (v_80 != f_81)))
                                        _fail(f_81);
                                      else
                                        v_80 = f_81;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_81), not_null(b_81));
                                    }
                                  }
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
            t = z_25;
            return(t);
          }
          t = fetch_1(t, a_4);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_80), not_null(v_80));
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
ATerm exp_overlays1_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    ATerm d_26;
    d_26 = t;
    {
      ATerm e_26 = t;
      if((PushChoice() == 0))
        {
          ATerm q_81 = NULL;
          t = n_81(t);
          {
            q_81 = t;
            p_81 :
            if(((ATermList) q_81 == ATempty))
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
          t = e_26;
        }
    }
    t = d_26;
    {
      ATerm c_4 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          t = ExpOverlay_1(t, n_81);
          return(t);
        }
        t = repeat_1(t, d_4);
        return(t);
      }
      t = topdown_1(t, c_4);
    }
    return(t);
  }
  t = try_1(t, b_4);
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  i_82 = t;
  a_82 :
  if(match_cons(i_82, sym_Specification_1))
    {
      j_82 = ATgetArgument(i_82, 0);
      b_82 :
      if(((ATgetType(j_82) == AT_LIST) && ((ATermList) j_82 != ATempty)))
        {
          k_82 = ATgetFirst((ATermList) j_82);
          m_82 = (ATerm) ATgetNext((ATermList) j_82);
          c_82 :
          if(match_cons(k_82, sym_Signature_1))
            {
              l_82 = ATgetArgument(k_82, 0);
              d_82 :
              if(((ATgetType(m_82) == AT_LIST) && ((ATermList) m_82 != ATempty)))
                {
                  n_82 = ATgetFirst((ATermList) m_82);
                  p_82 = (ATerm) ATgetNext((ATermList) m_82);
                  e_82 :
                  if(match_cons(n_82, sym_Overlays_1))
                    {
                      o_82 = ATgetArgument(n_82, 0);
                      f_82 :
                      if(((ATgetType(p_82) == AT_LIST) && ((ATermList) p_82 != ATempty)))
                        {
                          q_82 = ATgetFirst((ATermList) p_82);
                          s_82 = (ATerm) ATgetNext((ATermList) p_82);
                          g_82 :
                          if(match_cons(q_82, sym_Strategies_1))
                            {
                              r_82 = ATgetArgument(q_82, 0);
                              h_82 :
                              if(((ATermList) s_82 == ATempty))
                                {
                                  {
                                    ATerm x_82 = NULL,z_82 = NULL;
                                    ATerm f_26;
                                    f_26 = t;
                                    {
                                      ATerm y_82 = NULL;
                                      t = not_null(o_82);
                                      {
                                        ATerm e_4 (ATerm t)
                                        {
                                          t = not_null(o_82);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, e_4);
                                        {
                                          y_82 = t;
                                          if(((x_82 != NULL) && (x_82 != y_82)))
                                            _fail(y_82);
                                          else
                                            x_82 = y_82;
                                        }
                                      }
                                    }
                                    t = f_26;
                                    {
                                      ATerm a_83 = NULL,e_83 = NULL,g_83 = NULL;
                                      ATerm g_26;
                                      g_26 = t;
                                      {
                                        ATerm d_83 = NULL;
                                        t = not_null(o_82);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            d_83 = t;
                                            if(((a_83 != NULL) && (a_83 != d_83)))
                                              _fail(d_83);
                                            else
                                              a_83 = d_83;
                                          }
                                        }
                                      }
                                      t = g_26;
                                      {
                                        ATerm f_83 = NULL;
                                        t = not_null(r_82);
                                        {
                                          ATerm f_4 (ATerm t)
                                          {
                                            t = not_null(x_82);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, f_4);
                                          {
                                            f_83 = t;
                                            if(((e_83 != NULL) && (e_83 != f_83)))
                                              _fail(f_83);
                                            else
                                              e_83 = f_83;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_83), not_null(e_83));
                                          {
                                            t = conc_0(t);
                                            {
                                              g_83 = t;
                                              if(((z_82 != NULL) && (z_82 != g_83)))
                                                _fail(g_83);
                                              else
                                                z_82 = g_83;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(z_82))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(l_82))));
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
ATerm DefineBound_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm l_84 = NULL;
    l_84 = t;
    {
      ATerm h_26;
      h_26 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(l_84)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_26, not_null(l_84)));
        {
          ATerm h_4 (ATerm t)
          {
            t = term_j_26;
            return(t);
          }
          t = assert_1(t, h_4);
        }
      }
      t = h_26;
    }
    return(t);
  }
  t = map_1(t, g_4);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL;
  q_84 = t;
  p_84 :
  if(match_cons(q_84, sym_Overlay_3))
    {
      r_84 = ATgetArgument(q_84, 0);
      s_84 = ATgetArgument(q_84, 1);
      t_84 = ATgetArgument(q_84, 2);
      {
        ATerm k_26;
        k_26 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Defined_2, term_l_26, not_null(r_84)));
          {
            ATerm i_4 (ATerm t)
            {
              t = term_m_26;
              return(t);
            }
            t = assert_1(t, i_4);
            {
              t = not_null(s_84);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(t_84);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = k_26;
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
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL;
  c_85 = t;
  a_85 :
  if(match_cons(c_85, sym_RDef_3))
    {
      d_85 = ATgetArgument(c_85, 0);
      e_85 = ATgetArgument(c_85, 1);
      f_85 = ATgetArgument(c_85, 2);
      b_85 :
      if(match_cons(f_85, sym_StratRule_3))
        {
          g_85 = ATgetArgument(f_85, 0);
          h_85 = ATgetArgument(f_85, 1);
          i_85 = ATgetArgument(f_85, 2);
          {
            ATerm s_26;
            s_26 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Defined_2, term_t_26, not_null(d_85)));
              {
                ATerm j_4 (ATerm t)
                {
                  t = term_m_26;
                  return(t);
                }
                t = assert_1(t, j_4);
                {
                  t = not_null(g_85);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(h_85);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(i_85);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = s_26;
          }
        }
      else
        {
          if(match_cons(f_85, sym_Rule_3))
            {
              g_85 = ATgetArgument(f_85, 0);
              h_85 = ATgetArgument(f_85, 1);
              i_85 = ATgetArgument(f_85, 2);
              {
                ATerm u_26;
                u_26 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Defined_2, term_v_26, not_null(d_85)));
                  {
                    ATerm k_4 (ATerm t)
                    {
                      t = term_m_26;
                      return(t);
                    }
                    t = assert_1(t, k_4);
                    {
                      t = not_null(g_85);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(i_85);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(h_85);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = u_26;
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
ATerm guardedlchoice_1 (ATerm t, ATerm j_80 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, j_80, j_80, _id);
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, j_80);
    return(t);
  }
  t = abstract_choice_2(t, l_4, m_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm), ATerm y_77 (ATerm))
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL;
  i_86 = t;
  h_86 :
  if(match_cons(i_86, sym_GuardedLChoice_3))
    {
      j_86 = ATgetArgument(i_86, 0);
      k_86 = ATgetArgument(i_86, 1);
      l_86 = ATgetArgument(i_86, 2);
      {
        ATerm r_86 = NULL,t_86 = NULL;
        ATerm s_86 = NULL;
        t = SSLgetAnnotations(not_null(i_86));
        {
          s_86 = t;
          if(((r_86 != NULL) && (r_86 != s_86)))
            _fail(s_86);
          else
            r_86 = s_86;
        }
        {
          t = not_null(j_86);
          {
            ATerm v_86 = NULL;
            t = w_77(t);
            {
              t_86 = t;
              {
                t = not_null(k_86);
                {
                  ATerm x_86 = NULL;
                  t = x_77(t);
                  {
                    v_86 = t;
                    {
                      t = not_null(l_86);
                      {
                        ATerm z_86 = NULL;
                        t = y_77(t);
                        {
                          x_86 = t;
                          {
                            ATerm a_87 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(t_86), not_null(v_86), not_null(x_86)), not_null(r_86));
                            {
                              a_87 = t;
                              if(((z_86 != NULL) && (z_86 != a_87)))
                                _fail(a_87);
                              else
                                z_86 = a_87;
                            }
                            t = not_null(z_86);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = LChoice_2(t, i_80, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = LChoice_2(t, _id, i_80);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm))
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL;
  q_87 = t;
  p_87 :
  if(match_cons(q_87, sym_LChoice_2))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      {
        ATerm w_87 = NULL,y_87 = NULL;
        ATerm x_87 = NULL;
        t = SSLgetAnnotations(not_null(q_87));
        {
          x_87 = t;
          if(((w_87 != NULL) && (w_87 != x_87)))
            _fail(x_87);
          else
            w_87 = x_87;
        }
        {
          t = not_null(r_87);
          {
            ATerm a_88 = NULL;
            t = u_77(t);
            {
              y_87 = t;
              {
                t = not_null(s_87);
                {
                  ATerm c_88 = NULL;
                  t = v_77(t);
                  {
                    a_88 = t;
                    {
                      ATerm d_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(y_87), not_null(a_88)), not_null(w_87));
                      {
                        d_88 = t;
                        if(((c_88 != NULL) && (c_88 != d_88)))
                          _fail(d_88);
                        else
                          c_88 = d_88;
                      }
                      t = not_null(c_88);
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
ATerm isect_Bound_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm q_4 (ATerm t)
    {
      ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,l_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL;
      h_89 = t;
      x_88 :
      if(match_cons(h_89, sym__2))
        {
          i_89 = ATgetArgument(h_89, 0);
          j_89 = ATgetArgument(h_89, 1);
          c_89 :
          if(((ATgetType(j_89) == AT_LIST) && ((ATermList) j_89 != ATempty)))
            {
              l_89 = ATgetFirst((ATermList) j_89);
              p_89 = (ATerm) ATgetNext((ATermList) j_89);
              d_89 :
              if(match_cons(l_89, sym_Defined_2))
                {
                  n_89 = ATgetArgument(l_89, 0);
                  o_89 = ATgetArgument(l_89, 1);
                  e_89 :
                  if(!(match_cons(i_89, sym_Scopes_0)))
                    {
                      ATerm w_26 = t;
                      int x_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_26;
                          y_26 = t;
                          {
                            ATerm s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(i_89));
                            {
                              t = table_get_0(t);
                              {
                                s_89 = t;
                                v_88 :
                                if(((ATgetType(s_89) == AT_LIST) && ((ATermList) s_89 != ATempty)))
                                  {
                                    t_89 = ATgetFirst((ATermList) s_89);
                                    w_89 = (ATerm) ATgetNext((ATermList) s_89);
                                    w_88 :
                                    if(match_cons(t_89, sym_Defined_2))
                                      {
                                        u_89 = ATgetArgument(t_89, 0);
                                        v_89 = ATgetArgument(t_89, 1);
                                        if(((o_89 != NULL) && (o_89 != v_89)))
                                          _fail(v_89);
                                        else
                                          o_89 = v_89;
                                      }
                                    else
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
                          t = y_26;
                          LocalPopChoice(x_26);
                        }
                      else
                        {
                          t = w_26;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_89), (ATerm) ATinsert(ATempty, term_z_26));
                        }
                    }
                }
              else
                {
                  f_89 :
                  if(!(match_cons(i_89, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              g_89 :
              if(!(match_cons(i_89, sym_Scopes_0)))
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
    t = try_1(t, q_4);
    return(t);
  }
  t = map_1(t, p_4);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,h_90 = NULL;
  f_90 = t;
  e_90 :
  if(match_cons(f_90, sym__2))
    {
      g_90 = ATgetArgument(f_90, 0);
      h_90 = ATgetArgument(f_90, 1);
      {
        t = not_null(h_90);
        {
          ATerm r_4 (ATerm t)
          {
            ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL;
            k_90 = t;
            b_90 :
            if(match_cons(k_90, sym__2))
              {
                l_90 = ATgetArgument(k_90, 0);
                m_90 = ATgetArgument(k_90, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_90), not_null(l_90), not_null(m_90));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm s_90 = NULL;
  s_90 = t;
  {
    ATerm a_27;
    a_27 = t;
    {
      t = term_j_26;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(s_90));
          t = table_putlist_0(t);
        }
      }
    }
    t = a_27;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm d_91 = NULL;
  d_91 = t;
  t = SSL_table_keys(not_null(d_91));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm j_91 = NULL;
  j_91 = t;
  {
    t = table_keys_0(t);
    {
      ATerm s_4 (ATerm t)
      {
        ATerm l_91 = NULL;
        ATerm n_91 = NULL;
        l_91 = t;
        {
          ATerm o_91 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_91), not_null(l_91));
          {
            t = table_get_0(t);
            {
              o_91 = t;
              if(((n_91 != NULL) && (n_91 != o_91)))
                _fail(o_91);
              else
                n_91 = o_91;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_91), not_null(n_91));
        }
        return(t);
      }
      t = map_1(t, s_4);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_j_26;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm f_80 (ATerm), ATerm g_80 (ATerm))
{
  ATerm u_91 = NULL,w_91 = NULL;
  ATerm b_27;
  b_27 = t;
  {
    ATerm v_91 = NULL;
    t = save_Bound_0(t);
    {
      v_91 = t;
      if(((u_91 != NULL) && (u_91 != v_91)))
        _fail(v_91);
      else
        u_91 = v_91;
    }
  }
  t = b_27;
  {
    t = f_80(t);
    {
      ATerm c_27;
      c_27 = t;
      {
        ATerm x_91 = NULL;
        t = save_Bound_0(t);
        {
          x_91 = t;
          {
            if(((w_91 != NULL) && (w_91 != x_91)))
              _fail(x_91);
            else
              w_91 = x_91;
            {
              t = not_null(u_91);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = c_27;
      {
        t = g_80(t);
        {
          ATerm d_27;
          d_27 = t;
          {
            t = not_null(w_91);
            t = isect_Bound_0(t);
          }
          t = d_27;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = Choice_2(t, h_80, _id);
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = Choice_2(t, _id, h_80);
    return(t);
  }
  t = abstract_choice_2(t, t_4, u_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm s_77 (ATerm), ATerm t_77 (ATerm))
{
  ATerm g_92 = NULL,h_92 = NULL,i_92 = NULL;
  g_92 = t;
  f_92 :
  if(match_cons(g_92, sym_Choice_2))
    {
      h_92 = ATgetArgument(g_92, 0);
      i_92 = ATgetArgument(g_92, 1);
      {
        ATerm m_92 = NULL,o_92 = NULL;
        ATerm n_92 = NULL;
        t = SSLgetAnnotations(not_null(g_92));
        {
          n_92 = t;
          if(((m_92 != NULL) && (m_92 != n_92)))
            _fail(n_92);
          else
            m_92 = n_92;
        }
        {
          t = not_null(h_92);
          {
            ATerm q_92 = NULL;
            t = s_77(t);
            {
              o_92 = t;
              {
                t = not_null(i_92);
                {
                  ATerm u_92 = NULL;
                  t = t_77(t);
                  {
                    q_92 = t;
                    {
                      ATerm v_92 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(o_92), not_null(q_92)), not_null(m_92));
                      {
                        v_92 = t;
                        if(((u_92 != NULL) && (u_92 != v_92)))
                          _fail(v_92);
                        else
                          u_92 = v_92;
                      }
                      t = not_null(u_92);
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
  ATerm g_27;
  g_27 = t;
  {
    ATerm c_93 = NULL;
    ATerm d_93 = NULL;
    d_93 = t;
    if(((c_93 != NULL) && (c_93 != d_93)))
      _fail(d_93);
    else
      c_93 = d_93;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_21, not_null(c_93));
      t = printnl_0(t);
    }
  }
  t = g_27;
  return(t);
}
ATerm Context_0 (ATerm t)
{
  ATerm w_93 = NULL;
  w_93 = t;
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_93 = NULL;
        ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL;
        t = term_j_21;
        {
          ATerm v_4 (ATerm t)
          {
            t = term_m_26;
            return(t);
          }
          t = rewrite_1(t, v_4);
          {
            z_93 = t;
            l_93 :
            if(match_cons(z_93, sym_Defined_2))
              {
                a_94 = ATgetArgument(z_93, 0);
                b_94 = ATgetArgument(z_93, 1);
                m_93 :
                if(match_string(a_94, "r_0"))
                  {
                    if(((y_93 != NULL) && (y_93 != b_94)))
                      _fail(b_94);
                    else
                      y_93 = b_94;
                  }
                else
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_93)), term_s_21), not_null(y_93)), term_j_27);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        {
          ATerm k_27 = t;
          int l_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_94 = NULL;
              ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
              t = term_j_21;
              {
                ATerm w_4 (ATerm t)
                {
                  t = term_m_26;
                  return(t);
                }
                t = rewrite_1(t, w_4);
                {
                  j_94 = t;
                  o_93 :
                  if(match_cons(j_94, sym_Defined_2))
                    {
                      k_94 = ATgetArgument(j_94, 0);
                      l_94 = ATgetArgument(j_94, 1);
                      p_93 :
                      if(match_string(k_94, "q_0"))
                        {
                          if(((i_94 != NULL) && (i_94 != l_94)))
                            _fail(l_94);
                          else
                            i_94 = l_94;
                        }
                      else
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_93)), term_s_21), not_null(i_94)), term_m_27);
              LocalPopChoice(l_27);
            }
          else
            {
              t = k_27;
              {
                ATerm n_27 = t;
                int o_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_94 = NULL;
                    ATerm o_94 = NULL,p_94 = NULL,q_94 = NULL;
                    t = term_j_21;
                    {
                      ATerm x_4 (ATerm t)
                      {
                        t = term_m_26;
                        return(t);
                      }
                      t = rewrite_1(t, x_4);
                      {
                        o_94 = t;
                        r_93 :
                        if(match_cons(o_94, sym_Defined_2))
                          {
                            p_94 = ATgetArgument(o_94, 0);
                            q_94 = ATgetArgument(o_94, 1);
                            s_93 :
                            if(match_string(p_94, "p_0"))
                              {
                                if(((n_94 != NULL) && (n_94 != q_94)))
                                  _fail(q_94);
                                else
                                  n_94 = q_94;
                              }
                            else
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_93)), term_s_21), not_null(n_94)), term_m_27);
                    LocalPopChoice(o_27);
                  }
                else
                  {
                    t = n_27;
                    {
                      ATerm s_94 = NULL;
                      ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
                      t = term_j_21;
                      {
                        ATerm y_4 (ATerm t)
                        {
                          t = term_m_26;
                          return(t);
                        }
                        t = rewrite_1(t, y_4);
                        {
                          t_94 = t;
                          u_93 :
                          if(match_cons(t_94, sym_Defined_2))
                            {
                              u_94 = ATgetArgument(t_94, 0);
                              v_94 = ATgetArgument(t_94, 1);
                              v_93 :
                              if(match_string(u_94, "o_0"))
                                {
                                  if(((s_94 != NULL) && (s_94 != v_94)))
                                    _fail(v_94);
                                  else
                                    s_94 = v_94;
                                }
                              else
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_93)), term_s_21), not_null(s_94)), term_p_27);
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
  ATerm h_95 = NULL,i_95 = NULL;
  h_95 = t;
  g_95 :
  if(match_cons(h_95, sym_Var_1))
    {
      i_95 = ATgetArgument(h_95, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_27), not_null(i_95)), term_q_27);
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
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL;
  a_96 = t;
  s_95 :
  if(((ATgetType(a_96) == AT_LIST) && ((ATermList) a_96 != ATempty)))
    {
      b_96 = ATgetFirst((ATermList) a_96);
      c_96 = (ATerm) ATgetNext((ATermList) a_96);
      t = not_null(b_96);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,k_96 = NULL;
  i_96 = t;
  h_96 :
  if(match_cons(i_96, sym__2))
    {
      j_96 = ATgetArgument(i_96, 0);
      k_96 = ATgetArgument(i_96, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_96), not_null(k_96));
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
ATerm rewrite_1 (ATerm t, ATerm a_91 (ATerm))
{
  ATerm q_96 = NULL;
  ATerm s_96 = NULL;
  q_96 = t;
  {
    ATerm t_96 = NULL;
    t = term_s_27;
    {
      t = a_91(t);
      {
        t_96 = t;
        if(((s_96 != NULL) && (s_96 != t_96)))
          _fail(t_96);
        else
          s_96 = t_96;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_96), not_null(q_96));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL;
  i_97 = t;
  h_97 :
  if(match_cons(i_97, sym_Var_1))
    {
      j_97 = ATgetArgument(i_97, 0);
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
            t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_97));
            {
              ATerm z_4 (ATerm t)
              {
                t = term_j_26;
                return(t);
              }
              t = rewrite_1(t, z_4);
              {
                l_97 = t;
                a_97 :
                if(match_cons(l_97, sym_Defined_2))
                  {
                    m_97 = ATgetArgument(l_97, 0);
                    n_97 = ATgetArgument(l_97, 1);
                    b_97 :
                    if(match_string(m_97, "t_0"))
                      {
                        if(((j_97 != NULL) && (j_97 != n_97)))
                          _fail(n_97);
                        else
                          j_97 = n_97;
                      }
                    else
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_97));
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            {
              ATerm v_27 = t;
              int w_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_97 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_97));
                  {
                    ATerm a_5 (ATerm t)
                    {
                      t = term_j_26;
                      return(t);
                    }
                    t = rewrite_1(t, a_5);
                    {
                      p_97 = t;
                      d_97 :
                      if(match_cons(p_97, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_s_27;
                  LocalPopChoice(w_27);
                }
              else
                {
                  t = v_27;
                  {
                    ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_97));
                    {
                      ATerm b_5 (ATerm t)
                      {
                        t = term_j_26;
                        return(t);
                      }
                      t = rewrite_1(t, b_5);
                      {
                        r_97 = t;
                        f_97 :
                        if(match_cons(r_97, sym_Defined_2))
                          {
                            s_97 = ATgetArgument(r_97, 0);
                            t_97 = ATgetArgument(r_97, 1);
                            g_97 :
                            if(match_string(s_97, "s_0"))
                              {
                                if(((j_97 != NULL) && (j_97 != t_97)))
                                  _fail(t_97);
                                else
                                  j_97 = t_97;
                              }
                            else
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_97));
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
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(y_27);
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = x_27;
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(c_28);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = b_28;
            {
              ATerm d_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(e_28);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = d_28;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  ATerm n_98 = NULL,o_98 = NULL,q_98 = NULL,r_98 = NULL;
  n_98 = t;
  m_98 :
  if(match_cons(n_98, sym_Rule_3))
    {
      o_98 = ATgetArgument(n_98, 0);
      q_98 = ATgetArgument(n_98, 1);
      r_98 = ATgetArgument(n_98, 2);
      {
        ATerm w_98 = NULL,y_98 = NULL;
        ATerm x_98 = NULL;
        t = SSLgetAnnotations(not_null(n_98));
        {
          x_98 = t;
          if(((w_98 != NULL) && (w_98 != x_98)))
            _fail(x_98);
          else
            w_98 = x_98;
        }
        {
          t = not_null(o_98);
          {
            ATerm a_99 = NULL;
            t = y_75(t);
            {
              y_98 = t;
              {
                t = not_null(q_98);
                {
                  ATerm c_99 = NULL;
                  t = z_75(t);
                  {
                    a_99 = t;
                    {
                      t = not_null(r_98);
                      {
                        ATerm e_99 = NULL;
                        t = a_76(t);
                        {
                          c_99 = t;
                          {
                            ATerm f_99 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(y_98), not_null(a_99), not_null(c_99)), not_null(w_98));
                            {
                              f_99 = t;
                              if(((e_99 != NULL) && (e_99 != f_99)))
                                _fail(f_99);
                              else
                                e_99 = f_99;
                            }
                            t = not_null(e_99);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm r_99 = NULL,s_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym_RootApp_1))
    {
      s_99 = ATgetArgument(r_99, 0);
      {
        ATerm x_99 = NULL,z_99 = NULL;
        ATerm y_99 = NULL;
        t = SSLgetAnnotations(not_null(r_99));
        {
          y_99 = t;
          if(((x_99 != NULL) && (x_99 != y_99)))
            _fail(y_99);
          else
            x_99 = y_99;
        }
        {
          t = not_null(s_99);
          {
            ATerm b_100 = NULL;
            t = k_75(t);
            {
              z_99 = t;
              {
                ATerm e_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(z_99)), not_null(x_99));
                {
                  e_100 = t;
                  if(((b_100 != NULL) && (b_100 != e_100)))
                    _fail(e_100);
                  else
                    b_100 = e_100;
                }
                t = not_null(b_100);
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
ATerm App_2 (ATerm t, ATerm i_75 (ATerm), ATerm j_75 (ATerm))
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  r_100 = t;
  q_100 :
  if(match_cons(r_100, sym_App_2))
    {
      s_100 = ATgetArgument(r_100, 0);
      t_100 = ATgetArgument(r_100, 1);
      {
        ATerm x_100 = NULL,b_101 = NULL;
        ATerm a_101 = NULL;
        t = SSLgetAnnotations(not_null(r_100));
        {
          a_101 = t;
          if(((x_100 != NULL) && (x_100 != a_101)))
            _fail(a_101);
          else
            x_100 = a_101;
        }
        {
          t = not_null(s_100);
          {
            ATerm d_101 = NULL;
            t = i_75(t);
            {
              b_101 = t;
              {
                t = not_null(t_100);
                {
                  ATerm f_101 = NULL;
                  t = j_75(t);
                  {
                    d_101 = t;
                    {
                      ATerm g_101 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(b_101), not_null(d_101)), not_null(x_100));
                      {
                        g_101 = t;
                        if(((f_101 != NULL) && (f_101 != g_101)))
                          _fail(g_101);
                        else
                          f_101 = g_101;
                      }
                      t = not_null(f_101);
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
  ATerm t_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL;
  t_101 = t;
  s_101 :
  if(match_cons(t_101, sym__3))
    {
      w_101 = ATgetArgument(t_101, 0);
      x_101 = ATgetArgument(t_101, 1);
      y_101 = ATgetArgument(t_101, 2);
      {
        ATerm c_102 = NULL;
        ATerm f_28;
        f_28 = t;
        {
          ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_101), not_null(x_101));
          {
            t = table_get_0(t);
            {
              d_102 = t;
              r_101 :
              if(((ATgetType(d_102) == AT_LIST) && ((ATermList) d_102 != ATempty)))
                {
                  e_102 = ATgetFirst((ATermList) d_102);
                  f_102 = (ATerm) ATgetNext((ATermList) d_102);
                  {
                    if(((c_102 != NULL) && (c_102 != f_102)))
                      _fail(f_102);
                    else
                      c_102 = f_102;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(w_101), not_null(x_101), (ATerm) ATinsert(CheckATermList(not_null(c_102)), not_null(y_101)));
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
        t = f_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm z_90 (ATerm))
{
  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL;
  n_102 = t;
  m_102 :
  if(match_cons(n_102, sym__2))
    {
      o_102 = ATgetArgument(n_102, 0);
      p_102 = ATgetArgument(n_102, 1);
      {
        ATerm s_102 = NULL;
        ATerm g_28;
        g_28 = t;
        {
          ATerm t_102 = NULL;
          t = z_90(t);
          {
            t_102 = t;
            {
              if(((s_102 != NULL) && (s_102 != t_102)))
                _fail(t_102);
              else
                s_102 = t_102;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_102), not_null(o_102), not_null(p_102));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = g_28;
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
  ATerm y_102 = NULL,z_102 = NULL;
  y_102 = t;
  x_102 :
  if(match_cons(y_102, sym_Var_1))
    {
      z_102 = ATgetArgument(y_102, 0);
      {
        ATerm h_28;
        h_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(z_102)), (ATerm) ATmakeAppl(sym_Defined_2, term_i_28, not_null(z_102)));
          {
            ATerm c_5 (ATerm t)
            {
              t = term_j_26;
              return(t);
            }
            t = override_key_1(t, c_5);
          }
        }
        t = h_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm y_0 (ATerm))
{
  ATerm l_103 = NULL,m_103 = NULL;
  l_103 = t;
  k_103 :
  if(match_cons(l_103, sym_Var_1))
    {
      m_103 = ATgetArgument(l_103, 0);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_103 = NULL,r_103 = NULL;
            ATerm q_103 = NULL;
            t = SSLgetAnnotations(not_null(l_103));
            {
              q_103 = t;
              if(((p_103 != NULL) && (p_103 != q_103)))
                _fail(q_103);
              else
                p_103 = q_103;
            }
            {
              t = not_null(m_103);
              {
                ATerm t_103 = NULL;
                t = y_0(t);
                {
                  r_103 = t;
                  {
                    ATerm u_103 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_103)), not_null(p_103));
                    {
                      u_103 = t;
                      if(((t_103 != NULL) && (t_103 != u_103)))
                        _fail(u_103);
                      else
                        t_103 = u_103;
                    }
                    t = not_null(t_103);
                  }
                }
              }
            }
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm x_103 = NULL,z_103 = NULL;
              ATerm y_103 = NULL;
              t = SSLgetAnnotations(not_null(l_103));
              {
                y_103 = t;
                if(((x_103 != NULL) && (x_103 != y_103)))
                  _fail(y_103);
                else
                  x_103 = y_103;
              }
              {
                t = not_null(m_103);
                {
                  ATerm b_104 = NULL;
                  t = y_0(t);
                  {
                    z_103 = t;
                    {
                      ATerm c_104 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_103)), not_null(x_103));
                      {
                        c_104 = t;
                        if(((b_104 != NULL) && (b_104 != c_104)))
                          _fail(c_104);
                        else
                          b_104 = c_104;
                      }
                      t = not_null(b_104);
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
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(m_28);
      t = Binding_0(t);
    }
  else
    {
      t = l_28;
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(o_28);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = n_28;
            {
              ATerm p_28 = t;
              int q_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(q_28);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = p_28;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm s_104 = NULL,t_104 = NULL;
  s_104 = t;
  r_104 :
  if(match_cons(s_104, sym_Match_1))
    {
      t_104 = ATgetArgument(s_104, 0);
      {
        ATerm w_104 = NULL,y_104 = NULL;
        ATerm x_104 = NULL;
        t = SSLgetAnnotations(not_null(s_104));
        {
          x_104 = t;
          if(((w_104 != NULL) && (w_104 != x_104)))
            _fail(x_104);
          else
            w_104 = x_104;
        }
        {
          t = not_null(t_104);
          {
            ATerm a_105 = NULL;
            t = f_79(t);
            {
              y_104 = t;
              {
                ATerm b_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(y_104)), not_null(w_104));
                {
                  b_105 = t;
                  if(((a_105 != NULL) && (a_105 != b_105)))
                    _fail(b_105);
                  else
                    a_105 = b_105;
                }
                t = not_null(a_105);
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
ATerm Build_1 (ATerm t, ATerm g_79 (ATerm))
{
  ATerm l_105 = NULL,m_105 = NULL;
  l_105 = t;
  k_105 :
  if(match_cons(l_105, sym_Build_1))
    {
      m_105 = ATgetArgument(l_105, 0);
      {
        ATerm p_105 = NULL,r_105 = NULL;
        ATerm q_105 = NULL;
        t = SSLgetAnnotations(not_null(l_105));
        {
          q_105 = t;
          if(((p_105 != NULL) && (p_105 != q_105)))
            _fail(q_105);
          else
            p_105 = q_105;
        }
        {
          t = not_null(m_105);
          {
            ATerm t_105 = NULL;
            t = g_79(t);
            {
              r_105 = t;
              {
                ATerm u_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(r_105)), not_null(p_105));
                {
                  u_105 = t;
                  if(((t_105 != NULL) && (t_105 != u_105)))
                    _fail(u_105);
                  else
                    t_105 = u_105;
                }
                t = not_null(t_105);
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
ATerm VarScope_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    t = term_j_26;
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, e_80);
    return(t);
  }
  t = scope_2(t, d_5, e_5);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(s_28);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = r_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(u_28);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = t_28;
            {
              ATerm v_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(w_28);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = v_28;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(y_28);
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
                        t = x_28;
                        {
                          ATerm z_28 = t;
                          int a_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(a_29);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = z_28;
                              {
                                ATerm b_29 = t;
                                int c_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(c_29);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = b_29;
                                    {
                                      ATerm d_29 = t;
                                      int e_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(e_29);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = d_29;
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
  ATerm d_106 = NULL,e_106 = NULL,f_106 = NULL,g_106 = NULL;
  d_106 = t;
  c_106 :
  if(match_cons(d_106, sym_SDef_3))
    {
      e_106 = ATgetArgument(d_106, 0);
      f_106 = ATgetArgument(d_106, 1);
      g_106 = ATgetArgument(d_106, 2);
      {
        ATerm f_29;
        f_29 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Defined_2, term_g_29, not_null(e_106)));
          {
            ATerm f_5 (ATerm t)
            {
              t = term_m_26;
              return(t);
            }
            t = assert_1(t, f_5);
            {
              t = not_null(g_106);
              t = unbound_vars_0(t);
            }
          }
        }
        t = f_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_90 (ATerm))
{
  ATerm s_106 = NULL,t_106 = NULL,u_106 = NULL;
  s_106 = t;
  r_106 :
  if(match_cons(s_106, sym__2))
    {
      t_106 = ATgetArgument(s_106, 0);
      u_106 = ATgetArgument(s_106, 1);
      {
        ATerm x_106 = NULL,y_106 = NULL,z_106 = NULL;
        ATerm h_29;
        h_29 = t;
        {
          ATerm a_107 = NULL;
          ATerm b_107 = NULL,c_107 = NULL,d_107 = NULL;
          t = y_90(t);
          {
            a_107 = t;
            {
              if(((x_106 != NULL) && (x_106 != a_107)))
                _fail(a_107);
              else
                x_106 = a_107;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(x_106), not_null(t_106), not_null(u_106));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_29 = t;
                    int j_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_106), term_k_29);
                        t = table_get_0(t);
                        LocalPopChoice(j_29);
                      }
                    else
                      {
                        t = i_29;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      b_107 = t;
                      q_106 :
                      if(((ATgetType(b_107) == AT_LIST) && ((ATermList) b_107 != ATempty)))
                        {
                          c_107 = ATgetFirst((ATermList) b_107);
                          d_107 = (ATerm) ATgetNext((ATermList) b_107);
                          {
                            if(((y_106 != NULL) && (y_106 != c_107)))
                              _fail(c_107);
                            else
                              y_106 = c_107;
                            {
                              if(((z_106 != NULL) && (z_106 != d_107)))
                                _fail(d_107);
                              else
                                z_106 = d_107;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(x_106), term_k_29, (ATerm) ATinsert(CheckATermList(not_null(z_106)), (ATerm) ATinsert(CheckATermList(not_null(y_106)), not_null(t_106))));
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
        t = h_29;
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
  ATerm g_5 (ATerm t)
  {
    ATerm k_107 = NULL;
    k_107 = t;
    {
      ATerm l_29;
      l_29 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(k_107)), term_z_26);
        {
          ATerm h_5 (ATerm t)
          {
            t = term_j_26;
            return(t);
          }
          t = assert_1(t, h_5);
        }
      }
      t = l_29;
    }
    return(t);
  }
  t = map_1(t, g_5);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm p_107 = NULL,u_107 = NULL,v_107 = NULL;
  p_107 = t;
  o_107 :
  if(((ATgetType(p_107) == AT_LIST) && ((ATermList) p_107 != ATempty)))
    {
      u_107 = ATgetFirst((ATermList) p_107);
      v_107 = (ATerm) ATgetNext((ATermList) p_107);
      t = not_null(v_107);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL;
  c_108 = t;
  b_108 :
  if(match_cons(c_108, sym__2))
    {
      d_108 = ATgetArgument(c_108, 0);
      e_108 = ATgetArgument(c_108, 1);
      {
        ATerm m_29;
        m_29 = t;
        {
          ATerm o_108 = NULL;
          ATerm p_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_108), not_null(e_108));
          {
            ATerm n_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(o_29);
              }
            else
              {
                t = n_29;
                t = (ATerm) ATempty;
              }
            {
              p_108 = t;
              if(((o_108 != NULL) && (o_108 != p_108)))
                _fail(p_108);
              else
                o_108 = p_108;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_108), not_null(e_108), not_null(o_108));
            t = table_put_0(t);
          }
        }
        t = m_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_90 (ATerm))
{
  ATerm w_108 = NULL,x_108 = NULL,y_108 = NULL;
  ATerm p_29;
  p_29 = t;
  {
    ATerm z_108 = NULL;
    ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL;
    t = v_90(t);
    {
      z_108 = t;
      {
        if(((y_108 != NULL) && (y_108 != z_108)))
          _fail(z_108);
        else
          y_108 = z_108;
        {
          ATerm q_29 = t;
          int r_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_108), term_k_29);
              t = table_get_0(t);
              LocalPopChoice(r_29);
            }
          else
            {
              t = q_29;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            f_109 = t;
            v_108 :
            if(((ATgetType(f_109) == AT_LIST) && ((ATermList) f_109 != ATempty)))
              {
                g_109 = ATgetFirst((ATermList) f_109);
                h_109 = (ATerm) ATgetNext((ATermList) f_109);
                {
                  if(((x_108 != NULL) && (x_108 != g_109)))
                    _fail(g_109);
                  else
                    x_108 = g_109;
                  {
                    if(((w_108 != NULL) && (w_108 != h_109)))
                      _fail(h_109);
                    else
                      w_108 = h_109;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_108), term_k_29, not_null(w_108));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(x_108);
                          {
                            ATerm i_5 (ATerm t)
                            {
                              ATerm i_109 = NULL;
                              i_109 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_108), not_null(i_109));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_5);
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
  t = p_29;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_109 (ATerm), ATerm b_109 (ATerm))
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_109(t);
      t = b_109(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        t = b_109(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm q_109 = NULL;
  ATerm u_29;
  u_29 = t;
  {
    ATerm r_109 = NULL;
    ATerm s_109 = NULL;
    t = u_90(t);
    {
      r_109 = t;
      {
        if(((q_109 != NULL) && (q_109 != r_109)))
          _fail(r_109);
        else
          q_109 = r_109;
        {
          ATerm t_109 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_109), term_k_29);
          {
            ATerm v_29 = t;
            int w_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_29);
              }
            else
              {
                t = v_29;
                t = (ATerm) ATempty;
              }
            {
              t_109 = t;
              if(((s_109 != NULL) && (s_109 != t_109)))
                _fail(t_109);
              else
                s_109 = t_109;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_109), term_k_29, (ATerm) ATinsert(CheckATermList(not_null(s_109)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = u_29;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm w_90 (ATerm), ATerm x_90 (ATerm))
{
  t = begin_scope_1(t, w_90);
  {
    ATerm j_5 (ATerm t)
    {
      t = end_scope_1(t, w_90);
      return(t);
    }
    t = restore_always_2(t, x_90, j_5);
  }
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    t = term_m_26;
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm m_5 (ATerm t)
    {
      t = term_j_26;
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm x_29 = t;
      int y_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_29;
          z_29 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = z_29;
          t = sdef_ud_0(t);
          LocalPopChoice(y_29);
        }
      else
        {
          t = x_29;
          {
            ATerm a_30 = t;
            int b_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                LocalPopChoice(b_30);
              }
            else
              {
                t = a_30;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, m_5, n_5);
    return(t);
  }
  t = scope_2(t, k_5, l_5);
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm e_30;
        e_30 = t;
        {
          ATerm o_5 (ATerm t)
          {
            ATerm f_30 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_30;
              }
            return(t);
          }
          t = filter_1(t, o_5);
          t = Nil_0(t);
        }
        t = e_30;
      }
    }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm u_76 (ATerm))
{
  ATerm b_110 = NULL,c_110 = NULL;
  b_110 = t;
  a_110 :
  if(match_cons(b_110, sym_Overlays_1))
    {
      c_110 = ATgetArgument(b_110, 0);
      {
        ATerm f_110 = NULL,h_110 = NULL;
        ATerm g_110 = NULL;
        t = SSLgetAnnotations(not_null(b_110));
        {
          g_110 = t;
          if(((f_110 != NULL) && (f_110 != g_110)))
            _fail(g_110);
          else
            f_110 = g_110;
        }
        {
          t = not_null(c_110);
          {
            ATerm j_110 = NULL;
            t = u_76(t);
            {
              h_110 = t;
              {
                ATerm k_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(h_110)), not_null(f_110));
                {
                  k_110 = t;
                  if(((j_110 != NULL) && (j_110 != k_110)))
                    _fail(k_110);
                  else
                    j_110 = k_110;
                }
                t = not_null(j_110);
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
ATerm Signature_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm u_110 = NULL,v_110 = NULL;
  u_110 = t;
  t_110 :
  if(match_cons(u_110, sym_Signature_1))
    {
      v_110 = ATgetArgument(u_110, 0);
      {
        ATerm y_110 = NULL,a_111 = NULL;
        ATerm z_110 = NULL;
        t = SSLgetAnnotations(not_null(u_110));
        {
          z_110 = t;
          if(((y_110 != NULL) && (y_110 != z_110)))
            _fail(z_110);
          else
            y_110 = z_110;
        }
        {
          t = not_null(v_110);
          {
            ATerm c_111 = NULL;
            t = t_76(t);
            {
              a_111 = t;
              {
                ATerm d_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(a_111)), not_null(y_110));
                {
                  d_111 = t;
                  if(((c_111 != NULL) && (c_111 != d_111)))
                    _fail(d_111);
                  else
                    c_111 = d_111;
                }
                t = not_null(c_111);
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
  ATerm p_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        ATerm u_5 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, u_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, s_5, t_5);
      return(t);
    }
    t = Cons_2(t, q_5, r_5);
    return(t);
  }
  t = Specification_1(t, p_5);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL;
  c_112 = t;
  u_111 :
  if(match_cons(c_112, sym_InfixApp_3))
    {
      d_112 = ATgetArgument(c_112, 0);
      z_111 = ATgetArgument(c_112, 1);
      y_111 = ATgetArgument(c_112, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(z_111), (ATerm) ATmakeAppl(sym_Op_2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_111)), not_null(d_112))));
    }
  else
    {
      if(match_cons(c_112, sym_BAM_3))
        {
          d_112 = ATgetArgument(c_112, 0);
          z_111 = ATgetArgument(c_112, 1);
          y_111 = ATgetArgument(c_112, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(y_111))), not_null(d_112)), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_111))));
        }
      else
        {
          if(match_cons(c_112, sym_AM_2))
            {
              d_112 = ATgetArgument(c_112, 0);
              z_111 = ATgetArgument(c_112, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_112), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_111)));
            }
          else
            {
              if(match_cons(c_112, sym_MA_2))
                {
                  d_112 = ATgetArgument(c_112, 0);
                  z_111 = ATgetArgument(c_112, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_112)), not_null(z_111));
                }
              else
                {
                  if(match_cons(c_112, sym_BA_2))
                    {
                      d_112 = ATgetArgument(c_112, 0);
                      z_111 = ATgetArgument(c_112, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_111)), not_null(d_112));
                    }
                  else
                    {
                      if(match_cons(c_112, sym_Lets_2))
                        {
                          d_112 = ATgetArgument(c_112, 0);
                          z_111 = ATgetArgument(c_112, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_112), not_null(z_111));
                        }
                      else
                        {
                          if(match_cons(c_112, sym_LChoices_1))
                            {
                              d_112 = ATgetArgument(c_112, 0);
                              v_111 :
                              if(((ATgetType(d_112) == AT_LIST) && ((ATermList) d_112 != ATempty)))
                                {
                                  a_112 = ATgetFirst((ATermList) d_112);
                                  b_112 = (ATerm) ATgetNext((ATermList) d_112);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(a_112), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(b_112)));
                                }
                              else
                                {
                                  if(((ATermList) d_112 == ATempty))
                                    {
                                      t = term_g_30;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(c_112, sym_Choices_1))
                                {
                                  d_112 = ATgetArgument(c_112, 0);
                                  w_111 :
                                  if(((ATgetType(d_112) == AT_LIST) && ((ATermList) d_112 != ATempty)))
                                    {
                                      a_112 = ATgetFirst((ATermList) d_112);
                                      b_112 = (ATerm) ATgetNext((ATermList) d_112);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_112), (ATerm) ATmakeAppl(sym_Choices_1, not_null(b_112)));
                                    }
                                  else
                                    {
                                      if(((ATermList) d_112 == ATempty))
                                        {
                                          t = term_g_30;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(c_112, sym_Seqs_1))
                                    {
                                      d_112 = ATgetArgument(c_112, 0);
                                      x_111 :
                                      if(((ATgetType(d_112) == AT_LIST) && ((ATermList) d_112 != ATempty)))
                                        {
                                          a_112 = ATgetFirst((ATermList) d_112);
                                          b_112 = (ATerm) ATgetNext((ATermList) d_112);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_112), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_112)));
                                        }
                                      else
                                        {
                                          if(((ATermList) d_112 == ATempty))
                                            {
                                              t = term_f_15;
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
ATerm topdown_1 (ATerm t, ATerm j_104 (ATerm))
{
  t = j_104(t);
  {
    ATerm v_5 (ATerm t)
    {
      t = topdown_1(t, j_104);
      return(t);
    }
    t = _all(t, v_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL;
  o_113 = t;
  l_113 :
  if(match_cons(o_113, sym__2))
    {
      p_113 = ATgetArgument(o_113, 0);
      s_113 = ATgetArgument(o_113, 1);
      m_113 :
      if(match_cons(p_113, sym__2))
        {
          q_113 = ATgetArgument(p_113, 0);
          r_113 = ATgetArgument(p_113, 1);
          n_113 :
          if(match_cons(s_113, sym__2))
            {
              t_113 = ATgetArgument(s_113, 0);
              u_113 = ATgetArgument(s_113, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_113)), not_null(q_113)), (ATerm) ATinsert(CheckATermList(not_null(u_113)), not_null(r_113)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm c_114 = NULL,d_114 = NULL,e_114 = NULL;
  c_114 = t;
  b_114 :
  if(((ATgetType(c_114) == AT_LIST) && ((ATermList) c_114 != ATempty)))
    {
      d_114 = ATgetFirst((ATermList) c_114);
      e_114 = (ATerm) ATgetNext((ATermList) c_114);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_114), not_null(e_114));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm k_114 = NULL;
  k_114 = t;
  j_114 :
  if(((ATermList) k_114 == ATempty))
    {
      t = term_h_30;
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
  ATerm w_5 (ATerm t)
  {
    ATerm n_114 = NULL;
    n_114 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_114));
    return(t);
  }
  t = map_1(t, w_5);
  return(t);
}
ATerm isect_1 (ATerm t, ATerm t_95 (ATerm))
{
  ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
  u_114 = t;
  t_114 :
  if(match_cons(u_114, sym__2))
    {
      v_114 = ATgetArgument(u_114, 0);
      w_114 = ATgetArgument(u_114, 1);
      {
        t = not_null(v_114);
        {
          ATerm e_115 (ATerm t)
          {
            ATerm i_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(j_30);
              }
            else
              {
                t = i_30;
                {
                  ATerm k_30 = t;
                  int l_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_30;
                      m_30 = t;
                      {
                        ATerm x_5 (ATerm t)
                        {
                          t = not_null(w_114);
                          return(t);
                        }
                        t = HdMember_p__2(t, t_95, x_5);
                      }
                      t = m_30;
                      t = Cons_2(t, _id, e_115);
                      LocalPopChoice(l_30);
                    }
                  else
                    {
                      t = k_30;
                      {
                        ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL;
                        z_114 = t;
                        s_114 :
                        if(((ATgetType(z_114) == AT_LIST) && ((ATermList) z_114 != ATempty)))
                          {
                            a_115 = ATgetFirst((ATermList) z_114);
                            b_115 = (ATerm) ATgetNext((ATermList) z_114);
                            {
                              t = not_null(b_115);
                              t = e_115(t);
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
          t = e_115(t);
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
ATerm SplitDynamicRule_2 (ATerm t, ATerm w_0 (ATerm), ATerm x_0 (ATerm))
{
  ATerm a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL;
  ATerm q_117 (ATerm t)
  {
    ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL,c_117 = NULL;
    ATerm n_30;
    n_30 = t;
    {
      ATerm r_116 = NULL,t_116 = NULL,v_116 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_116), term_p_30);
      {
        ATerm q_30 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_30;
          }
        {
          ATerm r_30;
          r_30 = t;
          {
            ATerm s_116 = NULL;
            t = term_s_27;
            {
              t = w_0(t);
              {
                s_116 = t;
                if(((r_116 != NULL) && (r_116 != s_116)))
                  _fail(s_116);
                else
                  r_116 = s_116;
              }
            }
          }
          t = r_30;
          {
            ATerm u_116 = NULL;
            t = not_null(e_116);
            {
              t = tvars_0(t);
              {
                u_116 = t;
                if(((t_116 != NULL) && (t_116 != u_116)))
                  _fail(u_116);
                else
                  t_116 = u_116;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_116), not_null(t_116));
              {
                t = isect_0(t);
                {
                  ATerm w_116 = NULL,y_116 = NULL,a_117 = NULL;
                  t = strings_to_vars_0(t);
                  {
                    v_116 = t;
                    {
                      if(((o_116 != NULL) && (o_116 != v_116)))
                        _fail(v_116);
                      else
                        o_116 = v_116;
                      {
                        ATerm s_30;
                        s_30 = t;
                        {
                          ATerm x_116 = NULL;
                          t = term_s_27;
                          {
                            t = w_0(t);
                            {
                              x_116 = t;
                              if(((w_116 != NULL) && (w_116 != x_116)))
                                _fail(x_116);
                              else
                                w_116 = x_116;
                            }
                          }
                        }
                        t = s_30;
                        {
                          ATerm z_116 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_116), not_null(i_116));
                          {
                            t = tvars_0(t);
                            {
                              z_116 = t;
                              if(((y_116 != NULL) && (y_116 != z_116)))
                                _fail(z_116);
                              else
                                y_116 = z_116;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(w_116), not_null(y_116));
                            {
                              t = isect_0(t);
                              {
                                ATerm b_117 = NULL;
                                t = strings_to_vars_0(t);
                                {
                                  a_117 = t;
                                  {
                                    if(((p_116 != NULL) && (p_116 != a_117)))
                                      _fail(a_117);
                                    else
                                      p_116 = a_117;
                                    {
                                      t = new_0(t);
                                      {
                                        b_117 = t;
                                        if(((q_116 != NULL) && (q_116 != b_117)))
                                          _fail(b_117);
                                        else
                                          q_116 = b_117;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = n_30;
    {
      ATerm d_117 = NULL;
      t = not_null(b_116);
      {
        t = x_0(t);
        {
          d_117 = t;
          if(((c_117 != NULL) && (c_117 != d_117)))
            _fail(d_117);
          else
            c_117 = d_117;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(c_117), (ATerm) ATmakeAppl(sym_Op_2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_u_30, (ATerm) ATinsert(CheckATermList(not_null(p_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_116))))), (ATerm) ATmakeAppl(sym_Op_2, term_t_30, not_null(o_116)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(b_116), not_null(c_116), (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_116), not_null(f_116), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_w_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(b_116))))), (ATerm)ATmakeAppl(sym_Op_2, term_t_30, not_null(o_116)), (ATerm) ATmakeAppl(sym_Op_2, term_u_30, (ATerm) ATinsert(CheckATermList(not_null(p_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_116))))), not_null(i_116)))));
    }
    return(t);
  }
  ATerm r_117 (ATerm t)
  {
    ATerm i_117 = NULL,o_117 = NULL;
    ATerm x_30;
    x_30 = t;
    {
      ATerm j_117 = NULL,l_117 = NULL,n_117 = NULL;
      ATerm y_30;
      y_30 = t;
      {
        ATerm k_117 = NULL;
        t = term_s_27;
        {
          t = w_0(t);
          {
            k_117 = t;
            if(((j_117 != NULL) && (j_117 != k_117)))
              _fail(k_117);
            else
              j_117 = k_117;
          }
        }
      }
      t = y_30;
      {
        ATerm m_117 = NULL;
        t = not_null(e_116);
        {
          t = tvars_0(t);
          {
            m_117 = t;
            if(((l_117 != NULL) && (l_117 != m_117)))
              _fail(m_117);
            else
              l_117 = m_117;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_117), not_null(l_117));
          {
            t = isect_0(t);
            {
              t = strings_to_vars_0(t);
              {
                n_117 = t;
                if(((i_117 != NULL) && (i_117 != n_117)))
                  _fail(n_117);
                else
                  i_117 = n_117;
              }
            }
          }
        }
      }
    }
    t = x_30;
    {
      ATerm p_117 = NULL;
      t = not_null(b_116);
      {
        t = x_0(t);
        {
          p_117 = t;
          if(((o_117 != NULL) && (o_117 != p_117)))
            _fail(p_117);
          else
            o_117 = p_117;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(o_117), (ATerm) ATmakeAppl(sym_Op_2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, term_p_30), (ATerm) ATmakeAppl(sym_Op_2, term_t_30, not_null(i_117)))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(b_116), not_null(c_116), (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_116), term_z_30, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, term_w_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(b_116))))), (ATerm)ATmakeAppl(sym_Op_2, term_t_30, not_null(i_117)), term_p_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_116), term_g_30)))));
    }
    return(t);
  }
  a_116 = t;
  u_115 :
  if(match_cons(a_116, sym_RDef_3))
    {
      b_116 = ATgetArgument(a_116, 0);
      c_116 = ATgetArgument(a_116, 1);
      d_116 = ATgetArgument(a_116, 2);
      v_115 :
      if(match_cons(d_116, sym_Rule_3))
        {
          e_116 = ATgetArgument(d_116, 0);
          f_116 = ATgetArgument(d_116, 1);
          i_116 = ATgetArgument(d_116, 2);
          w_115 :
          if(match_cons(f_116, sym_Op_2))
            {
              g_116 = ATgetArgument(f_116, 0);
              h_116 = ATgetArgument(f_116, 1);
              x_115 :
              if(((ATermList) h_116 == ATempty))
                {
                  y_115 :
                  if(match_string(g_116, "Undefined"))
                    {
                      ATerm a_31 = t;
                      int b_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_117(t);
                          LocalPopChoice(b_31);
                        }
                      else
                        {
                          t = a_31;
                          t = r_117(t);
                        }
                    }
                  else
                    {
                      t = q_117(t);
                    }
                }
              else
                {
                  z_115 :
                  t = q_117(t);
                }
            }
          else
            {
              t = q_117(t);
            }
        }
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
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL;
  k_118 = t;
  i_118 :
  if(match_cons(k_118, sym__2))
    {
      l_118 = ATgetArgument(k_118, 0);
      n_118 = ATgetArgument(k_118, 1);
      j_118 :
      if(match_cons(l_118, sym_OverrideDynamicRules_1))
        {
          m_118 = ATgetArgument(l_118, 0);
          {
            t = not_null(m_118);
            {
              ATerm y_5 (ATerm t)
              {
                ATerm z_5 (ATerm t)
                {
                  t = not_null(n_118);
                  return(t);
                }
                ATerm a_6 (ATerm t)
                {
                  ATerm q_118 = NULL;
                  q_118 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(q_118)))));
                  return(t);
                }
                t = SplitDynamicRule_2(t, z_5, a_6);
                return(t);
              }
              t = map_1(t, y_5);
              t = unzip_0(t);
            }
          }
        }
      else
        {
          if(match_cons(l_118, sym_DynamicRules_1))
            {
              m_118 = ATgetArgument(l_118, 0);
              {
                t = not_null(m_118);
                {
                  ATerm b_6 (ATerm t)
                  {
                    ATerm c_6 (ATerm t)
                    {
                      t = not_null(n_118);
                      return(t);
                    }
                    ATerm d_6 (ATerm t)
                    {
                      ATerm u_118 = NULL;
                      u_118 = t;
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_f_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(u_118)))));
                      return(t);
                    }
                    t = SplitDynamicRule_2(t, c_6, d_6);
                    return(t);
                  }
                  t = map_1(t, b_6);
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
ATerm dist_scope_1 (ATerm t, ATerm e_109 (ATerm))
{
  ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL;
  f_119 = t;
  d_119 :
  if(match_cons(f_119, sym__2))
    {
      g_119 = ATgetArgument(f_119, 0);
      j_119 = ATgetArgument(f_119, 1);
      e_119 :
      if(match_cons(g_119, sym_Scope_2))
        {
          h_119 = ATgetArgument(g_119, 0);
          i_119 = ATgetArgument(g_119, 1);
          {
            ATerm n_119 = NULL;
            ATerm o_119 = NULL,q_119 = NULL;
            ATerm p_119 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_119), not_null(j_119));
            {
              t = union_0(t);
              {
                p_119 = t;
                if(((o_119 != NULL) && (o_119 != p_119)))
                  _fail(p_119);
                else
                  o_119 = p_119;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_119), not_null(o_119));
              {
                t = e_109(t);
                {
                  q_119 = t;
                  if(((n_119 != NULL) && (n_119 != q_119)))
                    _fail(q_119);
                  else
                    n_119 = q_119;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(h_119), not_null(n_119));
          }
        }
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
ATerm one_dist_1 (ATerm t, ATerm q_101 (ATerm))
{
  ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL;
  x_119 = t;
  w_119 :
  if(match_cons(x_119, sym__2))
    {
      y_119 = ATgetArgument(x_119, 0);
      z_119 = ATgetArgument(x_119, 1);
      {
        t = not_null(y_119);
        {
          ATerm e_6 (ATerm t)
          {
            ATerm c_120 = NULL;
            c_120 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_120), not_null(z_119));
              t = q_101(t);
            }
            return(t);
          }
          t = _one(t, e_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_oncetd_1 (ATerm t, ATerm i_102 (ATerm))
{
  ATerm g_120 (ATerm t)
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_102(t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = one_dist_1(t, g_120);
      }
    return(t);
  }
  t = g_120(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm c_109 (ATerm))
{
  ATerm h_120 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      ATerm i_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_109(t);
          LocalPopChoice(j_31);
        }
      else
        {
          t = i_31;
          t = dist_scope_1(t, h_120);
        }
      return(t);
    }
    t = env_oncetd_1(t, f_6);
    return(t);
  }
  t = h_120(t);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm o_120 = NULL,p_120 = NULL,q_120 = NULL;
  o_120 = t;
  n_120 :
  if(((ATgetType(o_120) == AT_LIST) && ((ATermList) o_120 != ATempty)))
    {
      p_120 = ATgetFirst((ATermList) o_120);
      q_120 = (ATerm) ATgetNext((ATermList) o_120);
      {
        ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL,w_120 = NULL;
        ATerm x_120 = NULL;
        t = not_null(p_120);
        {
          ATerm b_121 = NULL;
          t = tvars_0(t);
          {
            x_120 = t;
            {
              if(((t_120 != NULL) && (t_120 != x_120)))
                _fail(x_120);
              else
                t_120 = x_120;
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_120), not_null(t_120));
                {
                  ATerm g_6 (ATerm t)
                  {
                    ATerm y_120 = NULL,z_120 = NULL,a_121 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      y_120 = t;
                      l_120 :
                      if(match_cons(y_120, sym__2))
                        {
                          z_120 = ATgetArgument(y_120, 0);
                          a_121 = ATgetArgument(y_120, 1);
                          {
                            if(((v_120 != NULL) && (v_120 != z_120)))
                              _fail(z_120);
                            else
                              v_120 = z_120;
                            {
                              if(((u_120 != NULL) && (u_120 != a_121)))
                                _fail(a_121);
                              else
                                u_120 = a_121;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(v_120));
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
                  t = split_dynamic_rule_1(t, g_6);
                  {
                    b_121 = t;
                    if(((w_120 != NULL) && (w_120 != b_121)))
                      _fail(b_121);
                    else
                      w_120 = b_121;
                  }
                }
              }
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_120)), not_null(w_120)), not_null(q_120));
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
ATerm repeat_2 (ATerm t, ATerm q_107 (ATerm), ATerm r_107 (ATerm))
{
  ATerm g_121 (ATerm t)
  {
    ATerm l_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_107(t);
        t = g_121(t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = l_31;
        t = r_107(t);
      }
    return(t);
  }
  t = g_121(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm t_107 (ATerm))
{
  t = repeat_2(t, t_107, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm y_100 (ATerm))
{
  ATerm h_121 (ATerm t)
  {
    t = y_100(t);
    {
      ATerm p_31 = t;
      int s_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(s_31);
        }
      else
        {
          t = p_31;
          t = Cons_2(t, _id, h_121);
        }
    }
    return(t);
  }
  t = h_121(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    t = repeat_1(t, lift_dynamic_rule_0);
    return(t);
  }
  t = listtd_1(t, h_6);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL,p_121 = NULL,q_121 = NULL;
  o_121 = t;
  k_121 :
  if(match_cons(o_121, sym_DynRuleScope_2))
    {
      p_121 = ATgetArgument(o_121, 0);
      q_121 = ATgetArgument(o_121, 1);
      l_121 :
      if(((ATgetType(p_121) == AT_LIST) && ((ATermList) p_121 != ATempty)))
        {
          m_121 = ATgetFirst((ATermList) p_121);
          n_121 = (ATerm) ATgetNext((ATermList) p_121);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_u_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(n_121), not_null(q_121))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_121)))));
        }
      else
        {
          if(((ATermList) p_121 == ATempty))
            {
              t = not_null(q_121);
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
  ATerm i_6 (ATerm t)
  {
    t = try_1(t, DefDynamicRuleScope_0);
    return(t);
  }
  t = topdown_1(t, i_6);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm k_6 (ATerm t)
    {
      ATerm l_6 (ATerm t)
      {
        ATerm m_6 (ATerm t)
        {
          ATerm n_6 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, n_6);
          return(t);
        }
        t = Cons_2(t, m_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, l_6);
      return(t);
    }
    t = Cons_2(t, _id, k_6);
    return(t);
  }
  t = Specification_1(t, j_6);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL;
  a_122 = t;
  z_121 :
  if(match_cons(a_122, sym_ScopeDefault_1))
    {
      b_122 = ATgetArgument(a_122, 0);
      {
        ATerm d_122 = NULL;
        ATerm e_122 = NULL;
        t = not_null(b_122);
        {
          t = tvars_0(t);
          {
            e_122 = t;
            if(((d_122 != NULL) && (d_122 != e_122)))
              _fail(e_122);
            else
              d_122 = e_122;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(d_122), not_null(b_122));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm m_76 (ATerm))
{
  ATerm m_122 = NULL,n_122 = NULL;
  m_122 = t;
  l_122 :
  if(match_cons(m_122, sym_DynamicRules_1))
    {
      n_122 = ATgetArgument(m_122, 0);
      {
        ATerm q_122 = NULL,s_122 = NULL;
        ATerm r_122 = NULL;
        t = SSLgetAnnotations(not_null(m_122));
        {
          r_122 = t;
          if(((q_122 != NULL) && (q_122 != r_122)))
            _fail(r_122);
          else
            q_122 = r_122;
        }
        {
          t = not_null(n_122);
          {
            ATerm u_122 = NULL;
            t = m_76(t);
            {
              s_122 = t;
              {
                ATerm v_122 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(s_122)), not_null(q_122));
                {
                  v_122 = t;
                  if(((u_122 != NULL) && (u_122 != v_122)))
                    _fail(v_122);
                  else
                    u_122 = v_122;
                }
                t = not_null(u_122);
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
ATerm Scope_2 (ATerm t, ATerm j_79 (ATerm), ATerm k_79 (ATerm))
{
  ATerm g_123 = NULL,h_123 = NULL,i_123 = NULL;
  g_123 = t;
  f_123 :
  if(match_cons(g_123, sym_Scope_2))
    {
      h_123 = ATgetArgument(g_123, 0);
      i_123 = ATgetArgument(g_123, 1);
      {
        ATerm m_123 = NULL,o_123 = NULL;
        ATerm n_123 = NULL;
        t = SSLgetAnnotations(not_null(g_123));
        {
          n_123 = t;
          if(((m_123 != NULL) && (m_123 != n_123)))
            _fail(n_123);
          else
            m_123 = n_123;
        }
        {
          t = not_null(h_123);
          {
            ATerm q_123 = NULL;
            t = j_79(t);
            {
              o_123 = t;
              {
                t = not_null(i_123);
                {
                  ATerm s_123 = NULL;
                  t = k_79(t);
                  {
                    q_123 = t;
                    {
                      ATerm t_123 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(o_123), not_null(q_123)), not_null(m_123));
                      {
                        t_123 = t;
                        if(((s_123 != NULL) && (s_123 != t_123)))
                          _fail(t_123);
                        else
                          s_123 = t_123;
                      }
                      t = not_null(s_123);
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
ATerm tboundin_3 (ATerm t, ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_80, m_80);
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      t = DynamicRules_1(t, m_80);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm b_124 = NULL,c_124 = NULL;
  b_124 = t;
  a_124 :
  if(match_cons(b_124, sym_DynamicRules_1))
    {
      c_124 = ATgetArgument(b_124, 0);
      {
        t = not_null(c_124);
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
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL;
  m_124 = t;
  h_124 :
  if(match_cons(m_124, sym_LRule_1))
    {
      n_124 = ATgetArgument(m_124, 0);
      i_124 :
      if(match_cons(n_124, sym_Rule_3))
        {
          j_124 = ATgetArgument(n_124, 0);
          k_124 = ATgetArgument(n_124, 1);
          l_124 = ATgetArgument(n_124, 2);
          {
            t = not_null(j_124);
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
      if(match_cons(m_124, sym_Scope_2))
        {
          n_124 = ATgetArgument(m_124, 0);
          o_124 = ATgetArgument(m_124, 1);
          t = not_null(n_124);
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
  ATerm y_124 = NULL,z_124 = NULL;
  y_124 = t;
  x_124 :
  if(match_cons(y_124, sym_Var_1))
    {
      z_124 = ATgetArgument(y_124, 0);
      t = (ATerm) ATinsert(ATempty, not_null(z_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm m_95 (ATerm))
{
  ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL;
  e_125 = t;
  d_125 :
  if(match_cons(e_125, sym__2))
    {
      f_125 = ATgetArgument(e_125, 0);
      g_125 = ATgetArgument(e_125, 1);
      {
        t = not_null(f_125);
        {
          ATerm k_125 (ATerm t)
          {
            ATerm x_31 = t;
            int y_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_125);
                LocalPopChoice(y_31);
              }
            else
              {
                t = x_31;
                {
                  ATerm z_31 = t;
                  int a_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_6 (ATerm t)
                      {
                        t = not_null(g_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_95, o_6);
                      t = k_125(t);
                      LocalPopChoice(a_32);
                    }
                  else
                    {
                      t = z_31;
                      t = Cons_2(t, _id, k_125);
                    }
                }
              }
            return(t);
          }
          t = k_125(t);
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
ATerm foldr_3 (ATerm t, ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm))
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_94(t);
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL;
        p_125 = t;
        o_125 :
        if(((ATgetType(p_125) == AT_LIST) && ((ATermList) p_125 != ATempty)))
          {
            q_125 = ATgetFirst((ATermList) p_125);
            r_125 = (ATerm) ATgetNext((ATermList) p_125);
            {
              ATerm u_125 = NULL,w_125 = NULL;
              ATerm d_32;
              d_32 = t;
              {
                ATerm v_125 = NULL;
                t = not_null(q_125);
                {
                  t = h_94(t);
                  {
                    v_125 = t;
                    if(((u_125 != NULL) && (u_125 != v_125)))
                      _fail(v_125);
                    else
                      u_125 = v_125;
                  }
                }
              }
              t = d_32;
              {
                ATerm x_125 = NULL;
                t = not_null(r_125);
                {
                  t = foldr_3(t, f_94, g_94, h_94);
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
                  t = g_94(t);
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
ATerm crush_3 (ATerm t, ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm))
{
  ATerm f_126 = NULL;
  ATerm h_126 = NULL;
  f_126 = t;
  {
    ATerm i_126 = NULL;
    ATerm k_126 = NULL,l_126 = NULL,m_126 = NULL;
    t = not_null(f_126);
    {
      i_126 = t;
      {
        t = SSL_explode_term(not_null(i_126));
        {
          k_126 = t;
          e_126 :
          if(match_cons(k_126, sym__2))
            {
              l_126 = ATgetArgument(k_126, 0);
              m_126 = ATgetArgument(k_126, 1);
              if(((h_126 != NULL) && (h_126 != m_126)))
                _fail(m_126);
              else
                h_126 = m_126;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_126);
      t = foldr_3(t, x_95, y_95, z_95);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL;
  t_126 = t;
  r_126 :
  if(match_cons(t_126, sym__2))
    {
      u_126 = ATgetArgument(t_126, 0);
      v_126 = ATgetArgument(t_126, 1);
      s_126 :
      if(((ATgetType(v_126) == AT_LIST) && ((ATermList) v_126 != ATempty)))
        {
          w_126 = ATgetFirst((ATermList) v_126);
          x_126 = (ATerm) ATgetNext((ATermList) v_126);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_126)), not_null(w_126)), not_null(x_126));
        }
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
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL;
  m_127 = t;
  k_127 :
  if(((ATgetType(m_127) == AT_LIST) && ((ATermList) m_127 != ATempty)))
    {
      n_127 = ATgetFirst((ATermList) m_127);
      q_127 = (ATerm) ATgetNext((ATermList) m_127);
      l_127 :
      if(match_cons(n_127, sym__2))
        {
          o_127 = ATgetArgument(n_127, 0);
          p_127 = ATgetArgument(n_127, 1);
          {
            ATerm u_127 = NULL,v_127 = NULL,b_128 = NULL,h_128 = NULL;
            ATerm e_32;
            e_32 = t;
            {
              ATerm w_127 = NULL;
              ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL;
              t = not_null(p_127);
              {
                w_127 = t;
                {
                  t = SSL_explode_term(not_null(w_127));
                  {
                    y_127 = t;
                    f_127 :
                    if(match_cons(y_127, sym__2))
                      {
                        z_127 = ATgetArgument(y_127, 0);
                        a_128 = ATgetArgument(y_127, 1);
                        {
                          if(((u_127 != NULL) && (u_127 != z_127)))
                            _fail(z_127);
                          else
                            u_127 = z_127;
                          if(((v_127 != NULL) && (v_127 != a_128)))
                            _fail(a_128);
                          else
                            v_127 = a_128;
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
            t = e_32;
            {
              ATerm f_32;
              f_32 = t;
              {
                ATerm c_128 = NULL;
                ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL;
                t = not_null(o_127);
                {
                  c_128 = t;
                  {
                    t = SSL_explode_term(not_null(c_128));
                    {
                      e_128 = t;
                      i_127 :
                      if(match_cons(e_128, sym__2))
                        {
                          f_128 = ATgetArgument(e_128, 0);
                          g_128 = ATgetArgument(e_128, 1);
                          {
                            if(((u_127 != NULL) && (u_127 != f_128)))
                              _fail(f_128);
                            else
                              u_127 = f_128;
                            if(((b_128 != NULL) && (b_128 != g_128)))
                              _fail(g_128);
                            else
                              b_128 = g_128;
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
              t = f_32;
              {
                ATerm i_128 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(b_128), not_null(v_127));
                {
                  t = zip_1(t, _id);
                  {
                    i_128 = t;
                    if(((h_128 != NULL) && (h_128 != i_128)))
                      _fail(i_128);
                    else
                      h_128 = i_128;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_128), not_null(q_127));
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
  ATerm s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL;
  s_128 = t;
  q_128 :
  if(((ATgetType(s_128) == AT_LIST) && ((ATermList) s_128 != ATempty)))
    {
      t_128 = ATgetFirst((ATermList) s_128);
      w_128 = (ATerm) ATgetNext((ATermList) s_128);
      r_128 :
      if(match_cons(t_128, sym__2))
        {
          u_128 = ATgetArgument(t_128, 0);
          v_128 = ATgetArgument(t_128, 1);
          {
            ATerm y_128 = NULL;
            if(((u_128 != NULL) && (u_128 != v_128)))
              _fail(v_128);
            else
              u_128 = v_128;
            {
              if(((y_128 != NULL) && (y_128 != w_128)))
                _fail(w_128);
              else
                y_128 = w_128;
              t = not_null(y_128);
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
ATerm while_not_2 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm))
{
  ATerm a_129 (ATerm t)
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_108(t);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        {
          t = i_108(t);
          t = a_129(t);
        }
      }
    return(t);
  }
  t = a_129(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm))
{
  t = k_108(t);
  t = while_not_2(t, l_108, m_108);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_129 = NULL,e_129 = NULL,f_129 = NULL;
  d_129 = t;
  c_129 :
  if(match_cons(d_129, sym__2))
    {
      e_129 = ATgetArgument(d_129, 0);
      f_129 = ATgetArgument(d_129, 1);
      if(((e_129 != NULL) && (e_129 != f_129)))
        _fail(f_129);
      else
        e_129 = f_129;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm k_95 (ATerm), ATerm l_95 (ATerm))
{
  ATerm l_129 = NULL,m_129 = NULL,n_129 = NULL;
  l_129 = t;
  k_129 :
  if(((ATgetType(l_129) == AT_LIST) && ((ATermList) l_129 != ATempty)))
    {
      m_129 = ATgetFirst((ATermList) l_129);
      n_129 = (ATerm) ATgetNext((ATermList) l_129);
      {
        t = l_95(t);
        {
          ATerm p_6 (ATerm t)
          {
            ATerm q_129 = NULL;
            q_129 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_129), not_null(q_129));
              t = k_95(t);
            }
            return(t);
          }
          t = fetch_1(t, p_6);
        }
        t = not_null(n_129);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm w_129 = NULL,x_129 = NULL,y_129 = NULL;
  w_129 = t;
  v_129 :
  if(match_cons(w_129, sym__2))
    {
      x_129 = ATgetArgument(w_129, 0);
      y_129 = ATgetArgument(w_129, 1);
      {
        t = not_null(x_129);
        {
          ATerm c_130 (ATerm t)
          {
            ATerm i_32 = t;
            int j_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(j_32);
              }
            else
              {
                t = i_32;
                {
                  ATerm k_32 = t;
                  int l_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_6 (ATerm t)
                      {
                        t = not_null(y_129);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_95, q_6);
                      t = c_130(t);
                      LocalPopChoice(l_32);
                    }
                  else
                    {
                      t = k_32;
                      t = Cons_2(t, _id, c_130);
                    }
                }
              }
            return(t);
          }
          t = c_130(t);
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
  ATerm m_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(n_32);
    }
  else
    {
      t = m_32;
      {
        ATerm r_6 (ATerm t)
        {
          ATerm e_130 = NULL;
          e_130 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(e_130));
          return(t);
        }
        ATerm s_6 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          ATerm o_32 = t;
          int p_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_6 (ATerm t)
              {
                ATerm q_32 = t;
                int r_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(r_32);
                  }
                else
                  {
                    t = q_32;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, u_6);
              LocalPopChoice(p_32);
            }
          else
            {
              t = o_32;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, r_6, s_6, t_6);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm k_130 (ATerm t)
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_81(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_130 = NULL;
              ATerm w_32;
              w_32 = t;
              {
                ATerm j_130 = NULL;
                t = t_81(t);
                {
                  j_130 = t;
                  if(((i_130 != NULL) && (i_130 != j_130)))
                    _fail(j_130);
                  else
                    i_130 = j_130;
                }
              }
              t = w_32;
              {
                ATerm v_6 (ATerm t)
                {
                  ATerm x_6 (ATerm t)
                  {
                    t = not_null(i_130);
                    return(t);
                  }
                  t = split_2(t, k_130, x_6);
                  t = diff_0(t);
                  return(t);
                }
                ATerm w_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = u_81(t, v_6, k_130, w_6);
                {
                  ATerm y_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, y_6, union_0, _id);
                }
              }
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              {
                ATerm z_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, z_6, union_0, k_130);
              }
            }
        }
      }
    return(t);
  }
  t = k_130(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, a_7, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL;
  q_130 = t;
  o_130 :
  if(match_cons(q_130, sym_LRule_1))
    {
      r_130 = ATgetArgument(q_130, 0);
      p_130 :
      if(match_cons(r_130, sym_Rule_3))
        {
          s_130 = ATgetArgument(r_130, 0);
          t_130 = ATgetArgument(r_130, 1);
          u_130 = ATgetArgument(r_130, 2);
          {
            ATerm y_130 = NULL;
            ATerm z_130 = NULL;
            t = not_null(s_130);
            {
              t = tvars_0(t);
              {
                z_130 = t;
                if(((y_130 != NULL) && (y_130 != z_130)))
                  _fail(z_130);
                else
                  y_130 = z_130;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_130), not_null(t_130), not_null(u_130))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm k_104 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    t = bottomup_1(t, k_104);
    return(t);
  }
  t = _all(t, b_7);
  t = k_104(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm d_7 (ATerm t)
    {
      ATerm z_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefLRule_0(t);
          LocalPopChoice(a_33);
        }
      else
        {
          t = z_32;
          t = DefScopeDefault_0(t);
        }
      return(t);
    }
    t = try_1(t, d_7);
    return(t);
  }
  t = bottomup_1(t, c_7);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm e_131 = NULL,f_131 = NULL;
  e_131 = t;
  d_131 :
  if(match_cons(e_131, sym_Var_1))
    {
      f_131 = ATgetArgument(e_131, 0);
      t = not_null(f_131);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL,p_131 = NULL;
  l_131 = t;
  j_131 :
  if(match_cons(l_131, sym__2))
    {
      m_131 = ATgetArgument(l_131, 0);
      n_131 = ATgetArgument(l_131, 1);
      k_131 :
      if(((ATgetType(n_131) == AT_LIST) && ((ATermList) n_131 != ATempty)))
        {
          o_131 = ATgetFirst((ATermList) n_131);
          p_131 = (ATerm) ATgetNext((ATermList) n_131);
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_131), not_null(p_131));
        }
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
  ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL,b_132 = NULL,c_132 = NULL,d_132 = NULL;
  x_131 = t;
  u_131 :
  if(match_cons(x_131, sym__2))
    {
      y_131 = ATgetArgument(x_131, 0);
      z_131 = ATgetArgument(x_131, 1);
      v_131 :
      if(((ATgetType(z_131) == AT_LIST) && ((ATermList) z_131 != ATempty)))
        {
          a_132 = ATgetFirst((ATermList) z_131);
          d_132 = (ATerm) ATgetNext((ATermList) z_131);
          w_131 :
          if(match_cons(a_132, sym__2))
            {
              b_132 = ATgetArgument(a_132, 0);
              c_132 = ATgetArgument(a_132, 1);
              {
                ATerm f_132 = NULL;
                if(((y_131 != NULL) && (y_131 != b_132)))
                  _fail(b_132);
                else
                  y_131 = b_132;
                {
                  if(((f_132 != NULL) && (f_132 != c_132)))
                    _fail(c_132);
                  else
                    f_132 = c_132;
                  t = not_null(f_132);
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
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm l_132 = NULL;
  ATerm n_132 = NULL,o_132 = NULL;
  l_132 = t;
  {
    ATerm p_132 = NULL;
    t = not_null(l_132);
    {
      ATerm q_132 = NULL;
      t = o_83(t);
      {
        p_132 = t;
        {
          if(((n_132 != NULL) && (n_132 != p_132)))
            _fail(p_132);
          else
            n_132 = p_132;
          {
            t = p_83(t);
            {
              q_132 = t;
              if(((o_132 != NULL) && (o_132 != q_132)))
                _fail(q_132);
              else
                o_132 = q_132;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_132), not_null(o_132));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm u_132 (ATerm t)
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_106(t);
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        t = _all(t, u_132);
      }
    return(t);
  }
  t = u_132(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL;
  x_132 = t;
  w_132 :
  if(match_cons(x_132, sym__2))
    {
      y_132 = ATgetArgument(x_132, 0);
      z_132 = ATgetArgument(x_132, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_132)), not_null(y_132));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL,k_133 = NULL,l_133 = NULL,m_133 = NULL,n_133 = NULL;
  h_133 = t;
  e_133 :
  if(match_cons(h_133, sym__2))
    {
      i_133 = ATgetArgument(h_133, 0);
      l_133 = ATgetArgument(h_133, 1);
      f_133 :
      if(((ATgetType(i_133) == AT_LIST) && ((ATermList) i_133 != ATempty)))
        {
          j_133 = ATgetFirst((ATermList) i_133);
          k_133 = (ATerm) ATgetNext((ATermList) i_133);
          g_133 :
          if(((ATgetType(l_133) == AT_LIST) && ((ATermList) l_133 != ATempty)))
            {
              m_133 = ATgetFirst((ATermList) l_133);
              n_133 = (ATerm) ATgetNext((ATermList) l_133);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_133), not_null(m_133)), (ATerm) ATmakeAppl(sym__2, not_null(k_133), not_null(n_133)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm x_133 = NULL,y_133 = NULL,z_133 = NULL;
  x_133 = t;
  u_133 :
  if(match_cons(x_133, sym__2))
    {
      y_133 = ATgetArgument(x_133, 0);
      z_133 = ATgetArgument(x_133, 1);
      v_133 :
      if(((ATermList) y_133 == ATempty))
        {
          w_133 :
          if(((ATermList) z_133 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm))
{
  ATerm b_134 (ATerm t)
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_98(t);
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        {
          t = g_98(t);
          {
            t = _2(t, i_98, b_134);
            t = h_98(t);
          }
        }
      }
    return(t);
  }
  t = b_134(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm k_98 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, k_98);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL,j_134 = NULL;
  g_134 = t;
  f_134 :
  if(match_cons(g_134, sym__2))
    {
      h_134 = ATgetArgument(g_134, 0);
      i_134 = ATgetArgument(g_134, 1);
      {
        ATerm l_134 = NULL;
        if(((l_134 != NULL) && (l_134 != i_134)))
          _fail(i_134);
        else
          l_134 = i_134;
      }
    }
  else
    {
      if(match_cons(g_134, sym__3))
        {
          h_134 = ATgetArgument(g_134, 0);
          i_134 = ATgetArgument(g_134, 1);
          j_134 = ATgetArgument(g_134, 2);
          {
            ATerm r_134 = NULL;
            ATerm s_134 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_134), not_null(i_134));
            {
              t = zip_1(t, _id);
              {
                s_134 = t;
                if(((r_134 != NULL) && (r_134 != s_134)))
                  _fail(s_134);
                else
                  r_134 = s_134;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_134), not_null(j_134));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm q_83 (ATerm), ATerm r_83 (ATerm))
{
  ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL;
  t = subs_args_0(t);
  {
    y_134 = t;
    x_134 :
    if(match_cons(y_134, sym__2))
      {
        z_134 = ATgetArgument(y_134, 0);
        a_135 = ATgetArgument(y_134, 1);
        {
          t = not_null(a_135);
          {
            ATerm e_7 (ATerm t)
            {
              ATerm f_7 (ATerm t)
              {
                t = not_null(z_134);
                return(t);
              }
              t = SubsVar_2(t, q_83, f_7);
              t = r_83(t);
              return(t);
            }
            t = alltd_1(t, e_7);
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
ATerm substitute_1 (ATerm t, ATerm s_83 (ATerm))
{
  t = substitute_2(t, s_83, _id);
  return(t);
}
ATerm tsubs_0 (ATerm t)
{
  t = substitute_1(t, IsVar_0);
  return(t);
}
ATerm OpName_0 (ATerm t)
{
  ATerm h_135 = NULL,i_135 = NULL,j_135 = NULL,k_135 = NULL;
  h_135 = t;
  f_135 :
  if(match_cons(h_135, sym_OpDecl_2))
    {
      i_135 = ATgetArgument(h_135, 0);
      j_135 = ATgetArgument(h_135, 1);
      g_135 :
      if(match_cons(j_135, sym_ConstType_1))
        {
          k_135 = ATgetArgument(j_135, 0);
          t = not_null(i_135);
        }
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
  ATerm p_135 = NULL,q_135 = NULL;
  p_135 = t;
  o_135 :
  if(match_cons(p_135, sym_Constructors_1))
    {
      q_135 = ATgetArgument(p_135, 0);
      {
        t = not_null(q_135);
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
  ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
  w_135 = t;
  u_135 :
  if(match_cons(w_135, sym_Overlay_3))
    {
      x_135 = ATgetArgument(w_135, 0);
      y_135 = ATgetArgument(w_135, 1);
      z_135 = ATgetArgument(w_135, 2);
      v_135 :
      if(((ATermList) y_135 == ATempty))
        {
          t = not_null(x_135);
        }
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
  ATerm g_136 = NULL,h_136 = NULL;
  g_136 = t;
  f_136 :
  if(match_cons(g_136, sym_Overlays_1))
    {
      h_136 = ATgetArgument(g_136, 0);
      {
        t = not_null(h_136);
        t = filter_1(t, OLName_0);
      }
    }
  else
    {
      if(match_cons(g_136, sym_Signature_1))
        {
          h_136 = ATgetArgument(g_136, 0);
          {
            t = not_null(h_136);
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
ATerm filter_1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
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
            ATerm g_7 (ATerm t)
            {
              t = filter_1(t, j_93);
              return(t);
            }
            t = Cons_2(t, j_93, g_7);
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm o_136 = NULL,p_136 = NULL,q_136 = NULL;
              o_136 = t;
              n_136 :
              if(((ATgetType(o_136) == AT_LIST) && ((ATermList) o_136 != ATempty)))
                {
                  p_136 = ATgetFirst((ATermList) o_136);
                  q_136 = (ATerm) ATgetNext((ATermList) o_136);
                  {
                    t = not_null(q_136);
                    t = filter_1(t, j_93);
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
  ATerm x_136 = NULL,d_137 = NULL;
  ATerm l_33;
  l_33 = t;
  {
    ATerm c_137 = NULL;
    t = const_names_0(t);
    {
      ATerm h_7 (ATerm t)
      {
        ATerm y_136 = NULL,a_137 = NULL;
        ATerm m_33;
        m_33 = t;
        {
          ATerm z_136 = NULL;
          z_136 = t;
          if(((y_136 != NULL) && (y_136 != z_136)))
            _fail(z_136);
          else
            y_136 = z_136;
        }
        t = m_33;
        {
          ATerm b_137 = NULL;
          b_137 = t;
          if(((a_137 != NULL) && (a_137 != b_137)))
            _fail(b_137);
          else
            a_137 = b_137;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_136), (ATerm) ATmakeAppl(sym_Op_2, not_null(a_137), (ATerm) ATempty));
        }
        return(t);
      }
      t = map_1(t, h_7);
      {
        c_137 = t;
        if(((x_136 != NULL) && (x_136 != c_137)))
          _fail(c_137);
        else
          x_136 = c_137;
      }
    }
  }
  t = l_33;
  {
    ATerm e_137 = NULL;
    e_137 = t;
    if(((d_137 != NULL) && (d_137 != e_137)))
      _fail(e_137);
    else
      d_137 = e_137;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_136), not_null(d_137));
      t = tsubs_0(t);
    }
  }
  return(t);
}
ATerm MkSpec_0 (ATerm t)
{
  ATerm l_137 = NULL,m_137 = NULL,n_137 = NULL,o_137 = NULL;
  l_137 = t;
  k_137 :
  if(match_cons(l_137, sym__3))
    {
      m_137 = ATgetArgument(l_137, 0);
      n_137 = ATgetArgument(l_137, 1);
      o_137 = ATgetArgument(l_137, 2);
      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(o_137))), (ATerm) ATmakeAppl(sym_Overlays_1, not_null(n_137))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(m_137))))));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Combine_0 (ATerm t)
{
  ATerm a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL;
  a_138 = t;
  x_137 :
  if(match_cons(a_138, sym__2))
    {
      b_138 = ATgetArgument(a_138, 0);
      f_138 = ATgetArgument(a_138, 1);
      y_137 :
      if(match_cons(b_138, sym__3))
        {
          c_138 = ATgetArgument(b_138, 0);
          d_138 = ATgetArgument(b_138, 1);
          e_138 = ATgetArgument(b_138, 2);
          z_137 :
          if(match_cons(f_138, sym__3))
            {
              g_138 = ATgetArgument(f_138, 0);
              h_138 = ATgetArgument(f_138, 1);
              i_138 = ATgetArgument(f_138, 2);
              {
                ATerm p_138 = NULL,r_138 = NULL,t_138 = NULL;
                ATerm n_33;
                n_33 = t;
                {
                  ATerm q_138 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_138), not_null(g_138));
                  {
                    t = conc_0(t);
                    {
                      q_138 = t;
                      if(((p_138 != NULL) && (p_138 != q_138)))
                        _fail(q_138);
                      else
                        p_138 = q_138;
                    }
                  }
                }
                t = n_33;
                {
                  ATerm o_33;
                  o_33 = t;
                  {
                    ATerm s_138 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_138), not_null(h_138));
                    {
                      t = conc_0(t);
                      {
                        s_138 = t;
                        if(((r_138 != NULL) && (r_138 != s_138)))
                          _fail(s_138);
                        else
                          r_138 = s_138;
                      }
                    }
                  }
                  t = o_33;
                  {
                    ATerm u_138 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_138), not_null(i_138));
                    {
                      t = conc_0(t);
                      {
                        u_138 = t;
                        if(((t_138 != NULL) && (t_138 != u_138)))
                          _fail(u_138);
                        else
                          t_138 = u_138;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(p_138), not_null(r_138), not_null(t_138));
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
  ATerm c_139 = NULL,d_139 = NULL;
  c_139 = t;
  b_139 :
  if(match_cons(c_139, sym_Sorts_1))
    {
      d_139 = ATgetArgument(c_139, 0);
      t = (ATerm) ATempty;
    }
  else
    {
      if(match_cons(c_139, sym_Constructors_1))
        {
          d_139 = ATgetArgument(c_139, 0);
          t = not_null(d_139);
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
  ATerm o_139 = NULL,p_139 = NULL;
  o_139 = t;
  n_139 :
  if(match_cons(o_139, sym_Overlays_1))
    {
      p_139 = ATgetArgument(o_139, 0);
      t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, not_null(p_139), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(o_139, sym_Rules_1))
        {
          p_139 = ATgetArgument(o_139, 0);
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(p_139));
        }
      else
        {
          if(match_cons(o_139, sym_Strategies_1))
            {
              p_139 = ATgetArgument(o_139, 0);
              t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATempty, (ATerm)ATempty, not_null(p_139));
            }
          else
            {
              if(match_cons(o_139, sym_Signature_1))
                {
                  p_139 = ATgetArgument(o_139, 0);
                  {
                    ATerm u_139 = NULL;
                    ATerm v_139 = NULL;
                    t = not_null(p_139);
                    {
                      t = normalize_sigs_0(t);
                      {
                        v_139 = t;
                        if(((u_139 != NULL) && (u_139 != v_139)))
                          _fail(v_139);
                        else
                          u_139 = v_139;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym__3, not_null(u_139), (ATerm)ATempty, (ATerm) ATempty);
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
  ATerm d_140 = NULL,e_140 = NULL;
  d_140 = t;
  c_140 :
  if(match_cons(d_140, sym_Specification_1))
    {
      e_140 = ATgetArgument(d_140, 0);
      t = not_null(e_140);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineSugar_0 (ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm j_7 (ATerm t)
    {
      ATerm j_140 = NULL,k_140 = NULL;
      j_140 = t;
      i_140 :
      if(match_cons(j_140, sym_DefaultVarDec_1))
        {
          k_140 = ATgetArgument(j_140, 0);
          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(k_140), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_19), term_h_19));
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, j_7);
    return(t);
  }
  t = topdown_1(t, i_7);
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
        ATerm k_7 (ATerm t)
        {
          t = term_p_33;
          return(t);
        }
        t = foldr_2(t, k_7, Combine_0);
        {
          t = MkSpec_0(t);
          {
            t = Specification_1(t, vars_to_consts_0);
            {
              t = define_lrules_0(t);
              {
                t = LiftDynamicRules_0(t);
                {
                  ATerm l_7 (ATerm t)
                  {
                    t = try_1(t, HL_0);
                    return(t);
                  }
                  t = topdown_1(t, l_7);
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
ATerm frontend_transformation_0 (ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    t = term_q_33;
    return(t);
  }
  t = timing_1(t, m_7);
  {
    t = normalize_spec_0(t);
    {
      ATerm n_7 (ATerm t)
      {
        t = term_r_33;
        return(t);
      }
      t = timing_1(t, n_7);
      {
        ATerm s_33;
        s_33 = t;
        t = spec_use_def_0(t);
        t = s_33;
        {
          ATerm o_7 (ATerm t)
          {
            t = term_t_33;
            return(t);
          }
          t = timing_1(t, o_7);
          {
            t = ExpandOverlays_0(t);
            {
              ATerm p_7 (ATerm t)
              {
                t = term_u_33;
                return(t);
              }
              t = timing_1(t, p_7);
              {
                t = CheckConstructors_0(t);
                {
                  ATerm q_7 (ATerm t)
                  {
                    t = term_v_33;
                    return(t);
                  }
                  t = timing_1(t, q_7);
                  {
                    t = RulesToSdefs_0(t);
                    {
                      ATerm r_7 (ATerm t)
                      {
                        t = term_w_33;
                        return(t);
                      }
                      t = timing_1(t, r_7);
                      {
                        t = DesugarListMatching_0(t);
                        {
                          ATerm s_7 (ATerm t)
                          {
                            t = term_x_33;
                            return(t);
                          }
                          t = timing_1(t, s_7);
                          {
                            t = strename_0(t);
                            {
                              ATerm t_7 (ATerm t)
                              {
                                t = term_y_33;
                                return(t);
                              }
                              t = timing_1(t, t_7);
                              {
                                ATerm u_7 (ATerm t)
                                {
                                  ATerm v_7 (ATerm t)
                                  {
                                    ATerm w_7 (ATerm t)
                                    {
                                      t = Strategies_1(t, desugar_spec_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, w_7, Nil_0);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, v_7);
                                  return(t);
                                }
                                t = Specification_1(t, u_7);
                              }
                            }
                          }
                        }
                      }
                    }
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
ATerm _2 (ATerm t, ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm t_140 = NULL,u_140 = NULL,v_140 = NULL;
  t_140 = t;
  s_140 :
  if(match_cons(t_140, sym__2))
    {
      u_140 = ATgetArgument(t_140, 0);
      v_140 = ATgetArgument(t_140, 1);
      {
        ATerm z_140 = NULL,b_141 = NULL;
        ATerm a_141 = NULL;
        t = SSLgetAnnotations(not_null(t_140));
        {
          a_141 = t;
          if(((z_140 != NULL) && (z_140 != a_141)))
            _fail(a_141);
          else
            z_140 = a_141;
        }
        {
          t = not_null(u_140);
          {
            ATerm d_141 = NULL;
            t = g_68(t);
            {
              b_141 = t;
              {
                t = not_null(v_140);
                {
                  ATerm f_141 = NULL;
                  t = h_68(t);
                  {
                    d_141 = t;
                    {
                      ATerm g_141 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_141), not_null(d_141)), not_null(z_140));
                      {
                        g_141 = t;
                        if(((f_141 != NULL) && (f_141 != g_141)))
                          _fail(g_141);
                        else
                          f_141 = g_141;
                      }
                      t = not_null(f_141);
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
  ATerm o_141 = NULL;
  ATerm z_33;
  z_33 = t;
  {
    ATerm x_7 (ATerm t)
    {
      ATerm p_141 = NULL,q_141 = NULL;
      p_141 = t;
      n_141 :
      if(match_cons(p_141, sym_Program_1))
        {
          q_141 = ATgetArgument(p_141, 0);
          if(((o_141 != NULL) && (o_141 != q_141)))
            _fail(q_141);
          else
            o_141 = q_141;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, x_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_34), not_null(o_141)), term_a_34));
      {
        t = printnl_0(t);
        {
          t = term_r_22;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_33;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL;
  u_141 = t;
  t_141 :
  if(match_cons(u_141, sym__2))
    {
      v_141 = ATgetArgument(u_141, 0);
      w_141 = ATgetArgument(u_141, 1);
      {
        ATerm c_34;
        c_34 = t;
        t = SSL_printnl(not_null(v_141), not_null(w_141));
        t = c_34;
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
  ATerm b_142 = NULL;
  b_142 = t;
  t = SSL_implode_string(not_null(b_142));
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
        ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL;
        g_142 = t;
        f_142 :
        if(((ATgetType(g_142) == AT_LIST) && ((ATermList) g_142 != ATempty)))
          {
            h_142 = ATgetFirst((ATermList) g_142);
            i_142 = (ATerm) ATgetNext((ATermList) g_142);
            {
              t = not_null(h_142);
              {
                ATerm y_7 (ATerm t)
                {
                  t = not_null(i_142);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_7);
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
  ATerm s_142 = NULL;
  ATerm u_142 = NULL;
  s_142 = t;
  {
    ATerm v_142 = NULL;
    ATerm x_142 = NULL,y_142 = NULL,z_142 = NULL;
    t = not_null(s_142);
    {
      v_142 = t;
      {
        t = SSL_explode_term(not_null(v_142));
        {
          x_142 = t;
          q_142 :
          if(match_cons(x_142, sym__2))
            {
              y_142 = ATgetArgument(x_142, 0);
              z_142 = ATgetArgument(x_142, 1);
              r_142 :
              if(match_string(y_142, ""))
                {
                  if(((u_142 != NULL) && (u_142 != z_142)))
                    _fail(z_142);
                  else
                    u_142 = z_142;
                }
              else
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
      t = not_null(u_142);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm d_143 (ATerm t)
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_143);
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          t = Nil_0(t);
          t = i_100(t);
        }
      }
    return(t);
  }
  t = d_143(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_143 = NULL,h_143 = NULL,i_143 = NULL;
  g_143 = t;
  f_143 :
  if(match_cons(g_143, sym__2))
    {
      h_143 = ATgetArgument(g_143, 0);
      i_143 = ATgetArgument(g_143, 1);
      {
        t = not_null(h_143);
        {
          ATerm z_7 (ATerm t)
          {
            t = not_null(i_143);
            return(t);
          }
          t = at_end_1(t, z_7);
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
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_143 = NULL;
  n_143 = t;
  t = SSL_explode_string(not_null(n_143));
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
ATerm debug_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm j_34;
  j_34 = t;
  {
    ATerm s_143 = NULL,u_143 = NULL;
    ATerm k_34;
    k_34 = t;
    {
      ATerm t_143 = NULL;
      t = c_90(t);
      {
        t_143 = t;
        if(((s_143 != NULL) && (s_143 != t_143)))
          _fail(t_143);
        else
          s_143 = t_143;
      }
    }
    t = k_34;
    {
      ATerm v_143 = NULL;
      v_143 = t;
      if(((u_143 != NULL) && (u_143 != v_143)))
        _fail(v_143);
      else
        u_143 = v_143;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_143)), not_null(s_143)));
        t = printnl_0(t);
      }
    }
  }
  t = j_34;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_143 = NULL;
  z_143 = t;
  t = SSL_is_string(not_null(z_143));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_8);
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm i_144 = NULL,j_144 = NULL,k_144 = NULL;
              i_144 = t;
              h_144 :
              if(match_cons(i_144, sym_Path_1))
                {
                  j_144 = ATgetArgument(i_144, 0);
                  t = not_null(j_144);
                }
              else
                {
                  if(match_cons(i_144, sym_Var_1))
                    {
                      j_144 = ATgetArgument(i_144, 0);
                      {
                        t = not_null(j_144);
                        {
                          ATerm p_34 = t;
                          int q_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_34);
                            }
                          else
                            {
                              t = p_34;
                              {
                                ATerm b_8 (ATerm t)
                                {
                                  t = term_r_34;
                                  return(t);
                                }
                                t = debug_1(t, b_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_144, sym_Prefix_2))
                        {
                          j_144 = ATgetArgument(i_144, 0);
                          k_144 = ATgetArgument(i_144, 1);
                          {
                            ATerm q_144 = NULL,s_144 = NULL;
                            ATerm s_34;
                            s_34 = t;
                            {
                              ATerm r_144 = NULL;
                              t = not_null(j_144);
                              {
                                t = eval_config_0(t);
                                {
                                  r_144 = t;
                                  if(((q_144 != NULL) && (q_144 != r_144)))
                                    _fail(r_144);
                                  else
                                    q_144 = r_144;
                                }
                              }
                            }
                            t = s_34;
                            {
                              ATerm t_144 = NULL;
                              t = not_null(k_144);
                              {
                                t = eval_config_0(t);
                                {
                                  t_144 = t;
                                  if(((s_144 != NULL) && (s_144 != t_144)))
                                    _fail(t_144);
                                  else
                                    s_144 = t_144;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_144), not_null(s_144));
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
  ATerm b_145 = NULL;
  b_145 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_34, not_null(b_145));
    {
      t = table_get_0(t);
      {
        ATerm c_8 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_34;
            u_34 = t;
            {
              ATerm d_145 = NULL;
              ATerm e_145 = NULL;
              e_145 = t;
              if(((d_145 != NULL) && (d_145 != e_145)))
                _fail(e_145);
              else
                d_145 = e_145;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_34, not_null(b_145), not_null(d_145));
                t = table_put_0(t);
              }
            }
            t = u_34;
          }
          return(t);
        }
        t = try_1(t, c_8);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm d_8 (ATerm t)
  {
    ATerm v_34;
    v_34 = t;
    {
      ATerm i_145 = NULL;
      ATerm j_145 = NULL;
      t = term_r_16;
      {
        t = get_config_0(t);
        {
          j_145 = t;
          if(((i_145 != NULL) && (i_145 != j_145)))
            _fail(j_145);
          else
            i_145 = j_145;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_145), term_y_34);
        t = geq_0(t);
      }
    }
    t = v_34;
    t = g_87(t);
    return(t);
  }
  t = try_1(t, d_8);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_145 = NULL,o_145 = NULL,p_145 = NULL;
  n_145 = t;
  m_145 :
  if(match_cons(n_145, sym__2))
    {
      o_145 = ATgetArgument(n_145, 0);
      p_145 = ATgetArgument(n_145, 1);
      t = SSL_WriteToTextFile(not_null(o_145), not_null(p_145));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_145 = NULL,w_145 = NULL,x_145 = NULL;
  v_145 = t;
  u_145 :
  if(match_cons(v_145, sym__2))
    {
      w_145 = ATgetArgument(v_145, 0);
      x_145 = ATgetArgument(v_145, 1);
      t = SSL_WriteToBinaryFile(not_null(w_145), not_null(x_145));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_146 = NULL;
  ATerm z_34;
  z_34 = t;
  {
    ATerm e_8 (ATerm t)
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_8 (ATerm t)
          {
            ATerm g_146 = NULL,h_146 = NULL;
            g_146 = t;
            c_146 :
            if(match_cons(g_146, sym_Output_1))
              {
                h_146 = ATgetArgument(g_146, 0);
                if(((f_146 != NULL) && (f_146 != h_146)))
                  _fail(h_146);
                else
                  f_146 = h_146;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, f_8);
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm i_146 = NULL;
            t = term_c_35;
            {
              i_146 = t;
              if(((f_146 != NULL) && (f_146 != i_146)))
                _fail(i_146);
              else
                f_146 = i_146;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_8, _id);
  }
  t = z_34;
  {
    ATerm g_8 (ATerm t)
    {
      ATerm h_8 (ATerm t)
      {
        t = not_null(f_146);
        return(t);
      }
      t = split_2(t, h_8, _id);
      return(t);
    }
    t = _2(t, _id, g_8);
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_8 (ATerm t)
          {
            ATerm j_8 (ATerm t)
            {
              ATerm j_146 = NULL;
              j_146 = t;
              e_146 :
              if(!(match_cons(j_146, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, j_8);
            return(t);
          }
          t = _2(t, i_8, WriteToBinaryFile_0);
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_89 (ATerm))
{
  ATerm p_146 = NULL,r_146 = NULL,s_146 = NULL,t_146 = NULL;
  ATerm f_35;
  f_35 = t;
  t = dtime_0(t);
  t = f_35;
  {
    t = m_89(t);
    {
      ATerm g_35;
      g_35 = t;
      {
        ATerm q_146 = NULL;
        t = dtime_0(t);
        {
          q_146 = t;
          if(((p_146 != NULL) && (p_146 != q_146)))
            _fail(q_146);
          else
            p_146 = q_146;
        }
      }
      t = g_35;
      {
        r_146 = t;
        o_146 :
        if(match_cons(r_146, sym__2))
          {
            s_146 = ATgetArgument(r_146, 0);
            t_146 = ATgetArgument(r_146, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_146)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_146))), not_null(t_146));
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
  ATerm z_146 = NULL;
  z_146 = t;
  t = SSL_ReadFromFile(not_null(z_146));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_92 (ATerm), ATerm s_92 (ATerm))
{
  ATerm e_147 = NULL,g_147 = NULL;
  ATerm h_35;
  h_35 = t;
  {
    ATerm f_147 = NULL;
    t = r_92(t);
    {
      f_147 = t;
      if(((e_147 != NULL) && (e_147 != f_147)))
        _fail(f_147);
      else
        e_147 = f_147;
    }
  }
  t = h_35;
  {
    ATerm h_147 = NULL;
    t = s_92(t);
    {
      h_147 = t;
      if(((g_147 != NULL) && (g_147 != h_147)))
        _fail(h_147);
      else
        g_147 = h_147;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_147), not_null(g_147));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_147 = NULL;
  ATerm i_35;
  i_35 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 (ATerm t)
        {
          ATerm o_147 = NULL,p_147 = NULL;
          o_147 = t;
          l_147 :
          if(match_cons(o_147, sym_Input_1))
            {
              p_147 = ATgetArgument(o_147, 0);
              if(((n_147 != NULL) && (n_147 != p_147)))
                _fail(p_147);
              else
                n_147 = p_147;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_8);
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        {
          ATerm q_147 = NULL;
          t = term_l_35;
          {
            q_147 = t;
            if(((n_147 != NULL) && (n_147 != q_147)))
              _fail(q_147);
            else
              n_147 = q_147;
          }
        }
      }
  }
  t = i_35;
  {
    ATerm l_8 (ATerm t)
    {
      t = not_null(n_147);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_8);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_147 = NULL;
  u_147 = t;
  t = SSL_string_to_int(not_null(u_147));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm c_148 = NULL,d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL;
  c_148 = t;
  a_148 :
  if(match_string(c_148, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(c_148) == AT_LIST) && ((ATermList) c_148 != ATempty)))
        {
          d_148 = ATgetFirst((ATermList) c_148);
          e_148 = (ATerm) ATgetNext((ATermList) c_148);
          b_148 :
          if(((ATgetType(e_148) == AT_LIST) && ((ATermList) e_148 != ATempty)))
            {
              f_148 = ATgetFirst((ATermList) e_148);
              g_148 = (ATerm) ATgetNext((ATermList) e_148);
              {
                ATerm k_148 = NULL;
                ATerm m_35;
                m_35 = t;
                {
                  t = not_null(d_148);
                  t = j_0(t);
                }
                t = m_35;
                {
                  ATerm l_148 = NULL;
                  t = not_null(f_148);
                  {
                    t = k_0(t);
                    {
                      l_148 = t;
                      if(((k_148 != NULL) && (k_148 != l_148)))
                        _fail(l_148);
                      else
                        k_148 = l_148;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_148)), not_null(k_148));
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
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 (ATerm t)
      {
        ATerm e_149 = NULL;
        e_149 = t;
        p_148 :
        if(!(match_string(e_149, "-i")))
          {
            if(!(match_string(e_149, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_8 (ATerm t)
      {
        ATerm h_149 = NULL;
        ATerm p_35;
        p_35 = t;
        {
          ATerm f_149 = NULL;
          ATerm g_149 = NULL;
          g_149 = t;
          if(((f_149 != NULL) && (f_149 != g_149)))
            _fail(g_149);
          else
            f_149 = g_149;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_35, not_null(f_149));
            t = set_config_0(t);
          }
        }
        t = p_35;
        {
          ATerm i_149 = NULL;
          i_149 = t;
          if(((h_149 != NULL) && (h_149 != i_149)))
            _fail(i_149);
          else
            h_149 = i_149;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_149));
        }
        return(t);
      }
      ATerm o_8 (ATerm t)
      {
        t = term_r_35;
        return(t);
      }
      t = ArgOption_3(t, m_8, n_8, o_8);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 (ATerm t)
            {
              ATerm j_149 = NULL;
              j_149 = t;
              s_148 :
              if(!(match_string(j_149, "-o")))
                {
                  if(!(match_string(j_149, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_8 (ATerm t)
            {
              ATerm m_149 = NULL;
              ATerm u_35;
              u_35 = t;
              {
                ATerm k_149 = NULL;
                ATerm l_149 = NULL;
                l_149 = t;
                if(((k_149 != NULL) && (k_149 != l_149)))
                  _fail(l_149);
                else
                  k_149 = l_149;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_35, not_null(k_149));
                  t = set_config_0(t);
                }
              }
              t = u_35;
              {
                ATerm n_149 = NULL;
                n_149 = t;
                if(((m_149 != NULL) && (m_149 != n_149)))
                  _fail(n_149);
                else
                  m_149 = n_149;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_149));
              }
              return(t);
            }
            ATerm r_8 (ATerm t)
            {
              t = term_y_35;
              return(t);
            }
            t = ArgOption_3(t, p_8, q_8, r_8);
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_8 (ATerm t)
                  {
                    ATerm o_149 = NULL;
                    o_149 = t;
                    v_148 :
                    if(!(match_string(o_149, "-S")))
                      {
                        if(!(match_string(o_149, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_8 (ATerm t)
                  {
                    t = term_b_36;
                    t = set_config_0(t);
                    t = term_c_36;
                    return(t);
                  }
                  ATerm u_8 (ATerm t)
                  {
                    t = term_d_36;
                    return(t);
                  }
                  t = Option_3(t, s_8, t_8, u_8);
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
                  {
                    ATerm e_36 = t;
                    int f_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_8 (ATerm t)
                        {
                          ATerm p_149 = NULL;
                          p_149 = t;
                          w_148 :
                          if(!(match_string(p_149, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_8 (ATerm t)
                        {
                          ATerm s_149 = NULL;
                          ATerm g_36;
                          g_36 = t;
                          {
                            ATerm q_149 = NULL;
                            ATerm r_149 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_149 = t;
                              if(((q_149 != NULL) && (q_149 != r_149)))
                                _fail(r_149);
                              else
                                q_149 = r_149;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_16, not_null(q_149));
                              t = set_config_0(t);
                            }
                          }
                          t = g_36;
                          {
                            ATerm t_149 = NULL;
                            t_149 = t;
                            if(((s_149 != NULL) && (s_149 != t_149)))
                              _fail(t_149);
                            else
                              s_149 = t_149;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_149));
                          }
                          return(t);
                        }
                        ATerm y_8 (ATerm t)
                        {
                          t = term_h_36;
                          return(t);
                        }
                        t = ArgOption_3(t, v_8, w_8, y_8);
                        LocalPopChoice(f_36);
                      }
                    else
                      {
                        t = e_36;
                        {
                          ATerm i_36 = t;
                          int j_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_8 (ATerm t)
                              {
                                ATerm u_149 = NULL;
                                u_149 = t;
                                z_148 :
                                if(!(match_string(u_149, "-k")))
                                  {
                                    if(!(match_string(u_149, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm a_9 (ATerm t)
                              {
                                ATerm k_36;
                                k_36 = t;
                                {
                                  ATerm v_149 = NULL;
                                  ATerm w_149 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    w_149 = t;
                                    if(((v_149 != NULL) && (v_149 != w_149)))
                                      _fail(w_149);
                                    else
                                      v_149 = w_149;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_36, not_null(v_149));
                                    t = set_config_0(t);
                                  }
                                }
                                t = k_36;
                                return(t);
                              }
                              ATerm b_9 (ATerm t)
                              {
                                t = term_m_36;
                                return(t);
                              }
                              t = ArgOption_3(t, z_8, a_9, b_9);
                              LocalPopChoice(j_36);
                            }
                          else
                            {
                              t = i_36;
                              {
                                ATerm n_36 = t;
                                int o_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_9 (ATerm t)
                                    {
                                      ATerm x_149 = NULL;
                                      x_149 = t;
                                      b_149 :
                                      if(!(match_string(x_149, "-v")))
                                        {
                                          if(!(match_string(x_149, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm i_9 (ATerm t)
                                    {
                                      t = term_q_36;
                                      t = set_config_0(t);
                                      t = term_r_36;
                                      return(t);
                                    }
                                    ATerm j_9 (ATerm t)
                                    {
                                      t = term_s_36;
                                      return(t);
                                    }
                                    t = Option_3(t, d_9, i_9, j_9);
                                    LocalPopChoice(o_36);
                                  }
                                else
                                  {
                                    t = n_36;
                                    {
                                      ATerm t_36 = t;
                                      int u_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_9 (ATerm t)
                                          {
                                            ATerm y_149 = NULL;
                                            y_149 = t;
                                            c_149 :
                                            if(!(match_string(y_149, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm c_10 (ATerm t)
                                          {
                                            t = term_w_36;
                                            t = set_config_0(t);
                                            t = term_x_36;
                                            return(t);
                                          }
                                          ATerm o_10 (ATerm t)
                                          {
                                            t = term_y_36;
                                            return(t);
                                          }
                                          t = Option_3(t, s_9, c_10, o_10);
                                          LocalPopChoice(u_36);
                                        }
                                      else
                                        {
                                          t = t_36;
                                          {
                                            ATerm p_10 (ATerm t)
                                            {
                                              ATerm z_149 = NULL;
                                              z_149 = t;
                                              d_149 :
                                              if(!(match_string(z_149, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm q_10 (ATerm t)
                                            {
                                              t = term_a_37;
                                              t = set_config_0(t);
                                              t = term_b_37;
                                              return(t);
                                            }
                                            ATerm r_10 (ATerm t)
                                            {
                                              t = term_c_37;
                                              return(t);
                                            }
                                            t = Option_3(t, p_10, q_10, r_10);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATempty, term_d_37));
  {
    t = printnl_0(t);
    {
      t = term_r_22;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_150 = NULL;
  i_150 = t;
  t = SSL_TicksToSeconds(not_null(i_150));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL,p_150 = NULL;
  n_150 = t;
  m_150 :
  if(match_cons(n_150, sym__2))
    {
      o_150 = ATgetArgument(n_150, 0);
      p_150 = ATgetArgument(n_150, 1);
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_150), not_null(p_150));
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            t = SSL_addr(not_null(o_150), not_null(p_150));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm d_94 (ATerm), ATerm e_94 (ATerm))
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_94(t);
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm w_150 = NULL,x_150 = NULL,y_150 = NULL;
        w_150 = t;
        v_150 :
        if(((ATgetType(w_150) == AT_LIST) && ((ATermList) w_150 != ATempty)))
          {
            x_150 = ATgetFirst((ATermList) w_150);
            y_150 = (ATerm) ATgetNext((ATermList) w_150);
            {
              ATerm b_151 = NULL;
              ATerm c_151 = NULL;
              t = not_null(y_150);
              {
                t = foldr_2(t, d_94, e_94);
                {
                  c_151 = t;
                  if(((b_151 != NULL) && (b_151 != c_151)))
                    _fail(c_151);
                  else
                    b_151 = c_151;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_150), not_null(b_151));
                t = e_94(t);
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
ATerm crush_2 (ATerm t, ATerm v_95 (ATerm), ATerm w_95 (ATerm))
{
  ATerm j_151 = NULL;
  ATerm l_151 = NULL;
  j_151 = t;
  {
    ATerm m_151 = NULL;
    ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL;
    t = not_null(j_151);
    {
      m_151 = t;
      {
        t = SSL_explode_term(not_null(m_151));
        {
          o_151 = t;
          i_151 :
          if(match_cons(o_151, sym__2))
            {
              p_151 = ATgetArgument(o_151, 0);
              q_151 = ATgetArgument(o_151, 1);
              if(((l_151 != NULL) && (l_151 != q_151)))
                _fail(q_151);
              else
                l_151 = q_151;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_151);
      t = foldr_2(t, v_95, w_95);
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
    ATerm s_10 (ATerm t)
    {
      t = term_d_24;
      return(t);
    }
    t = crush_2(t, s_10, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_151 = NULL,x_151 = NULL,y_151 = NULL;
  w_151 = t;
  v_151 :
  if(match_cons(w_151, sym__2))
    {
      x_151 = ATgetArgument(w_151, 0);
      y_151 = ATgetArgument(w_151, 1);
      {
        ATerm i_37;
        i_37 = t;
        {
          ATerm l_37 = t;
          int m_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_151), not_null(y_151));
              LocalPopChoice(m_37);
            }
          else
            {
              t = l_37;
              t = SSL_gtr(not_null(x_151), not_null(y_151));
            }
        }
        t = i_37;
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
  ATerm e_152 = NULL;
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_152 = NULL,g_152 = NULL,h_152 = NULL;
      f_152 = t;
      d_152 :
      if(match_cons(f_152, sym__2))
        {
          g_152 = ATgetArgument(f_152, 0);
          h_152 = ATgetArgument(f_152, 1);
          {
            if(((e_152 != NULL) && (e_152 != g_152)))
              _fail(g_152);
            else
              e_152 = g_152;
            if(((e_152 != NULL) && (e_152 != h_152)))
              _fail(h_152);
            else
              e_152 = h_152;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_87 (ATerm))
{
  ATerm t_10 (ATerm t)
  {
    ATerm p_37;
    p_37 = t;
    {
      ATerm k_152 = NULL;
      ATerm l_152 = NULL;
      t = term_r_16;
      {
        t = get_config_0(t);
        {
          l_152 = t;
          if(((k_152 != NULL) && (k_152 != l_152)))
            _fail(l_152);
          else
            k_152 = l_152;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_152), term_r_22);
        t = geq_0(t);
      }
    }
    t = p_37;
    t = f_87(t);
    return(t);
  }
  t = try_1(t, t_10);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_10 (ATerm t)
  {
    ATerm p_152 = NULL,r_152 = NULL;
    ATerm q_37;
    q_37 = t;
    {
      ATerm q_152 = NULL;
      t = run_time_0(t);
      {
        q_152 = t;
        if(((p_152 != NULL) && (p_152 != q_152)))
          _fail(q_152);
        else
          p_152 = q_152;
      }
    }
    t = q_37;
    {
      ATerm s_152 = NULL;
      t = term_r_37;
      {
        t = get_config_0(t);
        {
          s_152 = t;
          if(((r_152 != NULL) && (r_152 != s_152)))
            _fail(s_152);
          else
            r_152 = s_152;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_37), not_null(p_152)), term_t_37), not_null(r_152)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_10);
  {
    t = term_d_24;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_152 = NULL;
  z_152 = t;
  y_152 :
  if(match_cons(z_152, sym_Version_0))
    {
      ATerm b_153 = NULL,d_153 = NULL;
      ATerm w_37;
      w_37 = t;
      {
        ATerm c_153 = NULL;
        t = SSLgetAnnotations(not_null(z_152));
        {
          c_153 = t;
          if(((b_153 != NULL) && (b_153 != c_153)))
            _fail(c_153);
          else
            b_153 = c_153;
        }
      }
      t = w_37;
      {
        ATerm e_153 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_153));
        {
          e_153 = t;
          if(((d_153 != NULL) && (d_153 != e_153)))
            _fail(e_153);
          else
            d_153 = e_153;
        }
        t = not_null(d_153);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm v_10 (ATerm t)
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        {
          ATerm z_37 = t;
          int a_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(a_38);
            }
          else
            {
              t = z_37;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, v_10);
  t = k_89(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_153 = NULL;
  j_153 = t;
  t = SSL_table_create(not_null(j_153));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_153 = NULL;
  n_153 = t;
  {
    ATerm b_38;
    b_38 = t;
    {
      t = term_c_38;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_c_38, term_d_38, not_null(n_153));
          t = table_put_0(t);
        }
      }
    }
    t = b_38;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_153 = NULL;
  r_153 = t;
  t = SSL_table_destroy(not_null(r_153));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_153 = NULL;
  v_153 = t;
  t = SSL_exit(not_null(v_153));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_153 = NULL,a_154 = NULL,b_154 = NULL;
  z_153 = t;
  y_153 :
  if(((ATermList) z_153 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_153) == AT_LIST) && ((ATermList) z_153 != ATempty)))
        {
          a_154 = ATgetFirst((ATermList) z_153);
          b_154 = (ATerm) ATgetNext((ATermList) z_153);
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
  ATerm e_38;
  e_38 = t;
  {
    ATerm e_154 = NULL;
    ATerm h_154 = NULL;
    ATerm f_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(i_38);
      }
    else
      {
        t = f_38;
        {
          ATerm f_154 = NULL;
          ATerm g_154 = NULL;
          g_154 = t;
          if(((f_154 != NULL) && (f_154 != g_154)))
            _fail(g_154);
          else
            f_154 = g_154;
          t = (ATerm) ATinsert(ATempty, not_null(f_154));
        }
      }
    {
      h_154 = t;
      if(((e_154 != NULL) && (e_154 != h_154)))
        _fail(h_154);
      else
        e_154 = h_154;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_35, not_null(e_154));
      t = printnl_0(t);
    }
  }
  t = e_38;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm l_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm t_99 (ATerm))
{
  ATerm k_154 (ATerm t)
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        t = Cons_2(t, t_99, k_154);
      }
    return(t);
  }
  t = k_154(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm r_154 = NULL,s_154 = NULL,t_154 = NULL;
  t_154 = t;
  q_154 :
  if(((ATgetType(t_154) == AT_LIST) && ((ATermList) t_154 != ATempty)))
    {
      r_154 = ATgetFirst((ATermList) t_154);
      s_154 = (ATerm) ATgetNext((ATermList) t_154);
      {
        ATerm w_154 = NULL;
        t = not_null(s_154);
        {
          ATerm l_38;
          l_38 = t;
          {
            ATerm x_154 = NULL,z_154 = NULL,b_155 = NULL;
            ATerm m_38;
            m_38 = t;
            {
              ATerm y_154 = NULL;
              t = i_0(t);
              {
                y_154 = t;
                if(((x_154 != NULL) && (x_154 != y_154)))
                  _fail(y_154);
                else
                  x_154 = y_154;
              }
            }
            t = m_38;
            {
              ATerm a_155 = NULL;
              t = not_null(r_154);
              {
                t = h_0(t);
                {
                  a_155 = t;
                  if(((z_154 != NULL) && (z_154 != a_155)))
                    _fail(a_155);
                  else
                    z_154 = a_155;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_154)), not_null(z_154));
                {
                  b_155 = t;
                  if(((w_154 != NULL) && (w_154 != b_155)))
                    _fail(b_155);
                  else
                    w_154 = b_155;
                }
              }
            }
          }
          t = l_38;
          {
            ATerm w_10 (ATerm t)
            {
              t = not_null(w_154);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_10);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_154 == ATempty))
        {
          {
            t = term_s_27;
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
  ATerm x_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_10);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm m_155 = NULL,n_155 = NULL;
  m_155 = t;
  l_155 :
  if(match_cons(m_155, sym_Program_1))
    {
      n_155 = ATgetArgument(m_155, 0);
      {
        ATerm q_155 = NULL,s_155 = NULL;
        ATerm r_155 = NULL;
        t = SSLgetAnnotations(not_null(m_155));
        {
          r_155 = t;
          if(((q_155 != NULL) && (q_155 != r_155)))
            _fail(r_155);
          else
            q_155 = r_155;
        }
        {
          t = not_null(n_155);
          {
            ATerm u_155 = NULL;
            t = u_69(t);
            {
              s_155 = t;
              {
                ATerm v_155 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_155)), not_null(q_155));
                {
                  v_155 = t;
                  if(((u_155 != NULL) && (u_155 != v_155)))
                    _fail(v_155);
                  else
                    u_155 = v_155;
                }
                t = not_null(u_155);
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
  ATerm e_156 = NULL;
  ATerm n_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_156 = NULL;
      t = term_r_37;
      {
        t = get_config_0(t);
        {
          f_156 = t;
          if(((e_156 != NULL) && (e_156 != f_156)))
            _fail(f_156);
          else
            e_156 = f_156;
        }
      }
      LocalPopChoice(s_38);
    }
  else
    {
      t = n_38;
      {
        ATerm y_10 (ATerm t)
        {
          ATerm z_10 (ATerm t)
          {
            ATerm g_156 = NULL;
            g_156 = t;
            if(((e_156 != NULL) && (e_156 != g_156)))
              _fail(g_156);
            else
              e_156 = g_156;
            return(t);
          }
          t = Program_1(t, z_10);
          return(t);
        }
        t = option_defined_1(t, y_10);
      }
    }
  {
    ATerm a_11 (ATerm t)
    {
      ATerm b_11 (ATerm t)
      {
        t = not_null(e_156);
        return(t);
      }
      t = short_description_1(t, b_11);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_11);
    {
      t = term_t_38;
      {
        t = echo_0(t);
        {
          t = term_w_38;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_11 (ATerm t)
                {
                  ATerm h_156 = NULL;
                  ATerm i_156 = NULL;
                  i_156 = t;
                  if(((h_156 != NULL) && (h_156 != i_156)))
                    _fail(i_156);
                  else
                    h_156 = i_156;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_156)), term_a_39);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, c_11);
                {
                  ATerm d_11 (ATerm t)
                  {
                    ATerm j_156 = NULL;
                    ATerm k_156 = NULL;
                    ATerm e_11 (ATerm t)
                    {
                      t = not_null(e_156);
                      return(t);
                    }
                    t = long_description_1(t, e_11);
                    {
                      k_156 = t;
                      if(((j_156 != NULL) && (j_156 != k_156)))
                        _fail(k_156);
                      else
                        j_156 = k_156;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_156)), term_b_39);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_11);
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
  ATerm f_39;
  f_39 = t;
  {
    ATerm q_156 = NULL;
    ATerm r_156 = NULL;
    r_156 = t;
    if(((q_156 != NULL) && (q_156 != r_156)))
      _fail(r_156);
    else
      q_156 = r_156;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATempty, not_null(q_156)));
      t = printnl_0(t);
    }
  }
  t = f_39;
  return(t);
}
ATerm say_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm g_39;
  g_39 = t;
  {
    t = d_90(t);
    t = debug_0(t);
  }
  t = g_39;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm y_156 = NULL,z_156 = NULL;
  y_156 = t;
  x_156 :
  if(match_cons(y_156, sym_Undefined_1))
    {
      z_156 = ATgetArgument(y_156, 0);
      {
        ATerm c_157 = NULL,e_157 = NULL;
        ATerm d_157 = NULL;
        t = SSLgetAnnotations(not_null(y_156));
        {
          d_157 = t;
          if(((c_157 != NULL) && (c_157 != d_157)))
            _fail(d_157);
          else
            c_157 = d_157;
        }
        {
          t = not_null(z_156);
          {
            ATerm g_157 = NULL;
            t = v_69(t);
            {
              e_157 = t;
              {
                ATerm h_157 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_157)), not_null(c_157));
                {
                  h_157 = t;
                  if(((g_157 != NULL) && (g_157 != h_157)))
                    _fail(h_157);
                  else
                    g_157 = h_157;
                }
                t = not_null(g_157);
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
ATerm fetch_1 (ATerm t, ATerm c_100 (ATerm))
{
  ATerm m_157 (ATerm t)
  {
    ATerm h_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, c_100, _id);
        LocalPopChoice(l_39);
      }
    else
      {
        t = h_39;
        t = Cons_2(t, _id, m_157);
      }
    return(t);
  }
  t = m_157(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_86 (ATerm))
{
  t = fetch_1(t, p_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_157 = NULL;
  r_157 = t;
  q_157 :
  if(match_cons(r_157, sym_Help_0))
    {
      ATerm t_157 = NULL,v_157 = NULL;
      ATerm m_39;
      m_39 = t;
      {
        ATerm u_157 = NULL;
        t = SSLgetAnnotations(not_null(r_157));
        {
          u_157 = t;
          if(((t_157 != NULL) && (t_157 != u_157)))
            _fail(u_157);
          else
            t_157 = u_157;
        }
      }
      t = m_39;
      {
        ATerm w_157 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_157));
        {
          w_157 = t;
          if(((v_157 != NULL) && (v_157 != w_157)))
            _fail(w_157);
          else
            v_157 = w_157;
        }
        t = not_null(v_157);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_108 (ATerm))
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_108(t);
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_158 = NULL,d_158 = NULL,e_158 = NULL;
  c_158 = t;
  b_158 :
  if(match_cons(c_158, sym__2))
    {
      d_158 = ATgetArgument(c_158, 0);
      e_158 = ATgetArgument(c_158, 1);
      t = SSL_table_get(not_null(d_158), not_null(e_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_158 = NULL,m_158 = NULL,n_158 = NULL,o_158 = NULL;
  l_158 = t;
  k_158 :
  if(match_cons(l_158, sym__3))
    {
      m_158 = ATgetArgument(l_158, 0);
      n_158 = ATgetArgument(l_158, 1);
      o_158 = ATgetArgument(l_158, 2);
      {
        ATerm p_39;
        p_39 = t;
        {
          ATerm t_158 = NULL;
          ATerm u_158 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_158), not_null(n_158));
          {
            ATerm q_39 = t;
            int r_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_39);
              }
            else
              {
                t = q_39;
                t = (ATerm) ATempty;
              }
            {
              u_158 = t;
              if(((t_158 != NULL) && (t_158 != u_158)))
                _fail(u_158);
              else
                t_158 = u_158;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_158), not_null(n_158), (ATerm) ATinsert(CheckATermList(not_null(t_158)), not_null(o_158)));
            t = table_put_0(t);
          }
        }
        t = p_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm y_158 = NULL;
  ATerm z_158 = NULL;
  t = term_s_27;
  {
    t = p_85(t);
    {
      z_158 = t;
      if(((y_158 != NULL) && (y_158 != z_158)))
        _fail(z_158);
      else
        y_158 = z_158;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_38, term_v_38, not_null(y_158));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm f_159 = NULL,g_159 = NULL,h_159 = NULL;
  f_159 = t;
  e_159 :
  if(match_string(f_159, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(f_159) == AT_LIST) && ((ATermList) f_159 != ATempty)))
        {
          g_159 = ATgetFirst((ATermList) f_159);
          h_159 = (ATerm) ATgetNext((ATermList) f_159);
          {
            ATerm k_159 = NULL;
            ATerm s_39;
            s_39 = t;
            {
              t = not_null(g_159);
              t = a_0(t);
            }
            t = s_39;
            {
              ATerm l_159 = NULL;
              t = term_s_27;
              {
                t = b_0(t);
                {
                  l_159 = t;
                  if(((k_159 != NULL) && (k_159 != l_159)))
                    _fail(l_159);
                  else
                    k_159 = l_159;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_159)), not_null(k_159));
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
  ATerm f_11 (ATerm t)
  {
    ATerm q_159 = NULL;
    q_159 = t;
    p_159 :
    if(!(match_string(q_159, "--help")))
      {
        if(!(match_string(q_159, "-h")))
          {
            if(!(match_string(q_159, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_11 (ATerm t)
  {
    t = term_u_39;
    {
      t = set_config_0(t);
      t = term_v_39;
    }
    return(t);
  }
  ATerm i_11 (ATerm t)
  {
    t = term_w_39;
    return(t);
  }
  t = Option_3(t, f_11, g_11, i_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_159 = NULL,u_159 = NULL,v_159 = NULL;
  t_159 = t;
  s_159 :
  if(((ATgetType(t_159) == AT_LIST) && ((ATermList) t_159 != ATempty)))
    {
      u_159 = ATgetFirst((ATermList) t_159);
      v_159 = (ATerm) ATgetNext((ATermList) t_159);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_159)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_159)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_79 (ATerm), ATerm p_79 (ATerm))
{
  ATerm g_160 = NULL,h_160 = NULL,i_160 = NULL;
  g_160 = t;
  f_160 :
  if(((ATgetType(g_160) == AT_LIST) && ((ATermList) g_160 != ATempty)))
    {
      h_160 = ATgetFirst((ATermList) g_160);
      i_160 = (ATerm) ATgetNext((ATermList) g_160);
      {
        ATerm m_160 = NULL,o_160 = NULL;
        ATerm n_160 = NULL;
        t = SSLgetAnnotations(not_null(g_160));
        {
          n_160 = t;
          if(((m_160 != NULL) && (m_160 != n_160)))
            _fail(n_160);
          else
            m_160 = n_160;
        }
        {
          t = not_null(h_160);
          {
            ATerm q_160 = NULL;
            t = o_79(t);
            {
              o_160 = t;
              {
                t = not_null(i_160);
                {
                  ATerm s_160 = NULL;
                  t = p_79(t);
                  {
                    q_160 = t;
                    {
                      ATerm t_160 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_160)), not_null(o_160)), not_null(m_160));
                      {
                        t_160 = t;
                        if(((s_160 != NULL) && (s_160 != t_160)))
                          _fail(t_160);
                        else
                          s_160 = t_160;
                      }
                      t = not_null(s_160);
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
  ATerm d_161 = NULL;
  d_161 = t;
  c_161 :
  if(((ATermList) d_161 == ATempty))
    {
      {
        ATerm f_161 = NULL,h_161 = NULL;
        ATerm x_39;
        x_39 = t;
        {
          ATerm g_161 = NULL;
          t = SSLgetAnnotations(not_null(d_161));
          {
            g_161 = t;
            if(((f_161 != NULL) && (f_161 != g_161)))
              _fail(g_161);
            else
              f_161 = g_161;
          }
        }
        t = x_39;
        {
          ATerm i_161 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_161));
          {
            i_161 = t;
            if(((h_161 != NULL) && (h_161 != i_161)))
              _fail(i_161);
            else
              h_161 = i_161;
          }
          t = not_null(h_161);
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
  ATerm o_161 = NULL,p_161 = NULL,q_161 = NULL;
  o_161 = t;
  n_161 :
  if(match_cons(o_161, sym__2))
    {
      p_161 = ATgetArgument(o_161, 0);
      q_161 = ATgetArgument(o_161, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_34, not_null(p_161), not_null(q_161));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm y_39;
  y_39 = t;
  {
    ATerm j_11 (ATerm t)
    {
      t = term_z_39;
      t = n_85(t);
      return(t);
    }
    t = try_1(t, j_11);
  }
  t = y_39;
  {
    ATerm k_11 (ATerm t)
    {
      ATerm y_161 = NULL;
      ATerm a_40;
      a_40 = t;
      {
        ATerm w_161 = NULL;
        ATerm x_161 = NULL;
        x_161 = t;
        if(((w_161 != NULL) && (w_161 != x_161)))
          _fail(x_161);
        else
          w_161 = x_161;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_37, not_null(w_161));
          t = set_config_0(t);
        }
      }
      t = a_40;
      {
        ATerm z_161 = NULL;
        z_161 = t;
        if(((y_161 != NULL) && (y_161 != z_161)))
          _fail(z_161);
        else
          y_161 = z_161;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_161));
      }
      return(t);
    }
    ATerm m_11 (ATerm t)
    {
      ATerm b_40 = t;
      int c_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              {
                t = n_85(t);
                t = Cons_2(t, _id, m_11);
              }
            }
          LocalPopChoice(c_40);
        }
      else
        {
          t = b_40;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_11, m_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_162 = NULL,g_162 = NULL,h_162 = NULL;
  ATerm f_40;
  f_40 = t;
  {
    ATerm j_162 = NULL,k_162 = NULL,l_162 = NULL,m_162 = NULL;
    j_162 = t;
    e_162 :
    if(match_cons(j_162, sym__3))
      {
        k_162 = ATgetArgument(j_162, 0);
        l_162 = ATgetArgument(j_162, 1);
        m_162 = ATgetArgument(j_162, 2);
        {
          if(((f_162 != NULL) && (f_162 != k_162)))
            _fail(k_162);
          else
            f_162 = k_162;
          {
            if(((g_162 != NULL) && (g_162 != l_162)))
              _fail(l_162);
            else
              g_162 = l_162;
            {
              if(((h_162 != NULL) && (h_162 != m_162)))
                _fail(m_162);
              else
                h_162 = m_162;
              t = SSL_table_put(not_null(f_162), not_null(g_162), not_null(h_162));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = f_40;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm p_162 = NULL;
  ATerm g_40;
  g_40 = t;
  {
    t = term_h_40;
    t = table_put_0(t);
  }
  t = g_40;
  {
    ATerm n_11 (ATerm t)
    {
      ATerm i_40 = t;
      int j_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_85(t);
          LocalPopChoice(j_40);
        }
      else
        {
          t = i_40;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_11);
    {
      ATerm o_11 (ATerm t)
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_40;
            m_40 = t;
            {
              ATerm n_40 = t;
              int o_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_t_39;
                  t = get_config_0(t);
                  LocalPopChoice(o_40);
                }
              else
                {
                  t = n_40;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = m_40;
            {
              t = system_usage_0(t);
              {
                t = term_d_24;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            {
              ATerm q_11 (ATerm t)
              {
                ATerm u_11 (ATerm t)
                {
                  ATerm q_162 = NULL;
                  q_162 = t;
                  if(((p_162 != NULL) && (p_162 != q_162)))
                    _fail(q_162);
                  else
                    p_162 = q_162;
                  return(t);
                }
                t = Undefined_1(t, u_11);
                return(t);
              }
              t = option_defined_1(t, q_11);
              {
                ATerm e_12 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_162)), term_p_40);
                  return(t);
                }
                t = say_1(t, e_12);
                {
                  t = system_usage_0(t);
                  {
                    t = term_r_22;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_11);
      {
        ATerm q_40;
        q_40 = t;
        {
          t = term_u_38;
          t = table_destroy_0(t);
        }
        t = q_40;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  t = parse_options_1(t, h_88);
  {
    t = store_options_0(t);
    {
      t = j_88(t);
      {
        ATerm r_40 = t;
        int s_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_88);
            LocalPopChoice(s_40);
          }
        else
          {
            t = r_40;
            {
              ATerm t_40 = t;
              int u_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_88(t);
                  t = report_success_0(t);
                  LocalPopChoice(u_40);
                }
              else
                {
                  t = t_40;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm))
{
  ATerm m_12 (ATerm t)
  {
    ATerm w_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_88(t);
        LocalPopChoice(x_40);
      }
    else
      {
        t = w_40;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_12 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_88);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, m_12, a_89, b_89, w_12);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm u_88 (ATerm))
{
  ATerm x_12 (ATerm t)
  {
    ATerm y_12 (ATerm t)
    {
      ATerm y_40;
      y_40 = t;
      {
        ATerm t_162 = NULL;
        ATerm u_162 = NULL;
        t = term_r_37;
        {
          t = get_config_0(t);
          {
            u_162 = t;
            if(((t_162 != NULL) && (t_162 != u_162)))
              _fail(u_162);
            else
              t_162 = u_162;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATempty, not_null(t_162)));
          t = printnl_0(t);
        }
      }
      t = y_40;
      return(t);
    }
    t = if_verbose2_1(t, y_12);
    return(t);
  }
  t = iowrap_4(t, s_88, t_88, u_88, x_12);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_88 (ATerm), ATerm r_88 (ATerm))
{
  t = iowrap_3(t, q_88, r_88, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm n_88 (ATerm))
{
  ATerm z_12 (ATerm t)
  {
    t = _2(t, _id, n_88);
    return(t);
  }
  t = iowrap_2(t, z_12, _fail);
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
