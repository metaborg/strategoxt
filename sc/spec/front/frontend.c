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
Symbol sym_CUT_0;
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
ATerm term_j_54;
ATerm term_x_53;
ATerm term_p_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_h_52;
ATerm term_g_52;
ATerm term_a_52;
ATerm term_q_51;
ATerm term_n_51;
ATerm term_y_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_b_50;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_n_48;
ATerm term_j_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_r_47;
ATerm term_k_47;
ATerm term_r_46;
ATerm term_i_46;
ATerm term_b_46;
ATerm term_u_45;
ATerm term_s_45;
ATerm term_n_44;
ATerm term_f_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_v_43;
ATerm term_t_43;
ATerm term_i_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_t_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_j_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_h_32;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
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
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_28);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
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
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_30);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Dummy", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Op_2, term_d_33, (ATerm) ATempty);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Op_2, term_r_33, (ATerm) ATempty);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_34);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_35);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_35);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_36);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_39);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_40);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("  frontend initialization: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("  normalize-spec: ", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("  spec-use-def: ", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("  ExpandOverlays: ", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("  CheckConstructors: ", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  RulesToSdefs: ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  DesugarListMatching: ", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("  strename: ", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_k_25);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_25);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym__2, term_a_49, term_k_39);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(sym__2, term_k_49, term_k_39);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym__2, term_t_49, term_k_39);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym__2, term_g_52, term_h_52);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym__2, term_h_53, term_k_39);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(sym__3, term_g_52, term_h_52, (ATerm) ATempty);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm Prim_2 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm));
ATerm Explode_2 (ATerm, ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm q_110 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm j_91 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm desugar_spec_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm t_73 (ATerm));
ATerm Specification_1 (ATerm, ATerm v_73 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm v_102 (ATerm));
ATerm timing_1 (ATerm, ATerm f_81 (ATerm));
ATerm spaste_1 (ATerm, ATerm c_110 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_72 (ATerm), ATerm m_72 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm Let_2 (ATerm, ATerm n_72 (ATerm), ATerm o_72 (ATerm));
ATerm sboundin_3 (ATerm, ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm k_72 (ATerm));
ATerm srename_0 (ATerm);
ATerm rename_4 (ATerm, ATerm y_106 (ATerm, ATerm (ATerm)), ATerm z_106 (ATerm), ATerm a_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_107 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm SingleListVar_0 (ATerm);
ATerm ListBuild_0 (ATerm);
ATerm ListMatch_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm Con_3 (ATerm, ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm t_74 (ATerm));
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
ATerm manytd_1 (ATerm, ATerm t_85 (ATerm));
ATerm check_constructors_p__2 (ATerm, ATerm n_110 (ATerm), ATerm o_110 (ATerm));
ATerm check_constructors_0 (ATerm);
ATerm length_0 (ATerm);
ATerm GenerateCheckRule_0 (ATerm);
ATerm CheckConstructors_0 (ATerm);
ATerm exp_overlays2_1 (ATerm, ATerm d_109 (ATerm));
ATerm Trm_to_Cong_0 (ATerm);
ATerm Op_2 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm));
ATerm trm_to_cong_0 (ATerm);
ATerm Overlay_to_Congdef_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm y_109 (ATerm));
ATerm IsVar_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm j_107 (ATerm), ATerm k_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm d_107 (ATerm), ATerm e_107 (ATerm, ATerm (ATerm)));
ATerm SubsVar_2 (ATerm, ATerm w_106 (ATerm), ATerm x_106 (ATerm));
ATerm Fst_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm o_107 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm o_88 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm y_87 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_6 (ATerm, ATerm k_106 (ATerm), ATerm l_106 (ATerm, ATerm (ATerm)), ATerm m_106 (ATerm), ATerm n_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_106 (ATerm, ATerm (ATerm)), ATerm p_106 (ATerm));
ATerm substitute_5 (ATerm, ATerm r_106 (ATerm), ATerm s_106 (ATerm, ATerm (ATerm)), ATerm t_106 (ATerm), ATerm u_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_106 (ATerm, ATerm (ATerm)));
ATerm tsubstitute_0 (ATerm);
ATerm ExpOverlay_1 (ATerm, ATerm e_109 (ATerm));
ATerm exp_overlays1_1 (ATerm, ATerm c_109 (ATerm));
ATerm ExpandOverlays_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm m_110 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm));
ATerm lchoice_1 (ATerm, ATerm l_110 (ATerm));
ATerm LChoice_2 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm i_110 (ATerm), ATerm j_110 (ATerm));
ATerm choice_1 (ATerm, ATerm k_110 (ATerm));
ATerm Choice_2 (ATerm, ATerm y_71 (ATerm), ATerm z_71 (ATerm));
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm));
ATerm RootApp_1 (ATerm, ATerm w_74 (ATerm));
ATerm App_2 (ATerm, ATerm u_74 (ATerm), ATerm v_74 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm r_99 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm f_71 (ATerm));
ATerm Build_1 (ATerm, ATerm g_71 (ATerm));
ATerm VarScope_1 (ATerm, ATerm h_110 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm DefineUnbound_0 (ATerm);
ATerm def_use_def_0 (ATerm);
ATerm defs_use_def_0 (ATerm);
ATerm Signature_1 (ATerm, ATerm q_73 (ATerm));
ATerm spec_use_def_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm v_82 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm new_0 (ATerm);
ATerm ContextVar_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm dummify_0 (ATerm);
ATerm SplitDynamicRule_1 (ATerm, ATerm q_0 (ATerm));
ATerm split_dynamic_rules_0 (ATerm);
ATerm split_under_scope_1 (ATerm, ATerm z_108 (ATerm));
ATerm oncetd_1 (ATerm, ATerm l_84 (ATerm));
ATerm split_dynamic_rule_1 (ATerm, ATerm x_108 (ATerm));
ATerm DeclareContextVars_0 (ATerm);
ATerm lift_dynamic_rule_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm v_81 (ATerm), ATerm w_81 (ATerm));
ATerm repeat_1 (ATerm, ATerm y_81 (ATerm));
ATerm listtd_1 (ATerm, ATerm f_90 (ATerm));
ATerm lift_dynamic_rules_0 (ATerm);
ATerm DefDynamicRuleScope_0 (ATerm);
ATerm define_rule_scope_0 (ATerm);
ATerm LiftDynamicRules_0 (ATerm);
ATerm DefScopeDefault_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm p_74 (ATerm));
ATerm Scope_2 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm tboundin_3 (ATerm, ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm v_94 (ATerm));
ATerm union_0 (ATerm);
ATerm crush_3 (ATerm, ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm diff_1 (ATerm, ATerm r_94 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm c_91 (ATerm));
ATerm zip_1 (ATerm, ATerm e_91 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm for_3 (ATerm, ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm DefLRule_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm w_82 (ATerm));
ATerm define_lrules_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm s_99 (ATerm));
ATerm VarToConst_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm z_84 (ATerm));
ATerm assert_1 (ATerm, ATerm q_99 (ATerm));
ATerm DeclareVarToConst_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm r_73 (ATerm));
ATerm Constructors_1 (ATerm, ATerm m_73 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm n_99 (ATerm));
ATerm restore_always_2 (ATerm, ATerm t_81 (ATerm), ATerm u_81 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm m_99 (ATerm));
ATerm scope_2 (ATerm, ATerm o_99 (ATerm), ATerm p_99 (ATerm));
ATerm vars_to_consts_0 (ATerm);
ATerm RulesToStrategies_0 (ATerm);
ATerm filter_1 (ATerm, ATerm p_96 (ATerm));
ATerm GetConstructors_0 (ATerm);
ATerm InsertBSpec_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm q_95 (ATerm));
ATerm CombineSections_0 (ATerm);
ATerm normalize_spec_0 (ATerm);
ATerm frontend_transformation_0 (ATerm);
ATerm _2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_89 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_99 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_102 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_101 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_97 (ATerm), ATerm c_97 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm));
ATerm crush_2 (ATerm, ATerm k_94 (ATerm), ATerm l_94 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_102 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_100 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_104 (ATerm));
ATerm map_1 (ATerm, ATerm y_88 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_104 (ATerm));
ATerm Program_1 (ATerm, ATerm t_80 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_99 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_80 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_89 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_103 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm g_81 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_105 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_104 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_104 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_101 (ATerm), ATerm p_101 (ATerm));
ATerm iowrap_1 (ATerm, ATerm l_101 (ATerm));
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
ATerm As_2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
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
            t = e_75(t);
            {
              j_18 = t;
              {
                t = not_null(d_18);
                {
                  ATerm n_18 = NULL;
                  t = f_75(t);
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
ATerm Prim_2 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm))
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
            t = b_71(t);
            {
              i_19 = t;
              {
                t = not_null(c_19);
                {
                  ATerm m_19 = NULL;
                  t = c_71(t);
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
ATerm Explode_2 (ATerm t, ATerm a_75 (ATerm), ATerm b_75 (ATerm))
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
            t = a_75(t);
            {
              h_20 = t;
              {
                t = not_null(b_20);
                {
                  ATerm l_20 = NULL;
                  t = b_75(t);
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
ATerm pat_td_1 (ATerm t, ATerm q_110 (ATerm))
{
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_110(t);
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
                t = pat_td_1(t, q_110);
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
                    t = pat_td_1(t, q_110);
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
                          t = pat_td_1(t, q_110);
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
                                  t = pat_td_1(t, q_110);
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
                                  t = pat_td_1(t, q_110);
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
ATerm unzip_1 (ATerm t, ATerm j_91 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, j_91);
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
ATerm Strategies_1 (ATerm t, ATerm t_73 (ATerm))
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
            t = t_73(t);
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
ATerm Specification_1 (ATerm t, ATerm v_73 (ATerm))
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
            t = v_73(t);
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
ATerm if_verbose3_1 (ATerm t, ATerm v_102 (ATerm))
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
      t = v_102(t);
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
ATerm timing_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm f_17;
    f_17 = t;
    {
      t = dtime_0(t);
      t = debug_1(t, f_81);
    }
    t = f_17;
    return(t);
  }
  t = if_verbose3_1(t, u_1);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm c_110 (ATerm))
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        t = split_2(t, _id, c_110);
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
              t = split_2(t, _id, c_110);
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
                t = c_110(t);
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
ATerm Rec_2 (ATerm t, ATerm l_72 (ATerm), ATerm m_72 (ATerm))
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
            t = l_72(t);
            {
              l_26 = t;
              {
                t = not_null(f_26);
                {
                  ATerm p_26 = NULL;
                  t = m_72(t);
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
ATerm SDef_3 (ATerm t, ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm r_72 (ATerm))
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
            ATerm i_28 = NULL;
            t = p_72(t);
            {
              n_27 = t;
              {
                t = not_null(f_27);
                {
                  ATerm k_28 = NULL;
                  t = q_72(t);
                  {
                    i_28 = t;
                    {
                      t = not_null(g_27);
                      {
                        ATerm m_28 = NULL;
                        t = r_72(t);
                        {
                          k_28 = t;
                          {
                            ATerm n_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_27), not_null(i_28), not_null(k_28)), not_null(l_27));
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
ATerm Let_2 (ATerm t, ATerm n_72 (ATerm), ATerm o_72 (ATerm))
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
            t = n_72(t);
            {
              l_29 = t;
              {
                t = not_null(f_29);
                {
                  ATerm u_29 = NULL;
                  t = o_72(t);
                  {
                    n_29 = t;
                    {
                      ATerm v_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(l_29), not_null(n_29)), not_null(j_29));
                      {
                        v_29 = t;
                        if(((u_29 != NULL) && (u_29 != v_29)))
                          _fail(v_29);
                        else
                          u_29 = v_29;
                      }
                      t = not_null(u_29);
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
ATerm sboundin_3 (ATerm t, ATerm d_110 (ATerm), ATerm e_110 (ATerm), ATerm f_110 (ATerm))
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, d_110, d_110);
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
            t = SDef_3(t, f_110, f_110, d_110);
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = Rec_2(t, f_110, d_110);
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
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  u_30 = t;
  t_30 :
  if(match_cons(u_30, sym_SDef_3))
    {
      v_30 = ATgetArgument(u_30, 0);
      w_30 = ATgetArgument(u_30, 1);
      x_30 = ATgetArgument(u_30, 2);
      {
        t = not_null(w_30);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
            b_31 = t;
            s_30 :
            if(match_cons(b_31, sym_VarDec_2))
              {
                c_31 = ATgetArgument(b_31, 0);
                d_31 = ATgetArgument(b_31, 1);
                t = not_null(c_31);
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
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym_Let_2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      {
        t = not_null(m_31);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
            q_31 = t;
            j_31 :
            if(match_cons(q_31, sym_SDef_3))
              {
                r_31 = ATgetArgument(q_31, 0);
                s_31 = ATgetArgument(q_31, 1);
                t_31 = ATgetArgument(q_31, 2);
                t = not_null(r_31);
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
ATerm SVar_1 (ATerm t, ATerm k_72 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL;
  e_32 = t;
  d_32 :
  if(match_cons(e_32, sym_SVar_1))
    {
      f_32 = ATgetArgument(e_32, 0);
      {
        ATerm i_32 = NULL,o_32 = NULL;
        ATerm j_32 = NULL;
        t = SSLgetAnnotations(not_null(e_32));
        {
          j_32 = t;
          if(((i_32 != NULL) && (i_32 != j_32)))
            _fail(j_32);
          else
            i_32 = j_32;
        }
        {
          t = not_null(f_32);
          {
            ATerm q_32 = NULL;
            t = k_72(t);
            {
              o_32 = t;
              {
                ATerm r_32 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(o_32)), not_null(i_32));
                {
                  r_32 = t;
                  if(((q_32 != NULL) && (q_32 != r_32)))
                    _fail(r_32);
                  else
                    q_32 = r_32;
                }
                t = not_null(q_32);
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
ATerm rename_4 (ATerm t, ATerm y_106 (ATerm, ATerm (ATerm)), ATerm z_106 (ATerm), ATerm a_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_107 (ATerm, ATerm (ATerm)))
{
  ATerm f_33 = NULL;
  f_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_33), (ATerm) ATempty);
    {
      ATerm i_33 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, y_106);
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              {
                t = RnBinding_2(t, z_106, b_107);
                t = DistBinding_2(t, i_33, a_107);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, d_2);
        return(t);
      }
      t = i_33(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm j_33 (ATerm t, ATerm k_33 (ATerm))
  {
    t = Scope_2(t, k_33, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, j_33);
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
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  m_33 :
  if(match_cons(o_33, sym_Var_1))
    {
      p_33 = ATgetArgument(o_33, 0);
      n_33 :
      if(match_cons(p_33, sym_ListVar_1))
        {
          q_33 = ATgetArgument(p_33, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_33));
        }
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
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym_Build_1))
    {
      i_34 = ATgetArgument(h_34, 0);
      {
        ATerm k_34 = NULL,l_34 = NULL;
        ATerm z_34 = NULL;
        t = not_null(i_34);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
            m_34 = t;
            v_33 :
            if(match_cons(m_34, sym_Op_2))
              {
                n_34 = ATgetArgument(m_34, 0);
                o_34 = ATgetArgument(m_34, 1);
                w_33 :
                if(match_string(n_34, "Cons"))
                  {
                    x_33 :
                    if(((ATgetType(o_34) == AT_LIST) && !(ATisEmpty(o_34))))
                      {
                        p_34 = ATgetFirst((ATermList) o_34);
                        s_34 = (ATerm) ATgetNext((ATermList) o_34);
                        y_33 :
                        if(match_cons(p_34, sym_Var_1))
                          {
                            q_34 = ATgetArgument(p_34, 0);
                            z_33 :
                            if(match_cons(q_34, sym_ListVar_1))
                              {
                                r_34 = ATgetArgument(q_34, 0);
                                a_34 :
                                if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
                                  {
                                    t_34 = ATgetFirst((ATermList) s_34);
                                    w_34 = (ATerm) ATgetNext((ATermList) s_34);
                                    b_34 :
                                    if(match_cons(t_34, sym_Op_2))
                                      {
                                        u_34 = ATgetArgument(t_34, 0);
                                        v_34 = ATgetArgument(t_34, 1);
                                        c_34 :
                                        if(match_string(u_34, "Nil"))
                                          {
                                            d_34 :
                                            if(((ATgetType(v_34) == AT_LIST) && ATisEmpty(v_34)))
                                              {
                                                e_34 :
                                                if(((ATgetType(w_34) == AT_LIST) && ATisEmpty(w_34)))
                                                  {
                                                    {
                                                      if(((k_34 != NULL) && (k_34 != r_34)))
                                                        _fail(r_34);
                                                      else
                                                        k_34 = r_34;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_34));
                                                    }
                                                  }
                                                else
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
            z_34 = t;
            if(((l_34 != NULL) && (l_34 != z_34)))
              _fail(z_34);
            else
              l_34 = z_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Build_1, not_null(l_34));
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
  ATerm n_36 = NULL,o_36 = NULL;
  n_36 = t;
  m_36 :
  if(match_cons(n_36, sym_Match_1))
    {
      o_36 = ATgetArgument(n_36, 0);
      {
        ATerm q_36 = NULL,r_36 = NULL;
        ATerm d_37 = NULL;
        t = not_null(o_36);
        {
          ATerm f_2 (ATerm t)
          {
            ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
            s_36 = t;
            m_35 :
            if(match_cons(s_36, sym_Op_2))
              {
                t_36 = ATgetArgument(s_36, 0);
                u_36 = ATgetArgument(s_36, 1);
                r_35 :
                if(match_string(t_36, "Cons"))
                  {
                    s_35 :
                    if(((ATgetType(u_36) == AT_LIST) && !(ATisEmpty(u_36))))
                      {
                        v_36 = ATgetFirst((ATermList) u_36);
                        y_36 = (ATerm) ATgetNext((ATermList) u_36);
                        x_35 :
                        if(match_cons(v_36, sym_Var_1))
                          {
                            w_36 = ATgetArgument(v_36, 0);
                            y_35 :
                            if(match_cons(w_36, sym_ListVar_1))
                              {
                                x_36 = ATgetArgument(w_36, 0);
                                z_35 :
                                if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
                                  {
                                    z_36 = ATgetFirst((ATermList) y_36);
                                    c_37 = (ATerm) ATgetNext((ATermList) y_36);
                                    h_36 :
                                    if(match_cons(z_36, sym_Op_2))
                                      {
                                        a_37 = ATgetArgument(z_36, 0);
                                        b_37 = ATgetArgument(z_36, 1);
                                        i_36 :
                                        if(match_string(a_37, "Nil"))
                                          {
                                            j_36 :
                                            if(((ATgetType(b_37) == AT_LIST) && ATisEmpty(b_37)))
                                              {
                                                k_36 :
                                                if(((ATgetType(c_37) == AT_LIST) && ATisEmpty(c_37)))
                                                  {
                                                    {
                                                      if(((q_36 != NULL) && (q_36 != x_36)))
                                                        _fail(x_36);
                                                      else
                                                        q_36 = x_36;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_36));
                                                    }
                                                  }
                                                else
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
            d_37 = t;
            if(((r_36 != NULL) && (r_36 != d_37)))
              _fail(d_37);
            else
              r_36 = d_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(r_36));
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
  ATerm n_37 = NULL;
  n_37 = t;
  m_37 :
  if(match_cons(n_37, sym_Wld_0))
    {
      ATerm p_37 = NULL,r_37 = NULL;
      ATerm e_18;
      e_18 = t;
      {
        ATerm q_37 = NULL;
        t = SSLgetAnnotations(not_null(n_37));
        {
          q_37 = t;
          if(((p_37 != NULL) && (p_37 != q_37)))
            _fail(q_37);
          else
            p_37 = q_37;
        }
      }
      t = e_18;
      {
        ATerm s_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(p_37));
        {
          s_37 = t;
          if(((r_37 != NULL) && (r_37 != s_37)))
            _fail(s_37);
          else
            r_37 = s_37;
        }
        t = not_null(r_37);
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
ATerm Con_3 (ATerm t, ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm t_74 (ATerm))
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym_Con_3))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      g_38 = ATgetArgument(d_38, 2);
      {
        ATerm l_38 = NULL,n_38 = NULL;
        ATerm m_38 = NULL;
        t = SSLgetAnnotations(not_null(d_38));
        {
          m_38 = t;
          if(((l_38 != NULL) && (l_38 != m_38)))
            _fail(m_38);
          else
            l_38 = m_38;
        }
        {
          t = not_null(e_38);
          {
            ATerm p_38 = NULL;
            t = r_74(t);
            {
              n_38 = t;
              {
                t = not_null(f_38);
                {
                  ATerm r_38 = NULL;
                  t = s_74(t);
                  {
                    p_38 = t;
                    {
                      t = not_null(g_38);
                      {
                        ATerm t_38 = NULL;
                        t = t_74(t);
                        {
                          r_38 = t;
                          {
                            ATerm u_38 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(n_38), not_null(p_38), not_null(r_38)), not_null(l_38));
                            {
                              u_38 = t;
                              if(((t_38 != NULL) && (t_38 != u_38)))
                                _fail(u_38);
                              else
                                t_38 = u_38;
                            }
                            t = not_null(t_38);
                          }
                        }
                      }
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
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  f_39 = t;
  d_39 :
  if(match_cons(f_39, sym_SRule_1))
    {
      g_39 = ATgetArgument(f_39, 0);
      e_39 :
      if(match_cons(g_39, sym_StratRule_3))
        {
          h_39 = ATgetArgument(g_39, 0);
          i_39 = ATgetArgument(g_39, 1);
          j_39 = ATgetArgument(g_39, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_39)), (ATerm) ATmakeAppl(sym_Where_1, not_null(j_39))), not_null(h_39)));
        }
      else
        {
          if(match_cons(g_39, sym_Rule_3))
            {
              h_39 = ATgetArgument(g_39, 0);
              i_39 = ATgetArgument(g_39, 1);
              j_39 = ATgetArgument(g_39, 2);
              {
                t = not_null(h_39);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(i_39);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(i_39))), (ATerm) ATmakeAppl(sym_Where_1, not_null(j_39))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_39))));
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
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  g_40 = t;
  e_40 :
  if(match_cons(g_40, sym_SRule_1))
    {
      h_40 = ATgetArgument(g_40, 0);
      f_40 :
      if(match_cons(h_40, sym_Rule_3))
        {
          i_40 = ATgetArgument(h_40, 0);
          j_40 = ATgetArgument(h_40, 1);
          k_40 = ATgetArgument(h_40, 2);
          {
            ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
            ATerm w_40 = NULL;
            ATerm c_41 = NULL;
            t = new_0(t);
            {
              w_40 = t;
              {
                if(((t_40 != NULL) && (t_40 != w_40)))
                  _fail(w_40);
                else
                  t_40 = w_40;
                {
                  t = not_null(i_40);
                  {
                    ATerm k_41 = NULL;
                    ATerm i_2 (ATerm t)
                    {
                      ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
                      x_40 = t;
                      v_39 :
                      if(match_cons(x_40, sym_Con_3))
                        {
                          y_40 = ATgetArgument(x_40, 0);
                          a_41 = ATgetArgument(x_40, 1);
                          b_41 = ATgetArgument(x_40, 2);
                          w_39 :
                          if(match_cons(y_40, sym_Var_1))
                            {
                              z_40 = ATgetArgument(y_40, 0);
                              {
                                if(((s_40 != NULL) && (s_40 != z_40)))
                                  _fail(z_40);
                                else
                                  s_40 = z_40;
                                {
                                  if(((q_40 != NULL) && (q_40 != a_41)))
                                    _fail(a_41);
                                  else
                                    q_40 = a_41;
                                  {
                                    if(((o_40 != NULL) && (o_40 != b_41)))
                                      _fail(b_41);
                                    else
                                      o_40 = b_41;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_40));
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
                      c_41 = t;
                      {
                        if(((u_40 != NULL) && (u_40 != c_41)))
                          _fail(c_41);
                        else
                          u_40 = c_41;
                        {
                          t = not_null(j_40);
                          {
                            ATerm j_2 (ATerm t)
                            {
                              ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
                              d_41 = t;
                              z_39 :
                              if(match_cons(d_41, sym_Con_3))
                                {
                                  e_41 = ATgetArgument(d_41, 0);
                                  g_41 = ATgetArgument(d_41, 1);
                                  h_41 = ATgetArgument(d_41, 2);
                                  a_40 :
                                  if(match_cons(e_41, sym_Var_1))
                                    {
                                      f_41 = ATgetArgument(e_41, 0);
                                      b_40 :
                                      if(match_cons(h_41, sym_Call_2))
                                        {
                                          i_41 = ATgetArgument(h_41, 0);
                                          j_41 = ATgetArgument(h_41, 1);
                                          c_40 :
                                          if(((ATgetType(j_41) == AT_LIST) && ATisEmpty(j_41)))
                                            {
                                              {
                                                if(((s_40 != NULL) && (s_40 != f_41)))
                                                  _fail(f_41);
                                                else
                                                  s_40 = f_41;
                                                {
                                                  if(((r_40 != NULL) && (r_40 != g_41)))
                                                    _fail(g_41);
                                                  else
                                                    r_40 = g_41;
                                                  {
                                                    if(((p_40 != NULL) && (p_40 != i_41)))
                                                      _fail(i_41);
                                                    else
                                                      p_40 = i_41;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_40));
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
                              k_41 = t;
                              if(((v_40 != NULL) && (v_40 != k_41)))
                                _fail(k_41);
                              else
                                v_40 = k_41;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_40)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_40), not_null(v_40), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_40), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(p_40), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_40), not_null(r_40), term_i_15)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_40)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_40)))))));
          }
        }
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
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_Scope_2))
    {
      b_42 = ATgetArgument(a_42, 0);
      c_42 = ATgetArgument(a_42, 1);
      {
        ATerm f_42 = NULL;
        ATerm j_42 = NULL;
        t = not_null(b_42);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm x_18 = t;
            int y_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_42 = NULL,h_42 = NULL;
                g_42 = t;
                x_41 :
                if(match_cons(g_42, sym_ListVar_1))
                  {
                    h_42 = ATgetArgument(g_42, 0);
                    t = not_null(h_42);
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
            j_42 = t;
            if(((f_42 != NULL) && (f_42 != j_42)))
              _fail(j_42);
            else
              f_42 = j_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(f_42), not_null(c_42));
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
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  q_42 = t;
  p_42 :
  if(match_cons(q_42, sym_SDef_3))
    {
      r_42 = ATgetArgument(q_42, 0);
      s_42 = ATgetArgument(q_42, 1);
      t_42 = ATgetArgument(q_42, 2);
      {
        ATerm x_42 = NULL;
        ATerm y_42 = NULL;
        t = not_null(t_42);
        {
          t = tvars_0(t);
          {
            y_42 = t;
            if(((x_42 != NULL) && (x_42 != y_42)))
              _fail(y_42);
            else
              x_42 = y_42;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(r_42), not_null(s_42), (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_42), not_null(t_42)));
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
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  e_43 = t;
  d_43 :
  if(match_cons(e_43, sym_RDef_3))
    {
      f_43 = ATgetArgument(e_43, 0);
      g_43 = ATgetArgument(e_43, 1);
      h_43 = ATgetArgument(e_43, 2);
      {
        ATerm n_43 = NULL;
        ATerm o_43 = NULL;
        t = not_null(h_43);
        {
          t = tvars_0(t);
          {
            o_43 = t;
            if(((n_43 != NULL) && (n_43 != o_43)))
              _fail(o_43);
            else
              n_43 = o_43;
          }
        }
        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(f_43), not_null(g_43), (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_43), (ATerm) ATmakeAppl(sym_SRule_1, not_null(h_43))));
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
  ATerm u_43 = NULL;
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_43)), (ATerm) ATempty);
  return(t);
}
ATerm MkCongDef_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  j_44 = t;
  g_44 :
  if(match_cons(j_44, sym_OpDecl_2))
    {
      k_44 = ATgetArgument(j_44, 0);
      l_44 = ATgetArgument(j_44, 1);
      h_44 :
      if(match_cons(l_44, sym_FunType_2))
        {
          m_44 = ATgetArgument(l_44, 0);
          i_44 = ATgetArgument(l_44, 1);
          {
            ATerm s_44 = NULL,t_44 = NULL,q_45 = NULL;
            ATerm t_19;
            t_19 = t;
            {
              ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
              t = not_null(m_44);
              {
                ATerm n_2 (ATerm t)
                {
                  ATerm u_44 = NULL,l_45 = NULL;
                  t = new_0(t);
                  {
                    ATerm u_19;
                    u_19 = t;
                    {
                      ATerm v_44 = NULL;
                      v_44 = t;
                      if(((u_44 != NULL) && (u_44 != v_44)))
                        _fail(v_44);
                      else
                        u_44 = v_44;
                    }
                    t = u_19;
                    {
                      ATerm m_45 = NULL;
                      m_45 = t;
                      if(((l_45 != NULL) && (l_45 != m_45)))
                        _fail(m_45);
                      else
                        l_45 = m_45;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, not_null(u_44), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19)), not_null(l_45));
                    }
                  }
                  return(t);
                }
                t = map_1(t, n_2);
                {
                  t = unzip_0(t);
                  {
                    n_45 = t;
                    e_44 :
                    if(match_cons(n_45, sym__2))
                      {
                        o_45 = ATgetArgument(n_45, 0);
                        p_45 = ATgetArgument(n_45, 1);
                        {
                          if(((s_44 != NULL) && (s_44 != o_45)))
                            _fail(o_45);
                          else
                            s_44 = o_45;
                          if(((t_44 != NULL) && (t_44 != p_45)))
                            _fail(p_45);
                          else
                            t_44 = p_45;
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
              ATerm r_45 = NULL;
              t = not_null(t_44);
              {
                t = map_1(t, MkCall_0);
                {
                  r_45 = t;
                  if(((q_45 != NULL) && (q_45 != r_45)))
                    _fail(r_45);
                  else
                    q_45 = r_45;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_44), not_null(s_44), (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_44), not_null(q_45)));
            }
          }
        }
      else
        {
          if(match_cons(l_44, sym_ConstType_1))
            {
              m_44 = ATgetArgument(l_44, 0);
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_44), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Cong_2, not_null(k_44), (ATerm) ATempty));
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
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Constructors_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      {
        t = not_null(g_46);
        t = map_1(t, MkCongDef_0);
      }
    }
  else
    {
      if(match_cons(f_46, sym_Sorts_1))
        {
          g_46 = ATgetArgument(f_46, 0);
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
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  b_47 = t;
  v_46 :
  if(match_cons(b_47, sym_Specification_1))
    {
      c_47 = ATgetArgument(b_47, 0);
      w_46 :
      if(((ATgetType(c_47) == AT_LIST) && !(ATisEmpty(c_47))))
        {
          d_47 = ATgetFirst((ATermList) c_47);
          f_47 = (ATerm) ATgetNext((ATermList) c_47);
          x_46 :
          if(match_cons(d_47, sym_Signature_1))
            {
              e_47 = ATgetArgument(d_47, 0);
              y_46 :
              if(((ATgetType(f_47) == AT_LIST) && !(ATisEmpty(f_47))))
                {
                  g_47 = ATgetFirst((ATermList) f_47);
                  i_47 = (ATerm) ATgetNext((ATermList) f_47);
                  z_46 :
                  if(match_cons(g_47, sym_Strategies_1))
                    {
                      h_47 = ATgetArgument(g_47, 0);
                      a_47 :
                      if(((ATgetType(i_47) == AT_LIST) && ATisEmpty(i_47)))
                        {
                          {
                            ATerm l_47 = NULL;
                            ATerm m_47 = NULL,o_47 = NULL,q_47 = NULL;
                            ATerm c_20;
                            c_20 = t;
                            {
                              ATerm n_47 = NULL;
                              t = not_null(e_47);
                              {
                                t = congdefs_0(t);
                                {
                                  n_47 = t;
                                  if(((m_47 != NULL) && (m_47 != n_47)))
                                    _fail(n_47);
                                  else
                                    m_47 = n_47;
                                }
                              }
                            }
                            t = c_20;
                            {
                              ATerm p_47 = NULL;
                              t = (ATerm) ATinsert(CheckATermList(not_null(h_47)), (ATerm) ATmakeAppl(sym_RDef_3, term_d_20, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_VarDec_2, term_i_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19))), (ATerm) ATmakeAppl(sym_VarDec_2, term_e_20, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19))), (ATerm) ATmakeAppl(sym_Rule_3, term_q_20, term_x_20, (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATempty, term_w_21), term_f_21)))));
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
                                  p_47 = t;
                                  if(((o_47 != NULL) && (o_47 != p_47)))
                                    _fail(p_47);
                                  else
                                    o_47 = p_47;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_47), not_null(o_47));
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
                                    q_47 = t;
                                    if(((l_47 != NULL) && (l_47 != q_47)))
                                      _fail(q_47);
                                    else
                                      l_47 = q_47;
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_47))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(e_47))));
                          }
                        }
                      else
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
  ATerm z_47 = NULL;
  ATerm b_48 = NULL;
  z_47 = t;
  {
    ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
    t = term_b_22;
    {
      ATerm p_2 (ATerm t)
      {
        t = term_c_22;
        return(t);
      }
      t = rewrite_1(t, p_2);
      {
        c_48 = t;
        x_47 :
        if(match_cons(c_48, sym_Defined_2))
          {
            d_48 = ATgetArgument(c_48, 0);
            e_48 = ATgetArgument(c_48, 1);
            y_47 :
            if(match_string(d_48, "o_1"))
              {
                if(((b_48 != NULL) && (b_48 != e_48)))
                  _fail(e_48);
                else
                  b_48 = e_48;
              }
            else
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
    t = not_null(b_48);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm i_48 = NULL;
  i_48 = t;
  t = SSL_int_to_string(not_null(i_48));
  return(t);
}
ATerm CheckConsError_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,c_49 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym_Op_2))
    {
      z_48 = ATgetArgument(y_48, 0);
      c_49 = ATgetArgument(y_48, 1);
      {
        ATerm g_49 = NULL,h_49 = NULL;
        ATerm i_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
        t = term_d_22;
        {
          ATerm q_2 (ATerm t)
          {
            t = term_h_22;
            return(t);
          }
          t = rewrite_1(t, q_2);
          {
            i_49 = t;
            o_48 :
            if(match_cons(i_49, sym_Defined_3))
              {
                o_49 = ATgetArgument(i_49, 0);
                p_49 = ATgetArgument(i_49, 1);
                q_49 = ATgetArgument(i_49, 2);
                w_48 :
                if(match_string(o_49, "r_1"))
                  {
                    ATerm r_49 = NULL;
                    if(((g_49 != NULL) && (g_49 != p_49)))
                      _fail(p_49);
                    else
                      g_49 = p_49;
                    {
                      if(((h_49 != NULL) && (h_49 != q_49)))
                        _fail(q_49);
                      else
                        h_49 = q_49;
                      {
                        ATerm s_49 = NULL;
                        t = not_null(c_49);
                        {
                          t = length_0(t);
                          {
                            t = int_to_string_0(t);
                            {
                              s_49 = t;
                              if(((r_49 != NULL) && (r_49 != s_49)))
                                _fail(s_49);
                              else
                                r_49 = s_49;
                            }
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_23), not_null(r_49)), term_x_22), not_null(z_48)), term_w_22), term_p_22), not_null(h_49)), term_o_22), not_null(g_49)), term_n_22));
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
        t = (ATerm) ATmakeAppl(sym_Op_2, not_null(z_48), not_null(c_49));
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
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
  y_49 = t;
  x_49 :
  if(match_cons(y_49, sym__2))
    {
      z_49 = ATgetArgument(y_49, 0);
      a_50 = ATgetArgument(y_49, 1);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(z_49), not_null(a_50));
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            t = SSL_subtr(not_null(z_49), not_null(a_50));
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
    ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
    v_50 = t;
    k_50 :
    if(match_cons(v_50, sym__2))
      {
        w_50 = ATgetArgument(v_50, 0);
        x_50 = ATgetArgument(v_50, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_50), not_null(x_50), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL;
    a_51 = t;
    m_50 :
    if(match_cons(a_51, sym__3))
      {
        b_51 = ATgetArgument(a_51, 0);
        c_51 = ATgetArgument(a_51, 1);
        d_51 = ATgetArgument(a_51, 2);
        n_50 :
        if(match_int(b_51, 0))
          {
            t = not_null(d_51);
          }
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
    ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
    g_51 = t;
    u_50 :
    if(match_cons(g_51, sym__3))
      {
        h_51 = ATgetArgument(g_51, 0);
        i_51 = ATgetArgument(g_51, 1);
        j_51 = ATgetArgument(g_51, 2);
        {
          ATerm o_51 = NULL;
          ATerm j_23;
          j_23 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_51), term_k_23);
            t = geq_0(t);
          }
          t = j_23;
          {
            ATerm p_51 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_51), term_k_23);
            {
              t = subt_0(t);
              {
                p_51 = t;
                if(((o_51 != NULL) && (o_51 != p_51)))
                  _fail(p_51);
                else
                  o_51 = p_51;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_51), not_null(i_51), (ATerm) ATinsert(CheckATermList(not_null(j_51)), not_null(i_51)));
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
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  b_52 :
  if(match_cons(d_52, sym_Op_2))
    {
      e_52 = ATgetArgument(d_52, 0);
      f_52 = ATgetArgument(d_52, 1);
      c_52 :
      if(match_string(e_52, ""))
        {
          ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
          ATerm l_23;
          l_23 = t;
          {
            ATerm w_52 = NULL;
            t = not_null(f_52);
            {
              ATerm x_52 = NULL;
              t = length_0(t);
              {
                w_52 = t;
                {
                  if(((n_52 != NULL) && (n_52 != w_52)))
                    _fail(w_52);
                  else
                    n_52 = w_52;
                  {
                    ATerm y_52 = NULL,a_53 = NULL;
                    t = term_b_13;
                    {
                      x_52 = t;
                      {
                        if(((m_52 != NULL) && (m_52 != x_52)))
                          _fail(x_52);
                        else
                          m_52 = x_52;
                        {
                          ATerm p_23;
                          p_23 = t;
                          {
                            ATerm z_52 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_52), term_u_23);
                            {
                              t = copy_0(t);
                              {
                                z_52 = t;
                                if(((y_52 != NULL) && (y_52 != z_52)))
                                  _fail(z_52);
                                else
                                  y_52 = z_52;
                              }
                            }
                          }
                          t = p_23;
                          {
                            ATerm b_53 = NULL,d_53 = NULL;
                            t = (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, not_null(y_52), term_u_23));
                            {
                              a_53 = t;
                              {
                                if(((o_52 != NULL) && (o_52 != a_53)))
                                  _fail(a_53);
                                else
                                  o_52 = a_53;
                                {
                                  t = GenerateCheckRule_0(t);
                                  {
                                    ATerm c_53 = NULL;
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
                                      c_53 = t;
                                      if(((b_53 != NULL) && (b_53 != c_53)))
                                        _fail(c_53);
                                      else
                                        b_53 = c_53;
                                    }
                                    {
                                      t = (ATerm) ATinsert(CheckATermList(not_null(b_53)), not_null(o_52));
                                      {
                                        d_53 = t;
                                        {
                                          if(((p_52 != NULL) && (p_52 != d_53)))
                                            _fail(d_53);
                                          else
                                            p_52 = d_53;
                                          {
                                            ATerm z_23;
                                            z_23 = t;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_a_24, not_null(p_52)));
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
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_cons(f_55, sym_Op_2))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_55 = NULL;
            t = not_null(h_55);
            {
              t = length_0(t);
              {
                l_55 = t;
                {
                  ATerm n_55 = NULL,o_55 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(l_55)));
                  {
                    ATerm v_2 (ATerm t)
                    {
                      t = term_d_24;
                      return(t);
                    }
                    t = rewrite_1(t, v_2);
                    {
                      n_55 = t;
                      c_54 :
                      if(match_cons(n_55, sym_Defined_1))
                        {
                          o_55 = ATgetArgument(n_55, 0);
                          d_54 :
                          if(!(match_string(o_55, "l_1")))
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
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_55), (ATerm) ATempty);
                }
              }
            }
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            {
              ATerm s_55 = NULL;
              t = not_null(h_55);
              {
                t = length_0(t);
                {
                  s_55 = t;
                  {
                    ATerm u_55 = NULL,v_55 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_55), (ATerm) ATmakeAppl(sym_Keys_1, not_null(s_55)));
                    {
                      ATerm w_2 (ATerm t)
                      {
                        t = term_d_24;
                        return(t);
                      }
                      t = rewrite_1(t, w_2);
                      {
                        u_55 = t;
                        v_54 :
                        if(match_cons(u_55, sym_Defined_1))
                          {
                            v_55 = ATgetArgument(u_55, 0);
                            b_55 :
                            if(!(match_string(v_55, "i_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Op_2, not_null(g_55), (ATerm) ATempty);
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
ATerm manytd_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm a_56 (ATerm t)
  {
    ATerm e_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_85(t);
        {
          ATerm x_2 (ATerm t)
          {
            ATerm j_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_56(t);
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
        t = _some(t, a_56);
      }
    return(t);
  }
  t = a_56(t);
  return(t);
}
ATerm check_constructors_p__2 (ATerm t, ATerm n_110 (ATerm), ATerm o_110 (ATerm))
{
  ATerm d_56 = NULL,e_56 = NULL;
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
      ATerm f_56 = NULL;
      ATerm g_56 = NULL;
      t = n_110(t);
      {
        f_56 = t;
        {
          if(((e_56 != NULL) && (e_56 != f_56)))
            _fail(f_56);
          else
            e_56 = f_56;
          {
            t = o_110(t);
            {
              g_56 = t;
              if(((d_56 != NULL) && (d_56 != g_56)))
                _fail(g_56);
              else
                d_56 = g_56;
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
        t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Defined_3, term_s_24, not_null(d_56), not_null(e_56)));
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
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,c_60 = NULL;
  l_58 = t;
  k_58 :
  if(match_cons(l_58, sym_SDef_3))
    {
      m_58 = ATgetArgument(l_58, 0);
      n_58 = ATgetArgument(l_58, 1);
      c_60 = ATgetArgument(l_58, 2);
      {
        t = not_null(c_60);
        {
          ATerm c_3 (ATerm t)
          {
            t = not_null(m_58);
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
      if(match_cons(l_58, sym_RDef_3))
        {
          m_58 = ATgetArgument(l_58, 0);
          n_58 = ATgetArgument(l_58, 1);
          c_60 = ATgetArgument(l_58, 2);
          {
            t = not_null(c_60);
            {
              ATerm e_3 (ATerm t)
              {
                t = not_null(m_58);
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
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
  b_65 = t;
  y_64 :
  if(match_cons(b_65, sym_OpDecl_2))
    {
      c_65 = ATgetArgument(b_65, 0);
      d_65 = ATgetArgument(b_65, 1);
      z_64 :
      if(match_cons(d_65, sym_FunType_2))
        {
          e_65 = ATgetArgument(d_65, 0);
          a_65 = ATgetArgument(d_65, 1);
          {
            ATerm i_65 = NULL;
            ATerm l_25;
            l_25 = t;
            {
              ATerm j_65 = NULL;
              t = not_null(e_65);
              {
                t = length_0(t);
                {
                  j_65 = t;
                  if(((i_65 != NULL) && (i_65 != j_65)))
                    _fail(j_65);
                  else
                    i_65 = j_65;
                }
              }
            }
            t = l_25;
            {
              ATerm m_25;
              m_25 = t;
              {
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_65), (ATerm) ATmakeAppl(sym_Keys_1, not_null(i_65))), term_t_25);
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
          if(match_cons(d_65, sym_ConstType_1))
            {
              e_65 = ATgetArgument(d_65, 0);
              {
                ATerm o_69 = NULL;
                ATerm u_25;
                u_25 = t;
                {
                  ATerm p_69 = NULL;
                  t = term_k_25;
                  {
                    p_69 = t;
                    if(((o_69 != NULL) && (o_69 != p_69)))
                      _fail(p_69);
                    else
                      o_69 = p_69;
                  }
                }
                t = u_25;
                {
                  ATerm v_25;
                  v_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Op_2, not_null(c_65), (ATerm) ATmakeAppl(sym_Keys_1, not_null(o_69))), term_x_25);
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
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  l_70 = t;
  c_70 :
  if(match_cons(l_70, sym_Specification_1))
    {
      m_70 = ATgetArgument(l_70, 0);
      d_70 :
      if(((ATgetType(m_70) == AT_LIST) && !(ATisEmpty(m_70))))
        {
          n_70 = ATgetFirst((ATermList) m_70);
          s_70 = (ATerm) ATgetNext((ATermList) m_70);
          e_70 :
          if(match_cons(n_70, sym_Signature_1))
            {
              o_70 = ATgetArgument(n_70, 0);
              f_70 :
              if(((ATgetType(o_70) == AT_LIST) && !(ATisEmpty(o_70))))
                {
                  p_70 = ATgetFirst((ATermList) o_70);
                  r_70 = (ATerm) ATgetNext((ATermList) o_70);
                  g_70 :
                  if(match_cons(p_70, sym_Constructors_1))
                    {
                      q_70 = ATgetArgument(p_70, 0);
                      h_70 :
                      if(((ATgetType(r_70) == AT_LIST) && ATisEmpty(r_70)))
                        {
                          i_70 :
                          if(((ATgetType(s_70) == AT_LIST) && !(ATisEmpty(s_70))))
                            {
                              t_70 = ATgetFirst((ATermList) s_70);
                              v_70 = (ATerm) ATgetNext((ATermList) s_70);
                              j_70 :
                              if(match_cons(t_70, sym_Strategies_1))
                                {
                                  u_70 = ATgetArgument(t_70, 0);
                                  k_70 :
                                  if(((ATgetType(v_70) == AT_LIST) && ATisEmpty(v_70)))
                                    {
                                      {
                                        ATerm y_70 = NULL,d_71 = NULL,l_71 = NULL;
                                        ATerm y_25;
                                        y_25 = t;
                                        {
                                          ATerm e_71 = NULL;
                                          ATerm h_71 = NULL;
                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(q_70)), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATinsert(ATempty, term_u_23), term_u_23), term_u_23))), (ATerm) ATmakeAppl(sym_OpDecl_2, term_b_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_23), term_u_23))), term_a_26);
                                          {
                                            e_71 = t;
                                            {
                                              if(((y_70 != NULL) && (y_70 != e_71)))
                                                _fail(e_71);
                                              else
                                                y_70 = e_71;
                                              {
                                                t = not_null(y_70);
                                                {
                                                  t = map_1(t, GenerateCheckRule_0);
                                                  {
                                                    t = not_null(u_70);
                                                    {
                                                      t = filter_1(t, check_constructors_0);
                                                      {
                                                        h_71 = t;
                                                        a_70 :
                                                        if(((ATgetType(h_71) == AT_LIST) && ATisEmpty(h_71)))
                                                          {
                                                            {
                                                              ATerm i_71 = NULL;
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
                                                                i_71 = t;
                                                                if(((d_71 != NULL) && (d_71 != i_71)))
                                                                  _fail(i_71);
                                                                else
                                                                  d_71 = i_71;
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
                                          ATerm m_71 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(d_71), not_null(y_70));
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
                                              m_71 = t;
                                              if(((l_71 != NULL) && (l_71 != m_71)))
                                                _fail(m_71);
                                              else
                                                l_71 = m_71;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(u_70))), (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(l_71))))));
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
ATerm exp_overlays2_1 (ATerm t, ATerm d_109 (ATerm))
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
            ATerm t_71 = NULL;
            t = d_109(t);
            {
              t_71 = t;
              s_71 :
              if(((ATgetType(t_71) == AT_LIST) && ATisEmpty(t_71)))
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
            t = ExpOverlay_1(t, d_109);
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
  ATerm j_72 = NULL,s_72 = NULL,t_72 = NULL;
  s_72 = t;
  i_72 :
  if(match_cons(s_72, sym_BuildDefault_1))
    {
      t_72 = ATgetArgument(s_72, 0);
      t = term_i_15;
    }
  else
    {
      if(match_cons(s_72, sym_Real_1))
        {
          t_72 = ATgetArgument(s_72, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, not_null(t_72)));
        }
      else
        {
          if(match_cons(s_72, sym_Int_1))
            {
              t_72 = ATgetArgument(s_72, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, not_null(t_72)));
            }
          else
            {
              if(match_cons(s_72, sym_Str_1))
                {
                  t_72 = ATgetArgument(s_72, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(t_72)));
                }
              else
                {
                  if(match_cons(s_72, sym_Anno_2))
                    {
                      t_72 = ATgetArgument(s_72, 0);
                      j_72 = ATgetArgument(s_72, 1);
                      t = (ATerm) ATmakeAppl(sym_Call_2, term_t_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_72)), not_null(t_72)));
                    }
                  else
                    {
                      if(match_cons(s_72, sym_Op_2))
                        {
                          t_72 = ATgetArgument(s_72, 0);
                          j_72 = ATgetArgument(s_72, 1);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_72)), not_null(j_72));
                        }
                      else
                        {
                          if(match_cons(s_72, sym_Var_1))
                            {
                              t_72 = ATgetArgument(s_72, 0);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(t_72)), (ATerm) ATempty);
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
ATerm Op_2 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm))
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
  x_73 = t;
  w_73 :
  if(match_cons(x_73, sym_Op_2))
    {
      y_73 = ATgetArgument(x_73, 0);
      z_73 = ATgetArgument(x_73, 1);
      {
        ATerm g_74 = NULL,i_74 = NULL;
        ATerm h_74 = NULL;
        t = SSLgetAnnotations(not_null(x_73));
        {
          h_74 = t;
          if(((g_74 != NULL) && (g_74 != h_74)))
            _fail(h_74);
          else
            g_74 = h_74;
        }
        {
          t = not_null(y_73);
          {
            ATerm k_74 = NULL;
            t = f_73(t);
            {
              i_74 = t;
              {
                t = not_null(z_73);
                {
                  ATerm m_74 = NULL;
                  t = g_73(t);
                  {
                    k_74 = t;
                    {
                      ATerm n_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_74), not_null(k_74)), not_null(g_74));
                      {
                        n_74 = t;
                        if(((m_74 != NULL) && (m_74 != n_74)))
                          _fail(n_74);
                        else
                          m_74 = n_74;
                      }
                      t = not_null(m_74);
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
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL;
  k_75 = t;
  j_75 :
  if(match_cons(k_75, sym_Overlay_3))
    {
      l_75 = ATgetArgument(k_75, 0);
      m_75 = ATgetArgument(k_75, 1);
      n_75 = ATgetArgument(k_75, 2);
      {
        ATerm r_75 = NULL,v_75 = NULL;
        ATerm w_26;
        w_26 = t;
        {
          ATerm u_75 = NULL;
          t = not_null(m_75);
          {
            ATerm n_3 (ATerm t)
            {
              ATerm s_75 = NULL;
              ATerm t_75 = NULL;
              t_75 = t;
              if(((s_75 != NULL) && (s_75 != t_75)))
                _fail(t_75);
              else
                s_75 = t_75;
              t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_75), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19));
              return(t);
            }
            t = map_1(t, n_3);
            {
              u_75 = t;
              if(((r_75 != NULL) && (r_75 != u_75)))
                _fail(u_75);
              else
                r_75 = u_75;
            }
          }
        }
        t = w_26;
        {
          ATerm w_75 = NULL;
          t = not_null(n_75);
          {
            t = trm_to_cong_0(t);
            {
              w_75 = t;
              if(((v_75 != NULL) && (v_75 != w_75)))
                _fail(w_75);
              else
                v_75 = w_75;
            }
          }
          t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(l_75), not_null(r_75), not_null(v_75));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm y_109 (ATerm))
{
  t = Scope_2(t, y_109, _id);
  return(t);
}
ATerm IsVar_0 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL;
  d_76 = t;
  c_76 :
  if(match_cons(d_76, sym_Var_1))
    {
      e_76 = ATgetArgument(d_76, 0);
      t = not_null(e_76);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm j_107 (ATerm), ATerm k_107 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL;
  l_76 = t;
  k_76 :
  if(match_cons(l_76, sym__3))
    {
      m_76 = ATgetArgument(l_76, 0);
      n_76 = ATgetArgument(l_76, 1);
      o_76 = ATgetArgument(l_76, 2);
      {
        t = not_null(m_76);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm s_76 = NULL;
            s_76 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_76), not_null(o_76));
              t = j_107(t);
            }
            return(t);
          }
          ATerm p_3 (ATerm t)
          {
            ATerm u_76 = NULL;
            u_76 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_76), not_null(n_76));
              t = j_107(t);
            }
            return(t);
          }
          t = k_107(t, o_3, p_3, _id);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm d_107 (ATerm), ATerm e_107 (ATerm, ATerm (ATerm)))
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  g_77 = t;
  f_77 :
  if(match_cons(g_77, sym__2))
    {
      h_77 = ATgetArgument(g_77, 0);
      i_77 = ATgetArgument(g_77, 1);
      {
        ATerm l_77 = NULL,m_77 = NULL,n_77 = NULL,t_77 = NULL;
        ATerm x_26;
        x_26 = t;
        {
          ATerm o_77 = NULL;
          t = not_null(h_77);
          {
            ATerm p_77 = NULL;
            t = d_107(t);
            {
              o_77 = t;
              {
                if(((l_77 != NULL) && (l_77 != o_77)))
                  _fail(o_77);
                else
                  l_77 = o_77;
                {
                  ATerm q_77 = NULL,s_77 = NULL;
                  t = map_1(t, new_0);
                  {
                    p_77 = t;
                    {
                      if(((m_77 != NULL) && (m_77 != p_77)))
                        _fail(p_77);
                      else
                        m_77 = p_77;
                      {
                        ATerm r_77 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(l_77), not_null(m_77));
                        {
                          t = zip_1(t, _id);
                          {
                            r_77 = t;
                            if(((q_77 != NULL) && (q_77 != r_77)))
                              _fail(r_77);
                            else
                              q_77 = r_77;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_77), not_null(i_77));
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
                              s_77 = t;
                              if(((n_77 != NULL) && (n_77 != s_77)))
                                _fail(s_77);
                              else
                                n_77 = s_77;
                            }
                          }
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
          ATerm u_77 = NULL;
          t = not_null(h_77);
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(m_77);
              return(t);
            }
            t = e_107(t, q_3);
            {
              u_77 = t;
              if(((t_77 != NULL) && (t_77 != u_77)))
                _fail(u_77);
              else
                t_77 = u_77;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(t_77), not_null(i_77), not_null(n_77));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm w_106 (ATerm), ATerm x_106 (ATerm))
{
  ATerm e_78 = NULL;
  ATerm g_78 = NULL,h_78 = NULL;
  e_78 = t;
  {
    ATerm i_78 = NULL;
    t = not_null(e_78);
    {
      ATerm j_78 = NULL;
      t = w_106(t);
      {
        i_78 = t;
        {
          if(((g_78 != NULL) && (g_78 != i_78)))
            _fail(i_78);
          else
            g_78 = i_78;
          {
            t = x_106(t);
            {
              j_78 = t;
              if(((h_78 != NULL) && (h_78 != j_78)))
                _fail(j_78);
              else
                h_78 = j_78;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_78), not_null(h_78));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_78 = NULL;
  ATerm v_78 = NULL,w_78 = NULL;
  t_78 = t;
  {
    ATerm x_78 = NULL;
    ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL;
    t = not_null(t_78);
    {
      x_78 = t;
      {
        t = SSL_explode_term(not_null(x_78));
        {
          z_78 = t;
          q_78 :
          if(match_cons(z_78, sym__2))
            {
              a_79 = ATgetArgument(z_78, 0);
              b_79 = ATgetArgument(z_78, 1);
              r_78 :
              if(match_string(a_79, ""))
                {
                  s_78 :
                  if(((ATgetType(b_79) == AT_LIST) && !(ATisEmpty(b_79))))
                    {
                      c_79 = ATgetFirst((ATermList) b_79);
                      d_79 = (ATerm) ATgetNext((ATermList) b_79);
                      {
                        if(((w_78 != NULL) && (w_78 != c_79)))
                          _fail(c_79);
                        else
                          w_78 = c_79;
                        if(((v_78 != NULL) && (v_78 != d_79)))
                          _fail(d_79);
                        else
                          v_78 = d_79;
                      }
                    }
                  else
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
    t = not_null(w_78);
  }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL;
  k_79 = t;
  i_79 :
  if(match_cons(k_79, sym__2))
    {
      l_79 = ATgetArgument(k_79, 0);
      m_79 = ATgetArgument(k_79, 1);
      j_79 :
      if(((ATgetType(m_79) == AT_LIST) && !(ATisEmpty(m_79))))
        {
          n_79 = ATgetFirst((ATermList) m_79);
          o_79 = (ATerm) ATgetNext((ATermList) m_79);
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_79), not_null(o_79));
        }
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
  ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  w_79 = t;
  t_79 :
  if(match_cons(w_79, sym__2))
    {
      x_79 = ATgetArgument(w_79, 0);
      y_79 = ATgetArgument(w_79, 1);
      u_79 :
      if(((ATgetType(y_79) == AT_LIST) && !(ATisEmpty(y_79))))
        {
          z_79 = ATgetFirst((ATermList) y_79);
          c_80 = (ATerm) ATgetNext((ATermList) y_79);
          v_79 :
          if(match_cons(z_79, sym__2))
            {
              a_80 = ATgetArgument(z_79, 0);
              b_80 = ATgetArgument(z_79, 1);
              {
                ATerm e_80 = NULL;
                if(((x_79 != NULL) && (x_79 != a_80)))
                  _fail(a_80);
                else
                  x_79 = a_80;
                {
                  if(((e_80 != NULL) && (e_80 != b_80)))
                    _fail(b_80);
                  else
                    e_80 = b_80;
                  t = not_null(e_80);
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
ATerm RnVar_1 (ATerm t, ATerm o_107 (ATerm, ATerm (ATerm)))
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
  j_80 = t;
  i_80 :
  if(match_cons(j_80, sym__2))
    {
      k_80 = ATgetArgument(j_80, 0);
      l_80 = ATgetArgument(j_80, 1);
      {
        t = not_null(k_80);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm s_3 (ATerm t)
            {
              t = not_null(l_80);
              return(t);
            }
            t = split_2(t, _id, s_3);
            t = lookup_0(t);
            return(t);
          }
          t = o_107(t, r_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm o_88 (ATerm))
{
  ATerm s_80 = NULL,v_80 = NULL,w_80 = NULL;
  s_80 = t;
  r_80 :
  if(match_cons(s_80, sym__2))
    {
      v_80 = ATgetArgument(s_80, 0);
      w_80 = ATgetArgument(s_80, 1);
      {
        t = not_null(v_80);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm z_80 = NULL;
            z_80 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_80), not_null(w_80));
              t = o_88(t);
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
ATerm env_alltd_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm d_81 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_87(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = all_dist_1(t, d_81);
      }
    return(t);
  }
  t = d_81(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL;
  k_81 = t;
  j_81 :
  if(match_cons(k_81, sym__2))
    {
      l_81 = ATgetArgument(k_81, 0);
      m_81 = ATgetArgument(k_81, 1);
      {
        ATerm p_81 = NULL;
        if(((p_81 != NULL) && (p_81 != m_81)))
          _fail(m_81);
        else
          p_81 = m_81;
      }
    }
  else
    {
      if(match_cons(k_81, sym__3))
        {
          l_81 = ATgetArgument(k_81, 0);
          m_81 = ATgetArgument(k_81, 1);
          n_81 = ATgetArgument(k_81, 2);
          {
            ATerm b_82 = NULL;
            ATerm c_82 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_81), not_null(m_81));
            {
              t = zip_1(t, _id);
              {
                c_82 = t;
                if(((b_82 != NULL) && (b_82 != c_82)))
                  _fail(c_82);
                else
                  b_82 = c_82;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_82), not_null(n_81));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_6 (ATerm t, ATerm k_106 (ATerm), ATerm l_106 (ATerm, ATerm (ATerm)), ATerm m_106 (ATerm), ATerm n_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_106 (ATerm, ATerm (ATerm)), ATerm p_106 (ATerm))
{
  ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL;
  t = subs_args_0(t);
  {
    i_82 = t;
    h_82 :
    if(match_cons(i_82, sym__2))
      {
        j_82 = ATgetArgument(i_82, 0);
        k_82 = ATgetArgument(i_82, 1);
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), (ATerm) ATempty);
          {
            ATerm u_82 (ATerm t)
            {
              ATerm u_3 (ATerm t)
              {
                ATerm j_27 = t;
                int k_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = RnVar_1(t, l_106);
                    LocalPopChoice(k_27);
                  }
                else
                  {
                    t = j_27;
                    {
                      ATerm o_27 = t;
                      int p_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Fst_0(t);
                          {
                            ATerm v_3 (ATerm t)
                            {
                              t = not_null(j_82);
                              return(t);
                            }
                            t = SubsVar_2(t, k_106, v_3);
                            t = p_106(t);
                          }
                          LocalPopChoice(p_27);
                        }
                      else
                        {
                          t = o_27;
                          {
                            t = RnBinding_2(t, m_106, o_106);
                            t = DistBinding_2(t, u_82, n_106);
                          }
                        }
                    }
                  }
                return(t);
              }
              t = env_alltd_1(t, u_3);
              return(t);
            }
            t = u_82(t);
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
ATerm substitute_5 (ATerm t, ATerm r_106 (ATerm), ATerm s_106 (ATerm, ATerm (ATerm)), ATerm t_106 (ATerm), ATerm u_106 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_106 (ATerm, ATerm (ATerm)))
{
  t = substitute_6(t, r_106, s_106, t_106, u_106, v_106, _id);
  return(t);
}
ATerm tsubstitute_0 (ATerm t)
{
  ATerm x_82 (ATerm t, ATerm y_82 (ATerm))
  {
    t = Scope_2(t, y_82, _id);
    return(t);
  }
  t = substitute_5(t, IsVar_0, Var_1, Bind0_0, tboundin_3, x_82);
  return(t);
}
ATerm ExpOverlay_1 (ATerm t, ATerm e_109 (ATerm))
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL;
  g_83 = t;
  f_83 :
  if(match_cons(g_83, sym_Op_2))
    {
      h_83 = ATgetArgument(g_83, 0);
      i_83 = ATgetArgument(g_83, 1);
      {
        ATerm l_83 = NULL,m_83 = NULL;
        t = e_109(t);
        {
          ATerm w_3 (ATerm t)
          {
            ATerm q_27;
            q_27 = t;
            {
              ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
              n_83 = t;
              e_83 :
              if(match_cons(n_83, sym_Overlay_3))
                {
                  o_83 = ATgetArgument(n_83, 0);
                  p_83 = ATgetArgument(n_83, 1);
                  q_83 = ATgetArgument(n_83, 2);
                  {
                    ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,v_83 = NULL;
                    if(((h_83 != NULL) && (h_83 != o_83)))
                      _fail(o_83);
                    else
                      h_83 = o_83;
                    {
                      if(((r_83 != NULL) && (r_83 != p_83)))
                        _fail(p_83);
                      else
                        r_83 = p_83;
                      {
                        if(((s_83 != NULL) && (s_83 != q_83)))
                          _fail(q_83);
                        else
                          s_83 = q_83;
                        {
                          ATerm r_27;
                          r_27 = t;
                          {
                            ATerm u_83 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_83), not_null(i_83));
                            {
                              t = zip_1(t, _id);
                              {
                                u_83 = t;
                                if(((t_83 != NULL) && (t_83 != u_83)))
                                  _fail(u_83);
                                else
                                  t_83 = u_83;
                              }
                            }
                          }
                          t = r_27;
                          {
                            ATerm w_83 = NULL;
                            t = not_null(t_83);
                            {
                              v_83 = t;
                              {
                                if(((l_83 != NULL) && (l_83 != v_83)))
                                  _fail(v_83);
                                else
                                  l_83 = v_83;
                                {
                                  t = not_null(s_83);
                                  {
                                    w_83 = t;
                                    {
                                      if(((m_83 != NULL) && (m_83 != w_83)))
                                        _fail(w_83);
                                      else
                                        m_83 = w_83;
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_83), not_null(s_83));
                                    }
                                  }
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
            t = q_27;
            return(t);
          }
          t = fetch_1(t, w_3);
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_83), not_null(m_83));
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
ATerm exp_overlays1_1 (ATerm t, ATerm c_109 (ATerm))
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_27;
      u_27 = t;
      {
        ATerm v_27 = t;
        if((PushChoice() == 0))
          {
            ATerm d_84 = NULL;
            t = c_109(t);
            {
              d_84 = t;
              c_84 :
              if(((ATgetType(d_84) == AT_LIST) && ATisEmpty(d_84)))
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
            t = v_27;
          }
      }
      t = u_27;
      {
        ATerm x_3 (ATerm t)
        {
          ATerm y_3 (ATerm t)
          {
            t = ExpOverlay_1(t, c_109);
            return(t);
          }
          t = repeat_2(t, y_3, _id);
          return(t);
        }
        t = topdown_1(t, x_3);
      }
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
      }
    }
  return(t);
}
ATerm ExpandOverlays_0 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL;
  t_84 = t;
  j_84 :
  if(match_cons(t_84, sym_Specification_1))
    {
      u_84 = ATgetArgument(t_84, 0);
      k_84 :
      if(((ATgetType(u_84) == AT_LIST) && !(ATisEmpty(u_84))))
        {
          v_84 = ATgetFirst((ATermList) u_84);
          x_84 = (ATerm) ATgetNext((ATermList) u_84);
          n_84 :
          if(match_cons(v_84, sym_Signature_1))
            {
              w_84 = ATgetArgument(v_84, 0);
              o_84 :
              if(((ATgetType(x_84) == AT_LIST) && !(ATisEmpty(x_84))))
                {
                  y_84 = ATgetFirst((ATermList) x_84);
                  c_85 = (ATerm) ATgetNext((ATermList) x_84);
                  p_84 :
                  if(match_cons(y_84, sym_Overlays_1))
                    {
                      b_85 = ATgetArgument(y_84, 0);
                      q_84 :
                      if(((ATgetType(c_85) == AT_LIST) && !(ATisEmpty(c_85))))
                        {
                          d_85 = ATgetFirst((ATermList) c_85);
                          f_85 = (ATerm) ATgetNext((ATermList) c_85);
                          r_84 :
                          if(match_cons(d_85, sym_Strategies_1))
                            {
                              e_85 = ATgetArgument(d_85, 0);
                              s_84 :
                              if(((ATgetType(f_85) == AT_LIST) && ATisEmpty(f_85)))
                                {
                                  {
                                    ATerm j_85 = NULL,l_85 = NULL;
                                    ATerm w_27;
                                    w_27 = t;
                                    {
                                      ATerm k_85 = NULL;
                                      t = not_null(b_85);
                                      {
                                        ATerm z_3 (ATerm t)
                                        {
                                          t = not_null(b_85);
                                          return(t);
                                        }
                                        t = exp_overlays1_1(t, z_3);
                                        {
                                          k_85 = t;
                                          if(((j_85 != NULL) && (j_85 != k_85)))
                                            _fail(k_85);
                                          else
                                            j_85 = k_85;
                                        }
                                      }
                                    }
                                    t = w_27;
                                    {
                                      ATerm m_85 = NULL,o_85 = NULL,q_85 = NULL;
                                      ATerm x_27;
                                      x_27 = t;
                                      {
                                        ATerm n_85 = NULL;
                                        t = not_null(b_85);
                                        {
                                          t = map_1(t, Overlay_to_Congdef_0);
                                          {
                                            n_85 = t;
                                            if(((m_85 != NULL) && (m_85 != n_85)))
                                              _fail(n_85);
                                            else
                                              m_85 = n_85;
                                          }
                                        }
                                      }
                                      t = x_27;
                                      {
                                        ATerm p_85 = NULL;
                                        t = not_null(e_85);
                                        {
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = not_null(j_85);
                                            return(t);
                                          }
                                          t = exp_overlays2_1(t, a_4);
                                          {
                                            p_85 = t;
                                            if(((o_85 != NULL) && (o_85 != p_85)))
                                              _fail(p_85);
                                            else
                                              o_85 = p_85;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_85), not_null(o_85));
                                          {
                                            ATerm y_27 = t;
                                            int z_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = conc_two_lists_0(t);
                                                LocalPopChoice(z_27);
                                              }
                                            else
                                              {
                                                t = y_27;
                                                t = conc_more_lists_0(t);
                                              }
                                            {
                                              q_85 = t;
                                              if(((l_85 != NULL) && (l_85 != q_85)))
                                                _fail(q_85);
                                              else
                                                l_85 = q_85;
                                            }
                                          }
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_85))), (ATerm) ATmakeAppl(sym_Signature_1, not_null(w_84))));
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
    ATerm z_85 = NULL;
    z_85 = t;
    {
      ATerm a_28;
      a_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_85)), term_c_28);
        {
          ATerm c_4 (ATerm t)
          {
            t = term_d_28;
            return(t);
          }
          t = assert_1(t, c_4);
        }
      }
      t = a_28;
    }
    return(t);
  }
  t = map_1(t, b_4);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL;
  e_86 = t;
  d_86 :
  if(match_cons(e_86, sym_Overlay_3))
    {
      f_86 = ATgetArgument(e_86, 0);
      g_86 = ATgetArgument(e_86, 1);
      h_86 = ATgetArgument(e_86, 2);
      {
        ATerm e_28;
        e_28 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_f_28, not_null(f_86)));
          {
            ATerm d_4 (ATerm t)
            {
              t = term_g_28;
              return(t);
            }
            t = assert_1(t, d_4);
            {
              t = not_null(g_86);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(h_86);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = e_28;
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
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL;
  q_86 = t;
  o_86 :
  if(match_cons(q_86, sym_RDef_3))
    {
      r_86 = ATgetArgument(q_86, 0);
      s_86 = ATgetArgument(q_86, 1);
      t_86 = ATgetArgument(q_86, 2);
      p_86 :
      if(match_cons(t_86, sym_StratRule_3))
        {
          u_86 = ATgetArgument(t_86, 0);
          v_86 = ATgetArgument(t_86, 1);
          w_86 = ATgetArgument(t_86, 2);
          {
            ATerm h_28;
            h_28 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_j_28, not_null(r_86)));
              {
                ATerm e_4 (ATerm t)
                {
                  t = term_g_28;
                  return(t);
                }
                t = assert_1(t, e_4);
                {
                  t = not_null(u_86);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(v_86);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(w_86);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = h_28;
          }
        }
      else
        {
          if(match_cons(t_86, sym_Rule_3))
            {
              u_86 = ATgetArgument(t_86, 0);
              v_86 = ATgetArgument(t_86, 1);
              w_86 = ATgetArgument(t_86, 2);
              {
                ATerm l_28;
                l_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_o_28, not_null(r_86)));
                  {
                    ATerm f_4 (ATerm t)
                    {
                      t = term_g_28;
                      return(t);
                    }
                    t = assert_1(t, f_4);
                    {
                      t = not_null(u_86);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(w_86);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(v_86);
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
ATerm guardedlchoice_1 (ATerm t, ATerm m_110 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, m_110, m_110, _id);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, m_110);
    return(t);
  }
  t = abstract_choice_2(t, g_4, h_4);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm e_72 (ATerm))
{
  ATerm q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL;
  q_87 = t;
  p_87 :
  if(match_cons(q_87, sym_GuardedLChoice_3))
    {
      r_87 = ATgetArgument(q_87, 0);
      s_87 = ATgetArgument(q_87, 1);
      t_87 = ATgetArgument(q_87, 2);
      {
        ATerm a_88 = NULL,c_88 = NULL;
        ATerm b_88 = NULL;
        t = SSLgetAnnotations(not_null(q_87));
        {
          b_88 = t;
          if(((a_88 != NULL) && (a_88 != b_88)))
            _fail(b_88);
          else
            a_88 = b_88;
        }
        {
          t = not_null(r_87);
          {
            ATerm e_88 = NULL;
            t = c_72(t);
            {
              c_88 = t;
              {
                t = not_null(s_87);
                {
                  ATerm g_88 = NULL;
                  t = d_72(t);
                  {
                    e_88 = t;
                    {
                      t = not_null(t_87);
                      {
                        ATerm i_88 = NULL;
                        t = e_72(t);
                        {
                          g_88 = t;
                          {
                            ATerm j_88 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(c_88), not_null(e_88), not_null(g_88)), not_null(a_88));
                            {
                              j_88 = t;
                              if(((i_88 != NULL) && (i_88 != j_88)))
                                _fail(j_88);
                              else
                                i_88 = j_88;
                            }
                            t = not_null(i_88);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm l_110 (ATerm))
{
  ATerm i_4 (ATerm t)
  {
    t = LChoice_2(t, l_110, _id);
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = LChoice_2(t, _id, l_110);
    return(t);
  }
  t = abstract_choice_2(t, i_4, j_4);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL;
  a_89 = t;
  x_88 :
  if(match_cons(a_89, sym_LChoice_2))
    {
      b_89 = ATgetArgument(a_89, 0);
      c_89 = ATgetArgument(a_89, 1);
      {
        ATerm g_89 = NULL,k_89 = NULL;
        ATerm j_89 = NULL;
        t = SSLgetAnnotations(not_null(a_89));
        {
          j_89 = t;
          if(((g_89 != NULL) && (g_89 != j_89)))
            _fail(j_89);
          else
            g_89 = j_89;
        }
        {
          t = not_null(b_89);
          {
            ATerm m_89 = NULL;
            t = a_72(t);
            {
              k_89 = t;
              {
                t = not_null(c_89);
                {
                  ATerm q_89 = NULL;
                  t = b_72(t);
                  {
                    m_89 = t;
                    {
                      ATerm r_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(k_89), not_null(m_89)), not_null(g_89));
                      {
                        r_89 = t;
                        if(((q_89 != NULL) && (q_89 != r_89)))
                          _fail(r_89);
                        else
                          q_89 = r_89;
                      }
                      t = not_null(q_89);
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
        ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL;
        j_90 = t;
        b_90 :
        if(match_cons(j_90, sym__2))
          {
            k_90 = ATgetArgument(j_90, 0);
            l_90 = ATgetArgument(j_90, 1);
            c_90 :
            if(((ATgetType(l_90) == AT_LIST) && !(ATisEmpty(l_90))))
              {
                m_90 = ATgetFirst((ATermList) l_90);
                p_90 = (ATerm) ATgetNext((ATermList) l_90);
                d_90 :
                if(match_cons(m_90, sym_Defined_2))
                  {
                    n_90 = ATgetArgument(m_90, 0);
                    o_90 = ATgetArgument(m_90, 1);
                    e_90 :
                    if(!(match_cons(k_90, sym_Scopes_0)))
                      {
                        ATerm r_28 = t;
                        int s_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_28;
                            t_28 = t;
                            {
                              ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, term_d_28, not_null(k_90));
                              {
                                t = table_get_0(t);
                                {
                                  s_90 = t;
                                  z_89 :
                                  if(((ATgetType(s_90) == AT_LIST) && !(ATisEmpty(s_90))))
                                    {
                                      t_90 = ATgetFirst((ATermList) s_90);
                                      w_90 = (ATerm) ATgetNext((ATermList) s_90);
                                      a_90 :
                                      if(match_cons(t_90, sym_Defined_2))
                                        {
                                          u_90 = ATgetArgument(t_90, 0);
                                          v_90 = ATgetArgument(t_90, 1);
                                          if(((o_90 != NULL) && (o_90 != v_90)))
                                            _fail(v_90);
                                          else
                                            o_90 = v_90;
                                        }
                                      else
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
                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_90), (ATerm) ATinsert(ATempty, term_u_28));
                          }
                      }
                  }
                else
                  {
                    h_90 :
                    if(!(match_cons(k_90, sym_Scopes_0)))
                      {
                        _fail(t);
                      }
                  }
              }
            else
              {
                i_90 :
                if(!(match_cons(k_90, sym_Scopes_0)))
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
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL;
  k_91 = t;
  i_91 :
  if(match_cons(k_91, sym__2))
    {
      l_91 = ATgetArgument(k_91, 0);
      m_91 = ATgetArgument(k_91, 1);
      {
        t = not_null(m_91);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm p_91 = NULL,q_91 = NULL,r_91 = NULL;
            p_91 = t;
            h_91 :
            if(match_cons(p_91, sym__2))
              {
                q_91 = ATgetArgument(p_91, 0);
                r_91 = ATgetArgument(p_91, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(l_91), not_null(q_91), not_null(r_91));
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
  ATerm x_91 = NULL;
  x_91 = t;
  {
    ATerm v_28;
    v_28 = t;
    {
      t = term_d_28;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_28, not_null(x_91));
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
  ATerm b_92 = NULL;
  b_92 = t;
  t = SSL_table_keys(not_null(b_92));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm h_92 = NULL;
  h_92 = t;
  {
    t = table_keys_0(t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm j_92 = NULL;
        ATerm l_92 = NULL;
        j_92 = t;
        {
          ATerm m_92 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), not_null(j_92));
          {
            t = table_get_0(t);
            {
              m_92 = t;
              if(((l_92 != NULL) && (l_92 != m_92)))
                _fail(m_92);
              else
                l_92 = m_92;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_92), not_null(l_92));
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
  t = term_d_28;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm i_110 (ATerm), ATerm j_110 (ATerm))
{
  ATerm s_92 = NULL,u_92 = NULL;
  ATerm w_28;
  w_28 = t;
  {
    ATerm t_92 = NULL;
    t = save_Bound_0(t);
    {
      t_92 = t;
      if(((s_92 != NULL) && (s_92 != t_92)))
        _fail(t_92);
      else
        s_92 = t_92;
    }
  }
  t = w_28;
  {
    t = i_110(t);
    {
      ATerm x_28;
      x_28 = t;
      {
        ATerm v_92 = NULL;
        t = save_Bound_0(t);
        {
          v_92 = t;
          {
            if(((u_92 != NULL) && (u_92 != v_92)))
              _fail(v_92);
            else
              u_92 = v_92;
            {
              t = not_null(s_92);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = x_28;
      {
        t = j_110(t);
        {
          ATerm y_28;
          y_28 = t;
          {
            t = not_null(u_92);
            t = isect_Bound_0(t);
          }
          t = y_28;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm k_110 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    t = Choice_2(t, k_110, _id);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = Choice_2(t, _id, k_110);
    return(t);
  }
  t = abstract_choice_2(t, n_4, o_4);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm y_71 (ATerm), ATerm z_71 (ATerm))
{
  ATerm e_93 = NULL,f_93 = NULL,g_93 = NULL;
  e_93 = t;
  d_93 :
  if(match_cons(e_93, sym_Choice_2))
    {
      f_93 = ATgetArgument(e_93, 0);
      g_93 = ATgetArgument(e_93, 1);
      {
        ATerm k_93 = NULL,m_93 = NULL;
        ATerm l_93 = NULL;
        t = SSLgetAnnotations(not_null(e_93));
        {
          l_93 = t;
          if(((k_93 != NULL) && (k_93 != l_93)))
            _fail(l_93);
          else
            k_93 = l_93;
        }
        {
          t = not_null(f_93);
          {
            ATerm o_93 = NULL;
            t = y_71(t);
            {
              m_93 = t;
              {
                t = not_null(g_93);
                {
                  ATerm q_93 = NULL;
                  t = z_71(t);
                  {
                    o_93 = t;
                    {
                      ATerm r_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(m_93), not_null(o_93)), not_null(k_93));
                      {
                        r_93 = t;
                        if(((q_93 != NULL) && (q_93 != r_93)))
                          _fail(r_93);
                        else
                          q_93 = r_93;
                      }
                      t = not_null(q_93);
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
  ATerm u_94 = NULL;
  u_94 = t;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_95 = NULL;
        ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL;
        t = term_b_22;
        {
          ATerm p_4 (ATerm t)
          {
            t = term_g_28;
            return(t);
          }
          t = rewrite_1(t, p_4);
          {
            d_95 = t;
            c_94 :
            if(match_cons(d_95, sym_Defined_2))
              {
                e_95 = ATgetArgument(d_95, 0);
                f_95 = ATgetArgument(d_95, 1);
                d_94 :
                if(match_string(e_95, "y_0"))
                  {
                    if(((c_95 != NULL) && (c_95 != f_95)))
                      _fail(f_95);
                    else
                      c_95 = f_95;
                  }
                else
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_94)), term_p_22), not_null(c_95)), term_b_29);
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
              ATerm i_95 = NULL;
              ATerm j_95 = NULL,k_95 = NULL,l_95 = NULL;
              t = term_b_22;
              {
                ATerm q_4 (ATerm t)
                {
                  t = term_g_28;
                  return(t);
                }
                t = rewrite_1(t, q_4);
                {
                  j_95 = t;
                  f_94 :
                  if(match_cons(j_95, sym_Defined_2))
                    {
                      k_95 = ATgetArgument(j_95, 0);
                      l_95 = ATgetArgument(j_95, 1);
                      g_94 :
                      if(match_string(k_95, "v_0"))
                        {
                          if(((i_95 != NULL) && (i_95 != l_95)))
                            _fail(l_95);
                          else
                            i_95 = l_95;
                        }
                      else
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_94)), term_p_22), not_null(i_95)), term_i_29);
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
                    ATerm t_95 = NULL;
                    ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
                    t = term_b_22;
                    {
                      ATerm r_4 (ATerm t)
                      {
                        t = term_g_28;
                        return(t);
                      }
                      t = rewrite_1(t, r_4);
                      {
                        u_95 = t;
                        i_94 :
                        if(match_cons(u_95, sym_Defined_2))
                          {
                            v_95 = ATgetArgument(u_95, 0);
                            w_95 = ATgetArgument(u_95, 1);
                            j_94 :
                            if(match_string(v_95, "s_0"))
                              {
                                if(((t_95 != NULL) && (t_95 != w_95)))
                                  _fail(w_95);
                                else
                                  t_95 = w_95;
                              }
                            else
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_94)), term_p_22), not_null(t_95)), term_i_29);
                    LocalPopChoice(o_29);
                  }
                else
                  {
                    t = m_29;
                    {
                      ATerm z_95 = NULL;
                      ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL;
                      t = term_b_22;
                      {
                        ATerm s_4 (ATerm t)
                        {
                          t = term_g_28;
                          return(t);
                        }
                        t = rewrite_1(t, s_4);
                        {
                          a_96 = t;
                          q_94 :
                          if(match_cons(a_96, sym_Defined_2))
                            {
                              b_96 = ATgetArgument(a_96, 0);
                              c_96 = ATgetArgument(a_96, 1);
                              t_94 :
                              if(match_string(b_96, "p_0"))
                                {
                                  if(((z_95 != NULL) && (z_95 != c_96)))
                                    _fail(c_96);
                                  else
                                    z_95 = c_96;
                                }
                              else
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(u_94)), term_p_22), not_null(z_95)), term_p_29);
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
  ATerm n_96 = NULL,o_96 = NULL;
  n_96 = t;
  m_96 :
  if(match_cons(n_96, sym_Var_1))
    {
      o_96 = ATgetArgument(n_96, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_29), not_null(o_96)), term_q_29);
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
  ATerm e_97 = NULL,f_97 = NULL;
  e_97 = t;
  d_97 :
  if(match_cons(e_97, sym_Var_1))
    {
      f_97 = ATgetArgument(e_97, 0);
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_97 = NULL,j_97 = NULL;
            t = not_null(e_97);
            {
              ATerm t_4 (ATerm t)
              {
                t = term_d_28;
                return(t);
              }
              t = rewrite_1(t, t_4);
              {
                i_97 = t;
                v_96 :
                if(match_cons(i_97, sym_Defined_1))
                  {
                    j_97 = ATgetArgument(i_97, 0);
                    w_96 :
                    if(!(match_string(j_97, "f_1")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_97));
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            {
              ATerm w_29 = t;
              int x_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_97 = NULL;
                  t = not_null(e_97);
                  {
                    ATerm u_4 (ATerm t)
                    {
                      t = term_d_28;
                      return(t);
                    }
                    t = rewrite_1(t, u_4);
                    {
                      m_97 = t;
                      y_96 :
                      if(match_cons(m_97, sym_Undefined_0))
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
                    ATerm p_97 = NULL,q_97 = NULL;
                    t = not_null(e_97);
                    {
                      ATerm v_4 (ATerm t)
                      {
                        t = term_d_28;
                        return(t);
                      }
                      t = rewrite_1(t, v_4);
                      {
                        p_97 = t;
                        z_96 :
                        if(match_cons(p_97, sym_Defined_1))
                          {
                            q_97 = ATgetArgument(p_97, 0);
                            a_97 :
                            if(!(match_string(q_97, "b_1")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_97));
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
ATerm Rule_3 (ATerm t, ATerm b_74 (ATerm), ATerm c_74 (ATerm), ATerm d_74 (ATerm))
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL;
  c_98 = t;
  b_98 :
  if(match_cons(c_98, sym_Rule_3))
    {
      d_98 = ATgetArgument(c_98, 0);
      e_98 = ATgetArgument(c_98, 1);
      f_98 = ATgetArgument(c_98, 2);
      {
        ATerm k_98 = NULL,m_98 = NULL;
        ATerm l_98 = NULL;
        t = SSLgetAnnotations(not_null(c_98));
        {
          l_98 = t;
          if(((k_98 != NULL) && (k_98 != l_98)))
            _fail(l_98);
          else
            k_98 = l_98;
        }
        {
          t = not_null(d_98);
          {
            ATerm o_98 = NULL;
            t = b_74(t);
            {
              m_98 = t;
              {
                t = not_null(e_98);
                {
                  ATerm q_98 = NULL;
                  t = c_74(t);
                  {
                    o_98 = t;
                    {
                      t = not_null(f_98);
                      {
                        ATerm s_98 = NULL;
                        t = d_74(t);
                        {
                          q_98 = t;
                          {
                            ATerm t_98 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(m_98), not_null(o_98), not_null(q_98)), not_null(k_98));
                            {
                              t_98 = t;
                              if(((s_98 != NULL) && (s_98 != t_98)))
                                _fail(t_98);
                              else
                                s_98 = t_98;
                            }
                            t = not_null(s_98);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm f_99 = NULL,g_99 = NULL;
  f_99 = t;
  e_99 :
  if(match_cons(f_99, sym_RootApp_1))
    {
      g_99 = ATgetArgument(f_99, 0);
      {
        ATerm j_99 = NULL,l_99 = NULL;
        ATerm k_99 = NULL;
        t = SSLgetAnnotations(not_null(f_99));
        {
          k_99 = t;
          if(((j_99 != NULL) && (j_99 != k_99)))
            _fail(k_99);
          else
            j_99 = k_99;
        }
        {
          t = not_null(g_99);
          {
            ATerm u_99 = NULL;
            t = w_74(t);
            {
              l_99 = t;
              {
                ATerm v_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(l_99)), not_null(j_99));
                {
                  v_99 = t;
                  if(((u_99 != NULL) && (u_99 != v_99)))
                    _fail(v_99);
                  else
                    u_99 = v_99;
                }
                t = not_null(u_99);
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
ATerm App_2 (ATerm t, ATerm u_74 (ATerm), ATerm v_74 (ATerm))
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
  i_100 = t;
  h_100 :
  if(match_cons(i_100, sym_App_2))
    {
      j_100 = ATgetArgument(i_100, 0);
      k_100 = ATgetArgument(i_100, 1);
      {
        ATerm o_100 = NULL,q_100 = NULL;
        ATerm p_100 = NULL;
        t = SSLgetAnnotations(not_null(i_100));
        {
          p_100 = t;
          if(((o_100 != NULL) && (o_100 != p_100)))
            _fail(p_100);
          else
            o_100 = p_100;
        }
        {
          t = not_null(j_100);
          {
            ATerm s_100 = NULL;
            t = u_74(t);
            {
              q_100 = t;
              {
                t = not_null(k_100);
                {
                  ATerm u_100 = NULL;
                  t = v_74(t);
                  {
                    s_100 = t;
                    {
                      ATerm v_100 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(q_100), not_null(s_100)), not_null(o_100));
                      {
                        v_100 = t;
                        if(((u_100 != NULL) && (u_100 != v_100)))
                          _fail(v_100);
                        else
                          u_100 = v_100;
                      }
                      t = not_null(u_100);
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
  ATerm m_101 = NULL,n_101 = NULL,t_101 = NULL,u_101 = NULL;
  m_101 = t;
  k_101 :
  if(match_cons(m_101, sym__3))
    {
      n_101 = ATgetArgument(m_101, 0);
      t_101 = ATgetArgument(m_101, 1);
      u_101 = ATgetArgument(m_101, 2);
      {
        ATerm c_102 = NULL;
        ATerm k_30;
        k_30 = t;
        {
          ATerm d_102 = NULL,e_102 = NULL,f_102 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_101), not_null(t_101));
          {
            t = table_get_0(t);
            {
              d_102 = t;
              j_101 :
              if(((ATgetType(d_102) == AT_LIST) && !(ATisEmpty(d_102))))
                {
                  e_102 = ATgetFirst((ATermList) d_102);
                  f_102 = (ATerm) ATgetNext((ATermList) d_102);
                  {
                    if(((c_102 != NULL) && (c_102 != f_102)))
                      _fail(f_102);
                    else
                      c_102 = f_102;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(n_101), not_null(t_101), (ATerm) ATinsert(CheckATermList(not_null(c_102)), not_null(u_101)));
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
ATerm override_key_1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm l_102 = NULL,m_102 = NULL,n_102 = NULL;
  l_102 = t;
  k_102 :
  if(match_cons(l_102, sym__2))
    {
      m_102 = ATgetArgument(l_102, 0);
      n_102 = ATgetArgument(l_102, 1);
      {
        ATerm q_102 = NULL;
        ATerm l_30;
        l_30 = t;
        {
          ATerm r_102 = NULL;
          t = r_99(t);
          {
            r_102 = t;
            {
              if(((q_102 != NULL) && (q_102 != r_102)))
                _fail(r_102);
              else
                q_102 = r_102;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_102), not_null(m_102), not_null(n_102));
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
  ATerm z_102 = NULL,a_103 = NULL;
  z_102 = t;
  y_102 :
  if(match_cons(z_102, sym_Var_1))
    {
      a_103 = ATgetArgument(z_102, 0);
      {
        ATerm m_30;
        m_30 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(a_103)), term_o_30);
          {
            ATerm w_4 (ATerm t)
            {
              t = term_d_28;
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
  ATerm m_103 = NULL,n_103 = NULL;
  m_103 = t;
  l_103 :
  if(match_cons(m_103, sym_Var_1))
    {
      n_103 = ATgetArgument(m_103, 0);
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_103 = NULL,s_103 = NULL;
            ATerm r_103 = NULL;
            t = SSLgetAnnotations(not_null(m_103));
            {
              r_103 = t;
              if(((q_103 != NULL) && (q_103 != r_103)))
                _fail(r_103);
              else
                q_103 = r_103;
            }
            {
              t = not_null(n_103);
              {
                ATerm u_103 = NULL;
                t = r_0(t);
                {
                  s_103 = t;
                  {
                    ATerm v_103 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(s_103)), not_null(q_103));
                    {
                      v_103 = t;
                      if(((u_103 != NULL) && (u_103 != v_103)))
                        _fail(v_103);
                      else
                        u_103 = v_103;
                    }
                    t = not_null(u_103);
                  }
                }
              }
            }
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            {
              ATerm z_103 = NULL,b_104 = NULL;
              ATerm a_104 = NULL;
              t = SSLgetAnnotations(not_null(m_103));
              {
                a_104 = t;
                if(((z_103 != NULL) && (z_103 != a_104)))
                  _fail(a_104);
                else
                  z_103 = a_104;
              }
              {
                t = not_null(n_103);
                {
                  ATerm d_104 = NULL;
                  t = r_0(t);
                  {
                    b_104 = t;
                    {
                      ATerm e_104 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(b_104)), not_null(z_103));
                      {
                        e_104 = t;
                        if(((d_104 != NULL) && (d_104 != e_104)))
                          _fail(e_104);
                        else
                          d_104 = e_104;
                      }
                      t = not_null(d_104);
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
  ATerm r_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(y_30);
      t = Binding_0(t);
    }
  else
    {
      t = r_30;
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(a_31);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = z_30;
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
ATerm Match_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm s_104 = NULL,t_104 = NULL;
  s_104 = t;
  r_104 :
  if(match_cons(s_104, sym_Match_1))
    {
      t_104 = ATgetArgument(s_104, 0);
      {
        ATerm c_105 = NULL,e_105 = NULL;
        ATerm d_105 = NULL;
        t = SSLgetAnnotations(not_null(s_104));
        {
          d_105 = t;
          if(((c_105 != NULL) && (c_105 != d_105)))
            _fail(d_105);
          else
            c_105 = d_105;
        }
        {
          t = not_null(t_104);
          {
            ATerm g_105 = NULL;
            t = f_71(t);
            {
              e_105 = t;
              {
                ATerm h_105 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(e_105)), not_null(c_105));
                {
                  h_105 = t;
                  if(((g_105 != NULL) && (g_105 != h_105)))
                    _fail(h_105);
                  else
                    g_105 = h_105;
                }
                t = not_null(g_105);
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
ATerm Build_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm r_105 = NULL,s_105 = NULL;
  r_105 = t;
  q_105 :
  if(match_cons(r_105, sym_Build_1))
    {
      s_105 = ATgetArgument(r_105, 0);
      {
        ATerm v_105 = NULL,x_105 = NULL;
        ATerm w_105 = NULL;
        t = SSLgetAnnotations(not_null(r_105));
        {
          w_105 = t;
          if(((v_105 != NULL) && (v_105 != w_105)))
            _fail(w_105);
          else
            v_105 = w_105;
        }
        {
          t = not_null(s_105);
          {
            ATerm z_105 = NULL;
            t = g_71(t);
            {
              x_105 = t;
              {
                ATerm a_106 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(x_105)), not_null(v_105));
                {
                  a_106 = t;
                  if(((z_105 != NULL) && (z_105 != a_106)))
                    _fail(a_106);
                  else
                    z_105 = a_106;
                }
                t = not_null(z_105);
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
ATerm VarScope_1 (ATerm t, ATerm h_110 (ATerm))
{
  ATerm x_4 (ATerm t)
  {
    t = term_d_28;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, h_110);
    return(t);
  }
  t = scope_2(t, x_4, y_4);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(h_31);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = g_31;
      {
        ATerm i_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(o_31);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = i_31;
            {
              ATerm p_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(u_31);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = p_31;
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
                                      ATerm b_32 = t;
                                      int c_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(c_32);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = b_32;
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
  ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL,f_107 = NULL;
  h_106 = t;
  g_106 :
  if(match_cons(h_106, sym_SDef_3))
    {
      i_106 = ATgetArgument(h_106, 0);
      j_106 = ATgetArgument(h_106, 1);
      f_107 = ATgetArgument(h_106, 2);
      {
        ATerm g_32;
        g_32 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATmakeAppl(sym_Defined_2, term_h_32, not_null(i_106)));
          {
            ATerm z_4 (ATerm t)
            {
              t = term_g_28;
              return(t);
            }
            t = assert_1(t, z_4);
            {
              t = not_null(f_107);
              t = unbound_vars_0(t);
            }
          }
        }
        t = g_32;
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
    ATerm n_107 = NULL;
    n_107 = t;
    {
      ATerm k_32;
      k_32 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_107)), term_u_28);
        {
          ATerm b_5 (ATerm t)
          {
            t = term_d_28;
            return(t);
          }
          t = assert_1(t, b_5);
        }
      }
      t = k_32;
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
    t = term_g_28;
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      t = term_d_28;
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm l_32 = t;
      int m_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_32;
          n_32 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = n_32;
          t = sdef_ud_0(t);
          LocalPopChoice(m_32);
        }
      else
        {
          t = l_32;
          {
            ATerm p_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                LocalPopChoice(s_32);
              }
            else
              {
                t = p_32;
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
        ATerm v_32;
        v_32 = t;
        {
          ATerm g_5 (ATerm t)
          {
            ATerm w_32 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_32;
              }
            return(t);
          }
          t = filter_1(t, g_5);
          t = Nil_0(t);
        }
        t = v_32;
      }
    }
  return(t);
}
ATerm Signature_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm w_107 = NULL,x_107 = NULL;
  w_107 = t;
  v_107 :
  if(match_cons(w_107, sym_Signature_1))
    {
      x_107 = ATgetArgument(w_107, 0);
      {
        ATerm a_108 = NULL,c_108 = NULL;
        ATerm b_108 = NULL;
        t = SSLgetAnnotations(not_null(w_107));
        {
          b_108 = t;
          if(((a_108 != NULL) && (a_108 != b_108)))
            _fail(b_108);
          else
            a_108 = b_108;
        }
        {
          t = not_null(x_107);
          {
            ATerm e_108 = NULL;
            t = q_73(t);
            {
              c_108 = t;
              {
                ATerm f_108 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(c_108)), not_null(a_108));
                {
                  f_108 = t;
                  if(((e_108 != NULL) && (e_108 != f_108)))
                    _fail(f_108);
                  else
                    e_108 = f_108;
                }
                t = not_null(e_108);
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
  ATerm m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL;
  p_109 = t;
  i_109 :
  if(match_cons(p_109, sym_Lets_2))
    {
      q_109 = ATgetArgument(p_109, 0);
      r_109 = ATgetArgument(p_109, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(q_109), not_null(r_109));
    }
  else
    {
      if(match_cons(p_109, sym_LChoices_1))
        {
          q_109 = ATgetArgument(p_109, 0);
          j_109 :
          if(((ATgetType(q_109) == AT_LIST) && !(ATisEmpty(q_109))))
            {
              m_109 = ATgetFirst((ATermList) q_109);
              n_109 = (ATerm) ATgetNext((ATermList) q_109);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(m_109), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(n_109)));
            }
          else
            {
              if(((ATgetType(q_109) == AT_LIST) && ATisEmpty(q_109)))
                {
                  t = term_x_32;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(p_109, sym_Choices_1))
            {
              q_109 = ATgetArgument(p_109, 0);
              k_109 :
              if(((ATgetType(q_109) == AT_LIST) && !(ATisEmpty(q_109))))
                {
                  m_109 = ATgetFirst((ATermList) q_109);
                  n_109 = (ATerm) ATgetNext((ATermList) q_109);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(m_109), (ATerm) ATmakeAppl(sym_Choices_1, not_null(n_109)));
                }
              else
                {
                  if(((ATgetType(q_109) == AT_LIST) && ATisEmpty(q_109)))
                    {
                      t = term_x_32;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(p_109, sym_Seqs_1))
                {
                  q_109 = ATgetArgument(p_109, 0);
                  l_109 :
                  if(((ATgetType(q_109) == AT_LIST) && !(ATisEmpty(q_109))))
                    {
                      m_109 = ATgetFirst((ATermList) q_109);
                      n_109 = (ATerm) ATgetNext((ATermList) q_109);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_109), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(n_109)));
                    }
                  else
                    {
                      if(((ATgetType(q_109) == AT_LIST) && ATisEmpty(q_109)))
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
                  if(match_cons(p_109, sym_DefaultVarDec_1))
                    {
                      q_109 = ATgetArgument(p_109, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_109), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_19), term_x_19));
                    }
                  else
                    {
                      if(match_cons(p_109, sym_InfixApp_3))
                        {
                          q_109 = ATgetArgument(p_109, 0);
                          r_109 = ATgetArgument(p_109, 1);
                          o_109 = ATgetArgument(p_109, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(r_109), (ATerm) ATmakeAppl(sym_Op_2, term_b_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_109)), not_null(q_109))));
                        }
                      else
                        {
                          if(match_cons(p_109, sym_BAM_3))
                            {
                              q_109 = ATgetArgument(p_109, 0);
                              r_109 = ATgetArgument(p_109, 1);
                              o_109 = ATgetArgument(p_109, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(o_109))), not_null(q_109)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_109))));
                            }
                          else
                            {
                              if(match_cons(p_109, sym_AM_2))
                                {
                                  q_109 = ATgetArgument(p_109, 0);
                                  r_109 = ATgetArgument(p_109, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_109), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_109)));
                                }
                              else
                                {
                                  if(match_cons(p_109, sym_MA_2))
                                    {
                                      q_109 = ATgetArgument(p_109, 0);
                                      r_109 = ATgetArgument(p_109, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_109)), not_null(r_109));
                                    }
                                  else
                                    {
                                      if(match_cons(p_109, sym_BA_2))
                                        {
                                          q_109 = ATgetArgument(p_109, 0);
                                          r_109 = ATgetArgument(p_109, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_109)), not_null(q_109));
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
ATerm topdown_1 (ATerm t, ATerm v_82 (ATerm))
{
  t = v_82(t);
  {
    ATerm n_5 (ATerm t)
    {
      t = topdown_1(t, v_82);
      return(t);
    }
    t = _all(t, n_5);
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,c_112 = NULL;
  w_111 = t;
  t_111 :
  if(match_cons(w_111, sym__2))
    {
      x_111 = ATgetArgument(w_111, 0);
      a_112 = ATgetArgument(w_111, 1);
      u_111 :
      if(match_cons(x_111, sym__2))
        {
          y_111 = ATgetArgument(x_111, 0);
          z_111 = ATgetArgument(x_111, 1);
          v_111 :
          if(match_cons(a_112, sym__2))
            {
              b_112 = ATgetArgument(a_112, 0);
              c_112 = ATgetArgument(a_112, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_112)), not_null(y_111)), (ATerm) ATinsert(CheckATermList(not_null(c_112)), not_null(z_111)));
            }
          else
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
  ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL;
  k_112 = t;
  j_112 :
  if(((ATgetType(k_112) == AT_LIST) && !(ATisEmpty(k_112))))
    {
      l_112 = ATgetFirst((ATermList) k_112);
      m_112 = (ATerm) ATgetNext((ATermList) k_112);
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_112), not_null(m_112));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm s_112 = NULL;
  s_112 = t;
  r_112 :
  if(((ATgetType(s_112) == AT_LIST) && ATisEmpty(s_112)))
    {
      t = term_y_32;
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0 (ATerm t)
{
  ATerm y_112 = NULL,z_112 = NULL;
  y_112 = t;
  x_112 :
  if(match_cons(y_112, sym_Var_1))
    {
      z_112 = ATgetArgument(y_112, 0);
      {
        ATerm c_113 = NULL,d_113 = NULL;
        t = not_null(y_112);
        {
          ATerm o_5 (ATerm t)
          {
            t = term_z_32;
            return(t);
          }
          t = rewrite_1(t, o_5);
          {
            c_113 = t;
            v_112 :
            if(match_cons(c_113, sym_Defined_1))
              {
                d_113 = ATgetArgument(c_113, 0);
                w_112 :
                if(!(match_string(d_113, "m_0")))
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
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_112));
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
  ATerm a_33;
  a_33 = t;
  {
    ATerm g_113 = NULL;
    ATerm h_113 = NULL;
    h_113 = t;
    if(((g_113 != NULL) && (g_113 != h_113)))
      _fail(h_113);
    else
      g_113 = h_113;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, not_null(g_113));
      t = printnl_0(t);
    }
  }
  t = a_33;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm b_33;
  b_33 = t;
  {
    t = error_0(t);
    {
      t = term_k_23;
      t = exit_0(t);
    }
  }
  t = b_33;
  return(t);
}
ATerm dummify_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL;
    t_113 = t;
    s_113 :
    if(match_cons(t_113, sym_Var_1))
      {
        u_113 = ATgetArgument(t_113, 0);
        {
          ATerm c_33 = t;
          if((PushChoice() == 0))
            {
              t = ContextVar_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_33;
            }
          t = term_e_33;
        }
      }
    else
      {
        if(match_cons(t_113, sym_Wld_0))
          {
            t = term_e_33;
          }
        else
          {
            if(match_cons(t_113, sym_RootApp_1))
              {
                u_113 = ATgetArgument(t_113, 0);
                {
                  ATerm z_113 = NULL;
                  ATerm c_114 = NULL;
                  t = not_null(u_113);
                  {
                    t = tvars_0(t);
                    {
                      ATerm q_5 (ATerm t)
                      {
                        ATerm a_114 = NULL;
                        ATerm b_114 = NULL;
                        b_114 = t;
                        if(((a_114 != NULL) && (a_114 != b_114)))
                          _fail(b_114);
                        else
                          a_114 = b_114;
                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_114));
                        return(t);
                      }
                      t = map_1(t, q_5);
                      {
                        c_114 = t;
                        if(((z_113 != NULL) && (z_113 != c_114)))
                          _fail(c_114);
                        else
                          z_113 = c_114;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_33, not_null(z_113));
                }
              }
            else
              {
                if(match_cons(t_113, sym_App_2))
                  {
                    u_113 = ATgetArgument(t_113, 0);
                    v_113 = ATgetArgument(t_113, 1);
                    {
                      ATerm f_114 = NULL;
                      ATerm i_114 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_113), not_null(v_113));
                      {
                        t = tvars_0(t);
                        {
                          ATerm r_5 (ATerm t)
                          {
                            ATerm g_114 = NULL;
                            ATerm h_114 = NULL;
                            h_114 = t;
                            if(((g_114 != NULL) && (g_114 != h_114)))
                              _fail(h_114);
                            else
                              g_114 = h_114;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_114));
                            return(t);
                          }
                          t = map_1(t, r_5);
                          {
                            i_114 = t;
                            if(((f_114 != NULL) && (f_114 != i_114)))
                              _fail(i_114);
                            else
                              f_114 = i_114;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_g_33, not_null(f_114));
                    }
                  }
                else
                  {
                    if(match_cons(t_113, sym_Con_3))
                      {
                        u_113 = ATgetArgument(t_113, 0);
                        v_113 = ATgetArgument(t_113, 1);
                        w_113 = ATgetArgument(t_113, 2);
                        {
                          t = (ATerm) ATinsert(ATempty, term_h_33);
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
  ATerm q_115 = NULL,r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL;
  ATerm n_117 (ATerm t)
  {
    ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,k_117 = NULL;
    ATerm l_33;
    l_33 = t;
    {
      ATerm y_116 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_115), term_s_33);
      {
        ATerm t_33 = t;
        if((PushChoice() == 0))
          {
            t = eq_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = t_33;
          }
        {
          ATerm z_116 = NULL;
          t = new_0(t);
          {
            y_116 = t;
            {
              if(((r_116 != NULL) && (r_116 != y_116)))
                _fail(y_116);
              else
                r_116 = y_116;
              {
                t = not_null(w_115);
                {
                  ATerm b_117 = NULL;
                  t = dummify_0(t);
                  {
                    z_116 = t;
                    {
                      if(((t_116 != NULL) && (t_116 != z_116)))
                        _fail(z_116);
                      else
                        t_116 = z_116;
                      {
                        ATerm e_117 = NULL;
                        ATerm u_33 = t;
                        int f_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_117 = NULL;
                            a_117 = t;
                            {
                              if(((w_115 != NULL) && (w_115 != a_117)))
                                _fail(a_117);
                              else
                                w_115 = a_117;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_116));
                            }
                            LocalPopChoice(f_34);
                          }
                        else
                          {
                            t = u_33;
                            {
                            }
                          }
                        {
                          b_117 = t;
                          {
                            if(((s_116 != NULL) && (s_116 != b_117)))
                              _fail(b_117);
                            else
                              s_116 = b_117;
                            {
                              t = not_null(t_116);
                              {
                                t = tvars_0(t);
                                {
                                  ATerm h_117 = NULL;
                                  ATerm s_5 (ATerm t)
                                  {
                                    ATerm c_117 = NULL;
                                    ATerm d_117 = NULL;
                                    d_117 = t;
                                    if(((c_117 != NULL) && (c_117 != d_117)))
                                      _fail(d_117);
                                    else
                                      c_117 = d_117;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_117));
                                    return(t);
                                  }
                                  t = map_1(t, s_5);
                                  {
                                    e_117 = t;
                                    {
                                      if(((v_116 != NULL) && (v_116 != e_117)))
                                        _fail(e_117);
                                      else
                                        v_116 = e_117;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_115), not_null(y_115));
                                        {
                                          t = tvars_0(t);
                                          {
                                            ATerm i_117 = NULL;
                                            ATerm t_5 (ATerm t)
                                            {
                                              ATerm f_117 = NULL;
                                              ATerm g_117 = NULL;
                                              g_117 = t;
                                              if(((f_117 != NULL) && (f_117 != g_117)))
                                                _fail(g_117);
                                              else
                                                f_117 = g_117;
                                              {
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_117));
                                                t = ContextVar_0(t);
                                              }
                                              return(t);
                                            }
                                            t = filter_1(t, t_5);
                                            {
                                              h_117 = t;
                                              {
                                                if(((u_116 != NULL) && (u_116 != h_117)))
                                                  _fail(h_117);
                                                else
                                                  u_116 = h_117;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_116), not_null(v_116));
                                                  {
                                                    ATerm j_117 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      i_117 = t;
                                                      {
                                                        if(((w_116 != NULL) && (w_116 != i_117)))
                                                          _fail(i_117);
                                                        else
                                                          w_116 = i_117;
                                                        {
                                                          t = new_0(t);
                                                          {
                                                            j_117 = t;
                                                            if(((x_116 != NULL) && (x_116 != j_117)))
                                                              _fail(j_117);
                                                            else
                                                              x_116 = j_117;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = l_33;
    {
      ATerm l_117 = NULL;
      t = not_null(t_115);
      {
        t = q_0(t);
        {
          l_117 = t;
          if(((k_117 != NULL) && (k_117 != l_117)))
            _fail(l_117);
          else
            k_117 = l_117;
        }
      }
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(k_117), (ATerm) ATmakeAppl(sym_Op_2, term_j_34, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(CheckATermList(not_null(w_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(x_116))))), not_null(t_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(t_115), not_null(u_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(r_116)), not_null(w_115)), not_null(x_115), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(t_115))))), not_null(s_116)), (ATerm) ATmakeAppl(sym_Op_2, term_x_34, (ATerm) ATinsert(CheckATermList(not_null(w_116)), (ATerm) ATmakeAppl(sym_Str_1, not_null(x_116))))), not_null(y_115)))));
    }
    return(t);
  }
  s_115 = t;
  k_115 :
  if(match_cons(s_115, sym_RDef_3))
    {
      t_115 = ATgetArgument(s_115, 0);
      u_115 = ATgetArgument(s_115, 1);
      v_115 = ATgetArgument(s_115, 2);
      l_115 :
      if(match_cons(v_115, sym_Rule_3))
        {
          w_115 = ATgetArgument(v_115, 0);
          x_115 = ATgetArgument(v_115, 1);
          y_115 = ATgetArgument(v_115, 2);
          m_115 :
          if(match_cons(x_115, sym_Op_2))
            {
              q_115 = ATgetArgument(x_115, 0);
              r_115 = ATgetArgument(x_115, 1);
              n_115 :
              if(((ATgetType(r_115) == AT_LIST) && ATisEmpty(r_115)))
                {
                  o_115 :
                  if(match_string(q_115, "Undefined"))
                    {
                      ATerm b_35 = t;
                      int c_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL,k_116 = NULL;
                          ATerm d_35;
                          d_35 = t;
                          {
                            ATerm g_116 = NULL;
                            ATerm h_116 = NULL;
                            t = new_0(t);
                            {
                              g_116 = t;
                              {
                                if(((e_116 != NULL) && (e_116 != g_116)))
                                  _fail(g_116);
                                else
                                  e_116 = g_116;
                                {
                                  t = not_null(w_115);
                                  {
                                    ATerm j_116 = NULL;
                                    t = dummify_0(t);
                                    {
                                      h_116 = t;
                                      {
                                        if(((d_116 != NULL) && (d_116 != h_116)))
                                          _fail(h_116);
                                        else
                                          d_116 = h_116;
                                        {
                                          ATerm e_35 = t;
                                          int f_35 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm i_116 = NULL;
                                              i_116 = t;
                                              {
                                                if(((w_115 != NULL) && (w_115 != i_116)))
                                                  _fail(i_116);
                                                else
                                                  w_115 = i_116;
                                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_116));
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
                                            j_116 = t;
                                            if(((f_116 != NULL) && (f_116 != j_116)))
                                              _fail(j_116);
                                            else
                                              f_116 = j_116;
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
                            ATerm l_116 = NULL;
                            t = not_null(t_115);
                            {
                              t = q_0(t);
                              {
                                l_116 = t;
                                if(((k_116 != NULL) && (k_116 != l_116)))
                                  _fail(l_116);
                                else
                                  k_116 = l_116;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, not_null(k_116), (ATerm) ATmakeAppl(sym_Op_2, term_j_34, (ATerm) ATinsert(ATinsert(ATempty, term_s_33), not_null(d_116))))), (ATerm) ATmakeAppl(sym_RDef_3, not_null(t_115), not_null(u_115), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_116)), not_null(w_115)), term_s_33, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(t_115))))), not_null(f_116)), term_s_33), (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_115), term_x_32)))));
                          }
                          LocalPopChoice(c_35);
                        }
                      else
                        {
                          t = b_35;
                          t = n_117(t);
                        }
                    }
                  else
                    {
                      t = n_117(t);
                    }
                }
              else
                {
                  p_115 :
                  t = n_117(t);
                }
            }
          else
            {
              t = n_117(t);
            }
        }
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
  ATerm j_118 = NULL,k_118 = NULL;
  j_118 = t;
  i_118 :
  if(match_cons(j_118, sym_OverrideDynamicRules_1))
    {
      k_118 = ATgetArgument(j_118, 0);
      {
        t = not_null(k_118);
        {
          ATerm u_5 (ATerm t)
          {
            ATerm v_5 (ATerm t)
            {
              ATerm m_118 = NULL;
              ATerm n_118 = NULL;
              n_118 = t;
              if(((m_118 != NULL) && (m_118 != n_118)))
                _fail(n_118);
              else
                m_118 = n_118;
              t = (ATerm) ATmakeAppl(sym_Call_2, term_h_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118)))));
              return(t);
            }
            t = SplitDynamicRule_1(t, v_5);
            return(t);
          }
          t = map_1(t, u_5);
          t = unzip_0(t);
        }
      }
    }
  else
    {
      if(match_cons(j_118, sym_DynamicRules_1))
        {
          k_118 = ATgetArgument(j_118, 0);
          {
            t = not_null(k_118);
            {
              ATerm w_5 (ATerm t)
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm p_118 = NULL;
                  ATerm q_118 = NULL;
                  q_118 = t;
                  if(((p_118 != NULL) && (p_118 != q_118)))
                    _fail(q_118);
                  else
                    p_118 = q_118;
                  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(p_118)))));
                  return(t);
                }
                t = SplitDynamicRule_1(t, x_5);
                return(t);
              }
              t = map_1(t, w_5);
              t = unzip_0(t);
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
ATerm split_under_scope_1 (ATerm t, ATerm z_108 (ATerm))
{
  ATerm y_118 = NULL,z_118 = NULL,a_119 = NULL;
  y_118 = t;
  x_118 :
  if(match_cons(y_118, sym_Scope_2))
    {
      z_118 = ATgetArgument(y_118, 0);
      a_119 = ATgetArgument(y_118, 1);
      {
        ATerm d_119 = NULL;
        ATerm y_5 (ATerm t)
        {
          t = term_z_32;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          ATerm e_119 = NULL;
          t = not_null(z_118);
          {
            t = DeclareContextVars_0(t);
            {
              t = not_null(a_119);
              {
                t = z_108(t);
                {
                  e_119 = t;
                  if(((d_119 != NULL) && (d_119 != e_119)))
                    _fail(e_119);
                  else
                    d_119 = e_119;
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, y_5, z_5);
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(z_118), not_null(d_119));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm h_119 (ATerm t)
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_84(t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        t = _one(t, h_119);
      }
    return(t);
  }
  t = h_119(t);
  return(t);
}
ATerm split_dynamic_rule_1 (ATerm t, ATerm x_108 (ATerm))
{
  ATerm i_119 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm n_35 = t;
      int o_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_108(t);
          LocalPopChoice(o_35);
        }
      else
        {
          t = n_35;
          t = split_under_scope_1(t, i_119);
        }
      return(t);
    }
    t = oncetd_1(t, a_6);
    return(t);
  }
  t = i_119(t);
  return(t);
}
ATerm DeclareContextVars_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm k_119 = NULL;
    k_119 = t;
    {
      ATerm p_35;
      p_35 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_119)), term_t_35);
        {
          ATerm c_6 (ATerm t)
          {
            t = term_z_32;
            return(t);
          }
          t = assert_1(t, c_6);
        }
      }
      t = p_35;
    }
    return(t);
  }
  t = map_1(t, b_6);
  return(t);
}
ATerm lift_dynamic_rule_0 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
  s_119 = t;
  r_119 :
  if(((ATgetType(s_119) == AT_LIST) && !(ATisEmpty(s_119))))
    {
      t_119 = ATgetFirst((ATermList) s_119);
      u_119 = (ATerm) ATgetNext((ATermList) s_119);
      {
        ATerm x_119 = NULL,y_119 = NULL,z_119 = NULL;
        ATerm d_6 (ATerm t)
        {
          t = term_z_32;
          return(t);
        }
        ATerm e_6 (ATerm t)
        {
          ATerm d_120 = NULL;
          t = not_null(t_119);
          {
            t = tvars_0(t);
            {
              t = DeclareContextVars_0(t);
              {
                t = not_null(t_119);
                {
                  ATerm f_6 (ATerm t)
                  {
                    ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL;
                    t = split_dynamic_rules_0(t);
                    {
                      a_120 = t;
                      p_119 :
                      if(match_cons(a_120, sym__2))
                        {
                          b_120 = ATgetArgument(a_120, 0);
                          c_120 = ATgetArgument(a_120, 1);
                          {
                            if(((y_119 != NULL) && (y_119 != b_120)))
                              _fail(b_120);
                            else
                              y_119 = b_120;
                            {
                              if(((x_119 != NULL) && (x_119 != c_120)))
                                _fail(c_120);
                              else
                                x_119 = c_120;
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_119));
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
                    d_120 = t;
                    if(((z_119 != NULL) && (z_119 != d_120)))
                      _fail(d_120);
                    else
                      z_119 = d_120;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, d_6, e_6);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_119)), not_null(z_119)), not_null(u_119));
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
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
ATerm repeat_2 (ATerm t, ATerm v_81 (ATerm), ATerm w_81 (ATerm))
{
  ATerm h_120 (ATerm t)
  {
    ATerm w_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_81(t);
        t = h_120(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = w_35;
        t = w_81(t);
      }
    return(t);
  }
  t = h_120(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm y_81 (ATerm))
{
  t = repeat_2(t, y_81, _id);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm f_90 (ATerm))
{
  ATerm i_120 (ATerm t)
  {
    t = f_90(t);
    {
      ATerm b_36 = t;
      int c_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(c_36);
        }
      else
        {
          t = b_36;
          t = Cons_2(t, _id, i_120);
        }
    }
    return(t);
  }
  t = i_120(t);
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
  ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL;
  p_120 = t;
  l_120 :
  if(match_cons(p_120, sym_DynRuleScope_2))
    {
      q_120 = ATgetArgument(p_120, 0);
      r_120 = ATgetArgument(p_120, 1);
      m_120 :
      if(((ATgetType(q_120) == AT_LIST) && !(ATisEmpty(q_120))))
        {
          n_120 = ATgetFirst((ATermList) q_120);
          o_120 = (ATerm) ATgetNext((ATermList) q_120);
          t = (ATerm) ATmakeAppl(sym_Call_2, term_e_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, not_null(o_120), not_null(r_120))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, not_null(n_120)))));
        }
      else
        {
          if(((ATgetType(q_120) == AT_LIST) && ATisEmpty(q_120)))
            {
              t = not_null(r_120);
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
    ATerm f_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DefDynamicRuleScope_0(t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = f_36;
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
  ATerm b_121 = NULL,c_121 = NULL;
  b_121 = t;
  a_121 :
  if(match_cons(b_121, sym_ScopeDefault_1))
    {
      c_121 = ATgetArgument(b_121, 0);
      {
        ATerm e_121 = NULL;
        ATerm f_121 = NULL;
        t = not_null(c_121);
        {
          t = tvars_0(t);
          {
            f_121 = t;
            if(((e_121 != NULL) && (e_121 != f_121)))
              _fail(f_121);
            else
              e_121 = f_121;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(e_121), not_null(c_121));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm n_121 = NULL,o_121 = NULL;
  n_121 = t;
  m_121 :
  if(match_cons(n_121, sym_DynamicRules_1))
    {
      o_121 = ATgetArgument(n_121, 0);
      {
        ATerm r_121 = NULL,t_121 = NULL;
        ATerm s_121 = NULL;
        t = SSLgetAnnotations(not_null(n_121));
        {
          s_121 = t;
          if(((r_121 != NULL) && (r_121 != s_121)))
            _fail(s_121);
          else
            r_121 = s_121;
        }
        {
          t = not_null(o_121);
          {
            ATerm v_121 = NULL;
            t = p_74(t);
            {
              t_121 = t;
              {
                ATerm w_121 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(t_121)), not_null(r_121));
                {
                  w_121 = t;
                  if(((v_121 != NULL) && (v_121 != w_121)))
                    _fail(w_121);
                  else
                    v_121 = w_121;
                }
                t = not_null(v_121);
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
ATerm Scope_2 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  ATerm h_122 = NULL,i_122 = NULL,j_122 = NULL;
  h_122 = t;
  g_122 :
  if(match_cons(h_122, sym_Scope_2))
    {
      i_122 = ATgetArgument(h_122, 0);
      j_122 = ATgetArgument(h_122, 1);
      {
        ATerm n_122 = NULL,p_122 = NULL;
        ATerm o_122 = NULL;
        t = SSLgetAnnotations(not_null(h_122));
        {
          o_122 = t;
          if(((n_122 != NULL) && (n_122 != o_122)))
            _fail(o_122);
          else
            n_122 = o_122;
        }
        {
          t = not_null(i_122);
          {
            ATerm r_122 = NULL;
            t = j_71(t);
            {
              p_122 = t;
              {
                t = not_null(j_122);
                {
                  ATerm t_122 = NULL;
                  t = k_71(t);
                  {
                    r_122 = t;
                    {
                      ATerm u_122 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(p_122), not_null(r_122)), not_null(n_122));
                      {
                        u_122 = t;
                        if(((t_122 != NULL) && (t_122 != u_122)))
                          _fail(u_122);
                        else
                          t_122 = u_122;
                      }
                      t = not_null(t_122);
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
ATerm tboundin_3 (ATerm t, ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm b_110 (ATerm))
{
  ATerm l_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, b_110, z_109);
      LocalPopChoice(p_36);
    }
  else
    {
      t = l_36;
      t = DynamicRules_1(t, z_109);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm c_123 = NULL,d_123 = NULL;
  c_123 = t;
  b_123 :
  if(match_cons(c_123, sym_DynamicRules_1))
    {
      d_123 = ATgetArgument(c_123, 0);
      {
        t = not_null(d_123);
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
  ATerm k_123 = NULL,l_123 = NULL,m_123 = NULL,n_123 = NULL,o_123 = NULL,p_123 = NULL;
  n_123 = t;
  i_123 :
  if(match_cons(n_123, sym_LRule_1))
    {
      o_123 = ATgetArgument(n_123, 0);
      j_123 :
      if(match_cons(o_123, sym_Rule_3))
        {
          k_123 = ATgetArgument(o_123, 0);
          l_123 = ATgetArgument(o_123, 1);
          m_123 = ATgetArgument(o_123, 2);
          {
            t = not_null(k_123);
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
      if(match_cons(n_123, sym_Scope_2))
        {
          o_123 = ATgetArgument(n_123, 0);
          p_123 = ATgetArgument(n_123, 1);
          t = not_null(o_123);
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
  ATerm z_123 = NULL,a_124 = NULL;
  z_123 = t;
  y_123 :
  if(match_cons(z_123, sym_Var_1))
    {
      a_124 = ATgetArgument(z_123, 0);
      t = (ATerm) ATinsert(ATempty, not_null(a_124));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm v_94 (ATerm))
{
  ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL;
  f_124 = t;
  e_124 :
  if(match_cons(f_124, sym__2))
    {
      g_124 = ATgetArgument(f_124, 0);
      h_124 = ATgetArgument(f_124, 1);
      {
        t = not_null(g_124);
        {
          ATerm l_124 (ATerm t)
          {
            ATerm e_37 = t;
            int f_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_124);
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
                        t = not_null(h_124);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_94, n_6);
                      t = l_124(t);
                      LocalPopChoice(h_37);
                    }
                  else
                    {
                      t = g_37;
                      t = Cons_2(t, _id, l_124);
                    }
                }
              }
            return(t);
          }
          t = l_124(t);
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
ATerm crush_3 (ATerm t, ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm))
{
  ATerm q_124 = NULL;
  ATerm s_124 = NULL;
  q_124 = t;
  {
    ATerm t_124 = NULL;
    ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL;
    t = not_null(q_124);
    {
      t_124 = t;
      {
        t = SSL_explode_term(not_null(t_124));
        {
          v_124 = t;
          p_124 :
          if(match_cons(v_124, sym__2))
            {
              w_124 = ATgetArgument(v_124, 0);
              x_124 = ATgetArgument(v_124, 1);
              if(((s_124 != NULL) && (s_124 != x_124)))
                _fail(x_124);
              else
                s_124 = x_124;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_124);
      t = foldr_3(t, m_94, n_94, o_94);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL;
  d_125 = t;
  c_125 :
  if(match_cons(d_125, sym__2))
    {
      e_125 = ATgetArgument(d_125, 0);
      f_125 = ATgetArgument(d_125, 1);
      if(((e_125 != NULL) && (e_125 != f_125)))
        _fail(f_125);
      else
        e_125 = f_125;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm l_125 = NULL,m_125 = NULL,n_125 = NULL;
  l_125 = t;
  k_125 :
  if(((ATgetType(l_125) == AT_LIST) && !(ATisEmpty(l_125))))
    {
      m_125 = ATgetFirst((ATermList) l_125);
      n_125 = (ATerm) ATgetNext((ATermList) l_125);
      {
        t = a_95(t);
        {
          ATerm o_6 (ATerm t)
          {
            ATerm q_125 = NULL;
            q_125 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_125), not_null(q_125));
              t = z_94(t);
            }
            return(t);
          }
          t = fetch_1(t, o_6);
        }
        t = not_null(n_125);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL;
  w_125 = t;
  v_125 :
  if(match_cons(w_125, sym__2))
    {
      x_125 = ATgetArgument(w_125, 0);
      y_125 = ATgetArgument(w_125, 1);
      {
        t = not_null(x_125);
        {
          ATerm c_126 (ATerm t)
          {
            ATerm i_37 = t;
            int j_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(j_37);
              }
            else
              {
                t = i_37;
                {
                  ATerm k_37 = t;
                  int l_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_6 (ATerm t)
                      {
                        t = not_null(y_125);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_94, p_6);
                      t = c_126(t);
                      LocalPopChoice(l_37);
                    }
                  else
                    {
                      t = k_37;
                      t = Cons_2(t, _id, c_126);
                    }
                }
              }
            return(t);
          }
          t = c_126(t);
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
  ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL,k_126 = NULL;
  g_126 = t;
  e_126 :
  if(match_cons(g_126, sym__2))
    {
      h_126 = ATgetArgument(g_126, 0);
      i_126 = ATgetArgument(g_126, 1);
      f_126 :
      if(((ATgetType(i_126) == AT_LIST) && !(ATisEmpty(i_126))))
        {
          j_126 = ATgetFirst((ATermList) i_126);
          k_126 = (ATerm) ATgetNext((ATermList) i_126);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_126)), not_null(j_126)), not_null(k_126));
        }
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
  ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL;
  r_126 = t;
  q_126 :
  if(match_cons(r_126, sym__2))
    {
      s_126 = ATgetArgument(r_126, 0);
      t_126 = ATgetArgument(r_126, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_126)), not_null(s_126));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL;
  b_127 = t;
  y_126 :
  if(match_cons(b_127, sym__2))
    {
      c_127 = ATgetArgument(b_127, 0);
      f_127 = ATgetArgument(b_127, 1);
      z_126 :
      if(((ATgetType(c_127) == AT_LIST) && !(ATisEmpty(c_127))))
        {
          d_127 = ATgetFirst((ATermList) c_127);
          e_127 = (ATerm) ATgetNext((ATermList) c_127);
          a_127 :
          if(((ATgetType(f_127) == AT_LIST) && !(ATisEmpty(f_127))))
            {
              g_127 = ATgetFirst((ATermList) f_127);
              h_127 = (ATerm) ATgetNext((ATermList) f_127);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_127), not_null(g_127)), (ATerm) ATmakeAppl(sym__2, not_null(e_127), not_null(h_127)));
            }
          else
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
  ATerm r_127 = NULL,s_127 = NULL,t_127 = NULL;
  r_127 = t;
  o_127 :
  if(match_cons(r_127, sym__2))
    {
      s_127 = ATgetArgument(r_127, 0);
      t_127 = ATgetArgument(r_127, 1);
      p_127 :
      if(((ATgetType(s_127) == AT_LIST) && ATisEmpty(s_127)))
        {
          q_127 :
          if(((ATgetType(t_127) == AT_LIST) && ATisEmpty(t_127)))
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
ATerm genzip_4 (ATerm t, ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm b_91 (ATerm), ATerm c_91 (ATerm))
{
  ATerm v_127 (ATerm t)
  {
    ATerm o_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_90(t);
        LocalPopChoice(t_37);
      }
    else
      {
        t = o_37;
        {
          t = a_91(t);
          {
            t = _2(t, c_91, v_127);
            t = b_91(t);
          }
        }
      }
    return(t);
  }
  t = v_127(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_91 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_91);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm h_128 = NULL,i_128 = NULL,j_128 = NULL,k_128 = NULL,m_128 = NULL;
  h_128 = t;
  e_128 :
  if(((ATgetType(h_128) == AT_LIST) && !(ATisEmpty(h_128))))
    {
      i_128 = ATgetFirst((ATermList) h_128);
      m_128 = (ATerm) ATgetNext((ATermList) h_128);
      g_128 :
      if(match_cons(i_128, sym__2))
        {
          j_128 = ATgetArgument(i_128, 0);
          k_128 = ATgetArgument(i_128, 1);
          {
            ATerm q_128 = NULL,r_128 = NULL,x_128 = NULL,d_129 = NULL;
            ATerm u_37;
            u_37 = t;
            {
              ATerm s_128 = NULL;
              ATerm u_128 = NULL,v_128 = NULL,w_128 = NULL;
              t = not_null(k_128);
              {
                s_128 = t;
                {
                  t = SSL_explode_term(not_null(s_128));
                  {
                    u_128 = t;
                    z_127 :
                    if(match_cons(u_128, sym__2))
                      {
                        v_128 = ATgetArgument(u_128, 0);
                        w_128 = ATgetArgument(u_128, 1);
                        {
                          if(((q_128 != NULL) && (q_128 != v_128)))
                            _fail(v_128);
                          else
                            q_128 = v_128;
                          if(((r_128 != NULL) && (r_128 != w_128)))
                            _fail(w_128);
                          else
                            r_128 = w_128;
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
                ATerm y_128 = NULL;
                ATerm a_129 = NULL,b_129 = NULL,c_129 = NULL;
                t = not_null(j_128);
                {
                  y_128 = t;
                  {
                    t = SSL_explode_term(not_null(y_128));
                    {
                      a_129 = t;
                      c_128 :
                      if(match_cons(a_129, sym__2))
                        {
                          b_129 = ATgetArgument(a_129, 0);
                          c_129 = ATgetArgument(a_129, 1);
                          {
                            if(((q_128 != NULL) && (q_128 != b_129)))
                              _fail(b_129);
                            else
                              q_128 = b_129;
                            if(((x_128 != NULL) && (x_128 != c_129)))
                              _fail(c_129);
                            else
                              x_128 = c_129;
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
                ATerm e_129 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_128), not_null(r_128));
                {
                  t = zip_1(t, _id);
                  {
                    e_129 = t;
                    if(((d_129 != NULL) && (d_129 != e_129)))
                      _fail(e_129);
                    else
                      d_129 = e_129;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_129), not_null(m_128));
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
  ATerm p_129 = NULL,q_129 = NULL,r_129 = NULL,u_129 = NULL,v_129 = NULL;
  p_129 = t;
  m_129 :
  if(((ATgetType(p_129) == AT_LIST) && !(ATisEmpty(p_129))))
    {
      q_129 = ATgetFirst((ATermList) p_129);
      v_129 = (ATerm) ATgetNext((ATermList) p_129);
      n_129 :
      if(match_cons(q_129, sym__2))
        {
          r_129 = ATgetArgument(q_129, 0);
          u_129 = ATgetArgument(q_129, 1);
          {
            ATerm x_129 = NULL;
            if(((r_129 != NULL) && (r_129 != u_129)))
              _fail(u_129);
            else
              r_129 = u_129;
            {
              if(((x_129 != NULL) && (x_129 != v_129)))
                _fail(v_129);
              else
                x_129 = v_129;
              t = not_null(x_129);
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
ATerm while_not_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  ATerm z_129 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_82(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        {
          t = n_82(t);
          t = z_129(t);
        }
      }
    return(t);
  }
  t = z_129(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  t = p_82(t);
  t = while_not_2(t, q_82, r_82);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 (ATerm t)
      {
        ATerm b_130 = NULL;
        b_130 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_130));
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
              ATerm j_38 = t;
              int k_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(k_38);
                }
              else
                {
                  t = j_38;
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
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_130 (ATerm t)
  {
    ATerm o_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_108(t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = o_38;
        {
          ATerm s_38 = t;
          int v_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_130 = NULL;
              ATerm w_38;
              w_38 = t;
              {
                ATerm g_130 = NULL;
                t = p_108(t);
                {
                  g_130 = t;
                  if(((f_130 != NULL) && (f_130 != g_130)))
                    _fail(g_130);
                  else
                    f_130 = g_130;
                }
              }
              t = w_38;
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm w_6 (ATerm t)
                  {
                    t = not_null(f_130);
                    return(t);
                  }
                  t = split_2(t, h_130, w_6);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = q_108(t, u_6, h_130, v_6);
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
              t = s_38;
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
                t = crush_3(t, z_6, a_7, h_130);
              }
            }
        }
      }
    return(t);
  }
  t = h_130(t);
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
  ATerm n_130 = NULL,o_130 = NULL,p_130 = NULL,q_130 = NULL,r_130 = NULL;
  n_130 = t;
  l_130 :
  if(match_cons(n_130, sym_LRule_1))
    {
      o_130 = ATgetArgument(n_130, 0);
      m_130 :
      if(match_cons(o_130, sym_Rule_3))
        {
          p_130 = ATgetArgument(o_130, 0);
          q_130 = ATgetArgument(o_130, 1);
          r_130 = ATgetArgument(o_130, 2);
          {
            ATerm x_130 = NULL;
            ATerm y_130 = NULL;
            t = not_null(p_130);
            {
              t = tvars_0(t);
              {
                y_130 = t;
                if(((x_130 != NULL) && (x_130 != y_130)))
                  _fail(y_130);
                else
                  x_130 = y_130;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(x_130), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_130), not_null(q_130), not_null(r_130))));
          }
        }
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
ATerm bottomup_1 (ATerm t, ATerm w_82 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    t = bottomup_1(t, w_82);
    return(t);
  }
  t = _all(t, c_7);
  t = w_82(t);
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
        ATerm b_39 = t;
        int c_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefLRule_0(t);
            LocalPopChoice(c_39);
          }
        else
          {
            t = b_39;
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
  ATerm d_131 = NULL,e_131 = NULL,f_131 = NULL;
  d_131 = t;
  c_131 :
  if(((ATgetType(d_131) == AT_LIST) && !(ATisEmpty(d_131))))
    {
      e_131 = ATgetFirst((ATermList) d_131);
      f_131 = (ATerm) ATgetNext((ATermList) d_131);
      t = not_null(e_131);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL;
  l_131 = t;
  k_131 :
  if(match_cons(l_131, sym__2))
    {
      m_131 = ATgetArgument(l_131, 0);
      n_131 = ATgetArgument(l_131, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_131), not_null(n_131));
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
ATerm rewrite_1 (ATerm t, ATerm s_99 (ATerm))
{
  ATerm u_131 = NULL;
  ATerm w_131 = NULL;
  u_131 = t;
  {
    ATerm x_131 = NULL;
    t = term_k_39;
    {
      t = s_99(t);
      {
        x_131 = t;
        if(((w_131 != NULL) && (w_131 != x_131)))
          _fail(x_131);
        else
          w_131 = x_131;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_131), not_null(u_131));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm VarToConst_0 (ATerm t)
{
  ATerm j_132 = NULL,k_132 = NULL;
  j_132 = t;
  i_132 :
  if(match_cons(j_132, sym_Var_1))
    {
      k_132 = ATgetArgument(j_132, 0);
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_132 = NULL,o_132 = NULL;
            t = not_null(j_132);
            {
              ATerm e_7 (ATerm t)
              {
                t = term_n_39;
                return(t);
              }
              t = rewrite_1(t, e_7);
              {
                n_132 = t;
                c_132 :
                if(match_cons(n_132, sym_Defined_1))
                  {
                    o_132 = ATgetArgument(n_132, 0);
                    d_132 :
                    if(!(match_string(o_132, "f_0")))
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
            t = (ATerm) ATmakeAppl(sym_Op_2, not_null(k_132), (ATerm) ATempty);
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            {
              ATerm r_132 = NULL,s_132 = NULL;
              t = not_null(j_132);
              {
                ATerm f_7 (ATerm t)
                {
                  t = term_n_39;
                  return(t);
                }
                t = rewrite_1(t, f_7);
                {
                  r_132 = t;
                  g_132 :
                  if(match_cons(r_132, sym_Defined_1))
                    {
                      s_132 = ATgetArgument(r_132, 0);
                      h_132 :
                      if(!(match_string(s_132, "b_0")))
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
              t = (ATerm) ATmakeAppl(sym_Op_2, not_null(k_132), (ATerm) ATempty);
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
ATerm alltd_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm v_132 (ATerm t)
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_84(t);
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = _all(t, v_132);
      }
    return(t);
  }
  t = v_132(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm q_99 (ATerm))
{
  ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL;
  b_133 = t;
  a_133 :
  if(match_cons(b_133, sym__2))
    {
      c_133 = ATgetArgument(b_133, 0);
      d_133 = ATgetArgument(b_133, 1);
      {
        ATerm g_133 = NULL,h_133 = NULL,i_133 = NULL;
        ATerm q_39;
        q_39 = t;
        {
          ATerm j_133 = NULL;
          ATerm k_133 = NULL,l_133 = NULL,m_133 = NULL;
          t = q_99(t);
          {
            j_133 = t;
            {
              if(((g_133 != NULL) && (g_133 != j_133)))
                _fail(j_133);
              else
                g_133 = j_133;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(g_133), not_null(c_133), not_null(d_133));
                {
                  t = table_push_0(t);
                  {
                    ATerm r_39 = t;
                    int s_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_133), term_t_39);
                        t = table_get_0(t);
                        LocalPopChoice(s_39);
                      }
                    else
                      {
                        t = r_39;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      k_133 = t;
                      z_132 :
                      if(((ATgetType(k_133) == AT_LIST) && !(ATisEmpty(k_133))))
                        {
                          l_133 = ATgetFirst((ATermList) k_133);
                          m_133 = (ATerm) ATgetNext((ATermList) k_133);
                          {
                            if(((h_133 != NULL) && (h_133 != l_133)))
                              _fail(l_133);
                            else
                              h_133 = l_133;
                            {
                              if(((i_133 != NULL) && (i_133 != m_133)))
                                _fail(m_133);
                              else
                                i_133 = m_133;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(g_133), term_t_39, (ATerm) ATinsert(CheckATermList(not_null(i_133)), (ATerm) ATinsert(CheckATermList(not_null(h_133)), not_null(c_133))));
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
  ATerm v_133 = NULL,w_133 = NULL,x_133 = NULL,y_133 = NULL,z_133 = NULL;
  w_133 = t;
  s_133 :
  if(match_cons(w_133, sym_Overlay_3))
    {
      x_133 = ATgetArgument(w_133, 0);
      y_133 = ATgetArgument(w_133, 1);
      v_133 = ATgetArgument(w_133, 2);
      t_133 :
      if(((ATgetType(y_133) == AT_LIST) && ATisEmpty(y_133)))
        {
          {
            ATerm u_39;
            u_39 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_133)), term_y_39);
              {
                ATerm g_7 (ATerm t)
                {
                  t = term_n_39;
                  return(t);
                }
                t = assert_1(t, g_7);
              }
            }
            t = u_39;
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(w_133, sym_OpDecl_2))
        {
          x_133 = ATgetArgument(w_133, 0);
          y_133 = ATgetArgument(w_133, 1);
          u_133 :
          if(match_cons(y_133, sym_ConstType_1))
            {
              z_133 = ATgetArgument(y_133, 0);
              {
                ATerm d_40;
                d_40 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(x_133)), term_m_40);
                  {
                    ATerm h_7 (ATerm t)
                    {
                      t = term_n_39;
                      return(t);
                    }
                    t = assert_1(t, h_7);
                  }
                }
                t = d_40;
              }
            }
          else
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
ATerm Overlays_1 (ATerm t, ATerm r_73 (ATerm))
{
  ATerm l_134 = NULL,m_134 = NULL;
  l_134 = t;
  k_134 :
  if(match_cons(l_134, sym_Overlays_1))
    {
      m_134 = ATgetArgument(l_134, 0);
      {
        ATerm p_134 = NULL,r_134 = NULL;
        ATerm q_134 = NULL;
        t = SSLgetAnnotations(not_null(l_134));
        {
          q_134 = t;
          if(((p_134 != NULL) && (p_134 != q_134)))
            _fail(q_134);
          else
            p_134 = q_134;
        }
        {
          t = not_null(m_134);
          {
            ATerm t_134 = NULL;
            t = r_73(t);
            {
              r_134 = t;
              {
                ATerm u_134 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(r_134)), not_null(p_134));
                {
                  u_134 = t;
                  if(((t_134 != NULL) && (t_134 != u_134)))
                    _fail(u_134);
                  else
                    t_134 = u_134;
                }
                t = not_null(t_134);
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
ATerm Constructors_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm e_135 = NULL,f_135 = NULL;
  e_135 = t;
  d_135 :
  if(match_cons(e_135, sym_Constructors_1))
    {
      f_135 = ATgetArgument(e_135, 0);
      {
        ATerm i_135 = NULL,k_135 = NULL;
        ATerm j_135 = NULL;
        t = SSLgetAnnotations(not_null(e_135));
        {
          j_135 = t;
          if(((i_135 != NULL) && (i_135 != j_135)))
            _fail(j_135);
          else
            i_135 = j_135;
        }
        {
          t = not_null(f_135);
          {
            ATerm m_135 = NULL;
            t = m_73(t);
            {
              k_135 = t;
              {
                ATerm n_135 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Constructors_1, not_null(k_135)), not_null(i_135));
                {
                  n_135 = t;
                  if(((m_135 != NULL) && (m_135 != n_135)))
                    _fail(n_135);
                  else
                    m_135 = n_135;
                }
                t = not_null(m_135);
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
  ATerm u_135 = NULL,v_135 = NULL,w_135 = NULL;
  u_135 = t;
  t_135 :
  if(((ATgetType(u_135) == AT_LIST) && !(ATisEmpty(u_135))))
    {
      v_135 = ATgetFirst((ATermList) u_135);
      w_135 = (ATerm) ATgetNext((ATermList) u_135);
      t = not_null(w_135);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL;
  e_136 = t;
  d_136 :
  if(match_cons(e_136, sym__2))
    {
      f_136 = ATgetArgument(e_136, 0);
      g_136 = ATgetArgument(e_136, 1);
      {
        ATerm n_40;
        n_40 = t;
        {
          ATerm j_136 = NULL;
          ATerm k_136 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_136), not_null(g_136));
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
              k_136 = t;
              if(((j_136 != NULL) && (j_136 != k_136)))
                _fail(k_136);
              else
                j_136 = k_136;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_136), not_null(g_136), not_null(j_136));
            t = table_put_0(t);
          }
        }
        t = n_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm n_99 (ATerm))
{
  ATerm r_136 = NULL,s_136 = NULL,t_136 = NULL;
  ATerm n_41;
  n_41 = t;
  {
    ATerm u_136 = NULL;
    ATerm v_136 = NULL,x_136 = NULL,y_136 = NULL;
    t = n_99(t);
    {
      u_136 = t;
      {
        if(((t_136 != NULL) && (t_136 != u_136)))
          _fail(u_136);
        else
          t_136 = u_136;
        {
          ATerm o_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_136), term_t_39);
              t = table_get_0(t);
              LocalPopChoice(p_41);
            }
          else
            {
              t = o_41;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_136 = t;
            q_136 :
            if(((ATgetType(v_136) == AT_LIST) && !(ATisEmpty(v_136))))
              {
                x_136 = ATgetFirst((ATermList) v_136);
                y_136 = (ATerm) ATgetNext((ATermList) v_136);
                {
                  if(((s_136 != NULL) && (s_136 != x_136)))
                    _fail(x_136);
                  else
                    s_136 = x_136;
                  {
                    if(((r_136 != NULL) && (r_136 != y_136)))
                      _fail(y_136);
                    else
                      r_136 = y_136;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_136), term_t_39, not_null(r_136));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_136);
                          {
                            ATerm i_7 (ATerm t)
                            {
                              ATerm z_136 = NULL;
                              z_136 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_136), not_null(z_136));
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
ATerm restore_always_2 (ATerm t, ATerm t_81 (ATerm), ATerm u_81 (ATerm))
{
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_81(t);
      t = u_81(t);
      LocalPopChoice(r_41);
    }
  else
    {
      t = q_41;
      {
        t = u_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm m_99 (ATerm))
{
  ATerm g_137 = NULL;
  ATerm s_41;
  s_41 = t;
  {
    ATerm h_137 = NULL;
    ATerm i_137 = NULL;
    t = m_99(t);
    {
      h_137 = t;
      {
        if(((g_137 != NULL) && (g_137 != h_137)))
          _fail(h_137);
        else
          g_137 = h_137;
        {
          ATerm j_137 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_137), term_t_39);
          {
            ATerm t_41 = t;
            int u_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_41);
              }
            else
              {
                t = t_41;
                t = (ATerm) ATempty;
              }
            {
              j_137 = t;
              if(((i_137 != NULL) && (i_137 != j_137)))
                _fail(j_137);
              else
                i_137 = j_137;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_137), term_t_39, (ATerm) ATinsert(CheckATermList(not_null(i_137)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_41;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm o_99 (ATerm), ATerm p_99 (ATerm))
{
  t = begin_scope_1(t, o_99);
  {
    ATerm j_7 (ATerm t)
    {
      t = end_scope_1(t, o_99);
      return(t);
    }
    t = restore_always_2(t, p_99, j_7);
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
        ATerm v_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_41 = t;
            int d_42 = stack_ptr;
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
                LocalPopChoice(d_42);
              }
            else
              {
                t = y_41;
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
            LocalPopChoice(w_41);
          }
        else
          {
            t = v_41;
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
  ATerm o_137 = NULL,p_137 = NULL;
  o_137 = t;
  n_137 :
  if(match_cons(o_137, sym_Rules_1))
    {
      p_137 = ATgetArgument(o_137, 0);
      t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_137));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm p_96 (ATerm))
{
  ATerm e_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_42);
    }
  else
    {
      t = e_42;
      {
        ATerm k_42 = t;
        int l_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_7 (ATerm t)
            {
              t = filter_1(t, p_96);
              return(t);
            }
            t = Cons_2(t, p_96, s_7);
            LocalPopChoice(l_42);
          }
        else
          {
            t = k_42;
            {
              ATerm u_137 = NULL,v_137 = NULL,w_137 = NULL;
              u_137 = t;
              t_137 :
              if(((ATgetType(u_137) == AT_LIST) && !(ATisEmpty(u_137))))
                {
                  v_137 = ATgetFirst((ATermList) u_137);
                  w_137 = (ATerm) ATgetNext((ATermList) u_137);
                  {
                    t = not_null(w_137);
                    t = filter_1(t, p_96);
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
  ATerm e_138 = NULL,f_138 = NULL;
  e_138 = t;
  d_138 :
  if(match_cons(e_138, sym_Signature_1))
    {
      f_138 = ATgetArgument(e_138, 0);
      {
        ATerm h_138 = NULL;
        ATerm l_138 = NULL;
        t = not_null(f_138);
        {
          ATerm t_7 (ATerm t)
          {
            ATerm i_138 = NULL,j_138 = NULL;
            i_138 = t;
            b_138 :
            if(match_cons(i_138, sym_Constructors_1))
              {
                j_138 = ATgetArgument(i_138, 0);
                t = not_null(j_138);
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
              l_138 = t;
              if(((h_138 != NULL) && (h_138 != l_138)))
                _fail(l_138);
              else
                h_138 = l_138;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Constructors_1, not_null(h_138));
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
  ATerm f_139 = NULL,g_139 = NULL,h_139 = NULL;
  f_139 = t;
  e_139 :
  if(match_cons(f_139, sym__2))
    {
      g_139 = ATgetArgument(f_139, 0);
      h_139 = ATgetArgument(f_139, 1);
      {
        ATerm k_139 = NULL,l_139 = NULL;
        ATerm m_139 = NULL;
        ATerm o_139 = NULL,p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL;
        t = not_null(g_139);
        {
          m_139 = t;
          {
            t = SSL_explode_term(not_null(m_139));
            {
              o_139 = t;
              s_138 :
              if(match_cons(o_139, sym__2))
                {
                  p_139 = ATgetArgument(o_139, 0);
                  q_139 = ATgetArgument(o_139, 1);
                  t_138 :
                  if(((ATgetType(q_139) == AT_LIST) && !(ATisEmpty(q_139))))
                    {
                      r_139 = ATgetFirst((ATermList) q_139);
                      s_139 = (ATerm) ATgetNext((ATermList) q_139);
                      u_138 :
                      if(((ATgetType(s_139) == AT_LIST) && ATisEmpty(s_139)))
                        {
                          {
                            if(((k_139 != NULL) && (k_139 != p_139)))
                              _fail(p_139);
                            else
                              k_139 = p_139;
                            if(((l_139 != NULL) && (l_139 != r_139)))
                              _fail(r_139);
                            else
                              l_139 = r_139;
                          }
                        }
                      else
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
          t = not_null(h_139);
          {
            ATerm u_7 (ATerm t)
            {
              ATerm t_139 = NULL;
              ATerm v_139 = NULL,d_140 = NULL,f_140 = NULL,h_140 = NULL;
              t_139 = t;
              {
                ATerm m_42;
                m_42 = t;
                {
                  ATerm w_139 = NULL;
                  ATerm y_139 = NULL,z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL;
                  t = not_null(t_139);
                  {
                    w_139 = t;
                    {
                      t = SSL_explode_term(not_null(w_139));
                      {
                        y_139 = t;
                        y_138 :
                        if(match_cons(y_139, sym__2))
                          {
                            z_139 = ATgetArgument(y_139, 0);
                            a_140 = ATgetArgument(y_139, 1);
                            z_138 :
                            if(((ATgetType(a_140) == AT_LIST) && !(ATisEmpty(a_140))))
                              {
                                b_140 = ATgetFirst((ATermList) a_140);
                                c_140 = (ATerm) ATgetNext((ATermList) a_140);
                                a_139 :
                                if(((ATgetType(c_140) == AT_LIST) && ATisEmpty(c_140)))
                                  {
                                    {
                                      if(((k_139 != NULL) && (k_139 != z_139)))
                                        _fail(z_139);
                                      else
                                        k_139 = z_139;
                                      if(((v_139 != NULL) && (v_139 != b_140)))
                                        _fail(b_140);
                                      else
                                        v_139 = b_140;
                                    }
                                  }
                                else
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
                  ATerm n_42;
                  n_42 = t;
                  {
                    ATerm e_140 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_139), not_null(l_139));
                    {
                      ATerm o_42 = t;
                      int u_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = conc_two_lists_0(t);
                          LocalPopChoice(u_42);
                        }
                      else
                        {
                          t = o_42;
                          t = conc_more_lists_0(t);
                        }
                      {
                        e_140 = t;
                        if(((d_140 != NULL) && (d_140 != e_140)))
                          _fail(e_140);
                        else
                          d_140 = e_140;
                      }
                    }
                  }
                  t = n_42;
                  {
                    ATerm v_42;
                    v_42 = t;
                    {
                      ATerm g_140 = NULL;
                      t = (ATerm) ATinsert(ATempty, not_null(d_140));
                      {
                        g_140 = t;
                        if(((f_140 != NULL) && (f_140 != g_140)))
                          _fail(g_140);
                        else
                          f_140 = g_140;
                      }
                    }
                    t = v_42;
                    {
                      t = SSL_mkterm(not_null(k_139), not_null(f_140));
                      {
                        h_140 = t;
                        t = not_null(h_140);
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
ATerm foldr_3 (ATerm t, ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm q_95 (ATerm))
{
  ATerm w_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_95(t);
      LocalPopChoice(z_42);
    }
  else
    {
      t = w_42;
      {
        ATerm w_140 = NULL,x_140 = NULL,y_140 = NULL;
        w_140 = t;
        v_140 :
        if(((ATgetType(w_140) == AT_LIST) && !(ATisEmpty(w_140))))
          {
            x_140 = ATgetFirst((ATermList) w_140);
            y_140 = (ATerm) ATgetNext((ATermList) w_140);
            {
              ATerm b_141 = NULL,d_141 = NULL;
              ATerm a_43;
              a_43 = t;
              {
                ATerm c_141 = NULL;
                t = not_null(x_140);
                {
                  t = q_95(t);
                  {
                    c_141 = t;
                    if(((b_141 != NULL) && (b_141 != c_141)))
                      _fail(c_141);
                    else
                      b_141 = c_141;
                  }
                }
              }
              t = a_43;
              {
                ATerm e_141 = NULL;
                t = not_null(y_140);
                {
                  t = foldr_3(t, o_95, p_95, q_95);
                  {
                    e_141 = t;
                    if(((d_141 != NULL) && (d_141 != e_141)))
                      _fail(e_141);
                    else
                      d_141 = e_141;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_141), not_null(d_141));
                  t = p_95(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_43), term_c_43), term_b_43);
      return(t);
    }
    ATerm x_7 (ATerm t)
    {
      ATerm j_43 = t;
      int k_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_43 = t;
          int m_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = GetConstructors_0(t);
              LocalPopChoice(m_43);
            }
          else
            {
              t = l_43;
              t = RulesToStrategies_0(t);
            }
          LocalPopChoice(k_43);
        }
      else
        {
          t = j_43;
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
      ATerm p_43 = t;
      int q_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = HL_0(t);
          LocalPopChoice(q_43);
        }
      else
        {
          t = p_43;
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
              ATerm r_43 = t;
              int s_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(s_43);
                }
              else
                {
                  t = r_43;
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
                  ATerm k_141 = NULL,l_141 = NULL;
                  k_141 = t;
                  j_141 :
                  if(match_cons(k_141, sym_Constructors_1))
                    {
                      l_141 = ATgetArgument(k_141, 0);
                      t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, not_null(l_141))));
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
    t = term_t_43;
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
        ATerm w_43;
        w_43 = t;
        t = spec_use_def_0(t);
        t = w_43;
        {
          ATerm e_8 (ATerm t)
          {
            t = term_x_43;
            return(t);
          }
          t = timing_1(t, e_8);
          {
            t = ExpandOverlays_0(t);
            {
              ATerm f_8 (ATerm t)
              {
                t = term_y_43;
                return(t);
              }
              t = timing_1(t, f_8);
              {
                t = CheckConstructors_0(t);
                {
                  ATerm g_8 (ATerm t)
                  {
                    t = term_z_43;
                    return(t);
                  }
                  t = timing_1(t, g_8);
                  {
                    t = RulesToSdefs_0(t);
                    {
                      ATerm h_8 (ATerm t)
                      {
                        t = term_a_44;
                        return(t);
                      }
                      t = timing_1(t, h_8);
                      {
                        t = DesugarListMatching_0(t);
                        {
                          ATerm i_8 (ATerm t)
                          {
                            t = term_b_44;
                            return(t);
                          }
                          t = timing_1(t, i_8);
                          {
                            t = strename_0(t);
                            {
                              ATerm j_8 (ATerm t)
                              {
                                t = term_c_44;
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
ATerm _2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL;
  u_141 = t;
  t_141 :
  if(match_cons(u_141, sym__2))
    {
      v_141 = ATgetArgument(u_141, 0);
      w_141 = ATgetArgument(u_141, 1);
      {
        ATerm a_142 = NULL,c_142 = NULL;
        ATerm b_142 = NULL;
        t = SSLgetAnnotations(not_null(u_141));
        {
          b_142 = t;
          if(((a_142 != NULL) && (a_142 != b_142)))
            _fail(b_142);
          else
            a_142 = b_142;
        }
        {
          t = not_null(v_141);
          {
            ATerm e_142 = NULL;
            t = q_69(t);
            {
              c_142 = t;
              {
                t = not_null(w_141);
                {
                  ATerm g_142 = NULL;
                  t = r_69(t);
                  {
                    e_142 = t;
                    {
                      ATerm h_142 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(c_142), not_null(e_142)), not_null(a_142));
                      {
                        h_142 = t;
                        if(((g_142 != NULL) && (g_142 != h_142)))
                          _fail(h_142);
                        else
                          g_142 = h_142;
                      }
                      t = not_null(g_142);
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
  ATerm p_142 = NULL;
  ATerm d_44;
  d_44 = t;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm q_142 = NULL,r_142 = NULL;
      q_142 = t;
      o_142 :
      if(match_cons(q_142, sym_Program_1))
        {
          r_142 = ATgetArgument(q_142, 0);
          if(((p_142 != NULL) && (p_142 != r_142)))
            _fail(r_142);
          else
            p_142 = r_142;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, n_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_44), not_null(p_142)), term_f_44));
      {
        t = printnl_0(t);
        {
          t = term_k_23;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_44;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_142 = NULL,w_142 = NULL,x_142 = NULL;
  v_142 = t;
  u_142 :
  if(match_cons(v_142, sym__2))
    {
      w_142 = ATgetArgument(v_142, 0);
      x_142 = ATgetArgument(v_142, 1);
      {
        ATerm o_44;
        o_44 = t;
        t = SSL_printnl(not_null(w_142), not_null(x_142));
        t = o_44;
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
  ATerm c_143 = NULL;
  c_143 = t;
  t = SSL_implode_string(not_null(c_143));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm h_143 = NULL,i_143 = NULL,j_143 = NULL;
        h_143 = t;
        g_143 :
        if(((ATgetType(h_143) == AT_LIST) && !(ATisEmpty(h_143))))
          {
            i_143 = ATgetFirst((ATermList) h_143);
            j_143 = (ATerm) ATgetNext((ATermList) h_143);
            {
              t = not_null(i_143);
              {
                ATerm o_8 (ATerm t)
                {
                  t = not_null(j_143);
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
  ATerm t_143 = NULL;
  ATerm v_143 = NULL;
  t_143 = t;
  {
    ATerm w_143 = NULL;
    ATerm y_143 = NULL,z_143 = NULL,a_144 = NULL;
    t = not_null(t_143);
    {
      w_143 = t;
      {
        t = SSL_explode_term(not_null(w_143));
        {
          y_143 = t;
          r_143 :
          if(match_cons(y_143, sym__2))
            {
              z_143 = ATgetArgument(y_143, 0);
              a_144 = ATgetArgument(y_143, 1);
              s_143 :
              if(match_string(z_143, ""))
                {
                  if(((v_143 != NULL) && (v_143 != a_144)))
                    _fail(a_144);
                  else
                    v_143 = a_144;
                }
              else
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
      t = not_null(v_143);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_89 (ATerm))
{
  ATerm e_144 (ATerm t)
  {
    ATerm r_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_144);
        LocalPopChoice(w_44);
      }
    else
      {
        t = r_44;
        {
          t = Nil_0(t);
          t = n_89(t);
        }
      }
    return(t);
  }
  t = e_144(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL;
  h_144 = t;
  g_144 :
  if(match_cons(h_144, sym__2))
    {
      i_144 = ATgetArgument(h_144, 0);
      j_144 = ATgetArgument(h_144, 1);
      {
        t = not_null(i_144);
        {
          ATerm p_8 (ATerm t)
          {
            t = not_null(j_144);
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
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_44);
    }
  else
    {
      t = x_44;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_144 = NULL;
  o_144 = t;
  t = SSL_explode_string(not_null(o_144));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_45);
      }
    else
      {
        t = z_44;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm b_45;
  b_45 = t;
  {
    ATerm t_144 = NULL,v_144 = NULL;
    ATerm c_45;
    c_45 = t;
    {
      ATerm u_144 = NULL;
      t = x_99(t);
      {
        u_144 = t;
        if(((t_144 != NULL) && (t_144 != u_144)))
          _fail(u_144);
        else
          t_144 = u_144;
      }
    }
    t = c_45;
    {
      ATerm w_144 = NULL;
      w_144 = t;
      if(((v_144 != NULL) && (v_144 != w_144)))
        _fail(w_144);
      else
        v_144 = w_144;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_144)), not_null(t_144)));
        t = printnl_0(t);
      }
    }
  }
  t = b_45;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_145 = NULL;
  a_145 = t;
  t = SSL_is_string(not_null(a_145));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
      {
        ATerm f_45 = t;
        int g_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              ATerm h_45 = t;
              int i_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(i_45);
                }
              else
                {
                  t = h_45;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, q_8);
            LocalPopChoice(g_45);
          }
        else
          {
            t = f_45;
            {
              ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL;
              j_145 = t;
              i_145 :
              if(match_cons(j_145, sym_Path_1))
                {
                  k_145 = ATgetArgument(j_145, 0);
                  t = not_null(k_145);
                }
              else
                {
                  if(match_cons(j_145, sym_Var_1))
                    {
                      k_145 = ATgetArgument(j_145, 0);
                      {
                        t = not_null(k_145);
                        {
                          ATerm j_45 = t;
                          int k_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(k_45);
                            }
                          else
                            {
                              t = j_45;
                              {
                                ATerm r_8 (ATerm t)
                                {
                                  t = term_s_45;
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
                      if(match_cons(j_145, sym_Prefix_2))
                        {
                          k_145 = ATgetArgument(j_145, 0);
                          l_145 = ATgetArgument(j_145, 1);
                          {
                            ATerm q_145 = NULL,s_145 = NULL;
                            ATerm t_45;
                            t_45 = t;
                            {
                              ATerm r_145 = NULL;
                              t = not_null(k_145);
                              {
                                t = eval_config_0(t);
                                {
                                  r_145 = t;
                                  if(((q_145 != NULL) && (q_145 != r_145)))
                                    _fail(r_145);
                                  else
                                    q_145 = r_145;
                                }
                              }
                            }
                            t = t_45;
                            {
                              ATerm t_145 = NULL;
                              t = not_null(l_145);
                              {
                                t = eval_config_0(t);
                                {
                                  t_145 = t;
                                  if(((s_145 != NULL) && (s_145 != t_145)))
                                    _fail(t_145);
                                  else
                                    s_145 = t_145;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_145), not_null(s_145));
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
  ATerm b_146 = NULL;
  b_146 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_45, not_null(b_146));
    {
      t = table_get_0(t);
      {
        ATerm v_45 = t;
        int w_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm x_45;
              x_45 = t;
              {
                ATerm d_146 = NULL;
                ATerm e_146 = NULL;
                e_146 = t;
                if(((d_146 != NULL) && (d_146 != e_146)))
                  _fail(e_146);
                else
                  d_146 = e_146;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_45, not_null(b_146), not_null(d_146));
                  t = table_put_0(t);
                }
              }
              t = x_45;
            }
            LocalPopChoice(w_45);
          }
        else
          {
            t = v_45;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_102 (ATerm))
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_46;
      a_46 = t;
      {
        ATerm i_146 = NULL;
        ATerm j_146 = NULL;
        t = term_d_17;
        {
          t = get_config_0(t);
          {
            j_146 = t;
            if(((i_146 != NULL) && (i_146 != j_146)))
              _fail(j_146);
            else
              i_146 = j_146;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_146), term_b_46);
          t = geq_0(t);
        }
      }
      t = a_46;
      t = u_102(t);
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_146 = NULL,o_146 = NULL,p_146 = NULL;
  n_146 = t;
  m_146 :
  if(match_cons(n_146, sym__2))
    {
      o_146 = ATgetArgument(n_146, 0);
      p_146 = ATgetArgument(n_146, 1);
      t = SSL_WriteToTextFile(not_null(o_146), not_null(p_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_146 = NULL,w_146 = NULL,x_146 = NULL;
  v_146 = t;
  u_146 :
  if(match_cons(v_146, sym__2))
    {
      w_146 = ATgetArgument(v_146, 0);
      x_146 = ATgetArgument(v_146, 1);
      t = SSL_WriteToBinaryFile(not_null(w_146), not_null(x_146));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_147 = NULL;
  ATerm c_46;
  c_46 = t;
  {
    ATerm s_8 (ATerm t)
    {
      ATerm d_46 = t;
      int h_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_8 (ATerm t)
          {
            ATerm g_147 = NULL,h_147 = NULL;
            g_147 = t;
            c_147 :
            if(match_cons(g_147, sym_Output_1))
              {
                h_147 = ATgetArgument(g_147, 0);
                if(((f_147 != NULL) && (f_147 != h_147)))
                  _fail(h_147);
                else
                  f_147 = h_147;
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
          t = d_46;
          {
            ATerm i_147 = NULL;
            t = term_i_46;
            {
              i_147 = t;
              if(((f_147 != NULL) && (f_147 != i_147)))
                _fail(i_147);
              else
                f_147 = i_147;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_8, _id);
  }
  t = c_46;
  {
    ATerm u_8 (ATerm t)
    {
      ATerm v_8 (ATerm t)
      {
        t = not_null(f_147);
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
              ATerm j_147 = NULL;
              j_147 = t;
              e_147 :
              if(!(match_cons(j_147, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm b_101 (ATerm))
{
  ATerm p_147 = NULL,r_147 = NULL,s_147 = NULL,t_147 = NULL;
  ATerm l_46;
  l_46 = t;
  t = dtime_0(t);
  t = l_46;
  {
    t = b_101(t);
    {
      ATerm m_46;
      m_46 = t;
      {
        ATerm q_147 = NULL;
        t = dtime_0(t);
        {
          q_147 = t;
          if(((p_147 != NULL) && (p_147 != q_147)))
            _fail(q_147);
          else
            p_147 = q_147;
        }
      }
      t = m_46;
      {
        r_147 = t;
        o_147 :
        if(match_cons(r_147, sym__2))
          {
            s_147 = ATgetArgument(r_147, 0);
            t_147 = ATgetArgument(r_147, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_147)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_147))), not_null(t_147));
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
  ATerm z_147 = NULL;
  z_147 = t;
  t = SSL_ReadFromFile(not_null(z_147));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_97 (ATerm), ATerm c_97 (ATerm))
{
  ATerm e_148 = NULL,g_148 = NULL;
  ATerm n_46;
  n_46 = t;
  {
    ATerm f_148 = NULL;
    t = b_97(t);
    {
      f_148 = t;
      if(((e_148 != NULL) && (e_148 != f_148)))
        _fail(f_148);
      else
        e_148 = f_148;
    }
  }
  t = n_46;
  {
    ATerm h_148 = NULL;
    t = c_97(t);
    {
      h_148 = t;
      if(((g_148 != NULL) && (g_148 != h_148)))
        _fail(h_148);
      else
        g_148 = h_148;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_148), not_null(g_148));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_148 = NULL;
  ATerm o_46;
  o_46 = t;
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 (ATerm t)
        {
          ATerm o_148 = NULL,p_148 = NULL;
          o_148 = t;
          l_148 :
          if(match_cons(o_148, sym_Input_1))
            {
              p_148 = ATgetArgument(o_148, 0);
              if(((n_148 != NULL) && (n_148 != p_148)))
                _fail(p_148);
              else
                n_148 = p_148;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, y_8);
        LocalPopChoice(q_46);
      }
    else
      {
        t = p_46;
        {
          ATerm q_148 = NULL;
          t = term_r_46;
          {
            q_148 = t;
            if(((n_148 != NULL) && (n_148 != q_148)))
              _fail(q_148);
            else
              n_148 = q_148;
          }
        }
      }
  }
  t = o_46;
  {
    ATerm z_8 (ATerm t)
    {
      t = not_null(n_148);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_8);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm u_148 = NULL;
  u_148 = t;
  t = SSL_string_to_int(not_null(u_148));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm c_149 = NULL,d_149 = NULL,e_149 = NULL,f_149 = NULL,g_149 = NULL;
  c_149 = t;
  a_149 :
  if(match_string(c_149, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(c_149) == AT_LIST) && !(ATisEmpty(c_149))))
        {
          d_149 = ATgetFirst((ATermList) c_149);
          e_149 = (ATerm) ATgetNext((ATermList) c_149);
          b_149 :
          if(((ATgetType(e_149) == AT_LIST) && !(ATisEmpty(e_149))))
            {
              f_149 = ATgetFirst((ATermList) e_149);
              g_149 = (ATerm) ATgetNext((ATermList) e_149);
              {
                ATerm k_149 = NULL;
                ATerm s_46;
                s_46 = t;
                {
                  t = not_null(d_149);
                  t = l_0(t);
                }
                t = s_46;
                {
                  ATerm l_149 = NULL;
                  t = not_null(f_149);
                  {
                    t = n_0(t);
                    {
                      l_149 = t;
                      if(((k_149 != NULL) && (k_149 != l_149)))
                        _fail(l_149);
                      else
                        k_149 = l_149;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_149)), not_null(k_149));
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
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 (ATerm t)
      {
        ATerm e_150 = NULL;
        e_150 = t;
        p_149 :
        if(!(match_string(e_150, "-i")))
          {
            if(!(match_string(e_150, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_9 (ATerm t)
      {
        ATerm h_150 = NULL;
        ATerm j_47;
        j_47 = t;
        {
          ATerm f_150 = NULL;
          ATerm g_150 = NULL;
          g_150 = t;
          if(((f_150 != NULL) && (f_150 != g_150)))
            _fail(g_150);
          else
            f_150 = g_150;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_k_47, not_null(f_150));
            t = set_config_0(t);
          }
        }
        t = j_47;
        {
          ATerm i_150 = NULL;
          i_150 = t;
          if(((h_150 != NULL) && (h_150 != i_150)))
            _fail(i_150);
          else
            h_150 = i_150;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_150));
        }
        return(t);
      }
      ATerm c_9 (ATerm t)
      {
        t = term_r_47;
        return(t);
      }
      t = ArgOption_3(t, a_9, b_9, c_9);
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      {
        ATerm s_47 = t;
        int t_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_9 (ATerm t)
            {
              ATerm j_150 = NULL;
              j_150 = t;
              s_149 :
              if(!(match_string(j_150, "-o")))
                {
                  if(!(match_string(j_150, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm f_9 (ATerm t)
            {
              ATerm m_150 = NULL;
              ATerm u_47;
              u_47 = t;
              {
                ATerm k_150 = NULL;
                ATerm l_150 = NULL;
                l_150 = t;
                if(((k_150 != NULL) && (k_150 != l_150)))
                  _fail(l_150);
                else
                  k_150 = l_150;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_47, not_null(k_150));
                  t = set_config_0(t);
                }
              }
              t = u_47;
              {
                ATerm n_150 = NULL;
                n_150 = t;
                if(((m_150 != NULL) && (m_150 != n_150)))
                  _fail(n_150);
                else
                  m_150 = n_150;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_150));
              }
              return(t);
            }
            ATerm g_9 (ATerm t)
            {
              t = term_w_47;
              return(t);
            }
            t = ArgOption_3(t, d_9, f_9, g_9);
            LocalPopChoice(t_47);
          }
        else
          {
            t = s_47;
            {
              ATerm a_48 = t;
              int f_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_9 (ATerm t)
                  {
                    ATerm o_150 = NULL;
                    o_150 = t;
                    v_149 :
                    if(!(match_string(o_150, "-S")))
                      {
                        if(!(match_string(o_150, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_9 (ATerm t)
                  {
                    t = term_g_48;
                    t = set_config_0(t);
                    t = term_h_48;
                    return(t);
                  }
                  ATerm j_9 (ATerm t)
                  {
                    t = term_j_48;
                    return(t);
                  }
                  t = Option_3(t, h_9, i_9, j_9);
                  LocalPopChoice(f_48);
                }
              else
                {
                  t = a_48;
                  {
                    ATerm k_48 = t;
                    int l_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_9 (ATerm t)
                        {
                          ATerm p_150 = NULL;
                          p_150 = t;
                          w_149 :
                          if(!(match_string(p_150, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_9 (ATerm t)
                        {
                          ATerm s_150 = NULL;
                          ATerm m_48;
                          m_48 = t;
                          {
                            ATerm q_150 = NULL;
                            ATerm r_150 = NULL;
                            t = string_to_int_0(t);
                            {
                              r_150 = t;
                              if(((q_150 != NULL) && (q_150 != r_150)))
                                _fail(r_150);
                              else
                                q_150 = r_150;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_d_17, not_null(q_150));
                              t = set_config_0(t);
                            }
                          }
                          t = m_48;
                          {
                            ATerm t_150 = NULL;
                            t_150 = t;
                            if(((s_150 != NULL) && (s_150 != t_150)))
                              _fail(t_150);
                            else
                              s_150 = t_150;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(s_150));
                          }
                          return(t);
                        }
                        ATerm m_9 (ATerm t)
                        {
                          t = term_n_48;
                          return(t);
                        }
                        t = ArgOption_3(t, k_9, l_9, m_9);
                        LocalPopChoice(l_48);
                      }
                    else
                      {
                        t = k_48;
                        {
                          ATerm p_48 = t;
                          int q_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_9 (ATerm t)
                              {
                                ATerm u_150 = NULL;
                                u_150 = t;
                                z_149 :
                                if(!(match_string(u_150, "-k")))
                                  {
                                    if(!(match_string(u_150, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm t_9 (ATerm t)
                              {
                                ATerm r_48;
                                r_48 = t;
                                {
                                  ATerm v_150 = NULL;
                                  ATerm w_150 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    w_150 = t;
                                    if(((v_150 != NULL) && (v_150 != w_150)))
                                      _fail(w_150);
                                    else
                                      v_150 = w_150;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_s_48, not_null(v_150));
                                    t = set_config_0(t);
                                  }
                                }
                                t = r_48;
                                return(t);
                              }
                              ATerm u_9 (ATerm t)
                              {
                                t = term_t_48;
                                return(t);
                              }
                              t = ArgOption_3(t, o_9, t_9, u_9);
                              LocalPopChoice(q_48);
                            }
                          else
                            {
                              t = p_48;
                              {
                                ATerm u_48 = t;
                                int v_48 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_9 (ATerm t)
                                    {
                                      ATerm x_150 = NULL;
                                      x_150 = t;
                                      b_150 :
                                      if(!(match_string(x_150, "-v")))
                                        {
                                          if(!(match_string(x_150, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm a_10 (ATerm t)
                                    {
                                      t = term_b_49;
                                      t = set_config_0(t);
                                      t = term_d_49;
                                      return(t);
                                    }
                                    ATerm f_10 (ATerm t)
                                    {
                                      t = term_e_49;
                                      return(t);
                                    }
                                    t = Option_3(t, y_9, a_10, f_10);
                                    LocalPopChoice(v_48);
                                  }
                                else
                                  {
                                    t = u_48;
                                    {
                                      ATerm f_49 = t;
                                      int j_49 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_10 (ATerm t)
                                          {
                                            ATerm y_150 = NULL;
                                            y_150 = t;
                                            c_150 :
                                            if(!(match_string(y_150, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm l_10 (ATerm t)
                                          {
                                            t = term_l_49;
                                            t = set_config_0(t);
                                            t = term_m_49;
                                            return(t);
                                          }
                                          ATerm r_10 (ATerm t)
                                          {
                                            t = term_n_49;
                                            return(t);
                                          }
                                          t = Option_3(t, g_10, l_10, r_10);
                                          LocalPopChoice(j_49);
                                        }
                                      else
                                        {
                                          t = f_49;
                                          {
                                            ATerm d_11 (ATerm t)
                                            {
                                              ATerm z_150 = NULL;
                                              z_150 = t;
                                              d_150 :
                                              if(!(match_string(z_150, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm e_11 (ATerm t)
                                            {
                                              t = term_u_49;
                                              t = set_config_0(t);
                                              t = term_v_49;
                                              return(t);
                                            }
                                            ATerm f_11 (ATerm t)
                                            {
                                              t = term_w_49;
                                              return(t);
                                            }
                                            t = Option_3(t, d_11, e_11, f_11);
                                          }
                                        }
                                    }
                                  }
                              }
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
  t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATempty, term_b_50));
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
  ATerm i_151 = NULL;
  i_151 = t;
  t = SSL_TicksToSeconds(not_null(i_151));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_151 = NULL,o_151 = NULL,p_151 = NULL;
  n_151 = t;
  m_151 :
  if(match_cons(n_151, sym__2))
    {
      o_151 = ATgetArgument(n_151, 0);
      p_151 = ATgetArgument(n_151, 1);
      {
        ATerm c_50 = t;
        int d_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_151), not_null(p_151));
            LocalPopChoice(d_50);
          }
        else
          {
            t = c_50;
            t = SSL_addr(not_null(o_151), not_null(p_151));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm))
{
  ATerm e_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_95(t);
      LocalPopChoice(f_50);
    }
  else
    {
      t = e_50;
      {
        ATerm w_151 = NULL,x_151 = NULL,y_151 = NULL;
        w_151 = t;
        v_151 :
        if(((ATgetType(w_151) == AT_LIST) && !(ATisEmpty(w_151))))
          {
            x_151 = ATgetFirst((ATermList) w_151);
            y_151 = (ATerm) ATgetNext((ATermList) w_151);
            {
              ATerm b_152 = NULL;
              ATerm c_152 = NULL;
              t = not_null(y_151);
              {
                t = foldr_2(t, m_95, n_95);
                {
                  c_152 = t;
                  if(((b_152 != NULL) && (b_152 != c_152)))
                    _fail(c_152);
                  else
                    b_152 = c_152;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_151), not_null(b_152));
                t = n_95(t);
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
ATerm crush_2 (ATerm t, ATerm k_94 (ATerm), ATerm l_94 (ATerm))
{
  ATerm j_152 = NULL;
  ATerm l_152 = NULL;
  j_152 = t;
  {
    ATerm m_152 = NULL;
    ATerm o_152 = NULL,p_152 = NULL,q_152 = NULL;
    t = not_null(j_152);
    {
      m_152 = t;
      {
        t = SSL_explode_term(not_null(m_152));
        {
          o_152 = t;
          i_152 :
          if(match_cons(o_152, sym__2))
            {
              p_152 = ATgetArgument(o_152, 0);
              q_152 = ATgetArgument(o_152, 1);
              if(((l_152 != NULL) && (l_152 != q_152)))
                _fail(q_152);
              else
                l_152 = q_152;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_152);
      t = foldr_2(t, k_94, l_94);
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
  ATerm w_152 = NULL,x_152 = NULL,y_152 = NULL;
  w_152 = t;
  v_152 :
  if(match_cons(w_152, sym__2))
    {
      x_152 = ATgetArgument(w_152, 0);
      y_152 = ATgetArgument(w_152, 1);
      {
        ATerm g_50;
        g_50 = t;
        {
          ATerm h_50 = t;
          int i_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_152), not_null(y_152));
              LocalPopChoice(i_50);
            }
          else
            {
              t = h_50;
              t = SSL_gtr(not_null(x_152), not_null(y_152));
            }
        }
        t = g_50;
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
  ATerm e_153 = NULL;
  ATerm j_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_153 = NULL,g_153 = NULL,h_153 = NULL;
      f_153 = t;
      d_153 :
      if(match_cons(f_153, sym__2))
        {
          g_153 = ATgetArgument(f_153, 0);
          h_153 = ATgetArgument(f_153, 1);
          {
            if(((e_153 != NULL) && (e_153 != g_153)))
              _fail(g_153);
            else
              e_153 = g_153;
            if(((e_153 != NULL) && (e_153 != h_153)))
              _fail(h_153);
            else
              e_153 = h_153;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(l_50);
    }
  else
    {
      t = j_50;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_102 (ATerm))
{
  ATerm o_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_50;
      q_50 = t;
      {
        ATerm k_153 = NULL;
        ATerm l_153 = NULL;
        t = term_d_17;
        {
          t = get_config_0(t);
          {
            l_153 = t;
            if(((k_153 != NULL) && (k_153 != l_153)))
              _fail(l_153);
            else
              k_153 = l_153;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_153), term_k_23);
          t = geq_0(t);
        }
      }
      t = q_50;
      t = t_102(t);
      LocalPopChoice(p_50);
    }
  else
    {
      t = o_50;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm r_153 = NULL,t_153 = NULL;
    ATerm r_50;
    r_50 = t;
    {
      ATerm s_153 = NULL;
      t = run_time_0(t);
      {
        s_153 = t;
        if(((r_153 != NULL) && (r_153 != s_153)))
          _fail(s_153);
        else
          r_153 = s_153;
      }
    }
    t = r_50;
    {
      ATerm u_153 = NULL;
      t = term_s_50;
      {
        t = get_config_0(t);
        {
          u_153 = t;
          if(((t_153 != NULL) && (t_153 != u_153)))
            _fail(u_153);
          else
            t_153 = u_153;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_50), not_null(r_153)), term_t_50), not_null(t_153)));
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
  ATerm b_154 = NULL;
  b_154 = t;
  a_154 :
  if(match_cons(b_154, sym_Version_0))
    {
      ATerm d_154 = NULL,f_154 = NULL;
      ATerm z_50;
      z_50 = t;
      {
        ATerm e_154 = NULL;
        t = SSLgetAnnotations(not_null(b_154));
        {
          e_154 = t;
          if(((d_154 != NULL) && (d_154 != e_154)))
            _fail(e_154);
          else
            d_154 = e_154;
        }
      }
      t = z_50;
      {
        ATerm g_154 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_154));
        {
          g_154 = t;
          if(((f_154 != NULL) && (f_154 != g_154)))
            _fail(g_154);
          else
            f_154 = g_154;
        }
        t = not_null(f_154);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_100 (ATerm))
{
  ATerm i_11 (ATerm t)
  {
    ATerm e_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_51);
      }
    else
      {
        t = e_51;
        {
          ATerm k_51 = t;
          int l_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_51);
            }
          else
            {
              t = k_51;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, i_11);
  t = z_100(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_154 = NULL;
  l_154 = t;
  t = SSL_table_create(not_null(l_154));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_154 = NULL;
  p_154 = t;
  {
    ATerm m_51;
    m_51 = t;
    {
      t = term_n_51;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_51, term_q_51, not_null(p_154));
          t = table_put_0(t);
        }
      }
    }
    t = m_51;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_154 = NULL;
  t_154 = t;
  t = SSL_table_destroy(not_null(t_154));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_154 = NULL;
  x_154 = t;
  t = SSL_exit(not_null(x_154));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_155 = NULL,c_155 = NULL,d_155 = NULL;
  b_155 = t;
  a_155 :
  if(((ATgetType(b_155) == AT_LIST) && ATisEmpty(b_155)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_155) == AT_LIST) && !(ATisEmpty(b_155))))
        {
          c_155 = ATgetFirst((ATermList) b_155);
          d_155 = (ATerm) ATgetNext((ATermList) b_155);
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
    ATerm g_155 = NULL;
    ATerm j_155 = NULL;
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
          ATerm h_155 = NULL;
          ATerm i_155 = NULL;
          i_155 = t;
          if(((h_155 != NULL) && (h_155 != i_155)))
            _fail(i_155);
          else
            h_155 = i_155;
          t = (ATerm) ATinsert(ATempty, not_null(h_155));
        }
      }
    {
      j_155 = t;
      if(((g_155 != NULL) && (g_155 != j_155)))
        _fail(j_155);
      else
        g_155 = j_155;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_46, not_null(g_155));
      t = printnl_0(t);
    }
  }
  t = r_51;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_104 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm m_155 (ATerm t)
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
        t = Cons_2(t, y_88, m_155);
      }
    return(t);
  }
  t = m_155(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm t_155 = NULL,u_155 = NULL,v_155 = NULL;
  v_155 = t;
  s_155 :
  if(((ATgetType(v_155) == AT_LIST) && !(ATisEmpty(v_155))))
    {
      t_155 = ATgetFirst((ATermList) v_155);
      u_155 = (ATerm) ATgetNext((ATermList) v_155);
      {
        ATerm y_155 = NULL;
        t = not_null(u_155);
        {
          ATerm w_51;
          w_51 = t;
          {
            ATerm z_155 = NULL,b_156 = NULL,d_156 = NULL;
            ATerm x_51;
            x_51 = t;
            {
              ATerm a_156 = NULL;
              t = k_0(t);
              {
                a_156 = t;
                if(((z_155 != NULL) && (z_155 != a_156)))
                  _fail(a_156);
                else
                  z_155 = a_156;
              }
            }
            t = x_51;
            {
              ATerm c_156 = NULL;
              t = not_null(t_155);
              {
                t = i_0(t);
                {
                  c_156 = t;
                  if(((b_156 != NULL) && (b_156 != c_156)))
                    _fail(c_156);
                  else
                    b_156 = c_156;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_155)), not_null(b_156));
                {
                  d_156 = t;
                  if(((y_155 != NULL) && (y_155 != d_156)))
                    _fail(d_156);
                  else
                    y_155 = d_156;
                }
              }
            }
          }
          t = w_51;
          {
            ATerm j_11 (ATerm t)
            {
              t = not_null(y_155);
              return(t);
            }
            t = reverse_acc_2(t, i_0, j_11);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_155) == AT_LIST) && ATisEmpty(v_155)))
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
ATerm short_description_1 (ATerm t, ATerm w_104 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm o_156 = NULL,p_156 = NULL;
  o_156 = t;
  n_156 :
  if(match_cons(o_156, sym_Program_1))
    {
      p_156 = ATgetArgument(o_156, 0);
      {
        ATerm s_156 = NULL,u_156 = NULL;
        ATerm t_156 = NULL;
        t = SSLgetAnnotations(not_null(o_156));
        {
          t_156 = t;
          if(((s_156 != NULL) && (s_156 != t_156)))
            _fail(t_156);
          else
            s_156 = t_156;
        }
        {
          t = not_null(p_156);
          {
            ATerm w_156 = NULL;
            t = t_80(t);
            {
              u_156 = t;
              {
                ATerm x_156 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(u_156)), not_null(s_156));
                {
                  x_156 = t;
                  if(((w_156 != NULL) && (w_156 != x_156)))
                    _fail(x_156);
                  else
                    w_156 = x_156;
                }
                t = not_null(w_156);
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
  ATerm f_157 = NULL;
  ATerm y_51 = t;
  int z_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_157 = NULL;
      t = term_s_50;
      {
        t = get_config_0(t);
        {
          g_157 = t;
          if(((f_157 != NULL) && (f_157 != g_157)))
            _fail(g_157);
          else
            f_157 = g_157;
        }
      }
      LocalPopChoice(z_51);
    }
  else
    {
      t = y_51;
      {
        ATerm l_11 (ATerm t)
        {
          ATerm m_11 (ATerm t)
          {
            ATerm h_157 = NULL;
            h_157 = t;
            if(((f_157 != NULL) && (f_157 != h_157)))
              _fail(h_157);
            else
              f_157 = h_157;
            return(t);
          }
          t = Program_1(t, m_11);
          return(t);
        }
        t = fetch_1(t, l_11);
      }
    }
  {
    t = term_a_52;
    {
      t = echo_0(t);
      {
        t = term_i_52;
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
                ATerm i_157 = NULL;
                ATerm j_157 = NULL;
                j_157 = t;
                if(((i_157 != NULL) && (i_157 != j_157)))
                  _fail(j_157);
                else
                  i_157 = j_157;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_157)), term_j_52);
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
  ATerm k_52;
  k_52 = t;
  {
    ATerm o_157 = NULL;
    ATerm p_157 = NULL;
    p_157 = t;
    if(((o_157 != NULL) && (o_157 != p_157)))
      _fail(p_157);
    else
      o_157 = p_157;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATempty, not_null(o_157)));
      t = printnl_0(t);
    }
  }
  t = k_52;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_99 (ATerm))
{
  ATerm l_52;
  l_52 = t;
  {
    t = y_99(t);
    t = debug_0(t);
  }
  t = l_52;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm w_157 = NULL,x_157 = NULL;
  w_157 = t;
  v_157 :
  if(match_cons(w_157, sym_Undefined_1))
    {
      x_157 = ATgetArgument(w_157, 0);
      {
        ATerm a_158 = NULL,c_158 = NULL;
        ATerm b_158 = NULL;
        t = SSLgetAnnotations(not_null(w_157));
        {
          b_158 = t;
          if(((a_158 != NULL) && (a_158 != b_158)))
            _fail(b_158);
          else
            a_158 = b_158;
        }
        {
          t = not_null(x_157);
          {
            ATerm e_158 = NULL;
            t = u_80(t);
            {
              c_158 = t;
              {
                ATerm f_158 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_158)), not_null(a_158));
                {
                  f_158 = t;
                  if(((e_158 != NULL) && (e_158 != f_158)))
                    _fail(f_158);
                  else
                    e_158 = f_158;
                }
                t = not_null(e_158);
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
ATerm fetch_1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm k_158 (ATerm t)
  {
    ATerm q_52 = t;
    int r_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_89, _id);
        LocalPopChoice(r_52);
      }
    else
      {
        t = q_52;
        t = Cons_2(t, _id, k_158);
      }
    return(t);
  }
  t = k_158(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_103 (ATerm))
{
  t = fetch_1(t, w_103);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm p_158 = NULL;
  p_158 = t;
  o_158 :
  if(match_cons(p_158, sym_Help_0))
    {
      ATerm r_158 = NULL,t_158 = NULL;
      ATerm s_52;
      s_52 = t;
      {
        ATerm s_158 = NULL;
        t = SSLgetAnnotations(not_null(p_158));
        {
          s_158 = t;
          if(((r_158 != NULL) && (r_158 != s_158)))
            _fail(s_158);
          else
            r_158 = s_158;
        }
      }
      t = s_52;
      {
        ATerm u_158 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(r_158));
        {
          u_158 = t;
          if(((t_158 != NULL) && (t_158 != u_158)))
            _fail(u_158);
          else
            t_158 = u_158;
        }
        t = not_null(t_158);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm t_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_81(t);
      LocalPopChoice(u_52);
    }
  else
    {
      t = t_52;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm a_159 = NULL,b_159 = NULL,c_159 = NULL;
  a_159 = t;
  z_158 :
  if(match_cons(a_159, sym__2))
    {
      b_159 = ATgetArgument(a_159, 0);
      c_159 = ATgetArgument(a_159, 1);
      t = SSL_table_get(not_null(b_159), not_null(c_159));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_159 = NULL,k_159 = NULL,l_159 = NULL,m_159 = NULL;
  j_159 = t;
  i_159 :
  if(match_cons(j_159, sym__3))
    {
      k_159 = ATgetArgument(j_159, 0);
      l_159 = ATgetArgument(j_159, 1);
      m_159 = ATgetArgument(j_159, 2);
      {
        ATerm v_52;
        v_52 = t;
        {
          ATerm q_159 = NULL;
          ATerm r_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_159), not_null(l_159));
          {
            ATerm e_53 = t;
            int f_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_53);
              }
            else
              {
                t = e_53;
                t = (ATerm) ATempty;
              }
            {
              r_159 = t;
              if(((q_159 != NULL) && (q_159 != r_159)))
                _fail(r_159);
              else
                q_159 = r_159;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_159), not_null(l_159), (ATerm) ATinsert(CheckATermList(not_null(q_159)), not_null(m_159)));
            t = table_put_0(t);
          }
        }
        t = v_52;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_105 (ATerm))
{
  ATerm v_159 = NULL;
  ATerm w_159 = NULL;
  t = term_k_39;
  {
    t = b_105(t);
    {
      w_159 = t;
      if(((v_159 != NULL) && (v_159 != w_159)))
        _fail(w_159);
      else
        v_159 = w_159;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_52, term_h_52, not_null(v_159));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm c_160 = NULL,d_160 = NULL,e_160 = NULL;
  c_160 = t;
  b_160 :
  if(match_string(c_160, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(c_160) == AT_LIST) && !(ATisEmpty(c_160))))
        {
          d_160 = ATgetFirst((ATermList) c_160);
          e_160 = (ATerm) ATgetNext((ATermList) c_160);
          {
            ATerm h_160 = NULL;
            ATerm g_53;
            g_53 = t;
            {
              t = not_null(d_160);
              t = a_0(t);
            }
            t = g_53;
            {
              ATerm i_160 = NULL;
              t = term_k_39;
              {
                t = d_0(t);
                {
                  i_160 = t;
                  if(((h_160 != NULL) && (h_160 != i_160)))
                    _fail(i_160);
                  else
                    h_160 = i_160;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_160)), not_null(h_160));
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
    ATerm n_160 = NULL;
    n_160 = t;
    m_160 :
    if(!(match_string(n_160, "--help")))
      {
        if(!(match_string(n_160, "-h")))
          {
            if(!(match_string(n_160, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    t = term_i_53;
    {
      t = set_config_0(t);
      t = term_j_53;
    }
    return(t);
  }
  ATerm r_11 (ATerm t)
  {
    t = term_k_53;
    return(t);
  }
  t = Option_3(t, p_11, q_11, r_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm q_160 = NULL,r_160 = NULL,s_160 = NULL;
  q_160 = t;
  p_160 :
  if(((ATgetType(q_160) == AT_LIST) && !(ATisEmpty(q_160))))
    {
      r_160 = ATgetFirst((ATermList) q_160);
      s_160 = (ATerm) ATgetNext((ATermList) q_160);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_160)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(r_160)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm c_161 = NULL,d_161 = NULL,e_161 = NULL;
  c_161 = t;
  b_161 :
  if(((ATgetType(c_161) == AT_LIST) && !(ATisEmpty(c_161))))
    {
      d_161 = ATgetFirst((ATermList) c_161);
      e_161 = (ATerm) ATgetNext((ATermList) c_161);
      {
        ATerm i_161 = NULL,k_161 = NULL;
        ATerm j_161 = NULL;
        t = SSLgetAnnotations(not_null(c_161));
        {
          j_161 = t;
          if(((i_161 != NULL) && (i_161 != j_161)))
            _fail(j_161);
          else
            i_161 = j_161;
        }
        {
          t = not_null(d_161);
          {
            ATerm m_161 = NULL;
            t = z_70(t);
            {
              k_161 = t;
              {
                t = not_null(e_161);
                {
                  ATerm o_161 = NULL;
                  t = a_71(t);
                  {
                    m_161 = t;
                    {
                      ATerm p_161 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_161)), not_null(k_161)), not_null(i_161));
                      {
                        p_161 = t;
                        if(((o_161 != NULL) && (o_161 != p_161)))
                          _fail(p_161);
                        else
                          o_161 = p_161;
                      }
                      t = not_null(o_161);
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
  ATerm z_161 = NULL;
  z_161 = t;
  y_161 :
  if(((ATgetType(z_161) == AT_LIST) && ATisEmpty(z_161)))
    {
      {
        ATerm b_162 = NULL,d_162 = NULL;
        ATerm l_53;
        l_53 = t;
        {
          ATerm c_162 = NULL;
          t = SSLgetAnnotations(not_null(z_161));
          {
            c_162 = t;
            if(((b_162 != NULL) && (b_162 != c_162)))
              _fail(c_162);
            else
              b_162 = c_162;
          }
        }
        t = l_53;
        {
          ATerm e_162 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_162));
          {
            e_162 = t;
            if(((d_162 != NULL) && (d_162 != e_162)))
              _fail(e_162);
            else
              d_162 = e_162;
          }
          t = not_null(d_162);
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
  ATerm k_162 = NULL,l_162 = NULL,m_162 = NULL;
  k_162 = t;
  j_162 :
  if(match_cons(k_162, sym__2))
    {
      l_162 = ATgetArgument(k_162, 0);
      m_162 = ATgetArgument(k_162, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_45, not_null(l_162), not_null(m_162));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_104 (ATerm))
{
  ATerm m_53;
  m_53 = t;
  {
    ATerm n_53 = t;
    int o_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_53;
        t = z_104(t);
        LocalPopChoice(o_53);
      }
    else
      {
        t = n_53;
        {
        }
      }
  }
  t = m_53;
  {
    ATerm s_11 (ATerm t)
    {
      ATerm v_162 = NULL;
      ATerm q_53;
      q_53 = t;
      {
        ATerm t_162 = NULL;
        ATerm u_162 = NULL;
        u_162 = t;
        if(((t_162 != NULL) && (t_162 != u_162)))
          _fail(u_162);
        else
          t_162 = u_162;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_50, not_null(t_162));
          t = set_config_0(t);
        }
      }
      t = q_53;
      {
        ATerm w_162 = NULL;
        w_162 = t;
        if(((v_162 != NULL) && (v_162 != w_162)))
          _fail(w_162);
        else
          v_162 = w_162;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_162));
      }
      return(t);
    }
    ATerm t_11 (ATerm t)
    {
      ATerm r_53 = t;
      int s_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_53 = t;
          int u_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_53);
            }
          else
            {
              t = t_53;
              {
                t = z_104(t);
                t = Cons_2(t, _id, t_11);
              }
            }
          LocalPopChoice(s_53);
        }
      else
        {
          t = r_53;
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
  ATerm d_163 = NULL,e_163 = NULL,f_163 = NULL;
  ATerm v_53;
  v_53 = t;
  {
    ATerm g_163 = NULL,h_163 = NULL,i_163 = NULL,j_163 = NULL;
    g_163 = t;
    c_163 :
    if(match_cons(g_163, sym__3))
      {
        h_163 = ATgetArgument(g_163, 0);
        i_163 = ATgetArgument(g_163, 1);
        j_163 = ATgetArgument(g_163, 2);
        {
          if(((d_163 != NULL) && (d_163 != h_163)))
            _fail(h_163);
          else
            d_163 = h_163;
          {
            if(((e_163 != NULL) && (e_163 != i_163)))
              _fail(i_163);
            else
              e_163 = i_163;
            {
              if(((f_163 != NULL) && (f_163 != j_163)))
                _fail(j_163);
              else
                f_163 = j_163;
              t = SSL_table_put(not_null(d_163), not_null(e_163), not_null(f_163));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_53;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_104 (ATerm))
{
  ATerm m_163 = NULL;
  ATerm w_53;
  w_53 = t;
  {
    t = term_x_53;
    t = table_put_0(t);
  }
  t = w_53;
  {
    ATerm u_11 (ATerm t)
    {
      ATerm y_53 = t;
      int z_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_104(t);
          LocalPopChoice(z_53);
        }
      else
        {
          t = y_53;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_11);
    {
      ATerm a_54 = t;
      int b_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_54;
          e_54 = t;
          {
            ATerm f_54 = t;
            int g_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_h_53;
                t = get_config_0(t);
                LocalPopChoice(g_54);
              }
            else
              {
                t = f_54;
                t = fetch_1(t, Help_0);
              }
          }
          t = e_54;
          {
            t = system_usage_0(t);
            {
              t = term_k_25;
              t = exit_0(t);
            }
          }
          LocalPopChoice(b_54);
        }
      else
        {
          t = a_54;
          {
            ATerm h_54 = t;
            int i_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_11 (ATerm t)
                {
                  ATerm x_11 (ATerm t)
                  {
                    ATerm n_163 = NULL;
                    n_163 = t;
                    if(((m_163 != NULL) && (m_163 != n_163)))
                      _fail(n_163);
                    else
                      m_163 = n_163;
                    return(t);
                  }
                  t = Undefined_1(t, x_11);
                  return(t);
                }
                t = fetch_1(t, v_11);
                {
                  ATerm y_11 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_163)), term_j_54);
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
                LocalPopChoice(i_54);
              }
            else
              {
                t = h_54;
                {
                }
              }
          }
        }
      {
        ATerm k_54;
        k_54 = t;
        {
          t = term_g_52;
          t = table_destroy_0(t);
        }
        t = k_54;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm))
{
  t = parse_options_1(t, f_101);
  {
    t = store_options_0(t);
    {
      t = h_101(t);
      {
        ATerm l_54 = t;
        int m_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_101);
            LocalPopChoice(m_54);
          }
        else
          {
            t = l_54;
            {
              ATerm n_54 = t;
              int o_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_101(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_54);
                }
              else
                {
                  t = n_54;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm))
{
  ATerm z_11 (ATerm t)
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_101(t);
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_12 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, w_101);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, z_11, y_101, z_101, b_12);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm))
{
  ATerm c_12 (ATerm t)
  {
    ATerm d_12 (ATerm t)
    {
      ATerm r_54;
      r_54 = t;
      {
        ATerm q_163 = NULL;
        ATerm r_163 = NULL;
        t = term_s_50;
        {
          t = get_config_0(t);
          {
            r_163 = t;
            if(((q_163 != NULL) && (q_163 != r_163)))
              _fail(r_163);
            else
              q_163 = r_163;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_22, (ATerm) ATinsert(ATempty, not_null(q_163)));
          t = printnl_0(t);
        }
      }
      t = r_54;
      return(t);
    }
    t = if_verbose2_1(t, d_12);
    return(t);
  }
  t = iowrap_4(t, q_101, r_101, s_101, c_12);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_101 (ATerm), ATerm p_101 (ATerm))
{
  t = iowrap_3(t, o_101, p_101, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm f_12 (ATerm t)
  {
    t = _2(t, _id, l_101);
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
