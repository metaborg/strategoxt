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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  init_constant_terms();
}
ATerm term_v_54;
ATerm term_i_54;
ATerm term_x_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_e_51;
ATerm term_i_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_w_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_q_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_y_47;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_p_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_e_47;
ATerm term_i_46;
ATerm term_e_46;
ATerm term_x_45;
ATerm term_v_45;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_j_41;
ATerm term_l_40;
ATerm term_j_40;
ATerm term_b_40;
ATerm term_v_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_m_32;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_i_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_t_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_k_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_s_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_u_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_i_15;
ATerm term_w_13;
ATerm term_n_13;
ATerm term_b_13;
ATerm term_t_12;
ATerm term_j_12;
void init_constant_terms (void)
{
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Op_2, term_v_19, (ATerm) ATempty);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_ConstType_1, term_w_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s1", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("s2", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Var_1, term_k_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Var_1, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_n_20, term_p_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x'", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Var_1, term_r_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("y'", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Var_1, term_t_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Anno_2, term_s_20, term_u_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Call_2, term_y_20, (ATerm) ATempty);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_BAM_3, term_b_21, term_n_20, term_s_20);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_20);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Call_2, term_m_21, (ATerm) ATempty);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_BAM_3, term_v_21, term_p_20, term_u_20);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Dummy_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TupleDeclarations", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Op_2, term_b_22, term_b_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckConsError", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("error: in ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("constructor ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" not declared", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Var_1, term_q_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("o_1", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("CheckCons", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r_1", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("definition", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rule", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_23);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, term_z_25);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_20);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_28);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_30);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Dummy", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Op_2, term_e_33, (ATerm) ATempty);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Op_2, term_r_33, (ATerm) ATempty);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_34);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_35);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_36);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_40);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_40);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_g_47, term_k_39);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_k_25);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_25);
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym__2, term_k_48, term_k_39);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(sym__2, term_q_49, term_k_39);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__2, term_s_52, term_t_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_o_53, term_k_39);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym__3, term_s_52, term_t_52, (ATerm) ATempty);
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm Prim_2 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm));
ATerm Explode_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm n_111 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm r_74 (ATerm));
ATerm Specification_1 (ATerm, ATerm t_74 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm r_103 (ATerm));
ATerm timing_1 (ATerm, ATerm d_82 (ATerm));
ATerm spaste_1 (ATerm, ATerm z_110 (ATerm));
ATerm Rec_2 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm));
ATerm SDef_3 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm));
ATerm Let_2 (ATerm, ATerm l_73 (ATerm), ATerm m_73 (ATerm));
ATerm sboundin_3 (ATerm, ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm i_73 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm v_107 (ATerm, ATerm (ATerm)), ATerm w_107 (ATerm), ATerm x_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_107 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
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
ATerm manytd_1 (ATerm, ATerm q_86 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm k_111 (ATerm), ATerm l_111 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm a_110 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm d_74 (ATerm), ATerm e_74 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm v_110 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm g_108 (ATerm), ATerm h_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm a_108 (ATerm), ATerm b_108 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm t_107 (ATerm), ATerm u_107 (ATerm));
ATerm Fst_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm l_108 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm l_89 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm v_88 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm h_107 (ATerm), ATerm i_107 (ATerm, ATerm (ATerm)), ATerm j_107 (ATerm), ATerm k_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_107 (ATerm, ATerm (ATerm)), ATerm m_107 (ATerm));
ATerm substitute_5 (ATerm, ATerm o_107 (ATerm), ATerm p_107 (ATerm, ATerm (ATerm)), ATerm q_107 (ATerm), ATerm r_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_107 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm b_110 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm z_109 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm j_111 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm));
ATerm lchoice_1 (ATerm, ATerm i_111 (ATerm));
ATerm LChoice_2 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm f_111 (ATerm), ATerm g_111 (ATerm));
ATerm choice_1 (ATerm, ATerm h_111 (ATerm));
ATerm Choice_2 (ATerm, ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm RootApp_1 (ATerm, ATerm u_75 (ATerm));
ATerm App_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm n_100 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm d_72 (ATerm));
ATerm Build_1 (ATerm, ATerm e_72 (ATerm));
ATerm VarScope_1 (ATerm, ATerm e_111 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm o_74 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm s_83 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm g_92 (ATerm));
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm q_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm w_109 (ATerm));
ATerm oncetd_1 (ATerm, ATerm i_85 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm u_109 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm s_82 (ATerm), ATerm t_82 (ATerm));
ATerm repeat_1 (ATerm, ATerm v_82 (ATerm));
ATerm listtd_1 (ATerm, ATerm c_91 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm n_75 (ATerm));
ATerm Scope_2 (ATerm, ATerm h_72 (ATerm), ATerm i_72 (ATerm));
ATerm tboundin_3 (ATerm, ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm s_95 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm w_95 (ATerm), ATerm x_95 (ATerm));
ATerm diff_1 (ATerm, ATerm o_95 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm));
ATerm zip_1 (ATerm, ATerm b_92 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm j_83 (ATerm), ATerm k_83 (ATerm));
ATerm for_3 (ATerm, ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm o_83 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm t_83 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm o_100 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm w_85 (ATerm));
ATerm assert_1 (ATerm, ATerm m_100 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm p_74 (ATerm));
ATerm Constructors_1 (ATerm, ATerm k_74 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm j_100 (ATerm));
ATerm restore_always_2 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm i_100 (ATerm));
ATerm scope_2 (ATerm, ATerm k_100 (ATerm), ATerm l_100 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm m_97 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm o_70 (ATerm), ATerm p_70 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_90 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm t_100 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm q_103 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm x_101 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm y_97 (ATerm), ATerm z_97 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm j_96 (ATerm), ATerm k_96 (ATerm));
ATerm crush_2 (ATerm, ATerm h_95 (ATerm), ATerm i_95 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_103 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_101 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm t_105 (ATerm));
ATerm map_1 (ATerm, ATerm v_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm s_105 (ATerm));
ATerm Program_1 (ATerm, ATerm r_81 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_100 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_81 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_90 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_104 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_105 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_71 (ATerm), ATerm y_71 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_105 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_105 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm));
ATerm iowrap_4 (ATerm, ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm));
ATerm iowrap_3 (ATerm, ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm));
ATerm iowrap_2 (ATerm, ATerm k_102 (ATerm), ATerm l_102 (ATerm));
ATerm iowrap_1 (ATerm, ATerm h_102 (ATerm));
ATerm frontend_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Expl_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
  r_9 = t;
  p_9 :
  if(match_cons(r_9, sym_ExplodeCong_2))
    {
      s_9 = ATgetArgument(r_9, 0);
      q_9 = ATgetArgument(r_9, 1);
      {
        ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL;
        ATerm b_10 = NULL;
        ATerm c_10 = NULL;
        t = new_0(t);
        {
          b_10 = t;
          {
            if(((v_9 != NULL) && (v_9 != b_10)))
              _fail(b_10);
            else
              v_9 = b_10;
            {
              ATerm d_10 = NULL;
              t = new_0(t);
              {
                c_10 = t;
                {
                  if(((w_9 != NULL) && (w_9 != c_10)))
                    _fail(c_10);
                  else
                    w_9 = c_10;
                  {
                    ATerm e_10 = NULL;
                    t = new_0(t);
                    {
                      d_10 = t;
                      {
                        if(((x_9 != NULL) && (x_9 != d_10)))
                          _fail(d_10);
                        else
                          x_9 = d_10;
                        {
                          t = new_0(t);
                          {
                            e_10 = t;
                            if(((z_9 != NULL) && (z_9 != e_10)))
                              _fail(e_10);
                            else
                              z_9 = e_10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_9)), not_null(x_9)), not_null(w_9)), not_null(v_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(v_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_9)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(s_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_9))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_9), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_9)), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))))), (ATerm) ATmakeAppl(sym_Prim_2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_9))), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_9)))))));
      }
    }
  else
    {
      if(match_cons(r_9, sym_Build_1))
        {
          s_9 = ATgetArgument(r_9, 0);
          {
            ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
            ATerm m_10 = NULL;
            ATerm q_10 = NULL;
            t = new_0(t);
            {
              m_10 = t;
              {
                if(((j_10 != NULL) && (j_10 != m_10)))
                  _fail(m_10);
                else
                  j_10 = m_10;
                {
                  t = not_null(s_9);
                  {
                    ATerm c_0 (ATerm t)
                    {
                      ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
                      n_10 = t;
                      e_9 :
                      if(match_cons(n_10, sym_Explode_2))
                        {
                          o_10 = ATgetArgument(n_10, 0);
                          p_10 = ATgetArgument(n_10, 1);
                          {
                            if(((h_10 != NULL) && (h_10 != o_10)))
                              _fail(o_10);
                            else
                              h_10 = o_10;
                            {
                              if(((i_10 != NULL) && (i_10 != p_10)))
                                _fail(p_10);
                              else
                                i_10 = p_10;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, c_0);
                    {
                      q_10 = t;
                      if(((k_10 != NULL) && (k_10 != q_10)))
                        _fail(q_10);
                      else
                        k_10 = q_10;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_10)), not_null(h_10))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_10))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_10)))));
          }
        }
      else
        {
          if(match_cons(r_9, sym_Match_1))
            {
              s_9 = ATgetArgument(r_9, 0);
              {
                ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
                ATerm x_10 = NULL;
                ATerm y_10 = NULL;
                t = new_0(t);
                {
                  x_10 = t;
                  {
                    if(((u_10 != NULL) && (u_10 != x_10)))
                      _fail(x_10);
                    else
                      u_10 = x_10;
                    {
                      ATerm c_11 = NULL;
                      t = new_0(t);
                      {
                        y_10 = t;
                        {
                          if(((v_10 != NULL) && (v_10 != y_10)))
                            _fail(y_10);
                          else
                            v_10 = y_10;
                          {
                            t = not_null(s_9);
                            {
                              ATerm e_0 (ATerm t)
                              {
                                ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
                                z_10 = t;
                                n_9 :
                                if(match_cons(z_10, sym_Explode_2))
                                  {
                                    a_11 = ATgetArgument(z_10, 0);
                                    b_11 = ATgetArgument(z_10, 1);
                                    {
                                      if(((s_10 != NULL) && (s_10 != a_11)))
                                        _fail(a_11);
                                      else
                                        s_10 = a_11;
                                      {
                                        if(((t_10 != NULL) && (t_10 != b_11)))
                                          _fail(b_11);
                                        else
                                          t_10 = b_11;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_10));
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
                                c_11 = t;
                                if(((w_10 != NULL) && (w_10 != c_11)))
                                  _fail(c_11);
                                else
                                  w_10 = c_11;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_10)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_10))), (ATerm) ATmakeAppl(sym_Prim_2, term_t_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_10)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_10)), (ATerm) ATmakeAppl(sym_Op_2, term_b_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_10)), not_null(s_10)))))));
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
  ATerm h_12 = NULL,i_12 = NULL;
  h_12 = t;
  g_12 :
  if(match_cons(h_12, sym_Match_1))
    {
      i_12 = ATgetArgument(h_12, 0);
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
            ATerm o_12 = NULL;
            ATerm s_12 = NULL;
            t = new_0(t);
            {
              o_12 = t;
              {
                if(((m_12 != NULL) && (m_12 != o_12)))
                  _fail(o_12);
                else
                  m_12 = o_12;
                {
                  t = not_null(i_12);
                  {
                    ATerm h_0 (ATerm t)
                    {
                      ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
                      p_12 = t;
                      w_11 :
                      if(match_cons(p_12, sym_Anno_2))
                        {
                          q_12 = ATgetArgument(p_12, 0);
                          r_12 = ATgetArgument(p_12, 1);
                          {
                            if(((k_12 != NULL) && (k_12 != q_12)))
                              _fail(q_12);
                            else
                              k_12 = q_12;
                            {
                              if(((l_12 != NULL) && (l_12 != r_12)))
                                _fail(r_12);
                              else
                                l_12 = r_12;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_12)), not_null(k_12));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, h_0);
                    {
                      s_12 = t;
                      if(((n_12 != NULL) && (n_12 != s_12)))
                        _fail(s_12);
                      else
                        n_12 = s_12;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_12)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_n_13, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_12)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(l_12))))));
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            {
              ATerm o_13 = t;
              int p_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
                  ATerm x_12 = NULL;
                  ATerm a_13 = NULL;
                  t = new_0(t);
                  {
                    x_12 = t;
                    {
                      if(((v_12 != NULL) && (v_12 != x_12)))
                        _fail(x_12);
                      else
                        v_12 = x_12;
                      {
                        t = not_null(i_12);
                        {
                          ATerm j_0 (ATerm t)
                          {
                            ATerm y_12 = NULL,z_12 = NULL;
                            y_12 = t;
                            a_12 :
                            if(match_cons(y_12, sym_RootApp_1))
                              {
                                z_12 = ATgetArgument(y_12, 0);
                                {
                                  if(((u_12 != NULL) && (u_12 != z_12)))
                                    _fail(z_12);
                                  else
                                    u_12 = z_12;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_12));
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
                            a_13 = t;
                            if(((w_12 != NULL) && (w_12 != a_13)))
                              _fail(a_13);
                            else
                              w_12 = a_13;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(w_12)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_12))), not_null(u_12))));
                  LocalPopChoice(p_13);
                }
              else
                {
                  t = o_13;
                  {
                    ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
                    ATerm g_13 = NULL;
                    ATerm k_13 = NULL;
                    t = new_0(t);
                    {
                      g_13 = t;
                      {
                        if(((e_13 != NULL) && (e_13 != g_13)))
                          _fail(g_13);
                        else
                          e_13 = g_13;
                        {
                          t = not_null(i_12);
                          {
                            ATerm t_0 (ATerm t)
                            {
                              ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
                              h_13 = t;
                              e_12 :
                              if(match_cons(h_13, sym_App_2))
                                {
                                  i_13 = ATgetArgument(h_13, 0);
                                  j_13 = ATgetArgument(h_13, 1);
                                  {
                                    if(((d_13 != NULL) && (d_13 != i_13)))
                                      _fail(i_13);
                                    else
                                      d_13 = i_13;
                                    {
                                      if(((c_13 != NULL) && (c_13 != j_13)))
                                        _fail(j_13);
                                      else
                                        c_13 = j_13;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_13));
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
                              k_13 = t;
                              if(((f_13 != NULL) && (f_13 != k_13)))
                                _fail(k_13);
                              else
                                f_13 = k_13;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_13)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_13))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_13)), not_null(d_13)))));
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
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  b_14 = t;
  z_13 :
  if(match_cons(b_14, sym_Match_1))
    {
      c_14 = ATgetArgument(b_14, 0);
      a_14 :
      if(match_cons(c_14, sym_RootApp_1))
        {
          d_14 = ATgetArgument(c_14, 0);
          t = not_null(d_14);
        }
      else
        {
          if(match_cons(c_14, sym_App_2))
            {
              d_14 = ATgetArgument(c_14, 0);
              e_14 = ATgetArgument(c_14, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(d_14), not_null(e_14));
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
  ATerm q_14 = NULL,r_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_Match_1))
    {
      r_14 = ATgetArgument(q_14, 0);
      {
        ATerm t_14 = NULL,u_14 = NULL;
        ATerm y_14 = NULL;
        t = not_null(r_14);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL;
            v_14 = t;
            m_14 :
            if(match_cons(v_14, sym_RootApp_1))
              {
                w_14 = ATgetArgument(v_14, 0);
                n_14 :
                if(match_cons(w_14, sym_Match_1))
                  {
                    x_14 = ATgetArgument(w_14, 0);
                    {
                      if(((t_14 != NULL) && (t_14 != x_14)))
                        _fail(x_14);
                      else
                        t_14 = x_14;
                      t = not_null(t_14);
                    }
                  }
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
            y_14 = t;
            if(((u_14 != NULL) && (u_14 != y_14)))
              _fail(y_14);
            else
              u_14 = y_14;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(u_14));
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
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_Build_1))
    {
      t_15 = ATgetArgument(s_15, 0);
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
            ATerm z_15 = NULL;
            ATerm d_16 = NULL;
            t = new_0(t);
            {
              z_15 = t;
              {
                if(((x_15 != NULL) && (x_15 != z_15)))
                  _fail(z_15);
                else
                  x_15 = z_15;
                {
                  t = not_null(t_15);
                  {
                    ATerm w_0 (ATerm t)
                    {
                      ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
                      a_16 = t;
                      h_15 :
                      if(match_cons(a_16, sym_Anno_2))
                        {
                          b_16 = ATgetArgument(a_16, 0);
                          c_16 = ATgetArgument(a_16, 1);
                          {
                            if(((v_15 != NULL) && (v_15 != b_16)))
                              _fail(b_16);
                            else
                              v_15 = b_16;
                            {
                              if(((w_15 != NULL) && (w_15 != c_16)))
                                _fail(c_16);
                              else
                                w_15 = c_16;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_15));
                            }
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
                      d_16 = t;
                      if(((y_15 != NULL) && (y_15 != d_16)))
                        _fail(d_16);
                      else
                        y_15 = d_16;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_15)), not_null(v_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_15))));
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm x_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
                  ATerm i_16 = NULL;
                  ATerm l_16 = NULL;
                  t = new_0(t);
                  {
                    i_16 = t;
                    {
                      if(((g_16 != NULL) && (g_16 != i_16)))
                        _fail(i_16);
                      else
                        g_16 = i_16;
                      {
                        t = not_null(t_15);
                        {
                          ATerm x_0 (ATerm t)
                          {
                            ATerm j_16 = NULL,k_16 = NULL;
                            j_16 = t;
                            l_15 :
                            if(match_cons(j_16, sym_RootApp_1))
                              {
                                k_16 = ATgetArgument(j_16, 0);
                                {
                                  if(((f_16 != NULL) && (f_16 != k_16)))
                                    _fail(k_16);
                                  else
                                    f_16 = k_16;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_16));
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
                            l_16 = t;
                            if(((h_16 != NULL) && (h_16 != l_16)))
                              _fail(l_16);
                            else
                              h_16 = l_16;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_16))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(h_16))));
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = x_13;
                  {
                    ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
                    ATerm r_16 = NULL;
                    ATerm v_16 = NULL;
                    t = new_0(t);
                    {
                      r_16 = t;
                      {
                        if(((p_16 != NULL) && (p_16 != r_16)))
                          _fail(r_16);
                        else
                          p_16 = r_16;
                        {
                          t = not_null(t_15);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
                              s_16 = t;
                              p_15 :
                              if(match_cons(s_16, sym_App_2))
                                {
                                  t_16 = ATgetArgument(s_16, 0);
                                  u_16 = ATgetArgument(s_16, 1);
                                  {
                                    if(((n_16 != NULL) && (n_16 != t_16)))
                                      _fail(t_16);
                                    else
                                      n_16 = t_16;
                                    {
                                      if(((o_16 != NULL) && (o_16 != u_16)))
                                        _fail(u_16);
                                      else
                                        o_16 = u_16;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_16));
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
                              v_16 = t;
                              if(((q_16 != NULL) && (q_16 != v_16)))
                                _fail(v_16);
                              else
                                q_16 = v_16;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_16)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(n_16), not_null(o_16), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_16)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_16))));
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
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  m_17 = t;
  k_17 :
  if(match_cons(m_17, sym_Build_1))
    {
      n_17 = ATgetArgument(m_17, 0);
      l_17 :
      if(match_cons(n_17, sym_RootApp_1))
        {
          o_17 = ATgetArgument(n_17, 0);
          t = not_null(o_17);
        }
      else
        {
          if(match_cons(n_17, sym_App_2))
            {
              o_17 = ATgetArgument(n_17, 0);
              p_17 = ATgetArgument(n_17, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_17)), not_null(o_17));
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
ATerm As_2 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym_As_2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      {
        ATerm h_18 = NULL,j_18 = NULL;
        ATerm i_18 = NULL;
        t = SSLgetAnnotations(not_null(b_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
        {
          t = not_null(c_18);
          {
            ATerm l_18 = NULL;
            t = c_76(t);
            {
              j_18 = t;
              {
                t = not_null(d_18);
                {
                  ATerm n_18 = NULL;
                  t = d_76(t);
                  {
                    l_18 = t;
                    {
                      ATerm o_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(j_18), not_null(l_18)), not_null(h_18));
                      {
                        o_18 = t;
                        if(((n_18 != NULL) && (n_18 != o_18)))
                          _fail(o_18);
                        else
                          n_18 = o_18;
                      }
                      t = not_null(n_18);
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
ATerm Prim_2 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_Prim_2))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      {
        ATerm g_19 = NULL,i_19 = NULL;
        ATerm h_19 = NULL;
        t = SSLgetAnnotations(not_null(a_19));
        {
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
        }
        {
          t = not_null(b_19);
          {
            ATerm k_19 = NULL;
            t = z_71(t);
            {
              i_19 = t;
              {
                t = not_null(c_19);
                {
                  ATerm m_19 = NULL;
                  t = a_72(t);
                  {
                    k_19 = t;
                    {
                      ATerm n_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(i_19), not_null(k_19)), not_null(g_19));
                      {
                        n_19 = t;
                        if(((m_19 != NULL) && (m_19 != n_19)))
                          _fail(n_19);
                        else
                          m_19 = n_19;
                      }
                      t = not_null(m_19);
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
ATerm Explode_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  y_19 :
  if(match_cons(z_19, sym_Explode_2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      {
        ATerm f_20 = NULL,h_20 = NULL;
        ATerm g_20 = NULL;
        t = SSLgetAnnotations(not_null(z_19));
        {
          g_20 = t;
          if(((f_20 != NULL) && (f_20 != g_20)))
            _fail(g_20);
          else
            f_20 = g_20;
        }
        {
          t = not_null(a_20);
          {
            ATerm j_20 = NULL;
            t = y_75(t);
            {
              h_20 = t;
              {
                t = not_null(b_20);
                {
                  ATerm l_20 = NULL;
                  t = z_75(t);
                  {
                    j_20 = t;
                    {
                      ATerm m_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(h_20), not_null(j_20)), not_null(f_20));
                      {
                        m_20 = t;
                        if(((l_20 != NULL) && (l_20 != m_20)))
                          _fail(m_20);
                        else
                          l_20 = m_20;
                      }
                      t = not_null(l_20);
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
ATerm pat_td_1 (ATerm t, ATerm n_111 (ATerm))
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_111(t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = pat_td_1(t, n_111);
                return(t);
              }
              t = fetch_1(t, c_1);
              return(t);
            }
            t = Op_2(t, _id, a_1);
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, n_111);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
                  {
                    ATerm l_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = pat_td_1(t, n_111);
                          return(t);
                        }
                        t = Explode_2(t, e_1, _id);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = l_14;
                        {
                          ATerm s_14 = t;
                          int z_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_1 (ATerm t)
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_111);
                                  return(t);
                                }
                                t = fetch_1(t, h_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, g_1);
                              LocalPopChoice(z_14);
                            }
                          else
                            {
                              t = s_14;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = pat_td_1(t, n_111);
                                  return(t);
                                }
                                t = As_2(t, _id, j_1);
                              }
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
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym_Build_1))
    {
      e_21 = ATgetArgument(d_21, 0);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = NULL,h_21 = NULL;
            ATerm l_21 = NULL;
            t = not_null(e_21);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
                i_21 = t;
                v_20 :
                if(match_cons(i_21, sym_RootApp_1))
                  {
                    j_21 = ATgetArgument(i_21, 0);
                    w_20 :
                    if(match_cons(j_21, sym_Build_1))
                      {
                        k_21 = ATgetArgument(j_21, 0);
                        {
                          if(((g_21 != NULL) && (g_21 != k_21)))
                            _fail(k_21);
                          else
                            g_21 = k_21;
                          t = not_null(g_21);
                        }
                      }
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
              t = pat_td_1(t, k_1);
              {
                l_21 = t;
                if(((h_21 != NULL) && (h_21 != l_21)))
                  _fail(l_21);
                else
                  h_21 = l_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(h_21));
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
              ATerm u_21 = NULL;
              t = not_null(e_21);
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
                  q_21 = t;
                  z_20 :
                  if(match_cons(q_21, sym_App_2))
                    {
                      r_21 = ATgetArgument(q_21, 0);
                      t_21 = ATgetArgument(q_21, 1);
                      a_21 :
                      if(match_cons(r_21, sym_Build_1))
                        {
                          s_21 = ATgetArgument(r_21, 0);
                          {
                            if(((o_21 != NULL) && (o_21 != s_21)))
                              _fail(s_21);
                            else
                              o_21 = s_21;
                            {
                              if(((n_21 != NULL) && (n_21 != t_21)))
                                _fail(t_21);
                              else
                                n_21 = t_21;
                              t = not_null(o_21);
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
                  u_21 = t;
                  if(((p_21 != NULL) && (p_21 != u_21)))
                    _fail(u_21);
                  else
                    p_21 = u_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(p_21));
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
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  ATerm l_22 (ATerm t)
  {
    ATerm i_22 = NULL;
    ATerm j_22 = NULL;
    t = not_null(f_22);
    {
      ATerm g_15 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_15;
        }
      {
        t = new_0(t);
        {
          j_22 = t;
          if(((i_22 != NULL) && (i_22 != j_22)))
            _fail(j_22);
          else
            i_22 = j_22;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(i_22)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_22)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_22))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_22))));
    return(t);
  }
  ATerm m_22 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_15, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_22))));
    return(t);
  }
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym_Var_1))
    {
      g_22 = ATgetArgument(f_22, 0);
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_22(t);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            t = m_22(t);
          }
      }
    }
  else
    {
      t = l_22(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  s_22 :
  if(match_cons(t_22, sym_Prim_2))
    {
      u_22 = ATgetArgument(t_22, 0);
      v_22 = ATgetArgument(t_22, 1);
      {
        ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
        ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
        t = not_null(v_22);
        {
          ATerm n_1 (ATerm t)
          {
            ATerm m_15 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_15;
              }
            return(t);
          }
          t = fetch_1(t, n_1);
          {
            t = not_null(v_22);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm p_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, p_1);
                {
                  b_23 = t;
                  q_22 :
                  if(match_cons(b_23, sym__2))
                    {
                      c_23 = ATgetArgument(b_23, 0);
                      d_23 = ATgetArgument(b_23, 1);
                      r_22 :
                      if(match_cons(d_23, sym__2))
                        {
                          e_23 = ATgetArgument(d_23, 0);
                          f_23 = ATgetArgument(d_23, 1);
                          {
                            if(((y_22 != NULL) && (y_22 != c_23)))
                              _fail(c_23);
                            else
                              y_22 = c_23;
                            {
                              if(((z_22 != NULL) && (z_22 != e_23)))
                                _fail(e_23);
                              else
                                z_22 = e_23;
                              if(((a_23 != NULL) && (a_23 != f_23)))
                                _fail(f_23);
                              else
                                a_23 = f_23;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(z_22)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_22), not_null(a_23))));
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
  ATerm q_1 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = desugarRule_0(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
        }
      }
    {
      ATerm s_1 (ATerm t)
      {
        ATerm q_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(u_15);
          }
        else
          {
            t = q_15;
            {
              ATerm e_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(m_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm y_16 = t;
                          int z_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(z_16);
                            }
                          else
                            {
                              t = y_16;
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
      t = repeat_2(t, s_1, _id);
    }
    return(t);
  }
  t = topdown_1(t, q_1);
  return(t);
}
ATerm desugar_spec_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = SDef_3(t, _id, _id, desugar_0);
    return(t);
  }
  t = map_1(t, t_1);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  m_23 :
  if(match_cons(n_23, sym_Strategies_1))
    {
      o_23 = ATgetArgument(n_23, 0);
      {
        ATerm r_23 = NULL,t_23 = NULL;
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(n_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
        {
          t = not_null(o_23);
          {
            ATerm v_23 = NULL;
            t = r_74(t);
            {
              t_23 = t;
              {
                ATerm w_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_23)), not_null(r_23));
                {
                  w_23 = t;
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                }
                t = not_null(v_23);
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
ATerm Specification_1 (ATerm t, ATerm t_74 (ATerm))
{
  ATerm g_24 = NULL,h_24 = NULL;
  g_24 = t;
  f_24 :
  if(match_cons(g_24, sym_Specification_1))
    {
      h_24 = ATgetArgument(g_24, 0);
      {
        ATerm k_24 = NULL,m_24 = NULL;
        ATerm l_24 = NULL;
        t = SSLgetAnnotations(not_null(g_24));
        {
          l_24 = t;
          if(((k_24 != NULL) && (k_24 != l_24)))
            _fail(l_24);
          else
            k_24 = l_24;
        }
        {
          t = not_null(h_24);
          {
            ATerm o_24 = NULL;
            t = t_74(t);
            {
              m_24 = t;
              {
                ATerm p_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(m_24)), not_null(k_24));
                {
                  p_24 = t;
                  if(((o_24 != NULL) && (o_24 != p_24)))
                    _fail(p_24);
                  else
                    o_24 = p_24;
                }
                t = not_null(o_24);
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
ATerm if_verbose3_1 (ATerm t, ATerm r_103 (ATerm))
{
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17;
      c_17 = t;
      {
        ATerm v_24 = NULL;
        ATerm w_24 = NULL;
        t = term_d_17;
        {
          t = get_config_0(t);
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), term_e_17);
          t = geq_0(t);
        }
      }
      t = c_17;
      t = r_103(t);
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
      }
    }
  return(t);
}
ATerm timing_1 (ATerm t, ATerm d_82 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm f_17;
    f_17 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, d_82);
    }
    t = f_17;
    return(t);
  }
  t = if_verbose3_1(t, u_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm z_110 (ATerm))
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        t = split_2(t, _id, z_110);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
            e_25 = t;
            z_24 :
            if(match_cons(e_25, sym__2))
              {
                f_25 = ATgetArgument(e_25, 0);
                j_25 = ATgetArgument(e_25, 1);
                a_25 :
                if(match_cons(f_25, sym_SDef_3))
                  {
                    g_25 = ATgetArgument(f_25, 0);
                    h_25 = ATgetArgument(f_25, 1);
                    i_25 = ATgetArgument(f_25, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_25), not_null(h_25), not_null(i_25));
                  }
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
          t = zip_1(t, w_1);
        }
        return(t);
      }
      t = Let_2(t, v_1, _id);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = split_2(t, _id, z_110);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                  n_25 = t;
                  c_25 :
                  if(match_cons(n_25, sym__2))
                    {
                      o_25 = ATgetArgument(n_25, 0);
                      r_25 = ATgetArgument(n_25, 1);
                      d_25 :
                      if(match_cons(o_25, sym_VarDec_2))
                        {
                          p_25 = ATgetArgument(o_25, 0);
                          q_25 = ATgetArgument(o_25, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_25), not_null(q_25));
                        }
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
                t = zip_1(t, y_1);
              }
              return(t);
            }
            t = SDef_3(t, _id, x_1, _id);
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm z_1 (ATerm t)
              {
                t = z_110(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, z_1, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm))
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  c_26 :
  if(match_cons(d_26, sym_Rec_2))
    {
      e_26 = ATgetArgument(d_26, 0);
      f_26 = ATgetArgument(d_26, 1);
      {
        ATerm j_26 = NULL,l_26 = NULL;
        ATerm k_26 = NULL;
        t = SSLgetAnnotations(not_null(d_26));
        {
          k_26 = t;
          if(((j_26 != NULL) && (j_26 != k_26)))
            _fail(k_26);
          else
            j_26 = k_26;
        }
        {
          t = not_null(e_26);
          {
            ATerm n_26 = NULL;
            t = j_73(t);
            {
              l_26 = t;
              {
                t = not_null(f_26);
                {
                  ATerm p_26 = NULL;
                  t = k_73(t);
                  {
                    n_26 = t;
                    {
                      ATerm q_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_26), not_null(n_26)), not_null(j_26));
                      {
                        q_26 = t;
                        if(((p_26 != NULL) && (p_26 != q_26)))
                          _fail(q_26);
                        else
                          p_26 = q_26;
                      }
                      t = not_null(p_26);
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
ATerm SDef_3 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym_SDef_3))
    {
      e_27 = ATgetArgument(d_27, 0);
      f_27 = ATgetArgument(d_27, 1);
      g_27 = ATgetArgument(d_27, 2);
      {
        ATerm l_27 = NULL,n_27 = NULL;
        ATerm m_27 = NULL;
        t = SSLgetAnnotations(not_null(d_27));
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
        {
          t = not_null(e_27);
          {
            ATerm p_27 = NULL;
            t = n_73(t);
            {
              n_27 = t;
              {
                t = not_null(f_27);
                {
                  ATerm k_28 = NULL;
                  t = o_73(t);
                  {
                    p_27 = t;
                    {
                      t = not_null(g_27);
                      {
                        ATerm m_28 = NULL;
                        t = p_73(t);
                        {
                          k_28 = t;
                          {
                            ATerm n_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_27), not_null(p_27), not_null(k_28)), not_null(l_27));
                            {
                              n_28 = t;
                              if(((m_28 != NULL) && (m_28 != n_28)))
                                _fail(n_28);
                              else
                                m_28 = n_28;
                            }
                            t = not_null(m_28);
                          }
                        }
                      }
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
ATerm Let_2 (ATerm t, ATerm l_73 (ATerm), ATerm m_73 (ATerm))
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym_Let_2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      {
        ATerm j_29 = NULL,l_29 = NULL;
        ATerm k_29 = NULL;
        t = SSLgetAnnotations(not_null(d_29));
        {
          k_29 = t;
          if(((j_29 != NULL) && (j_29 != k_29)))
            _fail(k_29);
          else
            j_29 = k_29;
        }
        {
          t = not_null(e_29);
          {
            ATerm n_29 = NULL;
            t = l_73(t);
            {
              l_29 = t;
              {
                t = not_null(f_29);
                {
                  ATerm p_29 = NULL;
                  t = m_73(t);
                  {
                    n_29 = t;
                    {
                      ATerm v_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(l_29), not_null(n_29)), not_null(j_29));
                      {
                        v_29 = t;
                        if(((p_29 != NULL) && (p_29 != v_29)))
                          _fail(v_29);
                        else
                          p_29 = v_29;
                      }
                      t = not_null(p_29);
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
ATerm sboundin_3 (ATerm t, ATerm a_111 (ATerm), ATerm b_111 (ATerm), ATerm c_111 (ATerm))
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, a_111, a_111);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, c_111, c_111, a_111);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = Rec_2(t, c_111, a_111);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym_Rec_2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      t = (ATerm) ATinsert(ATempty, not_null(e_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym_SDef_3))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      v_30 = ATgetArgument(s_30, 2);
      {
        t = not_null(u_30);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
            z_30 = t;
            q_30 :
            if(match_cons(z_30, sym_VarDec_2))
              {
                a_31 = ATgetArgument(z_30, 0);
                b_31 = ATgetArgument(z_30, 1);
                t = not_null(a_31);
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
ATerm Bind1_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym_Let_2))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      {
        t = not_null(k_31);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
            o_31 = t;
            h_31 :
            if(match_cons(o_31, sym_SDef_3))
              {
                p_31 = ATgetArgument(o_31, 0);
                q_31 = ATgetArgument(o_31, 1);
                r_31 = ATgetArgument(o_31, 2);
                t = not_null(p_31);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm c_32 = NULL,d_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_SVar_1))
    {
      d_32 = ATgetArgument(c_32, 0);
      {
        ATerm g_32 = NULL,i_32 = NULL;
        ATerm h_32 = NULL;
        t = SSLgetAnnotations(not_null(c_32));
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
        {
          t = not_null(d_32);
          {
            ATerm k_32 = NULL;
            t = i_73(t);
            {
              i_32 = t;
              {
                ATerm l_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(i_32)), not_null(g_32));
                {
                  l_32 = t;
                  if(((k_32 != NULL) && (k_32 != l_32)))
                    _fail(l_32);
                  else
                    k_32 = l_32;
                }
                t = not_null(k_32);
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
  ATerm c_2 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, c_2, sboundin_3, spaste_1);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm v_107 (ATerm, ATerm (ATerm)), ATerm w_107 (ATerm), ATerm x_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm y_107 (ATerm, ATerm (ATerm)))
{
  ATerm v_32 = NULL;
  v_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), (ATerm) ATempty);
    {
      ATerm g_33 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, v_107);
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              {
                t = RnBinding_2(t, w_107, y_107);
                t = DistBinding_2(t, g_33, x_107);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, d_2);
        return(t);
      }
      t = g_33(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm h_33 (ATerm t, ATerm i_33 (ATerm))
  {
    t = Scope_2(t, i_33, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, h_33);
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
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  k_33 :
  if(match_cons(m_33, sym_Var_1))
    {
      n_33 = ATgetArgument(m_33, 0);
      l_33 :
      if(match_cons(n_33, sym_ListVar_1))
        {
          o_33 = ATgetArgument(n_33, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_33));
        }
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
  ATerm f_34 = NULL,g_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym_Build_1))
    {
      g_34 = ATgetArgument(f_34, 0);
      {
        ATerm i_34 = NULL,j_34 = NULL;
        ATerm v_34 = NULL;
        t = not_null(g_34);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
            k_34 = t;
            t_33 :
            if(match_cons(k_34, sym_Op_2))
              {
                l_34 = ATgetArgument(k_34, 0);
                m_34 = ATgetArgument(k_34, 1);
                u_33 :
                if(match_string(l_34, "Cons"))
                  {
                    v_33 :
                    if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
                      {
                        n_34 = ATgetFirst((ATermList) m_34);
                        q_34 = (ATerm) ATgetNext((ATermList) m_34);
                        w_33 :
                        if(match_cons(n_34, sym_Var_1))
                          {
                            o_34 = ATgetArgument(n_34, 0);
                            x_33 :
                            if(match_cons(o_34, sym_ListVar_1))
                              {
                                p_34 = ATgetArgument(o_34, 0);
                                y_33 :
                                if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
                                  {
                                    r_34 = ATgetFirst((ATermList) q_34);
                                    u_34 = (ATerm) ATgetNext((ATermList) q_34);
                                    z_33 :
                                    if(match_cons(r_34, sym_Op_2))
                                      {
                                        s_34 = ATgetArgument(r_34, 0);
                                        t_34 = ATgetArgument(r_34, 1);
                                        a_34 :
                                        if(match_string(s_34, "Nil"))
                                          {
                                            b_34 :
                                            if(((ATgetType(t_34) == AT_LIST) && ATisEmpty(t_34)))
                                              {
                                                c_34 :
                                                if(((ATgetType(u_34) == AT_LIST) && ATisEmpty(u_34)))
                                                  {
                                                    {
                                                      if(((i_34 != NULL) && (i_34 != p_34)))
                                                        _fail(p_34);
                                                      else
                                                        i_34 = p_34;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_34));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
            v_34 = t;
            if(((j_34 != NULL) && (j_34 != v_34)))
              _fail(v_34);
            else
              j_34 = v_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_34));
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
  ATerm l_36 = NULL,m_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym_Match_1))
    {
      m_36 = ATgetArgument(l_36, 0);
      {
        ATerm o_36 = NULL,p_36 = NULL;
        ATerm b_37 = NULL;
        t = not_null(m_36);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
            q_36 = t;
            h_35 :
            if(match_cons(q_36, sym_Op_2))
              {
                r_36 = ATgetArgument(q_36, 0);
                s_36 = ATgetArgument(q_36, 1);
                i_35 :
                if(match_string(r_36, "Cons"))
                  {
                    m_35 :
                    if(((ATgetType(s_36) == AT_LIST) && !(ATisEmpty(s_36))))
                      {
                        t_36 = ATgetFirst((ATermList) s_36);
                        w_36 = (ATerm) ATgetNext((ATermList) s_36);
                        n_35 :
                        if(match_cons(t_36, sym_Var_1))
                          {
                            u_36 = ATgetArgument(t_36, 0);
                            o_35 :
                            if(match_cons(u_36, sym_ListVar_1))
                              {
                                v_36 = ATgetArgument(u_36, 0);
                                t_35 :
                                if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
                                  {
                                    x_36 = ATgetFirst((ATermList) w_36);
                                    a_37 = (ATerm) ATgetNext((ATermList) w_36);
                                    u_35 :
                                    if(match_cons(x_36, sym_Op_2))
                                      {
                                        y_36 = ATgetArgument(x_36, 0);
                                        z_36 = ATgetArgument(x_36, 1);
                                        z_35 :
                                        if(match_string(y_36, "Nil"))
                                          {
                                            a_36 :
                                            if(((ATgetType(z_36) == AT_LIST) && ATisEmpty(z_36)))
                                              {
                                                b_36 :
                                                if(((ATgetType(a_37) == AT_LIST) && ATisEmpty(a_37)))
                                                  {
                                                    {
                                                      if(((o_36 != NULL) && (o_36 != v_36)))
                                                        _fail(v_36);
                                                      else
                                                        o_36 = v_36;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_36));
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            _fail(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
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
            b_37 = t;
            if(((p_36 != NULL) && (p_36 != b_37)))
              _fail(b_37);
            else
              p_36 = b_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_36));
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
  ATerm j_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym_Wld_0))
    {
      ATerm n_37 = NULL,p_37 = NULL;
      ATerm e_18;
      e_18 = t;
      {
        ATerm o_37 = NULL;
        t = SSLgetAnnotations(not_null(j_37));
        {
          o_37 = t;
          if(((n_37 != NULL) && (n_37 != o_37)))
            _fail(o_37);
          else
            n_37 = o_37;
        }
      }
      t = e_18;
      {
        ATerm q_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(n_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
        t = not_null(p_37);
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
  ATerm f_18 = t;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm g_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(k_18);
          }
        else
          {
            t = g_18;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, g_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_18;
    }
  return(t);
}
ATerm Con_3 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
  b_38 = t;
  a_38 :
  if(match_cons(b_38, sym_Con_3))
    {
      c_38 = ATgetArgument(b_38, 0);
      d_38 = ATgetArgument(b_38, 1);
      e_38 = ATgetArgument(b_38, 2);
      {
        ATerm j_38 = NULL,l_38 = NULL;
        ATerm k_38 = NULL;
        t = SSLgetAnnotations(not_null(b_38));
        {
          k_38 = t;
          if(((j_38 != NULL) && (j_38 != k_38)))
            _fail(k_38);
          else
            j_38 = k_38;
        }
        {
          t = not_null(c_38);
          {
            ATerm n_38 = NULL;
            t = p_75(t);
            {
              l_38 = t;
              {
                t = not_null(d_38);
                {
                  ATerm p_38 = NULL;
                  t = q_75(t);
                  {
                    n_38 = t;
                    {
                      t = not_null(e_38);
                      {
                        ATerm r_38 = NULL;
                        t = r_75(t);
                        {
                          p_38 = t;
                          {
                            ATerm s_38 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(l_38), not_null(n_38), not_null(p_38)), not_null(j_38));
                            {
                              s_38 = t;
                              if(((r_38 != NULL) && (r_38 != s_38)))
                                _fail(s_38);
                              else
                                r_38 = s_38;
                            }
                            t = not_null(r_38);
                          }
                        }
                      }
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
  ATerm m_18 = t;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, h_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_18;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  d_39 = t;
  b_39 :
  if(match_cons(d_39, sym_SRule_1))
    {
      e_39 = ATgetArgument(d_39, 0);
      c_39 :
      if(match_cons(e_39, sym_StratRule_3))
        {
          f_39 = ATgetArgument(e_39, 0);
          g_39 = ATgetArgument(e_39, 1);
          h_39 = ATgetArgument(e_39, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_39)), (ATerm) ATmakeAppl(sym_Where_1, not_null(h_39))), not_null(f_39)));
        }
      else
        {
          if(match_cons(e_39, sym_Rule_3))
            {
              f_39 = ATgetArgument(e_39, 0);
              g_39 = ATgetArgument(e_39, 1);
              h_39 = ATgetArgument(e_39, 2);
              {
                t = not_null(f_39);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(g_39);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(g_39))), (ATerm) ATmakeAppl(sym_Where_1, not_null(h_39))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_39))));
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
ATerm Rcon_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  e_40 = t;
  c_40 :
  if(match_cons(e_40, sym_SRule_1))
    {
      f_40 = ATgetArgument(e_40, 0);
      d_40 :
      if(match_cons(f_40, sym_Rule_3))
        {
          g_40 = ATgetArgument(f_40, 0);
          h_40 = ATgetArgument(f_40, 1);
          i_40 = ATgetArgument(f_40, 2);
          {
            ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
            ATerm u_40 = NULL;
            ATerm a_41 = NULL;
            t = new_0(t);
            {
              u_40 = t;
              {
                if(((r_40 != NULL) && (r_40 != u_40)))
                  _fail(u_40);
                else
                  r_40 = u_40;
                {
                  t = not_null(g_40);
                  {
                    ATerm i_41 = NULL;
                    ATerm i_2 (ATerm t)
                    {
                      ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
                      v_40 = t;
                      t_39 :
                      if(match_cons(v_40, sym_Con_3))
                        {
                          w_40 = ATgetArgument(v_40, 0);
                          y_40 = ATgetArgument(v_40, 1);
                          z_40 = ATgetArgument(v_40, 2);
                          u_39 :
                          if(match_cons(w_40, sym_Var_1))
                            {
                              x_40 = ATgetArgument(w_40, 0);
                              {
                                if(((q_40 != NULL) && (q_40 != x_40)))
                                  _fail(x_40);
                                else
                                  q_40 = x_40;
                                {
                                  if(((o_40 != NULL) && (o_40 != y_40)))
                                    _fail(y_40);
                                  else
                                    o_40 = y_40;
                                  {
                                    if(((m_40 != NULL) && (m_40 != z_40)))
                                      _fail(z_40);
                                    else
                                      m_40 = z_40;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_40));
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
                    t = oncetd_1(t, i_2);
                    {
                      a_41 = t;
                      {
                        if(((s_40 != NULL) && (s_40 != a_41)))
                          _fail(a_41);
                        else
                          s_40 = a_41;
                        {
                          t = not_null(h_40);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
                              b_41 = t;
                              x_39 :
                              if(match_cons(b_41, sym_Con_3))
                                {
                                  c_41 = ATgetArgument(b_41, 0);
                                  e_41 = ATgetArgument(b_41, 1);
                                  f_41 = ATgetArgument(b_41, 2);
                                  y_39 :
                                  if(match_cons(c_41, sym_Var_1))
                                    {
                                      d_41 = ATgetArgument(c_41, 0);
                                      z_39 :
                                      if(match_cons(f_41, sym_Call_2))
                                        {
                                          g_41 = ATgetArgument(f_41, 0);
                                          h_41 = ATgetArgument(f_41, 1);
                                          a_40 :
                                          if(((ATgetType(h_41) == AT_LIST) && ATisEmpty(h_41)))
                                            {
                                              {
                                                if(((q_40 != NULL) && (q_40 != d_41)))
                                                  _fail(d_41);
                                                else
                                                  q_40 = d_41;
                                                {
                                                  if(((p_40 != NULL) && (p_40 != e_41)))
                                                    _fail(e_41);
                                                  else
                                                    p_40 = e_41;
                                                  {
                                                    if(((n_40 != NULL) && (n_40 != g_41)))
                                                      _fail(g_41);
                                                    else
                                                      n_40 = g_41;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_40));
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
                            t = oncetd_1(t, j_2);
                            {
                              i_41 = t;
                              if(((t_40 != NULL) && (t_40 != i_41)))
                                _fail(i_41);
                              else
                                t_40 = i_41;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_40)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_40), not_null(t_40), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_40), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(n_40), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_40), not_null(p_40), term_i_15)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_40)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_40)))))));
          }
        }
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
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0(t);
          t = desugarRule_0(t);
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          {
            ATerm v_18 = t;
            int w_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2(t, _id, desugarRule_0);
                LocalPopChoice(w_18);
              }
            else
              {
                t = v_18;
                t = RtoS_0(t);
              }
          }
        }
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
      }
    }
  return(t);
}
ATerm ListVarScope_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  u_41 :
  if(match_cons(v_41, sym_Scope_2))
    {
      w_41 = ATgetArgument(v_41, 0);
      x_41 = ATgetArgument(v_41, 1);
      {
        ATerm a_42 = NULL;
        ATerm e_42 = NULL;
        t = not_null(w_41);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_42 = NULL,c_42 = NULL;
                b_42 = t;
                s_41 :
                if(match_cons(b_42, sym_ListVar_1))
                  {
                    c_42 = ATgetArgument(b_42, 0);
                    t = not_null(c_42);
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(y_18);
              }
            else
              {
                t = x_18;
                {
                }
              }
            return(t);
          }
          t = map_1(t, k_2);
          {
            e_42 = t;
            if(((a_42 != NULL) && (a_42 != e_42)))
              _fail(e_42);
            else
              a_42 = e_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(a_42), not_null(x_41));
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
  ATerm l_2 (ATerm t)
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListVarScope_0(t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = f_19;
            t = desugarRule_0(t);
          }
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
        }
      }
    {
      ATerm m_2 (ATerm t)
      {
        ATerm l_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = HL_0(t);
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                {
                  ATerm r_19 = t;
                  int s_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ListMatch_0(t);
                      LocalPopChoice(s_19);
                    }
                  else
                    {
                      t = r_19;
                      t = ListBuild_0(t);
                    }
                }
              }
            LocalPopChoice(o_19);
          }
        else
          {
            t = l_19;
            t = SingleListVar_0(t);
          }
        return(t);
      }
      t = repeat_2(t, m_2, _id);
    }
    return(t);
  }
  t = topdown_1(t, l_2);
  return(t);
}
ATerm DeclareVariables_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  o_42 = t;
  n_42 :
  if(match_cons(o_42, sym_SDef_3))
    {
      p_42 = ATgetArgument(o_42, 0);
      q_42 = ATgetArgument(o_42, 1);
      r_42 = ATgetArgument(o_42, 2);
      {
        ATerm v_42 = NULL;
        ATerm w_42 = NULL;
        t = not_null(r_42);
        {
          t = tvars_0(t);
          {
            w_42 = t;
            if(((v_42 != NULL) && (v_42 != w_42)))
              _fail(w_42);
            else
              v_42 = w_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(p_42), not_null(q_42), (ATerm) ATmakeAppl(sym_Scope_2, not_null(v_42), not_null(r_42)));
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
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_RDef_3))
    {
      d_43 = ATgetArgument(c_43, 0);
      e_43 = ATgetArgument(c_43, 1);
      f_43 = ATgetArgument(c_43, 2);
      {
        ATerm j_43 = NULL;
        ATerm k_43 = NULL;
        t = not_null(f_43);
        {
          t = tvars_0(t);
          {
            k_43 = t;
            if(((j_43 != NULL) && (j_43 != k_43)))
              _fail(k_43);
            else
              j_43 = k_43;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(d_43), not_null(e_43), (ATerm) ATmakeAppl(sym_Scope_2, not_null(j_43), (ATerm) ATmakeAppl(sym_SRule_1, not_null(f_43))));
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
  ATerm o_43 = NULL;
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_43)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  b_44 = t;
  y_43 :
  if(match_cons(b_44, sym_OpDecl_2))
    {
      e_44 = ATgetArgument(b_44, 0);
      f_44 = ATgetArgument(b_44, 1);
      z_43 :
      if(match_cons(f_44, sym_FunType_2))
        {
          g_44 = ATgetArgument(f_44, 0);
          a_44 = ATgetArgument(f_44, 1);
          {
            ATerm m_44 = NULL,n_44 = NULL,x_44 = NULL;
            ATerm t_19;
            t_19 = t;
            {
              ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
              t = not_null(g_44);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm q_44 = NULL,s_44 = NULL;
                  t = new_0(t);
                  {
                    ATerm u_19;
                    u_19 = t;
                    {
                      ATerm r_44 = NULL;
                      r_44 = t;
                      if(((q_44 != NULL) && (q_44 != r_44)))
                        _fail(r_44);
                      else
                        q_44 = r_44;
                    }
                    t = u_19;
                    {
                      ATerm t_44 = NULL;
                      t_44 = t;
                      if(((s_44 != NULL) && (s_44 != t_44)))
                        _fail(t_44);
                      else
                        s_44 = t_44;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(q_44), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19)), not_null(s_44));
                    }
                  }
                  return(t);
                }
                t = map_1(t, n_2);
                {
                  t = unzip_1(t, _id);
                  {
                    u_44 = t;
                    w_43 :
                    if(match_cons(u_44, sym__2))
                      {
                        v_44 = ATgetArgument(u_44, 0);
                        w_44 = ATgetArgument(u_44, 1);
                        {
                          if(((m_44 != NULL) && (m_44 != v_44)))
                            _fail(v_44);
                          else
                            m_44 = v_44;
                          if(((n_44 != NULL) && (n_44 != w_44)))
                            _fail(w_44);
                          else
                            n_44 = w_44;
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
            t = t_19;
            {
              ATerm y_44 = NULL;
              t = not_null(n_44);
              {
                t = map_1(t, MkCall_0);
                {
                  y_44 = t;
                  if(((x_44 != NULL) && (x_44 != y_44)))
                    _fail(y_44);
                  else
                    x_44 = y_44;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_44), not_null(m_44), (ATerm) ATmakeAppl(sym_Cong_2, not_null(e_44), not_null(x_44)));
            }
          }
        }
      else
        {
          if(match_cons(f_44, sym_ConstType_1))
            {
              g_44 = ATgetArgument(f_44, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(e_44), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(e_44), (ATerm) ATempty));
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
  ATerm m_45 = NULL,n_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym_Constructors_1))
    {
      n_45 = ATgetArgument(m_45, 0);
      {
        t = not_null(n_45);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(m_45, sym_Sorts_1))
        {
          n_45 = ATgetArgument(m_45, 0);
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
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,f_47 = NULL;
  r_46 = t;
  l_46 :
  if(match_cons(r_46, sym_Specification_1))
    {
      s_46 = ATgetArgument(r_46, 0);
      m_46 :
      if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
        {
          t_46 = ATgetFirst((ATermList) s_46);
          x_46 = (ATerm) ATgetNext((ATermList) s_46);
          n_46 :
          if(match_cons(t_46, sym_Signature_1))
            {
              w_46 = ATgetArgument(t_46, 0);
              o_46 :
              if(((ATgetType(x_46) == AT_LIST) && !(ATisEmpty(x_46))))
                {
                  y_46 = ATgetFirst((ATermList) x_46);
                  f_47 = (ATerm) ATgetNext((ATermList) x_46);
                  p_46 :
                  if(match_cons(y_46, sym_Strategies_1))
                    {
                      z_46 = ATgetArgument(y_46, 0);
                      q_46 :
                      if(((ATgetType(f_47) == AT_LIST) && ATisEmpty(f_47)))
                        {
                          {
                            ATerm j_47 = NULL;
                            ATerm k_47 = NULL,m_47 = NULL,o_47 = NULL;
                            ATerm c_20;
                            c_20 = t;
                            {
                              ATerm l_47 = NULL;
                              t = not_null(w_46);
                              {
                                t = congdefs_0(t);
                                {
                                  l_47 = t;
                                  if(((k_47 != NULL) && (k_47 != l_47)))
                                    _fail(l_47);
                                  else
                                    k_47 = l_47;
                                }
                              }
                            }
                            t = c_20;
                            {
                              ATerm n_47 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(z_46)), (ATerm) ATmakeAppl(sym_RDef_3, term_d_20, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_i_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19))), (ATerm) ATmakeAppl(sym_VarDec_2, term_e_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19))), (ATerm) ATmakeAppl(sym_Rule_3, term_q_20, term_x_20, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_w_21), term_f_21)))));
                              {
                                ATerm o_2 (ATerm t)
                                {
                                  ATerm x_21 = t;
                                  int y_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = RDtoSD_0(t);
                                      LocalPopChoice(y_21);
                                    }
                                  else
                                    {
                                      t = x_21;
                                      t = DeclareVariables_0(t);
                                    }
                                  return(t);
                                }
                                t = map_1(t, o_2);
                                {
                                  n_47 = t;
                                  if(((m_47 != NULL) && (m_47 != n_47)))
                                    _fail(n_47);
                                  else
                                    m_47 = n_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_47), not_null(m_47));
                                {
                                  ATerm z_21 = t;
                                  int a_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = conc_two_lists_0(t);
                                      LocalPopChoice(a_22);
                                    }
                                  else
                                    {
                                      t = z_21;
                                      t = conc_more_lists_0(t);
                                    }
                                  {
                                    o_47 = t;
                                    if(((j_47 != NULL) && (j_47 != o_47)))
                                      _fail(o_47);
                                    else
                                      j_47 = o_47;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(j_47))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(w_46))));
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm x_47 = NULL;
  ATerm z_47 = NULL;
  x_47 = t;
  {
    ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
    t = term_b_22;
    {
      ATerm p_2 (ATerm t)
      {
        t = term_c_22;
        return(t);
      }
      t = rewrite_1(t, p_2);
      {
        a_48 = t;
        v_47 :
        if(match_cons(a_48, sym_Defined_2))
          {
            b_48 = ATgetArgument(a_48, 0);
            c_48 = ATgetArgument(a_48, 1);
            w_47 :
            if(match_string(b_48, "o_1"))
              {
                if(((z_47 != NULL) && (z_47 != c_48)))
                  _fail(c_48);
                else
                  z_47 = c_48;
              }
            else
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
    t = not_null(z_47);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm g_48 = NULL;
  g_48 = t;
  t = SSL_int_to_string(not_null(g_48));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
  p_48 = t;
  o_48 :
  if(match_cons(p_48, sym_Op_2))
    {
      q_48 = ATgetArgument(p_48, 0);
      r_48 = ATgetArgument(p_48, 1);
      {
        ATerm v_48 = NULL,w_48 = NULL;
        ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
        t = term_d_22;
        {
          ATerm q_2 (ATerm t)
          {
            t = term_h_22;
            return(t);
          }
          t = rewrite_1(t, q_2);
          {
            x_48 = t;
            m_48 :
            if(match_cons(x_48, sym_Defined_3))
              {
                y_48 = ATgetArgument(x_48, 0);
                z_48 = ATgetArgument(x_48, 1);
                a_49 = ATgetArgument(x_48, 2);
                n_48 :
                if(match_string(y_48, "r_1"))
                  {
                    ATerm b_49 = NULL;
                    if(((v_48 != NULL) && (v_48 != z_48)))
                      _fail(z_48);
                    else
                      v_48 = z_48;
                    {
                      if(((w_48 != NULL) && (w_48 != a_49)))
                        _fail(a_49);
                      else
                        w_48 = a_49;
                      {
                        ATerm c_49 = NULL;
                        t = not_null(r_48);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              c_49 = t;
                              if(((b_49 != NULL) && (b_49 != c_49)))
                                _fail(c_49);
                              else
                                b_49 = c_49;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), not_null(b_49)), term_x_22), not_null(q_48)), term_w_22), term_p_22), not_null(w_48)), term_o_22), not_null(v_48)), term_n_22));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_48), not_null(r_48));
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
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  h_49 :
  if(match_cons(i_49, sym__2))
    {
      j_49 = ATgetArgument(i_49, 0);
      k_49 = ATgetArgument(i_49, 1);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(j_49), not_null(k_49));
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = SSL_subtr(not_null(j_49), not_null(k_49));
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
  ATerm r_2 (ATerm t)
  {
    ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
    d_50 = t;
    p_49 :
    if(match_cons(d_50, sym__2))
      {
        e_50 = ATgetArgument(d_50, 0);
        f_50 = ATgetArgument(d_50, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_50), not_null(f_50), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
    k_50 = t;
    r_49 :
    if(match_cons(k_50, sym__3))
      {
        l_50 = ATgetArgument(k_50, 0);
        m_50 = ATgetArgument(k_50, 1);
        n_50 = ATgetArgument(k_50, 2);
        s_49 :
        if(match_int(l_50, 0))
          {
            t = not_null(n_50);
          }
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
  ATerm t_2 (ATerm t)
  {
    ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
    a_51 = t;
    v_49 :
    if(match_cons(a_51, sym__3))
      {
        b_51 = ATgetArgument(a_51, 0);
        c_51 = ATgetArgument(a_51, 1);
        d_51 = ATgetArgument(a_51, 2);
        {
          ATerm h_51 = NULL;
          ATerm j_23;
          j_23 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), term_k_23);
            t = geq_0(t);
          }
          t = j_23;
          {
            ATerm m_51 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), term_k_23);
            {
              t = subt_0(t);
              {
                m_51 = t;
                if(((h_51 != NULL) && (h_51 != m_51)))
                  _fail(m_51);
                else
                  h_51 = m_51;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_51), not_null(c_51), (ATerm) ATinsert(CheckATermList(not_null(d_51)), not_null(c_51)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm CheckTuple_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  y_51 :
  if(match_cons(a_52, sym_Op_2))
    {
      b_52 = ATgetArgument(a_52, 0);
      c_52 = ATgetArgument(a_52, 1);
      z_51 :
      if(match_string(b_52, ""))
        {
          ATerm e_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
          ATerm l_23;
          l_23 = t;
          {
            ATerm j_52 = NULL;
            t = not_null(c_52);
            {
              ATerm k_52 = NULL;
              t = length_0(t);
              {
                j_52 = t;
                {
                  if(((g_52 != NULL) && (g_52 != j_52)))
                    _fail(j_52);
                  else
                    g_52 = j_52;
                  {
                    ATerm l_52 = NULL,n_52 = NULL;
                    t = term_b_13;
                    {
                      k_52 = t;
                      {
                        if(((e_52 != NULL) && (e_52 != k_52)))
                          _fail(k_52);
                        else
                          e_52 = k_52;
                        {
                          ATerm p_23;
                          p_23 = t;
                          {
                            ATerm m_52 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_52), term_u_23);
                            {
                              t = copy_0(t);
                              {
                                m_52 = t;
                                if(((l_52 != NULL) && (l_52 != m_52)))
                                  _fail(m_52);
                                else
                                  l_52 = m_52;
                              }
                            }
                          }
                          t = p_23;
                          {
                            ATerm o_52 = NULL,q_52 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, not_null(l_52), term_u_23));
                            {
                              n_52 = t;
                              {
                                if(((h_52 != NULL) && (h_52 != n_52)))
                                  _fail(n_52);
                                else
                                  h_52 = n_52;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm p_52 = NULL;
                                    ATerm x_23 = t;
                                    int y_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = TupleDeclarations_0(t);
                                        LocalPopChoice(y_23);
                                      }
                                    else
                                      {
                                        t = x_23;
                                        t = (ATerm) ATempty;
                                      }
                                    {
                                      p_52 = t;
                                      if(((o_52 != NULL) && (o_52 != p_52)))
                                        _fail(p_52);
                                      else
                                        o_52 = p_52;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(o_52)), not_null(h_52));
                                      {
                                        q_52 = t;
                                        {
                                          if(((i_52 != NULL) && (i_52 != q_52)))
                                            _fail(q_52);
                                          else
                                            i_52 = q_52;
                                          {
                                            ATerm z_23;
                                            z_23 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_a_24, not_null(i_52)));
                                              {
                                                ATerm u_2 (ATerm t)
                                                {
                                                  t = term_c_22;
                                                  return(t);
                                                }
                                                t = assert_1(t, u_2);
                                              }
                                            }
                                            t = z_23;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          t = l_23;
        }
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
  ATerm m_53 = NULL,n_53 = NULL,u_53 = NULL;
  m_53 = t;
  l_53 :
  if(match_cons(m_53, sym_Op_2))
    {
      n_53 = ATgetArgument(m_53, 0);
      u_53 = ATgetArgument(m_53, 1);
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_53 = NULL;
            t = not_null(u_53);
            {
              t = length_0(t);
              {
                y_53 = t;
                {
                  ATerm a_54 = NULL,b_54 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_53), (ATerm) ATmakeAppl(sym_Keys_1, not_null(y_53)));
                  {
                    ATerm v_2 (ATerm t)
                    {
                      t = term_d_24;
                      return(t);
                    }
                    t = rewrite_1(t, v_2);
                    {
                      a_54 = t;
                      b_53 :
                      if(match_cons(a_54, sym_Defined_1))
                        {
                          b_54 = ATgetArgument(a_54, 0);
                          c_53 :
                          if(!(match_string(b_54, "l_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_53), (ATerm) ATempty);
                }
              }
            }
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            {
              ATerm l_54 = NULL;
              t = not_null(u_53);
              {
                t = length_0(t);
                {
                  l_54 = t;
                  {
                    ATerm n_54 = NULL,o_54 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_53), (ATerm) ATmakeAppl(sym_Keys_1, not_null(l_54)));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_d_24;
                        return(t);
                      }
                      t = rewrite_1(t, w_2);
                      {
                        n_54 = t;
                        e_53 :
                        if(match_cons(n_54, sym_Defined_1))
                          {
                            o_54 = ATgetArgument(n_54, 0);
                            k_53 :
                            if(!(match_string(o_54, "i_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(n_53), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm b_55 (ATerm t)
  {
    ATerm e_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_86(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm j_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_55(t);
                LocalPopChoice(n_24);
              }
            else
              {
                t = j_24;
                {
                }
              }
            return(t);
          }
          t = _all(t, x_2);
        }
        LocalPopChoice(i_24);
      }
    else
      {
        t = e_24;
        t = _some(t, b_55);
      }
    return(t);
  }
  t = b_55(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm k_111 (ATerm), ATerm l_111 (ATerm))
{
  ATerm z_55 = NULL,c_56 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = term_h_22;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm q_24;
    q_24 = t;
    {
      ATerm d_56 = NULL;
      ATerm e_56 = NULL;
      t = k_111(t);
      {
        d_56 = t;
        {
          if(((c_56 != NULL) && (c_56 != d_56)))
            _fail(d_56);
          else
            c_56 = d_56;
          {
            t = l_111(t);
            {
              e_56 = t;
              if(((z_55 != NULL) && (z_55 != e_56)))
                _fail(e_56);
              else
                z_55 = e_56;
            }
          }
        }
      }
    }
    t = q_24;
    {
      ATerm r_24;
      r_24 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Defined_3, term_s_24, not_null(z_55), not_null(c_56)));
        {
          ATerm a_3 (ATerm t)
          {
            t = term_h_22;
            return(t);
          }
          t = assert_1(t, a_3);
        }
      }
      t = r_24;
      {
        ATerm b_3 (ATerm t)
        {
          ATerm t_24 = t;
          if((PushChoice() == 0))
            {
              ATerm u_24 = t;
              int x_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = CheckCons_0(t);
                  LocalPopChoice(x_24);
                }
              else
                {
                  t = u_24;
                  t = CheckTuple_0(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_24;
            }
          t = CheckConsError_0(t);
          return(t);
        }
        t = manytd_1(t, b_3);
      }
    }
    return(t);
  }
  t = scope_2(t, y_2, z_2);
  return(t);
}
ATerm check_constructors_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
  k_56 = t;
  j_56 :
  if(match_cons(k_56, sym_SDef_3))
    {
      l_56 = ATgetArgument(k_56, 0);
      m_56 = ATgetArgument(k_56, 1);
      n_56 = ATgetArgument(k_56, 2);
      {
        t = not_null(n_56);
        {
          ATerm c_3 (ATerm t)
          {
            t = not_null(l_56);
            return(t);
          }
          ATerm d_3 (ATerm t)
          {
            t = term_y_24;
            return(t);
          }
          t = check_constructors_p__2(t, c_3, d_3);
        }
      }
    }
  else
    {
      if(match_cons(k_56, sym_RDef_3))
        {
          l_56 = ATgetArgument(k_56, 0);
          m_56 = ATgetArgument(k_56, 1);
          n_56 = ATgetArgument(k_56, 2);
          {
            t = not_null(n_56);
            {
              ATerm e_3 (ATerm t)
              {
                t = not_null(l_56);
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_b_25;
                return(t);
              }
              t = check_constructors_p__2(t, e_3, f_3);
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
  ATerm g_3 (ATerm t)
  {
    t = term_k_25;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_k_23;
    return(t);
  }
  t = foldr_3(t, g_3, add_0, h_3);
  return(t);
}
ATerm GenerateCheckRule_0 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,q_57 = NULL;
  d_57 = t;
  a_57 :
  if(match_cons(d_57, sym_OpDecl_2))
    {
      e_57 = ATgetArgument(d_57, 0);
      f_57 = ATgetArgument(d_57, 1);
      b_57 :
      if(match_cons(f_57, sym_FunType_2))
        {
          q_57 = ATgetArgument(f_57, 0);
          c_57 = ATgetArgument(f_57, 1);
          {
            ATerm j_59 = NULL;
            ATerm l_25;
            l_25 = t;
            {
              ATerm k_59 = NULL;
              t = not_null(q_57);
              {
                t = length_0(t);
                {
                  k_59 = t;
                  if(((j_59 != NULL) && (j_59 != k_59)))
                    _fail(k_59);
                  else
                    j_59 = k_59;
                }
              }
            }
            t = l_25;
            {
              ATerm m_25;
              m_25 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(e_57), (ATerm) ATmakeAppl(sym_Keys_1, not_null(j_59))), term_t_25);
                {
                  ATerm i_3 (ATerm t)
                  {
                    t = term_d_24;
                    return(t);
                  }
                  t = assert_1(t, i_3);
                }
              }
              t = m_25;
            }
          }
        }
      else
        {
          if(match_cons(f_57, sym_ConstType_1))
            {
              q_57 = ATgetArgument(f_57, 0);
              {
                ATerm b_61 = NULL;
                ATerm u_25;
                u_25 = t;
                {
                  ATerm c_61 = NULL;
                  t = term_k_25;
                  {
                    c_61 = t;
                    if(((b_61 != NULL) && (b_61 != c_61)))
                      _fail(c_61);
                    else
                      b_61 = c_61;
                  }
                }
                t = u_25;
                {
                  ATerm v_25;
                  v_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(e_57), (ATerm) ATmakeAppl(sym_Keys_1, not_null(b_61))), term_x_25);
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = term_d_24;
                        return(t);
                      }
                      t = assert_1(t, j_3);
                    }
                  }
                  t = v_25;
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
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
  f_66 = t;
  w_65 :
  if(match_cons(f_66, sym_Specification_1))
    {
      g_66 = ATgetArgument(f_66, 0);
      x_65 :
      if(((ATgetType(g_66) == AT_LIST) && !(ATisEmpty(g_66))))
        {
          h_66 = ATgetFirst((ATermList) g_66);
          q_70 = (ATerm) ATgetNext((ATermList) g_66);
          y_65 :
          if(match_cons(h_66, sym_Signature_1))
            {
              i_66 = ATgetArgument(h_66, 0);
              z_65 :
              if(((ATgetType(i_66) == AT_LIST) && !(ATisEmpty(i_66))))
                {
                  l_70 = ATgetFirst((ATermList) i_66);
                  n_70 = (ATerm) ATgetNext((ATermList) i_66);
                  a_66 :
                  if(match_cons(l_70, sym_Constructors_1))
                    {
                      m_70 = ATgetArgument(l_70, 0);
                      b_66 :
                      if(((ATgetType(n_70) == AT_LIST) && ATisEmpty(n_70)))
                        {
                          c_66 :
                          if(((ATgetType(q_70) == AT_LIST) && !(ATisEmpty(q_70))))
                            {
                              r_70 = ATgetFirst((ATermList) q_70);
                              t_70 = (ATerm) ATgetNext((ATermList) q_70);
                              d_66 :
                              if(match_cons(r_70, sym_Strategies_1))
                                {
                                  s_70 = ATgetArgument(r_70, 0);
                                  e_66 :
                                  if(((ATgetType(t_70) == AT_LIST) && ATisEmpty(t_70)))
                                    {
                                      {
                                        ATerm w_70 = NULL,x_70 = NULL,b_71 = NULL;
                                        ATerm y_25;
                                        y_25 = t;
                                        {
                                          ATerm y_70 = NULL;
                                          ATerm z_70 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_70)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_23), term_u_23))), term_a_26);
                                          {
                                            y_70 = t;
                                            {
                                              if(((w_70 != NULL) && (w_70 != y_70)))
                                                _fail(y_70);
                                              else
                                                w_70 = y_70;
                                              {
                                                t = not_null(w_70);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(s_70);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        z_70 = t;
                                                        u_65 :
                                                        if(((ATgetType(z_70) == AT_LIST) && ATisEmpty(z_70)))
                                                          {
                                                            {
                                                              ATerm a_71 = NULL;
                                                              ATerm b_26 = t;
                                                              int g_26 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = TupleDeclarations_0(t);
                                                                  LocalPopChoice(g_26);
                                                                }
                                                              else
                                                                {
                                                                  t = b_26;
                                                                  t = (ATerm) ATempty;
                                                                }
                                                              {
                                                                a_71 = t;
                                                                if(((x_70 != NULL) && (x_70 != a_71)))
                                                                  _fail(a_71);
                                                                else
                                                                  x_70 = a_71;
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
                                        t = y_25;
                                        {
                                          ATerm c_71 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(x_70), not_null(w_70));
                                          {
                                            ATerm h_26 = t;
                                            int i_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = conc_two_lists_0(t);
                                                LocalPopChoice(i_26);
                                              }
                                            else
                                              {
                                                t = h_26;
                                                t = conc_more_lists_0(t);
                                              }
                                            {
                                              c_71 = t;
                                              if(((b_71 != NULL) && (b_71 != c_71)))
                                                _fail(c_71);
                                              else
                                                b_71 = c_71;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(s_70))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(b_71))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm a_110 (ATerm))
{
  ATerm m_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_26;
      r_26 = t;
      {
        ATerm s_26 = t;
        if((PushChoice() == 0))
          {
            ATerm j_71 = NULL;
            t = a_110(t);
            {
              j_71 = t;
              i_71 :
              if(((ATgetType(j_71) == AT_LIST) && ATisEmpty(j_71)))
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
            t = s_26;
          }
      }
      t = r_26;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            t = ExpOverlay_1(t, a_110);
            return(t);
          }
          t = try_1(t, l_3);
          return(t);
        }
        t = topdown_1(t, k_3);
      }
      LocalPopChoice(o_26);
    }
  else
    {
      t = m_26;
      {
      }
    }
  return(t);
}
ATerm Trm_to_Cong_0 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
  t_71 = t;
  r_71 :
  if(match_cons(t_71, sym_BuildDefault_1))
    {
      u_71 = ATgetArgument(t_71, 0);
      t = term_i_15;
    }
  else
    {
      if(match_cons(t_71, sym_Real_1))
        {
          u_71 = ATgetArgument(t_71, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(u_71)));
        }
      else
        {
          if(match_cons(t_71, sym_Int_1))
            {
              u_71 = ATgetArgument(t_71, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(u_71)));
            }
          else
            {
              if(match_cons(t_71, sym_Str_1))
                {
                  u_71 = ATgetArgument(t_71, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(u_71)));
                }
              else
                {
                  if(match_cons(t_71, sym_Anno_2))
                    {
                      u_71 = ATgetArgument(t_71, 0);
                      s_71 = ATgetArgument(t_71, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_t_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_71)), not_null(u_71)));
                    }
                  else
                    {
                      if(match_cons(t_71, sym_Op_2))
                        {
                          u_71 = ATgetArgument(t_71, 0);
                          s_71 = ATgetArgument(t_71, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_71)), not_null(s_71));
                        }
                      else
                        {
                          if(match_cons(t_71, sym_Var_1))
                            {
                              u_71 = ATgetArgument(t_71, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_71)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm d_74 (ATerm), ATerm e_74 (ATerm))
{
  ATerm g_73 = NULL,h_73 = NULL,q_73 = NULL;
  g_73 = t;
  f_73 :
  if(match_cons(g_73, sym_Op_2))
    {
      h_73 = ATgetArgument(g_73, 0);
      q_73 = ATgetArgument(g_73, 1);
      {
        ATerm u_73 = NULL,w_73 = NULL;
        ATerm v_73 = NULL;
        t = SSLgetAnnotations(not_null(g_73));
        {
          v_73 = t;
          if(((u_73 != NULL) && (u_73 != v_73)))
            _fail(v_73);
          else
            u_73 = v_73;
        }
        {
          t = not_null(h_73);
          {
            ATerm y_73 = NULL;
            t = d_74(t);
            {
              w_73 = t;
              {
                t = not_null(q_73);
                {
                  ATerm a_74 = NULL;
                  t = e_74(t);
                  {
                    y_73 = t;
                    {
                      ATerm b_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(w_73), not_null(y_73)), not_null(u_73));
                      {
                        b_74 = t;
                        if(((a_74 != NULL) && (a_74 != b_74)))
                          _fail(b_74);
                        else
                          a_74 = b_74;
                      }
                      t = not_null(a_74);
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
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 (ATerm t)
      {
        t = map_1(t, trm_to_cong_0);
        return(t);
      }
      t = Op_2(t, _id, m_3);
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
      }
    }
  t = Trm_to_Cong_0(t);
  return(t);
}
ATerm Overlay_to_Congdef_0 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL;
  u_74 = t;
  s_74 :
  if(match_cons(u_74, sym_Overlay_3))
    {
      v_74 = ATgetArgument(u_74, 0);
      w_74 = ATgetArgument(u_74, 1);
      x_74 = ATgetArgument(u_74, 2);
      {
        ATerm e_75 = NULL,i_75 = NULL;
        ATerm w_26;
        w_26 = t;
        {
          ATerm h_75 = NULL;
          t = not_null(w_74);
          {
            ATerm n_3 (ATerm t)
            {
              ATerm f_75 = NULL;
              ATerm g_75 = NULL;
              g_75 = t;
              if(((f_75 != NULL) && (f_75 != g_75)))
                _fail(g_75);
              else
                f_75 = g_75;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(f_75), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19));
              return(t);
            }
            t = map_1(t, n_3);
            {
              h_75 = t;
              if(((e_75 != NULL) && (e_75 != h_75)))
                _fail(h_75);
              else
                e_75 = h_75;
            }
          }
        }
        t = w_26;
        {
          ATerm j_75 = NULL;
          t = not_null(x_74);
          {
            t = trm_to_cong_0(t);
            {
              j_75 = t;
              if(((i_75 != NULL) && (i_75 != j_75)))
                _fail(j_75);
              else
                i_75 = j_75;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_74), not_null(e_75), not_null(i_75));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm v_110 (ATerm))
{
  t = Scope_2(t, v_110, _id);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm x_75 = NULL,a_76 = NULL;
  x_75 = t;
  w_75 :
  if(match_cons(x_75, sym_Var_1))
    {
      a_76 = ATgetArgument(x_75, 0);
      t = not_null(a_76);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm g_108 (ATerm), ATerm h_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL;
  j_76 = t;
  i_76 :
  if(match_cons(j_76, sym__3))
    {
      k_76 = ATgetArgument(j_76, 0);
      l_76 = ATgetArgument(j_76, 1);
      m_76 = ATgetArgument(j_76, 2);
      {
        t = not_null(k_76);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm q_76 = NULL;
            q_76 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_76), not_null(m_76));
              t = g_108(t);
            }
            return(t);
          }
          ATerm p_3 (ATerm t)
          {
            ATerm s_76 = NULL;
            s_76 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_76), not_null(l_76));
              t = g_108(t);
            }
            return(t);
          }
          t = h_108(t, o_3, p_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm a_108 (ATerm), ATerm b_108 (ATerm, ATerm (ATerm)))
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  d_77 :
  if(match_cons(e_77, sym__2))
    {
      f_77 = ATgetArgument(e_77, 0);
      g_77 = ATgetArgument(e_77, 1);
      {
        ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,r_77 = NULL;
        ATerm x_26;
        x_26 = t;
        {
          ATerm m_77 = NULL;
          t = not_null(f_77);
          {
            ATerm n_77 = NULL;
            t = a_108(t);
            {
              m_77 = t;
              {
                if(((j_77 != NULL) && (j_77 != m_77)))
                  _fail(m_77);
                else
                  j_77 = m_77;
                {
                  ATerm o_77 = NULL,q_77 = NULL;
                  t = map_1(t, new_0);
                  {
                    n_77 = t;
                    {
                      if(((k_77 != NULL) && (k_77 != n_77)))
                        _fail(n_77);
                      else
                        k_77 = n_77;
                      {
                        ATerm p_77 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_77), not_null(k_77));
                        {
                          t = zip_1(t, _id);
                          {
                            p_77 = t;
                            if(((o_77 != NULL) && (o_77 != p_77)))
                              _fail(p_77);
                            else
                              o_77 = p_77;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_77), not_null(g_77));
                          {
                            ATerm y_26 = t;
                            int z_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = conc_two_lists_0(t);
                                LocalPopChoice(z_26);
                              }
                            else
                              {
                                t = y_26;
                                t = conc_more_lists_0(t);
                              }
                            {
                              q_77 = t;
                              if(((l_77 != NULL) && (l_77 != q_77)))
                                _fail(q_77);
                              else
                                l_77 = q_77;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = x_26;
        {
          ATerm s_77 = NULL;
          t = not_null(f_77);
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(k_77);
              return(t);
            }
            t = b_108(t, q_3);
            {
              s_77 = t;
              if(((r_77 != NULL) && (r_77 != s_77)))
                _fail(s_77);
              else
                r_77 = s_77;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(r_77), not_null(g_77), not_null(l_77));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm t_107 (ATerm), ATerm u_107 (ATerm))
{
  ATerm c_78 = NULL;
  ATerm e_78 = NULL,f_78 = NULL;
  c_78 = t;
  {
    ATerm g_78 = NULL;
    t = not_null(c_78);
    {
      ATerm h_78 = NULL;
      t = t_107(t);
      {
        g_78 = t;
        {
          if(((e_78 != NULL) && (e_78 != g_78)))
            _fail(g_78);
          else
            e_78 = g_78;
          {
            t = u_107(t);
            {
              h_78 = t;
              if(((f_78 != NULL) && (f_78 != h_78)))
                _fail(h_78);
              else
                f_78 = h_78;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_78), not_null(f_78));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm r_78 = NULL;
  ATerm t_78 = NULL,u_78 = NULL;
  r_78 = t;
  {
    ATerm v_78 = NULL;
    ATerm x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL;
    t = not_null(r_78);
    {
      v_78 = t;
      {
        t = SSL_explode_term(not_null(v_78));
        {
          x_78 = t;
          o_78 :
          if(match_cons(x_78, sym__2))
            {
              y_78 = ATgetArgument(x_78, 0);
              z_78 = ATgetArgument(x_78, 1);
              p_78 :
              if(match_string(y_78, ""))
                {
                  q_78 :
                  if(((ATgetType(z_78) == AT_LIST) && !(ATisEmpty(z_78))))
                    {
                      a_79 = ATgetFirst((ATermList) z_78);
                      b_79 = (ATerm) ATgetNext((ATermList) z_78);
                      {
                        if(((u_78 != NULL) && (u_78 != a_79)))
                          _fail(a_79);
                        else
                          u_78 = a_79;
                        if(((t_78 != NULL) && (t_78 != b_79)))
                          _fail(b_79);
                        else
                          t_78 = b_79;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
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
    t = not_null(u_78);
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL;
  i_79 = t;
  g_79 :
  if(match_cons(i_79, sym__2))
    {
      j_79 = ATgetArgument(i_79, 0);
      k_79 = ATgetArgument(i_79, 1);
      h_79 :
      if(((ATgetType(k_79) == AT_LIST) && !(ATisEmpty(k_79))))
        {
          l_79 = ATgetFirst((ATermList) k_79);
          m_79 = (ATerm) ATgetNext((ATermList) k_79);
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_79), not_null(m_79));
        }
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
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
  u_79 = t;
  r_79 :
  if(match_cons(u_79, sym__2))
    {
      v_79 = ATgetArgument(u_79, 0);
      w_79 = ATgetArgument(u_79, 1);
      s_79 :
      if(((ATgetType(w_79) == AT_LIST) && !(ATisEmpty(w_79))))
        {
          x_79 = ATgetFirst((ATermList) w_79);
          a_80 = (ATerm) ATgetNext((ATermList) w_79);
          t_79 :
          if(match_cons(x_79, sym__2))
            {
              y_79 = ATgetArgument(x_79, 0);
              z_79 = ATgetArgument(x_79, 1);
              {
                ATerm c_80 = NULL;
                if(((v_79 != NULL) && (v_79 != y_79)))
                  _fail(y_79);
                else
                  v_79 = y_79;
                {
                  if(((c_80 != NULL) && (c_80 != z_79)))
                    _fail(z_79);
                  else
                    c_80 = z_79;
                  t = not_null(c_80);
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
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm l_108 (ATerm, ATerm (ATerm)))
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
  h_80 = t;
  g_80 :
  if(match_cons(h_80, sym__2))
    {
      i_80 = ATgetArgument(h_80, 0);
      j_80 = ATgetArgument(h_80, 1);
      {
        t = not_null(i_80);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              t = not_null(j_80);
              return(t);
            }
            t = split_2(t, _id, s_3);
            t = lookup_0(t);
            return(t);
          }
          t = l_108(t, r_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm l_89 (ATerm))
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
  q_80 = t;
  p_80 :
  if(match_cons(q_80, sym__2))
    {
      r_80 = ATgetArgument(q_80, 0);
      s_80 = ATgetArgument(q_80, 1);
      {
        t = not_null(r_80);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm v_80 = NULL;
            v_80 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_80), not_null(s_80));
              t = l_89(t);
            }
            return(t);
          }
          t = _all(t, t_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm v_88 (ATerm))
{
  ATerm z_80 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_88(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = all_dist_1(t, z_80);
      }
    return(t);
  }
  t = z_80(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
  e_81 = t;
  d_81 :
  if(match_cons(e_81, sym__2))
    {
      f_81 = ATgetArgument(e_81, 0);
      g_81 = ATgetArgument(e_81, 1);
      {
        ATerm j_81 = NULL;
        if(((j_81 != NULL) && (j_81 != g_81)))
          _fail(g_81);
        else
          j_81 = g_81;
      }
    }
  else
    {
      if(match_cons(e_81, sym__3))
        {
          f_81 = ATgetArgument(e_81, 0);
          g_81 = ATgetArgument(e_81, 1);
          h_81 = ATgetArgument(e_81, 2);
          {
            ATerm p_81 = NULL;
            ATerm q_81 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_81), not_null(g_81));
            {
              t = zip_1(t, _id);
              {
                q_81 = t;
                if(((p_81 != NULL) && (p_81 != q_81)))
                  _fail(q_81);
                else
                  p_81 = q_81;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_81), not_null(h_81));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm h_107 (ATerm), ATerm i_107 (ATerm, ATerm (ATerm)), ATerm j_107 (ATerm), ATerm k_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm l_107 (ATerm, ATerm (ATerm)), ATerm m_107 (ATerm))
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL;
  t = subs_args_0(t);
  {
    y_81 = t;
    x_81 :
    if(match_cons(y_81, sym__2))
      {
        z_81 = ATgetArgument(y_81, 0);
        a_82 = ATgetArgument(y_81, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_82), (ATerm) ATempty);
          {
            ATerm g_82 (ATerm t)
            {
              ATerm u_3 (ATerm t)
              {
                ATerm j_27 = t;
                int k_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, i_107);
                    LocalPopChoice(k_27);
                  }
                else
                  {
                    t = j_27;
                    {
                      ATerm o_27 = t;
                      int q_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm v_3 (ATerm t)
                            {
                              t = not_null(z_81);
                              return(t);
                            }
                            t = SubsVar_2(t, h_107, v_3);
                            t = m_107(t);
                          }
                          LocalPopChoice(q_27);
                        }
                      else
                        {
                          t = o_27;
                          {
                            t = RnBinding_2(t, j_107, l_107);
                            t = DistBinding_2(t, g_82, k_107);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, u_3);
              return(t);
            }
            t = g_82(t);
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
ATerm substitute_5 (ATerm t, ATerm o_107 (ATerm), ATerm p_107 (ATerm, ATerm (ATerm)), ATerm q_107 (ATerm), ATerm r_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm s_107 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, o_107, p_107, q_107, r_107, s_107, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm h_82 (ATerm t, ATerm i_82 (ATerm))
  {
    t = Scope_2(t, i_82, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, h_82);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm b_110 (ATerm))
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  w_82 = t;
  r_82 :
  if(match_cons(w_82, sym_Op_2))
    {
      x_82 = ATgetArgument(w_82, 0);
      y_82 = ATgetArgument(w_82, 1);
      {
        ATerm b_83 = NULL,c_83 = NULL;
        t = b_110(t);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm r_27;
            r_27 = t;
            {
              ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL;
              d_83 = t;
              q_82 :
              if(match_cons(d_83, sym_Overlay_3))
                {
                  e_83 = ATgetArgument(d_83, 0);
                  f_83 = ATgetArgument(d_83, 1);
                  g_83 = ATgetArgument(d_83, 2);
                  {
                    ATerm h_83 = NULL,i_83 = NULL,p_83 = NULL,r_83 = NULL;
                    if(((x_82 != NULL) && (x_82 != e_83)))
                      _fail(e_83);
                    else
                      x_82 = e_83;
                    {
                      if(((h_83 != NULL) && (h_83 != f_83)))
                        _fail(f_83);
                      else
                        h_83 = f_83;
                      {
                        if(((i_83 != NULL) && (i_83 != g_83)))
                          _fail(g_83);
                        else
                          i_83 = g_83;
                        {
                          ATerm s_27;
                          s_27 = t;
                          {
                            ATerm q_83 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_83), not_null(y_82));
                            {
                              t = zip_1(t, _id);
                              {
                                q_83 = t;
                                if(((p_83 != NULL) && (p_83 != q_83)))
                                  _fail(q_83);
                                else
                                  p_83 = q_83;
                              }
                            }
                          }
                          t = s_27;
                          {
                            ATerm u_83 = NULL;
                            t = not_null(p_83);
                            {
                              r_83 = t;
                              {
                                if(((b_83 != NULL) && (b_83 != r_83)))
                                  _fail(r_83);
                                else
                                  b_83 = r_83;
                                {
                                  t = not_null(i_83);
                                  {
                                    u_83 = t;
                                    {
                                      if(((c_83 != NULL) && (c_83 != u_83)))
                                        _fail(u_83);
                                      else
                                        c_83 = u_83;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_83), not_null(i_83));
                                    }
                                  }
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
            t = r_27;
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_83), not_null(c_83));
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
ATerm exp_overlays1_1 (ATerm t, ATerm z_109 (ATerm))
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_27;
      v_27 = t;
      {
        ATerm w_27 = t;
        if((PushChoice() == 0))
          {
            ATerm b_84 = NULL;
            t = z_109(t);
            {
              b_84 = t;
              a_84 :
              if(((ATgetType(b_84) == AT_LIST) && ATisEmpty(b_84)))
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
            t = w_27;
          }
      }
      t = v_27;
      {
        ATerm x_3 (ATerm t)
        {
          ATerm y_3 (ATerm t)
          {
            t = ExpOverlay_1(t, z_109);
            return(t);
          }
          t = repeat_2(t, y_3, _id);
          return(t);
        }
        t = topdown_1(t, x_3);
      }
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
      }
    }
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL;
  p_84 = t;
  h_84 :
  if(match_cons(p_84, sym_Specification_1))
    {
      q_84 = ATgetArgument(p_84, 0);
      i_84 :
      if(((ATgetType(q_84) == AT_LIST) && !(ATisEmpty(q_84))))
        {
          r_84 = ATgetFirst((ATermList) q_84);
          t_84 = (ATerm) ATgetNext((ATermList) q_84);
          j_84 :
          if(match_cons(r_84, sym_Signature_1))
            {
              s_84 = ATgetArgument(r_84, 0);
              k_84 :
              if(((ATgetType(t_84) == AT_LIST) && !(ATisEmpty(t_84))))
                {
                  u_84 = ATgetFirst((ATermList) t_84);
                  w_84 = (ATerm) ATgetNext((ATermList) t_84);
                  l_84 :
                  if(match_cons(u_84, sym_Overlays_1))
                    {
                      v_84 = ATgetArgument(u_84, 0);
                      m_84 :
                      if(((ATgetType(w_84) == AT_LIST) && !(ATisEmpty(w_84))))
                        {
                          x_84 = ATgetFirst((ATermList) w_84);
                          z_84 = (ATerm) ATgetNext((ATermList) w_84);
                          n_84 :
                          if(match_cons(x_84, sym_Strategies_1))
                            {
                              y_84 = ATgetArgument(x_84, 0);
                              o_84 :
                              if(((ATgetType(z_84) == AT_LIST) && ATisEmpty(z_84)))
                                {
                                  {
                                    ATerm d_85 = NULL,f_85 = NULL;
                                    ATerm x_27;
                                    x_27 = t;
                                    {
                                      ATerm e_85 = NULL;
                                      t = not_null(v_84);
                                      {
                                        ATerm z_3 (ATerm t)
                                        {
                                          t = not_null(v_84);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, z_3);
                                        {
                                          e_85 = t;
                                          if(((d_85 != NULL) && (d_85 != e_85)))
                                            _fail(e_85);
                                          else
                                            d_85 = e_85;
                                        }
                                      }
                                    }
                                    t = x_27;
                                    {
                                      ATerm g_85 = NULL,k_85 = NULL,m_85 = NULL;
                                      ATerm y_27;
                                      y_27 = t;
                                      {
                                        ATerm h_85 = NULL;
                                        t = not_null(v_84);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            h_85 = t;
                                            if(((g_85 != NULL) && (g_85 != h_85)))
                                              _fail(h_85);
                                            else
                                              g_85 = h_85;
                                          }
                                        }
                                      }
                                      t = y_27;
                                      {
                                        ATerm l_85 = NULL;
                                        t = not_null(y_84);
                                        {
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = not_null(d_85);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, a_4);
                                          {
                                            l_85 = t;
                                            if(((k_85 != NULL) && (k_85 != l_85)))
                                              _fail(l_85);
                                            else
                                              k_85 = l_85;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(g_85), not_null(k_85));
                                          {
                                            ATerm z_27 = t;
                                            int a_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = conc_two_lists_0(t);
                                                LocalPopChoice(a_28);
                                              }
                                            else
                                              {
                                                t = z_27;
                                                t = conc_more_lists_0(t);
                                              }
                                            {
                                              m_85 = t;
                                              if(((f_85 != NULL) && (f_85 != m_85)))
                                                _fail(m_85);
                                              else
                                                f_85 = m_85;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(f_85))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(s_84))));
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
  ATerm b_4 (ATerm t)
  {
    ATerm t_85 = NULL;
    t_85 = t;
    {
      ATerm b_28;
      b_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_85)), term_d_28);
        {
          ATerm c_4 (ATerm t)
          {
            t = term_e_28;
            return(t);
          }
          t = assert_1(t, c_4);
        }
      }
      t = b_28;
    }
    return(t);
  }
  t = map_1(t, b_4);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL;
  a_86 = t;
  z_85 :
  if(match_cons(a_86, sym_Overlay_3))
    {
      b_86 = ATgetArgument(a_86, 0);
      c_86 = ATgetArgument(a_86, 1);
      d_86 = ATgetArgument(a_86, 2);
      {
        ATerm f_28;
        f_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_g_28, not_null(b_86)));
          {
            ATerm d_4 (ATerm t)
            {
              t = term_h_28;
              return(t);
            }
            t = assert_1(t, d_4);
            {
              t = not_null(c_86);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(d_86);
                  t = use_vars_0(t);
                }
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
ATerm rdef_ud_0 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,p_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL;
  m_86 = t;
  k_86 :
  if(match_cons(m_86, sym_RDef_3))
    {
      n_86 = ATgetArgument(m_86, 0);
      o_86 = ATgetArgument(m_86, 1);
      p_86 = ATgetArgument(m_86, 2);
      l_86 :
      if(match_cons(p_86, sym_StratRule_3))
        {
          s_86 = ATgetArgument(p_86, 0);
          t_86 = ATgetArgument(p_86, 1);
          u_86 = ATgetArgument(p_86, 2);
          {
            ATerm i_28;
            i_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_j_28, not_null(n_86)));
              {
                ATerm e_4 (ATerm t)
                {
                  t = term_h_28;
                  return(t);
                }
                t = assert_1(t, e_4);
                {
                  t = not_null(s_86);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(t_86);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(u_86);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = i_28;
          }
        }
      else
        {
          if(match_cons(p_86, sym_Rule_3))
            {
              s_86 = ATgetArgument(p_86, 0);
              t_86 = ATgetArgument(p_86, 1);
              u_86 = ATgetArgument(p_86, 2);
              {
                ATerm l_28;
                l_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_o_28, not_null(n_86)));
                  {
                    ATerm f_4 (ATerm t)
                    {
                      t = term_h_28;
                      return(t);
                    }
                    t = assert_1(t, f_4);
                    {
                      t = not_null(s_86);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(u_86);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(t_86);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = l_28;
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
ATerm guardedlchoice_1 (ATerm t, ATerm j_111 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, j_111, j_111, _id);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, j_111);
    return(t);
  }
  t = abstract_choice_2(t, g_4, h_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm))
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
  o_87 = t;
  n_87 :
  if(match_cons(o_87, sym_GuardedLChoice_3))
    {
      p_87 = ATgetArgument(o_87, 0);
      q_87 = ATgetArgument(o_87, 1);
      r_87 = ATgetArgument(o_87, 2);
      {
        ATerm w_87 = NULL,y_87 = NULL;
        ATerm x_87 = NULL;
        t = SSLgetAnnotations(not_null(o_87));
        {
          x_87 = t;
          if(((w_87 != NULL) && (w_87 != x_87)))
            _fail(x_87);
          else
            w_87 = x_87;
        }
        {
          t = not_null(p_87);
          {
            ATerm a_88 = NULL;
            t = a_73(t);
            {
              y_87 = t;
              {
                t = not_null(q_87);
                {
                  ATerm c_88 = NULL;
                  t = b_73(t);
                  {
                    a_88 = t;
                    {
                      t = not_null(r_87);
                      {
                        ATerm e_88 = NULL;
                        t = c_73(t);
                        {
                          c_88 = t;
                          {
                            ATerm f_88 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(y_87), not_null(a_88), not_null(c_88)), not_null(w_87));
                            {
                              f_88 = t;
                              if(((e_88 != NULL) && (e_88 != f_88)))
                                _fail(f_88);
                              else
                                e_88 = f_88;
                            }
                            t = not_null(e_88);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm i_111 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    t = LChoice_2(t, i_111, _id);
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = LChoice_2(t, _id, i_111);
    return(t);
  }
  t = abstract_choice_2(t, i_4, j_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm))
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
  s_88 = t;
  r_88 :
  if(match_cons(s_88, sym_LChoice_2))
    {
      t_88 = ATgetArgument(s_88, 0);
      u_88 = ATgetArgument(s_88, 1);
      {
        ATerm a_89 = NULL,c_89 = NULL;
        ATerm b_89 = NULL;
        t = SSLgetAnnotations(not_null(s_88));
        {
          b_89 = t;
          if(((a_89 != NULL) && (a_89 != b_89)))
            _fail(b_89);
          else
            a_89 = b_89;
        }
        {
          t = not_null(t_88);
          {
            ATerm e_89 = NULL;
            t = y_72(t);
            {
              c_89 = t;
              {
                t = not_null(u_88);
                {
                  ATerm g_89 = NULL;
                  t = z_72(t);
                  {
                    e_89 = t;
                    {
                      ATerm h_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(c_89), not_null(e_89)), not_null(a_89));
                      {
                        h_89 = t;
                        if(((g_89 != NULL) && (g_89 != h_89)))
                          _fail(h_89);
                        else
                          g_89 = h_89;
                      }
                      t = not_null(g_89);
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
  ATerm k_4 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL;
        b_90 = t;
        s_89 :
        if(match_cons(b_90, sym__2))
          {
            c_90 = ATgetArgument(b_90, 0);
            d_90 = ATgetArgument(b_90, 1);
            u_89 :
            if(((ATgetType(d_90) == AT_LIST) && !(ATisEmpty(d_90))))
              {
                g_90 = ATgetFirst((ATermList) d_90);
                j_90 = (ATerm) ATgetNext((ATermList) d_90);
                x_89 :
                if(match_cons(g_90, sym_Defined_2))
                  {
                    h_90 = ATgetArgument(g_90, 0);
                    i_90 = ATgetArgument(g_90, 1);
                    y_89 :
                    if(!(match_cons(c_90, sym_Scopes_0)))
                      {
                        ATerm r_28 = t;
                        int s_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_28;
                            t_28 = t;
                            {
                              ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(c_90));
                              {
                                t = table_get_0(t);
                                {
                                  o_90 = t;
                                  q_89 :
                                  if(((ATgetType(o_90) == AT_LIST) && !(ATisEmpty(o_90))))
                                    {
                                      p_90 = ATgetFirst((ATermList) o_90);
                                      s_90 = (ATerm) ATgetNext((ATermList) o_90);
                                      r_89 :
                                      if(match_cons(p_90, sym_Defined_2))
                                        {
                                          q_90 = ATgetArgument(p_90, 0);
                                          r_90 = ATgetArgument(p_90, 1);
                                          if(((i_90 != NULL) && (i_90 != r_90)))
                                            _fail(r_90);
                                          else
                                            i_90 = r_90;
                                        }
                                      else
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
                            t = t_28;
                            LocalPopChoice(s_28);
                          }
                        else
                          {
                            t = r_28;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_90), (ATerm) ATinsert(ATempty, term_u_28));
                          }
                      }
                  }
                else
                  {
                    z_89 :
                    if(!(match_cons(c_90, sym_Scopes_0)))
                      {
                        _fail(t);
                      }
                  }
              }
            else
              {
                a_90 :
                if(!(match_cons(c_90, sym_Scopes_0)))
                  {
                    _fail(t);
                  }
              }
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        {
        }
      }
    return(t);
  }
  t = map_1(t, k_4);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
  z_90 = t;
  y_90 :
  if(match_cons(z_90, sym__2))
    {
      a_91 = ATgetArgument(z_90, 0);
      b_91 = ATgetArgument(z_90, 1);
      {
        t = not_null(b_91);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL;
            g_91 = t;
            x_90 :
            if(match_cons(g_91, sym__2))
              {
                h_91 = ATgetArgument(g_91, 0);
                i_91 = ATgetArgument(g_91, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(a_91), not_null(h_91), not_null(i_91));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_4);
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
  ATerm o_91 = NULL;
  o_91 = t;
  {
    ATerm v_28;
    v_28 = t;
    {
      t = term_e_28;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_28, not_null(o_91));
          t = table_putlist_0(t);
        }
      }
    }
    t = v_28;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm s_91 = NULL;
  s_91 = t;
  t = SSL_table_keys(not_null(s_91));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm e_92 = NULL;
  e_92 = t;
  {
    t = table_keys_0(t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm h_92 = NULL;
        ATerm j_92 = NULL;
        h_92 = t;
        {
          ATerm k_92 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_92), not_null(h_92));
          {
            t = table_get_0(t);
            {
              k_92 = t;
              if(((j_92 != NULL) && (j_92 != k_92)))
                _fail(k_92);
              else
                j_92 = k_92;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(j_92));
        }
        return(t);
      }
      t = map_1(t, m_4);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_e_28;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm f_111 (ATerm), ATerm g_111 (ATerm))
{
  ATerm q_92 = NULL,s_92 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm r_92 = NULL;
    t = save_Bound_0(t);
    {
      r_92 = t;
      if(((q_92 != NULL) && (q_92 != r_92)))
        _fail(r_92);
      else
        q_92 = r_92;
    }
  }
  t = w_28;
  {
    t = f_111(t);
    {
      ATerm x_28;
      x_28 = t;
      {
        ATerm t_92 = NULL;
        t = save_Bound_0(t);
        {
          t_92 = t;
          {
            if(((s_92 != NULL) && (s_92 != t_92)))
              _fail(t_92);
            else
              s_92 = t_92;
            {
              t = not_null(q_92);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = x_28;
      {
        t = g_111(t);
        {
          ATerm y_28;
          y_28 = t;
          {
            t = not_null(s_92);
            t = isect_Bound_0(t);
          }
          t = y_28;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm h_111 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = Choice_2(t, h_111, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = Choice_2(t, _id, h_111);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
  c_93 = t;
  b_93 :
  if(match_cons(c_93, sym_Choice_2))
    {
      d_93 = ATgetArgument(c_93, 0);
      e_93 = ATgetArgument(c_93, 1);
      {
        ATerm i_93 = NULL,k_93 = NULL;
        ATerm j_93 = NULL;
        t = SSLgetAnnotations(not_null(c_93));
        {
          j_93 = t;
          if(((i_93 != NULL) && (i_93 != j_93)))
            _fail(j_93);
          else
            i_93 = j_93;
        }
        {
          t = not_null(d_93);
          {
            ATerm m_93 = NULL;
            t = w_72(t);
            {
              k_93 = t;
              {
                t = not_null(e_93);
                {
                  ATerm o_93 = NULL;
                  t = x_72(t);
                  {
                    m_93 = t;
                    {
                      ATerm p_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(k_93), not_null(m_93)), not_null(i_93));
                      {
                        p_93 = t;
                        if(((o_93 != NULL) && (o_93 != p_93)))
                          _fail(p_93);
                        else
                          o_93 = p_93;
                      }
                      t = not_null(o_93);
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
ATerm Context_0 (ATerm t)
{
  ATerm l_94 = NULL;
  l_94 = t;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_94 = NULL;
        ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
        t = term_b_22;
        {
          ATerm p_4 (ATerm t)
          {
            t = term_h_28;
            return(t);
          }
          t = rewrite_1(t, p_4);
          {
            p_94 = t;
            a_94 :
            if(match_cons(p_94, sym_Defined_2))
              {
                q_94 = ATgetArgument(p_94, 0);
                r_94 = ATgetArgument(p_94, 1);
                b_94 :
                if(match_string(q_94, "y_0"))
                  {
                    if(((o_94 != NULL) && (o_94 != r_94)))
                      _fail(r_94);
                    else
                      o_94 = r_94;
                  }
                else
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_94)), term_p_22), not_null(o_94)), term_b_29);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        {
          ATerm g_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_94 = NULL;
              ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
              t = term_b_22;
              {
                ATerm q_4 (ATerm t)
                {
                  t = term_h_28;
                  return(t);
                }
                t = rewrite_1(t, q_4);
                {
                  v_94 = t;
                  d_94 :
                  if(match_cons(v_94, sym_Defined_2))
                    {
                      w_94 = ATgetArgument(v_94, 0);
                      x_94 = ATgetArgument(v_94, 1);
                      e_94 :
                      if(match_string(w_94, "v_0"))
                        {
                          if(((u_94 != NULL) && (u_94 != x_94)))
                            _fail(x_94);
                          else
                            u_94 = x_94;
                        }
                      else
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_94)), term_p_22), not_null(u_94)), term_i_29);
              LocalPopChoice(h_29);
            }
          else
            {
              t = g_29;
              {
                ATerm m_29 = t;
                int o_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_95 = NULL;
                    ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
                    t = term_b_22;
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = term_h_28;
                        return(t);
                      }
                      t = rewrite_1(t, r_4);
                      {
                        b_95 = t;
                        g_94 :
                        if(match_cons(b_95, sym_Defined_2))
                          {
                            c_95 = ATgetArgument(b_95, 0);
                            d_95 = ATgetArgument(b_95, 1);
                            h_94 :
                            if(match_string(c_95, "s_0"))
                              {
                                if(((a_95 != NULL) && (a_95 != d_95)))
                                  _fail(d_95);
                                else
                                  a_95 = d_95;
                              }
                            else
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_94)), term_p_22), not_null(a_95)), term_i_29);
                    LocalPopChoice(o_29);
                  }
                else
                  {
                    t = m_29;
                    {
                      ATerm g_95 = NULL;
                      ATerm m_95 = NULL,n_95 = NULL,q_95 = NULL;
                      t = term_b_22;
                      {
                        ATerm s_4 (ATerm t)
                        {
                          t = term_h_28;
                          return(t);
                        }
                        t = rewrite_1(t, s_4);
                        {
                          m_95 = t;
                          j_94 :
                          if(match_cons(m_95, sym_Defined_2))
                            {
                              n_95 = ATgetArgument(m_95, 0);
                              q_95 = ATgetArgument(m_95, 1);
                              k_94 :
                              if(match_string(n_95, "p_0"))
                                {
                                  if(((g_95 != NULL) && (g_95 != q_95)))
                                    _fail(q_95);
                                  else
                                    g_95 = q_95;
                                }
                              else
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_94)), term_p_22), not_null(g_95)), term_q_29);
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
  ATerm g_96 = NULL,h_96 = NULL;
  g_96 = t;
  f_96 :
  if(match_cons(g_96, sym_Var_1))
    {
      h_96 = ATgetArgument(g_96, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_29), not_null(h_96)), term_r_29);
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
ATerm Bound_0 (ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL;
  z_96 = t;
  y_96 :
  if(match_cons(z_96, sym_Var_1))
    {
      a_97 = ATgetArgument(z_96, 0);
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_97 = NULL,e_97 = NULL;
            t = not_null(z_96);
            {
              ATerm t_4 (ATerm t)
              {
                t = term_e_28;
                return(t);
              }
              t = rewrite_1(t, t_4);
              {
                d_97 = t;
                s_96 :
                if(match_cons(d_97, sym_Defined_1))
                  {
                    e_97 = ATgetArgument(d_97, 0);
                    t_96 :
                    if(!(match_string(e_97, "f_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_97));
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm w_29 = t;
              int x_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_97 = NULL;
                  t = not_null(z_96);
                  {
                    ATerm u_4 (ATerm t)
                    {
                      t = term_e_28;
                      return(t);
                    }
                    t = rewrite_1(t, u_4);
                    {
                      h_97 = t;
                      v_96 :
                      if(match_cons(h_97, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_u_28;
                  LocalPopChoice(x_29);
                }
              else
                {
                  t = w_29;
                  {
                    ATerm k_97 = NULL,l_97 = NULL;
                    t = not_null(z_96);
                    {
                      ATerm v_4 (ATerm t)
                      {
                        t = term_e_28;
                        return(t);
                      }
                      t = rewrite_1(t, v_4);
                      {
                        k_97 = t;
                        w_96 :
                        if(match_cons(k_97, sym_Defined_1))
                          {
                            l_97 = ATgetArgument(k_97, 0);
                            x_96 :
                            if(!(match_string(l_97, "b_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_97));
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
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(z_29);
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = y_29;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(h_30);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = g_30;
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(j_30);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = i_30;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL;
  a_98 = t;
  x_97 :
  if(match_cons(a_98, sym_Rule_3))
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
            t = z_74(t);
            {
              k_98 = t;
              {
                t = not_null(c_98);
                {
                  ATerm o_98 = NULL;
                  t = a_75(t);
                  {
                    m_98 = t;
                    {
                      t = not_null(d_98);
                      {
                        ATerm q_98 = NULL;
                        t = b_75(t);
                        {
                          o_98 = t;
                          {
                            ATerm r_98 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(k_98), not_null(m_98), not_null(o_98)), not_null(i_98));
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
ATerm RootApp_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm d_99 = NULL,e_99 = NULL;
  d_99 = t;
  c_99 :
  if(match_cons(d_99, sym_RootApp_1))
    {
      e_99 = ATgetArgument(d_99, 0);
      {
        ATerm h_99 = NULL,j_99 = NULL;
        ATerm i_99 = NULL;
        t = SSLgetAnnotations(not_null(d_99));
        {
          i_99 = t;
          if(((h_99 != NULL) && (h_99 != i_99)))
            _fail(i_99);
          else
            h_99 = i_99;
        }
        {
          t = not_null(e_99);
          {
            ATerm l_99 = NULL;
            t = u_75(t);
            {
              j_99 = t;
              {
                ATerm m_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(j_99)), not_null(h_99));
                {
                  m_99 = t;
                  if(((l_99 != NULL) && (l_99 != m_99)))
                    _fail(m_99);
                  else
                    l_99 = m_99;
                }
                t = not_null(l_99);
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
ATerm App_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL;
  x_99 = t;
  w_99 :
  if(match_cons(x_99, sym_App_2))
    {
      y_99 = ATgetArgument(x_99, 0);
      z_99 = ATgetArgument(x_99, 1);
      {
        ATerm d_100 = NULL,f_100 = NULL;
        ATerm e_100 = NULL;
        t = SSLgetAnnotations(not_null(x_99));
        {
          e_100 = t;
          if(((d_100 != NULL) && (d_100 != e_100)))
            _fail(e_100);
          else
            d_100 = e_100;
        }
        {
          t = not_null(y_99);
          {
            ATerm h_100 = NULL;
            t = s_75(t);
            {
              f_100 = t;
              {
                t = not_null(z_99);
                {
                  ATerm q_100 = NULL;
                  t = t_75(t);
                  {
                    h_100 = t;
                    {
                      ATerm r_100 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(f_100), not_null(h_100)), not_null(d_100));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_replace_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,f_101 = NULL,g_101 = NULL;
  d_101 = t;
  c_101 :
  if(match_cons(d_101, sym__3))
    {
      e_101 = ATgetArgument(d_101, 0);
      f_101 = ATgetArgument(d_101, 1);
      g_101 = ATgetArgument(d_101, 2);
      {
        ATerm k_101 = NULL;
        ATerm k_30;
        k_30 = t;
        {
          ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_101), not_null(f_101));
          {
            t = table_get_0(t);
            {
              l_101 = t;
              b_101 :
              if(((ATgetType(l_101) == AT_LIST) && !(ATisEmpty(l_101))))
                {
                  m_101 = ATgetFirst((ATermList) l_101);
                  n_101 = (ATerm) ATgetNext((ATermList) l_101);
                  {
                    if(((k_101 != NULL) && (k_101 != n_101)))
                      _fail(n_101);
                    else
                      k_101 = n_101;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_101), not_null(f_101), (ATerm) ATinsert(CheckATermList(not_null(k_101)), not_null(g_101)));
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
        t = k_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm n_100 (ATerm))
{
  ATerm t_101 = NULL,u_101 = NULL,w_101 = NULL;
  t_101 = t;
  s_101 :
  if(match_cons(t_101, sym__2))
    {
      u_101 = ATgetArgument(t_101, 0);
      w_101 = ATgetArgument(t_101, 1);
      {
        ATerm a_102 = NULL;
        ATerm l_30;
        l_30 = t;
        {
          ATerm f_102 = NULL;
          t = n_100(t);
          {
            f_102 = t;
            {
              if(((a_102 != NULL) && (a_102 != f_102)))
                _fail(f_102);
              else
                a_102 = f_102;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_102), not_null(u_101), not_null(w_101));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = l_30;
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
  ATerm q_102 = NULL,r_102 = NULL;
  q_102 = t;
  p_102 :
  if(match_cons(q_102, sym_Var_1))
    {
      r_102 = ATgetArgument(q_102, 0);
      {
        ATerm m_30;
        m_30 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_102)), term_o_30);
          {
            ATerm w_4 (ATerm t)
            {
              t = term_e_28;
              return(t);
            }
            t = override_key_1(t, w_4);
          }
        }
        t = m_30;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm h_103 = NULL,i_103 = NULL;
  h_103 = t;
  g_103 :
  if(match_cons(h_103, sym_Var_1))
    {
      i_103 = ATgetArgument(h_103, 0);
      {
        ATerm p_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_103 = NULL,n_103 = NULL;
            ATerm m_103 = NULL;
            t = SSLgetAnnotations(not_null(h_103));
            {
              m_103 = t;
              if(((l_103 != NULL) && (l_103 != m_103)))
                _fail(m_103);
              else
                l_103 = m_103;
            }
            {
              t = not_null(i_103);
              {
                ATerm s_103 = NULL;
                t = r_0(t);
                {
                  n_103 = t;
                  {
                    ATerm t_103 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(n_103)), not_null(l_103));
                    {
                      t_103 = t;
                      if(((s_103 != NULL) && (s_103 != t_103)))
                        _fail(t_103);
                      else
                        s_103 = t_103;
                    }
                    t = not_null(s_103);
                  }
                }
              }
            }
            LocalPopChoice(w_30);
          }
        else
          {
            t = p_30;
            {
              ATerm w_103 = NULL,y_103 = NULL;
              ATerm x_103 = NULL;
              t = SSLgetAnnotations(not_null(h_103));
              {
                x_103 = t;
                if(((w_103 != NULL) && (w_103 != x_103)))
                  _fail(x_103);
                else
                  w_103 = x_103;
              }
              {
                t = not_null(i_103);
                {
                  ATerm a_104 = NULL;
                  t = r_0(t);
                  {
                    y_103 = t;
                    {
                      ATerm b_104 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_103)), not_null(w_103));
                      {
                        b_104 = t;
                        if(((a_104 != NULL) && (a_104 != b_104)))
                          _fail(b_104);
                        else
                          a_104 = b_104;
                      }
                      t = not_null(a_104);
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
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(y_30);
      t = Binding_0(t);
    }
  else
    {
      t = x_30;
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(d_31);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = c_31;
            {
              ATerm e_31 = t;
              int f_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(f_31);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = e_31;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm p_104 = NULL,q_104 = NULL;
  p_104 = t;
  o_104 :
  if(match_cons(p_104, sym_Match_1))
    {
      q_104 = ATgetArgument(p_104, 0);
      {
        ATerm u_104 = NULL,w_104 = NULL;
        ATerm v_104 = NULL;
        t = SSLgetAnnotations(not_null(p_104));
        {
          v_104 = t;
          if(((u_104 != NULL) && (u_104 != v_104)))
            _fail(v_104);
          else
            u_104 = v_104;
        }
        {
          t = not_null(q_104);
          {
            ATerm y_104 = NULL;
            t = d_72(t);
            {
              w_104 = t;
              {
                ATerm z_104 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(w_104)), not_null(u_104));
                {
                  z_104 = t;
                  if(((y_104 != NULL) && (y_104 != z_104)))
                    _fail(z_104);
                  else
                    y_104 = z_104;
                }
                t = not_null(y_104);
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
ATerm Build_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm j_105 = NULL,k_105 = NULL;
  j_105 = t;
  i_105 :
  if(match_cons(j_105, sym_Build_1))
    {
      k_105 = ATgetArgument(j_105, 0);
      {
        ATerm n_105 = NULL,p_105 = NULL;
        ATerm o_105 = NULL;
        t = SSLgetAnnotations(not_null(j_105));
        {
          o_105 = t;
          if(((n_105 != NULL) && (n_105 != o_105)))
            _fail(o_105);
          else
            n_105 = o_105;
        }
        {
          t = not_null(k_105);
          {
            ATerm r_105 = NULL;
            t = e_72(t);
            {
              p_105 = t;
              {
                ATerm y_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_105)), not_null(n_105));
                {
                  y_105 = t;
                  if(((r_105 != NULL) && (r_105 != y_105)))
                    _fail(y_105);
                  else
                    r_105 = y_105;
                }
                t = not_null(r_105);
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
ATerm VarScope_1 (ATerm t, ATerm e_111 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    t = term_e_28;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, e_111);
    return(t);
  }
  t = scope_2(t, x_4, y_4);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm g_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(m_31);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = g_31;
      {
        ATerm n_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(s_31);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = n_31;
            {
              ATerm t_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(u_31);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = t_31;
                  {
                    ATerm v_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(w_31);
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
                        t = v_31;
                        {
                          ATerm x_31 = t;
                          int y_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(y_31);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = x_31;
                              {
                                ATerm z_31 = t;
                                int a_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(a_32);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = z_31;
                                    {
                                      ATerm e_32 = t;
                                      int f_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(f_32);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = e_32;
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
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL;
  f_106 = t;
  e_106 :
  if(match_cons(f_106, sym_SDef_3))
    {
      g_106 = ATgetArgument(f_106, 0);
      h_106 = ATgetArgument(f_106, 1);
      i_106 = ATgetArgument(f_106, 2);
      {
        ATerm j_32;
        j_32 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_m_32, not_null(g_106)));
          {
            ATerm z_4 (ATerm t)
            {
              t = term_h_28;
              return(t);
            }
            t = assert_1(t, z_4);
            {
              t = not_null(i_106);
              t = unbound_vars_0(t);
            }
          }
        }
        t = j_32;
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
  ATerm a_5 (ATerm t)
  {
    ATerm o_106 = NULL;
    o_106 = t;
    {
      ATerm n_32;
      n_32 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_106)), term_u_28);
        {
          ATerm b_5 (ATerm t)
          {
            t = term_e_28;
            return(t);
          }
          t = assert_1(t, b_5);
        }
      }
      t = n_32;
    }
    return(t);
  }
  t = map_1(t, a_5);
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      t = term_e_28;
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm o_32 = t;
      int p_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_32;
          q_32 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = q_32;
          t = sdef_ud_0(t);
          LocalPopChoice(p_32);
        }
      else
        {
          t = o_32;
          {
            ATerm r_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                LocalPopChoice(s_32);
              }
            else
              {
                t = r_32;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, e_5, f_5);
    return(t);
  }
  t = scope_2(t, c_5, d_5);
  return(t);
}
ATerm defs_use_def_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm w_32;
        w_32 = t;
        {
          ATerm g_5 (ATerm t)
          {
            ATerm x_32 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_32;
              }
            return(t);
          }
          t = filter_1(t, g_5);
          t = Nil_0(t);
        }
        t = w_32;
      }
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm w_106 = NULL,x_106 = NULL;
  w_106 = t;
  v_106 :
  if(match_cons(w_106, sym_Signature_1))
    {
      x_106 = ATgetArgument(w_106, 0);
      {
        ATerm a_107 = NULL,c_107 = NULL;
        ATerm b_107 = NULL;
        t = SSLgetAnnotations(not_null(w_106));
        {
          b_107 = t;
          if(((a_107 != NULL) && (a_107 != b_107)))
            _fail(b_107);
          else
            a_107 = b_107;
        }
        {
          t = not_null(x_106);
          {
            ATerm e_107 = NULL;
            t = o_74(t);
            {
              c_107 = t;
              {
                ATerm f_107 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(c_107)), not_null(a_107));
                {
                  f_107 = t;
                  if(((e_107 != NULL) && (e_107 != f_107)))
                    _fail(f_107);
                  else
                    e_107 = f_107;
                }
                t = not_null(e_107);
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
  ATerm h_5 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm j_5 (ATerm t)
    {
      ATerm k_5 (ATerm t)
      {
        t = Overlays_1(t, defs_use_def_0);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        ATerm m_5 (ATerm t)
        {
          t = Strategies_1(t, defs_use_def_0);
          return(t);
        }
        t = Cons_2(t, m_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, k_5, l_5);
      return(t);
    }
    t = Cons_2(t, i_5, j_5);
    return(t);
  }
  t = Specification_1(t, h_5);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm z_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL,d_109 = NULL,e_109 = NULL;
  c_109 = t;
  v_108 :
  if(match_cons(c_109, sym_Lets_2))
    {
      d_109 = ATgetArgument(c_109, 0);
      e_109 = ATgetArgument(c_109, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(d_109), not_null(e_109));
    }
  else
    {
      if(match_cons(c_109, sym_LChoices_1))
        {
          d_109 = ATgetArgument(c_109, 0);
          w_108 :
          if(((ATgetType(d_109) == AT_LIST) && !(ATisEmpty(d_109))))
            {
              z_108 = ATgetFirst((ATermList) d_109);
              a_109 = (ATerm) ATgetNext((ATermList) d_109);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(z_108), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(a_109)));
            }
          else
            {
              if(((ATgetType(d_109) == AT_LIST) && ATisEmpty(d_109)))
                {
                  t = term_y_32;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(c_109, sym_Choices_1))
            {
              d_109 = ATgetArgument(c_109, 0);
              x_108 :
              if(((ATgetType(d_109) == AT_LIST) && !(ATisEmpty(d_109))))
                {
                  z_108 = ATgetFirst((ATermList) d_109);
                  a_109 = (ATerm) ATgetNext((ATermList) d_109);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(z_108), (ATerm) ATmakeAppl(sym_Choices_1, not_null(a_109)));
                }
              else
                {
                  if(((ATgetType(d_109) == AT_LIST) && ATisEmpty(d_109)))
                    {
                      t = term_y_32;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(c_109, sym_Seqs_1))
                {
                  d_109 = ATgetArgument(c_109, 0);
                  y_108 :
                  if(((ATgetType(d_109) == AT_LIST) && !(ATisEmpty(d_109))))
                    {
                      z_108 = ATgetFirst((ATermList) d_109);
                      a_109 = (ATerm) ATgetNext((ATermList) d_109);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_108), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_109)));
                    }
                  else
                    {
                      if(((ATgetType(d_109) == AT_LIST) && ATisEmpty(d_109)))
                        {
                          t = term_i_15;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(c_109, sym_DefaultVarDec_1))
                    {
                      d_109 = ATgetArgument(c_109, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(d_109), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19));
                    }
                  else
                    {
                      if(match_cons(c_109, sym_InfixApp_3))
                        {
                          d_109 = ATgetArgument(c_109, 0);
                          e_109 = ATgetArgument(c_109, 1);
                          b_109 = ATgetArgument(c_109, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_109), (ATerm) ATmakeAppl(sym_Op_2, term_b_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_109)), not_null(d_109))));
                        }
                      else
                        {
                          if(match_cons(c_109, sym_BAM_3))
                            {
                              d_109 = ATgetArgument(c_109, 0);
                              e_109 = ATgetArgument(c_109, 1);
                              b_109 = ATgetArgument(c_109, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(b_109))), not_null(d_109)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_109))));
                            }
                          else
                            {
                              if(match_cons(c_109, sym_AM_2))
                                {
                                  d_109 = ATgetArgument(c_109, 0);
                                  e_109 = ATgetArgument(c_109, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_109), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_109)));
                                }
                              else
                                {
                                  if(match_cons(c_109, sym_MA_2))
                                    {
                                      d_109 = ATgetArgument(c_109, 0);
                                      e_109 = ATgetArgument(c_109, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_109)), not_null(e_109));
                                    }
                                  else
                                    {
                                      if(match_cons(c_109, sym_BA_2))
                                        {
                                          d_109 = ATgetArgument(c_109, 0);
                                          e_109 = ATgetArgument(c_109, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_109)), not_null(d_109));
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
ATerm topdown_1 (ATerm t, ATerm s_83 (ATerm))
{
  t = s_83(t);
  {
    ATerm n_5 (ATerm t)
    {
      t = topdown_1(t, s_83);
      return(t);
    }
    t = _all(t, n_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL;
  u_111 = t;
  r_111 :
  if(match_cons(u_111, sym__2))
    {
      v_111 = ATgetArgument(u_111, 0);
      y_111 = ATgetArgument(u_111, 1);
      s_111 :
      if(match_cons(v_111, sym__2))
        {
          w_111 = ATgetArgument(v_111, 0);
          x_111 = ATgetArgument(v_111, 1);
          t_111 :
          if(match_cons(y_111, sym__2))
            {
              z_111 = ATgetArgument(y_111, 0);
              a_112 = ATgetArgument(y_111, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_111)), not_null(w_111)), (ATerm) ATinsert(CheckATermList(not_null(a_112)), not_null(x_111)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm i_112 = NULL,j_112 = NULL,k_112 = NULL;
  i_112 = t;
  h_112 :
  if(((ATgetType(i_112) == AT_LIST) && !(ATisEmpty(i_112))))
    {
      j_112 = ATgetFirst((ATermList) i_112);
      k_112 = (ATerm) ATgetNext((ATermList) i_112);
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_112), not_null(k_112));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm q_112 = NULL;
  q_112 = t;
  p_112 :
  if(((ATgetType(q_112) == AT_LIST) && ATisEmpty(q_112)))
    {
      t = term_z_32;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm g_92 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, g_92);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL;
  w_112 = t;
  v_112 :
  if(match_cons(w_112, sym_Var_1))
    {
      x_112 = ATgetArgument(w_112, 0);
      {
        ATerm a_113 = NULL,b_113 = NULL;
        t = not_null(w_112);
        {
          ATerm o_5 (ATerm t)
          {
            t = term_a_33;
            return(t);
          }
          t = rewrite_1(t, o_5);
          {
            a_113 = t;
            t_112 :
            if(match_cons(a_113, sym_Defined_1))
              {
                b_113 = ATgetArgument(a_113, 0);
                u_112 :
                if(!(match_string(b_113, "m_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_112));
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
  ATerm b_33;
  b_33 = t;
  {
    ATerm e_113 = NULL;
    ATerm f_113 = NULL;
    f_113 = t;
    if(((e_113 != NULL) && (e_113 != f_113)))
      _fail(f_113);
    else
      e_113 = f_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, not_null(e_113));
      t = printnl_0(t);
    }
  }
  t = b_33;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm c_33;
  c_33 = t;
  {
    t = error_0(t);
    {
      t = term_k_23;
      t = exit_0(t);
    }
  }
  t = c_33;
  return(t);
}
ATerm dummify_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL;
    r_113 = t;
    q_113 :
    if(match_cons(r_113, sym_Var_1))
      {
        s_113 = ATgetArgument(r_113, 0);
        {
          ATerm d_33 = t;
          if((PushChoice() == 0))
            {
              t = ContextVar_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_33;
            }
          t = term_f_33;
        }
      }
    else
      {
        if(match_cons(r_113, sym_Wld_0))
          {
            t = term_f_33;
          }
        else
          {
            if(match_cons(r_113, sym_RootApp_1))
              {
                s_113 = ATgetArgument(r_113, 0);
                {
                  ATerm x_113 = NULL;
                  ATerm a_114 = NULL;
                  t = not_null(s_113);
                  {
                    t = tvars_0(t);
                    {
                      ATerm q_5 (ATerm t)
                      {
                        ATerm y_113 = NULL;
                        ATerm z_113 = NULL;
                        z_113 = t;
                        if(((y_113 != NULL) && (y_113 != z_113)))
                          _fail(z_113);
                        else
                          y_113 = z_113;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_113));
                        return(t);
                      }
                      t = map_1(t, q_5);
                      {
                        a_114 = t;
                        if(((x_113 != NULL) && (x_113 != a_114)))
                          _fail(a_114);
                        else
                          x_113 = a_114;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_33, not_null(x_113));
                }
              }
            else
              {
                if(match_cons(r_113, sym_App_2))
                  {
                    s_113 = ATgetArgument(r_113, 0);
                    t_113 = ATgetArgument(r_113, 1);
                    {
                      ATerm d_114 = NULL;
                      ATerm g_114 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_113), not_null(t_113));
                      {
                        t = tvars_0(t);
                        {
                          ATerm r_5 (ATerm t)
                          {
                            ATerm e_114 = NULL;
                            ATerm f_114 = NULL;
                            f_114 = t;
                            if(((e_114 != NULL) && (e_114 != f_114)))
                              _fail(f_114);
                            else
                              e_114 = f_114;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_114));
                            return(t);
                          }
                          t = map_1(t, r_5);
                          {
                            g_114 = t;
                            if(((d_114 != NULL) && (d_114 != g_114)))
                              _fail(g_114);
                            else
                              d_114 = g_114;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_j_33, not_null(d_114));
                    }
                  }
                else
                  {
                    if(match_cons(r_113, sym_Con_3))
                      {
                        s_113 = ATgetArgument(r_113, 0);
                        t_113 = ATgetArgument(r_113, 1);
                        u_113 = ATgetArgument(r_113, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_p_33);
                          t = fatal_error_0(t);
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
  t = alltd_1(t, p_5);
  return(t);
}
ATerm SplitDynamicRule_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL;
  ATerm l_117 (ATerm t)
  {
    ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,i_117 = NULL;
    ATerm q_33;
    q_33 = t;
    {
      ATerm w_116 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_115), term_s_33);
      {
        ATerm d_34 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_34;
          }
        {
          ATerm x_116 = NULL;
          t = new_0(t);
          {
            w_116 = t;
            {
              if(((p_116 != NULL) && (p_116 != w_116)))
                _fail(w_116);
              else
                p_116 = w_116;
              {
                t = not_null(u_115);
                {
                  ATerm z_116 = NULL;
                  t = dummify_0(t);
                  {
                    x_116 = t;
                    {
                      if(((r_116 != NULL) && (r_116 != x_116)))
                        _fail(x_116);
                      else
                        r_116 = x_116;
                      {
                        ATerm c_117 = NULL;
                        ATerm h_34 = t;
                        int w_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_116 = NULL;
                            y_116 = t;
                            {
                              if(((u_115 != NULL) && (u_115 != y_116)))
                                _fail(y_116);
                              else
                                u_115 = y_116;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_116));
                            }
                            LocalPopChoice(w_34);
                          }
                        else
                          {
                            t = h_34;
                            {
                            }
                          }
                        {
                          z_116 = t;
                          {
                            if(((q_116 != NULL) && (q_116 != z_116)))
                              _fail(z_116);
                            else
                              q_116 = z_116;
                            {
                              t = not_null(r_116);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm f_117 = NULL;
                                  ATerm s_5 (ATerm t)
                                  {
                                    ATerm a_117 = NULL;
                                    ATerm b_117 = NULL;
                                    b_117 = t;
                                    if(((a_117 != NULL) && (a_117 != b_117)))
                                      _fail(b_117);
                                    else
                                      a_117 = b_117;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_117));
                                    return(t);
                                  }
                                  t = map_1(t, s_5);
                                  {
                                    c_117 = t;
                                    {
                                      if(((t_116 != NULL) && (t_116 != c_117)))
                                        _fail(c_117);
                                      else
                                        t_116 = c_117;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_115), not_null(w_115));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm g_117 = NULL;
                                            ATerm t_5 (ATerm t)
                                            {
                                              ATerm d_117 = NULL;
                                              ATerm e_117 = NULL;
                                              e_117 = t;
                                              if(((d_117 != NULL) && (d_117 != e_117)))
                                                _fail(e_117);
                                              else
                                                d_117 = e_117;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_117));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, t_5);
                                            {
                                              f_117 = t;
                                              {
                                                if(((s_116 != NULL) && (s_116 != f_117)))
                                                  _fail(f_117);
                                                else
                                                  s_116 = f_117;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_116), not_null(t_116));
                                                  {
                                                    ATerm h_117 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      g_117 = t;
                                                      {
                                                        if(((u_116 != NULL) && (u_116 != g_117)))
                                                          _fail(g_117);
                                                        else
                                                          u_116 = g_117;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            h_117 = t;
                                                            if(((v_116 != NULL) && (v_116 != h_117)))
                                                              _fail(h_117);
                                                            else
                                                              v_116 = h_117;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = q_33;
    {
      ATerm j_117 = NULL;
      t = not_null(r_115);
      {
        t = q_0(t);
        {
          j_117 = t;
          if(((i_117 != NULL) && (i_117 != j_117)))
            _fail(j_117);
          else
            i_117 = j_117;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(i_117), (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_34, (ATerm) ATinsert(CheckATermList(not_null(u_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_116))))), not_null(r_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_115), not_null(s_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(p_116)), not_null(u_115)), not_null(v_115), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_115))))), not_null(q_116)), (ATerm) ATmakeAppl(sym_Op_2, term_y_34, (ATerm) ATinsert(CheckATermList(not_null(u_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_116))))), not_null(w_115)))));
    }
    return(t);
  }
  q_115 = t;
  i_115 :
  if(match_cons(q_115, sym_RDef_3))
    {
      r_115 = ATgetArgument(q_115, 0);
      s_115 = ATgetArgument(q_115, 1);
      t_115 = ATgetArgument(q_115, 2);
      j_115 :
      if(match_cons(t_115, sym_Rule_3))
        {
          u_115 = ATgetArgument(t_115, 0);
          v_115 = ATgetArgument(t_115, 1);
          w_115 = ATgetArgument(t_115, 2);
          k_115 :
          if(match_cons(v_115, sym_Op_2))
            {
              o_115 = ATgetArgument(v_115, 0);
              p_115 = ATgetArgument(v_115, 1);
              l_115 :
              if(((ATgetType(p_115) == AT_LIST) && ATisEmpty(p_115)))
                {
                  m_115 :
                  if(match_string(o_115, "Undefined"))
                    {
                      ATerm b_35 = t;
                      int c_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_116 = NULL,c_116 = NULL,d_116 = NULL,i_116 = NULL;
                          ATerm d_35;
                          d_35 = t;
                          {
                            ATerm e_116 = NULL;
                            ATerm f_116 = NULL;
                            t = new_0(t);
                            {
                              e_116 = t;
                              {
                                if(((c_116 != NULL) && (c_116 != e_116)))
                                  _fail(e_116);
                                else
                                  c_116 = e_116;
                                {
                                  t = not_null(u_115);
                                  {
                                    ATerm h_116 = NULL;
                                    t = dummify_0(t);
                                    {
                                      f_116 = t;
                                      {
                                        if(((b_116 != NULL) && (b_116 != f_116)))
                                          _fail(f_116);
                                        else
                                          b_116 = f_116;
                                        {
                                          ATerm e_35 = t;
                                          int f_35 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm g_116 = NULL;
                                              g_116 = t;
                                              {
                                                if(((u_115 != NULL) && (u_115 != g_116)))
                                                  _fail(g_116);
                                                else
                                                  u_115 = g_116;
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_116));
                                              }
                                              LocalPopChoice(f_35);
                                            }
                                          else
                                            {
                                              t = e_35;
                                              {
                                              }
                                            }
                                          {
                                            h_116 = t;
                                            if(((d_116 != NULL) && (d_116 != h_116)))
                                              _fail(h_116);
                                            else
                                              d_116 = h_116;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          t = d_35;
                          {
                            ATerm j_116 = NULL;
                            t = not_null(r_115);
                            {
                              t = q_0(t);
                              {
                                j_116 = t;
                                if(((i_116 != NULL) && (i_116 != j_116)))
                                  _fail(j_116);
                                else
                                  i_116 = j_116;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(i_116), (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), not_null(b_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(r_115), not_null(s_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(c_116)), not_null(u_115)), term_s_33, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(r_115))))), not_null(d_116)), term_s_33), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_115), term_y_32)))));
                          }
                          LocalPopChoice(c_35);
                        }
                      else
                        {
                          t = b_35;
                          t = l_117(t);
                        }
                    }
                  else
                    {
                      t = l_117(t);
                    }
                }
              else
                {
                  n_115 :
                  t = l_117(t);
                }
            }
          else
            {
              t = l_117(t);
            }
        }
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
  ATerm h_118 = NULL,i_118 = NULL;
  h_118 = t;
  g_118 :
  if(match_cons(h_118, sym_OverrideDynamicRules_1))
    {
      i_118 = ATgetArgument(h_118, 0);
      {
        t = not_null(i_118);
        {
          ATerm u_5 (ATerm t)
          {
            ATerm v_5 (ATerm t)
            {
              ATerm k_118 = NULL;
              ATerm l_118 = NULL;
              l_118 = t;
              if(((k_118 != NULL) && (k_118 != l_118)))
                _fail(l_118);
              else
                k_118 = l_118;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_j_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(k_118)))));
              return(t);
            }
            t = SplitDynamicRule_1(t, v_5);
            return(t);
          }
          t = map_1(t, u_5);
          t = unzip_1(t, _id);
        }
      }
    }
  else
    {
      if(match_cons(h_118, sym_DynamicRules_1))
        {
          i_118 = ATgetArgument(h_118, 0);
          {
            t = not_null(i_118);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm n_118 = NULL;
                  ATerm o_118 = NULL;
                  o_118 = t;
                  if(((n_118 != NULL) && (n_118 != o_118)))
                    _fail(o_118);
                  else
                    n_118 = o_118;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(n_118)))));
                  return(t);
                }
                t = SplitDynamicRule_1(t, x_5);
                return(t);
              }
              t = map_1(t, w_5);
              t = unzip_1(t, _id);
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
ATerm split_under_scope_1 (ATerm t, ATerm w_109 (ATerm))
{
  ATerm w_118 = NULL,x_118 = NULL,y_118 = NULL;
  w_118 = t;
  v_118 :
  if(match_cons(w_118, sym_Scope_2))
    {
      x_118 = ATgetArgument(w_118, 0);
      y_118 = ATgetArgument(w_118, 1);
      {
        ATerm b_119 = NULL;
        ATerm y_5 (ATerm t)
        {
          t = term_a_33;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          ATerm c_119 = NULL;
          t = not_null(x_118);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(y_118);
              {
                t = w_109(t);
                {
                  c_119 = t;
                  if(((b_119 != NULL) && (b_119 != c_119)))
                    _fail(c_119);
                  else
                    b_119 = c_119;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, y_5, z_5);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_118), not_null(b_119));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm f_119 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_85(t);
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = _one(t, f_119);
      }
    return(t);
  }
  t = f_119(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm u_109 (ATerm))
{
  ATerm g_119 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm r_35 = t;
      int s_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_109(t);
          LocalPopChoice(s_35);
        }
      else
        {
          t = r_35;
          t = split_under_scope_1(t, g_119);
        }
      return(t);
    }
    t = oncetd_1(t, a_6);
    return(t);
  }
  t = g_119(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm i_119 = NULL;
    i_119 = t;
    {
      ATerm v_35;
      v_35 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_119)), term_x_35);
        {
          ATerm c_6 (ATerm t)
          {
            t = term_a_33;
            return(t);
          }
          t = assert_1(t, c_6);
        }
      }
      t = v_35;
    }
    return(t);
  }
  t = map_1(t, b_6);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL;
  q_119 = t;
  p_119 :
  if(((ATgetType(q_119) == AT_LIST) && !(ATisEmpty(q_119))))
    {
      r_119 = ATgetFirst((ATermList) q_119);
      s_119 = (ATerm) ATgetNext((ATermList) q_119);
      {
        ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL;
        ATerm d_6 (ATerm t)
        {
          t = term_a_33;
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          ATerm b_120 = NULL;
          t = not_null(r_119);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(r_119);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      y_119 = t;
                      n_119 :
                      if(match_cons(y_119, sym__2))
                        {
                          z_119 = ATgetArgument(y_119, 0);
                          a_120 = ATgetArgument(y_119, 1);
                          {
                            if(((w_119 != NULL) && (w_119 != z_119)))
                              _fail(z_119);
                            else
                              w_119 = z_119;
                            {
                              if(((v_119 != NULL) && (v_119 != a_120)))
                                _fail(a_120);
                              else
                                v_119 = a_120;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(w_119));
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
                  t = split_dynamic_rule_1(t, f_6);
                  {
                    b_120 = t;
                    if(((x_119 != NULL) && (x_119 != b_120)))
                      _fail(b_120);
                    else
                      x_119 = b_120;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, d_6, e_6);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_119)), not_null(x_119)), not_null(s_119));
          {
            ATerm y_35 = t;
            int c_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(c_36);
              }
            else
              {
                t = y_35;
                t = conc_more_lists_0(t);
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
ATerm repeat_2 (ATerm t, ATerm s_82 (ATerm), ATerm t_82 (ATerm))
{
  ATerm f_120 (ATerm t)
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_82(t);
        t = f_120(t);
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = t_82(t);
      }
    return(t);
  }
  t = f_120(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm v_82 (ATerm))
{
  t = repeat_2(t, v_82, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm g_120 (ATerm t)
  {
    t = c_91(t);
    {
      ATerm f_36 = t;
      int g_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(g_36);
        }
      else
        {
          t = f_36;
          t = Cons_2(t, _id, g_120);
        }
    }
    return(t);
  }
  t = g_120(t);
  return(t);
}
ATerm lift_dynamic_rules_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    t = repeat_2(t, lift_dynamic_rule_0, _id);
    return(t);
  }
  t = listtd_1(t, g_6);
  return(t);
}
ATerm DefDynamicRuleScope_0 (ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL;
  n_120 = t;
  j_120 :
  if(match_cons(n_120, sym_DynRuleScope_2))
    {
      o_120 = ATgetArgument(n_120, 0);
      p_120 = ATgetArgument(n_120, 1);
      k_120 :
      if(((ATgetType(o_120) == AT_LIST) && !(ATisEmpty(o_120))))
        {
          l_120 = ATgetFirst((ATermList) o_120);
          m_120 = (ATerm) ATgetNext((ATermList) o_120);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_i_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(m_120), not_null(p_120))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(l_120)))));
        }
      else
        {
          if(((ATgetType(o_120) == AT_LIST) && ATisEmpty(o_120)))
            {
              t = not_null(p_120);
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
  ATerm h_6 (ATerm t)
  {
    ATerm j_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DefDynamicRuleScope_0(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = j_36;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, h_6);
  return(t);
}
ATerm LiftDynamicRules_0 (ATerm t)
{
  ATerm i_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      ATerm k_6 (ATerm t)
      {
        ATerm l_6 (ATerm t)
        {
          ATerm m_6 (ATerm t)
          {
            t = define_rule_scope_0(t);
            t = lift_dynamic_rules_0(t);
            return(t);
          }
          t = Strategies_1(t, m_6);
          return(t);
        }
        t = Cons_2(t, l_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, k_6);
      return(t);
    }
    t = Cons_2(t, _id, j_6);
    return(t);
  }
  t = Specification_1(t, i_6);
  return(t);
}
ATerm DefScopeDefault_0 (ATerm t)
{
  ATerm z_120 = NULL,a_121 = NULL;
  z_120 = t;
  y_120 :
  if(match_cons(z_120, sym_ScopeDefault_1))
    {
      a_121 = ATgetArgument(z_120, 0);
      {
        ATerm c_121 = NULL;
        ATerm d_121 = NULL;
        t = not_null(a_121);
        {
          t = tvars_0(t);
          {
            d_121 = t;
            if(((c_121 != NULL) && (c_121 != d_121)))
              _fail(d_121);
            else
              c_121 = d_121;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(c_121), not_null(a_121));
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
  ATerm l_121 = NULL,m_121 = NULL;
  l_121 = t;
  k_121 :
  if(match_cons(l_121, sym_DynamicRules_1))
    {
      m_121 = ATgetArgument(l_121, 0);
      {
        ATerm p_121 = NULL,r_121 = NULL;
        ATerm q_121 = NULL;
        t = SSLgetAnnotations(not_null(l_121));
        {
          q_121 = t;
          if(((p_121 != NULL) && (p_121 != q_121)))
            _fail(q_121);
          else
            p_121 = q_121;
        }
        {
          t = not_null(m_121);
          {
            ATerm t_121 = NULL;
            t = n_75(t);
            {
              r_121 = t;
              {
                ATerm u_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(r_121)), not_null(p_121));
                {
                  u_121 = t;
                  if(((t_121 != NULL) && (t_121 != u_121)))
                    _fail(u_121);
                  else
                    t_121 = u_121;
                }
                t = not_null(t_121);
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
ATerm Scope_2 (ATerm t, ATerm h_72 (ATerm), ATerm i_72 (ATerm))
{
  ATerm f_122 = NULL,g_122 = NULL,h_122 = NULL;
  f_122 = t;
  e_122 :
  if(match_cons(f_122, sym_Scope_2))
    {
      g_122 = ATgetArgument(f_122, 0);
      h_122 = ATgetArgument(f_122, 1);
      {
        ATerm l_122 = NULL,n_122 = NULL;
        ATerm m_122 = NULL;
        t = SSLgetAnnotations(not_null(f_122));
        {
          m_122 = t;
          if(((l_122 != NULL) && (l_122 != m_122)))
            _fail(m_122);
          else
            l_122 = m_122;
        }
        {
          t = not_null(g_122);
          {
            ATerm p_122 = NULL;
            t = h_72(t);
            {
              n_122 = t;
              {
                t = not_null(h_122);
                {
                  ATerm r_122 = NULL;
                  t = i_72(t);
                  {
                    p_122 = t;
                    {
                      ATerm s_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(n_122), not_null(p_122)), not_null(l_122));
                      {
                        s_122 = t;
                        if(((r_122 != NULL) && (r_122 != s_122)))
                          _fail(s_122);
                        else
                          r_122 = s_122;
                      }
                      t = not_null(r_122);
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
ATerm tboundin_3 (ATerm t, ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm))
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, y_110, w_110);
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      t = DynamicRules_1(t, w_110);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm a_123 = NULL,b_123 = NULL;
  a_123 = t;
  z_122 :
  if(match_cons(a_123, sym_DynamicRules_1))
    {
      b_123 = ATgetArgument(a_123, 0);
      {
        t = not_null(b_123);
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
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL,n_123 = NULL;
  l_123 = t;
  g_123 :
  if(match_cons(l_123, sym_LRule_1))
    {
      m_123 = ATgetArgument(l_123, 0);
      h_123 :
      if(match_cons(m_123, sym_Rule_3))
        {
          i_123 = ATgetArgument(m_123, 0);
          j_123 = ATgetArgument(m_123, 1);
          k_123 = ATgetArgument(m_123, 2);
          {
            t = not_null(i_123);
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
      if(match_cons(l_123, sym_Scope_2))
        {
          m_123 = ATgetArgument(l_123, 0);
          n_123 = ATgetArgument(l_123, 1);
          t = not_null(m_123);
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
  ATerm x_123 = NULL,y_123 = NULL;
  x_123 = t;
  w_123 :
  if(match_cons(x_123, sym_Var_1))
    {
      y_123 = ATgetArgument(x_123, 0);
      t = (ATerm) ATinsert(ATempty, not_null(y_123));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm s_95 (ATerm))
{
  ATerm d_124 = NULL,e_124 = NULL,f_124 = NULL;
  d_124 = t;
  c_124 :
  if(match_cons(d_124, sym__2))
    {
      e_124 = ATgetArgument(d_124, 0);
      f_124 = ATgetArgument(d_124, 1);
      {
        t = not_null(e_124);
        {
          ATerm j_124 (ATerm t)
          {
            ATerm e_37 = t;
            int f_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_124);
                LocalPopChoice(f_37);
              }
            else
              {
                t = e_37;
                {
                  ATerm g_37 = t;
                  int h_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_6 (ATerm t)
                      {
                        t = not_null(f_124);
                        return(t);
                      }
                      t = HdMember_p__2(t, s_95, n_6);
                      t = j_124(t);
                      LocalPopChoice(h_37);
                    }
                  else
                    {
                      t = g_37;
                      t = Cons_2(t, _id, j_124);
                    }
                }
              }
            return(t);
          }
          t = j_124(t);
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
ATerm crush_3 (ATerm t, ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm))
{
  ATerm o_124 = NULL;
  ATerm q_124 = NULL;
  o_124 = t;
  {
    ATerm r_124 = NULL;
    ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL;
    t = not_null(o_124);
    {
      r_124 = t;
      {
        t = SSL_explode_term(not_null(r_124));
        {
          t_124 = t;
          n_124 :
          if(match_cons(t_124, sym__2))
            {
              u_124 = ATgetArgument(t_124, 0);
              v_124 = ATgetArgument(t_124, 1);
              if(((q_124 != NULL) && (q_124 != v_124)))
                _fail(v_124);
              else
                q_124 = v_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_124);
      t = foldr_3(t, j_95, k_95, l_95);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_125 = NULL,c_125 = NULL,d_125 = NULL;
  b_125 = t;
  a_125 :
  if(match_cons(b_125, sym__2))
    {
      c_125 = ATgetArgument(b_125, 0);
      d_125 = ATgetArgument(b_125, 1);
      if(((c_125 != NULL) && (c_125 != d_125)))
        _fail(d_125);
      else
        c_125 = d_125;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_95 (ATerm), ATerm x_95 (ATerm))
{
  ATerm j_125 = NULL,k_125 = NULL,l_125 = NULL;
  j_125 = t;
  i_125 :
  if(((ATgetType(j_125) == AT_LIST) && !(ATisEmpty(j_125))))
    {
      k_125 = ATgetFirst((ATermList) j_125);
      l_125 = (ATerm) ATgetNext((ATermList) j_125);
      {
        t = x_95(t);
        {
          ATerm o_6 (ATerm t)
          {
            ATerm o_125 = NULL;
            o_125 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_125), not_null(o_125));
              t = w_95(t);
            }
            return(t);
          }
          t = fetch_1(t, o_6);
        }
        t = not_null(l_125);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm o_95 (ATerm))
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
            ATerm k_37 = t;
            int l_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(l_37);
              }
            else
              {
                t = k_37;
                {
                  ATerm m_37 = t;
                  int r_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_6 (ATerm t)
                      {
                        t = not_null(w_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, o_95, p_6);
                      t = a_126(t);
                      LocalPopChoice(r_37);
                    }
                  else
                    {
                      t = m_37;
                      t = Cons_2(t, _id, a_126);
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
ATerm UfShift_0 (ATerm t)
{
  ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL,i_126 = NULL;
  e_126 = t;
  c_126 :
  if(match_cons(e_126, sym__2))
    {
      f_126 = ATgetArgument(e_126, 0);
      g_126 = ATgetArgument(e_126, 1);
      d_126 :
      if(((ATgetType(g_126) == AT_LIST) && !(ATisEmpty(g_126))))
        {
          h_126 = ATgetFirst((ATermList) g_126);
          i_126 = (ATerm) ATgetNext((ATermList) g_126);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_126)), not_null(h_126)), not_null(i_126));
        }
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
  ATerm p_126 = NULL,q_126 = NULL,r_126 = NULL;
  p_126 = t;
  o_126 :
  if(match_cons(p_126, sym__2))
    {
      q_126 = ATgetArgument(p_126, 0);
      r_126 = ATgetArgument(p_126, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_126)), not_null(q_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL;
  z_126 = t;
  w_126 :
  if(match_cons(z_126, sym__2))
    {
      a_127 = ATgetArgument(z_126, 0);
      d_127 = ATgetArgument(z_126, 1);
      x_126 :
      if(((ATgetType(a_127) == AT_LIST) && !(ATisEmpty(a_127))))
        {
          b_127 = ATgetFirst((ATermList) a_127);
          c_127 = (ATerm) ATgetNext((ATermList) a_127);
          y_126 :
          if(((ATgetType(d_127) == AT_LIST) && !(ATisEmpty(d_127))))
            {
              e_127 = ATgetFirst((ATermList) d_127);
              f_127 = (ATerm) ATgetNext((ATermList) d_127);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_127), not_null(e_127)), (ATerm) ATmakeAppl(sym__2, not_null(c_127), not_null(f_127)));
            }
          else
            {
              _fail(t);
            }
        }
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
  ATerm p_127 = NULL,q_127 = NULL,r_127 = NULL;
  p_127 = t;
  m_127 :
  if(match_cons(p_127, sym__2))
    {
      q_127 = ATgetArgument(p_127, 0);
      r_127 = ATgetArgument(p_127, 1);
      n_127 :
      if(((ATgetType(q_127) == AT_LIST) && ATisEmpty(q_127)))
        {
          o_127 :
          if(((ATgetType(r_127) == AT_LIST) && ATisEmpty(r_127)))
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
ATerm genzip_4 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm))
{
  ATerm t_127 (ATerm t)
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_91(t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        {
          t = x_91(t);
          {
            t = _2(t, z_91, t_127);
            t = y_91(t);
          }
        }
      }
    return(t);
  }
  t = t_127(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_92 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_92);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL;
  e_128 = t;
  c_128 :
  if(((ATgetType(e_128) == AT_LIST) && !(ATisEmpty(e_128))))
    {
      f_128 = ATgetFirst((ATermList) e_128);
      i_128 = (ATerm) ATgetNext((ATermList) e_128);
      d_128 :
      if(match_cons(f_128, sym__2))
        {
          g_128 = ATgetArgument(f_128, 0);
          h_128 = ATgetArgument(f_128, 1);
          {
            ATerm m_128 = NULL,n_128 = NULL,t_128 = NULL,z_128 = NULL;
            ATerm u_37;
            u_37 = t;
            {
              ATerm o_128 = NULL;
              ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL;
              t = not_null(h_128);
              {
                o_128 = t;
                {
                  t = SSL_explode_term(not_null(o_128));
                  {
                    q_128 = t;
                    x_127 :
                    if(match_cons(q_128, sym__2))
                      {
                        r_128 = ATgetArgument(q_128, 0);
                        s_128 = ATgetArgument(q_128, 1);
                        {
                          if(((m_128 != NULL) && (m_128 != r_128)))
                            _fail(r_128);
                          else
                            m_128 = r_128;
                          if(((n_128 != NULL) && (n_128 != s_128)))
                            _fail(s_128);
                          else
                            n_128 = s_128;
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
            t = u_37;
            {
              ATerm v_37;
              v_37 = t;
              {
                ATerm u_128 = NULL;
                ATerm w_128 = NULL,x_128 = NULL,y_128 = NULL;
                t = not_null(g_128);
                {
                  u_128 = t;
                  {
                    t = SSL_explode_term(not_null(u_128));
                    {
                      w_128 = t;
                      a_128 :
                      if(match_cons(w_128, sym__2))
                        {
                          x_128 = ATgetArgument(w_128, 0);
                          y_128 = ATgetArgument(w_128, 1);
                          {
                            if(((m_128 != NULL) && (m_128 != x_128)))
                              _fail(x_128);
                            else
                              m_128 = x_128;
                            if(((t_128 != NULL) && (t_128 != y_128)))
                              _fail(y_128);
                            else
                              t_128 = y_128;
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
              t = v_37;
              {
                ATerm a_129 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_128), not_null(n_128));
                {
                  t = zip_1(t, _id);
                  {
                    a_129 = t;
                    if(((z_128 != NULL) && (z_128 != a_129)))
                      _fail(a_129);
                    else
                      z_128 = a_129;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_128), not_null(i_128));
                  {
                    ATerm w_37 = t;
                    int x_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(x_37);
                      }
                    else
                      {
                        t = w_37;
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
  ATerm m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL,q_129 = NULL;
  m_129 = t;
  k_129 :
  if(((ATgetType(m_129) == AT_LIST) && !(ATisEmpty(m_129))))
    {
      n_129 = ATgetFirst((ATermList) m_129);
      q_129 = (ATerm) ATgetNext((ATermList) m_129);
      l_129 :
      if(match_cons(n_129, sym__2))
        {
          o_129 = ATgetArgument(n_129, 0);
          p_129 = ATgetArgument(n_129, 1);
          {
            ATerm s_129 = NULL;
            if(((o_129 != NULL) && (o_129 != p_129)))
              _fail(p_129);
            else
              o_129 = p_129;
            {
              if(((s_129 != NULL) && (s_129 != q_129)))
                _fail(q_129);
              else
                s_129 = q_129;
              t = not_null(s_129);
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
ATerm while_not_2 (ATerm t, ATerm j_83 (ATerm), ATerm k_83 (ATerm))
{
  ATerm u_129 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_83(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          t = k_83(t);
          t = u_129(t);
        }
      }
    return(t);
  }
  t = u_129(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm o_83 (ATerm))
{
  t = m_83(t);
  t = while_not_2(t, n_83, o_83);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 (ATerm t)
      {
        ATerm w_129 = NULL;
        w_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_129));
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm s_6 (ATerm t)
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 (ATerm t)
            {
              ATerm m_38 = t;
              int o_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(o_38);
                }
              else
                {
                  t = m_38;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, t_6);
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, q_6, r_6, s_6);
      LocalPopChoice(g_38);
    }
  else
    {
      t = f_38;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm n_109 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_130 (ATerm t)
  {
    ATerm q_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_109(t);
        LocalPopChoice(t_38);
      }
    else
      {
        t = q_38;
        {
          ATerm u_38 = t;
          int v_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_130 = NULL;
              ATerm w_38;
              w_38 = t;
              {
                ATerm b_130 = NULL;
                t = m_109(t);
                {
                  b_130 = t;
                  if(((a_130 != NULL) && (a_130 != b_130)))
                    _fail(b_130);
                  else
                    a_130 = b_130;
                }
              }
              t = w_38;
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm w_6 (ATerm t)
                  {
                    t = not_null(a_130);
                    return(t);
                  }
                  t = split_2(t, c_130, w_6);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = n_109(t, u_6, c_130, v_6);
                {
                  ATerm x_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm y_6 (ATerm t)
                  {
                    t = union_1(t, eq_0);
                    return(t);
                  }
                  t = crush_3(t, x_6, y_6, _id);
                }
              }
              LocalPopChoice(v_38);
            }
          else
            {
              t = u_38;
              {
                ATerm z_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm a_7 (ATerm t)
                {
                  t = union_1(t, eq_0);
                  return(t);
                }
                t = crush_3(t, z_6, a_7, c_130);
              }
            }
        }
      }
    return(t);
  }
  t = c_130(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, b_7, tboundin_3);
  return(t);
}
ATerm DefLRule_0 (ATerm t)
{
  ATerm i_130 = NULL,j_130 = NULL,k_130 = NULL,m_130 = NULL,n_130 = NULL;
  i_130 = t;
  g_130 :
  if(match_cons(i_130, sym_LRule_1))
    {
      j_130 = ATgetArgument(i_130, 0);
      h_130 :
      if(match_cons(j_130, sym_Rule_3))
        {
          k_130 = ATgetArgument(j_130, 0);
          m_130 = ATgetArgument(j_130, 1);
          n_130 = ATgetArgument(j_130, 2);
          {
            ATerm t_130 = NULL;
            ATerm u_130 = NULL;
            t = not_null(k_130);
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
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(t_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_130), not_null(m_130), not_null(n_130))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm t_83 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = bottomup_1(t, t_83);
    return(t);
  }
  t = _all(t, c_7);
  t = t_83(t);
  return(t);
}
ATerm define_lrules_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefLRule_0(t);
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            t = DefScopeDefault_0(t);
          }
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, d_7);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL;
  z_130 = t;
  y_130 :
  if(((ATgetType(z_130) == AT_LIST) && !(ATisEmpty(z_130))))
    {
      a_131 = ATgetFirst((ATermList) z_130);
      b_131 = (ATerm) ATgetNext((ATermList) z_130);
      t = not_null(a_131);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL,i_131 = NULL;
  g_131 = t;
  f_131 :
  if(match_cons(g_131, sym__2))
    {
      h_131 = ATgetArgument(g_131, 0);
      i_131 = ATgetArgument(g_131, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_131), not_null(i_131));
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
ATerm rewrite_1 (ATerm t, ATerm o_100 (ATerm))
{
  ATerm o_131 = NULL;
  ATerm q_131 = NULL;
  o_131 = t;
  {
    ATerm t_131 = NULL;
    t = term_k_39;
    {
      t = o_100(t);
      {
        t_131 = t;
        if(((q_131 != NULL) && (q_131 != t_131)))
          _fail(t_131);
        else
          q_131 = t_131;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_131), not_null(o_131));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL;
  d_132 = t;
  c_132 :
  if(match_cons(d_132, sym_Var_1))
    {
      e_132 = ATgetArgument(d_132, 0);
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_132 = NULL,i_132 = NULL;
            t = not_null(d_132);
            {
              ATerm e_7 (ATerm t)
              {
                t = term_n_39;
                return(t);
              }
              t = rewrite_1(t, e_7);
              {
                h_132 = t;
                y_131 :
                if(match_cons(h_132, sym_Defined_1))
                  {
                    i_132 = ATgetArgument(h_132, 0);
                    z_131 :
                    if(!(match_string(i_132, "f_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_132), (ATerm) ATempty);
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            {
              ATerm l_132 = NULL,m_132 = NULL;
              t = not_null(d_132);
              {
                ATerm f_7 (ATerm t)
                {
                  t = term_n_39;
                  return(t);
                }
                t = rewrite_1(t, f_7);
                {
                  l_132 = t;
                  a_132 :
                  if(match_cons(l_132, sym_Defined_1))
                    {
                      m_132 = ATgetArgument(l_132, 0);
                      b_132 :
                      if(!(match_string(m_132, "b_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(e_132), (ATerm) ATempty);
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
ATerm alltd_1 (ATerm t, ATerm w_85 (ATerm))
{
  ATerm q_132 (ATerm t)
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_85(t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = _all(t, q_132);
      }
    return(t);
  }
  t = q_132(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm m_100 (ATerm))
{
  ATerm w_132 = NULL,x_132 = NULL,y_132 = NULL;
  w_132 = t;
  v_132 :
  if(match_cons(w_132, sym__2))
    {
      x_132 = ATgetArgument(w_132, 0);
      y_132 = ATgetArgument(w_132, 1);
      {
        ATerm d_133 = NULL,e_133 = NULL,f_133 = NULL;
        ATerm q_39;
        q_39 = t;
        {
          ATerm g_133 = NULL;
          ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL;
          t = m_100(t);
          {
            g_133 = t;
            {
              if(((d_133 != NULL) && (d_133 != g_133)))
                _fail(g_133);
              else
                d_133 = g_133;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_133), not_null(x_132), not_null(y_132));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_39 = t;
                    int s_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_133), term_v_39);
                        t = table_get_0(t);
                        LocalPopChoice(s_39);
                      }
                    else
                      {
                        t = r_39;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_133 = t;
                      u_132 :
                      if(((ATgetType(h_133) == AT_LIST) && !(ATisEmpty(h_133))))
                        {
                          i_133 = ATgetFirst((ATermList) h_133);
                          j_133 = (ATerm) ATgetNext((ATermList) h_133);
                          {
                            if(((e_133 != NULL) && (e_133 != i_133)))
                              _fail(i_133);
                            else
                              e_133 = i_133;
                            {
                              if(((f_133 != NULL) && (f_133 != j_133)))
                                _fail(j_133);
                              else
                                f_133 = j_133;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_133), term_v_39, (ATerm) ATinsert(CheckATermList(not_null(f_133)), (ATerm) ATinsert(CheckATermList(not_null(e_133)), not_null(x_132))));
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
        t = q_39;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DeclareVarToConst_0 (ATerm t)
{
  ATerm s_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL;
  t_133 = t;
  p_133 :
  if(match_cons(t_133, sym_Overlay_3))
    {
      u_133 = ATgetArgument(t_133, 0);
      v_133 = ATgetArgument(t_133, 1);
      s_133 = ATgetArgument(t_133, 2);
      q_133 :
      if(((ATgetType(v_133) == AT_LIST) && ATisEmpty(v_133)))
        {
          {
            ATerm w_39;
            w_39 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_133)), term_j_40);
              {
                ATerm g_7 (ATerm t)
                {
                  t = term_n_39;
                  return(t);
                }
                t = assert_1(t, g_7);
              }
            }
            t = w_39;
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(t_133, sym_OpDecl_2))
        {
          u_133 = ATgetArgument(t_133, 0);
          v_133 = ATgetArgument(t_133, 1);
          r_133 :
          if(match_cons(v_133, sym_ConstType_1))
            {
              w_133 = ATgetArgument(v_133, 0);
              {
                ATerm k_40;
                k_40 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(u_133)), term_j_41);
                  {
                    ATerm h_7 (ATerm t)
                    {
                      t = term_n_39;
                      return(t);
                    }
                    t = assert_1(t, h_7);
                  }
                }
                t = k_40;
              }
            }
          else
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
ATerm Overlays_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm i_134 = NULL,j_134 = NULL;
  i_134 = t;
  h_134 :
  if(match_cons(i_134, sym_Overlays_1))
    {
      j_134 = ATgetArgument(i_134, 0);
      {
        ATerm m_134 = NULL,o_134 = NULL;
        ATerm n_134 = NULL;
        t = SSLgetAnnotations(not_null(i_134));
        {
          n_134 = t;
          if(((m_134 != NULL) && (m_134 != n_134)))
            _fail(n_134);
          else
            m_134 = n_134;
        }
        {
          t = not_null(j_134);
          {
            ATerm q_134 = NULL;
            t = p_74(t);
            {
              o_134 = t;
              {
                ATerm r_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(o_134)), not_null(m_134));
                {
                  r_134 = t;
                  if(((q_134 != NULL) && (q_134 != r_134)))
                    _fail(r_134);
                  else
                    q_134 = r_134;
                }
                t = not_null(q_134);
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
ATerm Constructors_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm b_135 = NULL,c_135 = NULL;
  b_135 = t;
  a_135 :
  if(match_cons(b_135, sym_Constructors_1))
    {
      c_135 = ATgetArgument(b_135, 0);
      {
        ATerm f_135 = NULL,h_135 = NULL;
        ATerm g_135 = NULL;
        t = SSLgetAnnotations(not_null(b_135));
        {
          g_135 = t;
          if(((f_135 != NULL) && (f_135 != g_135)))
            _fail(g_135);
          else
            f_135 = g_135;
        }
        {
          t = not_null(c_135);
          {
            ATerm j_135 = NULL;
            t = k_74(t);
            {
              h_135 = t;
              {
                ATerm k_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(h_135)), not_null(f_135));
                {
                  k_135 = t;
                  if(((j_135 != NULL) && (j_135 != k_135)))
                    _fail(k_135);
                  else
                    j_135 = k_135;
                }
                t = not_null(j_135);
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
ATerm Tl_0 (ATerm t)
{
  ATerm r_135 = NULL,s_135 = NULL,t_135 = NULL;
  r_135 = t;
  q_135 :
  if(((ATgetType(r_135) == AT_LIST) && !(ATisEmpty(r_135))))
    {
      s_135 = ATgetFirst((ATermList) r_135);
      t_135 = (ATerm) ATgetNext((ATermList) r_135);
      t = not_null(t_135);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL;
  z_135 = t;
  y_135 :
  if(match_cons(z_135, sym__2))
    {
      a_136 = ATgetArgument(z_135, 0);
      b_136 = ATgetArgument(z_135, 1);
      {
        ATerm k_41;
        k_41 = t;
        {
          ATerm e_136 = NULL;
          ATerm f_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_136), not_null(b_136));
          {
            ATerm l_41 = t;
            int m_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(m_41);
              }
            else
              {
                t = l_41;
                t = (ATerm) ATempty;
              }
            {
              f_136 = t;
              if(((e_136 != NULL) && (e_136 != f_136)))
                _fail(f_136);
              else
                e_136 = f_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_136), not_null(b_136), not_null(e_136));
            t = table_put_0(t);
          }
        }
        t = k_41;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm j_100 (ATerm))
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
  ATerm n_41;
  n_41 = t;
  {
    ATerm p_136 = NULL;
    ATerm q_136 = NULL,r_136 = NULL,s_136 = NULL;
    t = j_100(t);
    {
      p_136 = t;
      {
        if(((o_136 != NULL) && (o_136 != p_136)))
          _fail(p_136);
        else
          o_136 = p_136;
        {
          ATerm o_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_136), term_v_39);
              t = table_get_0(t);
              LocalPopChoice(p_41);
            }
          else
            {
              t = o_41;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_136 = t;
            l_136 :
            if(((ATgetType(q_136) == AT_LIST) && !(ATisEmpty(q_136))))
              {
                r_136 = ATgetFirst((ATermList) q_136);
                s_136 = (ATerm) ATgetNext((ATermList) q_136);
                {
                  if(((n_136 != NULL) && (n_136 != r_136)))
                    _fail(r_136);
                  else
                    n_136 = r_136;
                  {
                    if(((m_136 != NULL) && (m_136 != s_136)))
                      _fail(s_136);
                    else
                      m_136 = s_136;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_136), term_v_39, not_null(m_136));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_136);
                          {
                            ATerm i_7 (ATerm t)
                            {
                              ATerm t_136 = NULL;
                              t_136 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_136), not_null(t_136));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_7);
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
  t = n_41;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm))
{
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_82(t);
      t = p_82(t);
      LocalPopChoice(r_41);
    }
  else
    {
      t = q_41;
      {
        t = p_82(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm b_137 = NULL;
  ATerm t_41;
  t_41 = t;
  {
    ATerm c_137 = NULL;
    ATerm d_137 = NULL;
    t = i_100(t);
    {
      c_137 = t;
      {
        if(((b_137 != NULL) && (b_137 != c_137)))
          _fail(c_137);
        else
          b_137 = c_137;
        {
          ATerm e_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_137), term_v_39);
          {
            ATerm y_41 = t;
            int z_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_41);
              }
            else
              {
                t = y_41;
                t = (ATerm) ATempty;
              }
            {
              e_137 = t;
              if(((d_137 != NULL) && (d_137 != e_137)))
                _fail(e_137);
              else
                d_137 = e_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_137), term_v_39, (ATerm) ATinsert(CheckATermList(not_null(d_137)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_41;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm k_100 (ATerm), ATerm l_100 (ATerm))
{
  t = begin_scope_1(t, k_100);
  {
    ATerm j_7 (ATerm t)
    {
      t = end_scope_1(t, k_100);
      return(t);
    }
    t = restore_always_2(t, l_100, j_7);
  }
  return(t);
}
ATerm vars_to_consts_0 (ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    t = term_n_39;
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm m_7 (ATerm t)
    {
      ATerm n_7 (ATerm t)
      {
        ATerm d_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_42 = t;
            int h_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm p_7 (ATerm t)
                  {
                    t = try_1(t, DeclareVarToConst_0);
                    return(t);
                  }
                  t = map_1(t, p_7);
                  return(t);
                }
                t = Constructors_1(t, o_7);
                LocalPopChoice(h_42);
              }
            else
              {
                t = g_42;
                {
                  ATerm q_7 (ATerm t)
                  {
                    ATerm r_7 (ATerm t)
                    {
                      t = try_1(t, DeclareVarToConst_0);
                      return(t);
                    }
                    t = map_1(t, r_7);
                    return(t);
                  }
                  t = Overlays_1(t, q_7);
                }
              }
            LocalPopChoice(f_42);
          }
        else
          {
            t = d_42;
            {
            }
          }
        return(t);
      }
      t = map_1(t, n_7);
      return(t);
    }
    t = Specification_1(t, m_7);
    t = alltd_1(t, VarToConst_0);
    return(t);
  }
  t = scope_2(t, k_7, l_7);
  return(t);
}
ATerm RulesToStrategies_0 (ATerm t)
{
  ATerm j_137 = NULL,k_137 = NULL;
  j_137 = t;
  i_137 :
  if(match_cons(j_137, sym_Rules_1))
    {
      k_137 = ATgetArgument(j_137, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(k_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm m_97 (ATerm))
{
  ATerm i_42 = t;
  int j_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_42);
    }
  else
    {
      t = i_42;
      {
        ATerm k_42 = t;
        int l_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 (ATerm t)
            {
              t = filter_1(t, m_97);
              return(t);
            }
            t = Cons_2(t, m_97, s_7);
            LocalPopChoice(l_42);
          }
        else
          {
            t = k_42;
            {
              ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL;
              p_137 = t;
              o_137 :
              if(((ATgetType(p_137) == AT_LIST) && !(ATisEmpty(p_137))))
                {
                  q_137 = ATgetFirst((ATermList) p_137);
                  r_137 = (ATerm) ATgetNext((ATermList) p_137);
                  {
                    t = not_null(r_137);
                    t = filter_1(t, m_97);
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
ATerm GetConstructors_0 (ATerm t)
{
  ATerm a_138 = NULL,b_138 = NULL;
  a_138 = t;
  z_137 :
  if(match_cons(a_138, sym_Signature_1))
    {
      b_138 = ATgetArgument(a_138, 0);
      {
        ATerm d_138 = NULL;
        ATerm h_138 = NULL;
        t = not_null(b_138);
        {
          ATerm t_7 (ATerm t)
          {
            ATerm e_138 = NULL,f_138 = NULL;
            e_138 = t;
            x_137 :
            if(match_cons(e_138, sym_Constructors_1))
              {
                f_138 = ATgetArgument(e_138, 0);
                t = not_null(f_138);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, t_7);
          {
            t = concat_0(t);
            {
              h_138 = t;
              if(((d_138 != NULL) && (d_138 != h_138)))
                _fail(h_138);
              else
                d_138 = h_138;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(d_138));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm InsertBSpec_0 (ATerm t)
{
  ATerm b_139 = NULL,c_139 = NULL,d_139 = NULL;
  b_139 = t;
  a_139 :
  if(match_cons(b_139, sym__2))
    {
      c_139 = ATgetArgument(b_139, 0);
      d_139 = ATgetArgument(b_139, 1);
      {
        ATerm g_139 = NULL,h_139 = NULL;
        ATerm i_139 = NULL;
        ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL,o_139 = NULL;
        t = not_null(c_139);
        {
          i_139 = t;
          {
            t = SSL_explode_term(not_null(i_139));
            {
              k_139 = t;
              o_138 :
              if(match_cons(k_139, sym__2))
                {
                  l_139 = ATgetArgument(k_139, 0);
                  m_139 = ATgetArgument(k_139, 1);
                  p_138 :
                  if(((ATgetType(m_139) == AT_LIST) && !(ATisEmpty(m_139))))
                    {
                      n_139 = ATgetFirst((ATermList) m_139);
                      o_139 = (ATerm) ATgetNext((ATermList) m_139);
                      q_138 :
                      if(((ATgetType(o_139) == AT_LIST) && ATisEmpty(o_139)))
                        {
                          {
                            if(((g_139 != NULL) && (g_139 != l_139)))
                              _fail(l_139);
                            else
                              g_139 = l_139;
                            if(((h_139 != NULL) && (h_139 != n_139)))
                              _fail(n_139);
                            else
                              h_139 = n_139;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
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
          t = not_null(d_139);
          {
            ATerm u_7 (ATerm t)
            {
              ATerm p_139 = NULL;
              ATerm r_139 = NULL,z_139 = NULL,b_140 = NULL,d_140 = NULL;
              p_139 = t;
              {
                ATerm m_42;
                m_42 = t;
                {
                  ATerm s_139 = NULL;
                  ATerm u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL,y_139 = NULL;
                  t = not_null(p_139);
                  {
                    s_139 = t;
                    {
                      t = SSL_explode_term(not_null(s_139));
                      {
                        u_139 = t;
                        u_138 :
                        if(match_cons(u_139, sym__2))
                          {
                            v_139 = ATgetArgument(u_139, 0);
                            w_139 = ATgetArgument(u_139, 1);
                            v_138 :
                            if(((ATgetType(w_139) == AT_LIST) && !(ATisEmpty(w_139))))
                              {
                                x_139 = ATgetFirst((ATermList) w_139);
                                y_139 = (ATerm) ATgetNext((ATermList) w_139);
                                w_138 :
                                if(((ATgetType(y_139) == AT_LIST) && ATisEmpty(y_139)))
                                  {
                                    {
                                      if(((g_139 != NULL) && (g_139 != v_139)))
                                        _fail(v_139);
                                      else
                                        g_139 = v_139;
                                      if(((r_139 != NULL) && (r_139 != x_139)))
                                        _fail(x_139);
                                      else
                                        r_139 = x_139;
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            else
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
                t = m_42;
                {
                  ATerm s_42;
                  s_42 = t;
                  {
                    ATerm a_140 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_139), not_null(h_139));
                    {
                      ATerm t_42 = t;
                      int u_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = conc_two_lists_0(t);
                          LocalPopChoice(u_42);
                        }
                      else
                        {
                          t = t_42;
                          t = conc_more_lists_0(t);
                        }
                      {
                        a_140 = t;
                        if(((z_139 != NULL) && (z_139 != a_140)))
                          _fail(a_140);
                        else
                          z_139 = a_140;
                      }
                    }
                  }
                  t = s_42;
                  {
                    ATerm x_42;
                    x_42 = t;
                    {
                      ATerm c_140 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(z_139));
                      {
                        c_140 = t;
                        if(((b_140 != NULL) && (b_140 != c_140)))
                          _fail(c_140);
                        else
                          b_140 = c_140;
                      }
                    }
                    t = x_42;
                    {
                      t = SSL_mkterm(not_null(g_139), not_null(b_140));
                      {
                        d_140 = t;
                        t = not_null(d_140);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            t = fetch_1(t, u_7);
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
ATerm foldr_3 (ATerm t, ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm))
{
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_96(t);
      LocalPopChoice(z_42);
    }
  else
    {
      t = y_42;
      {
        ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL;
        s_140 = t;
        r_140 :
        if(((ATgetType(s_140) == AT_LIST) && !(ATisEmpty(s_140))))
          {
            t_140 = ATgetFirst((ATermList) s_140);
            u_140 = (ATerm) ATgetNext((ATermList) s_140);
            {
              ATerm x_140 = NULL,z_140 = NULL;
              ATerm a_43;
              a_43 = t;
              {
                ATerm y_140 = NULL;
                t = not_null(t_140);
                {
                  t = n_96(t);
                  {
                    y_140 = t;
                    if(((x_140 != NULL) && (x_140 != y_140)))
                      _fail(y_140);
                    else
                      x_140 = y_140;
                  }
                }
              }
              t = a_43;
              {
                ATerm a_141 = NULL;
                t = not_null(u_140);
                {
                  t = foldr_3(t, l_96, m_96, n_96);
                  {
                    a_141 = t;
                    if(((z_140 != NULL) && (z_140 != a_141)))
                      _fail(a_141);
                    else
                      z_140 = a_141;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_140), not_null(z_140));
                  t = m_96(t);
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
ATerm CombineSections_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_43), term_h_43), term_g_43);
      return(t);
    }
    ATerm x_7 (ATerm t)
    {
      ATerm l_43 = t;
      int m_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = GetConstructors_0(t);
              LocalPopChoice(p_43);
            }
          else
            {
              t = n_43;
              t = RulesToStrategies_0(t);
            }
          LocalPopChoice(m_43);
        }
      else
        {
          t = l_43;
          {
          }
        }
      return(t);
    }
    t = foldr_3(t, w_7, InsertBSpec_0, x_7);
    return(t);
  }
  t = Specification_1(t, v_7);
  return(t);
}
ATerm normalize_spec_0 (ATerm t)
{
  t = CombineSections_0(t);
  {
    ATerm y_7 (ATerm t)
    {
      ATerm q_43 = t;
      int r_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0(t);
          LocalPopChoice(r_43);
        }
      else
        {
          t = q_43;
          {
          }
        }
      return(t);
    }
    t = topdown_1(t, y_7);
    {
      t = vars_to_consts_0(t);
      {
        t = define_lrules_0(t);
        {
          t = LiftDynamicRules_0(t);
          {
            ATerm z_7 (ATerm t)
            {
              ATerm s_43 = t;
              int t_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(t_43);
                }
              else
                {
                  t = s_43;
                  {
                  }
                }
              return(t);
            }
            t = topdown_1(t, z_7);
            {
              ATerm a_8 (ATerm t)
              {
                ATerm b_8 (ATerm t)
                {
                  ATerm g_141 = NULL,h_141 = NULL;
                  g_141 = t;
                  f_141 :
                  if(match_cons(g_141, sym_Constructors_1))
                    {
                      h_141 = ATgetArgument(g_141, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(h_141))));
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = fetch_1(t, b_8);
                return(t);
              }
              t = Specification_1(t, a_8);
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
  ATerm c_8 (ATerm t)
  {
    t = term_u_43;
    return(t);
  }
  t = timing_1(t, c_8);
  {
    t = normalize_spec_0(t);
    {
      ATerm d_8 (ATerm t)
      {
        t = term_v_43;
        return(t);
      }
      t = timing_1(t, d_8);
      {
        ATerm x_43;
        x_43 = t;
        t = spec_use_def_0(t);
        t = x_43;
        {
          ATerm e_8 (ATerm t)
          {
            t = term_c_44;
            return(t);
          }
          t = timing_1(t, e_8);
          {
            t = ExpandOverlays_0(t);
            {
              ATerm f_8 (ATerm t)
              {
                t = term_d_44;
                return(t);
              }
              t = timing_1(t, f_8);
              {
                t = CheckConstructors_0(t);
                {
                  ATerm g_8 (ATerm t)
                  {
                    t = term_h_44;
                    return(t);
                  }
                  t = timing_1(t, g_8);
                  {
                    t = RulesToSdefs_0(t);
                    {
                      ATerm h_8 (ATerm t)
                      {
                        t = term_i_44;
                        return(t);
                      }
                      t = timing_1(t, h_8);
                      {
                        t = DesugarListMatching_0(t);
                        {
                          ATerm i_8 (ATerm t)
                          {
                            t = term_j_44;
                            return(t);
                          }
                          t = timing_1(t, i_8);
                          {
                            t = strename_0(t);
                            {
                              ATerm j_8 (ATerm t)
                              {
                                t = term_k_44;
                                return(t);
                              }
                              t = timing_1(t, j_8);
                              {
                                ATerm k_8 (ATerm t)
                                {
                                  ATerm l_8 (ATerm t)
                                  {
                                    ATerm m_8 (ATerm t)
                                    {
                                      t = Strategies_1(t, desugar_spec_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, m_8, Nil_0);
                                    return(t);
                                  }
                                  t = Cons_2(t, _id, l_8);
                                  return(t);
                                }
                                t = Specification_1(t, k_8);
                              }
                            }
                          }
                        }
                      }
                    }
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
ATerm _2 (ATerm t, ATerm o_70 (ATerm), ATerm p_70 (ATerm))
{
  ATerm q_141 = NULL,r_141 = NULL,s_141 = NULL;
  q_141 = t;
  p_141 :
  if(match_cons(q_141, sym__2))
    {
      r_141 = ATgetArgument(q_141, 0);
      s_141 = ATgetArgument(q_141, 1);
      {
        ATerm w_141 = NULL,y_141 = NULL;
        ATerm x_141 = NULL;
        t = SSLgetAnnotations(not_null(q_141));
        {
          x_141 = t;
          if(((w_141 != NULL) && (w_141 != x_141)))
            _fail(x_141);
          else
            w_141 = x_141;
        }
        {
          t = not_null(r_141);
          {
            ATerm a_142 = NULL;
            t = o_70(t);
            {
              y_141 = t;
              {
                t = not_null(s_141);
                {
                  ATerm c_142 = NULL;
                  t = p_70(t);
                  {
                    a_142 = t;
                    {
                      ATerm d_142 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_141), not_null(a_142)), not_null(w_141));
                      {
                        d_142 = t;
                        if(((c_142 != NULL) && (c_142 != d_142)))
                          _fail(d_142);
                        else
                          c_142 = d_142;
                      }
                      t = not_null(c_142);
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
  ATerm l_142 = NULL;
  ATerm l_44;
  l_44 = t;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm m_142 = NULL,n_142 = NULL;
      m_142 = t;
      k_142 :
      if(match_cons(m_142, sym_Program_1))
        {
          n_142 = ATgetArgument(m_142, 0);
          if(((l_142 != NULL) && (l_142 != n_142)))
            _fail(n_142);
          else
            l_142 = n_142;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_44), not_null(l_142)), term_o_44));
      {
        t = printnl_0(t);
        {
          t = term_k_23;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_44;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_142 = NULL,s_142 = NULL,t_142 = NULL;
  r_142 = t;
  q_142 :
  if(match_cons(r_142, sym__2))
    {
      s_142 = ATgetArgument(r_142, 0);
      t_142 = ATgetArgument(r_142, 1);
      {
        ATerm z_44;
        z_44 = t;
        t = SSL_printnl(not_null(s_142), not_null(t_142));
        t = z_44;
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
  ATerm y_142 = NULL;
  y_142 = t;
  t = SSL_implode_string(not_null(y_142));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      {
        ATerm d_143 = NULL,e_143 = NULL,f_143 = NULL;
        d_143 = t;
        c_143 :
        if(((ATgetType(d_143) == AT_LIST) && !(ATisEmpty(d_143))))
          {
            e_143 = ATgetFirst((ATermList) d_143);
            f_143 = (ATerm) ATgetNext((ATermList) d_143);
            {
              t = not_null(e_143);
              {
                ATerm o_8 (ATerm t)
                {
                  t = not_null(f_143);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_8);
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
  ATerm p_143 = NULL;
  ATerm r_143 = NULL;
  p_143 = t;
  {
    ATerm s_143 = NULL;
    ATerm u_143 = NULL,v_143 = NULL,w_143 = NULL;
    t = not_null(p_143);
    {
      s_143 = t;
      {
        t = SSL_explode_term(not_null(s_143));
        {
          u_143 = t;
          n_143 :
          if(match_cons(u_143, sym__2))
            {
              v_143 = ATgetArgument(u_143, 0);
              w_143 = ATgetArgument(u_143, 1);
              o_143 :
              if(match_string(v_143, ""))
                {
                  if(((r_143 != NULL) && (r_143 != w_143)))
                    _fail(w_143);
                  else
                    r_143 = w_143;
                }
              else
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
      t = not_null(r_143);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm a_144 (ATerm t)
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_144);
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        {
          t = Nil_0(t);
          t = k_90(t);
        }
      }
    return(t);
  }
  t = a_144(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_144 = NULL,e_144 = NULL,f_144 = NULL;
  d_144 = t;
  c_144 :
  if(match_cons(d_144, sym__2))
    {
      e_144 = ATgetArgument(d_144, 0);
      f_144 = ATgetArgument(d_144, 1);
      {
        t = not_null(e_144);
        {
          ATerm p_8 (ATerm t)
          {
            t = not_null(f_144);
            return(t);
          }
          t = at_end_1(t, p_8);
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
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_144 = NULL;
  k_144 = t;
  t = SSL_explode_string(not_null(k_144));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_100 (ATerm))
{
  ATerm i_45;
  i_45 = t;
  {
    ATerm p_144 = NULL,r_144 = NULL;
    ATerm j_45;
    j_45 = t;
    {
      ATerm q_144 = NULL;
      t = t_100(t);
      {
        q_144 = t;
        if(((p_144 != NULL) && (p_144 != q_144)))
          _fail(q_144);
        else
          p_144 = q_144;
      }
    }
    t = j_45;
    {
      ATerm s_144 = NULL;
      s_144 = t;
      if(((r_144 != NULL) && (r_144 != s_144)))
        _fail(s_144);
      else
        r_144 = s_144;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_144)), not_null(p_144)));
        t = printnl_0(t);
      }
    }
  }
  t = i_45;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_144 = NULL;
  w_144 = t;
  t = SSL_is_string(not_null(w_144));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(o_45);
    }
  else
    {
      t = k_45;
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              ATerm r_45 = t;
              int s_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(s_45);
                }
              else
                {
                  t = r_45;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_8);
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            {
              ATerm f_145 = NULL,g_145 = NULL,h_145 = NULL;
              f_145 = t;
              e_145 :
              if(match_cons(f_145, sym_Path_1))
                {
                  g_145 = ATgetArgument(f_145, 0);
                  t = not_null(g_145);
                }
              else
                {
                  if(match_cons(f_145, sym_Var_1))
                    {
                      g_145 = ATgetArgument(f_145, 0);
                      {
                        t = not_null(g_145);
                        {
                          ATerm t_45 = t;
                          int u_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_45);
                            }
                          else
                            {
                              t = t_45;
                              {
                                ATerm r_8 (ATerm t)
                                {
                                  t = term_v_45;
                                  return(t);
                                }
                                t = debug_1(t, r_8);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_145, sym_Prefix_2))
                        {
                          g_145 = ATgetArgument(f_145, 0);
                          h_145 = ATgetArgument(f_145, 1);
                          {
                            ATerm m_145 = NULL,o_145 = NULL;
                            ATerm w_45;
                            w_45 = t;
                            {
                              ATerm n_145 = NULL;
                              t = not_null(g_145);
                              {
                                t = eval_config_0(t);
                                {
                                  n_145 = t;
                                  if(((m_145 != NULL) && (m_145 != n_145)))
                                    _fail(n_145);
                                  else
                                    m_145 = n_145;
                                }
                              }
                            }
                            t = w_45;
                            {
                              ATerm p_145 = NULL;
                              t = not_null(h_145);
                              {
                                t = eval_config_0(t);
                                {
                                  p_145 = t;
                                  if(((o_145 != NULL) && (o_145 != p_145)))
                                    _fail(p_145);
                                  else
                                    o_145 = p_145;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_145), not_null(o_145));
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
  ATerm x_145 = NULL;
  x_145 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_45, not_null(x_145));
    {
      t = table_get_0(t);
      {
        ATerm y_45 = t;
        int z_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm a_46;
              a_46 = t;
              {
                ATerm z_145 = NULL;
                ATerm a_146 = NULL;
                a_146 = t;
                if(((z_145 != NULL) && (z_145 != a_146)))
                  _fail(a_146);
                else
                  z_145 = a_146;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_x_45, not_null(x_145), not_null(z_145));
                  t = table_put_0(t);
                }
              }
              t = a_46;
            }
            LocalPopChoice(z_45);
          }
        else
          {
            t = y_45;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm q_103 (ATerm))
{
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_46;
      d_46 = t;
      {
        ATerm e_146 = NULL;
        ATerm f_146 = NULL;
        t = term_d_17;
        {
          t = get_config_0(t);
          {
            f_146 = t;
            if(((e_146 != NULL) && (e_146 != f_146)))
              _fail(f_146);
            else
              e_146 = f_146;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_146), term_e_46);
          t = geq_0(t);
        }
      }
      t = d_46;
      t = q_103(t);
      LocalPopChoice(c_46);
    }
  else
    {
      t = b_46;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_146 = NULL,k_146 = NULL,l_146 = NULL;
  j_146 = t;
  i_146 :
  if(match_cons(j_146, sym__2))
    {
      k_146 = ATgetArgument(j_146, 0);
      l_146 = ATgetArgument(j_146, 1);
      t = SSL_WriteToTextFile(not_null(k_146), not_null(l_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm r_146 = NULL,s_146 = NULL,t_146 = NULL;
  r_146 = t;
  q_146 :
  if(match_cons(r_146, sym__2))
    {
      s_146 = ATgetArgument(r_146, 0);
      t_146 = ATgetArgument(r_146, 1);
      t = SSL_WriteToBinaryFile(not_null(s_146), not_null(t_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm b_147 = NULL;
  ATerm f_46;
  f_46 = t;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm g_46 = t;
      int h_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_8 (ATerm t)
          {
            ATerm c_147 = NULL,d_147 = NULL;
            c_147 = t;
            y_146 :
            if(match_cons(c_147, sym_Output_1))
              {
                d_147 = ATgetArgument(c_147, 0);
                if(((b_147 != NULL) && (b_147 != d_147)))
                  _fail(d_147);
                else
                  b_147 = d_147;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, t_8);
          LocalPopChoice(h_46);
        }
      else
        {
          t = g_46;
          {
            ATerm e_147 = NULL;
            t = term_i_46;
            {
              e_147 = t;
              if(((b_147 != NULL) && (b_147 != e_147)))
                _fail(e_147);
              else
                b_147 = e_147;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_8, _id);
  }
  t = f_46;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm v_8 (ATerm t)
      {
        t = not_null(b_147);
        return(t);
      }
      t = split_2(t, v_8, _id);
      return(t);
    }
    t = _2(t, _id, u_8);
    {
      ATerm j_46 = t;
      int k_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_8 (ATerm t)
          {
            ATerm x_8 (ATerm t)
            {
              ATerm f_147 = NULL;
              f_147 = t;
              a_147 :
              if(!(match_cons(f_147, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, x_8);
            return(t);
          }
          t = _2(t, w_8, WriteToBinaryFile_0);
          LocalPopChoice(k_46);
        }
      else
        {
          t = j_46;
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
ATerm apply_strategy_1 (ATerm t, ATerm x_101 (ATerm))
{
  ATerm l_147 = NULL,n_147 = NULL,o_147 = NULL,p_147 = NULL;
  ATerm u_46;
  u_46 = t;
  t = dtime_0(t);
  t = u_46;
  {
    t = x_101(t);
    {
      ATerm v_46;
      v_46 = t;
      {
        ATerm m_147 = NULL;
        t = dtime_0(t);
        {
          m_147 = t;
          if(((l_147 != NULL) && (l_147 != m_147)))
            _fail(m_147);
          else
            l_147 = m_147;
        }
      }
      t = v_46;
      {
        n_147 = t;
        k_147 :
        if(match_cons(n_147, sym__2))
          {
            o_147 = ATgetArgument(n_147, 0);
            p_147 = ATgetArgument(n_147, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_147)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(l_147))), not_null(p_147));
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
  ATerm v_147 = NULL;
  v_147 = t;
  t = SSL_ReadFromFile(not_null(v_147));
  return(t);
}
ATerm split_2 (ATerm t, ATerm y_97 (ATerm), ATerm z_97 (ATerm))
{
  ATerm a_148 = NULL,c_148 = NULL;
  ATerm a_47;
  a_47 = t;
  {
    ATerm b_148 = NULL;
    t = y_97(t);
    {
      b_148 = t;
      if(((a_148 != NULL) && (a_148 != b_148)))
        _fail(b_148);
      else
        a_148 = b_148;
    }
  }
  t = a_47;
  {
    ATerm d_148 = NULL;
    t = z_97(t);
    {
      d_148 = t;
      if(((c_148 != NULL) && (c_148 != d_148)))
        _fail(d_148);
      else
        c_148 = d_148;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_148), not_null(c_148));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_148 = NULL;
  ATerm b_47;
  b_47 = t;
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 (ATerm t)
        {
          ATerm k_148 = NULL,l_148 = NULL;
          k_148 = t;
          h_148 :
          if(match_cons(k_148, sym_Input_1))
            {
              l_148 = ATgetArgument(k_148, 0);
              if(((j_148 != NULL) && (j_148 != l_148)))
                _fail(l_148);
              else
                j_148 = l_148;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, y_8);
        LocalPopChoice(d_47);
      }
    else
      {
        t = c_47;
        {
          ATerm m_148 = NULL;
          t = term_e_47;
          {
            m_148 = t;
            if(((j_148 != NULL) && (j_148 != m_148)))
              _fail(m_148);
            else
              j_148 = m_148;
          }
        }
      }
  }
  t = b_47;
  {
    ATerm z_8 (ATerm t)
    {
      t = not_null(j_148);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_8);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm a_9 (ATerm t)
  {
    ATerm q_148 = NULL;
    q_148 = t;
    p_148 :
    if(!(match_string(q_148, "-v")))
      {
        if(!(match_string(q_148, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_9 (ATerm t)
  {
    t = term_h_47;
    t = set_config_0(t);
    t = term_i_47;
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    t = term_p_47;
    return(t);
  }
  t = Option_3(t, a_9, b_9, c_9);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm d_9 (ATerm t)
  {
    ATerm t_148 = NULL;
    t_148 = t;
    r_148 :
    if(!(match_string(t_148, "-k")))
      {
        if(!(match_string(t_148, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    ATerm q_47;
    q_47 = t;
    {
      ATerm u_148 = NULL;
      ATerm v_148 = NULL;
      t = string_to_int_0(t);
      {
        v_148 = t;
        if(((u_148 != NULL) && (u_148 != v_148)))
          _fail(v_148);
        else
          u_148 = v_148;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_47, not_null(u_148));
        t = set_config_0(t);
      }
    }
    t = q_47;
    return(t);
  }
  ATerm g_9 (ATerm t)
  {
    t = term_s_47;
    return(t);
  }
  t = ArgOption_3(t, d_9, f_9, g_9);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_148 = NULL;
  y_148 = t;
  t = SSL_string_to_int(not_null(y_148));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 (ATerm t)
      {
        ATerm g_149 = NULL;
        g_149 = t;
        b_149 :
        if(!(match_string(g_149, "-S")))
          {
            if(!(match_string(g_149, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_9 (ATerm t)
      {
        t = term_y_47;
        t = set_config_0(t);
        t = term_d_48;
        return(t);
      }
      ATerm j_9 (ATerm t)
      {
        t = term_e_48;
        return(t);
      }
      t = Option_3(t, h_9, i_9, j_9);
      LocalPopChoice(u_47);
    }
  else
    {
      t = t_47;
      {
        ATerm f_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_9 (ATerm t)
            {
              ATerm h_149 = NULL;
              h_149 = t;
              c_149 :
              if(!(match_string(h_149, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_9 (ATerm t)
            {
              ATerm k_149 = NULL;
              ATerm i_48;
              i_48 = t;
              {
                ATerm i_149 = NULL;
                ATerm j_149 = NULL;
                t = string_to_int_0(t);
                {
                  j_149 = t;
                  if(((i_149 != NULL) && (i_149 != j_149)))
                    _fail(j_149);
                  else
                    i_149 = j_149;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_17, not_null(i_149));
                  t = set_config_0(t);
                }
              }
              t = i_48;
              {
                ATerm l_149 = NULL;
                l_149 = t;
                if(((k_149 != NULL) && (k_149 != l_149)))
                  _fail(l_149);
                else
                  k_149 = l_149;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_149));
              }
              return(t);
            }
            ATerm m_9 (ATerm t)
            {
              t = term_j_48;
              return(t);
            }
            t = ArgOption_3(t, k_9, l_9, m_9);
            LocalPopChoice(h_48);
          }
        else
          {
            t = f_48;
            {
              ATerm o_9 (ATerm t)
              {
                ATerm m_149 = NULL;
                m_149 = t;
                f_149 :
                if(!(match_string(m_149, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm t_9 (ATerm t)
              {
                t = term_l_48;
                t = set_config_0(t);
                t = term_s_48;
                return(t);
              }
              ATerm u_9 (ATerm t)
              {
                t = term_t_48;
                return(t);
              }
              t = Option_3(t, o_9, t_9, u_9);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm u_48 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_49);
    }
  else
    {
      t = u_48;
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(f_49);
          }
        else
          {
            t = e_49;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm y_9 (ATerm t)
  {
    ATerm s_149 = NULL;
    s_149 = t;
    p_149 :
    if(!(match_string(s_149, "-o")))
      {
        if(!(match_string(s_149, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_10 (ATerm t)
  {
    ATerm v_149 = NULL;
    ATerm g_49;
    g_49 = t;
    {
      ATerm t_149 = NULL;
      ATerm u_149 = NULL;
      u_149 = t;
      if(((t_149 != NULL) && (t_149 != u_149)))
        _fail(u_149);
      else
        t_149 = u_149;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_49, not_null(t_149));
        t = set_config_0(t);
      }
    }
    t = g_49;
    {
      ATerm w_149 = NULL;
      w_149 = t;
      if(((v_149 != NULL) && (v_149 != w_149)))
        _fail(w_149);
      else
        v_149 = w_149;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_149));
    }
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    t = term_m_49;
    return(t);
  }
  t = ArgOption_3(t, y_9, a_10, f_10);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(o_49);
    }
  else
    {
      t = n_49;
      {
        ATerm g_10 (ATerm t)
        {
          ATerm a_150 = NULL;
          a_150 = t;
          z_149 :
          if(!(match_string(a_150, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_10 (ATerm t)
        {
          t = term_t_49;
          t = set_config_0(t);
          t = term_u_49;
          return(t);
        }
        ATerm r_10 (ATerm t)
        {
          t = term_w_49;
          return(t);
        }
        t = Option_3(t, g_10, l_10, r_10);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL,j_150 = NULL,k_150 = NULL;
  g_150 = t;
  e_150 :
  if(match_string(g_150, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(g_150) == AT_LIST) && !(ATisEmpty(g_150))))
        {
          h_150 = ATgetFirst((ATermList) g_150);
          i_150 = (ATerm) ATgetNext((ATermList) g_150);
          f_150 :
          if(((ATgetType(i_150) == AT_LIST) && !(ATisEmpty(i_150))))
            {
              j_150 = ATgetFirst((ATermList) i_150);
              k_150 = (ATerm) ATgetNext((ATermList) i_150);
              {
                ATerm o_150 = NULL;
                ATerm x_49;
                x_49 = t;
                {
                  t = not_null(h_150);
                  t = l_0(t);
                }
                t = x_49;
                {
                  ATerm p_150 = NULL;
                  t = not_null(j_150);
                  {
                    t = n_0(t);
                    {
                      p_150 = t;
                      if(((o_150 != NULL) && (o_150 != p_150)))
                        _fail(p_150);
                      else
                        o_150 = p_150;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_150)), not_null(o_150));
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
ATerm input_option_0 (ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    ATerm w_150 = NULL;
    w_150 = t;
    t_150 :
    if(!(match_string(w_150, "-i")))
      {
        if(!(match_string(w_150, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_11 (ATerm t)
  {
    ATerm z_150 = NULL;
    ATerm y_49;
    y_49 = t;
    {
      ATerm x_150 = NULL;
      ATerm y_150 = NULL;
      y_150 = t;
      if(((x_150 != NULL) && (x_150 != y_150)))
        _fail(y_150);
      else
        x_150 = y_150;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_49, not_null(x_150));
        t = set_config_0(t);
      }
    }
    t = y_49;
    {
      ATerm a_151 = NULL;
      a_151 = t;
      if(((z_150 != NULL) && (z_150 != a_151)))
        _fail(a_151);
      else
        z_150 = a_151;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_150));
    }
    return(t);
  }
  ATerm f_11 (ATerm t)
  {
    t = term_a_50;
    return(t);
  }
  t = ArgOption_3(t, d_11, e_11, f_11);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(c_50);
    }
  else
    {
      t = b_50;
      {
        ATerm g_50 = t;
        int h_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(h_50);
          }
        else
          {
            t = g_50;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATempty, term_i_50));
  {
    t = printnl_0(t);
    {
      t = term_k_23;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_151 = NULL;
  e_151 = t;
  t = SSL_TicksToSeconds(not_null(e_151));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_151 = NULL,k_151 = NULL,l_151 = NULL;
  j_151 = t;
  i_151 :
  if(match_cons(j_151, sym__2))
    {
      k_151 = ATgetArgument(j_151, 0);
      l_151 = ATgetArgument(j_151, 1);
      {
        ATerm j_50 = t;
        int o_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_151), not_null(l_151));
            LocalPopChoice(o_50);
          }
        else
          {
            t = j_50;
            t = SSL_addr(not_null(k_151), not_null(l_151));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm j_96 (ATerm), ATerm k_96 (ATerm))
{
  ATerm p_50 = t;
  int q_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = j_96(t);
      LocalPopChoice(q_50);
    }
  else
    {
      t = p_50;
      {
        ATerm s_151 = NULL,t_151 = NULL,u_151 = NULL;
        s_151 = t;
        r_151 :
        if(((ATgetType(s_151) == AT_LIST) && !(ATisEmpty(s_151))))
          {
            t_151 = ATgetFirst((ATermList) s_151);
            u_151 = (ATerm) ATgetNext((ATermList) s_151);
            {
              ATerm x_151 = NULL;
              ATerm y_151 = NULL;
              t = not_null(u_151);
              {
                t = foldr_2(t, j_96, k_96);
                {
                  y_151 = t;
                  if(((x_151 != NULL) && (x_151 != y_151)))
                    _fail(y_151);
                  else
                    x_151 = y_151;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_151), not_null(x_151));
                t = k_96(t);
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
ATerm crush_2 (ATerm t, ATerm h_95 (ATerm), ATerm i_95 (ATerm))
{
  ATerm f_152 = NULL;
  ATerm h_152 = NULL;
  f_152 = t;
  {
    ATerm i_152 = NULL;
    ATerm k_152 = NULL,l_152 = NULL,m_152 = NULL;
    t = not_null(f_152);
    {
      i_152 = t;
      {
        t = SSL_explode_term(not_null(i_152));
        {
          k_152 = t;
          e_152 :
          if(match_cons(k_152, sym__2))
            {
              l_152 = ATgetArgument(k_152, 0);
              m_152 = ATgetArgument(k_152, 1);
              if(((h_152 != NULL) && (h_152 != m_152)))
                _fail(m_152);
              else
                h_152 = m_152;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_152);
      t = foldr_2(t, h_95, i_95);
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
    ATerm g_11 (ATerm t)
    {
      t = term_k_25;
      return(t);
    }
    t = crush_2(t, g_11, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_152 = NULL,t_152 = NULL,u_152 = NULL;
  s_152 = t;
  r_152 :
  if(match_cons(s_152, sym__2))
    {
      t_152 = ATgetArgument(s_152, 0);
      u_152 = ATgetArgument(s_152, 1);
      {
        ATerm r_50;
        r_50 = t;
        {
          ATerm s_50 = t;
          int t_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_152), not_null(u_152));
              LocalPopChoice(t_50);
            }
          else
            {
              t = s_50;
              t = SSL_gtr(not_null(t_152), not_null(u_152));
            }
        }
        t = r_50;
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
  ATerm a_153 = NULL;
  ATerm u_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_153 = NULL,c_153 = NULL,d_153 = NULL;
      b_153 = t;
      z_152 :
      if(match_cons(b_153, sym__2))
        {
          c_153 = ATgetArgument(b_153, 0);
          d_153 = ATgetArgument(b_153, 1);
          {
            if(((a_153 != NULL) && (a_153 != c_153)))
              _fail(c_153);
            else
              a_153 = c_153;
            if(((a_153 != NULL) && (a_153 != d_153)))
              _fail(d_153);
            else
              a_153 = d_153;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_50);
    }
  else
    {
      t = u_50;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_103 (ATerm))
{
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_50;
      y_50 = t;
      {
        ATerm g_153 = NULL;
        ATerm h_153 = NULL;
        t = term_d_17;
        {
          t = get_config_0(t);
          {
            h_153 = t;
            if(((g_153 != NULL) && (g_153 != h_153)))
              _fail(h_153);
            else
              g_153 = h_153;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_153), term_k_23);
          t = geq_0(t);
        }
      }
      t = y_50;
      t = p_103(t);
      LocalPopChoice(x_50);
    }
  else
    {
      t = w_50;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm l_153 = NULL,n_153 = NULL;
    ATerm z_50;
    z_50 = t;
    {
      ATerm m_153 = NULL;
      t = run_time_0(t);
      {
        m_153 = t;
        if(((l_153 != NULL) && (l_153 != m_153)))
          _fail(m_153);
        else
          l_153 = m_153;
      }
    }
    t = z_50;
    {
      ATerm o_153 = NULL;
      t = term_e_51;
      {
        t = get_config_0(t);
        {
          o_153 = t;
          if(((n_153 != NULL) && (n_153 != o_153)))
            _fail(o_153);
          else
            n_153 = o_153;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_51), not_null(l_153)), term_f_51), not_null(n_153)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_11);
  {
    t = term_k_25;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_153 = NULL;
  v_153 = t;
  u_153 :
  if(match_cons(v_153, sym_Version_0))
    {
      ATerm x_153 = NULL,z_153 = NULL;
      ATerm i_51;
      i_51 = t;
      {
        ATerm y_153 = NULL;
        t = SSLgetAnnotations(not_null(v_153));
        {
          y_153 = t;
          if(((x_153 != NULL) && (x_153 != y_153)))
            _fail(y_153);
          else
            x_153 = y_153;
        }
      }
      t = i_51;
      {
        ATerm a_154 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_153));
        {
          a_154 = t;
          if(((z_153 != NULL) && (z_153 != a_154)))
            _fail(a_154);
          else
            z_153 = a_154;
        }
        t = not_null(z_153);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_101 (ATerm))
{
  ATerm i_11 (ATerm t)
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        {
          ATerm l_51 = t;
          int n_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_51);
            }
          else
            {
              t = l_51;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, i_11);
  t = v_101(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_154 = NULL;
  f_154 = t;
  t = SSL_table_create(not_null(f_154));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_154 = NULL;
  l_154 = t;
  {
    ATerm o_51;
    o_51 = t;
    {
      t = term_p_51;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_51, term_q_51, not_null(l_154));
          t = table_put_0(t);
        }
      }
    }
    t = o_51;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm p_154 = NULL;
  p_154 = t;
  t = SSL_table_destroy(not_null(p_154));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_154 = NULL;
  t_154 = t;
  t = SSL_exit(not_null(t_154));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm x_154 = NULL,y_154 = NULL,z_154 = NULL;
  x_154 = t;
  w_154 :
  if(((ATgetType(x_154) == AT_LIST) && ATisEmpty(x_154)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_154) == AT_LIST) && !(ATisEmpty(x_154))))
        {
          y_154 = ATgetFirst((ATermList) x_154);
          z_154 = (ATerm) ATgetNext((ATermList) x_154);
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
  ATerm r_51;
  r_51 = t;
  {
    ATerm c_155 = NULL;
    ATerm f_155 = NULL;
    ATerm s_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_51);
      }
    else
      {
        t = s_51;
        {
          ATerm d_155 = NULL;
          ATerm e_155 = NULL;
          e_155 = t;
          if(((d_155 != NULL) && (d_155 != e_155)))
            _fail(e_155);
          else
            d_155 = e_155;
          t = (ATerm) ATinsert(ATempty, not_null(d_155));
        }
      }
    {
      f_155 = t;
      if(((c_155 != NULL) && (c_155 != f_155)))
        _fail(f_155);
      else
        c_155 = f_155;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_46, not_null(c_155));
      t = printnl_0(t);
    }
  }
  t = r_51;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm t_105 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm i_155 (ATerm t)
  {
    ATerm u_51 = t;
    int v_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_51);
      }
    else
      {
        t = u_51;
        t = Cons_2(t, v_89, i_155);
      }
    return(t);
  }
  t = i_155(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm p_155 = NULL,q_155 = NULL,r_155 = NULL;
  r_155 = t;
  o_155 :
  if(((ATgetType(r_155) == AT_LIST) && !(ATisEmpty(r_155))))
    {
      p_155 = ATgetFirst((ATermList) r_155);
      q_155 = (ATerm) ATgetNext((ATermList) r_155);
      {
        ATerm u_155 = NULL;
        t = not_null(q_155);
        {
          ATerm w_51;
          w_51 = t;
          {
            ATerm v_155 = NULL,x_155 = NULL,z_155 = NULL;
            ATerm x_51;
            x_51 = t;
            {
              ATerm w_155 = NULL;
              t = k_0(t);
              {
                w_155 = t;
                if(((v_155 != NULL) && (v_155 != w_155)))
                  _fail(w_155);
                else
                  v_155 = w_155;
              }
            }
            t = x_51;
            {
              ATerm y_155 = NULL;
              t = not_null(p_155);
              {
                t = i_0(t);
                {
                  y_155 = t;
                  if(((x_155 != NULL) && (x_155 != y_155)))
                    _fail(y_155);
                  else
                    x_155 = y_155;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_155)), not_null(x_155));
                {
                  z_155 = t;
                  if(((u_155 != NULL) && (u_155 != z_155)))
                    _fail(z_155);
                  else
                    u_155 = z_155;
                }
              }
            }
          }
          t = w_51;
          {
            ATerm j_11 (ATerm t)
            {
              t = not_null(u_155);
              return(t);
            }
            t = reverse_acc_2(t, i_0, j_11);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(r_155) == AT_LIST) && ATisEmpty(r_155)))
        {
          {
            t = term_k_39;
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
  ATerm k_11 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_11);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm s_105 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_81 (ATerm))
{
  ATerm k_156 = NULL,l_156 = NULL;
  k_156 = t;
  j_156 :
  if(match_cons(k_156, sym_Program_1))
    {
      l_156 = ATgetArgument(k_156, 0);
      {
        ATerm o_156 = NULL,q_156 = NULL;
        ATerm p_156 = NULL;
        t = SSLgetAnnotations(not_null(k_156));
        {
          p_156 = t;
          if(((o_156 != NULL) && (o_156 != p_156)))
            _fail(p_156);
          else
            o_156 = p_156;
        }
        {
          t = not_null(l_156);
          {
            ATerm s_156 = NULL;
            t = r_81(t);
            {
              q_156 = t;
              {
                ATerm t_156 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(q_156)), not_null(o_156));
                {
                  t_156 = t;
                  if(((s_156 != NULL) && (s_156 != t_156)))
                    _fail(t_156);
                  else
                    s_156 = t_156;
                }
                t = not_null(s_156);
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
  ATerm b_157 = NULL;
  ATerm d_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_157 = NULL;
      t = term_e_51;
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
      LocalPopChoice(f_52);
    }
  else
    {
      t = d_52;
      {
        ATerm l_11 (ATerm t)
        {
          ATerm m_11 (ATerm t)
          {
            ATerm d_157 = NULL;
            d_157 = t;
            if(((b_157 != NULL) && (b_157 != d_157)))
              _fail(d_157);
            else
              b_157 = d_157;
            return(t);
          }
          t = Program_1(t, m_11);
          return(t);
        }
        t = fetch_1(t, l_11);
      }
    }
  {
    t = term_r_52;
    {
      t = echo_0(t);
      {
        t = term_u_52;
        {
          t = table_get_0(t);
          {
            ATerm n_11 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, n_11);
            {
              ATerm o_11 (ATerm t)
              {
                ATerm e_157 = NULL;
                ATerm f_157 = NULL;
                f_157 = t;
                if(((e_157 != NULL) && (e_157 != f_157)))
                  _fail(f_157);
                else
                  e_157 = f_157;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_157)), term_v_52);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, o_11);
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
  ATerm w_52;
  w_52 = t;
  {
    ATerm k_157 = NULL;
    ATerm l_157 = NULL;
    l_157 = t;
    if(((k_157 != NULL) && (k_157 != l_157)))
      _fail(l_157);
    else
      k_157 = l_157;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATempty, not_null(k_157)));
      t = printnl_0(t);
    }
  }
  t = w_52;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_100 (ATerm))
{
  ATerm x_52;
  x_52 = t;
  {
    t = u_100(t);
    t = debug_0(t);
  }
  t = x_52;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm s_157 = NULL,t_157 = NULL;
  s_157 = t;
  r_157 :
  if(match_cons(s_157, sym_Undefined_1))
    {
      t_157 = ATgetArgument(s_157, 0);
      {
        ATerm w_157 = NULL,y_157 = NULL;
        ATerm x_157 = NULL;
        t = SSLgetAnnotations(not_null(s_157));
        {
          x_157 = t;
          if(((w_157 != NULL) && (w_157 != x_157)))
            _fail(x_157);
          else
            w_157 = x_157;
        }
        {
          t = not_null(t_157);
          {
            ATerm a_158 = NULL;
            t = s_81(t);
            {
              y_157 = t;
              {
                ATerm b_158 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_157)), not_null(w_157));
                {
                  b_158 = t;
                  if(((a_158 != NULL) && (a_158 != b_158)))
                    _fail(b_158);
                  else
                    a_158 = b_158;
                }
                t = not_null(a_158);
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
ATerm fetch_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm g_158 (ATerm t)
  {
    ATerm y_52 = t;
    int z_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_90, _id);
        LocalPopChoice(z_52);
      }
    else
      {
        t = y_52;
        t = Cons_2(t, _id, g_158);
      }
    return(t);
  }
  t = g_158(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_104 (ATerm))
{
  t = fetch_1(t, s_104);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_158 = NULL;
  l_158 = t;
  k_158 :
  if(match_cons(l_158, sym_Help_0))
    {
      ATerm n_158 = NULL,p_158 = NULL;
      ATerm a_53;
      a_53 = t;
      {
        ATerm o_158 = NULL;
        t = SSLgetAnnotations(not_null(l_158));
        {
          o_158 = t;
          if(((n_158 != NULL) && (n_158 != o_158)))
            _fail(o_158);
          else
            n_158 = o_158;
        }
      }
      t = a_53;
      {
        ATerm q_158 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_158));
        {
          q_158 = t;
          if(((p_158 != NULL) && (p_158 != q_158)))
            _fail(q_158);
          else
            p_158 = q_158;
        }
        t = not_null(p_158);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm d_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_82(t);
      LocalPopChoice(f_53);
    }
  else
    {
      t = d_53;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_158 = NULL,x_158 = NULL,y_158 = NULL;
  w_158 = t;
  v_158 :
  if(match_cons(w_158, sym__2))
    {
      x_158 = ATgetArgument(w_158, 0);
      y_158 = ATgetArgument(w_158, 1);
      t = SSL_table_get(not_null(x_158), not_null(y_158));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL;
  f_159 = t;
  e_159 :
  if(match_cons(f_159, sym__3))
    {
      g_159 = ATgetArgument(f_159, 0);
      h_159 = ATgetArgument(f_159, 1);
      i_159 = ATgetArgument(f_159, 2);
      {
        ATerm g_53;
        g_53 = t;
        {
          ATerm m_159 = NULL;
          ATerm n_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_159), not_null(h_159));
          {
            ATerm h_53 = t;
            int i_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_53);
              }
            else
              {
                t = h_53;
                t = (ATerm) ATempty;
              }
            {
              n_159 = t;
              if(((m_159 != NULL) && (m_159 != n_159)))
                _fail(n_159);
              else
                m_159 = n_159;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_159), not_null(h_159), (ATerm) ATinsert(CheckATermList(not_null(m_159)), not_null(i_159)));
            t = table_put_0(t);
          }
        }
        t = g_53;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_105 (ATerm))
{
  ATerm r_159 = NULL;
  ATerm s_159 = NULL;
  t = term_k_39;
  {
    t = x_105(t);
    {
      s_159 = t;
      if(((r_159 != NULL) && (r_159 != s_159)))
        _fail(s_159);
      else
        r_159 = s_159;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_52, term_t_52, not_null(r_159));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_159 = NULL,z_159 = NULL,a_160 = NULL;
  y_159 = t;
  x_159 :
  if(match_string(y_159, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_159) == AT_LIST) && !(ATisEmpty(y_159))))
        {
          z_159 = ATgetFirst((ATermList) y_159);
          a_160 = (ATerm) ATgetNext((ATermList) y_159);
          {
            ATerm d_160 = NULL;
            ATerm j_53;
            j_53 = t;
            {
              t = not_null(z_159);
              t = a_0(t);
            }
            t = j_53;
            {
              ATerm e_160 = NULL;
              t = term_k_39;
              {
                t = d_0(t);
                {
                  e_160 = t;
                  if(((d_160 != NULL) && (d_160 != e_160)))
                    _fail(e_160);
                  else
                    d_160 = e_160;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_160)), not_null(d_160));
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
  ATerm p_11 (ATerm t)
  {
    ATerm j_160 = NULL;
    j_160 = t;
    i_160 :
    if(!(match_string(j_160, "--help")))
      {
        if(!(match_string(j_160, "-h")))
          {
            if(!(match_string(j_160, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    t = term_p_53;
    {
      t = set_config_0(t);
      t = term_q_53;
    }
    return(t);
  }
  ATerm r_11 (ATerm t)
  {
    t = term_r_53;
    return(t);
  }
  t = Option_3(t, p_11, q_11, r_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_160 = NULL,n_160 = NULL,o_160 = NULL;
  m_160 = t;
  l_160 :
  if(((ATgetType(m_160) == AT_LIST) && !(ATisEmpty(m_160))))
    {
      n_160 = ATgetFirst((ATermList) m_160);
      o_160 = (ATerm) ATgetNext((ATermList) m_160);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_160)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_160)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_71 (ATerm), ATerm y_71 (ATerm))
{
  ATerm y_160 = NULL,z_160 = NULL,a_161 = NULL;
  y_160 = t;
  x_160 :
  if(((ATgetType(y_160) == AT_LIST) && !(ATisEmpty(y_160))))
    {
      z_160 = ATgetFirst((ATermList) y_160);
      a_161 = (ATerm) ATgetNext((ATermList) y_160);
      {
        ATerm e_161 = NULL,g_161 = NULL;
        ATerm f_161 = NULL;
        t = SSLgetAnnotations(not_null(y_160));
        {
          f_161 = t;
          if(((e_161 != NULL) && (e_161 != f_161)))
            _fail(f_161);
          else
            e_161 = f_161;
        }
        {
          t = not_null(z_160);
          {
            ATerm i_161 = NULL;
            t = x_71(t);
            {
              g_161 = t;
              {
                t = not_null(a_161);
                {
                  ATerm k_161 = NULL;
                  t = y_71(t);
                  {
                    i_161 = t;
                    {
                      ATerm l_161 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_161)), not_null(g_161)), not_null(e_161));
                      {
                        l_161 = t;
                        if(((k_161 != NULL) && (k_161 != l_161)))
                          _fail(l_161);
                        else
                          k_161 = l_161;
                      }
                      t = not_null(k_161);
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
  ATerm v_161 = NULL;
  v_161 = t;
  u_161 :
  if(((ATgetType(v_161) == AT_LIST) && ATisEmpty(v_161)))
    {
      {
        ATerm x_161 = NULL,z_161 = NULL;
        ATerm s_53;
        s_53 = t;
        {
          ATerm y_161 = NULL;
          t = SSLgetAnnotations(not_null(v_161));
          {
            y_161 = t;
            if(((x_161 != NULL) && (x_161 != y_161)))
              _fail(y_161);
            else
              x_161 = y_161;
          }
        }
        t = s_53;
        {
          ATerm a_162 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_161));
          {
            a_162 = t;
            if(((z_161 != NULL) && (z_161 != a_162)))
              _fail(a_162);
            else
              z_161 = a_162;
          }
          t = not_null(z_161);
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
  ATerm g_162 = NULL,h_162 = NULL,i_162 = NULL;
  g_162 = t;
  f_162 :
  if(match_cons(g_162, sym__2))
    {
      h_162 = ATgetArgument(g_162, 0);
      i_162 = ATgetArgument(g_162, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_45, not_null(h_162), not_null(i_162));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_105 (ATerm))
{
  ATerm t_53;
  t_53 = t;
  {
    ATerm v_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_53;
        t = v_105(t);
        LocalPopChoice(w_53);
      }
    else
      {
        t = v_53;
        {
        }
      }
  }
  t = t_53;
  {
    ATerm s_11 (ATerm t)
    {
      ATerm q_162 = NULL;
      ATerm z_53;
      z_53 = t;
      {
        ATerm o_162 = NULL;
        ATerm p_162 = NULL;
        p_162 = t;
        if(((o_162 != NULL) && (o_162 != p_162)))
          _fail(p_162);
        else
          o_162 = p_162;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_51, not_null(o_162));
          t = set_config_0(t);
        }
      }
      t = z_53;
      {
        ATerm r_162 = NULL;
        r_162 = t;
        if(((q_162 != NULL) && (q_162 != r_162)))
          _fail(r_162);
        else
          q_162 = r_162;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_162));
      }
      return(t);
    }
    ATerm t_11 (ATerm t)
    {
      ATerm c_54 = t;
      int d_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_54 = t;
          int f_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(f_54);
            }
          else
            {
              t = e_54;
              {
                t = v_105(t);
                t = Cons_2(t, _id, t_11);
              }
            }
          LocalPopChoice(d_54);
        }
      else
        {
          t = c_54;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_11, t_11);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_162 = NULL,y_162 = NULL,z_162 = NULL;
  ATerm g_54;
  g_54 = t;
  {
    ATerm a_163 = NULL,b_163 = NULL,c_163 = NULL,d_163 = NULL;
    a_163 = t;
    w_162 :
    if(match_cons(a_163, sym__3))
      {
        b_163 = ATgetArgument(a_163, 0);
        c_163 = ATgetArgument(a_163, 1);
        d_163 = ATgetArgument(a_163, 2);
        {
          if(((x_162 != NULL) && (x_162 != b_163)))
            _fail(b_163);
          else
            x_162 = b_163;
          {
            if(((y_162 != NULL) && (y_162 != c_163)))
              _fail(c_163);
            else
              y_162 = c_163;
            {
              if(((z_162 != NULL) && (z_162 != d_163)))
                _fail(d_163);
              else
                z_162 = d_163;
              t = SSL_table_put(not_null(x_162), not_null(y_162), not_null(z_162));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = g_54;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_105 (ATerm))
{
  ATerm g_163 = NULL;
  ATerm h_54;
  h_54 = t;
  {
    t = term_i_54;
    t = table_put_0(t);
  }
  t = h_54;
  {
    ATerm u_11 (ATerm t)
    {
      ATerm j_54 = t;
      int k_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_105(t);
          LocalPopChoice(k_54);
        }
      else
        {
          t = j_54;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_11);
    {
      ATerm m_54 = t;
      int p_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_54;
          q_54 = t;
          {
            ATerm r_54 = t;
            int s_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_53;
                t = get_config_0(t);
                LocalPopChoice(s_54);
              }
            else
              {
                t = r_54;
                t = fetch_1(t, Help_0);
              }
          }
          t = q_54;
          {
            t = system_usage_0(t);
            {
              t = term_k_25;
              t = exit_0(t);
            }
          }
          LocalPopChoice(p_54);
        }
      else
        {
          t = m_54;
          {
            ATerm t_54 = t;
            int u_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_11 (ATerm t)
                {
                  ATerm x_11 (ATerm t)
                  {
                    ATerm h_163 = NULL;
                    h_163 = t;
                    if(((g_163 != NULL) && (g_163 != h_163)))
                      _fail(h_163);
                    else
                      g_163 = h_163;
                    return(t);
                  }
                  t = Undefined_1(t, x_11);
                  return(t);
                }
                t = fetch_1(t, v_11);
                {
                  ATerm y_11 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_163)), term_v_54);
                    return(t);
                  }
                  t = say_1(t, y_11);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_k_23;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(u_54);
              }
            else
              {
                t = t_54;
                {
                }
              }
          }
        }
      {
        ATerm w_54;
        w_54 = t;
        {
          t = term_s_52;
          t = table_destroy_0(t);
        }
        t = w_54;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm))
{
  t = parse_options_1(t, b_102);
  {
    t = store_options_0(t);
    {
      t = d_102(t);
      {
        ATerm x_54 = t;
        int y_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, c_102);
            LocalPopChoice(y_54);
          }
        else
          {
            t = x_54;
            {
              ATerm z_54 = t;
              int a_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_102(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_55);
                }
              else
                {
                  t = z_54;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm))
{
  ATerm z_11 (ATerm t)
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_102(t);
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_12 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, s_102);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_11, u_102, v_102, b_12);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm o_102 (ATerm))
{
  ATerm c_12 (ATerm t)
  {
    ATerm d_12 (ATerm t)
    {
      ATerm e_55;
      e_55 = t;
      {
        ATerm k_163 = NULL;
        ATerm l_163 = NULL;
        t = term_e_51;
        {
          t = get_config_0(t);
          {
            l_163 = t;
            if(((k_163 != NULL) && (k_163 != l_163)))
              _fail(l_163);
            else
              k_163 = l_163;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATempty, not_null(k_163)));
          t = printnl_0(t);
        }
      }
      t = e_55;
      return(t);
    }
    t = if_verbose2_1(t, d_12);
    return(t);
  }
  t = iowrap_4(t, m_102, n_102, o_102, c_12);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm k_102 (ATerm), ATerm l_102 (ATerm))
{
  t = iowrap_3(t, k_102, l_102, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm f_12 (ATerm t)
  {
    t = _2(t, _id, h_102);
    return(t);
  }
  t = iowrap_2(t, f_12, _fail);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, frontend_transformation_0);
  return(t);
}
